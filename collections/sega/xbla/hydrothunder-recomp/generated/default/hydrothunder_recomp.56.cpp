#include "hydrothunder_funcs.56.h"

DEFINE_REX_FUNC(sub_821228E0) {
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
	ctx.lr = 0x821228E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82122910
	if (!ctx.cr6.gt) goto loc_82122910;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x82122910;
	sub_822F6020(ctx, base);
loc_82122910:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r25,28
	r25.s64 = 28;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r25
	ctx.r11.u64 = uint32_t((r25.s32 && !(ctx.r11.s32 == INT32_MIN && r25.s32 == -1)) ? ctx.r11.s32 / r25.s32 : 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x821229e0
	if (!ctx.cr6.lt) goto loc_821229E0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82122948
	if (ctx.cr6.eq) goto loc_82122948;
	// mulli r3,r26,28
	ctx.r3.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(28));
	// bl 0x822f6280
	ctx.lr = 0x82122940;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821229e8
	if (ctx.cr0.eq) goto loc_821229E8;
loc_82122948:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82122974
	goto loc_82122974;
loc_82122958:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8212296c
	if (ctx.cr6.eq) goto loc_8212296C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120670
	ctx.lr = 0x8212296C;
	sub_82120670(ctx, base);
loc_8212296C:
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
loc_82122974:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x82122958
	if (!ctx.cr6.eq) goto loc_82122958;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// divw r27,r10,r25
	r27.u64 = uint32_t((r25.s32 && !(ctx.r10.s32 == INT32_MIN && r25.s32 == -1)) ? ctx.r10.s32 / r25.s32 : 0);
	// beq cr6,0x821229c4
	if (ctx.cr6.eq) goto loc_821229C4;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x821229bc
	if (ctx.cr6.eq) goto loc_821229BC;
loc_821229A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821229B0;
	sub_82120AC0(ctx, base);
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x821229a0
	if (!ctx.cr6.eq) goto loc_821229A0;
loc_821229BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x821229C4;
	sub_8269CE98(ctx, base);
loc_821229C4:
	// mulli r11,r26,28
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(28));
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// mulli r10,r27,28
	ctx.r10.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_821229E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_821229E8:
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
	ctx.lr = 0x82122A04;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82130218) {
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
	ctx.lr = 0x8213023C;
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
	ctx.lr = 0x82130254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6064(r10)
	REX_STORE_U32(ctx.r10.u32 + 6064, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82132AD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82132AE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// sth r5,166(r1)
	REX_STORE_U16(ctx.r1.u32 + 166, ctx.r5.u16);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82132b38
	if (!ctx.cr0.eq) goto loc_82132B38;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
loc_82132B10:
	// lhz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82132b24
	if (!ctx.cr6.lt) goto loc_82132B24;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82132b2c
	goto loc_82132B2C;
loc_82132B24:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82132B2C:
	// lbz r7,21(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x82132b10
	if (ctx.cr0.eq) goto loc_82132B10;
loc_82132B38:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82132b60
	if (ctx.cr6.eq) goto loc_82132B60;
	// lhz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82132b60
	if (ctx.cr6.lt) goto loc_82132B60;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82132b68
	goto loc_82132B68;
loc_82132B60:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82132B68:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82132b7c
	if (ctx.cr6.eq) goto loc_82132B7C;
loc_82132B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82132be0
	goto loc_82132BE0;
loc_82132B7C:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82132B84;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82132ba4
	if (ctx.cr0.eq) goto loc_82132BA4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-20484
	ctx.r11.s64 = ctx.r11.s64 + -20484;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82132ba8
	goto loc_82132BA8;
loc_82132BA4:
	// li r31,0
	r31.s64 = 0;
loc_82132BA8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821727f8
	ctx.lr = 0x82132BB4;
	sub_821727F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82132bc8
	if (!ctx.cr0.eq) goto loc_82132BC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82132BC4;
	sub_8269CE98(ctx, base);
	// b 0x82132b74
	goto loc_82132B74;
loc_82132BC8:
	// addi r4,r1,166
	ctx.r4.s64 = ctx.r1.s64 + 166;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82132c90
	ctx.lr = 0x82132BD4;
	sub_82132C90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_82132BE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8213A9B0) {
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
	ctx.lr = 0x8213A9D4;
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
	ctx.lr = 0x8213A9EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6128(r10)
	REX_STORE_U32(ctx.r10.u32 + 6128, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8213D398) {
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
	// addi r11,r11,-17520
	ctx.r11.s64 = ctx.r11.s64 + -17520;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8213d3c4
	if (ctx.cr0.eq) goto loc_8213D3C4;
	// bl 0x8269ce98
	ctx.lr = 0x8213D3C4;
	sub_8269CE98(ctx, base);
loc_8213D3C4:
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

DEFINE_REX_FUNC(sub_8213FBD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,25(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213fbe8
	if (ctx.cr0.eq) goto loc_8213FBE8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8213fc54
	goto loc_8213FC54;
loc_8213FBE8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,25(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8213fc34
	if (!ctx.cr0.eq) goto loc_8213FC34;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8213fc08
	goto loc_8213FC08;
loc_8213FC00:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8213FC08:
	// lbz r9,25(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8213fc00
	if (ctx.cr0.eq) goto loc_8213FC00;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8213FC1C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213fc44
	if (!ctx.cr6.eq) goto loc_8213FC44;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8213FC34:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213fc1c
	if (ctx.cr0.eq) goto loc_8213FC1C;
loc_8213FC44:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,25(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_8213FC54:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82145980) {
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
	// bge cr6,0x821459b8
	if (!ctx.cr6.lt) goto loc_821459B8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x821459bc
	if (!ctx.cr6.gt) goto loc_821459BC;
loc_821459B8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821459BC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82145a04
	if (ctx.cr0.eq) goto loc_82145A04;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// bne cr6,0x821459e8
	if (!ctx.cr6.eq) goto loc_821459E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82145a58
	ctx.lr = 0x821459E8;
	sub_82145A58(ctx, base);
loc_821459E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82145a30
	if (ctx.cr6.eq) goto loc_82145A30;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82145a2c
	goto loc_82145A2C;
loc_82145A04:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82145a1c
	if (!ctx.cr6.eq) goto loc_82145A1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82145a58
	ctx.lr = 0x82145A1C;
	sub_82145A58(ctx, base);
loc_82145A1C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82145a30
	if (ctx.cr6.eq) goto loc_82145A30;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82145A2C:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82145A30:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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

DEFINE_REX_FUNC(sub_8214BCD0) {
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
	ctx.lr = 0x8214BCF4;
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
	ctx.lr = 0x8214BD0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6172(r10)
	REX_STORE_U32(ctx.r10.u32 + 6172, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8214E400) {
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
	ctx.lr = 0x8214E424;
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
	ctx.lr = 0x8214E43C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6176(r10)
	REX_STORE_U32(ctx.r10.u32 + 6176, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821509A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,89(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 89);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821509c8
	if (!ctx.cr0.eq) goto loc_821509C8;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_821509C8:
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
	// bne cr6,0x821509e8
	if (!ctx.cr6.eq) goto loc_821509E8;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82150a04
	goto loc_82150A04;
loc_821509E8:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82150a00
	if (!ctx.cr6.eq) goto loc_82150A00;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82150a04
	goto loc_82150A04;
loc_82150A00:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82150A04:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82153080) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// addi r4,r11,-10512
	ctx.r4.s64 = ctx.r11.s64 + -10512;
	// bl 0x8215f338
	ctx.lr = 0x8215309C;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-10480
	ctx.r4.s64 = ctx.r11.s64 + -10480;
	// bl 0x8215f338
	ctx.lr = 0x821530A8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821530AC;
	sub_8215FA30(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821530bc
	if (ctx.cr6.lt) goto loc_821530BC;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_821530BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821556E0) {
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
	// bl 0x82155fd0
	ctx.lr = 0x821556F4;
	sub_82155FD0(ctx, base);
	// lwz r11,10012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10012);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215571c
	if (ctx.cr6.eq) goto loc_8215571C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-9312
	ctx.r4.s64 = ctx.r11.s64 + -9312;
	// addi r3,r10,-9096
	ctx.r3.s64 = ctx.r10.s64 + -9096;
	// li r5,417
	ctx.r5.s64 = 417;
	// bl 0x821231d0
	ctx.lr = 0x8215571C;
	sub_821231D0(ctx, base);
loc_8215571C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
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

DEFINE_REX_FUNC(sub_82157AB8) {
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
	// lwz r11,700(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 700);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82157b10
	if (!ctx.cr6.lt) goto loc_82157B10;
	// lwz r3,704(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82157af0
	if (ctx.cr6.eq) goto loc_82157AF0;
	// bl 0x8269d1b8
	ctx.lr = 0x82157AF0;
	sub_8269D1B8(ctx, base);
loc_82157AF0:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d1d0
	ctx.lr = 0x82157AFC;
	sub_8269D1D0(ctx, base);
	// stw r3,704(r31)
	REX_STORE_U32(r31.u32 + 704, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82157b24
	if (ctx.cr0.eq) goto loc_82157B24;
	// stw r30,700(r31)
	REX_STORE_U32(r31.u32 + 700, r30.u32);
	// stw r30,696(r31)
	REX_STORE_U32(r31.u32 + 696, r30.u32);
loc_82157B10:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,704(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 704);
	// li r4,187
	ctx.r4.s64 = 187;
	// bl 0x826a2e60
	ctx.lr = 0x82157B20;
	sub_826A2E60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82157B24:
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

DEFINE_REX_FUNC(sub_8215BB90) {
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
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215bbf4
	if (ctx.cr6.eq) goto loc_8215BBF4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8215bbc4
	if (!ctx.cr6.eq) goto loc_8215BBC4;
	// cmpdi cr6,r5,0
	ctx.cr6.compare<int64_t>(ctx.r5.s64, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x8215bbc8
	if (ctx.cr6.eq) goto loc_8215BBC8;
loc_8215BBC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215BBC8:
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8269e8f8
	ctx.lr = 0x8215BBD4;
	sub_8269E8F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215bbf4
	if (!ctx.cr0.eq) goto loc_8215BBF4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215c018
	ctx.lr = 0x8215BBEC;
	sub_8215C018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8215bbf8
	goto loc_8215BBF8;
loc_8215BBF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215BBF8:
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

DEFINE_REX_FUNC(sub_8215E198) {
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
	ctx.lr = 0x8215E1A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r5,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8215e270
	if (!ctx.cr6.eq) goto loc_8215E270;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215e270
	if (!ctx.cr6.eq) goto loc_8215E270;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r30
	r31.u64 = r30.u64;
	// lbz r11,65(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 65);
	// b 0x8215e218
	goto loc_8215E218;
loc_8215E1DC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8212aef0
	ctx.lr = 0x8215E1E8;
	sub_8212AEF0(ctx, base);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// addi r3,r28,32
	ctx.r3.s64 = r28.s64 + 32;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8215f0f0
	ctx.lr = 0x8215E1F8;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8215E208;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8215E210;
	sub_8269CE98(ctx, base);
	// lbz r11,65(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 65);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8215E218:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215e1dc
	if (ctx.cr0.eq) goto loc_8215E1DC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x8215e27c
	goto loc_8215E27C;
loc_8215E250:
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8212a9b0
	ctx.lr = 0x8215E25C;
	sub_8212A9B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215e288
	ctx.lr = 0x8215E26C;
	sub_8215E288(ctx, base);
	// lwz r5,180(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_8215E270:
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, ctx.xer);
	// bne cr6,0x8215e250
	if (!ctx.cr6.eq) goto loc_8215E250;
	// stw r5,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r5.u32);
loc_8215E27C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82167538) {
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
	ctx.lr = 0x82167540;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f31,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	f31.f64 = double(temp.f32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-21096
	ctx.r4.s64 = ctx.r11.s64 + -21096;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x82167560;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82167568;
	sub_8215F0F0(ctx, base);
	// li r31,2
	r31.s64 = 2;
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-21088
	ctx.r4.s64 = ctx.r11.s64 + -21088;
	// lfs f31,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f31.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x82167588;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82167590;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-21080
	ctx.r4.s64 = ctx.r11.s64 + -21080;
	// lfs f31,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	f31.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x821675AC;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821675B4;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8216B740) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-26856
	r30.s64 = ctx.r11.s64 + -26856;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8216b784
	if (!ctx.cr6.gt) goto loc_8216B784;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8216b784
	if (!ctx.cr6.eq) goto loc_8216B784;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8216b7a0
	goto loc_8216B7A0;
loc_8216B784:
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
	ctx.lr = 0x8216B79C;
	sub_821231D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216B7A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216b7f8
	if (ctx.cr0.eq) goto loc_8216B7F8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8216B7C8:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8216b7c8
	if (!ctx.cr6.eq) goto loc_8216B7C8;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8216B7F8:
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

DEFINE_REX_FUNC(sub_82171B00) {
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
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x823eedb8
	ctx.lr = 0x82171B24;
	sub_823EEDB8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
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

DEFINE_REX_FUNC(sub_821736F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82173700;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8217383c
	if (ctx.cr6.eq) goto loc_8217383C;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
	// srawi. r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bne 0x82173798
	if (!ctx.cr0.eq) goto loc_82173798;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8217383c
	if (ctx.cr6.eq) goto loc_8217383C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82173774
	if (ctx.cr6.eq) goto loc_82173774;
loc_82173744:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82173744
	if (!ctx.cr6.eq) goto loc_82173744;
loc_82173774:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82173838
	if (ctx.cr6.eq) goto loc_82173838;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82173788:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82173788
	if (!ctx.cr6.eq) goto loc_82173788;
	// b 0x82173838
	goto loc_82173838;
loc_82173798:
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821737f8
	if (!ctx.cr6.gt) goto loc_821737F8;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x821738c4
	if (ctx.cr6.gt) goto loc_821738C4;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x82173870
	goto loc_82173870;
loc_821737D0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_821737F8:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821737d0
	if (!ctx.cr6.eq) goto loc_821737D0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8217381c
	if (ctx.cr6.eq) goto loc_8217381C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82173810:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82173810
	if (!ctx.cr6.eq) goto loc_82173810;
loc_8217381C:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82173838:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8217383C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82173848:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
loc_82173870:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82173848
	if (!ctx.cr6.eq) goto loc_82173848;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x821738b4
	goto loc_821738B4;
loc_82173884:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821738ac
	if (ctx.cr6.eq) goto loc_821738AC;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
loc_821738AC:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_821738B4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82173884
	if (!ctx.cr6.eq) goto loc_82173884;
loc_821738BC:
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x8217383c
	goto loc_8217383C;
loc_821738C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821738f0
	if (ctx.cr6.eq) goto loc_821738F0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x821738e8
	if (ctx.cr6.eq) goto loc_821738E8;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_821738DC:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821738dc
	if (!ctx.cr6.eq) goto loc_821738DC;
loc_821738E8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821738F0;
	sub_8269CE98(ctx, base);
loc_821738F0:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// srawi. r30,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r30.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82173964
	if (ctx.cr0.eq) goto loc_82173964;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82173930
	if (!ctx.cr6.gt) goto loc_82173930;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x82173930;
	sub_822F6020(ctx, base);
loc_82173930:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8217394c
	if (ctx.cr6.eq) goto loc_8217394C;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822f6280
	ctx.lr = 0x82173944;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821739b8
	if (ctx.cr0.eq) goto loc_821739B8;
loc_8217394C:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r29,1
	r29.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82173964:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217383c
	if (ctx.cr0.eq) goto loc_8217383C;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x821739ac
	goto loc_821739AC;
loc_8217397C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821739a4
	if (ctx.cr6.eq) goto loc_821739A4;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
loc_821739A4:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_821739AC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8217397c
	if (!ctx.cr6.eq) goto loc_8217397C;
	// b 0x821738bc
	goto loc_821738BC;
loc_821739B8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x821739D0;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8218D2D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2ca8
	ctx.lr = 0x8218D2E0;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8218d480
	if (!ctx.cr6.gt) goto loc_8218D480;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f6,15048(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 15048);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,920(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 920);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
loc_8218D320:
	// lwz r10,100(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// lwz r5,104(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8218d45c
	if (!ctx.cr6.eq) goto loc_8218D45C;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f12,f10,f10
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f11,f9,f9,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f12.f64)));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x8218d45c
	if (!ctx.cr6.lt) goto loc_8218D45C;
	// lfs f13,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f13,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f5
	ctx.cr6.compare(ctx.f11.f64, ctx.f5.f64);
	// ble cr6,0x8218d450
	if (!ctx.cr6.gt) goto loc_8218D450;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f5,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,108(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f30,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f29.f64 = double(temp.f32);
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fsubs f28,f4,f5
	f28.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fsubs f4,f4,f5
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fmuls f3,f2,f6
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fsubs f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// fdivs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fdivs f4,f0,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fdivs f5,f5,f28
	ctx.f5.f64 = double(float(ctx.f5.f64 / f28.f64));
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fsqrts f9,f5
	ctx.f9.f64 = double(float(sqrt(ctx.f5.f64)));
	// fdivs f5,f4,f9
	ctx.f5.f64 = double(float(ctx.f4.f64 / ctx.f9.f64));
	// fmadds f12,f13,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f12.f64)));
	// fsubs f28,f0,f9
	f28.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f9,f5,f7
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f5,f4,f4
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmuls f2,f11,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f9,f13,f13,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f9,f11,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f9.f64)));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f5,f9,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f5,f1
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fadds f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fmuls f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 * f28.f64));
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fmuls f10,f9,f28
	ctx.f10.f64 = double(float(ctx.f9.f64 * f28.f64));
	// fadds f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 + ctx.f11.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f13,f29,f13
	ctx.f13.f64 = double(float(f29.f64 + ctx.f13.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f10,f31,f10
	ctx.f10.f64 = double(float(f31.f64 + ctx.f10.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8218D450:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8218D45C:
	// lwz r10,96(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8218d320
	if (ctx.cr6.lt) goto loc_8218D320;
loc_8218D480:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cf4
	ctx.lr = 0x8218D488;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219A5B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8219A5C0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8219a5fc
	goto loc_8219A5FC;
loc_8219A5D8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8219A5E4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219a5f4
	if (!ctx.cr0.lt) goto loc_8219A5F4;
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8219a5fc
	goto loc_8219A5FC;
loc_8219A5F4:
	// mr r31,r30
	r31.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8219A5FC:
	// lbz r11,73(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219a5d8
	if (ctx.cr0.eq) goto loc_8219A5D8;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8219a628
	if (ctx.cr6.eq) goto loc_8219A628;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x8219A620;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219a6a4
	if (!ctx.cr0.lt) goto loc_8219A6A4;
loc_8219A628:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8219A638;
	sub_82120AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120d70
	ctx.lr = 0x8219A644;
	sub_82120D70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82120d70
	ctx.lr = 0x8219A650;
	sub_82120D70(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x8219aaf8
	ctx.lr = 0x8219A66C;
	sub_8219AAF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x8219A684;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8219A694;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8219A6A4;
	sub_82120AC0(ctx, base);
loc_8219A6A4:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8219FA08) {
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
	ctx.lr = 0x8219FA10;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82197018
	ctx.lr = 0x8219FA28;
	sub_82197018(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,84
	r29.s64 = r31.s64 + 84;
	// addi r11,r11,-28652
	ctx.r11.s64 = ctx.r11.s64 + -28652;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8219FA48;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r30,116(r31)
	REX_STORE_U8(r31.u32 + 116, r30.u8);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r8,r8,-14036
	ctx.r8.s64 = ctx.r8.s64 + -14036;
	// lfs f13,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// li r3,104
	ctx.r3.s64 = 104;
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,120
	ctx.r10.s64 = r31.s64 + 120;
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stw r8,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r8.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// addi r26,r31,112
	r26.s64 = r31.s64 + 112;
	// stb r11,147(r31)
	REX_STORE_U8(r31.u32 + 147, ctx.r11.u8);
	// addi r24,r31,116
	r24.s64 = r31.s64 + 116;
	// stb r11,146(r31)
	REX_STORE_U8(r31.u32 + 146, ctx.r11.u8);
	// stb r11,145(r31)
	REX_STORE_U8(r31.u32 + 145, ctx.r11.u8);
	// stb r11,144(r31)
	REX_STORE_U8(r31.u32 + 144, ctx.r11.u8);
	// stb r30,148(r31)
	REX_STORE_U8(r31.u32 + 148, r30.u8);
	// bl 0x822f6280
	ctx.lr = 0x8219FAB0;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8219faf8
	if (ctx.cr0.eq) goto loc_8219FAF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-28692
	ctx.r4.s64 = ctx.r11.s64 + -28692;
	// bl 0x82120600
	ctx.lr = 0x8219FAC8;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,-15376(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15376);
	// bl 0x82120600
	ctx.lr = 0x8219FAD8;
	sub_82120600(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r27,3
	r27.s64 = 3;
	// bl 0x821d58c8
	ctx.lr = 0x8219FAF0;
	sub_821D58C8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219fafc
	goto loc_8219FAFC;
loc_8219FAF8:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8219FAFC:
	// addi r25,r31,28
	r25.s64 = r31.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82145710
	ctx.lr = 0x8219FB0C;
	sub_82145710(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x8219FB18;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8219FB20;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-29688
	r28.s64 = ctx.r11.s64 + -29688;
	// beq 0x8219fb4c
	if (ctx.cr0.eq) goto loc_8219FB4C;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-720
	ctx.r10.s64 = ctx.r10.s64 + -720;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8219fb50
	goto loc_8219FB50;
loc_8219FB4C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8219FB50:
	// rlwinm. r10,r27,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r30,33(r29)
	REX_STORE_U8(r29.u32 + 33, r30.u8);
	// beq 0x8219fb74
	if (ctx.cr0.eq) goto loc_8219FB74;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r27,r27,0,31,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8219FB74;
	sub_82120AC0(ctx, base);
loc_8219FB74:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219fb90
	if (ctx.cr0.eq) goto loc_8219FB90;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r27,r27,0,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8219FB90;
	sub_82120AC0(ctx, base);
loc_8219FB90:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8219FB98;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219fbcc
	if (ctx.cr0.eq) goto loc_8219FBCC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28680
	ctx.r4.s64 = ctx.r11.s64 + -28680;
	// bl 0x82120600
	ctx.lr = 0x8219FBB0;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x8219FBC4;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219fbd0
	goto loc_8219FBD0;
loc_8219FBCC:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8219FBD0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82145710
	ctx.lr = 0x8219FBDC;
	sub_82145710(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x8219FBE8;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8219FBF0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219fc14
	if (ctx.cr0.eq) goto loc_8219FC14;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-720
	ctx.r10.s64 = ctx.r10.s64 + -720;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8219fc18
	goto loc_8219FC18;
loc_8219FC14:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8219FC18:
	// rlwinm. r10,r27,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r30,33(r29)
	REX_STORE_U8(r29.u32 + 33, r30.u8);
	// beq 0x8219fc3c
	if (ctx.cr0.eq) goto loc_8219FC3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r27,r27,0,30,28
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8219FC3C;
	sub_82120AC0(ctx, base);
loc_8219FC3C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x8219FC44;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8219fc78
	if (ctx.cr0.eq) goto loc_8219FC78;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-29672
	ctx.r4.s64 = ctx.r11.s64 + -29672;
	// bl 0x82120600
	ctx.lr = 0x8219FC5C;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// bl 0x82191600
	ctx.lr = 0x8219FC70;
	sub_82191600(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8219fc7c
	goto loc_8219FC7C;
loc_8219FC78:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8219FC7C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82145710
	ctx.lr = 0x8219FC88;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219fca0
	if (ctx.cr0.eq) goto loc_8219FCA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8219FCA0;
	sub_82120AC0(ctx, base);
loc_8219FCA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821B12D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f11,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f10,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f10,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f10,f8,f13,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f0,f6,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f13,f7,f12,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f0,f5,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f0.f64)));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fdivs f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x821b1368
	if (ctx.cr6.lt) goto loc_821B1368;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B1368:
	// fsqrts f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,232(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B6FF8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B7698) {
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
	ctx.lr = 0x821B76A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// li r30,0
	r30.s64 = 0;
	// lfs f0,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f13,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f12,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r30.u64);
	// li r3,208
	ctx.r3.s64 = 208;
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r30.u64);
	// std r30,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r30.u64);
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// lfs f11,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// std r30,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r30.u64);
	// lfs f10,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// std r30,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r30.u64);
	// lfs f9,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// std r30,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, r30.u64);
	// stw r30,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r30.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r28,6168(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 6168);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B771C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b7740
	if (ctx.cr0.eq) goto loc_821B7740;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82189dd0
	ctx.lr = 0x821B7730;
	sub_82189DD0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r11,r11,-32416
	ctx.r11.s64 = ctx.r11.s64 + -32416;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_821B7740:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r5,r28,4
	ctx.r5.s64 = r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r28,56
	ctx.r3.s64 = r28.s64 + 56;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// bl 0x8214abd8
	ctx.lr = 0x821B775C;
	sub_8214ABD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82149e08
	ctx.lr = 0x821B7768;
	sub_82149E08(ctx, base);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821BF018) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BF020;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 136);
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r29,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r29.u32);
	// addi r5,r4,116
	ctx.r5.s64 = ctx.r4.s64 + 116;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821bf048
	if (ctx.cr6.lt) goto loc_821BF048;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_821BF048:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821BF04C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821bf04c
	if (!ctx.cr6.eq) goto loc_821BF04C;
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
	ctx.lr = 0x821BF078;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19344
	ctx.r4.s64 = ctx.r11.s64 + -19344;
	// bl 0x82120600
	ctx.lr = 0x821BF088;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BF094;
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
	ctx.lr = 0x821BF0B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821BF0C4;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C3810) {
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
	ctx.lr = 0x821C3818;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821c38cc
	if (ctx.cr6.eq) goto loc_821C38CC;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// li r12,-4
	ctx.r12.s64 = -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,6060(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,7
	ctx.r12.s64 = 7;
	// rldicl r10,r10,15,49
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 15) & 0x7FFF;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// clrlwi r27,r10,27
	r27.u64 = ctx.r10.u32 & 0x1F;
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// std r9,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r9.u64);
	// bl 0x82126320
	ctx.lr = 0x821C3868;
	sub_82126320(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216cfa0
	ctx.lr = 0x821C3874;
	sub_8216CFA0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821c38a4
	goto loc_821C38A4;
loc_821C3884:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821c38d8
	ctx.lr = 0x821C3898;
	sub_821C38D8(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
loc_821C38A4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c3884
	if (!ctx.cr6.eq) goto loc_821C3884;
	// lwz r11,6060(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6060);
	// li r12,-32
	ctx.r12.s64 = -32;
	// rldicr r10,r27,49,14
	ctx.r10.u64 = __builtin_rotateleft64(r27.u64, 49) & 0xFFFE000000000000;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
loc_821C38CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821C9870) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lwz r11,6216(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 6216);
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r7,208(r11)
	REX_STORE_U64(ctx.r11.u32 + 208, ctx.r7.u64);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,216(r11)
	REX_STORE_U64(ctx.r11.u32 + 216, ctx.r10.u64);
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lfs f13,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,224(r11)
	REX_STORE_U64(ctx.r11.u32 + 224, ctx.r9.u64);
	// std r10,232(r11)
	REX_STORE_U64(ctx.r11.u32 + 232, ctx.r10.u64);
	// lbz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 124);
	// stb r10,240(r11)
	REX_STORE_U8(ctx.r11.u32 + 240, ctx.r10.u8);
	// lbz r10,125(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 125);
	// stb r10,241(r11)
	REX_STORE_U8(ctx.r11.u32 + 241, ctx.r10.u8);
	// lbz r10,126(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 126);
	// stb r10,242(r11)
	REX_STORE_U8(ctx.r11.u32 + 242, ctx.r10.u8);
	// lbz r10,127(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 127);
	// stb r10,243(r11)
	REX_STORE_U8(ctx.r11.u32 + 243, ctx.r10.u8);
	// lbz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 128);
	// stb r10,244(r11)
	REX_STORE_U8(ctx.r11.u32 + 244, ctx.r10.u8);
	// lbz r10,129(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 129);
	// stb r10,245(r11)
	REX_STORE_U8(ctx.r11.u32 + 245, ctx.r10.u8);
	// lbz r10,130(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 130);
	// stb r10,246(r11)
	REX_STORE_U8(ctx.r11.u32 + 246, ctx.r10.u8);
	// lbz r10,131(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 131);
	// stb r10,247(r11)
	REX_STORE_U8(ctx.r11.u32 + 247, ctx.r10.u8);
	// lbz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 132);
	// stb r10,248(r11)
	REX_STORE_U8(ctx.r11.u32 + 248, ctx.r10.u8);
	// lbz r10,133(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 133);
	// stb r10,249(r11)
	REX_STORE_U8(ctx.r11.u32 + 249, ctx.r10.u8);
	// lbz r10,134(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 134);
	// stb r10,250(r11)
	REX_STORE_U8(ctx.r11.u32 + 250, ctx.r10.u8);
	// lbz r10,135(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 135);
	// stb r10,251(r11)
	REX_STORE_U8(ctx.r11.u32 + 251, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1648) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82166df8
	ctx.lr = 0x821D1670;
	sub_82166DF8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d171c
	if (ctx.cr0.eq) goto loc_821D171C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821d16a0
	if (!ctx.cr6.eq) goto loc_821D16A0;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821d16a4
	if (ctx.cr6.eq) goto loc_821D16A4;
loc_821D16A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821D16A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d171c
	if (ctx.cr0.eq) goto loc_821D171C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D16C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D16F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d171c
	if (ctx.cr0.eq) goto loc_821D171C;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d171c
	if (ctx.cr6.eq) goto loc_821D171C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D171C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D171C:
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

DEFINE_REX_FUNC(sub_821D97E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821D97F0;
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
	// bge cr6,0x821d9884
	if (!ctx.cr6.lt) goto loc_821D9884;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821d9824
	if (ctx.cr6.eq) goto loc_821D9824;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x821D981C;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821d9828
	goto loc_821D9828;
loc_821D9824:
	// li r30,0
	r30.s64 = 0;
loc_821D9828:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821d9860
	if (!ctx.cr6.gt) goto loc_821D9860;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_821D9840:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9854
	if (ctx.cr6.eq) goto loc_821D9854;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_821D9854:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821d9840
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D9840;
loc_821D9860:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d9874
	if (ctx.cr0.eq) goto loc_821D9874;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x821D9874;
	sub_8269D1B8(ctx, base);
loc_821D9874:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
loc_821D9884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821DD040) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821DD048;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// li r29,0
	r29.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821dd0ac
	if (!ctx.cr0.gt) goto loc_821DD0AC;
	// li r30,0
	r30.s64 = 0;
loc_821DD070:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821DD084;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821dd0b8
	if (ctx.cr0.eq) goto loc_821DD0B8;
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
	// blt cr6,0x821dd070
	if (ctx.cr6.lt) goto loc_821DD070;
loc_821DD0AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DD0B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_821DD0B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821dd0b0
	goto loc_821DD0B0;
}

DEFINE_REX_FUNC(sub_821DFFD8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14504
	ctx.r3.s64 = ctx.r11.s64 + -14504;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E01B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821E01B8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x822f6280
	ctx.lr = 0x821E01D0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e0200
	if (ctx.cr0.eq) goto loc_821E0200;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,12904
	ctx.r4.s64 = ctx.r11.s64 + 12904;
	// bl 0x82120600
	ctx.lr = 0x821E01E8;
	sub_82120600(ctx, base);
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821E01FC;
	sub_82196BA8(ctx, base);
	// b 0x821e0204
	goto loc_821E0204;
loc_821E0200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E0204:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821E0218;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821e0360
	ctx.lr = 0x821E0224;
	sub_821E0360(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e0240
	if (ctx.cr0.eq) goto loc_821E0240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821E0240;
	sub_82120AC0(ctx, base);
loc_821E0240:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821E0248;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e0278
	if (ctx.cr0.eq) goto loc_821E0278;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,12916
	ctx.r4.s64 = ctx.r11.s64 + 12916;
	// bl 0x82120600
	ctx.lr = 0x821E0260;
	sub_82120600(ctx, base);
	// addi r5,r30,20
	ctx.r5.s64 = r30.s64 + 20;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821E0274;
	sub_82196BA8(ctx, base);
	// b 0x821e027c
	goto loc_821E027C;
loc_821E0278:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E027C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821E0290;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821e0360
	ctx.lr = 0x821E029C;
	sub_821E0360(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e02b8
	if (ctx.cr0.eq) goto loc_821E02B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821E02B8;
	sub_82120AC0(ctx, base);
loc_821E02B8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821E02C0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821e02f0
	if (ctx.cr0.eq) goto loc_821E02F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,12928
	ctx.r4.s64 = ctx.r11.s64 + 12928;
	// bl 0x82120600
	ctx.lr = 0x821E02D8;
	sub_82120600(ctx, base);
	// addi r5,r30,24
	ctx.r5.s64 = r30.s64 + 24;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821E02EC;
	sub_82196BA8(ctx, base);
	// b 0x821e02f4
	goto loc_821E02F4;
loc_821E02F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E02F4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821E0308;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821e0360
	ctx.lr = 0x821E0314;
	sub_821E0360(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e032c
	if (ctx.cr0.eq) goto loc_821E032C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x821E032C;
	sub_82120AC0(ctx, base);
loc_821E032C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821EAC60) {
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
	ctx.lr = 0x821EAC68;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r25,128
	ctx.r4.s64 = r25.s64 + 128;
	// bl 0x821613d8
	ctx.lr = 0x821EAC88;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821613d8
	ctx.lr = 0x821EAC98;
	sub_821613D8(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e06e8
	ctx.lr = 0x821EACA4;
	sub_821E06E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,52(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 52);
	// bl 0x821613d8
	ctx.lr = 0x821EACB8;
	sub_821613D8(ctx, base);
	// stw r29,132(r25)
	REX_STORE_U32(r25.u32 + 132, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821613d8
	ctx.lr = 0x821EACCC;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x821613d8
	ctx.lr = 0x821EACDC;
	sub_821613D8(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e09b8
	ctx.lr = 0x821EACEC;
	sub_821E09B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 56);
	// bl 0x821613d8
	ctx.lr = 0x821EAD00;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// bl 0x821613d8
	ctx.lr = 0x821EAD10;
	sub_821613D8(ctx, base);
	// stw r30,136(r25)
	REX_STORE_U32(r25.u32 + 136, r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821EAD24;
	sub_821613D8(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r27,r25,12
	r27.s64 = r25.s64 + 12;
	// li r23,0
	r23.s64 = 0;
	// ori r24,r10,65534
	r24.u64 = ctx.r10.u64 | 65534;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821eadc0
	if (!ctx.cr6.gt) goto loc_821EADC0;
loc_821EAD44:
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x821EAD54;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821eada8
	if (ctx.cr0.eq) goto loc_821EADA8;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r23,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r23.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// subf r10,r11,r24
	ctx.r10.u64 = r24.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821ead9c
	if (ctx.cr6.lt) goto loc_821EAD9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// blt cr6,0x821ead44
	if (ctx.cr6.lt) goto loc_821EAD44;
	// b 0x821eae08
	goto loc_821EAE08;
loc_821EAD9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x821EADA8;
	sub_822F6020(ctx, base);
loc_821EADA8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x821EADC0;
	sub_82120018(ctx, base);
loc_821EADC0:
	// bge cr6,0x821eae08
	if (!ctx.cr6.lt) goto loc_821EAE08;
loc_821EADC4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821eadfc
	if (ctx.cr6.eq) goto loc_821EADFC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x821EADF0;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
loc_821EADFC:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821eadc4
	if (ctx.cr6.lt) goto loc_821EADC4;
loc_821EAE08:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821eae44
	goto loc_821EAE44;
loc_821EAE14:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821EAE1C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821eae2c
	if (ctx.cr0.eq) goto loc_821EAE2C;
	// bl 0x821ecf60
	ctx.lr = 0x821EAE28;
	sub_821ECF60(ctx, base);
	// b 0x821eae30
	goto loc_821EAE30;
loc_821EAE2C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_821EAE30:
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821ed6d8
	ctx.lr = 0x821EAE3C;
	sub_821ED6D8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_821EAE44:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eae14
	if (!ctx.cr6.eq) goto loc_821EAE14;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821EAE5C;
	sub_821613D8(ctx, base);
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// addi r30,r25,24
	r30.s64 = r25.s64 + 24;
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821eaeec
	if (!ctx.cr6.gt) goto loc_821EAEEC;
loc_821EAE70:
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r28,4(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x821EAE80;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821eaed4
	if (ctx.cr0.eq) goto loc_821EAED4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// stw r23,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r23.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r24
	ctx.r10.u64 = r24.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821eaec8
	if (ctx.cr6.lt) goto loc_821EAEC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// blt cr6,0x821eae70
	if (ctx.cr6.lt) goto loc_821EAE70;
	// b 0x821eaf34
	goto loc_821EAF34;
loc_821EAEC8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x821EAED4;
	sub_822F6020(ctx, base);
loc_821EAED4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x821EAEEC;
	sub_82120018(ctx, base);
loc_821EAEEC:
	// bge cr6,0x821eaf34
	if (!ctx.cr6.lt) goto loc_821EAF34;
loc_821EAEF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821eaf28
	if (ctx.cr6.eq) goto loc_821EAF28;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8269ce98
	ctx.lr = 0x821EAF1C;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_821EAF28:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821eaef0
	if (ctx.cr6.lt) goto loc_821EAEF0;
loc_821EAF34:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r28,r23
	r28.u64 = r23.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821eaf80
	goto loc_821EAF80;
loc_821EAF44:
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822f6280
	ctx.lr = 0x821EAF4C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821eaf64
	if (ctx.cr0.eq) goto loc_821EAF64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821e0a88
	ctx.lr = 0x821EAF60;
	sub_821E0A88(ctx, base);
	// b 0x821eaf68
	goto loc_821EAF68;
loc_821EAF64:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_821EAF68:
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821e1410
	ctx.lr = 0x821EAF74;
	sub_821E1410(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_821EAF80:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eaf44
	if (!ctx.cr6.eq) goto loc_821EAF44;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r25,48
	ctx.r4.s64 = r25.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821EAF98;
	sub_821613D8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821eafb8
	goto loc_821EAFB8;
loc_821EAFA4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821edaa0
	ctx.lr = 0x821EAFB0;
	sub_821EDAA0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821EAFB8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eafa4
	if (!ctx.cr6.eq) goto loc_821EAFA4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82204888) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29784
	ctx.r4.s64 = ctx.r11.s64 + 29784;
	// bl 0x82120600
	ctx.lr = 0x822048B0;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x822048C0;
	sub_82180E18(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x822048D4;
	sub_82120AC0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x822048E4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82204910
	if (ctx.cr0.eq) goto loc_82204910;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,19344
	ctx.r10.s64 = ctx.r10.s64 + 19344;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82204914
	goto loc_82204914;
loc_82204910:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82204914:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,-23804
	ctx.r5.s64 = ctx.r10.s64 + -23804;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82204930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,6052(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6052);
	// bl 0x822f6280
	ctx.lr = 0x82204940;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220496c
	if (ctx.cr0.eq) goto loc_8220496C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,19400
	ctx.r10.s64 = ctx.r10.s64 + 19400;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82204970
	goto loc_82204970;
loc_8220496C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82204970:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82204984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,29796
	ctx.r4.s64 = ctx.r11.s64 + 29796;
	// bl 0x82120600
	ctx.lr = 0x82204994;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822e6fa8
	ctx.lr = 0x822049A0;
	sub_822E6FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822049B0;
	sub_82120AC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x822049C4;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,29808
	ctx.r4.s64 = ctx.r11.s64 + 29808;
	// bl 0x8215f338
	ctx.lr = 0x822049D0;
	sub_8215F338(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822049EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x82204a04
	if (ctx.cr0.eq) goto loc_82204A04;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,29816
	ctx.r4.s64 = ctx.r11.s64 + 29816;
	// b 0x82204a0c
	goto loc_82204A0C;
loc_82204A04:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,29832
	ctx.r4.s64 = ctx.r11.s64 + 29832;
loc_82204A0C:
	// bl 0x8215f338
	ctx.lr = 0x82204A10;
	sub_8215F338(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// bl 0x82167180
	ctx.lr = 0x82204A18;
	sub_82167180(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r31,116
	ctx.r5.s64 = r31.s64 + 116;
	// addi r4,r10,29848
	ctx.r4.s64 = ctx.r10.s64 + 29848;
	// lwz r3,6124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82204A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_8220EF58) {
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
	ctx.lr = 0x8220EF60;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822e8048
	ctx.lr = 0x8220EF6C;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-30236
	ctx.r11.s64 = ctx.r11.s64 + -30236;
	// addi r4,r10,-30452
	ctx.r4.s64 = ctx.r10.s64 + -30452;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82120600
	ctx.lr = 0x8220EF88;
	sub_82120600(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stb r11,289(r31)
	REX_STORE_U8(r31.u32 + 289, ctx.r11.u8);
	// li r3,108
	ctx.r3.s64 = 108;
	// stb r29,288(r31)
	REX_STORE_U8(r31.u32 + 288, r29.u8);
	// bl 0x822f6280
	ctx.lr = 0x8220EFA0;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r27,r11,-15424
	r27.s64 = ctx.r11.s64 + -15424;
	// addi r28,r10,-23836
	r28.s64 = ctx.r10.s64 + -23836;
	// beq 0x8220f014
	if (ctx.cr0.eq) goto loc_8220F014;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-30444
	ctx.r4.s64 = ctx.r11.s64 + -30444;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8220EFD4;
	sub_821DBB48(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8220EFE0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220f004
	if (ctx.cr0.eq) goto loc_8220F004;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-4368
	ctx.r10.s64 = ctx.r10.s64 + -4368;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8220f008
	goto loc_8220F008;
loc_8220F004:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8220F008:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x8220f018
	goto loc_8220F018;
loc_8220F014:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8220F018:
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
	ctx.lr = 0x8220F030;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8220F038;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8220f09c
	if (ctx.cr0.eq) goto loc_8220F09C;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-30428
	ctx.r4.s64 = ctx.r11.s64 + -30428;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8220F05C;
	sub_821DBB48(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8220F068;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220f08c
	if (ctx.cr0.eq) goto loc_8220F08C;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-4344
	ctx.r10.s64 = ctx.r10.s64 + -4344;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8220f090
	goto loc_8220F090;
loc_8220F08C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8220F090:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x8220f0a0
	goto loc_8220F0A0;
loc_8220F09C:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8220F0A0:
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
	ctx.lr = 0x8220F0B8;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8221CE60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14012
	ctx.r3.s64 = ctx.r11.s64 + -14012;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221DAA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1036(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 1036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221dac0
	if (ctx.cr6.eq) goto loc_8221DAC0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1036(r4)
	REX_STORE_U32(ctx.r4.u32 + 1036, ctx.r11.u32);
	// stw r11,968(r4)
	REX_STORE_U32(ctx.r4.u32 + 968, ctx.r11.u32);
loc_8221DAC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8221F960) {
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
	// stb r6,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r6.u8);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,159
	ctx.r3.s64 = ctx.r1.s64 + 159;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// bl 0x8221ed08
	ctx.lr = 0x8221F98C;
	sub_8221ED08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221f9fc
	if (ctx.cr0.eq) goto loc_8221F9FC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r4,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r5,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r6,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
loc_8221F9FC:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,159
	ctx.r3.s64 = ctx.r1.s64 + 159;
	// bl 0x8221ed08
	ctx.lr = 0x8221FA0C;
	sub_8221ED08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221fa7c
	if (ctx.cr0.eq) goto loc_8221FA7C;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r3,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r10,12(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r5,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r5,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r10,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
loc_8221FA7C:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r1,159
	ctx.r3.s64 = ctx.r1.s64 + 159;
	// bl 0x8221ed08
	ctx.lr = 0x8221FA8C;
	sub_8221ED08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221fafc
	if (ctx.cr0.eq) goto loc_8221FAFC;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r3,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,12(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r5,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r10,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// stw r11,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
loc_8221FAFC:
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

DEFINE_REX_FUNC(sub_8222A720) {
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
	ctx.lr = 0x8222A738;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8222a75c
	if (ctx.cr0.eq) goto loc_8222A75C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82229520
	ctx.lr = 0x8222A748;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-22164
	ctx.r11.s64 = ctx.r11.s64 + -22164;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8222a760
	goto loc_8222A760;
loc_8222A75C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222A760:
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

DEFINE_REX_FUNC(sub_8222B998) {
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
	// li r3,560
	ctx.r3.s64 = 560;
	// bl 0x822f6280
	ctx.lr = 0x8222B9AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222b9bc
	if (ctx.cr0.eq) goto loc_8222B9BC;
	// bl 0x8222b9d0
	ctx.lr = 0x8222B9B8;
	sub_8222B9D0(ctx, base);
	// b 0x8222b9c0
	goto loc_8222B9C0;
loc_8222B9BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222B9C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222D898) {
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
	// bl 0x82236da0
	ctx.lr = 0x8222D8B8;
	sub_82236DA0(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222d8d8
	if (ctx.cr0.eq) goto loc_8222D8D8;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,896
	ctx.r3.s64 = r31.s64 + 896;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x82274158
	ctx.lr = 0x8222D8D8;
	sub_82274158(ctx, base);
loc_8222D8D8:
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

DEFINE_REX_FUNC(sub_82230968) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bl 0x8216b740
	ctx.lr = 0x82230990;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8223099C;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// bl 0x82125d00
	ctx.lr = 0x822309AC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822309bc
	if (ctx.cr0.eq) goto loc_822309BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,157(r31)
	REX_STORE_U8(r31.u32 + 157, ctx.r11.u8);
loc_822309BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822309CC;
	sub_82120AC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822339C0) {
	REX_FUNC_PROLOGUE();
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2c84
	ctx.lr = 0x822339D0;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82233bc4
	if (ctx.cr0.eq) goto loc_82233BC4;
	// lwz r9,628(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 628);
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r10,16592
	ctx.r8.s64 = ctx.r10.s64 + 16592;
	// fsubs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f12,336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,72(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// fsubs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f0,64(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,336(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 336);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f7,340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,340(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 340);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f4,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f0,344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,344(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 344);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f2,f3,f2
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f1,68(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f29,f7,f10
	f29.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fsubs f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f1,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f9,f8
	f31.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f30,324(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 324);
	f30.f64 = double(temp.f32);
	// fmuls f27,f6,f11
	f27.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfs f28,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	f28.f64 = double(temp.f32);
	// lfs f26,328(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 328);
	f26.f64 = double(temp.f32);
	// lfs f25,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	f25.f64 = double(temp.f32);
	// lfs f24,320(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 320);
	f24.f64 = double(temp.f32);
	// lfs f23,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	f23.f64 = double(temp.f32);
	// fmsubs f10,f0,f10,f4
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f4.f64)));
	// lfs f4,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f21,f2,f0
	f21.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f22,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	f22.f64 = double(temp.f32);
	// fmsubs f12,f2,f12,f29
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, -f29.f64)));
	// lfs f20,640(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 640);
	f20.f64 = double(temp.f32);
	// fmuls f19,f3,f5
	f19.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f0,960(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 960);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f11,f5,f11,f31
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, -f31.f64)));
	// fmsubs f8,f3,f8,f27
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, -f27.f64)));
	// fmuls f0,f20,f0
	ctx.f0.f64 = double(float(f20.f64 * ctx.f0.f64));
	// fadds f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fmsubs f13,f13,f7,f21
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, -f21.f64)));
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + f28.f64));
	// fmsubs f9,f9,f6,f19
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, -f19.f64)));
	// fadds f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 + f30.f64));
	// fadds f8,f8,f26
	ctx.f8.f64 = double(float(ctx.f8.f64 + f26.f64));
	// fadds f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 + f25.f64));
	// fadds f9,f9,f24
	ctx.f9.f64 = double(float(ctx.f9.f64 + f24.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f11,f23,f11
	ctx.f11.f64 = double(float(f23.f64 * ctx.f11.f64));
	// fmadds f12,f4,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f13,f22,f13,f12
	ctx.f13.f64 = double(float(std::fma(f22.f64, ctx.f13.f64, ctx.f12.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82233b88
	if (!ctx.cr6.lt) goto loc_82233B88;
	// lwz r11,576(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 576);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,576(r3)
	REX_STORE_U32(ctx.r3.u32 + 576, ctx.r11.u32);
	// beq cr6,0x82233afc
	if (ctx.cr6.eq) goto loc_82233AFC;
	// stw r11,212(r9)
	REX_STORE_U32(ctx.r9.u32 + 212, ctx.r11.u32);
loc_82233AFC:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r3,880
	ctx.r8.s64 = ctx.r3.s64 + 880;
	// lfs f11,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f13,f13,f11,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f5.f64)));
	// fmsubs f12,f12,f10,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f4.f64)));
	// fmsubs f0,f9,f0,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f3.f64)));
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,-120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// fadds f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f13,-128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,888(r3)
	REX_STORE_U64(ctx.r3.u32 + 888, ctx.r11.u64);
	// std r9,880(r3)
	REX_STORE_U64(ctx.r3.u32 + 880, ctx.r9.u64);
	// b 0x82233bb0
	goto loc_82233BB0;
loc_82233B88:
	// lwz r11,720(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82233bc4
	if (ctx.cr0.eq) goto loc_82233BC4;
	// lwz r11,576(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 576);
	// lwz r10,628(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 628);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,576(r3)
	REX_STORE_U32(ctx.r3.u32 + 576, ctx.r11.u32);
	// beq cr6,0x82233bb0
	if (ctx.cr6.eq) goto loc_82233BB0;
	// stw r11,212(r10)
	REX_STORE_U32(ctx.r10.u32 + 212, ctx.r11.u32);
loc_82233BB0:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,704(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 704);
	// stw r10,864(r3)
	REX_STORE_U32(ctx.r3.u32 + 864, ctx.r10.u32);
	// stw r11,896(r3)
	REX_STORE_U32(ctx.r3.u32 + 896, ctx.r11.u32);
loc_82233BC4:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cd0
	ctx.lr = 0x82233BCC;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249160) {
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
	// lwz r3,-8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + -8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82151d50
	ctx.lr = 0x8224917C;
	sub_82151D50(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// ld r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// ld r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 72);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_8224BE90) {
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
	ctx.lr = 0x8224BE98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,700(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 700);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224bfcc
	if (!ctx.cr0.eq) goto loc_8224BFCC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r3,432
	r28.s64 = ctx.r3.s64 + 432;
	// addi r27,r11,-23520
	r27.s64 = ctx.r11.s64 + -23520;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82125d00
	ctx.lr = 0x8224BEC4;
	sub_82125D00(ctx, base);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224bee8
	if (!ctx.cr0.eq) goto loc_8224BEE8;
	// lwz r3,6052(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6052);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BEE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224BEE8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BF04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x82191520
	ctx.lr = 0x8224BF0C;
	sub_82191520(ctx, base);
	// lwz r30,136(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lbz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224bf2c
	if (ctx.cr0.eq) goto loc_8224BF2C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6188(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6188);
	// bl 0x821518c0
	ctx.lr = 0x8224BF2C;
	sub_821518C0(ctx, base);
loc_8224BF2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,52(r30)
	REX_STORE_U8(r30.u32 + 52, ctx.r11.u8);
	// bl 0x8224c5e8
	ctx.lr = 0x8224BF3C;
	sub_8224C5E8(ctx, base);
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BF50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,472(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 472);
	// li r30,4
	r30.s64 = 4;
	// addi r29,r11,280
	r29.s64 = ctx.r11.s64 + 280;
loc_8224BF5C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821ea168
	ctx.lr = 0x8224BF68;
	sub_821EA168(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x8224bf5c
	if (!ctx.cr0.eq) goto loc_8224BF5C;
	// lwz r11,476(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 476);
	// li r30,5
	r30.s64 = 5;
	// addi r29,r11,212
	r29.s64 = ctx.r11.s64 + 212;
loc_8224BF80:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821ea168
	ctx.lr = 0x8224BF8C;
	sub_821EA168(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x8224bf80
	if (!ctx.cr0.eq) goto loc_8224BF80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82125d00
	ctx.lr = 0x8224BFA4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224bfc4
	if (!ctx.cr0.eq) goto loc_8224BFC4;
	// lwz r3,6052(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6052);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BFC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224BFC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,700(r31)
	REX_STORE_U8(r31.u32 + 700, ctx.r11.u8);
loc_8224BFCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82253448) {
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
	ctx.lr = 0x82253450;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82265f10
	ctx.lr = 0x8225345C;
	sub_82265F10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225346c
	if (!ctx.cr0.eq) goto loc_8225346C;
loc_82253464:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225358c
	goto loc_8225358C;
loc_8225346C:
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,6072(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253488;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r25,r31,24
	r25.s64 = r31.s64 + 24;
	// addi r5,r11,-24520
	ctx.r5.s64 = ctx.r11.s64 + -24520;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r27,56(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r26,52(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x82121610
	ctx.lr = 0x822534A8;
	sub_82121610(ctx, base);
	// lwz r30,104(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822534c4
	if (ctx.cr6.eq) goto loc_822534C4;
loc_822534BC:
	// li r28,0
	r28.s64 = 0;
	// b 0x82253530
	goto loc_82253530;
loc_822534C4:
	// lwz r11,6072(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822534E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r4.u32);
	// beq 0x822534bc
	if (ctx.cr0.eq) goto loc_822534BC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,6072(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// li r28,0
	r28.s64 = 0;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r28,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r28.u64);
	// std r28,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r28.u64);
	// std r28,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r28.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225351C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bne cr6,0x82253530
	if (!ctx.cr6.eq) goto loc_82253530;
	// stw r26,0(r30)
	REX_STORE_U32(r30.u32 + 0, r26.u32);
	// li r28,1
	r28.s64 = 1;
	// stw r27,4(r30)
	REX_STORE_U32(r30.u32 + 4, r27.u32);
loc_82253530:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82253540;
	sub_82120AC0(ctx, base);
	// lwz r3,6072(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82253464
	if (ctx.cr0.eq) goto loc_82253464;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lbz r6,108(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 108);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,104(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82253580;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8225358C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8225B1C8) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8225b214
	if (!ctx.cr6.eq) goto loc_8225B214;
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
	ctx.lr = 0x8225B208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
loc_8225B214:
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stb r5,1592(r31)
	REX_STORE_U8(r31.u32 + 1592, ctx.r5.u8);
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

DEFINE_REX_FUNC(sub_82260730) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82260738;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82260824
	if (ctx.cr6.lt) goto loc_82260824;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x822607a8
	if (!ctx.cr6.gt) goto loc_822607A8;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x82260824
	if (!ctx.cr6.eq) goto loc_82260824;
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
	ctx.lr = 0x82260774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x822607c8
	if (ctx.cr6.eq) goto loc_822607C8;
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
	ctx.lr = 0x82260794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x822607A4;
	sub_8225B1C8(ctx, base);
	// b 0x82260824
	goto loc_82260824;
loc_822607A8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r29,76
	r31.s64 = r29.s64 + 76;
	// addi r30,r11,-26856
	r30.s64 = ctx.r11.s64 + -26856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82125d00
	ctx.lr = 0x822607C0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822607d4
	if (!ctx.cr0.eq) goto loc_822607D4;
loc_822607C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8225b238
	ctx.lr = 0x822607D0;
	sub_8225B238(ctx, base);
	// b 0x82260824
	goto loc_82260824;
loc_822607D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x822607E0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82260800
	if (!ctx.cr0.eq) goto loc_82260800;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-9400
	ctx.r4.s64 = ctx.r11.s64 + -9400;
	// addi r3,r10,-7700
	ctx.r3.s64 = ctx.r10.s64 + -7700;
	// li r5,4567
	ctx.r5.s64 = 4567;
	// bl 0x821231d0
	ctx.lr = 0x82260800;
	sub_821231D0(ctx, base);
loc_82260800:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,132
	ctx.r3.s64 = r29.s64 + 132;
	// bl 0x82120b20
	ctx.lr = 0x82260814;
	sub_82120B20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120c08
	ctx.lr = 0x82260824;
	sub_82120C08(ctx, base);
loc_82260824:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82265EB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82265EB8;
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
	// beq cr6,0x82265efc
	if (ctx.cr6.eq) goto loc_82265EFC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,-15668
	r30.s64 = ctx.r11.s64 + -15668;
loc_82265ED8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821fd140
	ctx.lr = 0x82265EE4;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82265f08
	if (!ctx.cr0.eq) goto loc_82265F08;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82265ed8
	if (!ctx.cr6.eq) goto loc_82265ED8;
loc_82265EFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82265F00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82265F08:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82265f00
	goto loc_82265F00;
}

DEFINE_REX_FUNC(sub_82268B80) {
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
	ctx.lr = 0x82268B88;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	r24.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r28,r5,12
	r28.s64 = ctx.r5.s64 + 12;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r27,r24
	r27.u64 = r24.u64;
	// b 0x82268bd4
	goto loc_82268BD4;
loc_82268BB0:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x82268BC0;
	sub_82120780(ctx, base);
	// rlwinm. r27,r3,1,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82268bd0
	if (ctx.cr0.eq) goto loc_82268BD0;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82268bd4
	goto loc_82268BD4;
loc_82268BD0:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_82268BD4:
	// lbz r11,57(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82268bb0
	if (ctx.cr0.eq) goto loc_82268BB0;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// beq 0x82268c34
	if (ctx.cr0.eq) goto loc_82268C34;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82268c2c
	if (!ctx.cr6.eq) goto loc_82268C2C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82268C08:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82268ca0
	ctx.lr = 0x82268C18;
	sub_82268CA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r31)
	REX_STORE_U8(r31.u32 + 4, r24.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82268c90
	goto loc_82268C90;
loc_82268C2C:
	// bl 0x82268e98
	ctx.lr = 0x82268C30;
	sub_82268E98(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82268C34:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82268C40;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bge 0x82268c54
	if (!ctx.cr0.lt) goto loc_82268C54;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// b 0x82268c08
	goto loc_82268C08;
loc_82268C54:
	// lwz r6,32(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 32);
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8213cc48
	ctx.lr = 0x82268C64;
	sub_8213CC48(ctx, base);
	// lwz r3,32(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 32);
	// bl 0x8269ce98
	ctx.lr = 0x82268C6C;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82268C7C;
	sub_82120AC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82268C84;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_82268C90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82270690) {
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
	ctx.lr = 0x82270698;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r31,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r31.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-11016
	ctx.r4.s64 = ctx.r11.s64 + -11016;
	// bl 0x82120600
	ctx.lr = 0x822706BC;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822706DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822706F0;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822707a8
	if (ctx.cr0.eq) goto loc_822707A8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f670
	ctx.lr = 0x8227070C;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x82270710;
	sub_8215F270(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-16680
	ctx.r4.s64 = ctx.r11.s64 + -16680;
	// bl 0x8215f670
	ctx.lr = 0x82270720;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82270728;
	sub_8215F0F0(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// stw r29,8(r27)
	REX_STORE_U32(r27.u32 + 8, r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-17164
	ctx.r4.s64 = ctx.r11.s64 + -17164;
	// bl 0x8215f670
	ctx.lr = 0x82270744;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8227074C;
	sub_8215F0F0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r9,-17344
	ctx.r4.s64 = ctx.r9.s64 + -17344;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bl 0x8215f670
	ctx.lr = 0x82270778;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82270780;
	sub_8215F0F0(ctx, base);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822707A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822707A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x822707B0;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82277868) {
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
	ctx.lr = 0x82277870;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822778a8
	if (ctx.cr6.lt) goto loc_822778A8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8227789C;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x822f6020
	ctx.lr = 0x822778A8;
	sub_822F6020(ctx, base);
loc_822778A8:
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
	// bne cr6,0x822778d4
	if (!ctx.cr6.eq) goto loc_822778D4;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8227790c
	goto loc_8227790C;
loc_822778D4:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822778f8
	if (ctx.cr0.eq) goto loc_822778F8;
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82277910
	if (!ctx.cr6.eq) goto loc_82277910;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// b 0x82277910
	goto loc_82277910;
loc_822778F8:
	// stw r28,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82277910
	if (!ctx.cr6.eq) goto loc_82277910;
loc_8227790C:
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
loc_82277910:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r31,r28
	r31.u64 = r28.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82277a10
	if (!ctx.cr0.eq) goto loc_82277A10;
	// li r27,0
	r27.s64 = 0;
loc_8227792C:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82277990
	if (!ctx.cr6.eq) goto loc_82277990;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822779a0
	if (ctx.cr0.eq) goto loc_822779A0;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82277968
	if (!ctx.cr6.eq) goto loc_82277968;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82169a90
	ctx.lr = 0x82277968;
	sub_82169A90(ctx, base);
loc_82277968:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r29.u8);
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
	ctx.lr = 0x8227798C;
	sub_82237648(ctx, base);
	// b 0x82277a00
	goto loc_82277A00;
loc_82277990:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822779c4
	if (!ctx.cr0.eq) goto loc_822779C4;
loc_822779A0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r29,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, r29.u8);
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r29.u8);
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
	// b 0x82277a00
	goto loc_82277A00;
loc_822779C4:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822779dc
	if (!ctx.cr6.eq) goto loc_822779DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82237648
	ctx.lr = 0x822779DC;
	sub_82237648(ctx, base);
loc_822779DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r29.u8);
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
	ctx.lr = 0x82277A00;
	sub_82169A90(ctx, base);
loc_82277A00:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8227792c
	if (ctx.cr0.eq) goto loc_8227792C;
loc_82277A10:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	REX_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82285928) {
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
	ctx.lr = 0x82285930;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r29,r3,176
	r29.s64 = ctx.r3.s64 + 176;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f0,172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
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
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r10,176(r3)
	REX_STORE_U64(ctx.r3.u32 + 176, ctx.r10.u64);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// lfs f0,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// std r9,192(r3)
	REX_STORE_U64(ctx.r3.u32 + 192, ctx.r9.u64);
	// std r11,184(r3)
	REX_STORE_U64(ctx.r3.u32 + 184, ctx.r11.u64);
	// std r10,200(r3)
	REX_STORE_U64(ctx.r3.u32 + 200, ctx.r10.u64);
	// lfs f13,208(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822859b8
	if (!ctx.cr6.gt) goto loc_822859B8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x822eede0
	ctx.lr = 0x822859B8;
	sub_822EEDE0(ctx, base);
loc_822859B8:
	// lbz r11,148(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 148);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82285ab0
	if (ctx.cr0.eq) goto loc_82285AB0;
	// lwz r11,160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 160);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82285ab0
	if (!ctx.cr6.gt) goto loc_82285AB0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r25,r28,156
	r25.s64 = r28.s64 + 156;
	// addi r24,r11,1072
	r24.s64 = ctx.r11.s64 + 1072;
loc_822859E0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8228ca78
	ctx.lr = 0x822859EC;
	sub_8228CA78(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bne cr6,0x82285a04
	if (!ctx.cr6.eq) goto loc_82285A04;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82285A04:
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82176380
	ctx.lr = 0x82285A14;
	sub_82176380(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82285aa0
	if (ctx.cr6.eq) goto loc_82285AA0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82285A30;
	sub_826A1E70(ctx, base);
	// addi r4,r31,464
	ctx.r4.s64 = r31.s64 + 464;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8216d040
	ctx.lr = 0x82285A3C;
	sub_8216D040(ctx, base);
	// lwz r3,588(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 588);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285A54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,588(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 588);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,588(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 588);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82285A80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82176218
	ctx.lr = 0x82285A90;
	sub_82176218(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82176218
	ctx.lr = 0x82285AA0;
	sub_82176218(ctx, base);
loc_82285AA0:
	// lwz r11,160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 160);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822859e0
	if (ctx.cr6.lt) goto loc_822859E0;
loc_82285AB0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8228DD10) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8228ca78
	ctx.lr = 0x8228DD30;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8228dd58
	if (!ctx.cr6.eq) goto loc_8228DD58;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r3,6212(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x8228dd74
	goto loc_8228DD74;
loc_8228DD58:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8228dd80
	if (!ctx.cr6.eq) goto loc_8228DD80;
loc_8228DD60:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r3,6212(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
loc_8228DD74:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228DD7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8228dd8c
	goto loc_8228DD8C;
loc_8228DD80:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8228dd60
	if (ctx.cr6.eq) goto loc_8228DD60;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8228DD8C:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8228ddbc
	if (ctx.cr6.eq) goto loc_8228DDBC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8228ddb4
	if (!ctx.cr6.eq) goto loc_8228DDB4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bl 0x8228ddd0
	ctx.lr = 0x8228DDB0;
	sub_8228DDD0(ctx, base);
	// b 0x8228ddbc
	goto loc_8228DDBC;
loc_8228DDB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8228DDBC:
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

DEFINE_REX_FUNC(sub_822935B0) {
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
	ctx.lr = 0x822935B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822935dc
	if (!ctx.cr6.eq) goto loc_822935DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x822937b8
	goto loc_822937B8;
loc_822935DC:
	// lwz r30,32(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r31,32(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 32);
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// subfic r11,r11,10
	ctx.xer.ca = ctx.r11.u32 <= 10;
	ctx.r11.u64 = static_cast<uint64_t>(10) - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// beq 0x82293774
	if (ctx.cr0.eq) goto loc_82293774;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r11.u32);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r31.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82293658
	if (ctx.cr6.eq) goto loc_82293658;
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
	ctx.lr = 0x82293658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82293658:
	// stw r30,4(r29)
	REX_STORE_U32(r29.u32 + 4, r30.u32);
loc_8229365C:
	// ld r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// ld r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 16);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// ld r30,24(r31)
	r30.u64 = REX_LOAD_U64(r31.u32 + 24);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r28,36(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// std r7,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// subf r6,r11,r28
	ctx.r6.u64 = r28.u64 - ctx.r11.u64;
	// std r4,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r4.u64);
	// std r3,16(r5)
	REX_STORE_U64(ctx.r5.u32 + 16, ctx.r3.u64);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// std r30,24(r5)
	REX_STORE_U64(ctx.r5.u32 + 24, r30.u64);
	// subf r7,r31,r28
	ctx.r7.u64 = r28.u64 - r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822936A4:
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822936bc
	if (!ctx.cr6.lt) goto loc_822936BC;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x822936c0
	goto loc_822936C0;
loc_822936BC:
	// stfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_822936C0:
	// lfsx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822936d8
	if (!ctx.cr6.gt) goto loc_822936D8;
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x822936dc
	goto loc_822936DC;
loc_822936D8:
	// stfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_822936DC:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822936a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822936A4;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8229374c
	if (!ctx.cr6.eq) goto loc_8229374C;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8229374c
	if (!ctx.cr6.eq) goto loc_8229374C;
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8229374c
	if (!ctx.cr6.eq) goto loc_8229374C;
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8229374c
	if (!ctx.cr6.eq) goto loc_8229374C;
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8229374c
	if (!ctx.cr6.eq) goto loc_8229374C;
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82293750
	if (ctx.cr6.eq) goto loc_82293750;
loc_8229374C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82293750:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82293764
	if (ctx.cr0.eq) goto loc_82293764;
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8229365c
	if (!ctx.cr6.eq) goto loc_8229365C;
loc_82293764:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x822937b8
	if (!ctx.cr6.eq) goto loc_822937B8;
	// b 0x822937b4
	goto loc_822937B4;
loc_82293774:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822937b0
	if (ctx.cr6.eq) goto loc_822937B0;
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
	ctx.lr = 0x822937B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822937B0:
	// stw r30,4(r29)
	REX_STORE_U32(r29.u32 + 4, r30.u32);
loc_822937B4:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_822937B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822A6908) {
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
	ctx.lr = 0x822A6910;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// bne cr6,0x822a692c
	if (!ctx.cr6.eq) goto loc_822A692C;
	// lwz r25,200(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
loc_822A692C:
	// lwz r11,276(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 276);
	// addi r31,r28,272
	r31.s64 = r28.s64 + 272;
	// lwz r27,0(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a6970
	if (!ctx.cr6.gt) goto loc_822A6970;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
loc_822A694C:
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, ctx.xer);
	// beq cr6,0x822a696c
	if (ctx.cr6.eq) goto loc_822A696C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a694c
	if (ctx.cr6.lt) goto loc_822A694C;
	// b 0x822a6970
	goto loc_822A6970;
loc_822A696C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822A6970:
	// lwz r10,276(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 276);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822a6a8c
	if (!ctx.cr6.eq) goto loc_822A6A8C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822a6a4c
	if (!ctx.cr6.eq) goto loc_822A6A4C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822a699c
	if (!ctx.cr0.eq) goto loc_822A699C;
	// li r29,1
	r29.s64 = 1;
loc_822A699C:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x822a6a4c
	if (!ctx.cr6.lt) goto loc_822A6A4C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822a69bc
	if (ctx.cr6.eq) goto loc_822A69BC;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822A69B4;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822a69c0
	goto loc_822A69C0;
loc_822A69BC:
	// li r30,0
	r30.s64 = 0;
loc_822A69C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822a69f8
	if (!ctx.cr6.gt) goto loc_822A69F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822A69D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a69ec
	if (ctx.cr6.eq) goto loc_822A69EC;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822A69EC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822a69d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A69D8;
loc_822A69F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a6a3c
	if (ctx.cr6.eq) goto loc_822A6A3C;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a6a34
	if (ctx.cr0.eq) goto loc_822A6A34;
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
	ctx.lr = 0x822A6A34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A6A34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822A6A3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_822A6A4C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a6a64
	if (ctx.cr0.eq) goto loc_822A6A64;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
loc_822A6A64:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r3,304(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 304);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A6A8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A6A8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822B8680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2ca4
	ctx.lr = 0x822B8694;
	// lfs f13,660(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 660);
	ctx.f13.f64 = double(temp.f32);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,656
	ctx.r11.s64 = ctx.r3.s64 + 656;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// lfs f12,664(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 664);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r4,640
	ctx.r9.s64 = ctx.r4.s64 + 640;
	// lfs f10,648(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 648);
	ctx.f10.f64 = double(temp.f32);
	// lwz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 88);
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f9,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lfs f7,644(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 644);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r3,640
	ctx.r10.s64 = ctx.r3.s64 + 640;
	// lfs f6,664(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 664);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r4,656
	ctx.r8.s64 = ctx.r4.s64 + 656;
	// lfs f5,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stw r6,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r6.u32);
	// lfs f4,640(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 640);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f3,644(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 644);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,648(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 648);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,660(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 660);
	f31.f64 = double(temp.f32);
	// fmsubs f10,f8,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, -ctx.f10.f64)));
	// lfs f13,80(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,132(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,656(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 656);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f8,f12,f13,f8
	ctx.f8.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f8.f64)));
	// lfs f30,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f29,640(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 640);
	f29.f64 = double(temp.f32);
	// fmadds f0,f9,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f0.f64)));
	// lfs f7,92(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f28,656(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 656);
	f28.f64 = double(temp.f32);
	// lfs f27,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	f27.f64 = double(temp.f32);
	// lfs f12,124(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f10,f9,f3,f10
	ctx.f10.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f3.f64, -ctx.f10.f64)));
	// fmadds f0,f5,f4,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f0.f64)));
	// fmadds f10,f2,f31,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, f31.f64, ctx.f10.f64)));
	// fmadds f0,f11,f1,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f0.f64)));
	// fnmsubs f11,f5,f29,f10
	ctx.f11.f64 = double(float(-std::fma(ctx.f5.f64, f29.f64, -ctx.f10.f64)));
	// fmadds f0,f6,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, f30.f64, ctx.f0.f64)));
	// fmadds f11,f28,f27,f11
	ctx.f11.f64 = double(float(std::fma(f28.f64, f27.f64, ctx.f11.f64)));
	// fnmsubs f0,f0,f7,f8
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f7.f64, -ctx.f8.f64)));
	// fnmsubs f0,f11,f7,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f7.f64, -ctx.f0.f64)));
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x822b8774
	if (!ctx.cr6.lt) goto loc_822B8774;
	// stfs f12,80(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 80, temp.u32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// b 0x822b8778
	goto loc_822B8778;
loc_822B8774:
	// stfs f11,80(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 80, temp.u32);
loc_822B8778:
	// lfs f12,624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,628(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f10,632(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 632);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f9,352(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,15048(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15048);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// beq cr6,0x822b8834
	if (ctx.cr6.eq) goto loc_822B8834;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f7,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f13,f8,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,612(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 612);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,616(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 616);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,52(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,56(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,608(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f11,f6,f8
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_822B8834:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,624(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 624);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,628(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 628);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,632(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 632);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,352(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 352);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f10
	ctx.cr6.compare(ctx.f6.f64, ctx.f10.f64);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// beq cr6,0x822b88f4
	if (ctx.cr6.eq) goto loc_822B88F4;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f8,72(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,608(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 608);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,612(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 612);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,68(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,616(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 616);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,64(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_822B88F4:
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2cf0
	ctx.lr = 0x822B88FC;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CA4F0) {
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
	ctx.lr = 0x822CA4F8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r19,1
	r19.s64 = 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r19,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r19.u32);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cab8c
	if (!ctx.cr0.eq) goto loc_822CAB8C;
	// lwz r11,304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// addi r20,r3,304
	r20.s64 = ctx.r3.s64 + 304;
	// lwz r10,308(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 308);
	// extsw r31,r11
	r31.s64 = ctx.r11.s32;
	// b 0x822ca5c4
	goto loc_822CA5C4;
loc_822CA52C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// rlwinm r8,r11,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// lbz r10,320(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 320);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822ca5b8
	if (ctx.cr6.eq) goto loc_822CA5B8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ca568
	if (ctx.cr6.eq) goto loc_822CA568;
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x822ca5b8
	goto loc_822CA5B8;
loc_822CA568:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bgt cr6,0x822ca5b4
	if (ctx.cr6.gt) goto loc_822CA5B4;
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822ca5b4
	if (!ctx.cr6.lt) goto loc_822CA5B4;
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x822CA5A8;
	sub_8269CC20(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r20)
	REX_STORE_U32(r20.u32 + 4, ctx.r11.u32);
loc_822CA5B4:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
loc_822CA5B8:
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
loc_822CA5C4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822ca52c
	if (ctx.cr6.lt) goto loc_822CA52C;
	// lwz r10,296(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 296);
	// addi r24,r25,292
	r24.s64 = r25.s64 + 292;
	// lwz r11,292(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 292);
	// li r21,0
	r21.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r11
	r31.s64 = ctx.r11.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r28,0
	r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822ca9f4
	if (!ctx.cr6.lt) goto loc_822CA9F4;
	// addi r22,r25,108
	r22.s64 = r25.s64 + 108;
loc_822CA608:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 4);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// clrlwi r8,r7,20
	ctx.r8.u64 = ctx.r7.u32 & 0xFFF;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r26,96(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 96);
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r9,r8,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// add r23,r9,r26
	r23.u64 = ctx.r9.u64 + r26.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bge cr6,0x822ca688
	if (!ctx.cr6.lt) goto loc_822CA688;
loc_822CA63C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r9.u8 & 0x3F));
	// andi. r9,r9,24702
	ctx.r9.u64 = ctx.r9.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822ca67c
	if (ctx.cr0.eq) goto loc_822CA67C;
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822ca67c
	if (!ctx.cr0.eq) goto loc_822CA67C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x822ca67c
	if (ctx.cr6.gt) goto loc_822CA67C;
	// rlwinm r10,r10,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ca7d4
	if (ctx.cr6.lt) goto loc_822CA7D4;
loc_822CA67C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// blt cr6,0x822ca63c
	if (ctx.cr6.lt) goto loc_822CA63C;
loc_822CA688:
	// li r29,0
	r29.s64 = 0;
loc_822CA68C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822ca92c
	if (ctx.cr6.eq) goto loc_822CA92C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ca6c4
	if (!ctx.cr6.eq) goto loc_822CA6C4;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ca6c4
	if (!ctx.cr0.eq) goto loc_822CA6C4;
	// rlwinm. r11,r7,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// beq 0x822ca6c8
	if (ctx.cr0.eq) goto loc_822CA6C8;
loc_822CA6C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CA6C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ca700
	if (ctx.cr0.eq) goto loc_822CA700;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r9,r9,0,21,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822ca700
	if (!ctx.cr0.eq) goto loc_822CA700;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r9,r9,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822ca700
	if (!ctx.cr0.eq) goto loc_822CA700;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// beq 0x822ca704
	if (ctx.cr0.eq) goto loc_822CA704;
loc_822CA700:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CA704:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ca738
	if (ctx.cr0.eq) goto loc_822CA738;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// clrlwi r9,r11,20
	ctx.r9.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi. r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// beq 0x822ca73c
	if (ctx.cr0.eq) goto loc_822CA73C;
loc_822CA738:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CA73C:
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm. r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ca758
	if (!ctx.cr0.eq) goto loc_822CA758;
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm. r9,r9,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822ca794
	if (ctx.cr0.eq) goto loc_822CA794;
loc_822CA758:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ca78c
	if (ctx.cr0.eq) goto loc_822CA78C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ca78c
	if (ctx.cr6.eq) goto loc_822CA78C;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ca78c
	if (ctx.cr0.eq) goto loc_822CA78C;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// beq 0x822ca790
	if (ctx.cr0.eq) goto loc_822CA790;
loc_822CA78C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CA790:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_822CA794:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ca92c
	if (ctx.cr0.eq) goto loc_822CA92C;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// beq cr6,0x822ca92c
	if (ctx.cr6.eq) goto loc_822CA92C;
	// addi r11,r28,8
	ctx.r11.s64 = r28.s64 + 8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x822ca7dc
	if (!ctx.cr6.eq) goto loc_822CA7DC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x822ca7cc
	if (!ctx.cr6.eq) goto loc_822CA7CC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ca7dc
	if (!ctx.cr0.eq) goto loc_822CA7DC;
loc_822CA7CC:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// b 0x822ca7e0
	goto loc_822CA7E0;
loc_822CA7D4:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// b 0x822ca68c
	goto loc_822CA68C;
loc_822CA7DC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822CA7E0:
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r6,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xF;
	// rlwinm r8,r5,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xF;
	// slw r9,r19,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r9,24600
	ctx.r11.u64 = ctx.r9.u64 & 24600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r8,r19,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r8.u8 & 0x3F));
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// andi. r4,r8,24600
	ctx.r4.u64 = ctx.r8.u64 & 24600;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfe r7,r7,r4
	temp.u8 = (~ctx.r7.u32 + ctx.r4.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne 0x822ca824
	if (!ctx.cr0.eq) goto loc_822CA824;
	// clrlwi. r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822ca860
	if (ctx.cr0.eq) goto loc_822CA860;
loc_822CA824:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ca858
	if (ctx.cr0.eq) goto loc_822CA858;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ca858
	if (ctx.cr6.eq) goto loc_822CA858;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ca858
	if (ctx.cr0.eq) goto loc_822CA858;
	// xor r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ca858
	if (!ctx.cr0.eq) goto loc_822CA858;
	// xor r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// rlwinm. r11,r11,0,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// beq 0x822ca85c
	if (ctx.cr0.eq) goto loc_822CA85C;
loc_822CA858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CA85C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_822CA860:
	// rlwinm r11,r9,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x60;
	// rlwinm r9,r8,0,25,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x60;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne 0x822ca888
	if (!ctx.cr0.eq) goto loc_822CA888;
	// clrlwi. r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822ca8cc
	if (ctx.cr0.eq) goto loc_822CA8CC;
loc_822CA888:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ca8c4
	if (ctx.cr0.eq) goto loc_822CA8C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ca8c4
	if (ctx.cr6.eq) goto loc_822CA8C4;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ca8c4
	if (ctx.cr0.eq) goto loc_822CA8C4;
	// xor r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ca8c4
	if (!ctx.cr0.eq) goto loc_822CA8C4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822cbc40
	ctx.lr = 0x822CA8B8;
	sub_822CBC40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// bne 0x822ca8c8
	if (!ctx.cr0.eq) goto loc_822CA8C8;
loc_822CA8C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822CA8C8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_822CA8CC:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ca92c
	if (ctx.cr0.eq) goto loc_822CA92C;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bge cr6,0x822ca92c
	if (!ctx.cr6.lt) goto loc_822CA92C;
loc_822CA8E8:
	// clrlwi. r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822ca92c
	if (ctx.cr0.eq) goto loc_822CA92C;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF;
	// slw r8,r19,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r8.u8 & 0x3F));
	// andi. r8,r8,2944
	ctx.r8.u64 = ctx.r8.u64 & 2944;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x822ca920
	if (ctx.cr0.eq) goto loc_822CA920;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r8,19
	ctx.r8.u64 = ctx.r8.u32 & 0x1FFF;
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
loc_822CA920:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// blt cr6,0x822ca8e8
	if (ctx.cr6.lt) goto loc_822CA8E8;
loc_822CA92C:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ca954
	if (!ctx.cr0.eq) goto loc_822CA954;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822ca9cc
	if (ctx.cr6.eq) goto loc_822CA9CC;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ca9cc
	if (ctx.cr0.eq) goto loc_822CA9CC;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// mr r21,r19
	r21.u64 = r19.u64;
	// rlwimi r11,r19,20,10,11
	ctx.r11.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 20) & 0x300000) | (ctx.r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// b 0x822ca9c8
	goto loc_822CA9C8;
loc_822CA954:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ca9cc
	if (!ctx.cr0.eq) goto loc_822CA9CC;
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -4);
	// li r8,2
	ctx.r8.s64 = 2;
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + r26.u64;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// rlwinm r7,r10,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// rlwinm. r7,r7,0,21,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7E0;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x822ca9c0
	if (!ctx.cr0.eq) goto loc_822CA9C0;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,4,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r5,r9,29,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// rlwinm r4,r9,26,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x7;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// rlwinm r9,r9,23,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x822ca9c0
	if (ctx.cr6.eq) goto loc_822CA9C0;
	// li r8,3
	ctx.r8.s64 = 3;
loc_822CA9C0:
	// rlwimi r11,r8,20,10,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x300000) | (ctx.r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// li r21,0
	r21.s64 = 0;
loc_822CA9C8:
	// stw r11,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r11.u32);
loc_822CA9CC:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r29
	r28.u64 = r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822ca608
	if (ctx.cr6.lt) goto loc_822CA608;
loc_822CA9F4:
	// clrlwi. r10,r21,24
	ctx.r10.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822caa6c
	if (ctx.cr0.eq) goto loc_822CAA6C;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r8,96(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 96);
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r10,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// xor r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// rlwinm. r6,r6,0,21,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x7E0;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x822caa64
	if (!ctx.cr0.eq) goto loc_822CAA64;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r10,4,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// clrlwi r5,r8,29
	ctx.r5.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r4,r8,29,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// rlwinm r5,r8,26,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x7;
	// rlwinm r8,r8,23,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x7;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x822caa64
	if (ctx.cr6.eq) goto loc_822CAA64;
	// li r7,3
	ctx.r7.s64 = 3;
loc_822CAA64:
	// rlwimi r9,r7,20,10,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0x300000) | (ctx.r9.u64 & 0xFFFFFFFFFFCFFFFF);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
loc_822CAA6C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,19896(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cab8c
	if (ctx.cr6.eq) goto loc_822CAB8C;
	// lwz r31,0(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 0);
	// b 0x822caab0
	goto loc_822CAAB0;
loc_822CAA84:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r10,20,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,19896(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 19896);
	// rlwinm r4,r10,24,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CAAAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822CAAB0:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822caa84
	if (ctx.cr6.lt) goto loc_822CAA84;
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// b 0x822cab74
	goto loc_822CAB74;
loc_822CAAD0:
	// lwz r11,260(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 260);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,256(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// clrlwi r11,r8,20
	ctx.r11.u64 = ctx.r8.u32 & 0xFFF;
	// divw r30,r9,r10
	r30.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x822cb8e0
	ctx.lr = 0x822CAAFC;
	sub_822CB8E0(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r6,0,23,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1C0;
	// rlwinm r9,r6,0,20,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE00;
	// rlwinm r7,r6,0,26,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x38;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r11,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// clrlwi r8,r6,29
	ctx.r8.u64 = ctx.r6.u32 & 0x7;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x822cab38
	if (ctx.cr6.eq) goto loc_822CAB38;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// bne cr6,0x822cab3c
	if (!ctx.cr6.eq) goto loc_822CAB3C;
loc_822CAB38:
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
loc_822CAB3C:
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r11,24,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF0;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,19896(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 19896);
	// rlwinm r5,r4,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0x3F;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CAB70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822CAB74:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822caad0
	if (ctx.cr6.lt) goto loc_822CAAD0;
loc_822CAB8C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_822FE938) {
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
	ctx.lr = 0x822FE940;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r24,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, r24.u32);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stw r24,52(r4)
	REX_STORE_U32(ctx.r4.u32 + 52, r24.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r24,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r26,r4,52
	r26.s64 = ctx.r4.s64 + 52;
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FE980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r10,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// or r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 | ctx.r9.u64;
	// bl 0x823133d0
	ctx.lr = 0x822FE9C4;
	sub_823133D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fe9e4
	if (ctx.cr0.eq) goto loc_822FE9E4;
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// b 0x822ff270
	goto loc_822FF270;
loc_822FE9E4:
	// lwz r25,40(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822fefac
	if (ctx.cr6.eq) goto loc_822FEFAC;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FEA08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fea74
	if (ctx.cr0.eq) goto loc_822FEA74;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822fea38
	if (!ctx.cr0.eq) goto loc_822FEA38;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,156(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r10,200(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 200);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822fea74
	if (ctx.cr6.eq) goto loc_822FEA74;
loc_822FEA38:
	// lwz r10,152(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fea74
	if (ctx.cr6.eq) goto loc_822FEA74;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,156(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FEA60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822fea74
	if (!ctx.cr6.eq) goto loc_822FEA74;
	// li r3,56
	ctx.r3.s64 = 56;
	// b 0x822ff270
	goto loc_822FF270;
loc_822FEA74:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233f590
	ctx.lr = 0x822FEA8C;
	sub_8233F590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FEAB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f3,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8233f4f0
	ctx.lr = 0x822FEAD0;
	sub_8233F4F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// andis. r4,r11,1072
	ctx.r4.u64 = ctx.r11.u64 & 70254592;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bl 0x8233fa68
	ctx.lr = 0x822FEAE8;
	sub_8233FA68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FEB0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r8,140
	ctx.r8.s64 = 140;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f0,3992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3992);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r7.u32);
	// lfs f13,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r30,r8
	REX_STORE_U32(r30.u32 + ctx.r8.u32, ctx.f0.u32);
	// lwz r4,52(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// bl 0x8233fb68
	ctx.lr = 0x822FEB50;
	sub_8233FB68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f9f0
	ctx.lr = 0x822FEB78;
	sub_8232F9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FEBA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FEBA4:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8233f440
	ctx.lr = 0x822FEBB8;
	sub_8233F440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fec3c
	if (ctx.cr6.eq) goto loc_822FEC3C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822fec10
	if (ctx.cr6.eq) goto loc_822FEC10;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233f8e8
	ctx.lr = 0x822FEBE4;
	sub_8233F8E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fec10
	if (!ctx.cr0.eq) goto loc_822FEC10;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fec10
	if (ctx.cr6.eq) goto loc_822FEC10;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r4,r11,-8928
	ctx.r4.s64 = ctx.r11.s64 + -8928;
	// bl 0x8233ef78
	ctx.lr = 0x822FEC08;
	sub_8233EF78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
loc_822FEC10:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fec20
	if (!ctx.cr6.eq) goto loc_822FEC20;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822FEC20:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822f7c10
	ctx.lr = 0x822FEC3C;
	sub_822F7C10(ctx, base);
loc_822FEC3C:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r4,r11,-8928
	ctx.r4.s64 = ctx.r11.s64 + -8928;
	// bl 0x8233ef78
	ctx.lr = 0x822FEC4C;
	sub_8233EF78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FEC70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8233ef30
	ctx.lr = 0x822FEC84;
	sub_8233EF30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fec94
	if (ctx.cr0.eq) goto loc_822FEC94;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FEC94:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r4,r11,18,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// bl 0x8233ed98
	ctx.lr = 0x822FECA4;
	sub_8233ED98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fecb4
	if (ctx.cr0.eq) goto loc_822FECB4;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FECB4:
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// beq 0x822fecd4
	if (ctx.cr0.eq) goto loc_822FECD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r4,r11,0,29,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
loc_822FECD4:
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8233f390
	ctx.lr = 0x822FECDC;
	sub_8233F390(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fecec
	if (ctx.cr0.eq) goto loc_822FECEC;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FECEC:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8233f3d8
	ctx.lr = 0x822FECF8;
	sub_8233F3D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fed08
	if (ctx.cr0.eq) goto loc_822FED08;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FED08:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822feec4
	if (ctx.cr0.eq) goto loc_822FEEC4;
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fed3c
	if (!ctx.cr0.eq) goto loc_822FED3C;
	// lfs f2,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lfs f1,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8233f018
	ctx.lr = 0x822FED2C;
	sub_8233F018(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fed3c
	if (ctx.cr0.eq) goto loc_822FED3C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FED3C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,3740(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3740);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x822fed70
	if (!ctx.cr6.eq) goto loc_822FED70;
	// lfs f13,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822fed70
	if (!ctx.cr6.eq) goto loc_822FED70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822fedac
	if (ctx.cr6.eq) goto loc_822FEDAC;
loc_822FED70:
	// lfs f3,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lfs f2,252(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8233f070
	ctx.lr = 0x822FED80;
	sub_8233F070(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fed90
	if (ctx.cr0.eq) goto loc_822FED90;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FED90:
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8233f0d8
	ctx.lr = 0x822FED9C;
	sub_8233F0D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fedac
	if (ctx.cr0.eq) goto loc_822FEDAC;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FEDAC:
	// lfs f1,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8233f208
	ctx.lr = 0x822FEDB8;
	sub_8233F208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fedc8
	if (ctx.cr0.eq) goto loc_822FEDC8;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FEDC8:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82310fb0
	ctx.lr = 0x822FEDD8;
	sub_82310FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r5,r31,188
	ctx.r5.s64 = r31.s64 + 188;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r10.u32);
	// lfs f13,108(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// lfs f12,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x8233efc0
	ctx.lr = 0x822FEE34;
	sub_8233EFC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fee44
	if (ctx.cr0.eq) goto loc_822FEE44;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FEE44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x822fee64
	if (!ctx.cr6.eq) goto loc_822FEE64;
	// lfs f13,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822fee70
	if (!ctx.cr6.eq) goto loc_822FEE70;
loc_822FEE64:
	// lfs f13,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822fee8c
	if (ctx.cr6.eq) goto loc_822FEE8C;
loc_822FEE70:
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f9988
	ctx.lr = 0x822FEE84;
	sub_822F9988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
loc_822FEE8C:
	// lfs f1,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8233f178
	ctx.lr = 0x822FEE98;
	sub_8233F178(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822feea8
	if (ctx.cr0.eq) goto loc_822FEEA8;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FEEA8:
	// lfs f1,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8233f1c0
	ctx.lr = 0x822FEEB4;
	sub_8233F1C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822feec4
	if (ctx.cr0.eq) goto loc_822FEEC4;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FEEC4:
	// lfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822fc2e0
	ctx.lr = 0x822FEECC;
	sub_822FC2E0(ctx, base);
	// lfs f1,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x822fc2e0
	ctx.lr = 0x822FEED8;
	sub_822FC2E0(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fef04
	if (ctx.cr0.eq) goto loc_822FEF04;
	// lhz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 100);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fef04
	if (ctx.cr0.eq) goto loc_822FEF04;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82330398
	ctx.lr = 0x822FEF04;
	sub_82330398(ctx, base);
loc_822FEF04:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ff044
	if (ctx.cr6.eq) goto loc_822FF044;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_822FEF14:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823ef5f0
	ctx.lr = 0x822FEF24;
	sub_823EF5F0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// stw r10,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fef60
	if (!ctx.cr6.eq) goto loc_822FEF60;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
loc_822FEF60:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// bl 0x8233eea0
	ctx.lr = 0x822FEF7C;
	sub_8233EEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fef9c
	if (ctx.cr0.eq) goto loc_822FEF9C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x822fef9c
	if (ctx.cr6.eq) goto loc_822FEF9C;
	// cmpwi cr6,r3,82
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 82, ctx.xer);
	// beq cr6,0x822fef9c
	if (ctx.cr6.eq) goto loc_822FEF9C;
	// cmpwi cr6,r3,73
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 73, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FEF9C:
	// addi r29,r29,76
	r29.s64 = r29.s64 + 76;
	// cmpwi cr6,r29,304
	ctx.cr6.compare<int32_t>(r29.s32, 304, ctx.xer);
	// blt cr6,0x822fef14
	if (ctx.cr6.lt) goto loc_822FEF14;
	// b 0x822ff098
	goto loc_822FF098;
loc_822FEFAC:
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ff264
	if (ctx.cr6.eq) goto loc_822FF264;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x8232ffe8
	ctx.lr = 0x822FEFCC;
	sub_8232FFE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FEFF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f3,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lfs f2,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232ff68
	ctx.lr = 0x822FF010;
	sub_8232FF68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r5,48(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r11,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,-10820(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -10820);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232fa40
	ctx.lr = 0x822FF040;
	sub_8232FA40(ctx, base);
	// b 0x822feba4
	goto loc_822FEBA4;
loc_822FF044:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823ef5f0
	ctx.lr = 0x822FF054;
	sub_823EF5F0(ctx, base);
	// li r11,240
	ctx.r11.s64 = 240;
	// stw r28,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r28.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// bl 0x8233eea0
	ctx.lr = 0x822FF078;
	sub_8233EEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ff098
	if (ctx.cr0.eq) goto loc_822FF098;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x822ff098
	if (ctx.cr6.eq) goto loc_822FF098;
	// cmpwi cr6,r3,82
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 82, ctx.xer);
	// beq cr6,0x822ff098
	if (ctx.cr6.eq) goto loc_822FF098;
	// cmpwi cr6,r3,73
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 73, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FF098:
	// lwz r29,92(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822ff0a8
	if (!ctx.cr6.eq) goto loc_822FF0A8;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_822FF0A8:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82310c00
	ctx.lr = 0x822FF0B4;
	sub_82310C00(ctx, base);
	// stfs f1,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 96, temp.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82310888
	ctx.lr = 0x822FF0C8;
	sub_82310888(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ff100
	if (ctx.cr0.eq) goto loc_822FF100;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ff100
	if (!ctx.cr0.eq) goto loc_822FF100;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82310888
	ctx.lr = 0x822FF0EC;
	sub_82310888(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ff13c
	if (ctx.cr0.eq) goto loc_822FF13C;
	// lfs f0,100(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
	// b 0x822ff13c
	goto loc_822FF13C;
loc_822FF100:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82310d78
	ctx.lr = 0x822FF10C;
	sub_82310D78(ctx, base);
	// stfs f1,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82310888
	ctx.lr = 0x822FF120;
	sub_82310888(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ff130
	if (ctx.cr0.eq) goto loc_822FF130;
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 100, temp.u32);
loc_822FF130:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
loc_822FF13C:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FF158;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r5,r1,105
	ctx.r5.s64 = ctx.r1.s64 + 105;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FF17C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lbz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822ff1d4
	if (!ctx.cr0.eq) goto loc_822FF1D4;
	// lbz r11,105(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 105);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822ff1d4
	if (!ctx.cr0.eq) goto loc_822FF1D4;
	// lfs f8,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lfs f7,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,300(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,296(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,288(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8233ecb0
	ctx.lr = 0x822FF1C4;
	sub_8233ECB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ff1d4
	if (ctx.cr0.eq) goto loc_822FF1D4;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FF1D4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822ff254
	if (ctx.cr6.eq) goto loc_822FF254;
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ff254
	if (ctx.cr6.eq) goto loc_822FF254;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r11,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233f720
	ctx.lr = 0x822FF204;
	sub_8233F720(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ff270
	if (!ctx.cr0.eq) goto loc_822FF270;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822ff230
	if (ctx.cr6.lt) goto loc_822FF230;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r11.u32);
loc_822FF230:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,140(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x8233ede0
	ctx.lr = 0x822FF240;
	sub_8233EDE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ff250
	if (ctx.cr0.eq) goto loc_822FF250;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// bne cr6,0x822ff270
	if (!ctx.cr6.eq) goto loc_822FF270;
loc_822FF250:
	// stw r24,140(r30)
	REX_STORE_U32(r30.u32 + 140, r24.u32);
loc_822FF254:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// b 0x822ff26c
	goto loc_822FF26C;
loc_822FF264:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r11.u32);
loc_822FF26C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FF270:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8234D7F0) {
	REX_FUNC_PROLOGUE();
	// stw r4,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234D858) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r7,r11,9756
	ctx.r7.s64 = ctx.r11.s64 + 9756;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r8,r3,24
	ctx.r8.s64 = ctx.r3.s64 + 24;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r11,r3,116
	ctx.r11.s64 = ctx.r3.s64 + 116;
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r8,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r6,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r10,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// bl 0x8234b368
	ctx.lr = 0x8234D8D0;
	sub_8234B368(ctx, base);
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

DEFINE_REX_FUNC(sub_823533E0) {
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
	ctx.lr = 0x823533E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-64
	ctx.r11.s64 = -64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82353590
	if (!ctx.cr6.lt) goto loc_82353590;
	// bl 0x82352058
	ctx.lr = 0x82353408;
	sub_82352058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82353590
	if (!ctx.cr6.eq) goto loc_82353590;
	// lwz r11,-4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// addi r31,r4,-8
	r31.s64 = ctx.r4.s64 + -8;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r30,r11,0,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// add r9,r30,r31
	ctx.r9.u64 = r30.u64 + r31.u64;
	// blt cr6,0x82353590
	if (ctx.cr6.lt) goto loc_82353590;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82353590
	if (ctx.cr6.eq) goto loc_82353590;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82353590
	if (!ctx.cr6.lt) goto loc_82353590;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82353590
	if (ctx.cr6.eq) goto loc_82353590;
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// bge cr6,0x82353460
	if (!ctx.cr6.lt) goto loc_82353460;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82353468
	goto loc_82353468;
loc_82353460:
	// addi r10,r28,11
	ctx.r10.s64 = r28.s64 + 11;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
loc_82353468:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823534e4
	if (ctx.cr6.lt) goto loc_823534E4;
	// subf r9,r10,r30
	ctx.r9.u64 = r30.u64 - ctx.r10.u64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x823534d8
	if (ctx.cr6.lt) goto loc_823534D8;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r3,r5,1
	ctx.r3.u64 = ctx.r5.u64 | 1;
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x823534d8
	if (ctx.cr6.eq) goto loc_823534D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82352ca0
	ctx.lr = 0x823534D8;
	sub_82352CA0(ctx, base);
loc_823534D8:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823534E4:
	// lwz r8,24(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82353544
	if (!ctx.cr6.eq) goto loc_82353544;
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + r30.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82353544
	if (!ctx.cr6.gt) goto loc_82353544;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// ori r5,r10,1
	ctx.r5.u64 = ctx.r10.u64 | 1;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r11,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r11.u32);
	// stw r10,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82353544:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82352960
	ctx.lr = 0x82353550;
	sub_82352960(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82353584
	if (ctx.cr6.eq) goto loc_82353584;
	// addi r5,r30,-4
	ctx.r5.s64 = r30.s64 + -4;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r28.u32, ctx.xer);
	// blt cr6,0x8235356c
	if (ctx.cr6.lt) goto loc_8235356C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8235356C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82353578;
	sub_823EF2F8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82352ca0
	ctx.lr = 0x82353584;
	sub_82352CA0(ctx, base);
loc_82353584:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82353590:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8235C4C0) {
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
	ctx.lr = 0x8235C4C8;
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f0,6792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6792);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f30,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f30.f64 = double(temp.f32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f13,6796(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 6796);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lfs f31,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,6788(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 6788);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f10,6776(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 6776);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,6784(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 6784);
	ctx.f9.f64 = double(temp.f32);
	// li r11,-10000
	ctx.r11.s64 = -10000;
	// li r29,0
	r29.s64 = 0;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r9,-2602
	ctx.r9.s64 = -2602;
	// lfs f29,3712(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3712);
	f29.f64 = double(temp.f32);
	// li r8,200
	ctx.r8.s64 = 200;
	// lfs f11,6780(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 6780);
	ctx.f11.f64 = double(temp.f32);
	// li r7,831
	ctx.r7.s64 = 831;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r8,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r7,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// stfs f29,160(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f10,180(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x8235c298
	ctx.lr = 0x8235C5D0;
	sub_8235C298(ctx, base);
	// stw r30,564(r31)
	REX_STORE_U32(r31.u32 + 564, r30.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r28,r31,28
	r28.s64 = r31.s64 + 28;
	// stw r27,548(r31)
	REX_STORE_U32(r31.u32 + 548, r27.u32);
loc_8235C5E0:
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,204
	ctx.r4.s64 = 204;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8235C5F0;
	sub_823EF5F0(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235b050
	ctx.lr = 0x8235C600;
	sub_8235B050(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,132
	r28.s64 = r28.s64 + 132;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x8235c5e0
	if (ctx.cr6.lt) goto loc_8235C5E0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235c730
	if (!ctx.cr6.eq) goto loc_8235C730;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r9,23
	ctx.r9.s64 = 23;
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,3708(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3708);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stfs f30,144(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// lwz r4,548(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r5,r6,10628
	ctx.r5.s64 = ctx.r6.s64 + 10628;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 1012);
	// li r6,138
	ctx.r6.s64 = 138;
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// ori r10,r3,16
	ctx.r10.u64 = ctx.r3.u64 | 16;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,304(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 304);
	// mulli r4,r9,84
	ctx.r4.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(84));
	// bl 0x82330e40
	ctx.lr = 0x8235C6B0;
	sub_82330E40(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235c6d4
	if (!ctx.cr6.eq) goto loc_8235C6D4;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
loc_8235C6D4:
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235c730
	if (!ctx.cr6.gt) goto loc_8235C730;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8235C6EC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x8235C700;
	sub_823EF2F8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r29,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// stfs f31,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r9,548(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r30,r30,84
	r30.s64 = r30.s64 + 84;
	// lwz r8,304(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 304);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8235c6ec
	if (ctx.cr6.lt) goto loc_8235C6EC;
loc_8235C730:
	// addi r10,r27,22444
	ctx.r10.s64 = r27.s64 + 22444;
	// stfs f31,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 576, temp.u32);
	// stfs f31,572(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 572, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,568(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 568, temp.u32);
	// stb r26,561(r31)
	REX_STORE_U8(r31.u32 + 561, r26.u8);
	// stfs f31,580(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 580, temp.u32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// stfs f31,584(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 584, temp.u32);
	// stfs f31,588(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 588, temp.u32);
	// stfs f31,556(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 556, temp.u32);
	// bne cr6,0x8235c764
	if (!ctx.cr6.eq) goto loc_8235C764;
	// stb r11,560(r31)
	REX_STORE_U8(r31.u32 + 560, ctx.r11.u8);
loc_8235C764:
	// addi r10,r27,24980
	ctx.r10.s64 = r27.s64 + 24980;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235c774
	if (!ctx.cr6.eq) goto loc_8235C774;
	// stb r11,560(r31)
	REX_STORE_U8(r31.u32 + 560, ctx.r11.u8);
loc_8235C774:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

DEFINE_REX_FUNC(sub_82375B70) {
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
	ctx.lr = 0x82375B78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x823753a0
	ctx.lr = 0x82375B98;
	sub_823753A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c08
	if (!ctx.cr6.eq) goto loc_82375C08;
loc_82375BA0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82375BAC;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375c08
	if (!ctx.cr6.eq) goto loc_82375C08;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// beq cr6,0x82375bdc
	if (ctx.cr6.eq) goto loc_82375BDC;
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// beq cr6,0x82375bdc
	if (ctx.cr6.eq) goto loc_82375BDC;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// bge cr6,0x82375bdc
	if (!ctx.cr6.lt) goto loc_82375BDC;
	// stbx r4,r31,r29
	REX_STORE_U8(r31.u32 + r29.u32, ctx.r4.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82375BDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82375428
	ctx.lr = 0x82375BE4;
	sub_82375428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82375ba0
	if (ctx.cr6.eq) goto loc_82375BA0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82375bfc
	if (ctx.cr6.eq) goto loc_82375BFC;
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
loc_82375BFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(r31.u32 + r29.u32, ctx.r11.u8);
loc_82375C08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8237DAF0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8237db04
	if (!ctx.cr6.eq) goto loc_8237DB04;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8237DB04:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r3,1100
	ctx.r10.s64 = ctx.r3.s64 + 1100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8237DB10:
	// lwz r9,-704(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -704);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237db20
	if (ctx.cr6.eq) goto loc_8237DB20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8237DB20:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237db30
	if (ctx.cr6.eq) goto loc_8237DB30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8237DB30:
	// lwz r9,704(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 704);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237db40
	if (ctx.cr6.eq) goto loc_8237DB40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8237DB40:
	// lwz r9,1408(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1408);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8237db50
	if (ctx.cr6.eq) goto loc_8237DB50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8237DB50:
	// addi r10,r10,2816
	ctx.r10.s64 = ctx.r10.s64 + 2816;
	// bdnz 0x8237db10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237DB10;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823811B8) {
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
	ctx.lr = 0x823811C0;
	// lbz r10,1136(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 1136);
	// lwz r11,552(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 552);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82381200
	if (!ctx.cr6.lt) goto loc_82381200;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,548(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 548);
	// addi r27,r5,1138
	r27.s64 = ctx.r5.s64 + 1138;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// lhz r7,1(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 1);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8238123c
	if (ctx.cr6.eq) goto loc_8238123C;
	// lwz r11,556(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 556);
	// lwz r10,564(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 564);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,556(r4)
	REX_STORE_U32(ctx.r4.u32 + 556, ctx.r11.u32);
loc_82381200:
	// lbz r11,1135(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1135);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238121c
	if (!ctx.cr6.eq) goto loc_8238121C;
	// lbz r11,460(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 460);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,460(r4)
	REX_STORE_U8(ctx.r4.u32 + 460, ctx.r10.u8);
loc_8238121C:
	// lwz r11,548(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 548);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,556(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 556);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// stw r9,548(r4)
	REX_STORE_U32(ctx.r4.u32 + 548, ctx.r9.u32);
	// stw r8,560(r4)
	REX_STORE_U32(ctx.r4.u32 + 560, ctx.r8.u32);
	// b 0x826a1cf0
	return;
loc_8238123C:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r23,0
	r23.s64 = 0;
	// addi r9,r11,31488
	ctx.r9.s64 = ctx.r11.s64 + 31488;
loc_82381248:
	// lwz r30,552(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 552);
loc_8238124C:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lhz r7,2162(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 2162);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r29,r10,r27
	r29.u64 = ctx.r10.u64 + r27.u64;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r26,r7,0,28,28
	r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lhz r25,1(r29)
	r25.u64 = REX_LOAD_U16(r29.u32 + 1);
	// lhz r24,1(r31)
	r24.u64 = REX_LOAD_U16(r31.u32 + 1);
	// bne cr6,0x823813ec
	if (!ctx.cr6.eq) goto loc_823813EC;
	// lbz r11,1135(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1135);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823813ec
	if (!ctx.cr6.eq) goto loc_823813EC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82381310
	if (ctx.cr6.eq) goto loc_82381310;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,448(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 448);
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r22,r6,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r22,r9
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + ctx.r9.u32);
	// lwz r22,0(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r10,8363
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(8363));
	// lwzx r7,r8,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mulli r7,r7,8363
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(8363));
	// mulli r8,r8,8363
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(8363));
	// divwu r7,r7,r22
	ctx.r7.u64 = uint32_t(r22.u32 ? ctx.r7.u32 / r22.u32 : 0);
	// divwu r8,r8,r22
	ctx.r8.u64 = uint32_t(r22.u32 ? ctx.r8.u32 / r22.u32 : 0);
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r22,r10,r22
	r22.u64 = uint32_t(r22.u32 ? ctx.r10.u32 / r22.u32 : 0);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// subf r7,r7,r22
	ctx.r7.u64 = r22.u64 - ctx.r7.u64;
	// b 0x82381350
	goto loc_82381350;
loc_82381310:
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// lwz r10,448(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 448);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r22,4(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// mulli r10,r10,8363
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(8363));
	// lwzx r8,r7,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mulli r7,r8,8363
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(8363));
	// divwu r8,r7,r22
	ctx.r8.u64 = uint32_t(r22.u32 ? ctx.r7.u32 / r22.u32 : 0);
	// divwu r7,r10,r22
	ctx.r7.u64 = uint32_t(r22.u32 ? ctx.r10.u32 / r22.u32 : 0);
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
loc_82381350:
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// clrlwi r22,r8,31
	r22.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x823813bc
	if (ctx.cr6.eq) goto loc_823813BC;
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r31,r9,4
	r31.s64 = ctx.r9.s64 + 4;
	// lwz r22,0(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// divwu r8,r10,r22
	ctx.r8.u64 = uint32_t(r22.u32 ? ctx.r10.u32 / r22.u32 : 0);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r22,0
	if (r22.s32 == 0 || r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mulli r31,r11,8363
	r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(8363));
	// mulli r11,r10,8363
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(8363));
	// divwu r11,r11,r22
	ctx.r11.u64 = uint32_t(r22.u32 ? ctx.r11.u32 / r22.u32 : 0);
	// divwu r10,r31,r22
	ctx.r10.u64 = uint32_t(r22.u32 ? r31.u32 / r22.u32 : 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// b 0x82381404
	goto loc_82381404;
loc_823813BC:
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mulli r8,r8,8363
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(8363));
	// divwu r11,r8,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r8.u32 / ctx.r11.u32 : 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x82381404
	goto loc_82381404;
loc_823813EC:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// rlwinm r7,r28,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
loc_82381404:
	// lbz r31,1135(r5)
	r31.u64 = REX_LOAD_U8(ctx.r5.u32 + 1135);
	// rlwinm r8,r7,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82381464
	if (ctx.cr6.eq) goto loc_82381464;
	// lbz r10,1222(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 1222);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82381464
	if (ctx.cr6.lt) goto loc_82381464;
	// lbz r11,584(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82381464
	if (!ctx.cr6.eq) goto loc_82381464;
	// lbz r11,1221(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1221);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82381520
	if (ctx.cr6.eq) goto loc_82381520;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,552(r4)
	REX_STORE_U32(ctx.r4.u32 + 552, ctx.r11.u32);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lhz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 1);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,548(r4)
	REX_STORE_U32(ctx.r4.u32 + 548, ctx.r10.u32);
	// b 0x8238124c
	goto loc_8238124C;
loc_82381464:
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823814ac
	if (ctx.cr6.eq) goto loc_823814AC;
	// lbz r10,1220(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 1220);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823814ac
	if (ctx.cr6.lt) goto loc_823814AC;
	// lbz r11,1219(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1219);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82381608
	if (!ctx.cr6.gt) goto loc_82381608;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,552(r4)
	REX_STORE_U32(ctx.r4.u32 + 552, ctx.r11.u32);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lhz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 1);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,548(r4)
	REX_STORE_U32(ctx.r4.u32 + 548, ctx.r10.u32);
	// b 0x8238124c
	goto loc_8238124C;
loc_823814AC:
	// lbz r11,1136(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1136);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8238163c
	if (ctx.cr6.eq) goto loc_8238163C;
	// subf. r11,r25,r24
	ctx.r11.u64 = r24.u64 - r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823814e8
	if (ctx.cr0.eq) goto loc_823814E8;
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r7,r7,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r7,564(r4)
	REX_STORE_U32(ctx.r4.u32 + 564, ctx.r7.u32);
	// andc r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x823814ec
	goto loc_823814EC;
loc_823814E8:
	// stw r23,564(r4)
	REX_STORE_U32(ctx.r4.u32 + 564, r23.u32);
loc_823814EC:
	// lwz r11,552(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 552);
	// stw r8,556(r4)
	REX_STORE_U32(ctx.r4.u32 + 556, ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,552(r4)
	REX_STORE_U32(ctx.r4.u32 + 552, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r8,548(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 548);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + r27.u64;
	// lhz r11,1(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 1);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82381248
	if (ctx.cr6.eq) goto loc_82381248;
	// b 0x82381200
	goto loc_82381200;
loc_82381520:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x823815f8
	if (!ctx.cr6.eq) goto loc_823815F8;
	// rlwinm r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823815f8
	if (!ctx.cr6.eq) goto loc_823815F8;
loc_82381534:
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823815b0
	if (ctx.cr6.eq) goto loc_823815B0;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r8,448(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 448);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mulli r5,r7,8363
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(8363));
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwzx r3,r6,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r11,r6,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// mulli r10,r3,8363
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(8363));
	// mulli r9,r11,8363
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(8363));
	// divwu r11,r10,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// divwu r10,r9,r8
	ctx.r10.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// divwu r8,r5,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r5.u32 / ctx.r8.u32 : 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// subf r3,r5,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r5.u64;
	// stw r3,560(r4)
	REX_STORE_U32(ctx.r4.u32 + 560, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf0
	return;
loc_823815B0:
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// lwz r10,448(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 448);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// mulli r11,r3,8363
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(8363));
	// lwzx r10,r6,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// mulli r9,r10,8363
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(8363));
	// divwu r8,r9,r5
	ctx.r8.u64 = uint32_t(ctx.r5.u32 ? ctx.r9.u32 / ctx.r5.u32 : 0);
	// divwu r7,r11,r5
	ctx.r7.u64 = uint32_t(ctx.r5.u32 ? ctx.r11.u32 / ctx.r5.u32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,560(r4)
	REX_STORE_U32(ctx.r4.u32 + 560, ctx.r6.u32);
	// b 0x826a1cf0
	return;
loc_823815F8:
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,560(r4)
	REX_STORE_U32(ctx.r4.u32 + 560, ctx.r11.u32);
	// b 0x826a1cf0
	return;
loc_82381608:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8238161c
	if (!ctx.cr6.eq) goto loc_8238161C;
	// rlwinm r10,r31,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82381534
	if (ctx.cr6.eq) goto loc_82381534;
loc_8238161C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r8,560(r4)
	REX_STORE_U32(ctx.r4.u32 + 560, ctx.r8.u32);
	// b 0x826a1cf0
	return;
loc_8238163C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82381724
	if (!ctx.cr6.eq) goto loc_82381724;
	// rlwinm r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82381724
	if (!ctx.cr6.eq) goto loc_82381724;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823816d4
	if (ctx.cr6.eq) goto loc_823816D4;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r8,448(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 448);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mulli r5,r7,8363
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(8363));
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwzx r3,r6,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r11,r6,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// mulli r10,r3,8363
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(8363));
	// mulli r9,r11,8363
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(8363));
	// divwu r11,r10,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// divwu r10,r9,r8
	ctx.r10.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// divwu r8,r5,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r5.u32 / ctx.r8.u32 : 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// stb r11,568(r4)
	REX_STORE_U8(ctx.r4.u32 + 568, ctx.r11.u8);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// subf r3,r5,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r5.u64;
	// stw r3,560(r4)
	REX_STORE_U32(ctx.r4.u32 + 560, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf0
	return;
loc_823816D4:
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// lwz r10,448(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 448);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// mulli r11,r3,8363
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(8363));
	// lwzx r10,r6,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// mulli r9,r10,8363
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(8363));
	// divwu r7,r11,r5
	ctx.r7.u64 = uint32_t(ctx.r5.u32 ? ctx.r11.u32 / ctx.r5.u32 : 0);
	// divwu r8,r9,r5
	ctx.r8.u64 = uint32_t(ctx.r5.u32 ? ctx.r9.u32 / ctx.r5.u32 : 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// stb r11,568(r4)
	REX_STORE_U8(ctx.r4.u32 + 568, ctx.r11.u8);
	// stw r6,560(r4)
	REX_STORE_U32(ctx.r4.u32 + 560, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf0
	return;
loc_82381724:
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,560(r4)
	REX_STORE_U32(ctx.r4.u32 + 560, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,568(r4)
	REX_STORE_U8(ctx.r4.u32 + 568, ctx.r11.u8);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823C0830) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823C0838;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823c086c
	if (!ctx.cr6.eq) goto loc_823C086C;
	// bl 0x8269dfa8
	ctx.lr = 0x823C084C;
	sub_8269DFA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-31628
	ctx.r4.s64 = ctx.r11.s64 + -31628;
	// addi r5,r10,-31016
	ctx.r5.s64 = ctx.r10.s64 + -31016;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x8269f3c0
	ctx.lr = 0x823C0864;
	sub_8269F3C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823C086C:
	// lis r10,19456
	ctx.r10.s64 = 1275068416;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r30,r10,17408
	r30.u64 = ctx.r10.u64 | 17408;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x823c08a4
	if (!ctx.cr6.eq) goto loc_823C08A4;
	// bl 0x8269dfa8
	ctx.lr = 0x823C0884;
	sub_8269DFA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-31628
	ctx.r4.s64 = ctx.r11.s64 + -31628;
	// addi r5,r10,-31064
	ctx.r5.s64 = ctx.r10.s64 + -31064;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x8269f3c0
	ctx.lr = 0x823C089C;
	sub_8269F3C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823C08A4:
	// lis r10,19523
	ctx.r10.s64 = 1279459328;
	// ori r9,r10,17492
	ctx.r9.u64 = ctx.r10.u64 | 17492;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823c08e8
	if (ctx.cr6.eq) goto loc_823C08E8;
	// lis r10,21572
	ctx.r10.s64 = 1413742592;
	// ori r9,r10,17228
	ctx.r9.u64 = ctx.r10.u64 | 17228;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823c08e8
	if (ctx.cr6.eq) goto loc_823C08E8;
	// bl 0x8269dfa8
	ctx.lr = 0x823C08C8;
	sub_8269DFA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-31628
	ctx.r4.s64 = ctx.r11.s64 + -31628;
	// addi r5,r10,-31192
	ctx.r5.s64 = ctx.r10.s64 + -31192;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x8269f3c0
	ctx.lr = 0x823C08E0;
	sub_8269F3C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823C08E8:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x823bef58
	ctx.lr = 0x823C08F0;
	sub_823BEF58(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r5,101
	ctx.r5.s64 = 101;
	// addi r29,r11,-31680
	r29.s64 = ctx.r11.s64 + -31680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823311a8
	ctx.lr = 0x823C0908;
	sub_823311A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,101
	ctx.r5.s64 = 101;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x823311a8
	ctx.lr = 0x823C0918;
	sub_823311A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,101
	ctx.r5.s64 = 101;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x823311a8
	ctx.lr = 0x823C0928;
	sub_823311A8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,101
	ctx.r5.s64 = 101;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823311a8
	ctx.lr = 0x823C093C;
	sub_823311A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823C8BF0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823c8c00
	if (!ctx.cr6.eq) goto loc_823C8C00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823C8C00:
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// bne cr6,0x823c8c18
	if (!ctx.cr6.eq) goto loc_823C8C18;
	// lwz r11,1408(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1408);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8C18:
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bne cr6,0x823c8c30
	if (!ctx.cr6.eq) goto loc_823C8C30;
	// lwz r11,1412(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1412);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C8C30:
	// cmplwi cr6,r5,512
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 512, ctx.xer);
	// bne cr6,0x823c8c54
	if (!ctx.cr6.eq) goto loc_823C8C54;
	// lwz r10,2184(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2184);
	// lwz r9,520(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,532(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 532);
	// rotlwi r6,r7,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// lwzx r5,r6,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r5,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
loc_823C8C54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C9100) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C9258) {
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
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r31,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r31.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r31,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r31.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r31,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, r31.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r31,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r31.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r31.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r31,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r3,r11,608
	ctx.r3.s64 = ctx.r11.s64 + 608;
	// bl 0x823ef5f0
	ctx.lr = 0x823C92D0;
	sub_823EF5F0(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,608(r8)
	REX_STORE_U32(ctx.r8.u32 + 608, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r31,1124(r7)
	REX_STORE_U32(ctx.r7.u32 + 1124, r31.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r31,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, r31.u32);
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

DEFINE_REX_FUNC(sub_823CD6F0) {
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
	ctx.lr = 0x823CD6F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r28,8(r4)
	r28.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r26,-1
	r26.s64 = -1;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(r28.s64, 0, ctx.xer);
	// bne cr6,0x823cd728
	if (!ctx.cr6.eq) goto loc_823CD728;
loc_823CD71C:
	// li r3,-128
	ctx.r3.s64 = -128;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_823CD728:
	// addi r28,r28,-8500
	r28.s64 = r28.s64 + -8500;
	// cmpdi cr6,r28,0
	ctx.cr6.compare<int64_t>(r28.s64, 0, ctx.xer);
	// bge cr6,0x823cd738
	if (!ctx.cr6.lt) goto loc_823CD738;
	// li r28,0
	r28.s64 = 0;
loc_823CD738:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cd784
	if (ctx.cr6.eq) goto loc_823CD784;
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd77c
	if (ctx.cr6.eq) goto loc_823CD77C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x823CD760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823cd77c
	if (ctx.cr6.eq) goto loc_823CD77C;
	// std r28,8(r31)
	REX_STORE_U64(r31.u32 + 8, r28.u64);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823e1128
	ctx.lr = 0x823CD774;
	sub_823E1128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823cd788
	goto loc_823CD788;
loc_823CD77C:
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x823cd788
	goto loc_823CD788;
loc_823CD784:
	// li r11,-129
	ctx.r11.s64 = -129;
loc_823CD788:
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bne cr6,0x823cd840
	if (!ctx.cr6.eq) goto loc_823CD840;
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// cmpd cr6,r11,r30
	ctx.cr6.compare<int64_t>(ctx.r11.s64, r30.s64, ctx.xer);
	// bge cr6,0x823cd7f0
	if (!ctx.cr6.lt) goto loc_823CD7F0;
loc_823CD7A0:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823CD7B0;
	sub_823EF5F0(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r6,r11,r30
	ctx.r6.u64 = r30.u64 - ctx.r11.u64;
	// bl 0x823cd610
	ctx.lr = 0x823CD7C8;
	sub_823CD610(ctx, base);
	// cmpdi cr6,r3,-128
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -128, ctx.xer);
	// beq cr6,0x823cd71c
	if (ctx.cr6.eq) goto loc_823CD71C;
	// cmpdi cr6,r3,-139
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -139, ctx.xer);
	// beq cr6,0x823cd848
	if (ctx.cr6.eq) goto loc_823CD848;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x823cd7f0
	if (ctx.cr6.lt) goto loc_823CD7F0;
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpd cr6,r11,r30
	ctx.cr6.compare<int64_t>(ctx.r11.s64, r30.s64, ctx.xer);
	// blt cr6,0x823cd7a0
	if (ctx.cr6.lt) goto loc_823CD7A0;
loc_823CD7F0:
	// cmpdi cr6,r26,-1
	ctx.cr6.compare<int64_t>(r26.s64, -1, ctx.xer);
	// beq cr6,0x823cd728
	if (ctx.cr6.eq) goto loc_823CD728;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cd83c
	if (!ctx.cr6.eq) goto loc_823CD83C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd590
	ctx.lr = 0x823CD810;
	sub_823CD590(ctx, base);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bne cr6,0x823cd840
	if (!ctx.cr6.eq) goto loc_823CD840;
	// li r6,8500
	ctx.r6.s64 = 8500;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823cd610
	ctx.lr = 0x823CD830;
	sub_823CD610(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// li r3,-129
	ctx.r3.s64 = -129;
	// blt cr6,0x823cd840
	if (ctx.cr6.lt) goto loc_823CD840;
loc_823CD83C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_823CD840:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_823CD848:
	// li r3,-139
	ctx.r3.s64 = -139;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823D2300) {
	REX_FUNC_PROLOGUE();
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D2538) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823d2548
	if (!ctx.cr6.eq) goto loc_823D2548;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823D2548:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D33C0) {
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
	ctx.lr = 0x823D33C8;
	// rlwinm r9,r5,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
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
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f12,-92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f11,-88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f10,-84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// stfs f9,-76(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f8,-72(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stfs f7,-68(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// beq cr6,0x823d34e4
	if (ctx.cr6.eq) goto loc_823D34E4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// addi r30,r1,-80
	r30.s64 = ctx.r1.s64 + -80;
	// subf r31,r3,r4
	r31.u64 = ctx.r4.u64 - ctx.r3.u64;
	// li r28,16
	r28.s64 = 16;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,-32
	r27.s64 = -32;
	// lvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,-16
	r26.s64 = -16;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r25,32
	r25.s64 = 32;
	// li r9,80
	ctx.r9.s64 = 80;
	// li r29,96
	r29.s64 = 96;
	// li r30,112
	r30.s64 = 112;
loc_823D3458:
	// lvx128 v12,r10,r27
	ea = (ctx.r10.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v0,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v11,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r26
	ea = (ctx.r10.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v13,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v12,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v0,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v12,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v13,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// stvx128 v12,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r25
	ea = (ctx.r10.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v0,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// stvx128 v12,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v13,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// lvx128 v11,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v0,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v11,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v12,v13,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v12,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823d3458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D3458;
loc_823D34E4:
	// clrlwi r10,r5,30
	ctx.r10.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d35a0
	if (ctx.cr6.eq) goto loc_823D35A0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_823D34FC:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f8,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f10.f64)));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f6,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f12,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f10,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f9,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, ctx.f4.f64)));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f3,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f6,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, ctx.f3.f64)));
	// stfs f5,20(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f2,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f4,f3,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, ctx.f2.f64)));
	// lfs f1,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,24(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f1.f64)));
	// lfs f13,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfsu f0,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f10,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f13
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsu f9,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d34fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D34FC;
loc_823D35A0:
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823E8968) {
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
	ctx.lr = 0x823E8970;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823e8a84
	if (!ctx.cr6.gt) goto loc_823E8A84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r11,8224
	r27.s64 = ctx.r11.s64 + 8224;
	// add r29,r10,r5
	r29.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r27,-32
	ctx.r11.s64 = r27.s64 + -32;
	// subf r26,r5,r3
	r26.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r25,r5,r11
	r25.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_823E89AC:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,-2
	r29.s64 = r29.s64 + -2;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(r28.s32, 14, ctx.xer);
	// blt cr6,0x823e89e0
	if (ctx.cr6.lt) goto loc_823E89E0;
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(r30.s32, 14, ctx.xer);
	// bge cr6,0x823e8a04
	if (!ctx.cr6.lt) goto loc_823E8A04;
	// lhzx r11,r25,r29
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + r29.u32);
	// rlwinm r10,r28,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// subfc r7,r28,r9
	ctx.xer.ca = ctx.r9.u32 >= r28.u32;
	ctx.r7.u64 = ctx.r9.u64 - r28.u64;
	// adde r11,r10,r8
	temp.u8 = (ctx.r10.u32 + ctx.r8.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823e89fc
	goto loc_823E89FC;
loc_823E89E0:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r30,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// lhzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + r27.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// subfc r6,r30,r8
	ctx.xer.ca = ctx.r8.u32 >= r30.u32;
	ctx.r6.u64 = ctx.r8.u64 - r30.u64;
	// adde r11,r10,r7
	temp.u8 = (ctx.r10.u32 + ctx.r7.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823E89FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e8a70
	if (!ctx.cr6.eq) goto loc_823E8A70;
loc_823E8A04:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823e8a4c
	if (ctx.cr6.lt) goto loc_823E8A4C;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823E8A20:
	// lhz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// ble cr6,0x823e8a40
	if (!ctx.cr6.gt) goto loc_823E8A40;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_823E8A40:
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bdnz 0x823e8a20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E8A20;
loc_823E8A4C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
	// bl 0x823e8310
	ctx.lr = 0x823E8A58;
	sub_823E8310(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// sthx r11,r26,r29
	REX_STORE_U16(r26.u32 + r29.u32, ctx.r11.u16);
	// bgt cr6,0x823e89ac
	if (ctx.cr6.gt) goto loc_823E89AC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_823E8A70:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823e8cb8
	ctx.lr = 0x823E8A84;
	sub_823E8CB8(ctx, base);
loc_823E8A84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823ED268) {
	REX_FUNC_PROLOGUE();
	// b 0x827936a4
	__imp__XamShowFriendsUI(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ED290) {
	REX_FUNC_PROLOGUE();
	// b 0x827936e4
	__imp__XamShowDeviceSelectorUI(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ED360) {
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
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r11,-30824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30824);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ed390
	if (ctx.cr0.lt) goto loc_823ED390;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ed398
	goto loc_823ED398;
loc_823ED390:
	// bl 0x823f0020
	ctx.lr = 0x823ED394;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ED398:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EDD68) {
	REX_FUNC_PROLOGUE();
	// b 0x82793774
	__imp__XamContentClose(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EDD80) {
	REX_FUNC_PROLOGUE();
	// b 0x827937a4
	__imp__XamContentGetDeviceState(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EDE70) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,996
	ctx.r3.s64 = 996;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ede84
	if (!ctx.cr6.eq) goto loc_823EDE84;
	// b 0x823ee280
	sub_823EE280(ctx, base);
	return;
loc_823EDE84:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EE970) {
	REX_FUNC_PROLOGUE();
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// oris r6,r4,1
	ctx.r6.u64 = ctx.r4.u64 | 65536;
	// oris r5,r4,2
	ctx.r5.u64 = ctx.r4.u64 | 131072;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82793844
	__imp__XamWriteGamerTile(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EEBE8) {
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
	ctx.lr = 0x823EEBF0;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,64
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 64, ctx.xer);
	// ble cr6,0x823eec20
	if (!ctx.cr6.gt) goto loc_823EEC20;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x823eff48
	ctx.lr = 0x823EEC18;
	sub_823EFF48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823eec90
	goto loc_823EEC90;
loc_823EEC20:
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826a1e70
	ctx.lr = 0x823EEC2C;
	sub_826A1E70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f0620
	ctx.lr = 0x823EEC38;
	sub_823F0620(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r30,r27,24
	r30.u64 = r27.u32 & 0xFF;
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// extsb r28,r10
	r28.s64 = ctx.r10.s8;
loc_823EEC50:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82793ae4
	ctx.lr = 0x823EEC6C;
	__imp__NtWaitForMultipleObjectsEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eec88
	if (ctx.cr0.lt) goto loc_823EEC88;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x823eec90
	if (ctx.cr6.eq) goto loc_823EEC90;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x823eec50
	if (ctx.cr6.eq) goto loc_823EEC50;
	// b 0x823eec90
	goto loc_823EEC90;
loc_823EEC88:
	// bl 0x823eff48
	ctx.lr = 0x823EEC8C;
	sub_823EFF48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823EEC90:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823F0ED0) {
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
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// li r31,512
	r31.s64 = 512;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x823f11f8
	if (ctx.cr6.lt) goto loc_823F11F8;
loc_823F0F00:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x823f0f10
	if (ctx.cr6.lt) goto loc_823F0F10;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_823F0F10:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// xor r30,r30,r30
	r30.u64 = r30.u64 ^ r30.u64;
	// lvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v16.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v24.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x823f0f00
	if (!ctx.cr6.lt) goto loc_823F0F00;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823f11f8
	if (!ctx.cr6.eq) goto loc_823F11F8;
	// b 0x823f1254
	goto loc_823F1254;
loc_823F11F8:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x823f11f8
	if (ctx.cr6.gt) goto loc_823F11F8;
loc_823F1254:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82421188) {
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
	ctx.lr = 0x82421190;
	// stwu r1,-3296(r1)
	ea = -3296 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r12,-27
	ctx.r12.s64 = -1769472;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r12,r12,65340
	ctx.r12.u64 = ctx.r12.u64 | 65340;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// and. r11,r5,r12
	ctx.r11.u64 = ctx.r5.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824211c8
	if (ctx.cr0.eq) goto loc_824211C8;
loc_824211BC:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x824219d8
	goto loc_824219D8;
loc_824211C8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824211bc
	if (ctx.cr6.eq) goto loc_824211BC;
	// li r24,0
	r24.s64 = 0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r24,0(r23)
	REX_STORE_U32(r23.u32 + 0, r24.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x823f0350
	ctx.lr = 0x824211E4;
	sub_823F0350(ctx, base);
	// lwz r29,124(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82421204
	if (ctx.cr6.eq) goto loc_82421204;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8241cb98
	ctx.lr = 0x824211F8;
	sub_8241CB98(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f0350
	ctx.lr = 0x82421204;
	sub_823F0350(ctx, base);
loc_82421204:
	// addi r11,r30,24
	ctx.r11.s64 = r30.s64 + 24;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r28,60(r31)
	REX_STORE_U32(r31.u32 + 60, r28.u32);
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,48(r31)
	REX_STORE_U32(r31.u32 + 48, r24.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r24,52(r31)
	REX_STORE_U32(r31.u32 + 52, r24.u32);
	// addi r26,r31,112
	r26.s64 = r31.s64 + 112;
	// stw r24,92(r31)
	REX_STORE_U32(r31.u32 + 92, r24.u32);
	// addi r25,r31,116
	r25.s64 = r31.s64 + 116;
	// stw r24,96(r31)
	REX_STORE_U32(r31.u32 + 96, r24.u32);
	// stw r24,100(r31)
	REX_STORE_U32(r31.u32 + 100, r24.u32);
	// stw r24,104(r31)
	REX_STORE_U32(r31.u32 + 104, r24.u32);
	// stw r24,108(r31)
	REX_STORE_U32(r31.u32 + 108, r24.u32);
	// stw r24,76(r31)
	REX_STORE_U32(r31.u32 + 76, r24.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r24,88(r31)
	REX_STORE_U32(r31.u32 + 88, r24.u32);
	// stw r24,112(r31)
	REX_STORE_U32(r31.u32 + 112, r24.u32);
	// stw r24,116(r31)
	REX_STORE_U32(r31.u32 + 116, r24.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r24,120(r31)
	REX_STORE_U32(r31.u32 + 120, r24.u32);
	// bl 0x82414998
	ctx.lr = 0x8242126C;
	sub_82414998(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82421288
	if (!ctx.cr6.eq) goto loc_82421288;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x824149c8
	ctx.lr = 0x82421288;
	sub_824149C8(ctx, base);
loc_82421288:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82415dc8
	ctx.lr = 0x82421294;
	sub_82415DC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824219d8
	if (ctx.cr0.lt) goto loc_824219D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82420990
	ctx.lr = 0x824212A4;
	sub_82420990(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x824212d8
	if (!ctx.cr6.eq) goto loc_824212D8;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823ff268
	ctx.lr = 0x824212C4;
	sub_823FF268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824212d8
	if (ctx.cr0.lt) goto loc_824212D8;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r24,0(r29)
	REX_STORE_U32(r29.u32 + 0, r24.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_824212D8:
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r21,1
	r21.s64 = 1;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// bne cr6,0x824213a8
	if (!ctx.cr6.eq) goto loc_824213A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r11,-24988
	ctx.r10.s64 = ctx.r11.s64 + -24988;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_824212F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8242131c
	if (ctx.cr0.eq) goto loc_8242131C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824212f8
	if (ctx.cr6.eq) goto loc_824212F8;
loc_8242131C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8242135c
	if (ctx.cr0.eq) goto loc_8242135C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-24996
	ctx.r10.s64 = ctx.r10.s64 + -24996;
loc_82421330:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82421354
	if (ctx.cr0.eq) goto loc_82421354;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82421330
	if (ctx.cr6.eq) goto loc_82421330;
loc_82421354:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824213a8
	if (!ctx.cr0.eq) goto loc_824213A8;
loc_8242135C:
	// rlwinm. r11,r28,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421380
	if (ctx.cr0.eq) goto loc_82421380;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25080
	ctx.r4.s64 = ctx.r11.s64 + -25080;
	// bl 0x8241f690
	ctx.lr = 0x82421374;
	sub_8241F690(ctx, base);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x824219a0
	goto loc_824219A0;
loc_82421380:
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82453c28
	ctx.lr = 0x8242139C;
	sub_82453C28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824219a0
	if (ctx.cr0.lt) goto loc_824219A0;
	// b 0x824219ac
	goto loc_824219AC;
loc_824213A8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824213c0
	if (ctx.cr6.eq) goto loc_824213C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2001
	ctx.r5.s64 = 2001;
	// addi r6,r11,-25108
	ctx.r6.s64 = ctx.r11.s64 + -25108;
	// b 0x82421594
	goto loc_82421594;
loc_824213C0:
	// lis r11,-2
	ctx.r11.s64 = -131072;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r9,-2
	ctx.r9.s64 = -131072;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// ori r30,r9,257
	r30.u64 = ctx.r9.u64 | 257;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824213f8
	if (!ctx.cr6.eq) goto loc_824213F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2015
	ctx.r5.s64 = 2015;
	// addi r6,r11,-25152
	ctx.r6.s64 = ctx.r11.s64 + -25152;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8241a718
	ctx.lr = 0x824213F4;
	sub_8241A718(ctx, base);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
loc_824213F8:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82421430
	if (!ctx.cr6.eq) goto loc_82421430;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2015
	ctx.r5.s64 = 2015;
	// addi r6,r11,-25196
	ctx.r6.s64 = ctx.r11.s64 + -25196;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8241a718
	ctx.lr = 0x82421424;
	sub_8241A718(ctx, base);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,257
	ctx.r11.u64 = ctx.r11.u64 | 257;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82421430:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// ori r11,r11,514
	ctx.r11.u64 = ctx.r11.u64 | 514;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82421450
	if (!ctx.cr6.eq) goto loc_82421450;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,513
	ctx.r11.u64 = ctx.r11.u64 | 513;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82421450:
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242146c
	if (ctx.cr0.eq) goto loc_8242146C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82421488
	if (ctx.cr6.eq) goto loc_82421488;
loc_8242146C:
	// rlwinm. r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421494
	if (ctx.cr0.eq) goto loc_82421494;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82421494
	if (!ctx.cr6.eq) goto loc_82421494;
loc_82421488:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_82421494:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// ori r10,r10,259
	ctx.r10.u64 = ctx.r10.u64 | 259;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82421548
	if (ctx.cr6.gt) goto loc_82421548;
	// beq cr6,0x82421540
	if (ctx.cr6.eq) goto loc_82421540;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// ori r10,r10,768
	ctx.r10.u64 = ctx.r10.u64 | 768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82421508
	if (ctx.cr6.gt) goto loc_82421508;
	// beq cr6,0x82421500
	if (ctx.cr6.eq) goto loc_82421500;
	// subf. r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824214f8
	if (ctx.cr0.eq) goto loc_824214F8;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x824214f0
	if (ctx.cr6.eq) goto loc_824214F0;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x824214e8
	if (ctx.cr6.eq) goto loc_824214E8;
	// cmplwi cr6,r11,510
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 510, ctx.xer);
	// bne cr6,0x82421588
	if (!ctx.cr6.eq) goto loc_82421588;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x824215d8
	goto loc_824215D8;
loc_824214E8:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x824215d8
	goto loc_824215D8;
loc_824214F0:
	// stw r21,56(r31)
	REX_STORE_U32(r31.u32 + 56, r21.u32);
	// b 0x824215dc
	goto loc_824215DC;
loc_824214F8:
	// stw r24,56(r31)
	REX_STORE_U32(r31.u32 + 56, r24.u32);
	// b 0x824215dc
	goto loc_824215DC;
loc_82421500:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x824215d8
	goto loc_824215D8;
loc_82421508:
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// ori r10,r10,1023
	ctx.r10.u64 = ctx.r10.u64 | 1023;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82421538
	if (ctx.cr0.eq) goto loc_82421538;
	// cmplwi cr6,r11,64770
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64770, ctx.xer);
	// beq cr6,0x82421530
	if (ctx.cr6.eq) goto loc_82421530;
	// cmplwi cr6,r11,64771
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64771, ctx.xer);
	// bne cr6,0x82421588
	if (!ctx.cr6.eq) goto loc_82421588;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x824215d8
	goto loc_824215D8;
loc_82421530:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x824215d8
	goto loc_824215D8;
loc_82421538:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x824215d8
	goto loc_824215D8;
loc_82421540:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x824215d8
	goto loc_824215D8;
loc_82421548:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824215d4
	if (ctx.cr0.eq) goto loc_824215D4;
	// cmplwi cr6,r11,252
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 252, ctx.xer);
	// beq cr6,0x824215cc
	if (ctx.cr6.eq) goto loc_824215CC;
	// cmplwi cr6,r11,253
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 253, ctx.xer);
	// beq cr6,0x824215c4
	if (ctx.cr6.eq) goto loc_824215C4;
	// cmplwi cr6,r11,352
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 352, ctx.xer);
	// beq cr6,0x824215bc
	if (ctx.cr6.eq) goto loc_824215BC;
	// cmplwi cr6,r11,507
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 507, ctx.xer);
	// beq cr6,0x824215b4
	if (ctx.cr6.eq) goto loc_824215B4;
	// cmplwi cr6,r11,508
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 508, ctx.xer);
	// beq cr6,0x824215ac
	if (ctx.cr6.eq) goto loc_824215AC;
	// cmplwi cr6,r11,763
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 763, ctx.xer);
	// beq cr6,0x824215a4
	if (ctx.cr6.eq) goto loc_824215A4;
loc_82421588:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,2002
	ctx.r5.s64 = 2002;
	// addi r6,r11,-25224
	ctx.r6.s64 = ctx.r11.s64 + -25224;
loc_82421594:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8241a4f0
	ctx.lr = 0x824215A0;
	sub_8241A4F0(ctx, base);
	// b 0x824217ec
	goto loc_824217EC;
loc_824215A4:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x824215d8
	goto loc_824215D8;
loc_824215AC:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x824215d8
	goto loc_824215D8;
loc_824215B4:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x824215d8
	goto loc_824215D8;
loc_824215BC:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x824215d8
	goto loc_824215D8;
loc_824215C4:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x824215d8
	goto loc_824215D8;
loc_824215CC:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x824215d8
	goto loc_824215D8;
loc_824215D4:
	// li r11,9
	ctx.r11.s64 = 9;
loc_824215D8:
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_824215DC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82421698
	if (ctx.cr6.eq) goto loc_82421698;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r27,128(r31)
	REX_STORE_U32(r31.u32 + 128, r27.u32);
	// li r3,184
	ctx.r3.s64 = 184;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// bl 0x823f02b8
	ctx.lr = 0x82421600;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82421614
	if (ctx.cr0.eq) goto loc_82421614;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x8241cac8
	ctx.lr = 0x82421610;
	sub_8241CAC8(ctx, base);
	// b 0x82421618
	goto loc_82421618;
loc_82421614:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82421618:
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82421630
	if (!ctx.cr6.eq) goto loc_82421630;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824219d8
	goto loc_824219D8;
loc_82421630:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82421654
	if (ctx.cr6.lt) goto loc_82421654;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x82421654
	if (ctx.cr6.gt) goto loc_82421654;
	// lbz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 26);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// oris r11,r11,32766
	ctx.r11.u64 = ctx.r11.u64 | 2147352576;
	// b 0x82421670
	goto loc_82421670;
loc_82421654:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82421680
	if (ctx.cr6.lt) goto loc_82421680;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x82421680
	if (ctx.cr6.gt) goto loc_82421680;
	// lbz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 26);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// oris r11,r11,32767
	ctx.r11.u64 = ctx.r11.u64 | 2147418112;
loc_82421670:
	// lbz r10,27(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 27);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// b 0x82421698
	goto loc_82421698;
loc_82421680:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2001
	ctx.r5.s64 = 2001;
	// addi r6,r11,-25328
	ctx.r6.s64 = ctx.r11.s64 + -25328;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8241a4f0
	ctx.lr = 0x82421698;
	sub_8241A4F0(ctx, base);
loc_82421698:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824216a8
	if (!ctx.cr0.eq) goto loc_824216A8;
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
loc_824216A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x8241db28
	ctx.lr = 0x824216B4;
	sub_8241DB28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824219a0
	if (ctx.cr0.lt) goto loc_824219A0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c3f0
	ctx.lr = 0x824216C8;
	sub_8241C3F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824219a0
	if (ctx.cr0.lt) goto loc_824219A0;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82421704
	if (!ctx.cr6.eq) goto loc_82421704;
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826a2e60
	ctx.lr = 0x824216EC;
	sub_826A2E60(ctx, base);
	// stw r31,3192(r1)
	REX_STORE_U32(ctx.r1.u32 + 3192, r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82420b30
	ctx.lr = 0x824216F8;
	sub_82420B30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82421704
	if (ctx.cr0.eq) goto loc_82421704;
	// stw r21,76(r31)
	REX_STORE_U32(r31.u32 + 76, r21.u32);
loc_82421704:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824217ec
	if (!ctx.cr6.eq) goto loc_824217EC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82421754
	if (ctx.cr6.eq) goto loc_82421754;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x824149c8
	ctx.lr = 0x8242172C;
	sub_824149C8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82421754
	if (!ctx.cr6.lt) goto loc_82421754;
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82421754
	if (!ctx.cr6.gt) goto loc_82421754;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_82421754:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82421770
	if (ctx.cr6.eq) goto loc_82421770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241e568
	ctx.lr = 0x82421768;
	sub_8241E568(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824219a0
	if (ctx.cr0.lt) goto loc_824219A0;
loc_82421770:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242178c
	if (ctx.cr0.eq) goto loc_8242178C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241e990
	ctx.lr = 0x82421784;
	sub_8241E990(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824219a0
	if (ctx.cr0.lt) goto loc_824219A0;
loc_8242178C:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x8241db28
	ctx.lr = 0x8242179C;
	sub_8241DB28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824219a0
	if (ctx.cr0.lt) goto loc_824219A0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c3f0
	ctx.lr = 0x824217B0;
	sub_8241C3F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824219a0
	if (ctx.cr0.lt) goto loc_824219A0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824217dc
	if (ctx.cr6.eq) goto loc_824217DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824217D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824219a0
	if (ctx.cr0.lt) goto loc_824219A0;
loc_824217DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8265edb0
	ctx.lr = 0x824217E4;
	sub_8265EDB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824217f8
	if (ctx.cr0.eq) goto loc_824217F8;
loc_824217EC:
	// lis r30,-30602
	r30.s64 = -2005532672;
	// ori r30,r30,2905
	r30.u64 = r30.u64 | 2905;
	// b 0x824219a0
	goto loc_824219A0;
loc_824217F8:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241eda8
	ctx.lr = 0x82421808;
	sub_8241EDA8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x824219a8
	if (!ctx.cr0.lt) goto loc_824219A8;
	// addis r11,r30,30602
	ctx.r11.s64 = r30.s64 + 2005532672;
	// addi r11,r11,-2920
	ctx.r11.s64 = ctx.r11.s64 + -2920;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x82421988
	if (ctx.cr6.gt) goto loc_82421988;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,-29368
	ctx.r12.s64 = ctx.r12.s64 + -29368;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// nop 
	// addi r12,r12,6216
	ctx.r12.s64 = ctx.r12.s64 + 6216;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82421858;
	case 1:
		goto loc_82421848;
	case 2:
		goto loc_82421868;
	case 3:
		goto loc_82421878;
	case 4:
		goto loc_82421888;
	case 5:
		goto loc_82421898;
	case 6:
		goto loc_824218A8;
	case 7:
		goto loc_824218B8;
	case 8:
		goto loc_824218C8;
	case 9:
		goto loc_824218D8;
	case 10:
		goto loc_824218E8;
	case 11:
		goto loc_824218F8;
	case 12:
		goto loc_82421988;
	case 13:
		goto loc_82421908;
	case 14:
		goto loc_82421918;
	case 15:
		goto loc_82421928;
	case 16:
		goto loc_82421938;
	case 17:
		goto loc_82421918;
	case 18:
		goto loc_82421948;
	case 19:
		goto loc_82421938;
	case 20:
		goto loc_82421918;
	case 21:
		goto loc_82421928;
	case 22:
		goto loc_82421958;
	case 23:
		goto loc_82421968;
	case 24:
		goto loc_82421978;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82421848:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7001
	ctx.r5.s64 = 7001;
	// addi r6,r11,-25360
	ctx.r6.s64 = ctx.r11.s64 + -25360;
	// b 0x82421994
	goto loc_82421994;
loc_82421858:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7003
	ctx.r5.s64 = 7003;
	// addi r6,r11,-25420
	ctx.r6.s64 = ctx.r11.s64 + -25420;
	// b 0x82421994
	goto loc_82421994;
loc_82421868:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7002
	ctx.r5.s64 = 7002;
	// addi r6,r11,-25488
	ctx.r6.s64 = ctx.r11.s64 + -25488;
	// b 0x82421994
	goto loc_82421994;
loc_82421878:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7000
	ctx.r5.s64 = 7000;
	// addi r6,r11,-25528
	ctx.r6.s64 = ctx.r11.s64 + -25528;
	// b 0x82421994
	goto loc_82421994;
loc_82421888:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7004
	ctx.r5.s64 = 7004;
	// addi r6,r11,-25624
	ctx.r6.s64 = ctx.r11.s64 + -25624;
	// b 0x82421994
	goto loc_82421994;
loc_82421898:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7005
	ctx.r5.s64 = 7005;
	// addi r6,r11,-25672
	ctx.r6.s64 = ctx.r11.s64 + -25672;
	// b 0x82421994
	goto loc_82421994;
loc_824218A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7006
	ctx.r5.s64 = 7006;
	// addi r6,r11,-25720
	ctx.r6.s64 = ctx.r11.s64 + -25720;
	// b 0x82421994
	goto loc_82421994;
loc_824218B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7007
	ctx.r5.s64 = 7007;
	// addi r6,r11,-25772
	ctx.r6.s64 = ctx.r11.s64 + -25772;
	// b 0x82421994
	goto loc_82421994;
loc_824218C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7008
	ctx.r5.s64 = 7008;
	// addi r6,r11,-25832
	ctx.r6.s64 = ctx.r11.s64 + -25832;
	// b 0x82421994
	goto loc_82421994;
loc_824218D8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7009
	ctx.r5.s64 = 7009;
	// addi r6,r11,-25888
	ctx.r6.s64 = ctx.r11.s64 + -25888;
	// b 0x82421994
	goto loc_82421994;
loc_824218E8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7010
	ctx.r5.s64 = 7010;
	// addi r6,r11,-25940
	ctx.r6.s64 = ctx.r11.s64 + -25940;
	// b 0x82421994
	goto loc_82421994;
loc_824218F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7011
	ctx.r5.s64 = 7011;
	// addi r6,r11,-25996
	ctx.r6.s64 = ctx.r11.s64 + -25996;
	// b 0x82421994
	goto loc_82421994;
loc_82421908:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7012
	ctx.r5.s64 = 7012;
	// addi r6,r11,-26056
	ctx.r6.s64 = ctx.r11.s64 + -26056;
	// b 0x82421994
	goto loc_82421994;
loc_82421918:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7013
	ctx.r5.s64 = 7013;
	// addi r6,r11,-26116
	ctx.r6.s64 = ctx.r11.s64 + -26116;
	// b 0x82421994
	goto loc_82421994;
loc_82421928:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7014
	ctx.r5.s64 = 7014;
	// addi r6,r11,-26184
	ctx.r6.s64 = ctx.r11.s64 + -26184;
	// b 0x82421994
	goto loc_82421994;
loc_82421938:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7012
	ctx.r5.s64 = 7012;
	// addi r6,r11,-26248
	ctx.r6.s64 = ctx.r11.s64 + -26248;
	// b 0x82421994
	goto loc_82421994;
loc_82421948:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7014
	ctx.r5.s64 = 7014;
	// addi r6,r11,-26312
	ctx.r6.s64 = ctx.r11.s64 + -26312;
	// b 0x82421994
	goto loc_82421994;
loc_82421958:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7015
	ctx.r5.s64 = 7015;
	// addi r6,r11,-26360
	ctx.r6.s64 = ctx.r11.s64 + -26360;
	// b 0x82421994
	goto loc_82421994;
loc_82421968:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7016
	ctx.r5.s64 = 7016;
	// addi r6,r11,-26408
	ctx.r6.s64 = ctx.r11.s64 + -26408;
	// b 0x82421994
	goto loc_82421994;
loc_82421978:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7017
	ctx.r5.s64 = 7017;
	// addi r6,r11,-26464
	ctx.r6.s64 = ctx.r11.s64 + -26464;
	// b 0x82421994
	goto loc_82421994;
loc_82421988:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-26508
	ctx.r6.s64 = ctx.r11.s64 + -26508;
loc_82421994:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8241a4f0
	ctx.lr = 0x824219A0;
	sub_8241A4F0(ctx, base);
loc_824219A0:
	// stw r21,76(r31)
	REX_STORE_U32(r31.u32 + 76, r21.u32);
	// b 0x824219ac
	goto loc_824219AC;
loc_824219A8:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_824219AC:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824219cc
	if (ctx.cr6.eq) goto loc_824219CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824219C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
loc_824219CC:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82418e98
	ctx.lr = 0x824219D4;
	sub_82418E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824219D8:
	// addi r1,r1,3296
	ctx.r1.s64 = ctx.r1.s64 + 3296;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_824653A8) {
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
	ctx.lr = 0x824653B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,260(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r8,r11,12
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82465498
	if (ctx.cr0.eq) goto loc_82465498;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r28,r8,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	r31.s64 = 0;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_824653D8:
	// lwz r9,260(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// add r10,r28,r30
	ctx.r10.u64 = r28.u64 + r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// lwzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r29,r6,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// lwzx r29,r29,r7
	r29.u64 = REX_LOAD_U32(r29.u32 + ctx.r7.u32);
	// lwzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r4,r4,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// bne cr6,0x824654d8
	if (!ctx.cr6.eq) goto loc_824654D8;
	// lwz r5,8(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r6,56(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// lwzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82465440
	if (ctx.cr6.eq) goto loc_82465440;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x824654d8
	if (ctx.cr6.eq) goto loc_824654D8;
	// lwz r10,56(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824654d8
	if (!ctx.cr6.eq) goto loc_824654D8;
loc_82465440:
	// lwz r10,60(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r9,60(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// xoris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 ^ 524288;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824654d8
	if (!ctx.cr6.eq) goto loc_824654D8;
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 56);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82465474
	if (ctx.cr6.eq) goto loc_82465474;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824654d8
	if (ctx.cr6.eq) goto loc_824654D8;
	// lwz r6,56(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x824654d8
	if (!ctx.cr6.eq) goto loc_824654D8;
loc_82465474:
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 60);
	// xoris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 ^ 524288;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824654d8
	if (!ctx.cr6.eq) goto loc_824654D8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824653d8
	if (ctx.cr6.lt) goto loc_824653D8;
loc_82465498:
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r7,7
	ctx.r7.s64 = 7;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwimi r9,r7,28,0,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFF00000) | (ctx.r9.u64 & 0xFFFFFFFF000FFFFF);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824654CC;
	sub_826A1E70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824654D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_824654D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824654d0
	goto loc_824654D0;
}

DEFINE_REX_FUNC(sub_8246E1B0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,8272
	ctx.r8.s64 = 542113792;
	// stw r11,352(r3)
	REX_STORE_U32(ctx.r3.u32 + 352, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8246e2b4
	if (!ctx.cr6.eq) goto loc_8246E2B4;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,2,10,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFC;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r11,12
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8246e218
	if (ctx.cr0.eq) goto loc_8246E218;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8246e240
	goto loc_8246E240;
loc_8246E218:
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246e344
	if (ctx.cr0.eq) goto loc_8246E344;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_8246E240:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8246e32c
	if (ctx.cr6.eq) goto loc_8246E32C;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// lfd f0,8312(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 8312);
loc_8246E25C:
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lfd f13,32(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8246e344
	if (!ctx.cr6.eq) goto loc_8246E344;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwz r5,60(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// rlwinm r5,r5,0,11,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8246e2a0
	if (ctx.cr6.eq) goto loc_8246E2A0;
	// lwz r5,108(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm. r5,r5,0,20,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8246e344
	if (!ctx.cr0.eq) goto loc_8246E344;
loc_8246E2A0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8246e25c
	if (ctx.cr6.lt) goto loc_8246E25C;
	// b 0x8246e32c
	goto loc_8246E32C;
loc_8246E2B4:
	// lis r8,8256
	ctx.r8.s64 = 541065216;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8246e344
	if (!ctx.cr6.eq) goto loc_8246E344;
	// clrlwi. r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,10,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// beq 0x8246e32c
	if (ctx.cr0.eq) goto loc_8246E32C;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r7,r6,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r6.u64;
loc_8246E2E0:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r5,r7,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8246e344
	if (!ctx.cr6.eq) goto loc_8246E344;
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8246e31c
	if (ctx.cr6.eq) goto loc_8246E31C;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8246e344
	if (!ctx.cr0.eq) goto loc_8246E344;
loc_8246E31C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8246e2e0
	if (ctx.cr6.lt) goto loc_8246E2E0;
loc_8246E32C:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8246d648
	sub_8246D648(ctx, base);
	return;
loc_8246E344:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82477E80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82477E88;
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
	// bne cr6,0x82477ea8
	if (!ctx.cr6.eq) goto loc_82477EA8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82477f94
	goto loc_82477F94;
loc_82477EA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82477ed0
	if (!ctx.cr6.gt) goto loc_82477ED0;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(r29.u32, 8, ctx.xer);
	// bgt cr6,0x82477f0c
	if (ctx.cr6.gt) goto loc_82477F0C;
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82477ED0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x82477EE8;
	sub_826A1E70(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r29,12(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82477f58
	if (!ctx.cr6.gt) goto loc_82477F58;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// bgt cr6,0x82477f38
	if (ctx.cr6.gt) goto loc_82477F38;
	// addi r11,r31,96
	ctx.r11.s64 = r31.s64 + 96;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x82477f58
	goto loc_82477F58;
loc_82477F0C:
	// bl 0x82448598
	ctx.lr = 0x82477F10;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82444608
	ctx.lr = 0x82477F20;
	sub_82444608(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82477ed0
	if (!ctx.cr0.eq) goto loc_82477ED0;
loc_82477F2C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82477f94
	goto loc_82477F94;
loc_82477F38:
	// bl 0x82448598
	ctx.lr = 0x82477F3C;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82444608
	ctx.lr = 0x82477F4C;
	sub_82444608(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82477f2c
	if (ctx.cr0.eq) goto loc_82477F2C;
loc_82477F58:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x82477F70;
	sub_826A1E70(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_82477F94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8247FDE0) {
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
	ctx.lr = 0x8247FDE8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// divwu. r25,r10,r11
	r25.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x8247fe90
	if (ctx.cr0.eq) goto loc_8247FE90;
	// lwz r30,8(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,20(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,16(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_8247FE24:
	// lwzx r4,r7,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	// lwzx r5,r6,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247fe7c
	if (ctx.cr0.eq) goto loc_8247FE7C;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247fe7c
	if (ctx.cr0.eq) goto loc_8247FE7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247a530
	ctx.lr = 0x8247FE74;
	sub_8247A530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247fe9c
	if (ctx.cr0.eq) goto loc_8247FE9C;
loc_8247FE7C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r7,r27,r7
	ctx.r7.u64 = r27.u64 + ctx.r7.u64;
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// blt cr6,0x8247fe24
	if (ctx.cr6.lt) goto loc_8247FE24;
loc_8247FE90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247FE94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8247FE9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8247fe94
	goto loc_8247FE94;
}

DEFINE_REX_FUNC(sub_82491410) {
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
	ctx.lr = 0x82491418;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82491434
	if (ctx.cr0.eq) goto loc_82491434;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82492544
	goto loc_82492544;
loc_82491434:
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r17,0
	r17.s64 = 0;
	// stw r17,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r17.u32);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82491470
	if (!ctx.cr6.gt) goto loc_82491470;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_82491450:
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r17,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, r17.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82491450
	if (ctx.cr6.lt) goto loc_82491450;
loc_82491470:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824914e8
	if (!ctx.cr6.gt) goto loc_824914E8;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
loc_82491484:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r10,116(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 116);
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824914d4
	if (ctx.cr6.eq) goto loc_824914D4;
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r6,r10,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x824914d4
	if (ctx.cr0.eq) goto loc_824914D4;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824914d4
	if (!ctx.cr0.eq) goto loc_824914D4;
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824914d4
	if (!ctx.cr6.lt) goto loc_824914D4;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_824914D4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82491484
	if (ctx.cr6.lt) goto loc_82491484;
loc_824914E8:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82491524
	if (!ctx.cr6.gt) goto loc_82491524;
	// lwz r7,16(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 16);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// lwz r6,4(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_82491508:
	// lwzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// blt cr6,0x82491508
	if (ctx.cr6.lt) goto loc_82491508;
loc_82491524:
	// rlwinm r31,r9,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82491534;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// beq 0x8249254c
	if (ctx.cr0.eq) goto loc_8249254C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82491550;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824915b4
	if (!ctx.cr6.gt) goto loc_824915B4;
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_8249156C:
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82491588
	if (ctx.cr6.eq) goto loc_82491588;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// b 0x8249158c
	goto loc_8249158C;
loc_82491588:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_8249158C:
	// stw r10,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r7,4(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// blt cr6,0x8249156c
	if (ctx.cr6.lt) goto loc_8249156C;
loc_824915B4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8249162c
	if (!ctx.cr6.gt) goto loc_8249162C;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
loc_824915C8:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r9,116(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 116);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82491618
	if (ctx.cr6.eq) goto loc_82491618;
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82491618
	if (ctx.cr6.eq) goto loc_82491618;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82491618
	if (!ctx.cr6.lt) goto loc_82491618;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
loc_82491618:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824915c8
	if (ctx.cr6.lt) goto loc_824915C8;
loc_8249162C:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824916e8
	if (!ctx.cr6.gt) goto loc_824916E8;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
loc_82491640:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lis r9,24576
	ctx.r9.s64 = 1610612736;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,0,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8249166c
	if (ctx.cr6.eq) goto loc_8249166C;
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// lis r9,4352
	ctx.r9.s64 = 285212672;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824916d4
	if (!ctx.cr6.eq) goto loc_824916D4;
loc_8249166C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x824916d4
	if (!ctx.cr6.gt) goto loc_824916D4;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
loc_82491680:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r4,16(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwz r9,28(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824916c0
	if (ctx.cr6.eq) goto loc_824916C0;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
loc_824916C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82491680
	if (ctx.cr6.lt) goto loc_82491680;
loc_824916D4:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82491640
	if (ctx.cr6.lt) goto loc_82491640;
loc_824916E8:
	// lwz r11,108(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 108);
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82491ab0
	if (!ctx.cr0.eq) goto loc_82491AB0;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82491ab0
	if (!ctx.cr0.eq) goto loc_82491AB0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82481098
	ctx.lr = 0x82491704;
	sub_82481098(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r20,r17
	r20.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82491ab0
	if (!ctx.cr6.gt) goto loc_82491AB0;
	// lis r11,8272
	ctx.r11.s64 = 542113792;
	// mr r21,r17
	r21.u64 = r17.u64;
	// lis r18,20480
	r18.s64 = 1342177280;
	// ori r19,r11,1
	r19.u64 = ctx.r11.u64 | 1;
	// li r22,-1
	r22.s64 = -1;
loc_82491728:
	// lwz r8,24(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lis r11,8256
	ctx.r11.s64 = 541065216;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lwzx r25,r21,r8
	r25.u64 = REX_LOAD_U32(r21.u32 + ctx.r8.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82491a9c
	if (!ctx.cr6.eq) goto loc_82491A9C;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r7,20(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r10,r6,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82491a9c
	if (ctx.cr0.eq) goto loc_82491A9C;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82491a9c
	if (ctx.cr0.eq) goto loc_82491A9C;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r11,r8
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r23,r10,r8
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// beq cr6,0x824917c8
	if (ctx.cr6.eq) goto loc_824917C8;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x82491a9c
	if (!ctx.cr6.eq) goto loc_82491A9C;
loc_824917C8:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// beq cr6,0x824917e0
	if (ctx.cr6.eq) goto loc_824917E0;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x82491a9c
	if (!ctx.cr6.eq) goto loc_82491A9C;
loc_824917E0:
	// lwz r9,4(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r8,108(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 108);
	// rlwinm r30,r9,31,1,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// not r9,r8
	ctx.r9.u64 = ~ctx.r8.u64;
	// add r26,r30,r11
	r26.u64 = r30.u64 + ctx.r11.u64;
	// rlwimi r10,r9,7,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82491a9c
	if (ctx.cr6.lt) goto loc_82491A9C;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// bgt cr6,0x82491a9c
	if (ctx.cr6.gt) goto loc_82491A9C;
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r20,r9
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82491a9c
	if (!ctx.cr6.eq) goto loc_82491A9C;
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82491a9c
	if (!ctx.cr6.eq) goto loc_82491A9C;
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r9,84(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r20,r9
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82491a9c
	if (!ctx.cr6.eq) goto loc_82491A9C;
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82491a9c
	if (!ctx.cr6.eq) goto loc_82491A9C;
	// lwz r29,8(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8249187C;
	sub_826A1E70(ctx, base);
	// lwz r28,8(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491898;
	sub_826A1E70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r29,r31
	ctx.r4.u64 = r29.u64 + r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826a1e70
	ctx.lr = 0x824918A8;
	sub_826A1E70(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824918BC;
	sub_826A1E70(ctx, base);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x824918E0;
	sub_8248D5C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249191c
	if (ctx.cr0.eq) goto loc_8249191C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x8249190C;
	sub_8248D5C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249191c
	if (ctx.cr0.eq) goto loc_8249191C;
	// mr r28,r17
	r28.u64 = r17.u64;
	// b 0x824919c8
	goto loc_824919C8;
loc_8249191C:
	// lwz r28,8(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491930;
	sub_826A1E70(ctx, base);
	// lwz r29,8(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491948;
	sub_826A1E70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r28,r31
	ctx.r4.u64 = r28.u64 + r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826a1e70
	ctx.lr = 0x82491958;
	sub_826A1E70(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8249196C;
	sub_826A1E70(ctx, base);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x82491990;
	sub_8248D5C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82491a9c
	if (ctx.cr0.eq) goto loc_82491A9C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x824919BC;
	sub_8248D5C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82491a9c
	if (ctx.cr0.eq) goto loc_82491A9C;
	// li r28,1
	r28.s64 = 1;
loc_824919C8:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824919D0;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824919e4
	if (ctx.cr0.eq) goto loc_824919E4;
	// bl 0x824773d0
	ctx.lr = 0x824919DC;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824919e8
	goto loc_824919E8;
loc_824919E4:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_824919E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8249254c
	if (ctx.cr6.eq) goto loc_8249254C;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r26,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x82491A10;
	sub_82477B60(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82492558
	if (ctx.cr0.lt) goto loc_82492558;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477420
	ctx.lr = 0x82491A24;
	sub_82477420(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82492558
	if (ctx.cr0.lt) goto loc_82492558;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82491a4c
	if (ctx.cr6.eq) goto loc_82491A4C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82491A4C:
	// rlwinm r30,r26,2,0,29
	r30.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491A5C;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// beq cr6,0x82491a6c
	if (ctx.cr6.eq) goto loc_82491A6C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82491A6C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491A7C;
	sub_826A1E70(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stwx r31,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, r31.u32);
	// bl 0x82130e88
	ctx.lr = 0x82491A8C;
	sub_82130E88(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82477b20
	ctx.lr = 0x82491A94;
	sub_82477B20(ctx, base);
	// stw r17,0(r24)
	REX_STORE_U32(r24.u32 + 0, r17.u32);
	// stw r17,0(r23)
	REX_STORE_U32(r23.u32 + 0, r17.u32);
loc_82491A9C:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82491728
	if (ctx.cr6.lt) goto loc_82491728;
loc_82491AB0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82481098
	ctx.lr = 0x82491AB8;
	sub_82481098(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r14,r17
	r14.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82492528
	if (!ctx.cr6.gt) goto loc_82492528;
loc_82491AC8:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// rlwinm r10,r14,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82492518
	if (ctx.cr6.lt) goto loc_82492518;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82492518
	if (ctx.cr6.gt) goto loc_82492518;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82491b18
	if (ctx.cr6.eq) goto loc_82491B18;
	// lwz r11,108(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 108);
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82492518
	if (!ctx.cr0.eq) goto loc_82492518;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82492518
	if (!ctx.cr0.eq) goto loc_82492518;
loc_82491B18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824777d8
	ctx.lr = 0x82491B20;
	sub_824777D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82492518
	if (!ctx.cr0.eq) goto loc_82492518;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,20(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r6,16(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lwzx r11,r10,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r16,28(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82492518
	if (ctx.cr6.eq) goto loc_82492518;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// mr r15,r11
	r15.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ble cr6,0x82491bdc
	if (!ctx.cr6.gt) goto loc_82491BDC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82491B88:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82491bc8
	goto loc_82491BC8;
loc_82491B90:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82491bc4
	if (ctx.cr0.eq) goto loc_82491BC4;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82491bc4
	if (!ctx.cr6.lt) goto loc_82491BC4;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82491BC4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82491BC8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82491b90
	if (!ctx.cr6.eq) goto loc_82491B90;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82491b88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82491B88;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_82491BDC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82491c60
	if (!ctx.cr6.gt) goto loc_82491C60;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82491BF0:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(r15.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82491c0c
	if (!ctx.cr6.gt) goto loc_82491C0C;
	// mr r15,r11
	r15.u64 = ctx.r11.u64;
loc_82491C0C:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82491c4c
	goto loc_82491C4C;
loc_82491C14:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82491c48
	if (ctx.cr0.eq) goto loc_82491C48;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82491c48
	if (!ctx.cr6.lt) goto loc_82491C48;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82491C48:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82491C4C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82491c14
	if (!ctx.cr6.eq) goto loc_82491C14;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82491bf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82491BF0;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_82491C60:
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r15.u32, ctx.xer);
	// bge cr6,0x82492518
	if (!ctx.cr6.lt) goto loc_82492518;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r29,r5,0
	r29.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rlwinm r17,r11,2,0,29
	r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82491C78:
	// cmplw cr6,r14,r29
	ctx.cr6.compare<uint32_t>(r14.u32, r29.u32, ctx.xer);
	// beq cr6,0x824921a8
	if (ctx.cr6.eq) goto loc_824921A8;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmplw cr6,r14,r29
	ctx.cr6.compare<uint32_t>(r14.u32, r29.u32, ctx.xer);
	// lwzx r30,r11,r17
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r17.u32);
	// mr r21,r30
	r21.u64 = r30.u64;
	// stw r30,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r30.u32);
	// blt cr6,0x82491ca0
	if (ctx.cr6.lt) goto loc_82491CA0;
	// lwz r21,116(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bge cr6,0x82491ca4
	if (!ctx.cr6.lt) goto loc_82491CA4;
loc_82491CA0:
	// lwz r30,116(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82491CA4:
	// lwz r4,0(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r5,r4,0,0,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFF00000;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824921a8
	if (!ctx.cr6.eq) goto loc_824921A8;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,16(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwz r7,20(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824921a8
	if (!ctx.cr6.eq) goto loc_824921A8;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824921a8
	if (!ctx.cr6.eq) goto loc_824921A8;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824921a8
	if (!ctx.cr6.eq) goto loc_824921A8;
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x824921a8
	if (!ctx.cr6.eq) goto loc_824921A8;
	// lwz r23,12(r30)
	r23.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r22,12(r21)
	r22.u64 = REX_LOAD_U32(r21.u32 + 12);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,4(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 4);
	// add r24,r22,r23
	r24.u64 = r22.u64 + r23.u64;
	// add r18,r8,r9
	r18.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(r24.u32, 4, ctx.xer);
	// bgt cr6,0x824921a8
	if (ctx.cr6.gt) goto loc_824921A8;
	// lwz r19,12(r10)
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r20,12(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r19,r20
	ctx.cr6.compare<uint32_t>(r19.u32, r20.u32, ctx.xer);
	// beq cr6,0x82491d98
	if (ctx.cr6.eq) goto loc_82491D98;
	// lwz r11,108(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 108);
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824921a8
	if (!ctx.cr0.eq) goto loc_824921A8;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824921a8
	if (!ctx.cr0.eq) goto loc_824921A8;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824921a8
	if (!ctx.cr0.eq) goto loc_824921A8;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// lwzx r11,r9,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r16.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x824921a8
	if (ctx.cr6.gt) goto loc_824921A8;
loc_82491D98:
	// cmplw cr6,r14,r29
	ctx.cr6.compare<uint32_t>(r14.u32, r29.u32, ctx.xer);
	// bge cr6,0x82491da4
	if (!ctx.cr6.lt) goto loc_82491DA4;
	// mr r29,r14
	r29.u64 = r14.u64;
loc_82491DA4:
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824920c4
	if (ctx.cr6.eq) goto loc_824920C4;
	// lis r11,4112
	ctx.r11.s64 = 269484032;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824920c4
	if (ctx.cr6.eq) goto loc_824920C4;
	// rlwinm r11,r4,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82491e20
	if (!ctx.cr6.eq) goto loc_82491E20;
	// rlwinm r31,r23,2,0,29
	r31.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491DDC;
	sub_826A1E70(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r22,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 8);
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491DF0;
	sub_826A1E70(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x82491E14;
	sub_8248D5C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82492160
	if (ctx.cr0.eq) goto loc_82492160;
	// b 0x82492138
	goto loc_82492138;
loc_82491E20:
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82491fa4
	if (!ctx.cr6.eq) goto loc_82491FA4;
	// lwz r26,8(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r31,r23,2,0,29
	r31.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491E44;
	sub_826A1E70(ctx, base);
	// lwz r25,8(r21)
	r25.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491E60;
	sub_826A1E70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r26,r31
	ctx.r4.u64 = r26.u64 + r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826a1e70
	ctx.lr = 0x82491E70;
	sub_826A1E70(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r25,r28
	ctx.r4.u64 = r25.u64 + r28.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491E84;
	sub_826A1E70(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x82491EA8;
	sub_8248D5C8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x82491ED0;
	sub_8248D5C8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82491ee0
	if (ctx.cr6.eq) goto loc_82491EE0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82492138
	if (!ctx.cr6.eq) goto loc_82492138;
loc_82491EE0:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82477530
	ctx.lr = 0x82491EE8;
	sub_82477530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82492160
	if (ctx.cr0.eq) goto loc_82492160;
	// lwz r25,8(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491F04;
	sub_826A1E70(ctx, base);
	// lwz r26,8(r21)
	r26.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// add r4,r26,r28
	ctx.r4.u64 = r26.u64 + r28.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491F1C;
	sub_826A1E70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r25,r31
	ctx.r4.u64 = r25.u64 + r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826a1e70
	ctx.lr = 0x82491F2C;
	sub_826A1E70(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491F40;
	sub_826A1E70(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x82491F64;
	sub_8248D5C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x82491F8C;
	sub_8248D5C8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82492160
	if (ctx.cr6.eq) goto loc_82492160;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82492160
	if (ctx.cr6.eq) goto loc_82492160;
	// li r28,1
	r28.s64 = 1;
	// b 0x8249213c
	goto loc_8249213C;
loc_82491FA4:
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82492160
	if (!ctx.cr6.eq) goto loc_82492160;
	// lwz r25,8(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r31,r23,2,0,29
	r31.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491FC8;
	sub_826A1E70(ctx, base);
	// lwz r26,8(r21)
	r26.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82491FE4;
	sub_826A1E70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r25,r31
	ctx.r4.u64 = r25.u64 + r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826a1e70
	ctx.lr = 0x82491FF4;
	sub_826A1E70(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r26,r28
	ctx.r4.u64 = r26.u64 + r28.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82492008;
	sub_826A1E70(ctx, base);
	// rlwinm r11,r23,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x826a1e70
	ctx.lr = 0x8249201C;
	sub_826A1E70(ctx, base);
	// rlwinm r10,r22,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r10,r26
	ctx.r4.u64 = ctx.r10.u64 + r26.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82492034;
	sub_826A1E70(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x82492058;
	sub_8248D5C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x82492080;
	sub_8248D5C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248d5c8
	ctx.lr = 0x824920A8;
	sub_8248D5C8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82492160
	if (ctx.cr6.eq) goto loc_82492160;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82492160
	if (ctx.cr6.eq) goto loc_82492160;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82492160
	if (ctx.cr6.eq) goto loc_82492160;
	// b 0x82492138
	goto loc_82492138;
loc_824920C4:
	// lwz r29,8(r21)
	r29.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82492160
	if (!ctx.cr6.eq) goto loc_82492160;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82492160
	if (!ctx.cr6.eq) goto loc_82492160;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82492160
	if (!ctx.cr6.eq) goto loc_82492160;
	// rlwinm r31,r23,2,0,29
	r31.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82492124;
	sub_826A1E70(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r22,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82492138;
	sub_826A1E70(ctx, base);
loc_82492138:
	// li r28,0
	r28.s64 = 0;
loc_8249213C:
	// cmplw cr6,r19,r20
	ctx.cr6.compare<uint32_t>(r19.u32, r20.u32, ctx.xer);
	// beq cr6,0x824921c0
	if (ctx.cr6.eq) goto loc_824921C0;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// lwzx r10,r10,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r16.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x824921c0
	if (!ctx.cr6.gt) goto loc_824921C0;
loc_82492160:
	// lwz r30,112(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82492164:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x824921a4
	if (!ctx.cr6.gt) goto loc_824921A4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r11.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82492164
	if (ctx.cr6.eq) goto loc_82492164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x82492198;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x824921A0;
	sub_82477B20(ctx, base);
	// b 0x82492164
	goto loc_82492164;
loc_824921A4:
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824921A8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r17,r17,4
	r17.s64 = r17.s64 + 4;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplw cr6,r29,r15
	ctx.cr6.compare<uint32_t>(r29.u32, r15.u32, ctx.xer);
	// blt cr6,0x82491c78
	if (ctx.cr6.lt) goto loc_82491C78;
	// b 0x82492514
	goto loc_82492514;
loc_824921C0:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824921C8;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824921dc
	if (ctx.cr0.eq) goto loc_824921DC;
	// bl 0x824773d0
	ctx.lr = 0x824921D4;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824921e0
	goto loc_824921E0;
loc_824921DC:
	// li r31,0
	r31.s64 = 0;
loc_824921E0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8249254c
	if (ctx.cr6.eq) goto loc_8249254C;
	// lwz r4,0(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// rlwimi r4,r24,0,12,31
	ctx.r4.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFF00000);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x82492204;
	sub_82477B60(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82492558
	if (ctx.cr0.lt) goto loc_82492558;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477420
	ctx.lr = 0x82492218;
	sub_82477420(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82492558
	if (ctx.cr0.lt) goto loc_82492558;
	// cmplw cr6,r19,r20
	ctx.cr6.compare<uint32_t>(r19.u32, r20.u32, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// beq cr6,0x824922ac
	if (ctx.cr6.eq) goto loc_824922AC;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82492290
	if (!ctx.cr6.gt) goto loc_82492290;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
loc_82492240:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8249227c
	if (!ctx.cr6.eq) goto loc_8249227C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8249227c
	if (!ctx.cr6.eq) goto loc_8249227C;
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r20,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r20.u32);
	// lwzx r10,r10,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r16.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_8249227C:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82492240
	if (ctx.cr6.lt) goto loc_82492240;
loc_82492290:
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r16
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r16.u32);
	// lwzx r9,r11,r16
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r10,r16
	REX_STORE_U32(ctx.r10.u32 + r16.u32, ctx.r9.u32);
	// stwx r26,r11,r16
	REX_STORE_U32(ctx.r11.u32 + r16.u32, r26.u32);
loc_824922AC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x824922C0;
	sub_826A1E70(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,12(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 16);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824922E0;
	sub_826A1E70(ctx, base);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// rlwinm r10,r10,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82492304
	if (!ctx.cr6.eq) goto loc_82492304;
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x826a1e70
	ctx.lr = 0x82492304;
	sub_826A1E70(ctx, base);
loc_82492304:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82492354
	if (!ctx.cr6.eq) goto loc_82492354;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82492328
	if (ctx.cr6.eq) goto loc_82492328;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82492328:
	// rlwinm r30,r24,2,0,29
	r30.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82492338;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x82492348
	if (ctx.cr6.eq) goto loc_82492348;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82492348:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// b 0x82492398
	goto loc_82492398;
loc_82492354:
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824923a0
	if (!ctx.cr6.eq) goto loc_824923A0;
	// rlwinm r30,r24,2,0,29
	r30.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82492374;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x826a1e70
	ctx.lr = 0x82492388;
	sub_826A1E70(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82492398:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824923A0;
	sub_826A1E70(ctx, base);
loc_824923A0:
	// lwz r28,116(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// divwu r29,r10,r11
	r29.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x8247c608
	ctx.lr = 0x824923D0;
	sub_8247C608(ctx, base);
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82492438
	if (ctx.cr6.eq) goto loc_82492438;
loc_824923DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8249242c
	if (ctx.cr6.eq) goto loc_8249242C;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_82492400:
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82492400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82492400;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x8249242C;
	sub_826A22F8(ctx, base);
loc_8249242C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x824923dc
	if (ctx.cr6.lt) goto loc_824923DC;
loc_82492438:
	// lwz r30,176(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82492454
	if (ctx.cr6.eq) goto loc_82492454;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x8249244C;
	sub_82130E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477b20
	ctx.lr = 0x82492454;
	sub_82477B20(ctx, base);
loc_82492454:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,24(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 24);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stwx r31,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, r31.u32);
	// stw r26,4(r28)
	REX_STORE_U32(r28.u32 + 4, r26.u32);
	// stw r26,0(r28)
	REX_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r26,12(r28)
	REX_STORE_U32(r28.u32 + 12, r26.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824924fc
	if (!ctx.cr6.gt) goto loc_824924FC;
	// subf r28,r10,r11
	r28.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82492494;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8249254c
	if (ctx.cr0.eq) goto loc_8249254C;
	// lwz r26,112(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824924B8;
	sub_826A1E70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r28,r11
	ctx.r10.u64 = r28.u64 + ctx.r11.u64;
	// subf r11,r11,r26
	ctx.r11.u64 = r26.u64 - ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8269cc20
	ctx.lr = 0x824924DC;
	sub_8269CC20(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824924F0;
	sub_826A1E70(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x824924FC;
	sub_823F0350(ctx, base);
loc_824924FC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82481098
	ctx.lr = 0x82492504;
	sub_82481098(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r14,r11,-1
	r14.s64 = ctx.r11.s64 + -1;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82492514:
	// li r17,0
	r17.s64 = 0;
loc_82492518:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82491ac8
	if (ctx.cr6.lt) goto loc_82491AC8;
loc_82492528:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82492534:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x823f0350
	ctx.lr = 0x82492540;
	sub_823F0350(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82492544:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cd0
	return;
loc_8249254C:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82492534
	goto loc_82492534;
loc_82492558:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x82492560;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x82492568;
	sub_82477B20(ctx, base);
	// b 0x82492534
	goto loc_82492534;
}

DEFINE_REX_FUNC(sub_82504918) {
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
	ctx.lr = 0x82504920;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82504a7c
	if (!ctx.cr0.eq) goto loc_82504A7C;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// b 0x82504a70
	goto loc_82504A70;
loc_82504944:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,126
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 126, ctx.xer);
	// beq cr6,0x82504a60
	if (ctx.cr6.eq) goto loc_82504A60;
	// addi r28,r27,1
	r28.s64 = r27.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8250496c
	if (ctx.cr6.lt) goto loc_8250496C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82504970
	if (!ctx.cr6.gt) goto loc_82504970;
loc_8250496C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82504970:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82504a44
	if (ctx.cr0.eq) goto loc_82504A44;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82504a44
	if (!ctx.cr0.eq) goto loc_82504A44;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82504a44
	if (ctx.cr0.eq) goto loc_82504A44;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825049b0
	if (ctx.cr6.lt) goto loc_825049B0;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825049b4
	if (!ctx.cr6.gt) goto loc_825049B4;
loc_825049B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825049B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82504a44
	if (ctx.cr0.eq) goto loc_82504A44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x824f7af8
	ctx.lr = 0x825049C8;
	sub_824F7AF8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825049d8
	if (!ctx.cr6.eq) goto loc_825049D8;
	// li r29,1
	r29.s64 = 1;
	// b 0x82504a38
	goto loc_82504A38;
loc_825049D8:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82504a38
	if (ctx.cr0.eq) goto loc_82504A38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825224e8
	ctx.lr = 0x825049E8;
	sub_825224E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82504a38
	if (ctx.cr0.eq) goto loc_82504A38;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_825049F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82504a18
	if (ctx.cr6.eq) goto loc_82504A18;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// beq cr6,0x82504a10
	if (ctx.cr6.eq) goto loc_82504A10;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825049f4
	goto loc_825049F4;
loc_82504A10:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82504a1c
	goto loc_82504A1C;
loc_82504A18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82504A1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82504a38
	if (!ctx.cr0.eq) goto loc_82504A38;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82522900
	ctx.lr = 0x82504A34;
	sub_82522900(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82504A38:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82504a44
	if (ctx.cr0.eq) goto loc_82504A44;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82504A44:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// rlwimi r10,r27,0,19,31
	ctx.r10.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE000);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r27,r28
	r27.u64 = r28.u64;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
loc_82504A60:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82504a7c
	if (!ctx.cr0.eq) goto loc_82504A7C;
loc_82504A70:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82504944
	if (!ctx.cr0.eq) goto loc_82504944;
loc_82504A7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82518200) {
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
	ctx.lr = 0x82518208;
	// addi r11,r1,-156
	ctx.r11.s64 = ctx.r1.s64 + -156;
	// stw r6,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// li r18,0
	r18.s64 = 0;
	// clrlwi r17,r10,28
	r17.u64 = ctx.r10.u32 & 0xF;
	// stw r18,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r18.u32);
	// li r23,2
	r23.s64 = 2;
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
	// stw r18,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r18.u32);
	// li r21,-1
	r21.s64 = -1;
	// mr r26,r18
	r26.u64 = r18.u64;
	// mr r29,r17
	r29.u64 = r17.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82518424
	if (ctx.cr6.eq) goto loc_82518424;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lwz r22,192(r4)
	r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// clrldi r6,r17,32
	ctx.r6.u64 = r17.u64 & 0xFFFFFFFF;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mr r28,r18
	r28.u64 = r18.u64;
	// srd r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r6.u8 & 0x7F));
	// srd r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r6.u8 & 0x7F));
	// srd r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r6.u8 & 0x7F));
	// rlwinm r19,r22,2,31,31
	r19.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0x1;
	// clrlwi r20,r11,29
	r20.u64 = ctx.r11.u32 & 0x7;
	// mr r27,r18
	r27.u64 = r18.u64;
	// li r24,-1
	r24.s64 = -1;
loc_8251827C:
	// mr r25,r20
	r25.u64 = r20.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x825183f4
	if (ctx.cr6.eq) goto loc_825183F4;
	// clrlwi r11,r22,29
	ctx.r11.u64 = r22.u32 & 0x7;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825182dc
	if (!ctx.cr6.lt) goto loc_825182DC;
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r11,r10,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFC;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// clrldi r6,r6,58
	ctx.r6.u64 = ctx.r6.u64 & 0x3F;
	// rlwinm r31,r9,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r9,r23,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x40 ? 0 : (r23.u64 << (ctx.r6.u8 & 0x7F));
	// ldx r6,r31,r4
	ctx.r6.u64 = REX_LOAD_U64(r31.u32 + ctx.r4.u32);
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sld r31,r24,r11
	r31.u64 = ctx.r11.u8 & 0x40 ? 0 : (r24.u64 << (ctx.r11.u8 & 0x7F));
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// and r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & r31.u64;
	// srd r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// and r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 & r29.u64;
loc_825182DC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825183a4
	if (ctx.cr6.eq) goto loc_825183A4;
	// lwz r6,192(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 192);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// clrlwi. r30,r6,29
	r30.u64 = ctx.r6.u32 & 0x7;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82518350
	if (ctx.cr0.eq) goto loc_82518350;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
loc_825182F8:
	// li r31,1
	r31.s64 = 1;
	// slw r31,r31,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// and. r31,r31,r8
	r31.u64 = r31.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82518340
	if (!ctx.cr0.eq) goto loc_82518340;
	// addi r31,r6,3
	r31.s64 = ctx.r6.s64 + 3;
	// addi r15,r1,44
	r15.s64 = ctx.r1.s64 + 44;
	// rlwinm r16,r6,29,3,29
	r16.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r31,r31,27
	r31.u64 = r31.u32 & 0x1F;
	// slw r31,r23,r31
	r31.u64 = r31.u8 & 0x20 ? 0 : (r23.u32 << (r31.u8 & 0x3F));
	// lwzx r16,r16,r15
	r16.u64 = REX_LOAD_U32(r16.u32 + r15.u32);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// clrlwi r15,r6,27
	r15.u64 = ctx.r6.u32 & 0x1F;
	// and r31,r31,r16
	r31.u64 = r31.u64 & r16.u64;
	// slw r14,r21,r15
	r14.u64 = r15.u8 & 0x20 ? 0 : (r21.u32 << (r15.u8 & 0x3F));
	// and r31,r31,r14
	r31.u64 = r31.u64 & r14.u64;
	// srw r31,r31,r15
	r31.u64 = r15.u8 & 0x20 ? 0 : (r31.u32 >> (r15.u8 & 0x3F));
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(r26.u32, r31.u32, ctx.xer);
	// beq cr6,0x82518350
	if (ctx.cr6.eq) goto loc_82518350;
loc_82518340:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x825182f8
	if (ctx.cr6.lt) goto loc_825182F8;
loc_82518350:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x825183a4
	if (!ctx.cr6.lt) goto loc_825183A4;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFC;
	// mulli r6,r6,5
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(5));
	// rlwinm r31,r10,24,8,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// addi r30,r11,3
	r30.s64 = ctx.r11.s64 + 3;
	// add r6,r31,r6
	ctx.r6.u64 = r31.u64 + ctx.r6.u64;
	// clrldi r31,r30,58
	r31.u64 = r30.u64 & 0x3F;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r30,r11,58
	r30.u64 = ctx.r11.u64 & 0x3F;
	// sld r11,r23,r31
	ctx.r11.u64 = r31.u8 & 0x40 ? 0 : (r23.u64 << (r31.u8 & 0x7F));
	// ldx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r5.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sld r31,r24,r30
	r31.u64 = r30.u8 & 0x40 ? 0 : (r24.u64 << (r30.u8 & 0x7F));
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & r31.u64;
	// srd r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (r30.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_825183A4:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r6,r6,36262
	ctx.r6.u64 = ctx.r6.u64 | 36262;
	// clrldi r31,r9,32
	r31.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldimi r11,r6,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// rlwinm r6,r28,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1FFFFFFC;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// addi r11,r1,-156
	ctx.r11.s64 = ctx.r1.s64 + -156;
	// srd r30,r30,r31
	r30.u64 = r31.u8 & 0x40 ? 0 : (r30.u64 >> (r31.u8 & 0x7F));
	// srd r30,r30,r31
	r30.u64 = r31.u8 & 0x40 ? 0 : (r30.u64 >> (r31.u8 & 0x7F));
	// lwzx r16,r6,r11
	r16.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// clrlwi r15,r28,27
	r15.u64 = r28.u32 & 0x1F;
	// srd r31,r30,r31
	r31.u64 = r31.u8 & 0x40 ? 0 : (r30.u64 >> (r31.u8 & 0x7F));
	// slw r9,r9,r15
	ctx.r9.u64 = r15.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r15.u8 & 0x3F));
	// clrlwi r31,r31,29
	r31.u64 = r31.u32 & 0x7;
	// or r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 | r16.u64;
	// subf. r25,r31,r25
	r25.u64 = r25.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stwx r9,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r9.u32);
	// beq 0x825185ac
	if (ctx.cr0.eq) goto loc_825185AC;
loc_825183F4:
	// rlwinm r11,r28,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// clrlwi r6,r28,27
	ctx.r6.u64 = r28.u32 & 0x1F;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// slw r6,r25,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r31,r11,r9
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r27,r27,5
	r27.s64 = r27.s64 + 5;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// or r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 | r31.u64;
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r7.u32, ctx.xer);
	// stwx r6,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// blt cr6,0x8251827c
	if (ctx.cr6.lt) goto loc_8251827C;
loc_82518424:
	// mr r28,r18
	r28.u64 = r18.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8251858c
	if (ctx.cr6.eq) goto loc_8251858C;
loc_82518430:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82518440:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// slw r31,r21,r4
	r31.u64 = ctx.r4.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r4.u8 & 0x3F));
	// and r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & r31.u64;
	// srw. r9,r9,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825185ac
	if (ctx.cr0.eq) goto loc_825185AC;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82518484
	if (!ctx.cr6.lt) goto loc_82518484;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82518484:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82518440
	if (ctx.cr6.lt) goto loc_82518440;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r4,r10,31,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1FFFFFFC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r9,r1,-156
	ctx.r9.s64 = ctx.r1.s64 + -156;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r5,r10,2,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r9,r4,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r8,r21,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r5.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// srw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// andc r11,r29,r11
	ctx.r11.u64 = r29.u64 & ~ctx.r11.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
loc_825184E0:
	// addi r9,r6,3
	ctx.r9.s64 = ctx.r6.s64 + 3;
	// clrlwi r8,r6,27
	ctx.r8.u64 = ctx.r6.u32 & 0x1F;
	// clrlwi r30,r9,27
	r30.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r9,r6,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r30,r23,r30
	r30.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// addi r31,r1,-156
	r31.s64 = ctx.r1.s64 + -156;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// slw r26,r21,r8
	r26.u64 = ctx.r8.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r27,r9,r31
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// and r30,r30,r26
	r30.u64 = r30.u64 & r26.u64;
	// and r30,r30,r27
	r30.u64 = r30.u64 & r27.u64;
	// srw r30,r30,r8
	r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r30,r30,r11
	r30.u64 = r30.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82518540
	if (!ctx.cr0.eq) goto loc_82518540;
	// addi r30,r1,-160
	r30.s64 = ctx.r1.s64 + -160;
	// li r26,1
	r26.s64 = 1;
	// slw r25,r11,r8
	r25.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r24,r9,r30
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// rotlwi r27,r27,0
	r27.u64 = __builtin_rotateleft32(r27.u32, 0);
	// slw r8,r26,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r8.u8 & 0x3F));
	// subf r8,r8,r24
	ctx.r8.u64 = r24.u64 - ctx.r8.u64;
	// or r27,r25,r27
	r27.u64 = r25.u64 | r27.u64;
	// stwx r8,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r8.u32);
	// stwx r27,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r27.u32);
loc_82518540:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x825184e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825184E0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,30,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// rlwinm r10,r10,1,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1E;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r31,r8,r3
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r30,r4,r9
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// slw r10,r6,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | r30.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stwx r11,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r10,r4,r9
	REX_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82518430
	if (ctx.cr6.lt) goto loc_82518430;
loc_8251858C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r29,r17
	ctx.r10.u64 = r17.u64 - r29.u64;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_825185AC:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8254C3C0) {
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
	ctx.lr = 0x8254C3C8;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-22012
	ctx.r11.s64 = ctx.r11.s64 + -22012;
	// addi r10,r10,-21496
	ctx.r10.s64 = ctx.r10.s64 + -21496;
	// lfs f31,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f31.f64 = double(temp.f32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r21,1
	r21.s64 = 1;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r20,57
	r20.s64 = 57;
loc_8254C404:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c42c
	if (ctx.cr0.eq) goto loc_8254C42C;
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c424
	if (ctx.cr0.eq) goto loc_8254C424;
	// addi r22,r23,32
	r22.s64 = r23.s64 + 32;
	// b 0x8254c430
	goto loc_8254C430;
loc_8254C424:
	// addi r22,r23,24
	r22.s64 = r23.s64 + 24;
	// b 0x8254c430
	goto loc_8254C430;
loc_8254C42C:
	// addi r22,r23,16
	r22.s64 = r23.s64 + 16;
loc_8254C430:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
loc_8254C434:
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
loc_8254C444:
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
loc_8254C448:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8254e21c
	if (ctx.cr6.eq) goto loc_8254E21C;
	// lwz r11,16(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 16);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// rlwinm r11,r11,0,13,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFE7FFFF;
	// li r26,0
	r26.s64 = 0;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// li r25,-1
	r25.s64 = -1;
	// stw r11,16(r16)
	REX_STORE_U32(r16.u32 + 16, ctx.r11.u32);
	// bl 0x825297d0
	ctx.lr = 0x8254C474;
	sub_825297D0(ctx, base);
	// addi r11,r23,32
	ctx.r11.s64 = r23.s64 + 32;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254c490
	if (!ctx.cr6.eq) goto loc_8254C490;
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// bne cr6,0x8254c4a0
	if (!ctx.cr6.eq) goto loc_8254C4A0;
loc_8254C490:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824f7708
	ctx.lr = 0x8254C498;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254e174
	if (!ctx.cr0.eq) goto loc_8254E174;
loc_8254C4A0:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x8254c4bc
	if (!ctx.cr6.eq) goto loc_8254C4BC;
	// lwz r10,52(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 52);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254e064
	if (!ctx.cr0.eq) goto loc_8254E064;
loc_8254C4BC:
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bne cr6,0x8254c53c
	if (!ctx.cr6.eq) goto loc_8254C53C;
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8254c53c
	if (!ctx.cr6.eq) goto loc_8254C53C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,44(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 44);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x825c5df0
	ctx.lr = 0x8254C4E8;
	sub_825C5DF0(ctx, base);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8254c53c
	if (!ctx.cr6.eq) goto loc_8254C53C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8254C514;
	sub_824F71B8(ctx, base);
	// addi r10,r31,-8
	ctx.r10.s64 = r31.s64 + -8;
	// lwz r11,12(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x8254e168
	if (ctx.cr6.eq) goto loc_8254E168;
loc_8254C53C:
	// lwz r27,8(r16)
	r27.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r29,r27,25,25,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r29,112
	ctx.cr6.compare<uint32_t>(r29.u32, 112, ctx.xer);
	// beq cr6,0x8254c68c
	if (ctx.cr6.eq) goto loc_8254C68C;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r16
	r30.u64 = r16.u64;
loc_8254C554:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8254c5e0
	if (ctx.cr6.eq) goto loc_8254C5E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c5cc
	if (ctx.cr0.eq) goto loc_8254C5CC;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8254c58c
	if (ctx.cr6.eq) goto loc_8254C58C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254c590
	if (!ctx.cr6.eq) goto loc_8254C590;
loc_8254C58C:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8254C590:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254c5cc
	if (!ctx.cr0.eq) goto loc_8254C5CC;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// beq cr6,0x8254c5cc
	if (ctx.cr6.eq) goto loc_8254C5CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8254a0e8
	ctx.lr = 0x8254C5B4;
	sub_8254A0E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14080
	ctx.r11.s64 = ctx.r11.s64 + -14080;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r28,r11,r28
	r28.u64 = ctx.r11.u64 | r28.u64;
loc_8254C5CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8254c554
	if (!ctx.cr6.eq) goto loc_8254C554;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// b 0x8254c554
	goto loc_8254C554;
loc_8254C5E0:
	// lwz r27,8(r16)
	r27.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r29,r27,25,25,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r29,125
	ctx.cr6.compare<uint32_t>(r29.u32, 125, ctx.xer);
	// beq cr6,0x8254c5fc
	if (ctx.cr6.eq) goto loc_8254C5FC;
	// cmplwi cr6,r29,124
	ctx.cr6.compare<uint32_t>(r29.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254c600
	if (!ctx.cr6.eq) goto loc_8254C600;
loc_8254C5FC:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8254C600:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254c684
	if (!ctx.cr0.eq) goto loc_8254C684;
	// addi r30,r16,4
	r30.s64 = r16.s64 + 4;
loc_8254C60C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8254c684
	if (ctx.cr6.eq) goto loc_8254C684;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c670
	if (ctx.cr6.eq) goto loc_8254C670;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254c670
	if (ctx.cr0.eq) goto loc_8254C670;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, ctx.xer);
	// beq cr6,0x8254c670
	if (ctx.cr6.eq) goto loc_8254C670;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x8254c670
	if (ctx.cr6.eq) goto loc_8254C670;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8254a0e8
	ctx.lr = 0x8254C65C;
	sub_8254A0E8(ctx, base);
	// lwz r27,8(r16)
	r27.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r29,r27,25,25,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r29,110
	ctx.cr6.compare<uint32_t>(r29.u32, 110, ctx.xer);
	// bne cr6,0x8254c670
	if (!ctx.cr6.eq) goto loc_8254C670;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_8254C670:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8254c60c
	if (!ctx.cr6.eq) goto loc_8254C60C;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// b 0x8254c60c
	goto loc_8254C60C;
loc_8254C684:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254c404
	if (!ctx.cr0.eq) goto loc_8254C404;
loc_8254C68C:
	// lwz r24,4(r16)
	r24.u64 = REX_LOAD_U32(r16.u32 + 4);
	// addi r14,r16,4
	r14.s64 = r16.s64 + 4;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8254C698:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c6cc
	if (ctx.cr6.eq) goto loc_8254C6CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254c6c4
	if (ctx.cr6.eq) goto loc_8254C6C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254c6c4
	if (ctx.cr0.eq) goto loc_8254C6C4;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// or r26,r10,r26
	r26.u64 = ctx.r10.u64 | r26.u64;
	// and r25,r10,r25
	r25.u64 = ctx.r10.u64 & r25.u64;
loc_8254C6C4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8254c698
	goto loc_8254C698;
loc_8254C6CC:
	// rlwinm. r11,r26,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c6f4
	if (ctx.cr0.eq) goto loc_8254C6F4;
	// cmplwi cr6,r29,125
	ctx.cr6.compare<uint32_t>(r29.u32, 125, ctx.xer);
	// beq cr6,0x8254c6e8
	if (ctx.cr6.eq) goto loc_8254C6E8;
	// cmplwi cr6,r29,124
	ctx.cr6.compare<uint32_t>(r29.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254c6ec
	if (!ctx.cr6.eq) goto loc_8254C6EC;
loc_8254C6E8:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8254C6EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254e1fc
	if (ctx.cr0.eq) goto loc_8254E1FC;
loc_8254C6F4:
	// clrlwi. r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254ce74
	if (ctx.cr0.eq) goto loc_8254CE74;
	// clrlwi r10,r25,31
	ctx.r10.u64 = r25.u32 & 0x1;
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8254c7cc
	if (!ctx.cr6.eq) goto loc_8254C7CC;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82528d80
	ctx.lr = 0x8254C714;
	sub_82528D80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254c7d0
	if (!ctx.cr0.eq) goto loc_8254C7D0;
	// cmplwi cr6,r29,112
	ctx.cr6.compare<uint32_t>(r29.u32, 112, ctx.xer);
	// beq cr6,0x8254c72c
	if (ctx.cr6.eq) goto loc_8254C72C;
	// cmplwi cr6,r29,110
	ctx.cr6.compare<uint32_t>(r29.u32, 110, ctx.xer);
	// bne cr6,0x8254c7cc
	if (!ctx.cr6.eq) goto loc_8254C7CC;
loc_8254C72C:
	// lwz r29,0(r16)
	r29.u64 = REX_LOAD_U32(r16.u32 + 0);
loc_8254C730:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8254c7d0
	if (ctx.cr6.eq) goto loc_8254C7D0;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r31,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c7c4
	if (ctx.cr0.eq) goto loc_8254C7C4;
	// lwz r30,12(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82528d80
	ctx.lr = 0x8254C750;
	sub_82528D80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c7cc
	if (ctx.cr0.eq) goto loc_8254C7CC;
	// rlwinm. r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r31,27
	ctx.r11.u64 = r31.u32 & 0x1F;
	// beq 0x8254c76c
	if (ctx.cr0.eq) goto loc_8254C76C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8254c774
	goto loc_8254C774;
loc_8254C76C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_8254C774:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c7cc
	if (ctx.cr0.eq) goto loc_8254C7CC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r10,r11,8,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254c790
	if (ctx.cr0.eq) goto loc_8254C790;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c7cc
	if (ctx.cr0.eq) goto loc_8254C7CC;
loc_8254C790:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8254C794:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c7c4
	if (ctx.cr6.eq) goto loc_8254C7C4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254c7bc
	if (ctx.cr6.eq) goto loc_8254C7BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254c7bc
	if (ctx.cr0.eq) goto loc_8254C7BC;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254c7cc
	if (ctx.cr0.eq) goto loc_8254C7CC;
loc_8254C7BC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8254c794
	goto loc_8254C794;
loc_8254C7C4:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x8254c730
	goto loc_8254C730;
loc_8254C7CC:
	// mr r28,r21
	r28.u64 = r21.u64;
loc_8254C7D0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254ce5c
	if (ctx.cr0.eq) goto loc_8254CE5C;
	// rlwinm r11,r27,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3F80;
	// rlwinm r10,r27,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-15104
	ctx.r11.s64 = ctx.r11.s64 + -15104;
	// stw r10,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8254c894
	if (!ctx.cr0.eq) goto loc_8254C894;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8254C7FC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254c880
	if (ctx.cr6.eq) goto loc_8254C880;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254c878
	if (ctx.cr6.eq) goto loc_8254C878;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r6,r11,0,4,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8254c878
	if (ctx.cr0.eq) goto loc_8254C878;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c878
	if (ctx.cr0.eq) goto loc_8254C878;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8254c860
	if (!ctx.cr6.eq) goto loc_8254C860;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254c850
	if (ctx.cr6.eq) goto loc_8254C850;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// bne cr6,0x8254c854
	if (!ctx.cr6.eq) goto loc_8254C854;
loc_8254C850:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254C854:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254c860
	if (ctx.cr0.eq) goto loc_8254C860;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_8254C860:
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8254c878
	if (!ctx.cr6.gt) goto loc_8254C878;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8254C878:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8254c7fc
	goto loc_8254C7FC;
loc_8254C880:
	// lwz r11,68(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 68);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8254c894
	if (ctx.cr6.lt) goto loc_8254C894;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_8254C894:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254cc00
	if (!ctx.cr0.eq) goto loc_8254CC00;
	// li r25,0
	r25.s64 = 0;
	// mr r24,r14
	r24.u64 = r14.u64;
loc_8254C8A4:
	// lwz r27,0(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8254ce74
	if (ctx.cr6.eq) goto loc_8254CE74;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254cbec
	if (ctx.cr6.eq) goto loc_8254CBEC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r9,r11,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254cbec
	if (ctx.cr0.eq) goto loc_8254CBEC;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254cbec
	if (ctx.cr0.eq) goto loc_8254CBEC;
	// li r28,0
	r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254c910
	if (ctx.cr6.eq) goto loc_8254C910;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r9,r11,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r8,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
loc_8254C8F0:
	// srw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r7,r21,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r7.u8 & 0x3F));
	// or r28,r7,r28
	r28.u64 = ctx.r7.u64 | r28.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8254c8f0
	if (ctx.cr6.lt) goto loc_8254C8F0;
loc_8254C910:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// lbz r30,-1(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x8250ab60
	ctx.lr = 0x8254C928;
	sub_8250AB60(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r28,32
	ctx.r9.u64 = r28.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8250a620
	ctx.lr = 0x8254C968;
	sub_8250A620(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r30,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r26,16(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r30,28(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 28);
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// bne cr6,0x8254c994
	if (!ctx.cr6.eq) goto loc_8254C994;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8254c994
	if (ctx.cr6.eq) goto loc_8254C994;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x8254ca94
	goto loc_8254CA94;
loc_8254C994:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8250c998
	ctx.lr = 0x8254C9AC;
	sub_8250C998(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// beq cr6,0x8254ca4c
	if (ctx.cr6.eq) goto loc_8254CA4C;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r7.u32);
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8254ca0c
	if (ctx.cr6.eq) goto loc_8254CA0C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254ca10
	if (!ctx.cr6.eq) goto loc_8254CA10;
loc_8254CA0C:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8254CA10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254ca88
	if (!ctx.cr0.eq) goto loc_8254CA88;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8254CA1C:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8254ca88
	if (ctx.cr6.eq) goto loc_8254CA88;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8254a0e8
	ctx.lr = 0x8254CA38;
	sub_8254A0E8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8254ca1c
	if (!ctx.cr6.eq) goto loc_8254CA1C;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// b 0x8254ca1c
	goto loc_8254CA1C;
loc_8254CA4C:
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r25,r31
	r25.u64 = r31.u64;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_8254CA88:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8254CA94:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8254cb40
	if (!ctx.cr6.eq) goto loc_8254CB40;
	// addi r7,r26,4
	ctx.r7.s64 = r26.s64 + 4;
loc_8254CAA8:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254cbc8
	if (ctx.cr6.eq) goto loc_8254CBC8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254cb2c
	if (ctx.cr6.eq) goto loc_8254CB2C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8254cad8
	goto loc_8254CAD8;
loc_8254CAD0:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8254CAD8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254cad0
	if (!ctx.cr6.eq) goto loc_8254CAD0;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// clrlwi. r6,r21,31
	ctx.r6.u64 = r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq 0x8254cb20
	if (ctx.cr0.eq) goto loc_8254CB20;
	// rlwinm. r6,r8,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8254cb20
	if (ctx.cr0.eq) goto loc_8254CB20;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_8254CB20:
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwimi r9,r10,0,0,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r9.u64 & 0xFFFFFFFF0000001F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8254CB2C:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254caa8
	if (!ctx.cr6.eq) goto loc_8254CAA8;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// b 0x8254caa8
	goto loc_8254CAA8;
loc_8254CB40:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254cb58
	goto loc_8254CB58;
loc_8254CB50:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8254CB58:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x8254cb50
	if (!ctx.cr6.eq) goto loc_8254CB50;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// stw r31,12(r27)
	REX_STORE_U32(r27.u32 + 12, r31.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r8,r10,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// lbz r11,-1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r7,r10,26,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r9,r10,28,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r7,r8,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r7,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_8254CBC8:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8254cbec
	if (!ctx.cr6.eq) goto loc_8254CBEC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825c2288
	ctx.lr = 0x8254CBEC;
	sub_825C2288(ctx, base);
loc_8254CBEC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x8254c8a4
	if (!ctx.cr6.eq) goto loc_8254C8A4;
	// addi r24,r27,8
	r24.s64 = r27.s64 + 8;
	// b 0x8254c8a4
	goto loc_8254C8A4;
loc_8254CC00:
	// li r30,0
	r30.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_8254CC08:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8254cc74
	if (ctx.cr6.eq) goto loc_8254CC74;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254cc6c
	if (ctx.cr6.eq) goto loc_8254CC6C;
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r8,r7,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8254cc6c
	if (ctx.cr0.eq) goto loc_8254CC6C;
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254cc6c
	if (ctx.cr0.eq) goto loc_8254CC6C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8254cc68
	if (ctx.cr6.eq) goto loc_8254CC68;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254CC44:
	// rlwinm r5,r7,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r5,r21,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r5.u8 & 0x3F));
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8254cc44
	if (ctx.cr6.lt) goto loc_8254CC44;
loc_8254CC68:
	// or r30,r30,r9
	r30.u64 = r30.u64 | ctx.r9.u64;
loc_8254CC6C:
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x8254cc08
	goto loc_8254CC08;
loc_8254CC74:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r29,-1(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x8250ab60
	ctx.lr = 0x8254CC8C;
	sub_8250AB60(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8250a620
	ctx.lr = 0x8254CCCC;
	sub_8250A620(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r29,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15104
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15104, ctx.xer);
	// bne cr6,0x8254ccf0
	if (!ctx.cr6.eq) goto loc_8254CCF0;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8254CCF0:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8250c998
	ctx.lr = 0x8254CD08;
	sub_8250C998(ctx, base);
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r23,16
	ctx.r11.s64 = r23.s64 + 16;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// bne cr6,0x8254cd50
	if (!ctx.cr6.eq) goto loc_8254CD50;
	// addi r11,r23,24
	ctx.r11.s64 = r23.s64 + 24;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x8254cd7c
	goto loc_8254CD7C;
loc_8254CD50:
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_8254CD7C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_8254CD8C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254ce74
	if (ctx.cr6.eq) goto loc_8254CE74;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254ce48
	if (ctx.cr6.eq) goto loc_8254CE48;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254ce48
	if (ctx.cr0.eq) goto loc_8254CE48;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254ce48
	if (ctx.cr0.eq) goto loc_8254CE48;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8254cdd0
	goto loc_8254CDD0;
loc_8254CDC8:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8254CDD0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254cdc8
	if (!ctx.cr6.eq) goto loc_8254CDC8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r7,r30,r7
	ctx.r7.u64 = r30.u64 + ctx.r7.u64;
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
	// lbz r7,-1(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r10,r10,0,29,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE007;
	// rlwinm r6,r9,27,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x6;
	// rlwinm r5,r9,29,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x6;
	// srw r6,r7,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r5,r6,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r6,r9,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x6;
	// rlwinm r9,r9,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// srw r6,r7,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r6,r5,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi r9,r6,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8254CE48:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254cd8c
	if (!ctx.cr6.eq) goto loc_8254CD8C;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8254cd8c
	goto loc_8254CD8C;
loc_8254CE5C:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82528d80
	ctx.lr = 0x8254CE64;
	sub_82528D80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254cee4
	if (ctx.cr0.eq) goto loc_8254CEE4;
	// ori r11,r27,1
	ctx.r11.u64 = r27.u64 | 1;
	// stw r11,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r11.u32);
loc_8254CE74:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x8254ce94
	if (ctx.cr6.eq) goto loc_8254CE94;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x8254ce94
	if (ctx.cr6.eq) goto loc_8254CE94;
	// cmplwi cr6,r11,104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 104, ctx.xer);
	// bne cr6,0x8254d364
	if (!ctx.cr6.eq) goto loc_8254D364;
loc_8254CE94:
	// mr r25,r16
	r25.u64 = r16.u64;
loc_8254CE98:
	// lwz r29,0(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8254d364
	if (ctx.cr6.eq) goto loc_8254D364;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r30,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d350
	if (ctx.cr0.eq) goto loc_8254D350;
	// rlwinm r4,r30,0,27,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E;
	// lwz r26,12(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82528eb8
	ctx.lr = 0x8254CEC0;
	sub_82528EB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d128
	if (ctx.cr0.eq) goto loc_8254D128;
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8254d350
	if (!ctx.cr6.eq) goto loc_8254D350;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// addi r11,r26,8
	ctx.r11.s64 = r26.s64 + 8;
	// b 0x8254d0e8
	goto loc_8254D0E8;
loc_8254CEE4:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
loc_8254CEE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254cf24
	if (ctx.cr6.eq) goto loc_8254CF24;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254cf1c
	if (ctx.cr0.eq) goto loc_8254CF1C;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r8,r10,8,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8254cf1c
	if (ctx.cr0.eq) goto loc_8254CF1C;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_8254CF1C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8254cee8
	goto loc_8254CEE8;
loc_8254CF24:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
loc_8254CF28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254ce74
	if (ctx.cr6.eq) goto loc_8254CE74;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254cf50
	if (ctx.cr6.eq) goto loc_8254CF50;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254cf50
	if (ctx.cr0.eq) goto loc_8254CF50;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8254CF50:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8254cf28
	goto loc_8254CF28;
loc_8254CF58:
	// rlwinm r11,r30,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x3;
	// lwz r10,28(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 28);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8254d128
	if (!ctx.cr6.eq) goto loc_8254D128;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r8,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254d128
	if (!ctx.cr0.eq) goto loc_8254D128;
	// rlwinm. r9,r8,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r30,27
	ctx.r11.u64 = r30.u32 & 0x1F;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// beq 0x8254cfa8
	if (ctx.cr0.eq) goto loc_8254CFA8;
	// rlwinm. r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254cfa8
	if (ctx.cr0.eq) goto loc_8254CFA8;
loc_8254CFA0:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8254cfd0
	goto loc_8254CFD0;
loc_8254CFA8:
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254cfb8
	if (ctx.cr0.eq) goto loc_8254CFB8;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8254cfa0
	if (!ctx.cr0.eq) goto loc_8254CFA0;
loc_8254CFB8:
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254cfcc
	if (ctx.cr0.eq) goto loc_8254CFCC;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne 0x8254cfd0
	if (!ctx.cr0.eq) goto loc_8254CFD0;
loc_8254CFCC:
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
loc_8254CFD0:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d128
	if (ctx.cr0.eq) goto loc_8254D128;
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254cfec
	if (ctx.cr0.eq) goto loc_8254CFEC;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254cfec
	if (ctx.cr0.eq) goto loc_8254CFEC;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8254CFEC:
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d000
	if (ctx.cr0.eq) goto loc_8254D000;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8254D000:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d014
	if (ctx.cr0.eq) goto loc_8254D014;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d014
	if (ctx.cr0.eq) goto loc_8254D014;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8254D014:
	// lwz r9,0(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 0);
	// or r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r6,r8,27,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8254d038
	if (ctx.cr6.eq) goto loc_8254D038;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// bne cr6,0x8254d03c
	if (!ctx.cr6.eq) goto loc_8254D03C;
loc_8254D038:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254D03C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254d060
	if (!ctx.cr0.eq) goto loc_8254D060;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82549288
	ctx.lr = 0x8254D058;
	sub_82549288(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8254e184
	if (!ctx.cr0.eq) goto loc_8254E184;
loc_8254D060:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254d078
	goto loc_8254D078;
loc_8254D070:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8254D078:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8254d070
	if (!ctx.cr6.eq) goto loc_8254D070;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r9,r6,5,22,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x3E0;
	// clrlwi r8,r7,27
	ctx.r8.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r9,r9,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// ori r9,r9,7296
	ctx.r9.u64 = ctx.r9.u64 | 7296;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// stw r31,12(r29)
	REX_STORE_U32(r29.u32 + 12, r31.u32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x824f7708
	ctx.lr = 0x8254D0C8;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d0dc
	if (ctx.cr0.eq) goto loc_8254D0DC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825c2510
	ctx.lr = 0x8254D0DC;
	sub_825C2510(ctx, base);
loc_8254D0DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_8254D0E8:
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// beq cr6,0x8254cf58
	if (ctx.cr6.eq) goto loc_8254CF58;
	// rlwinm. r10,r30,0,27,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254d128
	if (!ctx.cr0.eq) goto loc_8254D128;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8254d11c
	if (ctx.cr6.eq) goto loc_8254D11C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254d120
	if (!ctx.cr6.eq) goto loc_8254D120;
loc_8254D11C:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8254D120:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d350
	if (ctx.cr0.eq) goto loc_8254D350;
loc_8254D128:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// lwz r27,28(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 28);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8254d170
	if (!ctx.cr6.eq) goto loc_8254D170;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254d15c
	if (ctx.cr6.eq) goto loc_8254D15C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// bne cr6,0x8254d160
	if (!ctx.cr6.eq) goto loc_8254D160;
loc_8254D15C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254D160:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254d174
	if (!ctx.cr0.eq) goto loc_8254D174;
	// rlwinm. r11,r30,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254d174
	if (!ctx.cr0.eq) goto loc_8254D174;
loc_8254D170:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_8254D174:
	// rlwinm r8,r30,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 7) & 0x7;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825bb860
	ctx.lr = 0x8254D190;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// bne cr6,0x8254d1e8
	if (!ctx.cr6.eq) goto loc_8254D1E8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82504458
	ctx.lr = 0x8254D1A4;
	sub_82504458(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d1e8
	if (ctx.cr0.eq) goto loc_8254D1E8;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// b 0x8254d220
	goto loc_8254D220;
loc_8254D1E8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,28(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 28);
	// addi r10,r28,24
	ctx.r10.s64 = r28.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,28(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 28);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r7.u32);
loc_8254D220:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8254D22C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8254D23C;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254d258
	goto loc_8254D258;
loc_8254D250:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8254D258:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8254d250
	if (!ctx.cr6.eq) goto loc_8254D250;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r31,12(r29)
	REX_STORE_U32(r29.u32 + 12, r31.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r20,7,19,31
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 7) & 0x1FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE000);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8254d320
	if (ctx.cr6.eq) goto loc_8254D320;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(r28.u32, r23.u32, ctx.xer);
	// bne cr6,0x8254d328
	if (!ctx.cr6.eq) goto loc_8254D328;
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8254d320
	if (!ctx.cr6.eq) goto loc_8254D320;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
loc_8254D2A8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254d30c
	if (ctx.cr6.eq) goto loc_8254D30C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254d2f8
	if (ctx.cr6.eq) goto loc_8254D2F8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8254d2d8
	goto loc_8254D2D8;
loc_8254D2D0:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8254D2D8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254d2d0
	if (!ctx.cr6.eq) goto loc_8254D2D0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
loc_8254D2F8:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254d2a8
	if (!ctx.cr6.eq) goto loc_8254D2A8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8254d2a8
	goto loc_8254D2A8;
loc_8254D30C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825c2288
	ctx.lr = 0x8254D320;
	sub_825C2288(ctx, base);
loc_8254D320:
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(r28.u32, r23.u32, ctx.xer);
	// beq cr6,0x8254c404
	if (ctx.cr6.eq) goto loc_8254C404;
loc_8254D328:
	// lbz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d350
	if (ctx.cr0.eq) goto loc_8254D350;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8254D33C;
	sub_8250AED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825226b0
	ctx.lr = 0x8254D344;
	sub_825226B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8254D350:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8254ce98
	if (!ctx.cr6.eq) goto loc_8254CE98;
	// addi r25,r29,4
	r25.s64 = r29.s64 + 4;
	// b 0x8254ce98
	goto loc_8254CE98;
loc_8254D364:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8254d5ac
	if (!ctx.cr6.eq) goto loc_8254D5AC;
	// li r27,0
	r27.s64 = 0;
	// addi r26,r16,44
	r26.s64 = r16.s64 + 44;
loc_8254D37C:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r10,r11,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8254d5ac
	if (!ctx.cr6.lt) goto loc_8254D5AC;
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x8254d4ac
	goto loc_8254D4AC;
loc_8254D394:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254d4c4
	if (!ctx.cr0.eq) goto loc_8254D4C4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r8,r11,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// beq 0x8254d3d8
	if (ctx.cr0.eq) goto loc_8254D3D8;
	// rlwinm. r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d3d8
	if (ctx.cr0.eq) goto loc_8254D3D8;
loc_8254D3D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8254d400
	goto loc_8254D400;
loc_8254D3D8:
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d3e8
	if (ctx.cr0.eq) goto loc_8254D3E8;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8254d3d0
	if (!ctx.cr0.eq) goto loc_8254D3D0;
loc_8254D3E8:
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254d3fc
	if (ctx.cr0.eq) goto loc_8254D3FC;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8254d400
	if (!ctx.cr0.eq) goto loc_8254D400;
loc_8254D3FC:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8254D400:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d4c4
	if (ctx.cr0.eq) goto loc_8254D4C4;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8254d424
	goto loc_8254D424;
loc_8254D41C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8254D424:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x8254d41c
	if (!ctx.cr6.eq) goto loc_8254D41C;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwimi r10,r11,0,27,18
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F) | (ctx.r10.u64 & 0x1FE0);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d474
	if (ctx.cr0.eq) goto loc_8254D474;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d474
	if (ctx.cr0.eq) goto loc_8254D474;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8254D474:
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d488
	if (ctx.cr0.eq) goto loc_8254D488;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8254D488:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d49c
	if (ctx.cr0.eq) goto loc_8254D49C;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8254d49c
	if (ctx.cr0.eq) goto loc_8254D49C;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8254D49C:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r9,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8254D4AC:
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8254d394
	if (ctx.cr6.eq) goto loc_8254D394;
	// b 0x8254d5a0
	goto loc_8254D5A0;
loc_8254D4C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8250c998
	ctx.lr = 0x8254D4D8;
	sub_8250C998(ctx, base);
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8254D4E0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8254d508
	if (ctx.cr6.eq) goto loc_8254D508;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254d500
	if (!ctx.cr0.eq) goto loc_8254D500;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8254D500;
	sub_8250AD28(ctx, base);
loc_8254D500:
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
	// b 0x8254d4e0
	goto loc_8254D4E0;
loc_8254D508:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254d558
	goto loc_8254D558;
loc_8254D550:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8254D558:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8254d550
	if (!ctx.cr6.eq) goto loc_8254D550;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r20,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8250aed8
	ctx.lr = 0x8254D58C;
	sub_8250AED8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825226b0
	ctx.lr = 0x8254D594;
	sub_825226B0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8254D5A0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x8254d37c
	goto loc_8254D37C;
loc_8254D5AC:
	// rlwinm r9,r11,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8254d5c4
	if (ctx.cr6.lt) goto loc_8254D5C4;
	// cmplwi cr6,r9,102
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 102, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// ble cr6,0x8254d5c8
	if (!ctx.cr6.gt) goto loc_8254D5C8;
loc_8254D5C4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254D5C8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254d5e0
	if (!ctx.cr0.eq) goto loc_8254D5E0;
	// cmplwi cr6,r9,105
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 105, ctx.xer);
	// beq cr6,0x8254d5e0
	if (ctx.cr6.eq) goto loc_8254D5E0;
	// cmplwi cr6,r9,104
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 104, ctx.xer);
	// bne cr6,0x8254db40
	if (!ctx.cr6.eq) goto loc_8254DB40;
loc_8254D5E0:
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r18,0
	r18.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// li r17,0
	r17.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// beq 0x8254d884
	if (ctx.cr0.eq) goto loc_8254D884;
	// addi r21,r16,44
	r21.s64 = r16.s64 + 44;
loc_8254D608:
	// lwz r29,0(r21)
	r29.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r28,0(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r27,r28,7,29,31
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8254d86c
	if (ctx.cr0.eq) goto loc_8254D86C;
	// clrlwi r25,r28,27
	r25.u64 = r28.u32 & 0x1F;
	// lwz r30,12(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82528eb8
	ctx.lr = 0x8254D62C;
	sub_82528EB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bne 0x8254d6c8
	if (!ctx.cr0.eq) goto loc_8254D6C8;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8254d650
	if (ctx.cr6.eq) goto loc_8254D650;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254d654
	if (!ctx.cr6.eq) goto loc_8254D654;
loc_8254D650:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8254D654:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254d764
	if (!ctx.cr0.eq) goto loc_8254D764;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82504458
	ctx.lr = 0x8254D664;
	sub_82504458(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d67c
	if (ctx.cr0.eq) goto loc_8254D67C;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r30,r11,0,30,31
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3) | (r30.u64 & 0xFFFFFFFFFFFFFFFC);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x8254d68c
	goto loc_8254D68C;
loc_8254D67C:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
loc_8254D68C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,316(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825c0e88
	ctx.lr = 0x8254D69C;
	sub_825C0E88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254d86c
	if (!ctx.cr0.eq) goto loc_8254D86C;
	// lwz r31,12(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8254D6B0;
	sub_8250AED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825226b0
	ctx.lr = 0x8254D6B8;
	sub_825226B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8254d86c
	goto loc_8254D86C;
loc_8254D6C8:
	// rlwinm r26,r11,25,25,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r26,125
	ctx.cr6.compare<uint32_t>(r26.u32, 125, ctx.xer);
	// beq cr6,0x8254d6e0
	if (ctx.cr6.eq) goto loc_8254D6E0;
	// cmplwi cr6,r26,124
	ctx.cr6.compare<uint32_t>(r26.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254d6e4
	if (!ctx.cr6.eq) goto loc_8254D6E4;
loc_8254D6E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8254D6E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d790
	if (ctx.cr0.eq) goto loc_8254D790;
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r31,r11,25,25,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r31,96
	ctx.cr6.compare<uint32_t>(r31.u32, 96, ctx.xer);
	// blt cr6,0x8254d708
	if (ctx.cr6.lt) goto loc_8254D708;
	// cmplwi cr6,r31,102
	ctx.cr6.compare<uint32_t>(r31.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8254d70c
	if (!ctx.cr6.gt) goto loc_8254D70C;
loc_8254D708:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254D70C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d75c
	if (ctx.cr0.eq) goto loc_8254D75C;
	// cmplwi cr6,r26,124
	ctx.cr6.compare<uint32_t>(r26.u32, 124, ctx.xer);
	// bne cr6,0x8254d764
	if (!ctx.cr6.eq) goto loc_8254D764;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8254D734;
	sub_824F71B8(ctx, base);
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// lwz r11,12(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x8254d764
	if (!ctx.cr6.eq) goto loc_8254D764;
loc_8254D75C:
	// cmplwi cr6,r31,104
	ctx.cr6.compare<uint32_t>(r31.u32, 104, ctx.xer);
	// bne cr6,0x8254d788
	if (!ctx.cr6.eq) goto loc_8254D788;
loc_8254D764:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8254a438
	ctx.lr = 0x8254D778;
	sub_8254A438(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r17,24
	ctx.r10.u64 = r17.u32 & 0xFF;
	// or r17,r11,r10
	r17.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x8254d86c
	goto loc_8254D86C;
loc_8254D788:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x8254d7c8
	goto loc_8254D7C8;
loc_8254D790:
	// cmplwi cr6,r26,118
	ctx.cr6.compare<uint32_t>(r26.u32, 118, ctx.xer);
	// bne cr6,0x8254d850
	if (!ctx.cr6.eq) goto loc_8254D850;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8254d7bc
	if (ctx.cr6.eq) goto loc_8254D7BC;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254d7c0
	if (!ctx.cr6.eq) goto loc_8254D7C0;
loc_8254D7BC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8254D7C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254e210
	if (ctx.cr0.eq) goto loc_8254E210;
loc_8254D7C8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254d850
	if (ctx.cr6.eq) goto loc_8254D850;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm. r9,r28,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r8,r11,r24
	ctx.r8.u64 = r24.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r24.u8 & 0x3F));
	// or r18,r18,r8
	r18.u64 = r18.u64 | ctx.r8.u64;
	// beq 0x8254d7e8
	if (ctx.cr0.eq) goto loc_8254D7E8;
	// or r23,r23,r8
	r23.u64 = r23.u64 | ctx.r8.u64;
loc_8254D7E8:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8254d800
	if (!ctx.cr6.eq) goto loc_8254D800;
	// or r22,r22,r8
	r22.u64 = r22.u64 | ctx.r8.u64;
	// b 0x8254d850
	goto loc_8254D850;
loc_8254D800:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x8254d850
	if (!ctx.cr6.eq) goto loc_8254D850;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8254d850
	if (ctx.cr6.eq) goto loc_8254D850;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254D818:
	// rlwinm r10,r28,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0xFF;
	// srw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8254d84c
	if (ctx.cr6.lt) goto loc_8254D84C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// blt cr6,0x8254d818
	if (ctx.cr6.lt) goto loc_8254D818;
	// b 0x8254d850
	goto loc_8254D850;
loc_8254D84C:
	// or r20,r20,r8
	r20.u64 = r20.u64 | ctx.r8.u64;
loc_8254D850:
	// rlwinm. r11,r25,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254d860
	if (!ctx.cr0.eq) goto loc_8254D860;
	// cmplwi cr6,r26,118
	ctx.cr6.compare<uint32_t>(r26.u32, 118, ctx.xer);
	// bne cr6,0x8254d86c
	if (!ctx.cr6.eq) goto loc_8254D86C;
loc_8254D860:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r24.u8 & 0x3F));
	// or r19,r11,r19
	r19.u64 = ctx.r11.u64 | r19.u64;
loc_8254D86C:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8254d608
	if (ctx.cr6.lt) goto loc_8254D608;
loc_8254D884:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8254d9ec
	if (ctx.cr6.eq) goto loc_8254D9EC;
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(r23.u32, r18.u32, ctx.xer);
	// beq cr6,0x8254d9ec
	if (ctx.cr6.eq) goto loc_8254D9EC;
	// and r11,r22,r23
	ctx.r11.u64 = r22.u64 & r23.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x8254d8ac
	if (!ctx.cr6.eq) goto loc_8254D8AC;
	// andc. r10,r20,r23
	ctx.r10.u64 = r20.u64 & ~r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254d8b4
	if (ctx.cr0.eq) goto loc_8254D8B4;
loc_8254D8AC:
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// subf r23,r11,r23
	r23.u64 = r23.u64 - ctx.r11.u64;
loc_8254D8B4:
	// and. r25,r22,r23
	r25.u64 = r22.u64 & r23.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// nor r11,r22,r23
	ctx.r11.u64 = ~(r22.u64 | r23.u64);
	// bne 0x8254d8c4
	if (!ctx.cr0.eq) goto loc_8254D8C4;
	// andc r11,r23,r22
	ctx.r11.u64 = r23.u64 & ~r22.u64;
loc_8254D8C4:
	// and r26,r11,r18
	r26.u64 = ctx.r11.u64 & r18.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8254d9ec
	if (ctx.cr6.eq) goto loc_8254D9EC;
	// li r20,57
	r20.s64 = 57;
loc_8254D8D4:
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// li r29,0
	r29.s64 = 0;
	// andc r11,r26,r11
	ctx.r11.u64 = r26.u64 & ~ctx.r11.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r26,r11,r26
	r26.u64 = r26.u64 - ctx.r11.u64;
	// subfic r11,r10,42
	ctx.xer.ca = ctx.r10.u32 <= 42;
	ctx.r11.u64 = static_cast<uint64_t>(42) - ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r16
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r27,12(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254d948
	if (ctx.cr0.eq) goto loc_8254D948;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_8254D910:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r30.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x825b8558
	ctx.lr = 0x8254D92C;
	sub_825B8558(ctx, base);
	// stfsu f1,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r28.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8254d910
	if (ctx.cr6.lt) goto loc_8254D910;
loc_8254D948:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r4,r10,7,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825bdf00
	ctx.lr = 0x8254D96C;
	sub_825BDF00(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254d988
	goto loc_8254D988;
loc_8254D980:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8254D988:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8254d980
	if (!ctx.cr6.eq) goto loc_8254D980;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
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
	// rlwimi r11,r20,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8254d9c4
	if (ctx.cr6.eq) goto loc_8254D9C4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x8254d9c8
	goto loc_8254D9C8;
loc_8254D9C4:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8254D9C8:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8254D9D4;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bne cr6,0x8254d8d4
	if (!ctx.cr6.eq) goto loc_8254D8D4;
	// b 0x8254d9f0
	goto loc_8254D9F0;
loc_8254D9EC:
	// li r20,57
	r20.s64 = 57;
loc_8254D9F0:
	// andc. r4,r19,r24
	ctx.r4.u64 = r19.u64 & ~r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8254da14
	if (ctx.cr0.eq) goto loc_8254DA14;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// andc r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254da14
	if (!ctx.cr0.eq) goto loc_8254DA14;
	// li r21,1
	r21.s64 = 1;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// b 0x8254da1c
	goto loc_8254DA1C;
loc_8254DA14:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r21,1
	r21.s64 = 1;
loc_8254DA1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254dac4
	if (!ctx.cr0.eq) goto loc_8254DAC4;
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r7,r16,44
	ctx.r7.s64 = r16.s64 + 44;
loc_8254DA3C:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8254dac4
	if (!ctx.cr6.lt) goto loc_8254DAC4;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r3,r11,0,4,6
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8254dab8
	if (ctx.cr0.eq) goto loc_8254DAB8;
	// rlwinm. r3,r11,0,27,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8254dab8
	if (ctx.cr0.eq) goto loc_8254DAB8;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254da74
	if (ctx.cr0.eq) goto loc_8254DA74;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8254dab0
	if (!ctx.cr6.eq) goto loc_8254DAB0;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// b 0x8254dab8
	goto loc_8254DAB8;
loc_8254DA74:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254dab0
	if (!ctx.cr0.eq) goto loc_8254DAB0;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15104
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15104, ctx.xer);
	// bne cr6,0x8254dab8
	if (!ctx.cr6.eq) goto loc_8254DAB8;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8254daa8
	if (!ctx.cr6.eq) goto loc_8254DAA8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x8254dab8
	goto loc_8254DAB8;
loc_8254DAA8:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8254dab8
	if (ctx.cr6.eq) goto loc_8254DAB8;
loc_8254DAB0:
	// slw r11,r21,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r9.u8 & 0x3F));
	// or r24,r11,r24
	r24.u64 = ctx.r11.u64 | r24.u64;
loc_8254DAB8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x8254da3c
	goto loc_8254DA3C;
loc_8254DAC4:
	// not r11,r24
	ctx.r11.u64 = ~r24.u64;
	// and. r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254db28
	if (ctx.cr0.eq) goto loc_8254DB28;
	// and r11,r18,r11
	ctx.r11.u64 = r18.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x8254db28
	if (!ctx.cr6.eq) goto loc_8254DB28;
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x8254db28
	if (ctx.cr6.eq) goto loc_8254DB28;
	// ori r24,r24,4
	r24.u64 = r24.u64 | 4;
	// b 0x8254db28
	goto loc_8254DB28;
loc_8254DAF0:
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// andc r11,r24,r11
	ctx.r11.u64 = r24.u64 & ~ctx.r11.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r24,r11,r24
	r24.u64 = r24.u64 - ctx.r11.u64;
	// subfic r5,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r5.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// addi r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r16.u32);
	// bl 0x8254a438
	ctx.lr = 0x8254DB1C;
	sub_8254A438(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r17,24
	ctx.r10.u64 = r17.u32 & 0xFF;
	// or r17,r11,r10
	r17.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8254DB28:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8254daf0
	if (!ctx.cr6.eq) goto loc_8254DAF0;
	// lwz r23,316(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// clrlwi. r11,r17,24
	ctx.r11.u64 = r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254c404
	if (!ctx.cr0.eq) goto loc_8254C404;
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8254DB40:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x8254db60
	if (ctx.cr6.eq) goto loc_8254DB60;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// beq cr6,0x8254db60
	if (ctx.cr6.eq) goto loc_8254DB60;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// bne cr6,0x8254db6c
	if (!ctx.cr6.eq) goto loc_8254DB6C;
loc_8254DB60:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,44(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 44);
	// bl 0x8250a620
	ctx.lr = 0x8254DB6C;
	sub_8250A620(ctx, base);
loc_8254DB6C:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r10,110
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 110, ctx.xer);
	// bgt cr6,0x8254dc64
	if (ctx.cr6.gt) goto loc_8254DC64;
	// beq cr6,0x8254dc48
	if (ctx.cr6.eq) goto loc_8254DC48;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// blt cr6,0x8254db90
	if (ctx.cr6.lt) goto loc_8254DB90;
	// cmpwi cr6,r10,28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 28, ctx.xer);
	// ble cr6,0x8254db9c
	if (!ctx.cr6.gt) goto loc_8254DB9C;
loc_8254DB90:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8254DB98;
	sub_8250AED8(ctx, base);
	// b 0x8254dcd8
	goto loc_8254DCD8;
loc_8254DB9C:
	// lwz r4,44(r16)
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + 44);
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r7,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8254db90
	if (!ctx.cr6.lt) goto loc_8254DB90;
	// lwz r8,48(r16)
	ctx.r8.u64 = REX_LOAD_U32(r16.u32 + 48);
	// subfic r9,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r9.u64 = static_cast<uint64_t>(4) - ctx.r11.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r7,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// srw r3,r10,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r9,r6,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0xFF;
	// clrlwi r6,r3,30
	ctx.r6.u64 = ctx.r3.u32 & 0x3;
	// srw r5,r9,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
loc_8254DBE4:
	// li r3,3
	ctx.r3.s64 = 3;
	// slw r31,r6,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// slw r3,r3,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
	// slw r30,r5,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ctx.r10.u64;
	// and r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ctx.r9.u64;
	// or r10,r31,r10
	ctx.r10.u64 = r31.u64 | ctx.r10.u64;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8254dbe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8254DBE4;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// rlwinm r7,r7,0,27,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r10,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r7,r7,0,7,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFF9FFFFFF;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwimi r10,r9,5,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r11,r11,0,7,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF9FFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x8254db90
	goto loc_8254DB90;
loc_8254DC48:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8254a570
	ctx.lr = 0x8254DC58;
	sub_8254A570(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254c404
	if (!ctx.cr0.eq) goto loc_8254C404;
	// b 0x8254dcd8
	goto loc_8254DCD8;
loc_8254DC64:
	// cmpwi cr6,r10,113
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 113, ctx.xer);
	// beq cr6,0x8254dc88
	if (ctx.cr6.eq) goto loc_8254DC88;
	// cmpwi cr6,r10,124
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 124, ctx.xer);
	// beq cr6,0x8254dc88
	if (ctx.cr6.eq) goto loc_8254DC88;
	// cmpwi cr6,r10,125
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 125, ctx.xer);
	// bne cr6,0x8254db90
	if (!ctx.cr6.eq) goto loc_8254DB90;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8254DC84;
	sub_82528FD8(ctx, base);
	// b 0x8254dcd8
	goto loc_8254DCD8;
loc_8254DC88:
	// rlwinm r10,r11,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// lwz r9,16(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 16);
	// lis r8,-28311
	ctx.r8.s64 = -1855389696;
	// lis r7,0
	ctx.r7.s64 = 0;
	// slw r10,r21,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r10.u8 & 0x3F));
	// ori r8,r8,5192
	ctx.r8.u64 = ctx.r8.u64 | 5192;
	// ori r7,r7,36262
	ctx.r7.u64 = ctx.r7.u64 | 36262;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwimi r10,r8,13,16,18
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xE000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r11,r10,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r11,r10,1,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// rlwimi r9,r11,2,13,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r11.u32);
	// stw r9,16(r16)
	REX_STORE_U32(r16.u32 + 16, ctx.r9.u32);
loc_8254DCD8:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x8254dcf0
	if (ctx.cr6.eq) goto loc_8254DCF0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825226b0
	ctx.lr = 0x8254DCF0;
	sub_825226B0(ctx, base);
loc_8254DCF0:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// oris r9,r11,256
	ctx.r9.u64 = ctx.r11.u64 | 16777216;
	// rlwinm r11,r9,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// stw r9,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r9.u32);
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// bgt cr6,0x8254dda4
	if (ctx.cr6.gt) goto loc_8254DDA4;
	// beq cr6,0x8254dd94
	if (ctx.cr6.eq) goto loc_8254DD94;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x8254dd34
	if (ctx.cr6.eq) goto loc_8254DD34;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x8254dd34
	if (ctx.cr6.eq) goto loc_8254DD34;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x8254dd94
	if (ctx.cr6.eq) goto loc_8254DD94;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x8254dd84
	if (ctx.cr6.eq) goto loc_8254DD84;
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// bne cr6,0x8254dd54
	if (!ctx.cr6.eq) goto loc_8254DD54;
loc_8254DD34:
	// lwz r11,16(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 16);
	// rlwinm. r10,r9,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,16(r16)
	REX_STORE_U32(r16.u32 + 16, ctx.r11.u32);
	// bne 0x8254dd54
	if (!ctx.cr0.eq) goto loc_8254DD54;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82548f78
	ctx.lr = 0x8254DD54;
	sub_82548F78(ctx, base);
loc_8254DD54:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// blt cr6,0x8254dd6c
	if (ctx.cr6.lt) goto loc_8254DD6C;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// ble cr6,0x8254dd7c
	if (!ctx.cr6.gt) goto loc_8254DD7C;
loc_8254DD6C:
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// blt cr6,0x8254dea4
	if (ctx.cr6.lt) goto loc_8254DEA4;
	// cmplwi cr6,r11,71
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 71, ctx.xer);
	// bgt cr6,0x8254dea4
	if (ctx.cr6.gt) goto loc_8254DEA4;
loc_8254DD7C:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// b 0x8254dea8
	goto loc_8254DEA8;
loc_8254DD84:
	// lwz r11,44(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 44);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,44(r15)
	REX_STORE_U32(r15.u32 + 44, ctx.r11.u32);
	// b 0x8254dd54
	goto loc_8254DD54;
loc_8254DD94:
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,48(r23)
	REX_STORE_U32(r23.u32 + 48, ctx.r11.u32);
	// b 0x8254dd54
	goto loc_8254DD54;
loc_8254DDA4:
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// blt cr6,0x8254dd54
	if (ctx.cr6.lt) goto loc_8254DD54;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// ble cr6,0x8254dd34
	if (!ctx.cr6.gt) goto loc_8254DD34;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x8254de34
	if (ctx.cr6.eq) goto loc_8254DE34;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8254de10
	if (ctx.cr6.eq) goto loc_8254DE10;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x8254dd34
	if (ctx.cr6.eq) goto loc_8254DD34;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x8254dd54
	if (!ctx.cr6.eq) goto loc_8254DD54;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
loc_8254DDD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254de00
	if (ctx.cr6.eq) goto loc_8254DE00;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r10,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8254ddf4
	if (!ctx.cr0.eq) goto loc_8254DDF4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8254ddd8
	goto loc_8254DDD8;
loc_8254DDF4:
	// rlwinm. r11,r10,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// bne 0x8254de04
	if (!ctx.cr0.eq) goto loc_8254DE04;
loc_8254DE00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254DE04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254dd54
	if (!ctx.cr0.eq) goto loc_8254DD54;
	// b 0x8254dd34
	goto loc_8254DD34;
loc_8254DE10:
	// lwz r11,116(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 116);
	// lhz r10,16(r16)
	ctx.r10.u64 = REX_LOAD_U16(r16.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// sth r11,18(r16)
	REX_STORE_U16(r16.u32 + 18, ctx.r11.u16);
	// lwz r11,116(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r15)
	REX_STORE_U32(r15.u32 + 116, ctx.r11.u32);
	// b 0x8254dd54
	goto loc_8254DD54;
loc_8254DE34:
	// rlwinm. r11,r9,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254de6c
	if (!ctx.cr0.eq) goto loc_8254DE6C;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
loc_8254DE40:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254de6c
	if (ctx.cr6.eq) goto loc_8254DE6C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254de60
	if (!ctx.cr0.eq) goto loc_8254DE60;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8254de40
	goto loc_8254DE40;
loc_8254DE60:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82548f78
	ctx.lr = 0x8254DE6C;
	sub_82548F78(ctx, base);
loc_8254DE6C:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254dd54
	if (ctx.cr0.eq) goto loc_8254DD54;
	// lwz r31,0(r16)
	r31.u64 = REX_LOAD_U32(r16.u32 + 0);
loc_8254DE7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8254dd54
	if (ctx.cr6.eq) goto loc_8254DD54;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254de9c
	if (!ctx.cr0.eq) goto loc_8254DE9C;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82548f78
	ctx.lr = 0x8254DE9C;
	sub_82548F78(ctx, base);
loc_8254DE9C:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8254de7c
	goto loc_8254DE7C;
loc_8254DEA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8254DEA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254debc
	if (ctx.cr0.eq) goto loc_8254DEBC;
	// lwz r11,40(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 40);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,40(r15)
	REX_STORE_U32(r15.u32 + 40, ctx.r11.u32);
loc_8254DEBC:
	// lwz r11,40(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 40);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254dff4
	if (ctx.cr0.eq) goto loc_8254DFF4;
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r4,86
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// beq cr6,0x8254df04
	if (ctx.cr6.eq) goto loc_8254DF04;
	// cmplwi cr6,r4,87
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 87, ctx.xer);
	// beq cr6,0x8254df04
	if (ctx.cr6.eq) goto loc_8254DF04;
	// cmplwi cr6,r4,89
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 89, ctx.xer);
	// beq cr6,0x8254df04
	if (ctx.cr6.eq) goto loc_8254DF04;
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// beq cr6,0x8254df04
	if (ctx.cr6.eq) goto loc_8254DF04;
	// cmplwi cr6,r4,84
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// beq cr6,0x8254df04
	if (ctx.cr6.eq) goto loc_8254DF04;
	// cmplwi cr6,r4,85
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 85, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x8254df08
	if (!ctx.cr6.eq) goto loc_8254DF08;
loc_8254DF04:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8254DF08:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254dff4
	if (ctx.cr0.eq) goto loc_8254DFF4;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8254DF20;
	sub_824F71B8(ctx, base);
	// addi r11,r16,-16
	ctx.r11.s64 = r16.s64 + -16;
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254df58
	if (ctx.cr0.eq) goto loc_8254DF58;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x8250b470
	ctx.lr = 0x8254DF48;
	sub_8250B470(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r10,r11,6,23,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1FF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFE00);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8254DF58:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254dff4
	if (!ctx.cr0.eq) goto loc_8254DFF4;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8254dff4
	if (!ctx.cr6.eq) goto loc_8254DFF4;
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254dff4
	if (ctx.cr0.eq) goto loc_8254DFF4;
	// lwz r11,4(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254dff4
	if (!ctx.cr0.eq) goto loc_8254DFF4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8254dff4
	if (ctx.cr0.eq) goto loc_8254DFF4;
loc_8254DF90:
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,48(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r6,r9,27
	ctx.r6.u64 = ctx.r9.u32 & 0x1F;
	// clrlwi r9,r7,13
	ctx.r9.u64 = ctx.r7.u32 & 0x7FFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r7,r21,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r6.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254dfdc
	if (ctx.cr0.eq) goto loc_8254DFDC;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_8254DFDC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254dff4
	if (!ctx.cr0.eq) goto loc_8254DFF4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254df90
	if (!ctx.cr6.eq) goto loc_8254DF90;
loc_8254DFF4:
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254e00c
	if (ctx.cr0.eq) goto loc_8254E00C;
	// li r16,0
	r16.s64 = 0;
	// b 0x8254e018
	goto loc_8254E018;
loc_8254E00C:
	// mr r16,r11
	r16.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254c448
	if (!ctx.cr6.eq) goto loc_8254C448;
loc_8254E018:
	// addi r10,r23,32
	ctx.r10.s64 = r23.s64 + 32;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8254c448
	if (ctx.cr6.eq) goto loc_8254C448;
	// addi r11,r23,24
	ctx.r11.s64 = r23.s64 + 24;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8254e058
	if (ctx.cr6.eq) goto loc_8254E058;
	// lwz r9,28(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8254e058
	if (!ctx.cr0.eq) goto loc_8254E058;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r16,r11,r10
	r16.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8254c444
	goto loc_8254C444;
loc_8254E058:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// b 0x8254c434
	goto loc_8254C434;
loc_8254E064:
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825c1a18
	ctx.lr = 0x8254E080;
	sub_825C1A18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825499c8
	ctx.lr = 0x8254E09C;
	sub_825499C8(ctx, base);
	// addi r11,r23,24
	ctx.r11.s64 = r23.s64 + 24;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// ori r7,r11,1
	ctx.r7.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r16,4
	ctx.r8.s64 = r16.s64 + 4;
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_8254E0D8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254e13c
	if (ctx.cr6.eq) goto loc_8254E13C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254e128
	if (ctx.cr6.eq) goto loc_8254E128;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8254e108
	goto loc_8254E108;
loc_8254E100:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8254E108:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254e100
	if (!ctx.cr6.eq) goto loc_8254E100;
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
loc_8254E128:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254e0d8
	if (!ctx.cr6.eq) goto loc_8254E0D8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8254e0d8
	goto loc_8254E0D8;
loc_8254E13C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8254E144;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825c2288
	ctx.lr = 0x8254E164;
	sub_825C2288(ctx, base);
	// b 0x8254c404
	goto loc_8254C404;
loc_8254E168:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r11.u32);
loc_8254E174:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x825c2510
	ctx.lr = 0x8254E180;
	sub_825C2510(ctx, base);
	// b 0x8254c404
	goto loc_8254C404;
loc_8254E184:
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
loc_8254E188:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254e174
	if (ctx.cr6.eq) goto loc_8254E174;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254e1e8
	if (ctx.cr6.eq) goto loc_8254E1E8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8254e1b8
	goto loc_8254E1B8;
loc_8254E1B0:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8254E1B8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254e1b0
	if (!ctx.cr6.eq) goto loc_8254E1B0;
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
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r7,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwimi r10,r20,7,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 7) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8254E1E8:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8254e188
	if (!ctx.cr6.eq) goto loc_8254E188;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8254e188
	goto loc_8254E188;
loc_8254E1FC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-21380
	ctx.r5.s64 = ctx.r11.s64 + -21380;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x8254E210;
	sub_824E4368(ctx, base);
loc_8254E210:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x8254E21C;
	sub_824E4368(ctx, base);
loc_8254E21C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_826418A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826418B0;
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
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826418D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826419b0
	if (ctx.cr0.lt) goto loc_826419B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82615138
	ctx.lr = 0x826418E4;
	sub_82615138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// beq 0x826419b8
	if (ctx.cr0.eq) goto loc_826419B8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrldi r10,r29,32
	ctx.r10.u64 = r29.u64 & 0xFFFFFFFF;
	// clrldi r9,r28,32
	ctx.r9.u64 = r28.u64 & 0xFFFFFFFF;
	// lhz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 12);
	// mulld r11,r11,r10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// divdu r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 ? ctx.r11.u64 / ctx.r9.u64 : 0;
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r4,r8,r11
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stw r4,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r4.u32);
	// lhz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8264193c
	if (ctx.cr6.lt) goto loc_8264193C;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8264193c
	if (!ctx.cr0.eq) goto loc_8264193C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82641940
	if (!ctx.cr6.eq) goto loc_82641940;
loc_8264193C:
	// li r10,16
	ctx.r10.s64 = 16;
loc_82641940:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x8260b5b8
	ctx.lr = 0x82641958;
	sub_8260B5B8(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826419b8
	if (ctx.cr0.eq) goto loc_826419B8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,52(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// addi r10,r10,-6312
	ctx.r10.s64 = ctx.r10.s64 + -6312;
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r7,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r7.u32 / ctx.r11.u32 : 0);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
loc_8264198C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8264198c
	if (!ctx.cr0.eq) goto loc_8264198C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
loc_826419B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826419B8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x826419b0
	goto loc_826419B0;
}

DEFINE_REX_FUNC(sub_82646B58) {
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
	ctx.lr = 0x82646B60;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82646d70
	if (ctx.cr6.eq) goto loc_82646D70;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82646d70
	if (ctx.cr6.eq) goto loc_82646D70;
	// rlwinm r27,r4,31,1,31
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82646d68
	if (ctx.cr6.eq) goto loc_82646D68;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// clrlwi r23,r7,16
	r23.u64 = ctx.r7.u32 & 0xFFFF;
	// li r25,1
	r25.s64 = 1;
	// li r26,128
	r26.s64 = 128;
	// addi r24,r11,-26936
	r24.s64 = ctx.r11.s64 + -26936;
loc_82646B94:
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// blt cr6,0x82646ba4
	if (ctx.cr6.lt) goto loc_82646BA4;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82646BA4:
	// stb r25,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, r25.u8);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stbu r25,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, r25.u8);
	ctx.r5.u32 = ea;
	// subf r27,r11,r27
	r27.u64 = r27.u64 - ctx.r11.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// sthu r26,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, r26.u16);
	ctx.r5.u32 = ea;
	// sthu r26,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r26.u16);
	ctx.r5.u32 = ea;
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r7,r11,-128
	ctx.r7.s64 = ctx.r11.s64 + -128;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r7,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// beq 0x82646c14
	if (ctx.cr0.eq) goto loc_82646C14;
	// lbz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r4,r5,-128
	ctx.r4.s64 = ctx.r5.s64 + -128;
	// addi r5,r6,-128
	ctx.r5.s64 = ctx.r6.s64 + -128;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r28,r5,8,0,23
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82646c1c
	goto loc_82646C1C;
loc_82646C14:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r28,0
	r28.s64 = 0;
loc_82646C1C:
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sthu r28,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r28.u16);
	ctx.r11.u32 = ea;
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// sthu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// beq cr6,0x82646d60
	if (ctx.cr6.eq) goto loc_82646D60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82646C3C:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r4,r10,-128
	ctx.r4.s64 = ctx.r10.s64 + -128;
	// subf r11,r29,r8
	ctx.r11.u64 = ctx.r8.u64 - r29.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// divw r4,r10,r9
	ctx.r4.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// ble cr6,0x82646c6c
	if (!ctx.cr6.gt) goto loc_82646C6C;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82646c78
	goto loc_82646C78;
loc_82646C6C:
	// cmpwi cr6,r4,-8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -8, ctx.xer);
	// bge cr6,0x82646c78
	if (!ctx.cr6.lt) goto loc_82646C78;
	// li r4,-8
	ctx.r4.s64 = -8;
loc_82646C78:
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,32767
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32767, ctx.xer);
	// ble cr6,0x82646c90
	if (!ctx.cr6.gt) goto loc_82646C90;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82646c9c
	goto loc_82646C9C;
loc_82646C90:
	// cmpwi cr6,r8,-32768
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -32768, ctx.xer);
	// bge cr6,0x82646c9c
	if (!ctx.cr6.lt) goto loc_82646C9C;
	// li r8,-32768
	ctx.r8.s64 = -32768;
loc_82646C9C:
	// rlwinm r11,r4,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3C;
	// lwzx r10,r11,r24
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x82646cb8
	if (!ctx.cr6.lt) goto loc_82646CB8;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82646CB8:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,-128
	ctx.r6.s64 = ctx.r11.s64 + -128;
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// rlwinm r3,r6,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// subf r11,r10,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r10.u64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// divw r11,r11,r30
	ctx.r11.u64 = uint32_t((r30.s32 && !(ctx.r11.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r11.s32 / r30.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82646cf0
	if (!ctx.cr6.gt) goto loc_82646CF0;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82646cfc
	goto loc_82646CFC;
loc_82646CF0:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82646cfc
	if (!ctx.cr6.lt) goto loc_82646CFC;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82646CFC:
	// mullw r8,r11,r30
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82646d14
	if (!ctx.cr6.gt) goto loc_82646D14;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82646d20
	goto loc_82646D20;
loc_82646D14:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82646d20
	if (!ctx.cr6.lt) goto loc_82646D20;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82646D20:
	// rlwinm r7,r11,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// lwzx r11,r7,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	// mullw r7,r11,r30
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82646d40
	if (!ctx.cr6.lt) goto loc_82646D40;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82646D40:
	// rlwinm r7,r4,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r28
	r31.u64 = r28.u64;
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stb r4,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r4.u8);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x82646c3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82646C3C;
loc_82646D60:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82646b94
	if (!ctx.cr6.eq) goto loc_82646B94;
loc_82646D68:
	// subf r3,r22,r5
	ctx.r3.u64 = ctx.r5.u64 - r22.u64;
	// b 0x826a1cf0
	return;
loc_82646D70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82651F78) {
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
	ctx.lr = 0x82651F80;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,228
	ctx.r3.s64 = ctx.r3.s64 + 228;
	// addi r11,r11,-11320
	ctx.r11.s64 = ctx.r11.s64 + -11320;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x8265c9a0
	ctx.lr = 0x82651FB0;
	sub_8265C9A0(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x8265c4f0
	ctx.lr = 0x82651FB8;
	sub_8265C4F0(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8265dce8
	ctx.lr = 0x82651FC0;
	sub_8265DCE8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// bl 0x8265d868
	ctx.lr = 0x82651FD0;
	sub_8265D868(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// bl 0x826a2e60
	ctx.lr = 0x8265200C;
	sub_826A2E60(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x826a2e60
	ctx.lr = 0x8265201C;
	sub_826A2E60(ctx, base);
	// stb r30,168(r31)
	REX_STORE_U8(r31.u32 + 168, r30.u8);
	// stb r30,169(r31)
	REX_STORE_U8(r31.u32 + 169, r30.u8);
	// addi r11,r31,248
	ctx.r11.s64 = r31.s64 + 248;
	// stb r30,170(r31)
	REX_STORE_U8(r31.u32 + 170, r30.u8);
	// li r10,254
	ctx.r10.s64 = 254;
	// stb r30,171(r31)
	REX_STORE_U8(r31.u32 + 171, r30.u8);
	// li r5,84
	ctx.r5.s64 = 84;
	// stb r30,172(r31)
	REX_STORE_U8(r31.u32 + 172, r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,173(r31)
	REX_STORE_U8(r31.u32 + 173, r30.u8);
	// addi r3,r31,436
	ctx.r3.s64 = r31.s64 + 436;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r30,196(r31)
	REX_STORE_U32(r31.u32 + 196, r30.u32);
	// std r30,200(r31)
	REX_STORE_U64(r31.u32 + 200, r30.u64);
	// std r30,208(r31)
	REX_STORE_U64(r31.u32 + 208, r30.u64);
	// std r30,216(r31)
	REX_STORE_U64(r31.u32 + 216, r30.u64);
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r11,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// addi r11,r31,412
	ctx.r11.s64 = r31.s64 + 412;
	// stw r30,380(r31)
	REX_STORE_U32(r31.u32 + 380, r30.u32);
	// stw r30,384(r31)
	REX_STORE_U32(r31.u32 + 384, r30.u32);
	// stw r30,388(r31)
	REX_STORE_U32(r31.u32 + 388, r30.u32);
	// stw r30,392(r31)
	REX_STORE_U32(r31.u32 + 392, r30.u32);
	// stw r30,396(r31)
	REX_STORE_U32(r31.u32 + 396, r30.u32);
	// stw r30,400(r31)
	REX_STORE_U32(r31.u32 + 400, r30.u32);
	// stw r30,404(r31)
	REX_STORE_U32(r31.u32 + 404, r30.u32);
	// stw r30,408(r31)
	REX_STORE_U32(r31.u32 + 408, r30.u32);
	// stw r11,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// stw r30,420(r31)
	REX_STORE_U32(r31.u32 + 420, r30.u32);
	// stw r10,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r10.u32);
	// bl 0x826a2e60
	ctx.lr = 0x826520B0;
	sub_826A2E60(ctx, base);
	// addi r10,r31,528
	ctx.r10.s64 = r31.s64 + 528;
	// stw r30,520(r31)
	REX_STORE_U32(r31.u32 + 520, r30.u32);
	// li r9,3500
	ctx.r9.s64 = 3500;
	// stw r30,524(r31)
	REX_STORE_U32(r31.u32 + 524, r30.u32);
	// stw r10,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r10.u32);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// stw r9,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r9.u32);
	// stw r9,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r9.u32);
	// lis r9,14336
	ctx.r9.s64 = 939524096;
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
	// stw r11,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r11.u32);
	// stw r10,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r10.u32);
	// std r30,568(r31)
	REX_STORE_U64(r31.u32 + 568, r30.u64);
	// std r30,576(r31)
	REX_STORE_U64(r31.u32 + 576, r30.u64);
	// std r30,584(r31)
	REX_STORE_U64(r31.u32 + 584, r30.u64);
	// std r30,592(r31)
	REX_STORE_U64(r31.u32 + 592, r30.u64);
	// std r30,600(r31)
	REX_STORE_U64(r31.u32 + 600, r30.u64);
	// std r30,608(r31)
	REX_STORE_U64(r31.u32 + 608, r30.u64);
	// std r30,616(r31)
	REX_STORE_U64(r31.u32 + 616, r30.u64);
	// std r30,624(r31)
	REX_STORE_U64(r31.u32 + 624, r30.u64);
	// std r30,632(r31)
	REX_STORE_U64(r31.u32 + 632, r30.u64);
	// std r30,640(r31)
	REX_STORE_U64(r31.u32 + 640, r30.u64);
	// std r30,648(r31)
	REX_STORE_U64(r31.u32 + 648, r30.u64);
	// std r30,656(r31)
	REX_STORE_U64(r31.u32 + 656, r30.u64);
	// std r30,664(r31)
	REX_STORE_U64(r31.u32 + 664, r30.u64);
	// std r30,672(r31)
	REX_STORE_U64(r31.u32 + 672, r30.u64);
	// std r30,680(r31)
	REX_STORE_U64(r31.u32 + 680, r30.u64);
	// std r30,688(r31)
	REX_STORE_U64(r31.u32 + 688, r30.u64);
	// std r30,696(r31)
	REX_STORE_U64(r31.u32 + 696, r30.u64);
	// std r30,704(r31)
	REX_STORE_U64(r31.u32 + 704, r30.u64);
	// stw r30,712(r31)
	REX_STORE_U32(r31.u32 + 712, r30.u32);
	// stw r30,716(r31)
	REX_STORE_U32(r31.u32 + 716, r30.u32);
	// stw r30,720(r31)
	REX_STORE_U32(r31.u32 + 720, r30.u32);
	// stw r30,724(r31)
	REX_STORE_U32(r31.u32 + 724, r30.u32);
	// stw r30,728(r31)
	REX_STORE_U32(r31.u32 + 728, r30.u32);
	// stw r30,732(r31)
	REX_STORE_U32(r31.u32 + 732, r30.u32);
	// stw r30,736(r31)
	REX_STORE_U32(r31.u32 + 736, r30.u32);
	// stw r9,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8265E110) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8264e300
	ctx.lr = 0x8265E140;
	sub_8264E300(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x8265e170
	if (ctx.cr6.eq) goto loc_8265E170;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265e164
	if (ctx.cr6.eq) goto loc_8265E164;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265e188
	if (!ctx.cr6.gt) goto loc_8265E188;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8265e188
	goto loc_8265E188;
loc_8265E164:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8265e188
	goto loc_8265E188;
loc_8265E170:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,87
	ctx.r10.u64 = ctx.r10.u64 | 87;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8265E188:
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

DEFINE_REX_FUNC(sub_82660870) {
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
	ctx.lr = 0x82660878;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,76
	ctx.r11.s64 = 76;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r28,r3,48
	r28.s64 = ctx.r3.s64 + 48;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826608B0;
	sub_826A1E70(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826608C0;
	sub_826A1E70(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826608D0;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826608f4
	if (ctx.cr6.eq) goto loc_826608F4;
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826608EC;
	sub_826A1E70(ctx, base);
	// stw r29,116(r31)
	REX_STORE_U32(r31.u32 + 116, r29.u32);
	// b 0x826608fc
	goto loc_826608FC;
loc_826608F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_826608FC:
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826639B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826639B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,132
	r31.s64 = ctx.r3.s64 + 132;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x827938a4
	ctx.lr = 0x826639D0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x827938b4
	ctx.lr = 0x826639E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82665760) {
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
	ctx.lr = 0x82665768;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bge cr6,0x8266578c
	if (!ctx.cr6.lt) goto loc_8266578C;
loc_82665780:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4106
	r31.u64 = r31.u64 | 4106;
	// b 0x8266589c
	goto loc_8266589C;
loc_8266578C:
	// lwz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 292);
	// addi r7,r6,-6
	ctx.r7.s64 = ctx.r6.s64 + -6;
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266585c
	if (!ctx.cr0.eq) goto loc_8266585C;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266585c
	if (!ctx.cr0.eq) goto loc_8266585C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82665780
	if (!ctx.cr6.eq) goto loc_82665780;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r4,60(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lbz r5,1(r28)
	ctx.r5.u64 = REX_LOAD_U8(r28.u32 + 1);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r6,r28,6
	ctx.r6.s64 = r28.s64 + 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826657F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8266589c
	if (!ctx.cr0.eq) goto loc_8266589C;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82665828
	if (ctx.cr6.eq) goto loc_82665828;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82663958
	ctx.lr = 0x82665814;
	sub_82663958(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x82665828
	if (!ctx.cr0.eq) goto loc_82665828;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8266589c
	goto loc_8266589C;
loc_82665828:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,60(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 60);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lbz r7,1(r28)
	ctx.r7.u64 = REX_LOAD_U8(r28.u32 + 1);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,2(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 2);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82673220
	ctx.lr = 0x82665854;
	sub_82673220(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82665864
	goto loc_82665864;
loc_8266585C:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4119
	r31.u64 = r31.u64 | 4119;
loc_82665864:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8266589c
	if (ctx.cr6.eq) goto loc_8266589C;
loc_8266586C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r27
	ea = r27.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r27
	ea = r27.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266586c
	if (!ctx.cr0.eq) goto loc_8266586C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266589c
	if (!ctx.cr6.eq) goto loc_8266589C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x8266589C;
	sub_8265D850(ctx, base);
loc_8266589C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82670348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r8,r11,-6116
	ctx.r8.s64 = ctx.r11.s64 + -6116;
loc_82670350:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82670350
	if (!ctx.cr0.eq) goto loc_82670350;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826718C0) {
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
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// bl 0x826720e8
	ctx.lr = 0x826718D4;
	sub_826720E8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
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

DEFINE_REX_FUNC(sub_826722D0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82661310
	sub_82661310(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826726E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,4626
	ctx.r11.s64 = 303169536;
	// ori r11,r11,4626
	ctx.r11.u64 = ctx.r11.u64 | 4626;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82672744
	if (ctx.cr6.eq) goto loc_82672744;
	// lis r11,13364
	ctx.r11.s64 = 875823104;
	// ori r11,r11,13364
	ctx.r11.u64 = ctx.r11.u64 | 13364;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82672744
	if (ctx.cr6.eq) goto loc_82672744;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82672724
	if (ctx.cr6.eq) goto loc_82672724;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82672714:
	// lwz r11,5(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 5);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r11,9
	ctx.r6.s64 = ctx.r11.s64 + 9;
	// bdnz 0x82672714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82672714;
loc_82672724:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82672744
	if (ctx.cr6.eq) goto loc_82672744;
loc_8267272C:
	// lwz r11,5(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 5);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82672750
	if (ctx.cr6.eq) goto loc_82672750;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,13
	ctx.r6.s64 = ctx.r6.s64 + 13;
	// bne 0x8267272c
	if (!ctx.cr0.eq) goto loc_8267272C;
loc_82672744:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
	// blr 
	return;
loc_82672750:
	// stw r8,9(r6)
	REX_STORE_U32(ctx.r6.u32 + 9, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826753A0) {
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
	ctx.lr = 0x826753A8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r22,r3,28
	r22.s64 = ctx.r3.s64 + 28;
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// li r19,1
	r19.s64 = 1;
	// rlwinm r9,r11,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r17,r11,6,31,31
	r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// stw r9,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// beq cr6,0x826756f8
	if (ctx.cr6.eq) goto loc_826756F8;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826756f8
	if (ctx.cr0.eq) goto loc_826756F8;
	// lis r11,4626
	ctx.r11.s64 = 303169536;
	// lis r10,13364
	ctx.r10.s64 = 875823104;
	// ori r21,r11,4626
	r21.u64 = ctx.r11.u64 | 4626;
	// ori r23,r10,13364
	r23.u64 = ctx.r10.u64 | 13364;
loc_82675408:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r31,r20,-4
	r31.s64 = r20.s64 + -4;
	// lwz r10,20(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 20);
	// subf r9,r11,r22
	ctx.r9.u64 = r22.u64 - ctx.r11.u64;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r20,r10,r11
	r20.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// beq cr6,0x82675484
	if (ctx.cr6.eq) goto loc_82675484;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826756f0
	if (!ctx.cr6.eq) goto loc_826756F0;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826756f0
	if (ctx.cr0.eq) goto loc_826756F0;
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267546C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x826756f0
	if (ctx.cr0.eq) goto loc_826756F0;
loc_82675474:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82672c40
	ctx.lr = 0x82675480;
	sub_82672C40(ctx, base);
	// b 0x82675778
	goto loc_82675778;
loc_82675484:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82675494
	if (!ctx.cr6.eq) goto loc_82675494;
	// stw r19,0(r18)
	REX_STORE_U32(r18.u32 + 0, r19.u32);
	// b 0x826756f0
	goto loc_826756F0;
loc_82675494:
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
	// bne 0x82675494
	if (!ctx.cr0.eq) goto loc_82675494;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r27,r31,116
	r27.s64 = r31.s64 + 116;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r28,r19
	r28.u64 = r19.u64;
	// lwz r25,40(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r25,29
	ctx.r10.s64 = r25.s64 + 29;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r24,r9,27,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r26,r11,r31
	r26.u64 = ctx.r11.u64 + r31.u64;
	// bne 0x82675538
	if (!ctx.cr0.eq) goto loc_82675538;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r28,2
	r28.s64 = 2;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// bne cr6,0x82675538
	if (!ctx.cr6.eq) goto loc_82675538;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82675754
	if (!ctx.cr6.eq) goto loc_82675754;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bne 0x82675514
	if (!ctx.cr0.eq) goto loc_82675514;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_82675514:
	// stw r23,0(r27)
	REX_STORE_U32(r27.u32 + 0, r23.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82675474
	if (!ctx.cr0.eq) goto loc_82675474;
loc_82675538:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// bge cr6,0x826755f0
	if (!ctx.cr6.lt) goto loc_826755F0;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r28,r25
	ctx.r7.u64 = r25.u64 - r28.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82675558:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r21.s32, ctx.xer);
	// bne cr6,0x82675568
	if (!ctx.cr6.eq) goto loc_82675568;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82675568:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82675558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82675558;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826755f0
	if (ctx.cr6.eq) goto loc_826755F0;
	// stw r8,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r8.u32);
loc_8267557C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8267557c
	if (!ctx.cr0.eq) goto loc_8267557C;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// addi r27,r11,-4
	r27.s64 = ctx.r11.s64 + -4;
loc_826755A4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// bne cr6,0x826755d8
	if (!ctx.cr6.eq) goto loc_826755D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826755D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82675474
	if (!ctx.cr0.eq) goto loc_82675474;
loc_826755D8:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// blt cr6,0x826755a4
	if (ctx.cr6.lt) goto loc_826755A4;
	// b 0x826756b8
	goto loc_826756B8;
loc_826755F0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bne cr6,0x82675674
	if (!ctx.cr6.eq) goto loc_82675674;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8267561c
	if (ctx.cr6.eq) goto loc_8267561C;
	// stw r23,108(r31)
	REX_STORE_U32(r31.u32 + 108, r23.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82672e90
	ctx.lr = 0x82675618;
	sub_82672E90(ctx, base);
	// b 0x826756b0
	goto loc_826756B0;
loc_8267561C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// bne cr6,0x826756b8
	if (!ctx.cr6.eq) goto loc_826756B8;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r23,108(r31)
	REX_STORE_U32(r31.u32 + 108, r23.u32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_82675638:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82675638
	if (!ctx.cr0.eq) goto loc_82675638;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826756b0
	goto loc_826756B0;
loc_82675674:
	// stw r23,108(r31)
	REX_STORE_U32(r31.u32 + 108, r23.u32);
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r6,r23
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r23.s32, ctx.xer);
	// beq cr6,0x826756b8
	if (ctx.cr6.eq) goto loc_826756B8;
	// stw r23,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, r23.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x826756a4
	if (ctx.cr6.eq) goto loc_826756A4;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x826748e8
	ctx.lr = 0x826756A0;
	sub_826748E8(ctx, base);
	// b 0x826756b0
	goto loc_826756B0;
loc_826756A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x82674610
	ctx.lr = 0x826756B0;
	sub_82674610(ctx, base);
loc_826756B0:
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82675474
	if (!ctx.cr0.eq) goto loc_82675474;
loc_826756B8:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826756e4
	if (ctx.cr0.eq) goto loc_826756E4;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r17,r19
	r17.u64 = r19.u64;
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// subf r10,r11,r22
	ctx.r10.u64 = r22.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r20,r10,r11
	r20.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_826756E4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82672c40
	ctx.lr = 0x826756F0;
	sub_82672C40(ctx, base);
loc_826756F0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x82675408
	if (!ctx.cr6.eq) goto loc_82675408;
loc_826756F8:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r31,r30,52
	r31.s64 = r30.s64 + 52;
loc_82675700:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x82675774
	if (ctx.cr6.eq) goto loc_82675774;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r11.u32);
	// bl 0x82672ce8
	ctx.lr = 0x82675748;
	sub_82672CE8(ctx, base);
	// stw r19,0(r18)
	REX_STORE_U32(r18.u32 + 0, r19.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82675700
	goto loc_82675700;
loc_82675754:
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
	// bne 0x82675754
	if (!ctx.cr0.eq) goto loc_82675754;
	// b 0x826756f8
	goto loc_826756F8;
loc_82675774:
	// li r29,0
	r29.s64 = 0;
loc_82675778:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82675794
	if (ctx.cr6.eq) goto loc_82675794;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
loc_82675794:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_8268E910) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268F530) {
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
	ctx.lr = 0x8268F538;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,312(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r8,72(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 72);
	// lhz r7,68(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 68);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,3728(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x8268f588
	if (!ctx.cr6.lt) goto loc_8268F588;
	// fdiv f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 / ctx.f0.f64;
	// b 0x8268f58c
	goto loc_8268F58C;
loc_8268F588:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_8268F58C:
	// lfd f11,288(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(r31.u32 + 288);
	// fmul f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8268f5a0
	if (ctx.cr6.lt) goto loc_8268F5A0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8268F5A0:
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// addi r11,r10,10
	ctx.r11.s64 = ctx.r10.s64 + 10;
	// fmul f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 * ctx.f12.f64;
	// stfd f0,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.f0.u64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r26,0
	r26.s64 = 0;
	// lfdx f0,r11,r31
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// fmadd f0,f13,f0,f12
	ctx.f0.f64 = std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64);
	// stfdx f0,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.f0.u64);
	// lfd f0,280(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 280);
	// stw r26,304(r31)
	REX_STORE_U32(r31.u32 + 304, r26.u32);
	// stw r26,312(r31)
	REX_STORE_U32(r31.u32 + 312, r26.u32);
	// lfdx f13,r11,r31
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8268f700
	if (!ctx.cr6.lt) goto loc_8268F700;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268f75c
	if (ctx.cr6.eq) goto loc_8268F75C;
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,r11,r31
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8268f75c
	if (!ctx.cr6.lt) goto loc_8268F75C;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r28,360(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 360);
	// addi r30,r31,360
	r30.s64 = r31.s64 + 360;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// divdu r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// sth r10,68(r31)
	REX_STORE_U16(r31.u32 + 68, ctx.r10.u16);
	// beq cr6,0x8268f75c
	if (ctx.cr6.eq) goto loc_8268F75C;
	// lwz r27,0(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// ld r29,24(r27)
	r29.u64 = REX_LOAD_U64(r27.u32 + 24);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// bl 0x8268ee00
	ctx.lr = 0x8268F64C;
	sub_8268EE00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268f75c
	if (ctx.cr0.eq) goto loc_8268F75C;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r29.u64, ctx.xer);
	// ble cr6,0x8268f75c
	if (!ctx.cr6.gt) goto loc_8268F75C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r29,20
	ctx.r10.s64 = r29.s64 + 20;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268f6f0
	if (ctx.cr6.eq) goto loc_8268F6F0;
loc_8268F674:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x8268f698
	if (ctx.cr6.gt) goto loc_8268F698;
	// bne cr6,0x8268f68c
	if (!ctx.cr6.eq) goto loc_8268F68C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8268F68C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268f674
	if (!ctx.cr6.eq) goto loc_8268F674;
loc_8268F698:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8268f6f0
	if (ctx.cr6.eq) goto loc_8268F6F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268f6c8
	if (ctx.cr6.eq) goto loc_8268F6C8;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8268f6bc
	if (!ctx.cr6.eq) goto loc_8268F6BC;
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
loc_8268F6BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
loc_8268F6C8:
	// stw r26,4(r28)
	REX_STORE_U32(r28.u32 + 4, r26.u32);
	// addi r11,r31,352
	ctx.r11.s64 = r31.s64 + 352;
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 356);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268f6e4
	if (ctx.cr6.eq) goto loc_8268F6E4;
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r28.u32);
	// b 0x8268f6e8
	goto loc_8268F6E8;
loc_8268F6E4:
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_8268F6E8:
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x8268f75c
	goto loc_8268F75C;
loc_8268F6F0:
	// ld r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 24);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r11,24(r27)
	REX_STORE_U64(r27.u32 + 24, ctx.r11.u64);
	// b 0x8268f75c
	goto loc_8268F75C;
loc_8268F700:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bge cr6,0x8268f75c
	if (!ctx.cr6.lt) goto loc_8268F75C;
	// addi r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 + 11;
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,r11,r31
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8268f75c
	if (!ctx.cr6.lt) goto loc_8268F75C;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8268f75c
	if (ctx.cr6.eq) goto loc_8268F75C;
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// divdu r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 ? ctx.r11.u64 / ctx.r9.u64 : 0;
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// sth r10,68(r31)
	REX_STORE_U16(r31.u32 + 68, ctx.r10.u16);
loc_8268F75C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8269DFB8) {
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
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r3,31544(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31544);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8269dfe4
	if (!ctx.cr6.eq) goto loc_8269DFE4;
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x8269dff0
	goto loc_8269DFF0;
loc_8269DFE4:
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x8269dff4
	if (!ctx.cr6.lt) goto loc_8269DFF4;
	// li r3,20
	ctx.r3.s64 = 20;
loc_8269DFF0:
	// stw r3,31544(r31)
	REX_STORE_U32(r31.u32 + 31544, ctx.r3.u32);
loc_8269DFF4:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x826a2b40
	ctx.lr = 0x8269DFFC;
	sub_826A2B40(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,31540(r30)
	REX_STORE_U32(r30.u32 + 31540, ctx.r3.u32);
	// bne 0x8269e034
	if (!ctx.cr0.eq) goto loc_8269E034;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,31544(r31)
	REX_STORE_U32(r31.u32 + 31544, ctx.r11.u32);
	// bl 0x826a2b40
	ctx.lr = 0x8269E020;
	sub_826A2B40(ctx, base);
	// stw r3,31540(r30)
	REX_STORE_U32(r30.u32 + 31540, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8269e034
	if (!ctx.cr0.eq) goto loc_8269E034;
	// li r3,26
	ctx.r3.s64 = 26;
	// b 0x8269e0c4
	goto loc_8269E0C4;
loc_8269E034:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r8,r11,25048
	ctx.r8.s64 = ctx.r11.s64 + 25048;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8269e054
	goto loc_8269E054;
loc_8269E050:
	// lwz r3,31540(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 31540);
loc_8269E054:
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8269e050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269E050;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r8,16
	ctx.r9.s64 = ctx.r8.s64 + 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r8,r10,31264
	ctx.r8.s64 = ctx.r10.s64 + 31264;
loc_8269E07C:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r7,r7,72
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8269e0ac
	if (ctx.cr6.eq) goto loc_8269E0AC;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x8269e0ac
	if (ctx.cr6.eq) goto loc_8269E0AC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8269e0b4
	if (!ctx.cr6.eq) goto loc_8269E0B4;
loc_8269E0AC:
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8269E0B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x8269e07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269E07C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269E0C4:
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

DEFINE_REX_FUNC(__restfpr_24) {
	REX_FUNC_PROLOGUE();
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_826A3970) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_72) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B07A0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826b07d0
	if (!ctx.cr6.eq) goto loc_826B07D0;
	// bl 0x826a33d0
	ctx.lr = 0x826B07BC;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826B07C8;
	sub_8269CB20(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x826b08d8
	goto loc_826B08D8;
loc_826B07D0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826b07f0
	if (!ctx.cr6.eq) goto loc_826B07F0;
loc_826B07D8:
	// bl 0x826a33d0
	ctx.lr = 0x826B07DC;
	sub_826A33D0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_826B07E0:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826B07E8;
	sub_8269CB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826b08d8
	goto loc_826B08D8;
loc_826B07F0:
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r31,0
	r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826b081c
	if (ctx.cr6.gt) goto loc_826B081C;
loc_826B0810:
	// bl 0x826a33d0
	ctx.lr = 0x826B0814;
	sub_826A33D0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x826b07e0
	goto loc_826B07E0;
loc_826B081C:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x826b07d8
	if (ctx.cr6.lt) goto loc_826B07D8;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bgt cr6,0x826b07d8
	if (ctx.cr6.gt) goto loc_826B07D8;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826b0850
	if (ctx.cr6.eq) goto loc_826B0850;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
loc_826B0850:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_826B0854:
	// divwu r10,r3,r6
	ctx.r10.u64 = uint32_t(ctx.r6.u32 ? ctx.r3.u32 / ctx.r6.u32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// divwu r3,r3,r6
	ctx.r3.u64 = uint32_t(ctx.r6.u32 ? ctx.r3.u32 / ctx.r6.u32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x826b087c
	if (!ctx.cr6.gt) goto loc_826B087C;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x826b0880
	goto loc_826B0880;
loc_826B087C:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_826B0880:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b089c
	if (ctx.cr6.eq) goto loc_826B089C;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x826b0854
	if (ctx.cr6.lt) goto loc_826B0854;
loc_826B089C:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x826b08ac
	if (ctx.cr6.lt) goto loc_826B08AC;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r31.u8);
	// b 0x826b0810
	goto loc_826B0810;
loc_826B08AC:
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r31.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826B08B4:
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r9,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826b08b4
	if (ctx.cr6.lt) goto loc_826B08B4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B08D8:
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

DEFINE_REX_FUNC(sub_826BA900) {
	REX_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BA9E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826baa18
	if (ctx.cr6.eq) goto loc_826BAA18;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x823f0350
	ctx.lr = 0x826BAA18;
	sub_823F0350(ctx, base);
loc_826BAA18:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826BDCA8) {
	REX_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,72(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r11,r11,96
	ctx.r11.u64 = ctx.r11.u64 | 96;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x826bdd34
	if (ctx.cr6.gt) goto loc_826BDD34;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x826bdd20
	if (ctx.cr6.gt) goto loc_826BDD20;
	// beq cr6,0x826bdd18
	if (ctx.cr6.eq) goto loc_826BDD18;
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x826bdd0c
	if (ctx.cr6.eq) goto loc_826BDD0C;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x826bdda4
	if (!ctx.cr6.eq) goto loc_826BDDA4;
	// stw r5,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r5.u32);
	// blr 
	return;
loc_826BDD0C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_826BDD18:
	// sth r5,54(r9)
	REX_STORE_U16(ctx.r9.u32 + 54, ctx.r5.u16);
	// blr 
	return;
loc_826BDD20:
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// addic. r11,r11,-64
	ctx.xer.ca = ctx.r11.u32 > 63;
	ctx.r11.s64 = ctx.r11.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826bdd9c
	if (!ctx.cr0.eq) goto loc_826BDD9C;
	// sth r5,52(r9)
	REX_STORE_U16(ctx.r9.u32 + 52, ctx.r5.u16);
	// blr 
	return;
loc_826BDD34:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r11,r11,144
	ctx.r11.u64 = ctx.r11.u64 | 144;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x826bdd90
	if (ctx.cr6.gt) goto loc_826BDD90;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// addic. r11,r11,-112
	ctx.xer.ca = ctx.r11.u32 > 111;
	ctx.r11.s64 = ctx.r11.s64 + -112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826bdd7c
	if (ctx.cr0.eq) goto loc_826BDD7C;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x826bdda4
	if (!ctx.cr6.eq) goto loc_826BDDA4;
	// lwz r11,552(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 552);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826bdd74
	if (ctx.cr6.eq) goto loc_826BDD74;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
	// blr 
	return;
loc_826BDD74:
	// stw r5,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r5.u32);
	// blr 
	return;
loc_826BDD7C:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// blr 
	return;
loc_826BDD90:
	// addis r11,r4,-9
	ctx.r11.s64 = ctx.r4.s64 + -589824;
	// addic. r11,r11,-160
	ctx.xer.ca = ctx.r11.u32 > 159;
	ctx.r11.s64 = ctx.r11.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_826BDD9C:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_826BDDA4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C61E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826C61E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c6210
	if (ctx.cr6.eq) goto loc_826C6210;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// bl 0x823f0350
	ctx.lr = 0x826C6210;
	sub_823F0350(ctx, base);
loc_826C6210:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c6220
	if (ctx.cr6.eq) goto loc_826C6220;
	// bl 0x823ed360
	ctx.lr = 0x826C6220;
	sub_823ED360(ctx, base);
loc_826C6220:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C6234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x826c6274
	if (!ctx.cr6.eq) goto loc_826C6274;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,32770
	ctx.r4.u64 = ctx.r4.u64 | 32770;
	// bl 0x823f02b8
	ctx.lr = 0x826C6250;
	sub_823F02B8(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c6264
	if (ctx.cr6.eq) goto loc_826C6264;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// b 0x826c6278
	goto loc_826C6278;
loc_826C6264:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826C6274:
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
loc_826C6278:
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ed568
	ctx.lr = 0x826C6290;
	sub_823ED568(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826c62c8
	if (!ctx.cr6.eq) goto loc_826C62C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C62B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6050
	ctx.lr = 0x826C62BC;
	sub_826C6050(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826C62C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826CF518) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c88
	ctx.lr = 0x826CF520;
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f29.u64);
	// stfd f30,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	r25.s64 = 0;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r17,r25
	r17.u64 = r25.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x826cfe4c
	if (ctx.cr6.eq) goto loc_826CFE4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32764
	ctx.r9.s64 = -2147221504;
	// li r22,1
	r22.s64 = 1;
	// li r23,4
	r23.s64 = 4;
	// lfs f31,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// li r18,2
	r18.s64 = 2;
	// lfs f29,3804(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3804);
	f29.f64 = double(temp.f32);
	// li r24,6
	r24.s64 = 6;
	// ori r20,r9,4
	r20.u64 = ctx.r9.u64 | 4;
	// li r16,5
	r16.s64 = 5;
	// li r19,8
	r19.s64 = 8;
	// li r21,-1
	r21.s64 = -1;
loc_826CF588:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x826cfe1c
	if (ctx.cr6.gt) goto loc_826CFE1C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826cf71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826CF71C;
	// bdzf 4*cr6+eq,0x826cf8fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826CF8FC;
	// bdzf 4*cr6+eq,0x826cfe1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826CFE1C;
	// bdzf 4*cr6+eq,0x826cfe04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826CFE04;
	// bne cr6,0x826cfa68
	if (!ctx.cr6.eq) goto loc_826CFA68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e8498
	ctx.lr = 0x826CF5B8;
	sub_826E8498(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cfe28
	if (ctx.cr6.lt) goto loc_826CFE28;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826cf68c
	if (!ctx.cr6.eq) goto loc_826CF68C;
	// lwz r3,296(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 296);
	// bl 0x826e6e60
	ctx.lr = 0x826CF5D8;
	sub_826E6E60(ctx, base);
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826cf63c
	if (!ctx.cr6.gt) goto loc_826CF63C;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_826CF5F4:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,472(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 472);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// bl 0x826a2e60
	ctx.lr = 0x826CF620;
	sub_826A2E60(ctx, base);
	// lhz r3,580(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// extsh r28,r5
	r28.s64 = ctx.r5.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826cf5f4
	if (ctx.cr6.lt) goto loc_826CF5F4;
loc_826CF63C:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r22,36(r29)
	REX_STORE_U32(r29.u32 + 36, r22.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,202(r10)
	REX_STORE_U16(ctx.r10.u32 + 202, ctx.r11.u16);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// sth r25,150(r29)
	REX_STORE_U16(r29.u32 + 150, r25.u16);
	// lwz r7,60(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x826cf66c
	if (ctx.cr6.gt) goto loc_826CF66C;
	// stw r25,56(r29)
	REX_STORE_U32(r29.u32 + 56, r25.u32);
	// b 0x826cfe1c
	goto loc_826CFE1C;
loc_826CF66C:
	// lwz r11,512(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 512);
	// stw r23,56(r29)
	REX_STORE_U32(r29.u32 + 56, r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cfe1c
	if (ctx.cr6.eq) goto loc_826CFE1C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CF688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826cfe1c
	goto loc_826CFE1C;
loc_826CF68C:
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// sth r10,730(r31)
	REX_STORE_U16(r31.u32 + 730, ctx.r10.u16);
	// bne cr6,0x826cf6c0
	if (!ctx.cr6.eq) goto loc_826CF6C0;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826cf6c0
	if (ctx.cr6.eq) goto loc_826CF6C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 320);
	// bl 0x826e4760
	ctx.lr = 0x826CF6B4;
	sub_826E4760(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cfe28
	if (ctx.cr6.lt) goto loc_826CFE28;
loc_826CF6C0:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826cf6f0
	if (!ctx.cr6.eq) goto loc_826CF6F0;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826cf6f0
	if (!ctx.cr6.eq) goto loc_826CF6F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 320);
	// bl 0x826e4760
	ctx.lr = 0x826CF6E4;
	sub_826E4760(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cfe28
	if (ctx.cr6.lt) goto loc_826CFE28;
loc_826CF6F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r18,36(r29)
	REX_STORE_U32(r29.u32 + 36, r18.u32);
	// sth r25,150(r29)
	REX_STORE_U16(r29.u32 + 150, r25.u16);
	// stb r25,145(r29)
	REX_STORE_U8(r29.u32 + 145, r25.u8);
	// stw r24,72(r29)
	REX_STORE_U32(r29.u32 + 72, r24.u32);
	// sth r25,148(r29)
	REX_STORE_U16(r29.u32 + 148, r25.u16);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// stw r25,76(r29)
	REX_STORE_U32(r29.u32 + 76, r25.u32);
	// stw r25,200(r29)
	REX_STORE_U32(r29.u32 + 200, r25.u32);
	// stw r25,208(r29)
	REX_STORE_U32(r29.u32 + 208, r25.u32);
	// b 0x826cfe1c
	goto loc_826CFE1C;
loc_826CF71C:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,150(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826cf8a0
	if (!ctx.cr6.lt) goto loc_826CF8A0;
loc_826CF734:
	// lhz r10,150(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 150);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mulli r9,r6,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x826cf77c
	if (!ctx.cr6.gt) goto loc_826CF77C;
loc_826CF76C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826cf76c
	if (ctx.cr6.gt) goto loc_826CF76C;
loc_826CF77C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,312(r29)
	REX_STORE_U16(r29.u32 + 312, ctx.r11.u16);
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826cf804
	if (ctx.cr6.eq) goto loc_826CF804;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826cf7f0
	if (ctx.cr6.lt) goto loc_826CF7F0;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826cf7bc
	if (!ctx.cr6.eq) goto loc_826CF7BC;
	// bl 0x826cf188
	ctx.lr = 0x826CF7B8;
	sub_826CF188(ctx, base);
	// b 0x826cf7c0
	goto loc_826CF7C0;
loc_826CF7BC:
	// bl 0x826cf338
	ctx.lr = 0x826CF7C0;
	sub_826CF338(ctx, base);
loc_826CF7C0:
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r20.u32, ctx.xer);
	// bne cr6,0x826cf7fc
	if (!ctx.cr6.eq) goto loc_826CF7FC;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x82638888
	ctx.lr = 0x826CF7D4;
	sub_82638888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826cfe28
	if (ctx.cr6.eq) goto loc_826CFE28;
	// lwz r11,704(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cfe28
	if (ctx.cr6.eq) goto loc_826CFE28;
	// mr r17,r22
	r17.u64 = r22.u64;
	// b 0x826cf804
	goto loc_826CF804;
loc_826CF7F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ceca0
	ctx.lr = 0x826CF7F8;
	sub_826CECA0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_826CF7FC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x826cfe28
	if (ctx.cr6.lt) goto loc_826CFE28;
loc_826CF804:
	// lhz r11,490(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 490);
	// lhz r10,730(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 730);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826cf818
	if (!ctx.cr6.gt) goto loc_826CF818;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826CF818:
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// sth r11,730(r31)
	REX_STORE_U16(r31.u32 + 730, ctx.r11.u16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826cf83c
	if (!ctx.cr6.eq) goto loc_826CF83C;
	// lwz r10,264(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 264);
	// addi r11,r29,224
	ctx.r11.s64 = r29.s64 + 224;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,264(r29)
	REX_STORE_U32(r29.u32 + 264, ctx.r8.u32);
loc_826CF83C:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x826cf860
	if (ctx.cr6.gt) goto loc_826CF860;
	// stw r25,56(r29)
	REX_STORE_U32(r29.u32 + 56, r25.u32);
	// b 0x826cf87c
	goto loc_826CF87C;
loc_826CF860:
	// lwz r11,512(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 512);
	// stw r23,56(r29)
	REX_STORE_U32(r29.u32 + 56, r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826cf87c
	if (ctx.cr6.eq) goto loc_826CF87C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826CF87C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826CF87C:
	// lhz r11,150(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 150);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,150(r29)
	REX_STORE_U16(r29.u32 + 150, ctx.r10.u16);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// lhz r8,580(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826cf734
	if (ctx.cr6.lt) goto loc_826CF734;
loc_826CF8A0:
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cf8f4
	if (ctx.cr6.eq) goto loc_826CF8F4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826cf8f4
	if (!ctx.cr6.gt) goto loc_826CF8F4;
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhz r11,730(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 730);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r9,r7,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r5,118(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 118);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826cf8f0
	if (ctx.cr6.lt) goto loc_826CF8F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826CF8F0:
	// sth r11,730(r31)
	REX_STORE_U16(r31.u32 + 730, ctx.r11.u16);
loc_826CF8F4:
	// stw r16,36(r29)
	REX_STORE_U32(r29.u32 + 36, r16.u32);
	// b 0x826cfe1c
	goto loc_826CFE1C;
loc_826CF8FC:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,150(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826cfa60
	if (!ctx.cr6.lt) goto loc_826CFA60;
loc_826CF914:
	// lhz r11,150(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 150);
	// lwz r10,584(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x826cf960
	if (ctx.cr6.eq) goto loc_826CF960;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826ec750
	ctx.lr = 0x826CF954;
	sub_826EC750(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cfe28
	if (ctx.cr6.lt) goto loc_826CFE28;
loc_826CF960:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cf9c8
	if (ctx.cr6.eq) goto loc_826CF9C8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826ecd60
	ctx.lr = 0x826CF97C;
	sub_826ECD60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cfe28
	if (ctx.cr6.lt) goto loc_826CFE28;
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826cf9f8
	if (!ctx.cr6.eq) goto loc_826CF9F8;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cf9ac
	if (ctx.cr6.eq) goto loc_826CF9AC;
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// b 0x826cf9b0
	goto loc_826CF9B0;
loc_826CF9AC:
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
loc_826CF9B0:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x826e2058
	ctx.lr = 0x826CF9C4;
	sub_826E2058(ctx, base);
	// b 0x826cf9f8
	goto loc_826CF9F8;
loc_826CF9C8:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cf9dc
	if (ctx.cr6.eq) goto loc_826CF9DC;
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// b 0x826cf9e0
	goto loc_826CF9E0;
loc_826CF9DC:
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
loc_826CF9E0:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826CF9F4;
	sub_826A2E60(ctx, base);
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
loc_826CF9F8:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cfa1c
	if (ctx.cr6.eq) goto loc_826CFA1C;
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// lwz r4,328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 328);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x826CFA1C;
	sub_826A1E70(ctx, base);
loc_826CFA1C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stb r25,145(r29)
	REX_STORE_U8(r29.u32 + 145, r25.u8);
	// stw r24,72(r29)
	REX_STORE_U32(r29.u32 + 72, r24.u32);
	// sth r25,148(r29)
	REX_STORE_U16(r29.u32 + 148, r25.u16);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// stw r25,76(r29)
	REX_STORE_U32(r29.u32 + 76, r25.u32);
	// stw r25,200(r29)
	REX_STORE_U32(r29.u32 + 200, r25.u32);
	// stw r25,208(r29)
	REX_STORE_U32(r29.u32 + 208, r25.u32);
	// lhz r11,150(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 150);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r29)
	REX_STORE_U16(r29.u32 + 150, ctx.r9.u16);
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x826cf914
	if (ctx.cr6.lt) goto loc_826CF914;
loc_826CFA60:
	// stw r23,36(r29)
	REX_STORE_U32(r29.u32 + 36, r23.u32);
	// b 0x826cfe1c
	goto loc_826CFE1C;
loc_826CFA68:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826cfb08
	if (!ctx.cr6.gt) goto loc_826CFB08;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_826CFA80:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,40(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826cfad0
	if (ctx.cr6.eq) goto loc_826CFAD0;
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826cfaec
	if (!ctx.cr6.eq) goto loc_826CFAEC;
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x826e2058
	ctx.lr = 0x826CFACC;
	sub_826E2058(ctx, base);
	// b 0x826cfaec
	goto loc_826CFAEC;
loc_826CFAD0:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826CFAE8;
	sub_826A2E60(ctx, base);
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
loc_826CFAEC:
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x826cfa80
	if (ctx.cr6.lt) goto loc_826CFA80;
loc_826CFB08:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// mr r27,r22
	r27.u64 = r22.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826cfb6c
	if (!ctx.cr6.gt) goto loc_826CFB6C;
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_826CFB2C:
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,40(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x826cfb68
	if (!ctx.cr6.eq) goto loc_826CFB68;
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x826cfb2c
	if (ctx.cr6.lt) goto loc_826CFB2C;
	// b 0x826cfb6c
	goto loc_826CFB6C;
loc_826CFB68:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_826CFB6C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ce2f8
	ctx.lr = 0x826CFB74;
	sub_826CE2F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cfe28
	if (ctx.cr6.lt) goto loc_826CFE28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e72c0
	ctx.lr = 0x826CFB8C;
	sub_826E72C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e72c0
	ctx.lr = 0x826CFB98;
	sub_826E72C0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826cfc5c
	if (!ctx.cr6.gt) goto loc_826CFC5C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x826cfc64
	if (!ctx.cr6.eq) goto loc_826CFC64;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826cfc70
	if (!ctx.cr6.gt) goto loc_826CFC70;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_826CFBC4:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lhz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 108);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x826cfc14
	if (!ctx.cr6.eq) goto loc_826CFC14;
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,312(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 312);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826CFC14;
	sub_826A2E60(ctx, base);
loc_826CFC14:
	// sth r21,202(r31)
	REX_STORE_U16(r31.u32 + 202, r21.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,424(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x826e3960
	ctx.lr = 0x826CFC30;
	sub_826E3960(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cfe28
	if (ctx.cr6.lt) goto loc_826CFE28;
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826cfbc4
	if (ctx.cr6.lt) goto loc_826CFBC4;
	// b 0x826cfc70
	goto loc_826CFC70;
loc_826CFC5C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x826cfc70
	if (ctx.cr6.eq) goto loc_826CFC70;
loc_826CFC64:
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826cfdf0
	if (ctx.cr6.eq) goto loc_826CFDF0;
loc_826CFC70:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826cfc84
	if (!ctx.cr6.eq) goto loc_826CFC84;
	// lfs f30,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	f30.f64 = double(temp.f32);
	// b 0x826cfca0
	goto loc_826CFCA0;
loc_826CFC84:
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f29,f12
	f30.f64 = double(float(f29.f64 / ctx.f12.f64));
loc_826CFCA0:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826cfdf0
	if (!ctx.cr6.gt) goto loc_826CFDF0;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_826CFCB8:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,320(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 320);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x826cfd38
	if (ctx.cr6.eq) goto loc_826CFD38;
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// lwz r10,332(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 332);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r7,328(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 56);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r4,r5,r7
	ctx.r4.u64 = uint32_t((ctx.r7.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r5.s32 / ctx.r7.s32 : 0);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// subf. r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble 0x826cfd38
	if (!ctx.cr0.gt) goto loc_826CFD38;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826CFD28:
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f31,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826cfd28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826CFD28;
loc_826CFD38:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826cfd50
	if (!ctx.cr6.eq) goto loc_826CFD50;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826cfdd4
	if (!ctx.cr6.gt) goto loc_826CFDD4;
loc_826CFD50:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// lhz r10,118(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x826cfd8c
	if (!ctx.cr6.gt) goto loc_826CFD8C;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826CFD8C;
	sub_826A2E60(ctx, base);
loc_826CFD8C:
	// lwz r9,464(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 464);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,496(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 496);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lhz r6,114(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 114);
	// lhz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 120);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r9,440(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r8,532(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r7,516(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 516);
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// bctrl 
	ctx.lr = 0x826CFDD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826CFDD4:
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826cfcb8
	if (ctx.cr6.lt) goto loc_826CFCB8;
loc_826CFDF0:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826cfe10
	if (!ctx.cr6.gt) goto loc_826CFE10;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x826cfe10
	if (!ctx.cr6.eq) goto loc_826CFE10;
loc_826CFE04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821aae70
	ctx.lr = 0x826CFE0C;
	sub_821AAE70(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_826CFE10:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x826cfe28
	if (ctx.cr6.lt) goto loc_826CFE28;
	// stw r19,36(r29)
	REX_STORE_U32(r29.u32 + 36, r19.u32);
loc_826CFE1C:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x826cf588
	if (!ctx.cr6.eq) goto loc_826CF588;
loc_826CFE28:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x826cfe4c
	if (ctx.cr6.eq) goto loc_826CFE4C;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
loc_826CFE4C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_82722B38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82722B40;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82722e54
	if (ctx.cr6.eq) goto loc_82722E54;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82722e54
	if (ctx.cr6.eq) goto loc_82722E54;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82722e54
	if (ctx.cr6.eq) goto loc_82722E54;
	// lwz r11,296(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82722b84
	if (ctx.cr6.eq) goto loc_82722B84;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// b 0x82722b88
	goto loc_82722B88;
loc_82722B84:
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
loc_82722B88:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// ori r30,r7,22857
	r30.u64 = ctx.r7.u64 | 22857;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// beq cr6,0x82722c34
	if (ctx.cr6.eq) goto loc_82722C34;
	// lis r30,12338
	r30.s64 = 808583168;
	// ori r30,r30,13385
	r30.u64 = r30.u64 | 13385;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// beq cr6,0x82722c34
	if (ctx.cr6.eq) goto loc_82722C34;
	// lis r30,12593
	r30.s64 = 825294848;
	// ori r30,r30,13392
	r30.u64 = r30.u64 | 13392;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// beq cr6,0x82722c34
	if (ctx.cr6.eq) goto loc_82722C34;
	// lis r30,12849
	r30.s64 = 842072064;
	// ori r30,r30,22105
	r30.u64 = r30.u64 | 22105;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// beq cr6,0x82722c34
	if (ctx.cr6.eq) goto loc_82722C34;
	// lhz r7,14(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r11,r7,r30
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r7,r11,r29
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lhz r7,14(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x82722c70
	goto loc_82722C70;
loc_82722C34:
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
loc_82722C70:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82722e48
	if (ctx.cr6.lt) goto loc_82722E48;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82722e48
	if (ctx.cr6.lt) goto loc_82722E48;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82722e54
	if (ctx.cr6.eq) goto loc_82722E54;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82722e54
	if (ctx.cr6.eq) goto loc_82722E54;
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82722e1c
	if (ctx.cr6.eq) goto loc_82722E1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r9,12850
	ctx.r9.s64 = 842137600;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// ori r9,r9,13392
	ctx.r9.u64 = ctx.r9.u64 | 13392;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfd f4,-3744(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r4.u32 + -3744);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82722d74
	if (!ctx.cr6.eq) goto loc_82722D74;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// extsw r30,r8
	r30.s64 = ctx.r8.s32;
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// extsw r29,r5
	r29.s64 = ctx.r5.s32;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r30,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r30.u64);
	// std r29,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r29.u64);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// std r7,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r5,r8
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f11,128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f9,136(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze r9,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// fdiv f3,f10,f12
	ctx.f3.f64 = ctx.f10.f64 / ctx.f12.f64;
	// add r6,r5,r31
	ctx.r6.u64 = ctx.r5.u64 + r31.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fdiv f1,f8,f7
	ctx.f1.f64 = ctx.f8.f64 / ctx.f7.f64;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// bl 0x8277b088
	ctx.lr = 0x82722D68;
	sub_8277B088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
loc_82722D74:
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r29,r5
	r29.s64 = ctx.r5.s32;
	// std r7,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// extsw r30,r9
	r30.s64 = ctx.r9.s32;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r29,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r29.u64);
	// std r30,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r30.u64);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// std r7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f11,120(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfd f9,112(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addze r9,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// fdiv f3,f8,f12
	ctx.f3.f64 = ctx.f8.f64 / ctx.f12.f64;
	// add r6,r5,r31
	ctx.r6.u64 = ctx.r5.u64 + r31.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fdiv f1,f7,f10
	ctx.f1.f64 = ctx.f7.f64 / ctx.f10.f64;
	// bl 0x8277b088
	ctx.lr = 0x82722E10;
	sub_8277B088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
loc_82722E1C:
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x82776638
	ctx.lr = 0x82722E34;
	sub_82776638(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82722e54
	if (ctx.cr6.eq) goto loc_82722E54;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
loc_82722E48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82722E54:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8273A9E0) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// sth r6,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8273AA10:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273aa3c
	if (ctx.cr6.eq) goto loc_8273AA3C;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// ble cr6,0x8273aa34
	if (!ctx.cr6.gt) goto loc_8273AA34;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x8273aa3c
	goto loc_8273AA3C;
loc_8273AA34:
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_8273AA3C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8273aa10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273AA10;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82740428) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	uint32_t ea{};
	// vspltish v15,15
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_set1_epi16(short(0xF)));
	// li r0,0
	ctx.r0.s64 = 0;
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// add r12,r6,r6
	ctx.r12.u64 = ctx.r6.u64 + ctx.r6.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vslb v8,v15,v15
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// add r11,r7,r7
	ctx.r11.u64 = ctx.r7.u64 + ctx.r7.u64;
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r12,r9
	ctx.r10.u64 = ctx.r12.u64 + ctx.r9.u64;
	// lvx128 v1,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v2,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v0,v8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v3,r8,r12
	ea = (ctx.r8.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v1,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v4,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v18,v2,v8
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v5,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v19,v3,v8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v7,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v20,v4,v8
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v16,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// vaddshs v21,v5,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v17,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v22,v6,v8
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v18,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v7,v8
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v19,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v20,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v21,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v23,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r9,r9
	ctx.r7.u64 = ctx.r9.u64 + ctx.r9.u64;
	// add r10,r12,r7
	ctx.r10.u64 = ctx.r12.u64 + ctx.r7.u64;
	// lvx128 v1,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v1,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v0,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r12,r10
	ctx.r7.u64 = ctx.r12.u64 + ctx.r10.u64;
	// lvx128 v3,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v0,v8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v2,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r12,r7
	ctx.r10.u64 = ctx.r12.u64 + ctx.r7.u64;
	// lvx128 v4,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v18,v2,v8
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v6,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v19,v3,v8
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v7,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v20,v4,v8
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v5,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r6,r6
	ctx.r7.u64 = ctx.r6.u64 + ctx.r6.u64;
	// vaddshs v21,v5,v8
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvx v16,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stvx v17,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// vaddshs v22,v6,v8
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v23,v7,v8
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx v18,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v19,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v20,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v21,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v22,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v23,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8274CBB8) {
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
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r9,216(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,208(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r11,14832(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14832);
	// lwz r4,3756(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 3756);
	// lwz r5,3760(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3760);
	// lwz r6,3764(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3764);
	// mullw r8,r9,r8
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8274cc10
	if (!ctx.cr6.eq) goto loc_8274CC10;
	// lwz r11,14828(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14828);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8274cc34
	if (!ctx.cr6.eq) goto loc_8274CC34;
	// bl 0x8274ca70
	ctx.lr = 0x8274CC0C;
	sub_8274CA70(ctx, base);
	// b 0x8274cc2c
	goto loc_8274CC2C;
loc_8274CC10:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8274cc34
	if (!ctx.cr6.eq) goto loc_8274CC34;
	// lwz r11,14828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14828);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8274cc34
	if (!ctx.cr6.eq) goto loc_8274CC34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274cb10
	ctx.lr = 0x8274CC2C;
	sub_8274CB10(ctx, base);
loc_8274CC2C:
	// lwz r11,14828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14828);
	// stw r11,14832(r31)
	REX_STORE_U32(r31.u32 + 14832, ctx.r11.u32);
loc_8274CC34:
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

DEFINE_REX_FUNC(sub_8274DB48) {
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
	ctx.lr = 0x8274DB50;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8274dc04
	if (!ctx.cr6.gt) goto loc_8274DC04;
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// addi r27,r8,-1
	r27.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_8274DB8C:
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r25
	r30.u64 = ctx.r10.u64 + r25.u64;
	// ble cr6,0x8274dbf8
	if (!ctx.cr6.gt) goto loc_8274DBF8;
loc_8274DBA8:
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
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x82749c90
	ctx.lr = 0x8274DBC4;
	sub_82749C90(ctx, base);
	// clrlwi r5,r28,28
	ctx.r5.u64 = r28.u32 & 0xF;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x82749c90
	ctx.lr = 0x8274DBDC;
	sub_82749C90(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8274dba8
	if (ctx.cr6.lt) goto loc_8274DBA8;
loc_8274DBF8:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(r26.s32, r24.s32, ctx.xer);
	// blt cr6,0x8274db8c
	if (ctx.cr6.lt) goto loc_8274DB8C;
loc_8274DC04:
	// srawi. r25,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r25.s64 = r24.s32 >> 1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// ble 0x8274dc98
	if (!ctx.cr0.gt) goto loc_8274DC98;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r27,r23,-1
	r27.s64 = r23.s64 + -1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_8274DC20:
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r22
	r30.u64 = ctx.r10.u64 + r22.u64;
	// ble cr6,0x8274dc8c
	if (!ctx.cr6.gt) goto loc_8274DC8C;
loc_8274DC3C:
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
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x82749c90
	ctx.lr = 0x8274DC58;
	sub_82749C90(ctx, base);
	// clrlwi r5,r28,28
	ctx.r5.u64 = r28.u32 & 0xF;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x82749c90
	ctx.lr = 0x8274DC70;
	sub_82749C90(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8274dc3c
	if (ctx.cr6.lt) goto loc_8274DC3C;
loc_8274DC8C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// blt cr6,0x8274dc20
	if (ctx.cr6.lt) goto loc_8274DC20;
loc_8274DC98:
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x8274dd2c
	if (!ctx.cr6.gt) goto loc_8274DD2C;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r27,r21,-1
	r27.s64 = r21.s64 + -1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_8274DCB4:
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r10,r26
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r20
	r30.u64 = ctx.r10.u64 + r20.u64;
	// ble cr6,0x8274dd20
	if (!ctx.cr6.gt) goto loc_8274DD20;
loc_8274DCD0:
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
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x82749c90
	ctx.lr = 0x8274DCEC;
	sub_82749C90(ctx, base);
	// clrlwi r5,r28,28
	ctx.r5.u64 = r28.u32 & 0xF;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwz r7,248(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x82749c90
	ctx.lr = 0x8274DD04;
	sub_82749C90(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8274dcd0
	if (ctx.cr6.lt) goto loc_8274DCD0;
loc_8274DD20:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(r26.s32, r25.s32, ctx.xer);
	// blt cr6,0x8274dcb4
	if (ctx.cr6.lt) goto loc_8274DCB4;
loc_8274DD2C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8275CB58) {
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
	ctx.lr = 0x8275CB60;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CB90;
	sub_826A1E70(ctx, base);
	// lwz r28,284(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CBAC;
	sub_826A1E70(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r21,r30,r31
	r21.u64 = r30.u64 + r31.u64;
	// add r20,r29,r28
	r20.u64 = r29.u64 + r28.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// addi r9,r27,-1
	ctx.r9.s64 = r27.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CBC4:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275cbc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CBC4;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r30,276(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r29,292(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r24,-1
	ctx.r10.s64 = r24.s64 + -1;
	// add r23,r25,r30
	r23.u64 = r25.u64 + r30.u64;
	// add r22,r27,r29
	r22.u64 = r27.u64 + r29.u64;
	// addi r9,r26,-1
	ctx.r9.s64 = r26.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CBF0:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275cbf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CBF0;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// add r25,r24,r30
	r25.u64 = r24.u64 + r30.u64;
	// add r24,r26,r29
	r24.u64 = r26.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CC14;
	sub_826A1E70(ctx, base);
	// add r27,r21,r31
	r27.u64 = r21.u64 + r31.u64;
	// add r26,r20,r28
	r26.u64 = r20.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CC2C;
	sub_826A1E70(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CC44:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275cc44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CC44;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r23,r23,r30
	r23.u64 = r23.u64 + r30.u64;
	// add r22,r22,r29
	r22.u64 = r22.u64 + r29.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// addi r9,r24,-1
	ctx.r9.s64 = r24.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CC68:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275cc68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CC68;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r25,r25,r30
	r25.u64 = r25.u64 + r30.u64;
	// add r24,r24,r29
	r24.u64 = r24.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CC8C;
	sub_826A1E70(ctx, base);
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CCA4;
	sub_826A1E70(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CCBC:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275ccbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CCBC;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r23,r23,r30
	r23.u64 = r23.u64 + r30.u64;
	// add r22,r22,r29
	r22.u64 = r22.u64 + r29.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// addi r9,r24,-1
	ctx.r9.s64 = r24.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CCE0:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275cce0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CCE0;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r25,r25,r30
	r25.u64 = r25.u64 + r30.u64;
	// add r24,r24,r29
	r24.u64 = r24.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CD04;
	sub_826A1E70(ctx, base);
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CD1C;
	sub_826A1E70(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CD34:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275cd34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CD34;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r23,r23,r30
	r23.u64 = r23.u64 + r30.u64;
	// add r22,r22,r29
	r22.u64 = r22.u64 + r29.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// addi r9,r24,-1
	ctx.r9.s64 = r24.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CD58:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275cd58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CD58;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r25,r25,r30
	r25.u64 = r25.u64 + r30.u64;
	// add r24,r24,r29
	r24.u64 = r24.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CD7C;
	sub_826A1E70(ctx, base);
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CD94;
	sub_826A1E70(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CDAC:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275cdac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CDAC;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r23,r23,r30
	r23.u64 = r23.u64 + r30.u64;
	// add r22,r22,r29
	r22.u64 = r22.u64 + r29.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// addi r9,r24,-1
	ctx.r9.s64 = r24.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CDD0:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275cdd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CDD0;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r25,r25,r30
	r25.u64 = r25.u64 + r30.u64;
	// add r24,r24,r29
	r24.u64 = r24.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CDF4;
	sub_826A1E70(ctx, base);
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CE0C;
	sub_826A1E70(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CE24:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275ce24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CE24;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r23,r23,r30
	r23.u64 = r23.u64 + r30.u64;
	// add r22,r22,r29
	r22.u64 = r22.u64 + r29.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// addi r9,r24,-1
	ctx.r9.s64 = r24.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CE48:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275ce48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CE48;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r25,r25,r30
	r25.u64 = r25.u64 + r30.u64;
	// add r21,r24,r29
	r21.u64 = r24.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CE6C;
	sub_826A1E70(ctx, base);
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CE84;
	sub_826A1E70(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// addi r10,r23,-1
	ctx.r10.s64 = r23.s64 + -1;
	// addi r9,r22,-1
	ctx.r9.s64 = r22.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CE9C:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275ce9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CE9C;
	// li r11,8
	ctx.r11.s64 = 8;
	// add r24,r23,r30
	r24.u64 = r23.u64 + r30.u64;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// addi r9,r21,-1
	ctx.r9.s64 = r21.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CEBC:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8275cebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CEBC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r30,r25,r30
	r30.u64 = r25.u64 + r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275CEDC;
	sub_826A1E70(ctx, base);
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// add r3,r26,r28
	ctx.r3.u64 = r26.u64 + r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x826a1e70
	ctx.lr = 0x8275CEEC;
	sub_826A1E70(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// add r10,r22,r29
	ctx.r10.u64 = r22.u64 + r29.u64;
	// addi r9,r24,-1
	ctx.r9.s64 = r24.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8275CF00:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8275cf00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CF00;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r21,r29
	ctx.r10.u64 = r21.u64 + r29.u64;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8275CF20:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8275cf20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275CF20;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8276F9C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8276F9C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276fa54
	if (ctx.cr6.eq) goto loc_8276FA54;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8276fa4c
	if (!ctx.cr6.gt) goto loc_8276FA4C;
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
loc_8276F9EC:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8276fa38
	if (ctx.cr6.eq) goto loc_8276FA38;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x82769858
	ctx.lr = 0x8276FA00;
	sub_82769858(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276fa10
	if (ctx.cr6.eq) goto loc_8276FA10;
	// bl 0x8271b1a0
	ctx.lr = 0x8276FA10;
	sub_8271B1A0(ctx, base);
loc_8276FA10:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276fa20
	if (ctx.cr6.eq) goto loc_8276FA20;
	// bl 0x8271b1a0
	ctx.lr = 0x8276FA20;
	sub_8271B1A0(ctx, base);
loc_8276FA20:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276fa30
	if (ctx.cr6.eq) goto loc_8276FA30;
	// bl 0x8271b1a0
	ctx.lr = 0x8276FA30;
	sub_8271B1A0(ctx, base);
loc_8276FA30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x8276FA38;
	sub_8271B1A0(ctx, base);
loc_8276FA38:
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 64);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8276f9ec
	if (ctx.cr6.lt) goto loc_8276F9EC;
loc_8276FA4C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x8276FA54;
	sub_8271B1A0(ctx, base);
loc_8276FA54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82772900) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,-60(r1)
	REX_STORE_U32(ctx.r1.u32 + -60, ctx.r9.u32);
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,-28(r1)
	REX_STORE_U32(ctx.r1.u32 + -28, ctx.r6.u32);
	// lwz r5,-28(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// rlwinm r4,r5,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// divw r10,r4,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r4,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r10,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r10.u32);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,32(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// stw r3,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r3.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r8,-36(r1)
	REX_STORE_U32(ctx.r1.u32 + -36, ctx.r8.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,28(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// li r5,2
	ctx.r5.s64 = 2;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// stw r4,-48(r1)
	REX_STORE_U32(ctx.r1.u32 + -48, ctx.r4.u32);
	// lwz r3,-28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r9,-32(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// andc r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// stw r4,-64(r1)
	REX_STORE_U32(ctx.r1.u32 + -64, ctx.r4.u32);
	// lwz r3,-36(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// rlwinm r10,r11,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r9,-32(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// andc r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// stw r4,-68(r1)
	REX_STORE_U32(ctx.r1.u32 + -68, ctx.r4.u32);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,-28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,52(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r7,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r7.u32);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,72(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 72);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82772a5c
	if (ctx.cr6.eq) goto loc_82772A5C;
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,76(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82772a5c
	if (!ctx.cr6.eq) goto loc_82772A5C;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82772a5c
	if (!ctx.cr6.eq) goto loc_82772A5C;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// stw r8,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r8.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,92(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 92);
	// stw r6,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
	// b 0x82772a88
	goto loc_82772A88;
loc_82772A5C:
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r9,64(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r8.u32);
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,32(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// stw r6,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
loc_82772A88:
	// lwz r5,-32(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82772a9c
	if (!ctx.cr6.lt) goto loc_82772A9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
loc_82772A9C:
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// stw r3,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r3.u32);
	// b 0x82772ab4
	goto loc_82772AB4;
loc_82772AA8:
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r10.u32);
loc_82772AB4:
	// lwz r9,-76(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r8,36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82772c7c
	if (!ctx.cr6.lt) goto loc_82772C7C;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r6.u32);
	// b 0x82772ae4
	goto loc_82772AE4;
loc_82772AD8:
	// lwz r5,-20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// stw r4,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r4.u32);
loc_82772AE4:
	// lwz r3,-20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r11,-64(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82772b70
	if (!ctx.cr6.lt) goto loc_82772B70;
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stw r9,-56(r1)
	REX_STORE_U32(ctx.r1.u32 + -56, ctx.r9.u32);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r7,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 7;
	// stw r7,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r7.u32);
	// lwz r6,-56(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// stw r5,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r5.u32);
	// lwz r4,-52(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r3,-80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r11,r4,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// lwz r10,-44(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,-80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// lwz r6,-52(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// lwz r4,-56(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// lwz r9,-72(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r8,-20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// stbx r7,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u8);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r5,-32(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// b 0x82772ad8
	goto loc_82772AD8;
loc_82772B70:
	// b 0x82772b80
	goto loc_82772B80;
loc_82772B74:
	// lwz r3,-20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
loc_82772B80:
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,-20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82772c58
	if (!ctx.cr6.lt) goto loc_82772C58;
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r6,r7,25
	ctx.r6.u64 = ctx.r7.u32 & 0x7F;
	// stw r6,-56(r1)
	REX_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// lwz r5,-12(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r4,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 7;
	// stw r4,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r4.u32);
	// lwz r3,-80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r11.u32);
	// lwz r10,-28(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r8,-40(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82772bf8
	if (!ctx.cr6.gt) goto loc_82772BF8;
	// lwz r7,-28(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// stw r6,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// lwz r5,-28(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lwz r3,-80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82772bf8
	if (!ctx.cr6.gt) goto loc_82772BF8;
	// lwz r11,-28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
loc_82772BF8:
	// lwz r9,-56(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// subfic r8,r9,128
	ctx.xer.ca = ctx.r9.u32 <= 128;
	ctx.r8.u64 = static_cast<uint64_t>(128) - ctx.r9.u64;
	// stw r8,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r8.u32);
	// lwz r7,-52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r6,-80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r5,r7,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// lwz r4,-44(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r11,-52(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r10,-40(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,-56(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 + ctx.r7.u64;
	// srawi r5,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 7;
	// lwz r4,-72(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r3,-20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stbx r11,r4,r3
	REX_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r11.u8);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-32(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// b 0x82772b74
	goto loc_82772B74;
loc_82772C58:
	// lwz r7,-72(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r6,-24(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r5.u32);
	// lwz r4,-52(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r3,-28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// b 0x82772aa8
	goto loc_82772AA8;
loc_82772C7C:
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r8,-28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r6,52(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// lwz r7,-36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r5,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r5.u32);
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,72(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82772d08
	if (ctx.cr6.eq) goto loc_82772D08;
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82772d08
	if (!ctx.cr6.eq) goto loc_82772D08;
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82772d08
	if (!ctx.cr6.eq) goto loc_82772D08;
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,84(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// stw r6,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,96(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// stw r4,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// b 0x82772d54
	goto loc_82772D54;
loc_82772D08:
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,-60(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,64(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lwz r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r6,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r6.u32);
	// lwz r5,-16(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// stw r5,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r5.u32);
loc_82772D54:
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,28(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r8,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r8.u32);
	// b 0x82772d80
	goto loc_82772D80;
loc_82772D74:
	// lwz r7,-76(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r6.u32);
loc_82772D80:
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,36(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lwz r8,-76(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82772f60
	if (!ctx.cr6.lt) goto loc_82772F60;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r6.u32);
	// b 0x82772dc4
	goto loc_82772DC4;
loc_82772DB8:
	// lwz r5,-20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// stw r4,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r4.u32);
loc_82772DC4:
	// lwz r3,-20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r11,-68(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82772e54
	if (!ctx.cr6.lt) goto loc_82772E54;
	// lwz r10,-8(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stw r9,-56(r1)
	REX_STORE_U32(ctx.r1.u32 + -56, ctx.r9.u32);
	// lwz r8,-8(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// li r7,128
	ctx.r7.s64 = 128;
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// stw r6,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r6.u32);
	// lwz r5,-56(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// subfic r4,r5,128
	ctx.xer.ca = ctx.r5.u32 <= 128;
	ctx.r4.u64 = static_cast<uint64_t>(128) - ctx.r5.u64;
	// stw r4,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r4.u32);
	// lwz r3,-52(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r11,-80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lwz r9,-44(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r7,-80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// lwz r3,-56(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// lwz r8,-72(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r7,-20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// stbx r6,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r5,-8(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r4,-32(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r3.u32);
	// b 0x82772db8
	goto loc_82772DB8;
loc_82772E54:
	// b 0x82772e64
	goto loc_82772E64;
loc_82772E58:
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r10.u32);
loc_82772E64:
	// lwz r9,-20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82772f3c
	if (!ctx.cr6.lt) goto loc_82772F3C;
	// lwz r7,-8(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// clrlwi r6,r7,25
	ctx.r6.u64 = ctx.r7.u32 & 0x7F;
	// stw r6,-56(r1)
	REX_STORE_U32(ctx.r1.u32 + -56, ctx.r6.u32);
	// lwz r5,-8(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// li r4,128
	ctx.r4.s64 = 128;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// stw r3,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r3.u32);
	// lwz r11,-80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// lwz r9,-36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// lwz r7,-40(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82772edc
	if (!ctx.cr6.gt) goto loc_82772EDC;
	// lwz r6,-36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// stw r5,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r5.u32);
	// lwz r4,-36(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// lwz r11,-80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82772edc
	if (!ctx.cr6.gt) goto loc_82772EDC;
	// lwz r10,-36(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r9.u32);
loc_82772EDC:
	// lwz r8,-56(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// subfic r7,r8,128
	ctx.xer.ca = ctx.r8.u32 <= 128;
	ctx.r7.u64 = static_cast<uint64_t>(128) - ctx.r8.u64;
	// stw r7,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// lwz r6,-52(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r5,-80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// lwz r3,-44(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,-52(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r9,-40(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lwz r7,-56(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// srawi r4,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 7;
	// lwz r3,-72(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r9,-8(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// lwz r8,-32(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// b 0x82772e58
	goto loc_82772E58;
loc_82772F3C:
	// lwz r6,-72(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r5,-24(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// lwz r3,-52(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r10.u32);
	// b 0x82772d74
	goto loc_82772D74;
loc_82772F60:
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,-60(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r7,-28(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -28);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r5,52(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r3,-48(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r8,44(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r6,r4,r7
	ctx.r6.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r6,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r6.u32);
	// lwz r5,20(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r4,72(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82773008
	if (ctx.cr6.eq) goto loc_82773008;
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82773008
	if (!ctx.cr6.eq) goto loc_82773008;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82773008
	if (!ctx.cr6.eq) goto loc_82773008;
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,88(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// stw r7,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r7.u32);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r5,100(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 100);
	// stw r5,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r5.u32);
	// b 0x82773070
	goto loc_82773070;
loc_82773008:
	// lwz r4,20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,-60(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,64(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,-48(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r5,-16(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r10,r4,r11
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,28(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r6,44(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r9.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// stw r8,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r8.u32);
loc_82773070:
	// lwz r7,20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r6,28(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r5,44(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// stw r11,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// b 0x8277309c
	goto loc_8277309C;
loc_82773090:
	// lwz r10,-76(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,-76(r1)
	REX_STORE_U32(ctx.r1.u32 + -76, ctx.r9.u32);
loc_8277309C:
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r6,44(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82773274
	if (!ctx.cr6.lt) goto loc_82773274;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r9.u32);
	// b 0x827730e0
	goto loc_827730E0;
loc_827730D4:
	// lwz r8,-20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r7.u32);
loc_827730E0:
	// lwz r6,-20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r5,-68(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8277316c
	if (!ctx.cr6.lt) goto loc_8277316C;
	// lwz r4,-4(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// clrlwi r3,r4,25
	ctx.r3.u64 = ctx.r4.u32 & 0x7F;
	// stw r3,-56(r1)
	REX_STORE_U32(ctx.r1.u32 + -56, ctx.r3.u32);
	// lwz r11,-4(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// stw r10,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// lwz r9,-56(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// subfic r8,r9,128
	ctx.xer.ca = ctx.r9.u32 <= 128;
	ctx.r8.u64 = static_cast<uint64_t>(128) - ctx.r9.u64;
	// stw r8,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r8.u32);
	// lwz r7,-52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r6,-80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r5,r7,r6
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// lwz r4,-44(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r11,-80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r9,-52(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lwz r7,-56(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 + ctx.r6.u64;
	// srawi r4,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 7;
	// lwz r3,-72(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r11,-20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r9,-4(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r8,-32(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r7.u32);
	// b 0x827730d4
	goto loc_827730D4;
loc_8277316C:
	// b 0x8277317c
	goto loc_8277317C;
loc_82773170:
	// lwz r6,-20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// stw r5,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r5.u32);
loc_8277317C:
	// lwz r4,-20(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82773250
	if (!ctx.cr6.lt) goto loc_82773250;
	// lwz r11,-4(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// stw r10,-56(r1)
	REX_STORE_U32(ctx.r1.u32 + -56, ctx.r10.u32);
	// lwz r9,-4(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// srawi r8,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 7;
	// stw r8,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// lwz r7,-80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// lwz r5,-36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lwz r3,-40(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x827731f0
	if (!ctx.cr6.gt) goto loc_827731F0;
	// lwz r11,-36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,-40(r1)
	REX_STORE_U32(ctx.r1.u32 + -40, ctx.r10.u32);
	// lwz r9,-36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// lwz r7,-80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x827731f0
	if (!ctx.cr6.gt) goto loc_827731F0;
	// lwz r6,-36(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// stw r5,-80(r1)
	REX_STORE_U32(ctx.r1.u32 + -80, ctx.r5.u32);
loc_827731F0:
	// lwz r4,-56(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// subfic r3,r4,128
	ctx.xer.ca = ctx.r4.u32 <= 128;
	ctx.r3.u64 = static_cast<uint64_t>(128) - ctx.r4.u64;
	// stw r3,-44(r1)
	REX_STORE_U32(ctx.r1.u32 + -44, ctx.r3.u32);
	// lwz r11,-52(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r10,-80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,-44(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r6,-52(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r5,-40(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lbzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// lwz r3,-56(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// lwz r8,-72(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r7,-20(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -20);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// stbx r6,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r5,-4(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lwz r4,-32(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r3.u32);
	// b 0x82773170
	goto loc_82773170;
loc_82773250:
	// lwz r11,-72(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r10,-24(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-72(r1)
	REX_STORE_U32(ctx.r1.u32 + -72, ctx.r9.u32);
	// lwz r8,-52(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r7,-36(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r6.u32);
	// b 0x82773090
	goto loc_82773090;
loc_82773274:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B6718) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x827B6720;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v9,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, result);
	}
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltish v27,7
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_set1_epi16(short(0x7)));
	// lvx128 v10,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,1
	r31.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vaddshs v31,v13,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r28,-32
	r28.s64 = -32;
	// vspltish v7,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_set1_epi16(short(0x1)));
	// li r29,-16
	r29.s64 = -16;
	// vsubshs v26,v9,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x827b68c8
	if (!ctx.cr6.eq) goto loc_827B68C8;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v58,v59,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b6aa0
	if (!ctx.cr6.gt) goto loc_827B6AA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827B67EC:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v5,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vslh v2,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vadduhm v23,v5,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v5,v56,v57,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v22,v2,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v3,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v21,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrghb v8,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vmrglb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v30,v1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v28,v29
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v5,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v1,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v2,v23,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v30,v22,v16
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v15,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v0,v25
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v25,v0,v24
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v28,v2,v5
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v24,v30,v1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsubshs v23,v8,v15
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsubshs v22,v6,v14
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v21,v28,v31
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v20,v24,v31
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v19,v23,v29
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v18,v22,v25
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v5,v21,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v2,v20,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v17,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v17,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x827b67ec
	if (ctx.cr6.lt) goto loc_827B67EC;
	// b 0x827b6aa0
	goto loc_827B6AA0;
loc_827B68C8:
	// li r31,32
	r31.s64 = 32;
	// lvrx128 v52,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v5,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v4,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b6aa0
	if (!ctx.cr6.gt) goto loc_827B6AA0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_827B694C:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v10,v10
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vor v29,v9,v9
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v5,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor128 v41,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v3
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v19,v0,v2
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v18,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v1
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v24,v10
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghb v3,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v23,v22,v23
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v22,v21,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v28,v8,v8
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v25,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vor v1,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vadduhm v19,v17,v18
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v21,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v14,v16
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v20,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v24,v25
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v16,v22,v23
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vor128 v4,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vslh v14,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v21
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v21,v0,v20
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v30,v14
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v16,v29,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v2,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v14,v1,v24
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v30,v22,v31
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v24,v18,v19
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v16,v17
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v29,v20,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v20,v15,v23
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v19,v14,v21
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubshs v18,v0,v28
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v17,v3,v25
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vadduhm v16,v22,v24
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v15,v30,v20
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v14,v29,v19
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v30,v17,v18
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v29,v16,v31
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsrah v28,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v24,v29,v30
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// stvx128 v28,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v24,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v23,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x827b694c
	if (ctx.cr6.lt) goto loc_827B694C;
loc_827B6AA0:
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v2,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x827b6b50
	if (!ctx.cr6.eq) goto loc_827B6B50;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b6c38
	if (!ctx.cr6.gt) goto loc_827B6C38;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_827B6AD4:
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v10,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v8,v10,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v4,v10,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vsubshs v3,v10,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vslh v1,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v31,v1
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v24,v30,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubshs v20,v0,v23
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v17,v19,v26
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsrah v15,v16,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vor v5,v5,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b6ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B6AD4;
	// b 0x827b6c38
	goto loc_827B6C38;
loc_827B6B50:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b6c38
	if (!ctx.cr6.gt) goto loc_827B6C38;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_827B6B68:
	// lvx128 v10,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v8,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v6,v10,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsubshs v31,v10,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi128 v3,v10,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsubshs v30,v9,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v9,v10,6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 10));
	// vslh v25,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v24,v10,v38,6
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vslh v23,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v23,v29
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v16,v22,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v15,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v10,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v9,v20,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v19,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v3,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v6,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v1,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v8,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v9,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubshs v25,v0,v6
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v24,v3,v4
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsubshs v28,v0,v8
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vadduhm v23,v29,v1
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v21,v31,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v20,v24,v26
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v22,v30,v28
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v19,v23,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v18,v20,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v17,v19,v21
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsrah v16,v18,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v37,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vpkshus128 v36,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor128 v5,v37,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b6b68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B6B68;
loc_827B6C38:
	// vand v13,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vcmpgtuh. v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x826a1d08
	return;
}

