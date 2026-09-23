#include "hydrothunder_funcs.59.h"

DEFINE_REX_FUNC(sub_82122AF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82122B00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// bne cr6,0x82122b30
	if (!ctx.cr6.eq) goto loc_82122B30;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82122B28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_82122B30:
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82122b4c
	if (!ctx.cr6.gt) goto loc_82122B4C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x82122B4C;
	sub_822F6020(ctx, base);
loc_82122B4C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82122b68
	if (ctx.cr6.eq) goto loc_82122B68;
	// mulli r3,r30,28
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// bl 0x822f6280
	ctx.lr = 0x82122B60;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82122b84
	if (ctx.cr0.eq) goto loc_82122B84;
loc_82122B68:
	// mulli r11,r30,28
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82122b28
	goto loc_82122B28;
loc_82122B84:
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
	ctx.lr = 0x82122B9C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8212B450) {
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
	ctx.lr = 0x8212B458;
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
	// b 0x8212b4a4
	goto loc_8212B4A4;
loc_8212B480:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8212B490;
	sub_82120780(ctx, base);
	// rlwinm. r27,r3,1,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8212b4a0
	if (ctx.cr0.eq) goto loc_8212B4A0;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8212b4a4
	goto loc_8212B4A4;
loc_8212B4A0:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_8212B4A4:
	// lbz r11,57(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212b480
	if (ctx.cr0.eq) goto loc_8212B480;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// beq 0x8212b504
	if (ctx.cr0.eq) goto loc_8212B504;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212b4fc
	if (!ctx.cr6.eq) goto loc_8212B4FC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8212B4D8:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8212b570
	ctx.lr = 0x8212B4E8;
	sub_8212B570(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r31)
	REX_STORE_U8(r31.u32 + 4, r24.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8212b560
	goto loc_8212B560;
loc_8212B4FC:
	// bl 0x82268e98
	ctx.lr = 0x8212B500;
	sub_82268E98(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8212B504:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8212B510;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bge 0x8212b524
	if (!ctx.cr0.lt) goto loc_8212B524;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// b 0x8212b4d8
	goto loc_8212B4D8;
loc_8212B524:
	// lwz r6,32(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 32);
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8215e198
	ctx.lr = 0x8212B534;
	sub_8215E198(ctx, base);
	// lwz r3,32(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 32);
	// bl 0x8269ce98
	ctx.lr = 0x8212B53C;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8212B54C;
	sub_82120AC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212B554;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_8212B560:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82133EB0) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-20392
	ctx.r4.s64 = ctx.r11.s64 + -20392;
	// addi r3,r10,-20284
	ctx.r3.s64 = ctx.r10.s64 + -20284;
	// li r5,209
	ctx.r5.s64 = 209;
	// bl 0x821231d0
	ctx.lr = 0x82133ED4;
	sub_821231D0(ctx, base);
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

DEFINE_REX_FUNC(sub_82134B00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82134B08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82134bc0
	if (ctx.cr6.eq) goto loc_82134BC0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134B38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82134b5c
	if (ctx.cr0.eq) goto loc_82134B5C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,-15728
	ctx.r11.s64 = ctx.r11.s64 + -15728;
loc_82134B48:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82134b70
	if (ctx.cr6.eq) goto loc_82134B70;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82134b48
	if (!ctx.cr6.eq) goto loc_82134B48;
loc_82134B5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82134B60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82134b78
	if (ctx.cr0.eq) goto loc_82134B78;
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// b 0x82134bc0
	goto loc_82134BC0;
loc_82134B70:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82134b60
	goto loc_82134B60;
loc_82134B78:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82134B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82134bb0
	if (ctx.cr0.eq) goto loc_82134BB0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,-15720
	ctx.r11.s64 = ctx.r11.s64 + -15720;
loc_82134B9C:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82134bf0
	if (ctx.cr6.eq) goto loc_82134BF0;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82134b9c
	if (!ctx.cr6.eq) goto loc_82134B9C;
loc_82134BB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82134BB4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82134bc0
	if (ctx.cr0.eq) goto loc_82134BC0;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_82134BC0:
	// addi r11,r29,32
	ctx.r11.s64 = r29.s64 + 32;
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// srd r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d3538
	ctx.lr = 0x82134BE4;
	sub_822D3538(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82134BF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82134bb4
	goto loc_82134BB4;
}

DEFINE_REX_FUNC(sub_8213C958) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8213C960;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82162210
	ctx.lr = 0x8213C97C;
	sub_82162210(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8213C994:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8213c9a8
	if (!ctx.cr6.eq) goto loc_8213C9A8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x8213c9b0
	goto loc_8213C9B0;
loc_8213C9A8:
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_8213C9B0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213c9f0
	if (ctx.cr6.eq) goto loc_8213C9F0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8213c9d0
	if (!ctx.cr6.gt) goto loc_8213C9D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8213c994
	goto loc_8213C994;
loc_8213C9D0:
	// bge cr6,0x8213c9e0
	if (!ctx.cr6.lt) goto loc_8213C9E0;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// b 0x8213c9e4
	goto loc_8213C9E4;
loc_8213C9E0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8213C9E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x8213c9f4
	goto loc_8213C9F4;
loc_8213C9F0:
	// stw r6,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r6.u32);
loc_8213C9F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821428C0) {
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
	ctx.lr = 0x821428C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r10,192(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 192);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-12668
	ctx.r11.s64 = ctx.r11.s64 + -12668;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r25,r9,r11
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r26,r8,r11
	r26.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// beq 0x82142918
	if (ctx.cr0.eq) goto loc_82142918;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,284(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82142918:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// bne cr6,0x82142a1c
	if (!ctx.cr6.eq) goto loc_82142A1C;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214294C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r29,60
	ctx.r5.s64 = r29.s64 + 60;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8264d8e8
	ctx.lr = 0x82142968;
	sub_8264D8E8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,-17048
	r30.s64 = ctx.r11.s64 + -17048;
	// bge 0x8214298c
	if (!ctx.cr0.lt) goto loc_8214298C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-16456
	ctx.r3.s64 = ctx.r11.s64 + -16456;
	// li r5,1056
	ctx.r5.s64 = 1056;
	// bl 0x821231d0
	ctx.lr = 0x8214298C;
	sub_821231D0(ctx, base);
loc_8214298C:
	// lwz r31,188(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 188);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821429b4
	if (ctx.cr6.eq) goto loc_821429B4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821429ac
	if (ctx.cr6.eq) goto loc_821429AC;
	// bl 0x8264c908
	ctx.lr = 0x821429A8;
	sub_8264C908(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
loc_821429AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821429B4;
	sub_8269CE98(ctx, base);
loc_821429B4:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822f6280
	ctx.lr = 0x821429BC;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821429cc
	if (ctx.cr0.eq) goto loc_821429CC;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// b 0x821429d0
	goto loc_821429D0;
loc_821429CC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821429D0:
	// stw r11,188(r29)
	REX_STORE_U32(r29.u32 + 188, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821429f0
	if (!ctx.cr6.eq) goto loc_821429F0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-16432
	ctx.r3.s64 = ctx.r11.s64 + -16432;
	// li r5,1075
	ctx.r5.s64 = 1075;
	// bl 0x821231d0
	ctx.lr = 0x821429F0;
	sub_821231D0(ctx, base);
loc_821429F0:
	// lwz r31,188(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 188);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82142a08
	if (ctx.cr6.eq) goto loc_82142A08;
	// bl 0x8264c908
	ctx.lr = 0x82142A04;
	sub_8264C908(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
loc_82142A08:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8264c8f0
	ctx.lr = 0x82142A18;
	sub_8264C8F0(ctx, base);
	// b 0x82142a34
	goto loc_82142A34;
loc_82142A1C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x82142a34
	if (!ctx.cr6.eq) goto loc_82142A34;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,60
	ctx.r3.s64 = r29.s64 + 60;
	// bl 0x826a2e60
	ctx.lr = 0x82142A34;
	sub_826A2E60(ctx, base);
loc_82142A34:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// li r30,8
	r30.s64 = 8;
	// ori r11,r11,4320
	ctx.r11.u64 = ctx.r11.u64 | 4320;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82142a94
	if (ctx.cr6.gt) goto loc_82142A94;
	// beq cr6,0x82142a7c
	if (ctx.cr6.eq) goto loc_82142A7C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,1168
	ctx.r11.u64 = ctx.r11.u64 | 1168;
	// subf. r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82142a8c
	if (ctx.cr0.eq) goto loc_82142A8C;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// beq cr6,0x82142a84
	if (ctx.cr6.eq) goto loc_82142A84;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82142a7c
	if (ctx.cr6.eq) goto loc_82142A7C;
	// cmplwi cr6,r11,77
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 77, ctx.xer);
	// bne cr6,0x82142ae0
	if (!ctx.cr6.eq) goto loc_82142AE0;
	// li r30,6
	r30.s64 = 6;
	// b 0x82142ae0
	goto loc_82142AE0;
loc_82142A7C:
	// li r30,3
	r30.s64 = 3;
	// b 0x82142ae0
	goto loc_82142AE0;
loc_82142A84:
	// li r30,2
	r30.s64 = 2;
	// b 0x82142ae0
	goto loc_82142AE0;
loc_82142A8C:
	// li r30,4
	r30.s64 = 4;
	// b 0x82142ae0
	goto loc_82142AE0;
loc_82142A94:
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,20993
	ctx.r11.u64 = ctx.r11.u64 | 20993;
	// subf. r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82142adc
	if (ctx.cr0.eq) goto loc_82142ADC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82142ad4
	if (ctx.cr6.eq) goto loc_82142AD4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82142acc
	if (ctx.cr6.eq) goto loc_82142ACC;
	// lis r10,32746
	ctx.r10.s64 = 2146041856;
	// ori r10,r10,44543
	ctx.r10.u64 = ctx.r10.u64 | 44543;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82142ae0
	if (!ctx.cr6.eq) goto loc_82142AE0;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x82142ae0
	goto loc_82142AE0;
loc_82142ACC:
	// li r30,1
	r30.s64 = 1;
	// b 0x82142ae0
	goto loc_82142AE0;
loc_82142AD4:
	// li r30,5
	r30.s64 = 5;
	// b 0x82142ae0
	goto loc_82142AE0;
loc_82142ADC:
	// li r30,7
	r30.s64 = 7;
loc_82142AE0:
	// lwz r31,-32(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + -32);
	// b 0x82142b0c
	goto loc_82142B0C;
loc_82142AE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82142B0C:
	// lwz r11,-28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82142ae8
	if (!ctx.cr6.eq) goto loc_82142AE8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821540D8) {
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
	ctx.lr = 0x821540E0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// addi r29,r11,-10444
	r29.s64 = ctx.r11.s64 + -10444;
	// beq cr6,0x8215411c
	if (ctx.cr6.eq) goto loc_8215411C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-9784
	ctx.r3.s64 = ctx.r11.s64 + -9784;
	// li r5,623
	ctx.r5.s64 = 623;
	// bl 0x821231d0
	ctx.lr = 0x8215411C;
	sub_821231D0(ctx, base);
loc_8215411C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82154130
	if (ctx.cr6.lt) goto loc_82154130;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82154144
	if (ctx.cr6.lt) goto loc_82154144;
loc_82154130:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-9912
	ctx.r3.s64 = ctx.r11.s64 + -9912;
	// li r5,624
	ctx.r5.s64 = 624;
	// bl 0x821231d0
	ctx.lr = 0x82154144;
	sub_821231D0(ctx, base);
loc_82154144:
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mulli r9,r30,1064
	ctx.r9.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1064));
	// lfs f0,-16116(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -16116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f0,15048(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// rlwinm r7,r9,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lfsx f11,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f13,f12
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// lfsx f12,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,1044(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 1044, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215F3B8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8215f3fc
	if (!ctx.cr6.eq) goto loc_8215F3FC;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,4(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82160178
	ctx.lr = 0x8215F3E8;
	sub_82160178(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8215f400
	goto loc_8215F400;
loc_8215F3FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215F400:
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

DEFINE_REX_FUNC(sub_82161FC0) {
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
	ctx.lr = 0x82161FC8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82161ff4
	if (!ctx.cr6.eq) goto loc_82161FF4;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r30,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r30.s64 = ctx.r11.s32 >> 4;
	// b 0x82161ff8
	goto loc_82161FF8;
loc_82161FF4:
	// li r30,0
	r30.s64 = 0;
loc_82161FF8:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r28,r3,28
	r28.s64 = ctx.r3.s64 + 28;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82162058
	if (!ctx.cr6.gt) goto loc_82162058;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// bgt cr6,0x82162020
	if (ctx.cr6.gt) goto loc_82162020;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82162020:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82162058
	if (!ctx.cr6.gt) goto loc_82162058;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x82162034;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82162048;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82162050;
	sub_8269D1B8(ctx, base);
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// stw r31,8(r28)
	REX_STORE_U32(r28.u32 + 8, r31.u32);
loc_82162058:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,4(r28)
	REX_STORE_U32(r28.u32 + 4, r30.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// addi r25,r11,-25252
	r25.s64 = ctx.r11.s64 + -25252;
	// addi r24,r10,-25320
	r24.s64 = ctx.r10.s64 + -25320;
	// addi r30,r9,19664
	r30.s64 = ctx.r9.s64 + 19664;
loc_82162080:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821620a4
	if (!ctx.cr6.eq) goto loc_821620A4;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x821620a8
	goto loc_821620A8;
loc_821620A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821620A8:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82162120
	if (!ctx.cr6.lt) goto loc_82162120;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x821620c4
	if (ctx.cr6.lt) goto loc_821620C4;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821620d4
	if (ctx.cr6.lt) goto loc_821620D4;
loc_821620C4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x821620D4;
	sub_821231D0(ctx, base);
loc_821620D4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821620E4;
	sub_8215F1B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821620EC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821620F0;
	sub_8215FA30(ctx, base);
	// lwz r11,6040(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82154c08
	ctx.lr = 0x82162100;
	sub_82154C08(ctx, base);
	// stwx r3,r26,r31
	REX_STORE_U32(r26.u32 + r31.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82162118
	if (ctx.cr0.eq) goto loc_82162118;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x82162080
	goto loc_82162080;
loc_82162118:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82162124
	goto loc_82162124;
loc_82162120:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82162124:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821700B0) {
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
	// lwz r9,1088(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1088);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821700fc
	if (!ctx.cr6.gt) goto loc_821700FC;
	// lwz r8,40(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
loc_821700DC:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82170120
	if (ctx.cr6.eq) goto loc_82170120;
	// lwz r7,1088(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1088);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821700dc
	if (ctx.cr6.lt) goto loc_821700DC;
loc_821700FC:
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x82170134
	if (!ctx.cr6.eq) goto loc_82170134;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,25812
	ctx.r4.s64 = ctx.r11.s64 + 25812;
	// addi r3,r10,25976
	ctx.r3.s64 = ctx.r10.s64 + 25976;
	// li r5,152
	ctx.r5.s64 = 152;
	// bl 0x821231d0
	ctx.lr = 0x8217011C;
	sub_821231D0(ctx, base);
	// b 0x8217017c
	goto loc_8217017C;
loc_82170120:
	// mulli r11,r10,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(136));
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// bl 0x826a1e70
	ctx.lr = 0x82170130;
	sub_826A1E70(ctx, base);
	// b 0x8217017c
	goto loc_8217017C;
loc_82170134:
	// mulli r11,r9,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(136));
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// bl 0x826a1e70
	ctx.lr = 0x82170144;
	sub_826A1E70(ctx, base);
	// lwz r11,1088(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1088);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r4,1088(r31)
	REX_STORE_U32(r31.u32 + 1088, ctx.r4.u32);
	// addi r6,r10,-968
	ctx.r6.s64 = ctx.r10.s64 + -968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a0028
	ctx.lr = 0x82170164;
	sub_826A0028(ctx, base);
	// lwz r11,1088(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1088);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mulli r4,r11,136
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// bl 0x82162a30
	ctx.lr = 0x82170178;
	sub_82162A30(ctx, base);
	// stw r3,1092(r31)
	REX_STORE_U32(r31.u32 + 1092, ctx.r3.u32);
loc_8217017C:
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

DEFINE_REX_FUNC(sub_82177510) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82177518;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-12628
	ctx.r11.s64 = ctx.r11.s64 + -12628;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82177540;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82177560
	if (ctx.cr0.eq) goto loc_82177560;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82176d98
	ctx.lr = 0x8217755C;
	sub_82176D98(ctx, base);
	// b 0x82177564
	goto loc_82177564;
loc_82177560:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82177564:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821793A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821793A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821793c8
	if (!ctx.cr6.eq) goto loc_821793C8;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_821793C8:
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// addi r31,r28,80
	r31.s64 = r28.s64 + 80;
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,0
	r30.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8217941c
	if (!ctx.cr0.gt) goto loc_8217941C;
	// li r29,0
	r29.s64 = 0;
loc_821793E8:
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821793FC;
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
	// blt cr6,0x821793e8
	if (ctx.cr6.lt) goto loc_821793E8;
loc_8217941C:
	// lwz r11,96(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 96);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82179444
	goto loc_82179444;
loc_82179428:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217943C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 96);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82179444:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82179428
	if (!ctx.cr6.eq) goto loc_82179428;
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 64);
	// addi r31,r28,64
	r31.s64 = r28.s64 + 64;
	// lwz r10,68(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 68);
	// li r30,0
	r30.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82179498
	if (!ctx.cr0.gt) goto loc_82179498;
	// li r29,0
	r29.s64 = 0;
loc_8217946C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x821793a0
	ctx.lr = 0x82179478;
	sub_821793A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8217946c
	if (ctx.cr6.lt) goto loc_8217946C;
loc_82179498:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821802C0) {
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
	ctx.lr = 0x821802C8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,31196
	ctx.r11.s64 = ctx.r11.s64 + 31196;
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// stw r28,8(r22)
	REX_STORE_U32(r22.u32 + 8, r28.u32);
	// bl 0x822f6280
	ctx.lr = 0x821802EC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821804f0
	if (ctx.cr0.eq) goto loc_821804F0;
	// stw r3,4(r22)
	REX_STORE_U32(r22.u32 + 4, ctx.r3.u32);
	// addi r31,r22,16
	r31.s64 = r22.s64 + 16;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r28,24(r22)
	REX_STORE_U32(r22.u32 + 24, r28.u32);
	// bl 0x822f6280
	ctx.lr = 0x82180314;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821804d8
	if (ctx.cr0.eq) goto loc_821804D8;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r21,1
	r21.s64 = 1;
	// addi r11,r11,600
	ctx.r11.s64 = ctx.r11.s64 + 600;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r22,32
	r30.s64 = r22.s64 + 32;
	// addi r29,r11,30984
	r29.s64 = ctx.r11.s64 + 30984;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r21,44(r11)
	REX_STORE_U8(ctx.r11.u32 + 44, r21.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r21,45(r11)
	REX_STORE_U8(ctx.r11.u32 + 45, r21.u8);
	// stw r28,32(r22)
	REX_STORE_U32(r22.u32 + 32, r28.u32);
	// stw r28,36(r22)
	REX_STORE_U32(r22.u32 + 36, r28.u32);
	// stw r28,40(r22)
	REX_STORE_U32(r22.u32 + 40, r28.u32);
	// bl 0x82120600
	ctx.lr = 0x8218037C;
	sub_82120600(ctx, base);
	// lis r24,-32106
	r24.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6040);
	// bl 0x82180da0
	ctx.lr = 0x8218038C;
	sub_82180DA0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821803A0;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821804a8
	if (ctx.cr0.eq) goto loc_821804A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x821803B4;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,6040(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821803C0;
	sub_82180E18(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821803D4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r20,96
	ctx.r3.s64 = r20.s64 + 96;
	// addi r4,r11,22808
	ctx.r4.s64 = ctx.r11.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x821803E4;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82180400
	if (!ctx.cr6.eq) goto loc_82180400;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82180404
	goto loc_82180404;
loc_82180400:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82180404:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82180ab0
	ctx.lr = 0x8218040C;
	sub_82180AB0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// addi r23,r11,30996
	r23.s64 = ctx.r11.s64 + 30996;
loc_8218041C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82180434
	if (!ctx.cr6.eq) goto loc_82180434;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82180438
	goto loc_82180438;
loc_82180434:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82180438:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82180490
	if (!ctx.cr6.lt) goto loc_82180490;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f530
	ctx.lr = 0x8218044C;
	sub_8215F530(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82180990
	ctx.lr = 0x8218045C;
	sub_82180990(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r29.u8);
	// bl 0x8215f2d0
	ctx.lr = 0x82180470;
	sub_8215F2D0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r25,0(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8215f338
	ctx.lr = 0x8218047C;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82180480;
	sub_8215F9E0(ctx, base);
	// stfsx f1,r27,r25
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + r25.u32, temp.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x8218041c
	goto loc_8218041C;
loc_82180490:
	// lwz r3,6040(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6040);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821804A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821804A8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r4,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bgt cr6,0x821804c4
	if (ctx.cr6.gt) goto loc_821804C4;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
loc_821804C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82180ab0
	ctx.lr = 0x821804CC;
	sub_82180AB0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce8
	return;
loc_821804D8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x821804F0;
	sub_82120018(ctx, base);
loc_821804F0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82180508;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821914C8) {
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
	// lbz r11,26(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 26);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8219150c
	if (!ctx.cr0.eq) goto loc_8219150C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6172(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6172);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82191504;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,26(r31)
	REX_STORE_U8(r31.u32 + 26, ctx.r11.u8);
loc_8219150C:
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

DEFINE_REX_FUNC(sub_82193840) {
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
	ctx.lr = 0x82193848;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-32106
	r22.s64 = -2104098816;
	// li r4,304
	ctx.r4.s64 = 304;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6060(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x82193860;
	sub_8212DD28(ctx, base);
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82193870;
	sub_826A2E60(ctx, base);
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219388c
	if (ctx.cr0.eq) goto loc_8219388C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82193890
	if (!ctx.cr6.eq) goto loc_82193890;
loc_8219388C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82193890:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,296(r27)
	REX_STORE_U8(r27.u32 + 296, ctx.r11.u8);
	// beq 0x82193950
	if (ctx.cr0.eq) goto loc_82193950;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// stw r11,288(r27)
	REX_STORE_U32(r27.u32 + 288, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,292(r27)
	REX_STORE_U32(r27.u32 + 292, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82193950
	if (!ctx.cr6.gt) goto loc_82193950;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r25,r31,48
	r25.s64 = r31.s64 + 48;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r27,268
	r28.s64 = r27.s64 + 268;
	// addi r24,r11,-25252
	r24.s64 = ctx.r11.s64 + -25252;
	// addi r23,r10,-25320
	r23.s64 = ctx.r10.s64 + -25320;
loc_821938D8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x821938ec
	if (ctx.cr6.lt) goto loc_821938EC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821938fc
	if (ctx.cr6.lt) goto loc_821938FC;
loc_821938EC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x821938FC;
	sub_821231D0(ctx, base);
loc_821938FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r3,r29,r27
	ctx.r3.u64 = r29.u64 + r27.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82193910;
	sub_826A1E70(ctx, base);
	// addi r30,r26,1
	r30.s64 = r26.s64 + 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82193920;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + -12, temp.u32);
	// bl 0x8214c110
	ctx.lr = 0x82193938;
	sub_8214C110(ctx, base);
	// stwu r3,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r28.u32 = ea;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r30
	r26.u64 = r30.u64;
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821938d8
	if (ctx.cr6.lt) goto loc_821938D8;
loc_82193950:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,6060(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6060);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,14704
	ctx.r6.s64 = ctx.r11.s64 + 14704;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8212dc68
	ctx.lr = 0x82193968;
	sub_8212DC68(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8219B348) {
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
	ctx.lr = 0x8219B350;
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r25,r5,12
	r25.s64 = ctx.r5.s64 + 12;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r28,r24
	r28.u64 = r24.u64;
	// b 0x8219b39c
	goto loc_8219B39C;
loc_8219B378:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8219B388;
	sub_82120780(ctx, base);
	// rlwinm. r28,r3,1,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8219b398
	if (ctx.cr0.eq) goto loc_8219B398;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8219b39c
	goto loc_8219B39C;
loc_8219B398:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_8219B39C:
	// lbz r11,89(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 89);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219b378
	if (ctx.cr0.eq) goto loc_8219B378;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// beq 0x8219b3fc
	if (ctx.cr0.eq) goto loc_8219B3FC;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219b3f4
	if (!ctx.cr6.eq) goto loc_8219B3F4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8219B3D0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x8219b448
	ctx.lr = 0x8219B3E0;
	sub_8219B448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r31)
	REX_STORE_U8(r31.u32 + 4, r24.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8219b438
	goto loc_8219B438;
loc_8219B3F4:
	// bl 0x8219b618
	ctx.lr = 0x8219B3F8;
	sub_8219B618(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8219B3FC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8219B408;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219b41c
	if (!ctx.cr0.lt) goto loc_8219B41C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8219b3d0
	goto loc_8219B3D0;
loc_8219B41C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82150bf0
	ctx.lr = 0x8219B424;
	sub_82150BF0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8219B42C;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_8219B438:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821A0FD8) {
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
	ctx.lr = 0x821A0FE0;
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	r18.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r18
	r30.u64 = r18.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// bl 0x82197018
	ctx.lr = 0x821A0FF8;
	sub_82197018(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r31,84
	r29.s64 = r31.s64 + 84;
	// addi r11,r11,-28192
	ctx.r11.s64 = ctx.r11.s64 + -28192;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821A1018;
	sub_82120AC0(ctx, base);
	// addi r16,r31,112
	r16.s64 = r31.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821A102C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r18,140(r31)
	REX_STORE_U32(r31.u32 + 140, r18.u32);
	// addi r7,r11,16592
	ctx.r7.s64 = ctx.r11.s64 + 16592;
	// stw r18,144(r31)
	REX_STORE_U32(r31.u32 + 144, r18.u32);
	// lis r6,-32126
	ctx.r6.s64 = -2105409536;
	// stb r18,172(r31)
	REX_STORE_U8(r31.u32 + 172, r18.u8);
	// addi r11,r31,180
	ctx.r11.s64 = r31.s64 + 180;
	// addi r10,r31,184
	ctx.r10.s64 = r31.s64 + 184;
	// addi r9,r31,188
	ctx.r9.s64 = r31.s64 + 188;
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f13,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-19392(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -19392);
	ctx.f12.f64 = double(temp.f32);
	// li r3,108
	ctx.r3.s64 = 108;
	// lfs f11,668(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 668);
	ctx.f11.f64 = double(temp.f32);
	// stb r8,164(r31)
	REX_STORE_U8(r31.u32 + 164, ctx.r8.u8);
	// lfs f10,172(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// addi r27,r31,140
	r27.s64 = r31.s64 + 140;
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// addi r26,r31,144
	r26.s64 = r31.s64 + 144;
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// addi r24,r31,148
	r24.s64 = r31.s64 + 148;
	// stfs f12,156(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r23,r31,152
	r23.s64 = r31.s64 + 152;
	// stfs f11,160(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// addi r22,r31,156
	r22.s64 = r31.s64 + 156;
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// addi r21,r31,160
	r21.s64 = r31.s64 + 160;
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// addi r20,r31,164
	r20.s64 = r31.s64 + 164;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r19,r31,168
	r19.s64 = r31.s64 + 168;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r17,r31,172
	r17.s64 = r31.s64 + 172;
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r14,r31,176
	r14.s64 = r31.s64 + 176;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x822f6280
	ctx.lr = 0x821A10D0;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821a1100
	if (ctx.cr0.eq) goto loc_821A1100;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,-29788
	ctx.r4.s64 = ctx.r11.s64 + -29788;
	// bl 0x82120600
	ctx.lr = 0x821A10E8;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x8219e000
	ctx.lr = 0x821A10FC;
	sub_8219E000(ctx, base);
	// b 0x821a1104
	goto loc_821A1104;
loc_821A1100:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_821A1104:
	// stw r3,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// addi r15,r31,28
	r15.s64 = r31.s64 + 28;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A111C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1138
	if (ctx.cr0.eq) goto loc_821A1138;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821A1138;
	sub_82120AC0(ctx, base);
loc_821A1138:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x821A1140;
	sub_822F6280(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r11,-17304
	r28.s64 = ctx.r11.s64 + -17304;
	// addi r25,r10,10360
	r25.s64 = ctx.r10.s64 + 10360;
	// beq 0x821a1190
	if (ctx.cr0.eq) goto loc_821A1190;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,-29756
	ctx.r4.s64 = ctx.r11.s64 + -29756;
	// bl 0x82120600
	ctx.lr = 0x821A1168;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82197628
	ctx.lr = 0x821A117C;
	sub_82197628(ctx, base);
	// addi r11,r28,-24
	ctx.r11.s64 = r28.s64 + -24;
	// stw r25,0(r29)
	REX_STORE_U32(r29.u32 + 0, r25.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r11,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r11.u32);
	// b 0x821a1194
	goto loc_821A1194;
loc_821A1190:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A1194:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A11A0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a11bc
	if (ctx.cr0.eq) goto loc_821A11BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821A11BC;
	sub_82120AC0(ctx, base);
loc_821A11BC:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x821A11C4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a1200
	if (ctx.cr0.eq) goto loc_821A1200;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-29744
	ctx.r4.s64 = ctx.r11.s64 + -29744;
	// bl 0x82120600
	ctx.lr = 0x821A11DC;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82197628
	ctx.lr = 0x821A11F0;
	sub_82197628(ctx, base);
	// stw r25,0(r29)
	REX_STORE_U32(r29.u32 + 0, r25.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r28,52(r29)
	REX_STORE_U32(r29.u32 + 52, r28.u32);
	// b 0x821a1204
	goto loc_821A1204;
loc_821A1200:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A1204:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A1210;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a122c
	if (ctx.cr0.eq) goto loc_821A122C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821A122C;
	sub_82120AC0(ctx, base);
loc_821A122C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A1234;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a1268
	if (ctx.cr0.eq) goto loc_821A1268;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-29724
	ctx.r4.s64 = ctx.r11.s64 + -29724;
	// bl 0x82120600
	ctx.lr = 0x821A124C;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x821A1260;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a126c
	goto loc_821A126C;
loc_821A1268:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A126C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A1278;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1294
	if (ctx.cr0.eq) goto loc_821A1294;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821A1294;
	sub_82120AC0(ctx, base);
loc_821A1294:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A129C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a12d0
	if (ctx.cr0.eq) goto loc_821A12D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-29708
	ctx.r4.s64 = ctx.r11.s64 + -29708;
	// bl 0x82120600
	ctx.lr = 0x821A12B4;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x821A12C8;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a12d4
	goto loc_821A12D4;
loc_821A12D0:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A12D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A12E0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a12fc
	if (ctx.cr0.eq) goto loc_821A12FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821A12FC;
	sub_82120AC0(ctx, base);
loc_821A12FC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A1304;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a1338
	if (ctx.cr0.eq) goto loc_821A1338;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-28308
	ctx.r4.s64 = ctx.r11.s64 + -28308;
	// bl 0x82120600
	ctx.lr = 0x821A131C;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x821A1330;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a133c
	goto loc_821A133C;
loc_821A1338:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A133C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A1348;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1364
	if (ctx.cr0.eq) goto loc_821A1364;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821A1364;
	sub_82120AC0(ctx, base);
loc_821A1364:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A136C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a13a0
	if (ctx.cr0.eq) goto loc_821A13A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-28292
	ctx.r4.s64 = ctx.r11.s64 + -28292;
	// bl 0x82120600
	ctx.lr = 0x821A1384;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82196ba8
	ctx.lr = 0x821A1398;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a13a4
	goto loc_821A13A4;
loc_821A13A0:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A13A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A13B0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a13cc
	if (ctx.cr0.eq) goto loc_821A13CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821A13CC;
	sub_82120AC0(ctx, base);
loc_821A13CC:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821A13D4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a1408
	if (ctx.cr0.eq) goto loc_821A1408;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29692
	ctx.r4.s64 = ctx.r11.s64 + -29692;
	// bl 0x82120600
	ctx.lr = 0x821A13EC;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x82191600
	ctx.lr = 0x821A1400;
	sub_82191600(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a140c
	goto loc_821A140C;
loc_821A1408:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A140C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A1418;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1434
	if (ctx.cr0.eq) goto loc_821A1434;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,0,25,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x821A1434;
	sub_82120AC0(ctx, base);
loc_821A1434:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A143C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a1470
	if (ctx.cr0.eq) goto loc_821A1470;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,23132
	ctx.r4.s64 = ctx.r11.s64 + 23132;
	// bl 0x82120600
	ctx.lr = 0x821A1454;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
	// bl 0x82196ba8
	ctx.lr = 0x821A1468;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a1474
	goto loc_821A1474;
loc_821A1470:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A1474:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A1480;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a149c
	if (ctx.cr0.eq) goto loc_821A149C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r30,r30,0,24,22
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x821A149C;
	sub_82120AC0(ctx, base);
loc_821A149C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821A14A4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a14d8
	if (ctx.cr0.eq) goto loc_821A14D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-29672
	ctx.r4.s64 = ctx.r11.s64 + -29672;
	// bl 0x82120600
	ctx.lr = 0x821A14BC;
	sub_82120600(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,512
	r30.u64 = r30.u64 | 512;
	// bl 0x82191600
	ctx.lr = 0x821A14D0;
	sub_82191600(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a14dc
	goto loc_821A14DC;
loc_821A14D8:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A14DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A14E8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1504
	if (ctx.cr0.eq) goto loc_821A1504;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r30,0,23,21
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x821A1504;
	sub_82120AC0(ctx, base);
loc_821A1504:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821A150C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a153c
	if (ctx.cr0.eq) goto loc_821A153C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-28276
	ctx.r4.s64 = ctx.r11.s64 + -28276;
	// bl 0x82120600
	ctx.lr = 0x821A1524;
	sub_82120600(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,1024
	r30.u64 = r30.u64 | 1024;
	// bl 0x8219e000
	ctx.lr = 0x821A1538;
	sub_8219E000(ctx, base);
	// b 0x821a1540
	goto loc_821A1540;
loc_821A153C:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_821A1540:
	// stw r3,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A1554;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1570
	if (ctx.cr0.eq) goto loc_821A1570;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r30,r30,0,22,20
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82120ac0
	ctx.lr = 0x821A1570;
	sub_82120AC0(ctx, base);
loc_821A1570:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A1578;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a15ac
	if (ctx.cr0.eq) goto loc_821A15AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-28256
	ctx.r4.s64 = ctx.r11.s64 + -28256;
	// bl 0x82120600
	ctx.lr = 0x821A1590;
	sub_82120600(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// bl 0x82196ba8
	ctx.lr = 0x821A15A4;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a15b0
	goto loc_821A15B0;
loc_821A15AC:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A15B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A15BC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a15d8
	if (ctx.cr0.eq) goto loc_821A15D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r30,r30,0,21,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82120ac0
	ctx.lr = 0x821A15D8;
	sub_82120AC0(ctx, base);
loc_821A15D8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A15E0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a1614
	if (ctx.cr0.eq) goto loc_821A1614;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-28236
	ctx.r4.s64 = ctx.r11.s64 + -28236;
	// bl 0x82120600
	ctx.lr = 0x821A15F8;
	sub_82120600(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ori r30,r30,4096
	r30.u64 = r30.u64 | 4096;
	// bl 0x82196ba8
	ctx.lr = 0x821A160C;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a1618
	goto loc_821A1618;
loc_821A1614:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A1618:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A1624;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1640
	if (ctx.cr0.eq) goto loc_821A1640;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rlwinm r30,r30,0,20,18
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821A1640;
	sub_82120AC0(ctx, base);
loc_821A1640:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A1648;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a167c
	if (ctx.cr0.eq) goto loc_821A167C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-28216
	ctx.r4.s64 = ctx.r11.s64 + -28216;
	// bl 0x82120600
	ctx.lr = 0x821A1660;
	sub_82120600(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// ori r30,r30,8192
	r30.u64 = r30.u64 | 8192;
	// bl 0x82196ba8
	ctx.lr = 0x821A1674;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a1680
	goto loc_821A1680;
loc_821A167C:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A1680:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A168C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a16a8
	if (ctx.cr0.eq) goto loc_821A16A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r30,r30,0,19,17
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821A16A8;
	sub_82120AC0(ctx, base);
loc_821A16A8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A16B0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a16e4
	if (ctx.cr0.eq) goto loc_821A16E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,-28204
	ctx.r4.s64 = ctx.r11.s64 + -28204;
	// bl 0x82120600
	ctx.lr = 0x821A16C8;
	sub_82120600(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ori r30,r30,16384
	r30.u64 = r30.u64 | 16384;
	// bl 0x82196ba8
	ctx.lr = 0x821A16DC;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a16e8
	goto loc_821A16E8;
loc_821A16E4:
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r18.u32);
loc_821A16E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82145710
	ctx.lr = 0x821A16F4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a170c
	if (ctx.cr0.eq) goto loc_821A170C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82120ac0
	ctx.lr = 0x821A170C;
	sub_82120AC0(ctx, base);
loc_821A170C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_821D5CE0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x821D5CE8;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f1,20(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x821959d0
	ctx.lr = 0x821D5D10;
	sub_821959D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d5eb0
	if (ctx.cr0.eq) goto loc_821D5EB0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r24,48
	ctx.r4.s64 = r24.s64 + 48;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823fbf60
	ctx.lr = 0x821D5D28;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821D5D38:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821d5d38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D5D38;
	// lwz r11,112(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5e80
	if (ctx.cr6.eq) goto loc_821D5E80;
	// lwz r25,40(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d5e80
	if (ctx.cr6.eq) goto loc_821D5E80;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
loc_821D5D70:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r11,58(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d5e70
	if (ctx.cr0.eq) goto loc_821D5E70;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821d5e70
	if (!ctx.cr6.gt) goto loc_821D5E70;
	// li r30,0
	r30.s64 = 0;
loc_821D5D98:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,20(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r11,64
	ctx.r5.s64 = ctx.r11.s64 + 64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82195b08
	ctx.lr = 0x821D5DB4;
	sub_82195B08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d5e5c
	if (ctx.cr0.eq) goto loc_821D5E5C;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,6060(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x821D5DC8;
	sub_8212DD28(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823fbf60
	ctx.lr = 0x821D5DE0;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821D5DF0:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821d5df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D5DF0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821D5E0C;
	sub_826A1E70(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lwz r3,6060(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6060);
	// li r12,-32
	ctx.r12.s64 = -32;
	// addi r7,r10,26032
	ctx.r7.s64 = ctx.r10.s64 + 26032;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// rldicr r11,r11,49,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 49) & 0xFFFE000000000000;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// ld r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,108(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 108);
	// lwz r5,76(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82139b18
	ctx.lr = 0x821D5E5C;
	sub_82139B18(ctx, base);
loc_821D5E5C:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,272
	r30.s64 = r30.s64 + 272;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821d5d98
	if (ctx.cr6.lt) goto loc_821D5D98;
loc_821D5E70:
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 44);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d5d70
	if (!ctx.cr6.eq) goto loc_821D5D70;
loc_821D5E80:
	// lwz r11,116(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 116);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821d5ea8
	goto loc_821D5EA8;
loc_821D5E8C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821d5ce0
	ctx.lr = 0x821D5EA0;
	sub_821D5CE0(ctx, base);
	// lwz r11,116(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 116);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821D5EA8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d5e8c
	if (!ctx.cr6.eq) goto loc_821D5E8C;
loc_821D5EB0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821E0B88) {
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
	// lwz r4,44(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,13540
	ctx.r11.s64 = ctx.r11.s64 + 13540;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821e0bd0
	if (ctx.cr6.eq) goto loc_821E0BD0;
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
	ctx.lr = 0x821E0BD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E0BD0:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0bf8
	if (ctx.cr6.eq) goto loc_821E0BF8;
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
	ctx.lr = 0x821E0BF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E0BF8:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0c20
	if (ctx.cr6.eq) goto loc_821E0C20;
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
	ctx.lr = 0x821E0C20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E0C20:
	// lwz r4,68(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e0c38
	if (ctx.cr6.eq) goto loc_821E0C38;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// bl 0x8212eae0
	ctx.lr = 0x821E0C38;
	sub_8212EAE0(ctx, base);
loc_821E0C38:
	// lwz r4,72(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e0c4c
	if (ctx.cr6.eq) goto loc_821E0C4C;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// bl 0x8212eae0
	ctx.lr = 0x821E0C4C;
	sub_8212EAE0(ctx, base);
loc_821E0C4C:
	// lwz r4,76(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e0c60
	if (ctx.cr6.eq) goto loc_821E0C60;
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// bl 0x8212eae0
	ctx.lr = 0x821E0C60;
	sub_8212EAE0(ctx, base);
loc_821E0C60:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82120ac0
	ctx.lr = 0x821E0C70;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8214e4b0
	ctx.lr = 0x821E0C78;
	sub_8214E4B0(ctx, base);
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

DEFINE_REX_FUNC(sub_821EA050) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r10,23844
	ctx.r4.s64 = ctx.r10.s64 + 23844;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8215f338
	ctx.lr = 0x821EA07C;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821EA084;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821ea0a8
	if (!ctx.cr6.eq) goto loc_821EA0A8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821ea0b0
	if (ctx.cr6.lt) goto loc_821EA0B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821ea0b0
	goto loc_821EA0B0;
loc_821EA0A8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-26856
	ctx.r11.s64 = ctx.r11.s64 + -26856;
loc_821EA0B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_821ED938) {
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
	ctx.lr = 0x821ED940;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// bl 0x821a5c28
	ctx.lr = 0x821ED958;
	sub_821A5C28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,40(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821ED97C;
	sub_821626C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,4(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r29,r11,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r4,r28,r29
	ctx.r4.u64 = r28.u64 + r29.u64;
	// bl 0x82125c20
	ctx.lr = 0x821ED998;
	sub_82125C20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821ED9A4;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821ED9B0;
	sub_826A1E70(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821ED9C4;
	sub_821626C0(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821eda40
	goto loc_821EDA40;
loc_821ED9D0:
	// lwz r29,8(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// bl 0x821a5c28
	ctx.lr = 0x821ED9E0;
	sub_821A5C28(ctx, base);
	// addi r4,r29,44
	ctx.r4.s64 = r29.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x821ED9EC;
	sub_821626C0(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x821ED9F8;
	sub_821626C0(ctx, base);
	// addi r4,r29,56
	ctx.r4.s64 = r29.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x821EDA04;
	sub_821626C0(ctx, base);
	// addi r4,r29,60
	ctx.r4.s64 = r29.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x821EDA10;
	sub_821626C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r27,4(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r27,32
	ctx.r4.s64 = r27.s64 + 32;
	// bl 0x82125c20
	ctx.lr = 0x821EDA20;
	sub_82125C20(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821EDA2C;
	sub_82125C98(ctx, base);
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x826a1e70
	ctx.lr = 0x821EDA38;
	sub_826A1E70(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_821EDA40:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ed9d0
	if (!ctx.cr6.eq) goto loc_821ED9D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// bl 0x82125c20
	ctx.lr = 0x821EDA58;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821EDA64;
	sub_82125C98(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x826a1e70
	ctx.lr = 0x821EDA70;
	sub_826A1E70(ctx, base);
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x821EDA7C;
	sub_821626C0(ctx, base);
	// addi r4,r30,100
	ctx.r4.s64 = r30.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x821EDA88;
	sub_821626C0(ctx, base);
	// addi r4,r30,104
	ctx.r4.s64 = r30.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x821EDA94;
	sub_821626C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821FA208) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x821FA210;
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r26,r11,24748
	r26.s64 = ctx.r11.s64 + 24748;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// addi r11,r10,1640
	ctx.r11.s64 = ctx.r10.s64 + 1640;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mulli r10,r7,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(28));
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA264;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA26C;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA270;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA280;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA288;
	sub_8215F5F8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA290;
	sub_8215F0F0(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r26,0(r21)
	REX_STORE_U32(r21.u32 + 0, r26.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
	// bne cr6,0x821fa2f4
	if (!ctx.cr6.eq) goto loc_821FA2F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r21,r11,24768
	r21.s64 = ctx.r11.s64 + 24768;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA2BC;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA2C4;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA2C8;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA2D8;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA2E0;
	sub_8215F5F8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA2E8;
	sub_8215F0F0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r26,0(r21)
	REX_STORE_U32(r21.u32 + 0, r26.u32);
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
loc_821FA2F4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x821fa348
	if (!ctx.cr6.eq) goto loc_821FA348;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r21,r11,24792
	r21.s64 = ctx.r11.s64 + 24792;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA310;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA318;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA31C;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA32C;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA334;
	sub_8215F5F8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA33C;
	sub_8215F0F0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r26,0(r21)
	REX_STORE_U32(r21.u32 + 0, r26.u32);
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
loc_821FA348:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x821fa39c
	if (!ctx.cr6.eq) goto loc_821FA39C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r21,r11,24816
	r21.s64 = ctx.r11.s64 + 24816;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA364;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA36C;
	sub_8215F5F8(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA370;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FA380;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA388;
	sub_8215F5F8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA390;
	sub_8215F0F0(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// stw r26,0(r21)
	REX_STORE_U32(r21.u32 + 0, r26.u32);
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
loc_821FA39C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FA3CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fa444
	if (ctx.cr0.eq) goto loc_821FA444;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x821fa3e4
	if (!ctx.cr6.lt) goto loc_821FA3E4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_821FA3E4:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fsubs f10,f30,f12
	ctx.f10.f64 = double(float(f30.f64 - ctx.f12.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// rlwinm r7,r9,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lfsx f0,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f31,f0,f13,f31
	f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : f31.f64;
	// fsel f30,f11,f12,f30
	f30.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : f30.f64;
loc_821FA444:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x8215f670
	ctx.lr = 0x821FA454;
	sub_8215F670(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA45C;
	sub_8215F5F8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA464;
	sub_8215F5F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA46C;
	sub_8215F5F8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x821FA474;
	sub_8215F5F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,24544
	ctx.r4.s64 = ctx.r11.s64 + 24544;
	// bl 0x8215f670
	ctx.lr = 0x821FA484;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA48C;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,24552
	ctx.r4.s64 = ctx.r11.s64 + 24552;
	// bl 0x8215f670
	ctx.lr = 0x821FA4A4;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA4AC;
	sub_8215F0F0(ctx, base);
	// li r31,2
	r31.s64 = 2;
	// stfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,24564
	ctx.r4.s64 = ctx.r11.s64 + 24564;
	// bl 0x8215f670
	ctx.lr = 0x821FA4C8;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FA4D0;
	sub_8215F0F0(ctx, base);
	// stfs f30,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8220FB60) {
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
	ctx.lr = 0x8220FB68;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821b2d80
	ctx.lr = 0x8220FB84;
	sub_821B2D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b2d80
	ctx.lr = 0x8220FB90;
	sub_821B2D80(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// subf r31,r3,r31
	r31.u64 = r31.u64 - ctx.r3.u64;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// ori r30,r9,16960
	r30.u64 = ctx.r9.u64 | 16960;
	// lwz r3,6140(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6140);
	// divw r10,r31,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(r31.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r31.s32 / ctx.r11.s32 : 0);
	// divw r9,r31,r30
	ctx.r9.u64 = uint32_t((r30.s32 && !(r31.s32 == INT32_MIN && r30.s32 == -1)) ? r31.s32 / r30.s32 : 0);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,24(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// subf r9,r9,r31
	ctx.r9.u64 = r31.u64 - ctx.r9.u64;
	// mulli r10,r10,1000
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1000));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r4,r8,-29796
	ctx.r4.s64 = ctx.r8.s64 + -29796;
	// divw r27,r31,r30
	r27.u64 = uint32_t((r30.s32 && !(r31.s32 == INT32_MIN && r30.s32 == -1)) ? r31.s32 / r30.s32 : 0);
	// divw r28,r9,r11
	r28.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// subf r29,r10,r31
	r29.u64 = r31.u64 - ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8220FBE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8220fbf4
	if (ctx.cr6.lt) goto loc_8220FBF4;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8220fbf8
	goto loc_8220FBF8;
loc_8220FBF4:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8220FBF8:
	// cmpwi cr6,r31,1000
	ctx.cr6.compare<int32_t>(r31.s32, 1000, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bge cr6,0x8220fc18
	if (!ctx.cr6.lt) goto loc_8220FC18;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,28480
	ctx.r4.s64 = ctx.r11.s64 + 28480;
	// bl 0x826a0568
	ctx.lr = 0x8220FC14;
	sub_826A0568(ctx, base);
	// b 0x8220fc54
	goto loc_8220FC54;
loc_8220FC18:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// bge cr6,0x8220fc38
	if (!ctx.cr6.lt) goto loc_8220FC38;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,-29768
	ctx.r4.s64 = ctx.r11.s64 + -29768;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x826a0568
	ctx.lr = 0x8220FC34;
	sub_826A0568(ctx, base);
	// b 0x8220fc54
	goto loc_8220FC54;
loc_8220FC38:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addi r4,r11,-29756
	ctx.r4.s64 = ctx.r11.s64 + -29756;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x826a0568
	ctx.lr = 0x8220FC54;
	sub_826A0568(ctx, base);
loc_8220FC54:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8220FC5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8220fc5c
	if (!ctx.cr6.eq) goto loc_8220FC5C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r26,260
	ctx.r3.s64 = r26.s64 + 260;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x8220FC84;
	sub_82120C08(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8221CC10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8221CC18;
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
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
	ctx.lr = 0x8221CC34;
	sub_821B2D80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82208568
	ctx.lr = 0x8221CC40;
	sub_82208568(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213bce8
	ctx.lr = 0x8221CC4C;
	sub_8213BCE8(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8221ce54
	if (!ctx.cr6.eq) goto loc_8221CE54;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bne cr6,0x8221cca8
	if (!ctx.cr6.eq) goto loc_8221CCA8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-26012
	ctx.r4.s64 = ctx.r11.s64 + -26012;
	// bl 0x82120600
	ctx.lr = 0x8221CC6C;
	sub_82120600(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x8221CC78;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CCA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// b 0x8221ce48
	goto loc_8221CE48;
loc_8221CCA8:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// bne cr6,0x8221ccfc
	if (!ctx.cr6.eq) goto loc_8221CCFC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-26004
	ctx.r4.s64 = ctx.r11.s64 + -26004;
	// bl 0x82120600
	ctx.lr = 0x8221CCC0;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x8221CCCC;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, ctx.r10.u32);
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CCF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x8221ce48
	goto loc_8221CE48;
loc_8221CCFC:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// bne cr6,0x8221cd50
	if (!ctx.cr6.eq) goto loc_8221CD50;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-25992
	ctx.r4.s64 = ctx.r11.s64 + -25992;
	// bl 0x82120600
	ctx.lr = 0x8221CD14;
	sub_82120600(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x8221CD20;
	sub_821DD040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,992(r1)
	REX_STORE_U32(ctx.r1.u32 + 992, ctx.r11.u32);
	// addi r5,r1,864
	ctx.r5.s64 = ctx.r1.s64 + 864;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CD48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x8221ce48
	goto loc_8221CE48;
loc_8221CD50:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// bne cr6,0x8221cda4
	if (!ctx.cr6.eq) goto loc_8221CDA4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-25984
	ctx.r4.s64 = ctx.r11.s64 + -25984;
	// bl 0x82120600
	ctx.lr = 0x8221CD68;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x8221CD74;
	sub_821DD040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r11.u32);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CD9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x8221ce48
	goto loc_8221CE48;
loc_8221CDA4:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(r31.s32, 5, ctx.xer);
	// bne cr6,0x8221cdf8
	if (!ctx.cr6.eq) goto loc_8221CDF8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-25976
	ctx.r4.s64 = ctx.r11.s64 + -25976;
	// bl 0x82120600
	ctx.lr = 0x8221CDBC;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x8221CDC8;
	sub_821DD040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,848(r1)
	REX_STORE_U32(ctx.r1.u32 + 848, ctx.r11.u32);
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CDF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x8221ce48
	goto loc_8221CE48;
loc_8221CDF8:
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(r31.s32, 6, ctx.xer);
	// bne cr6,0x8221ce54
	if (!ctx.cr6.eq) goto loc_8221CE54;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-25964
	ctx.r4.s64 = ctx.r11.s64 + -25964;
	// bl 0x82120600
	ctx.lr = 0x8221CE10;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x8221CE1C;
	sub_821DD040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,1136(r1)
	REX_STORE_U32(ctx.r1.u32 + 1136, ctx.r11.u32);
	// addi r5,r1,1008
	ctx.r5.s64 = ctx.r1.s64 + 1008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221CE44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8221CE48:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8221CE54;
	sub_82120AC0(ctx, base);
loc_8221CE54:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8222B130) {
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
	// lwz r11,112(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222b164
	if (!ctx.cr6.eq) goto loc_8222B164;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x8222b18c
	goto loc_8222B18C;
loc_8222B164:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8222b1a8
	if (!ctx.cr6.eq) goto loc_8222B1A8;
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
	ctx.lr = 0x8222B184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
loc_8222B18C:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8222B1A4;
	sub_8216B6A8(ctx, base);
	// b 0x8222b1c0
	goto loc_8222B1C0;
loc_8222B1A8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-23168
	ctx.r4.s64 = ctx.r11.s64 + -23168;
	// addi r3,r10,-22924
	ctx.r3.s64 = ctx.r10.s64 + -22924;
	// li r5,579
	ctx.r5.s64 = 579;
	// bl 0x821231d0
	ctx.lr = 0x8222B1C0;
	sub_821231D0(ctx, base);
loc_8222B1C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,19844
	ctx.r3.s64 = ctx.r11.s64 + 19844;
	// bl 0x8216bc98
	ctx.lr = 0x8222B1D0;
	sub_8216BC98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
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

DEFINE_REX_FUNC(sub_82230BB0) {
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
	ctx.lr = 0x82230BB8;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// bl 0x82178268
	ctx.lr = 0x82230BDC;
	sub_82178268(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stb r26,164(r31)
	REX_STORE_U8(r31.u32 + 164, r26.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r26,165(r31)
	REX_STORE_U8(r31.u32 + 165, r26.u8);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stb r26,166(r31)
	REX_STORE_U8(r31.u32 + 166, r26.u8);
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f31,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r9,r8,-20016
	ctx.r9.s64 = ctx.r8.s64 + -20016;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// li r17,1
	r17.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f30,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f30.f64 = double(temp.f32);
	// addi r27,r31,160
	r27.s64 = r31.s64 + 160;
	// stfs f30,168(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// addi r25,r31,164
	r25.s64 = r31.s64 + 164;
	// stfs f30,172(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// addi r24,r31,165
	r24.s64 = r31.s64 + 165;
	// stfs f30,184(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// addi r23,r31,166
	r23.s64 = r31.s64 + 166;
	// stfs f31,188(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// addi r22,r31,167
	r22.s64 = r31.s64 + 167;
	// addi r21,r31,168
	r21.s64 = r31.s64 + 168;
	// stb r17,167(r31)
	REX_STORE_U8(r31.u32 + 167, r17.u8);
	// addi r20,r31,172
	r20.s64 = r31.s64 + 172;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r19,r31,184
	r19.s64 = r31.s64 + 184;
	// stw r10,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r10.u32);
	// addi r18,r31,188
	r18.s64 = r31.s64 + 188;
	// stw r10,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r10.u32);
	// addi r9,r31,188
	ctx.r9.s64 = r31.s64 + 188;
loc_82230C60:
	// stw r26,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r26.u32);
	// stw r26,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r26.u32);
	// stw r26,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r26.u32);
	// stbu r17,16(r9)
	ea = 16 + ctx.r9.u32;
	REX_STORE_U8(ea, r17.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82230c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82230C60;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r31,248
	ctx.r11.s64 = r31.s64 + 248;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82230C80:
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
	// stbu r17,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U8(ea, r17.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82230c80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82230C80;
	// std r26,240(r31)
	REX_STORE_U64(r31.u32 + 240, r26.u64);
	// stw r26,248(r31)
	REX_STORE_U32(r31.u32 + 248, r26.u32);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x82230CA4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82230cbc
	if (ctx.cr0.eq) goto loc_82230CBC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x82230CB4;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82230cc0
	goto loc_82230CC0;
loc_82230CBC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82230CC0:
	// stw r4,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r4.u32);
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x82230CD0;
	sub_821D3988(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82230CD8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82230cf0
	if (ctx.cr0.eq) goto loc_82230CF0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dffe8
	ctx.lr = 0x82230CE8;
	sub_821DFFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82230cf4
	goto loc_82230CF4;
loc_82230CF0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82230CF4:
	// stw r4,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x82230D00;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x82230D08;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82230d20
	if (ctx.cr0.eq) goto loc_82230D20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82232080
	ctx.lr = 0x82230D18;
	sub_82232080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82230d24
	goto loc_82230D24;
loc_82230D20:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82230D24:
	// stw r4,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x82230D30;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82230D38;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82230d58
	if (ctx.cr0.eq) goto loc_82230D58;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82230D50;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82230d5c
	goto loc_82230D5C;
loc_82230D58:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82230D5C:
	// stw r4,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x82230D68;
	sub_821D3988(ctx, base);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// bl 0x821a1ff8
	ctx.lr = 0x82230D74;
	sub_821A1FF8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x821e00d0
	ctx.lr = 0x82230D80;
	sub_821E00D0(ctx, base);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfs f13,160(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// li r3,12
	ctx.r3.s64 = 12;
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// std r5,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r5,24(r6)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// ld r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// std r7,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// std r5,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r5.u64);
	// lwz r29,144(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 144);
	// bl 0x822f6280
	ctx.lr = 0x82230E08;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-29688
	r28.s64 = ctx.r11.s64 + -29688;
	// beq 0x82230e38
	if (ctx.cr0.eq) goto loc_82230E38;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,7144
	ctx.r9.s64 = ctx.r9.s64 + 7144;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x82230e3c
	goto loc_82230E3C;
loc_82230E38:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82230E3C:
	// stw r11,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r11.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r29,148(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x822f6280
	ctx.lr = 0x82230E4C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82230e74
	if (ctx.cr0.eq) goto loc_82230E74;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,7144
	ctx.r9.s64 = ctx.r9.s64 + 7144;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x82230e78
	goto loc_82230E78;
loc_82230E74:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82230E78:
	// stw r11,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r11.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82230E84;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82230eb4
	if (ctx.cr0.eq) goto loc_82230EB4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-20412
	ctx.r4.s64 = ctx.r11.s64 + -20412;
	// bl 0x82120600
	ctx.lr = 0x82230E9C;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r17
	r30.u64 = r17.u64;
	// bl 0x82196ba8
	ctx.lr = 0x82230EB0;
	sub_82196BA8(ctx, base);
	// b 0x82230eb8
	goto loc_82230EB8;
loc_82230EB4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82230EB8:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82230ECC;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82230ee8
	if (ctx.cr0.eq) goto loc_82230EE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82230EE8;
	sub_82120AC0(ctx, base);
loc_82230EE8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82230EF0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82230f20
	if (ctx.cr0.eq) goto loc_82230F20;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-20928
	ctx.r4.s64 = ctx.r11.s64 + -20928;
	// bl 0x82120600
	ctx.lr = 0x82230F08;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x82230F1C;
	sub_82191600(ctx, base);
	// b 0x82230f24
	goto loc_82230F24;
loc_82230F20:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82230F24:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82230F34;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82230f50
	if (ctx.cr0.eq) goto loc_82230F50;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82230F50;
	sub_82120AC0(ctx, base);
loc_82230F50:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82230F58;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82230f88
	if (ctx.cr0.eq) goto loc_82230F88;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-20400
	ctx.r4.s64 = ctx.r11.s64 + -20400;
	// bl 0x82120600
	ctx.lr = 0x82230F70;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82191600
	ctx.lr = 0x82230F84;
	sub_82191600(ctx, base);
	// b 0x82230f8c
	goto loc_82230F8C;
loc_82230F88:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82230F8C:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82230F9C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82230fb8
	if (ctx.cr0.eq) goto loc_82230FB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x82230FB8;
	sub_82120AC0(ctx, base);
loc_82230FB8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82230FC0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82230ff0
	if (ctx.cr0.eq) goto loc_82230FF0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-20388
	ctx.r4.s64 = ctx.r11.s64 + -20388;
	// bl 0x82120600
	ctx.lr = 0x82230FD8;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82191600
	ctx.lr = 0x82230FEC;
	sub_82191600(ctx, base);
	// b 0x82230ff4
	goto loc_82230FF4;
loc_82230FF0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82230FF4:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82231004;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231020
	if (ctx.cr0.eq) goto loc_82231020;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x82231020;
	sub_82120AC0(ctx, base);
loc_82231020:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82231028;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82231058
	if (ctx.cr0.eq) goto loc_82231058;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,-20948
	ctx.r4.s64 = ctx.r11.s64 + -20948;
	// bl 0x82120600
	ctx.lr = 0x82231040;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82191600
	ctx.lr = 0x82231054;
	sub_82191600(ctx, base);
	// b 0x8223105c
	goto loc_8223105C;
loc_82231058:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8223105C:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8223106C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231088
	if (ctx.cr0.eq) goto loc_82231088;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x82231088;
	sub_82120AC0(ctx, base);
loc_82231088:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82231090;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822310c0
	if (ctx.cr0.eq) goto loc_822310C0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-20380
	ctx.r4.s64 = ctx.r11.s64 + -20380;
	// bl 0x82120600
	ctx.lr = 0x822310A8;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x822310BC;
	sub_82196BA8(ctx, base);
	// b 0x822310c4
	goto loc_822310C4;
loc_822310C0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_822310C4:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822310D4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822310f0
	if (ctx.cr0.eq) goto loc_822310F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x822310F0;
	sub_82120AC0(ctx, base);
loc_822310F0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822310F8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82231128
	if (ctx.cr0.eq) goto loc_82231128;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-20360
	ctx.r4.s64 = ctx.r11.s64 + -20360;
	// bl 0x82120600
	ctx.lr = 0x82231110;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82196ba8
	ctx.lr = 0x82231124;
	sub_82196BA8(ctx, base);
	// b 0x8223112c
	goto loc_8223112C;
loc_82231128:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8223112C:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8223113C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231158
	if (ctx.cr0.eq) goto loc_82231158;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x82231158;
	sub_82120AC0(ctx, base);
loc_82231158:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82231160;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82231190
	if (ctx.cr0.eq) goto loc_82231190;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-20340
	ctx.r4.s64 = ctx.r11.s64 + -20340;
	// bl 0x82120600
	ctx.lr = 0x82231178;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x82196ba8
	ctx.lr = 0x8223118C;
	sub_82196BA8(ctx, base);
	// b 0x82231194
	goto loc_82231194;
loc_82231190:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82231194:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822311A4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822311c0
	if (ctx.cr0.eq) goto loc_822311C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r30,r30,0,25,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x822311C0;
	sub_82120AC0(ctx, base);
loc_822311C0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822311C8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822311f8
	if (ctx.cr0.eq) goto loc_822311F8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-20316
	ctx.r4.s64 = ctx.r11.s64 + -20316;
	// bl 0x82120600
	ctx.lr = 0x822311E0;
	sub_82120600(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
	// bl 0x82196ba8
	ctx.lr = 0x822311F4;
	sub_82196BA8(ctx, base);
	// b 0x822311fc
	goto loc_822311FC;
loc_822311F8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_822311FC:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8223120C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82231224
	if (ctx.cr0.eq) goto loc_82231224;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82120ac0
	ctx.lr = 0x82231224;
	sub_82120AC0(ctx, base);
loc_82231224:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x8223122C;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,12244
	r30.s64 = ctx.r11.s64 + 12244;
	// addi r29,r10,-13580
	r29.s64 = ctx.r10.s64 + -13580;
	// beq 0x8223127c
	if (ctx.cr0.eq) goto loc_8223127C;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r10,r10,-20292
	ctx.r10.s64 = ctx.r10.s64 + -20292;
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r17,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r17.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stw r26,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r26.u32);
	// stb r26,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r26.u8);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r26,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r26.u32);
	// b 0x82231280
	goto loc_82231280;
loc_8223127C:
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
loc_82231280:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82145710
	ctx.lr = 0x82231290;
	sub_82145710(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x82231298;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822312d8
	if (ctx.cr0.eq) goto loc_822312D8;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r10,r10,-20284
	ctx.r10.s64 = ctx.r10.s64 + -20284;
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r17,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r17.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stw r26,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r26.u32);
	// stb r26,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r26.u8);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r26,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r26.u32);
	// b 0x822312dc
	goto loc_822312DC;
loc_822312D8:
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
loc_822312DC:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82145710
	ctx.lr = 0x822312EC;
	sub_82145710(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822312F4;
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
	// beq 0x82231380
	if (ctx.cr0.eq) goto loc_82231380;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8216b9a8
	ctx.lr = 0x82231328;
	sub_8216B9A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-20276
	ctx.r4.s64 = ctx.r11.s64 + -20276;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82231340;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8223134C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82231370
	if (ctx.cr0.eq) goto loc_82231370;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,6496
	ctx.r10.s64 = ctx.r10.s64 + 6496;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82231374
	goto loc_82231374;
loc_82231370:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82231374:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x82231384
	goto loc_82231384;
loc_82231380:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82231384:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x8223139C;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822313A4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82231408
	if (ctx.cr0.eq) goto loc_82231408;
	// stw r26,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r26.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-20248
	ctx.r4.s64 = ctx.r11.s64 + -20248;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822313C8;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822313D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822313f8
	if (ctx.cr0.eq) goto loc_822313F8;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,6640
	ctx.r10.s64 = ctx.r10.s64 + 6640;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822313fc
	goto loc_822313FC;
loc_822313F8:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822313FC:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x8223140c
	goto loc_8223140C;
loc_82231408:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8223140C:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82231424;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8223142C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82231490
	if (ctx.cr0.eq) goto loc_82231490;
	// stw r26,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r26.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-20232
	ctx.r4.s64 = ctx.r11.s64 + -20232;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82231450;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8223145C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82231480
	if (ctx.cr0.eq) goto loc_82231480;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,6664
	ctx.r10.s64 = ctx.r10.s64 + 6664;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82231484
	goto loc_82231484;
loc_82231480:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82231484:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x82231494
	goto loc_82231494;
loc_82231490:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82231494:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822314AC;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82270A58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4376
	ctx.r11.s64 = ctx.r11.s64 + -4376;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bl 0x82120ac0
	ctx.lr = 0x82270A90;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x82120ac0
	ctx.lr = 0x82270AA0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82120ac0
	ctx.lr = 0x82270AB0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4412
	ctx.r11.s64 = ctx.r11.s64 + -4412;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82270acc
	if (ctx.cr0.eq) goto loc_82270ACC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82270ACC;
	sub_8269CE98(ctx, base);
loc_82270ACC:
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

DEFINE_REX_FUNC(sub_82274210) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13188
	ctx.r3.s64 = ctx.r11.s64 + -13188;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822743F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822743F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,32779
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32779, ctx.xer);
	// bne cr6,0x82274470
	if (!ctx.cr6.eq) goto loc_82274470;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// addi r30,r11,-608
	r30.s64 = ctx.r11.s64 + -608;
	// bge cr6,0x82274434
	if (!ctx.cr6.lt) goto loc_82274434;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x82274434;
	sub_821231D0(ctx, base);
loc_82274434:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32779
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32779, ctx.xer);
	// beq cr6,0x82274454
	if (ctx.cr6.eq) goto loc_82274454;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x82274454;
	sub_821231D0(ctx, base);
loc_82274454:
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,936(r29)
	REX_STORE_U8(r29.u32 + 936, ctx.r11.u8);
	// b 0x8227447c
	goto loc_8227447C;
loc_82274470:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8224e0e0
	ctx.lr = 0x8227447C;
	sub_8224E0E0(ctx, base);
loc_8227447C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82278CA8) {
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
	ctx.lr = 0x82278CD0;
	sub_821B2D80(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82278d34
	if (!ctx.cr6.eq) goto loc_82278D34;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82278cf4
	if (!ctx.cr6.eq) goto loc_82278CF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,184(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 184);
	// bl 0x8227c7e8
	ctx.lr = 0x82278CF0;
	sub_8227C7E8(ctx, base);
	// b 0x82278d34
	goto loc_82278D34;
loc_82278CF4:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82278d34
	if (!ctx.cr6.eq) goto loc_82278D34;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82278d24
	if (!ctx.cr6.eq) goto loc_82278D24;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stw r10,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r10.u32);
	// lfd f0,136(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 136);
	// stfd f0,160(r31)
	REX_STORE_U64(r31.u32 + 160, ctx.f0.u64);
	// b 0x82278d34
	goto loc_82278D34;
loc_82278D24:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82278d34
	if (!ctx.cr6.eq) goto loc_82278D34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227ce80
	ctx.lr = 0x82278D34;
	sub_8227CE80(ctx, base);
loc_82278D34:
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

DEFINE_REX_FUNC(sub_8227D810) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8227D818;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x8227d84c
	if (!ctx.cr6.eq) goto loc_8227D84C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// addi r3,r10,-364
	ctx.r3.s64 = ctx.r10.s64 + -364;
	// li r5,482
	ctx.r5.s64 = 482;
	// bl 0x821231d0
	ctx.lr = 0x8227D84C;
	sub_821231D0(ctx, base);
loc_8227D84C:
	// li r4,-32753
	ctx.r4.s64 = -32753;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217f4b0
	ctx.lr = 0x8227D858;
	sub_8217F4B0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r29,90(r1)
	REX_STORE_U32(ctx.r1.u32 + 90, r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r12,82
	ctx.r12.s64 = 82;
	// stdx r11,r1,r12
	REX_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227D898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822811D0) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2c90
	ctx.lr = 0x822811E8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,328(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,320(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f10,324(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f10.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r31,468(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f31,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f9,f0,f31
	ctx.f9.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823fbe48
	ctx.lr = 0x82281254;
	sub_823FBE48(ctx, base);
	// lfs f13,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,272
	ctx.r11.s64 = r31.s64 + 272;
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f3,272(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,296(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 296);
	ctx.f7.f64 = double(temp.f32);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lfs f11,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// lfs f10,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f10.f64 = double(temp.f32);
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfs f9,288(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f4,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f24,f4,f9
	f24.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmuls f29,f6,f12
	f29.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f27,f6,f13
	f27.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f23,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f23.f64 = double(temp.f32);
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fmsubs f26,f9,f10,f0
	f26.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f0.f64)));
	// fmuls f25,f4,f11
	f25.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmsubs f9,f6,f9,f1
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, -ctx.f1.f64)));
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// fmuls f22,f3,f10
	f22.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// fmsubs f5,f13,f11,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f5.f64)));
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f8,f12,f7,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, -ctx.f8.f64)));
	// fmsubs f13,f3,f13,f24
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, -f24.f64)));
	// fmsubs f11,f3,f11,f29
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, -f29.f64)));
	// fmsubs f7,f4,f7,f27
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, -f27.f64)));
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// fmuls f6,f6,f26
	ctx.f6.f64 = double(float(ctx.f6.f64 * f26.f64));
	// fmsubs f10,f2,f10,f25
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, -f25.f64)));
	// fmr f30,f3
	f30.f64 = ctx.f3.f64;
	// fmsubs f12,f4,f12,f22
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, -f22.f64)));
	// fmadds f6,f4,f8,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, ctx.f6.f64)));
	// fmadds f6,f3,f5,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f5.f64, ctx.f6.f64)));
	// fdivs f6,f31,f6
	ctx.f6.f64 = double(float(f31.f64 / ctx.f6.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f6,f26,f6
	ctx.f6.f64 = double(float(f26.f64 * ctx.f6.f64));
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f9,f0,f8
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f0,f7,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f13.f64)));
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f0,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f11.f64)));
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f0,f5,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, ctx.f9.f64)));
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f4,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f8.f64)));
	// fmadds f12,f13,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f0,f13,f6,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f0.f64)));
	// fadds f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fadds f0,f23,f0
	ctx.f0.f64 = double(float(f23.f64 + ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cdc
	ctx.lr = 0x82281378;
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

DEFINE_REX_FUNC(sub_8228DC00) {
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
	ctx.lr = 0x8228DC08;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228dc7c
	if (!ctx.cr6.gt) goto loc_8228DC7C;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
loc_8228DC30:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8228DC3C;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ld r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8228dc64
	if (ctx.cr6.eq) goto loc_8228DC64;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228dc30
	if (ctx.cr6.lt) goto loc_8228DC30;
	// b 0x8228dc7c
	goto loc_8228DC7C;
loc_8228DC64:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8228DC70;
	sub_8228CA78(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8228dcf8
	if (!ctx.cr6.eq) goto loc_8228DCF8;
loc_8228DC7C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x8228DC84;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228dca4
	if (ctx.cr0.eq) goto loc_8228DCA4;
	// stw r28,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r28,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, r28.u64);
	// stw r28,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// std r28,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, r28.u64);
	// b 0x8228dca8
	goto loc_8228DCA8;
loc_8228DCA4:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8228DCA8:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228dcbc
	if (!ctx.cr6.eq) goto loc_8228DCBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8228dd08
	goto loc_8228DD08;
loc_8228DCBC:
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 0);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x82264638
	ctx.lr = 0x8228DCD4;
	sub_82264638(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8228dcf8
	if (!ctx.cr6.eq) goto loc_8228DCF8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,3884
	ctx.r4.s64 = ctx.r11.s64 + 3884;
	// addi r3,r10,3924
	ctx.r3.s64 = ctx.r10.s64 + 3924;
	// li r5,206
	ctx.r5.s64 = 206;
	// bl 0x821231d0
	ctx.lr = 0x8228DCF8;
	sub_821231D0(ctx, base);
loc_8228DCF8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228dec0
	ctx.lr = 0x8228DD04;
	sub_8228DEC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8228DD08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822957B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,88(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,68(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lfs f9,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lfs f8,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f7,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lfs f6,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f5,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lfs f4,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// fmadds f13,f0,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f13.f64)));
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f12,f9,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f12.f64)));
	// fmadds f0,f8,f10,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// fmadds f13,f6,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f13.f64)));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f13,f5,f7,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f12.f64)));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f0,f4,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, ctx.f0.f64)));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82295880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A1CF8) {
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
	ctx.lr = 0x822A1D00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822a1d18
	if (!ctx.cr6.eq) goto loc_822A1D18;
loc_822A1D10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822a1e64
	goto loc_822A1E64;
loc_822A1D18:
	// lwz r11,180(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 180);
	// lbz r10,72(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 72);
	// lwz r29,68(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 68);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bne 0x822a1d3c
	if (!ctx.cr0.eq) goto loc_822A1D3C;
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
loc_822A1D3C:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x822a1d10
	if (ctx.cr6.gt) goto loc_822A1D10;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r26,r28,192
	r26.s64 = r28.s64 + 192;
	// bl 0x822a1e70
	ctx.lr = 0x822A1D58;
	sub_822A1E70(ctx, base);
	// lbz r11,72(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 72);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r25,0
	r25.s64 = 0;
	// addi r30,r11,112
	r30.s64 = ctx.r11.s64 + 112;
	// addi r27,r10,-19400
	r27.s64 = ctx.r10.s64 + -19400;
	// beq 0x822a1dbc
	if (ctx.cr0.eq) goto loc_822A1DBC;
	// lwz r11,148(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 148);
	// addi r31,r28,136
	r31.s64 = r28.s64 + 136;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a1db4
	if (ctx.cr6.eq) goto loc_822A1DB4;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a1db0
	if (ctx.cr0.eq) goto loc_822A1DB0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A1DB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1DB0:
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
loc_822A1DB4:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x822a1dfc
	goto loc_822A1DFC;
loc_822A1DBC:
	// lwz r11,108(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 108);
	// addi r31,r28,96
	r31.s64 = r28.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a1df8
	if (ctx.cr6.eq) goto loc_822A1DF8;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a1df4
	if (ctx.cr0.eq) goto loc_822A1DF4;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A1DF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1DF4:
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
loc_822A1DF8:
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
loc_822A1DFC:
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r25,16(r31)
	REX_STORE_U8(r31.u32 + 16, r25.u8);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r31,r28,160
	r31.s64 = r28.s64 + 160;
	// lwz r11,172(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,180(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 180);
	// beq cr6,0x822a1e50
	if (ctx.cr6.eq) goto loc_822A1E50;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822a1e4c
	if (ctx.cr0.eq) goto loc_822A1E4C;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822A1E4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A1E4C:
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
loc_822A1E50:
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stb r25,16(r31)
	REX_STORE_U8(r31.u32 + 16, r25.u8);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_822A1E64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822ABA08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822ABA10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822aba6c
	if (!ctx.cr6.gt) goto loc_822ABA6C;
	// li r31,0
	r31.s64 = 0;
loc_822ABA30:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822aba58
	if (ctx.cr6.eq) goto loc_822ABA58;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ABA58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ABA58:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822aba30
	if (ctx.cr6.lt) goto loc_822ABA30;
loc_822ABA6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822B0370) {
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
	// stw r4,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,6968
	ctx.r10.s64 = ctx.r10.s64 + 6968;
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B03CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b03f4
	if (ctx.cr0.eq) goto loc_822B03F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B03F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822b03fc
	goto loc_822B03FC;
loc_822B03F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b0630
	ctx.lr = 0x822B03FC;
	sub_822B0630(ctx, base);
loc_822B03FC:
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

DEFINE_REX_FUNC(sub_822B8408) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a2ca4
	ctx.lr = 0x822B8418;
	// lfs f13,596(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,592
	ctx.r11.s64 = ctx.r3.s64 + 592;
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r4,576
	ctx.r9.s64 = ctx.r4.s64 + 576;
	// lfs f12,600(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 600);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r4,592
	ctx.r8.s64 = ctx.r4.s64 + 592;
	// lfs f10,584(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 584);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r3,576
	ctx.r10.s64 = ctx.r3.s64 + 576;
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f9,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,576(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,600(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 600);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,580(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f3,580(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 580);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,584(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 584);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,596(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 596);
	f31.f64 = double(temp.f32);
	// fmsubs f10,f8,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, -ctx.f10.f64)));
	// lfs f13,84(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,116(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f8,f12,f13,f8
	ctx.f8.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f8.f64)));
	// lfs f30,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f29,576(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 576);
	f29.f64 = double(temp.f32);
	// fmadds f0,f9,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f0.f64)));
	// lfs f7,92(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f28,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	f28.f64 = double(temp.f32);
	// lfs f27,592(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 592);
	f27.f64 = double(temp.f32);
	// lfs f12,124(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f10,f5,f3,f10
	ctx.f10.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f3.f64, -ctx.f10.f64)));
	// fmadds f0,f5,f4,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f0.f64)));
	// fmadds f10,f2,f31,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, f31.f64, ctx.f10.f64)));
	// fmadds f0,f11,f1,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f0.f64)));
	// fnmsubs f11,f9,f29,f10
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, f29.f64, -ctx.f10.f64)));
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
	// bge cr6,0x822b84e8
	if (!ctx.cr6.lt) goto loc_822B84E8;
	// stfs f12,84(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 84, temp.u32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// b 0x822b84ec
	goto loc_822B84EC;
loc_822B84E8:
	// stfs f11,84(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 84, temp.u32);
loc_822B84EC:
	// lfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lfs f13,624(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 624);
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
	// beq cr6,0x822b85a8
	if (ctx.cr6.eq) goto loc_822B85A8;
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
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
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
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f11,f6,f8
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_822B85A8:
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
	// beq cr6,0x822b8668
	if (ctx.cr6.eq) goto loc_822B8668;
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
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
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
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_822B8668:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cf0
	ctx.lr = 0x822B8670;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9A30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822C9A38;
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
	// bne cr6,0x822c9a5c
	if (!ctx.cr6.eq) goto loc_822C9A5C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822c9a5c
	if (!ctx.cr6.eq) goto loc_822C9A5C;
	// li r30,64
	r30.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
loc_822C9A5C:
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c9a6c
	if (ctx.cr0.eq) goto loc_822C9A6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822c9a7c
	goto loc_822C9A7C;
loc_822C9A6C:
	// lwz r11,10920(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10920);
	// rlwimi r6,r30,8,17,23
	ctx.r6.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0x7F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF80FF);
	// rlwimi r11,r6,4,21,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x7F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF80F);
	// rlwimi r11,r6,4,13,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x7F000) | (ctx.r11.u64 & 0xFFFFFFFFFFF80FFF);
loc_822C9A7C:
	// stw r11,10920(r31)
	REX_STORE_U32(r31.u32 + 10920, ctx.r11.u32);
	// lwz r10,12892(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12892);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// and r29,r10,r4
	r29.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822c9aa4
	if (!ctx.cr6.gt) goto loc_822C9AA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C9AA0;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C9AA4:
	// oris r9,r29,49153
	ctx.r9.u64 = r29.u64 | 3221291008;
	// addi r8,r30,1751
	ctx.r8.s64 = r30.s64 + 1751;
	// ori r9,r9,16128
	ctx.r9.u64 = ctx.r9.u64 | 16128;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,14000(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 14000);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r7,13996(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 13996);
	// clrlwi r7,r7,8
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFFF;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r10,14004(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 14004);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,15032(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15032);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,15028(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15028);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x822c8bf0
	ctx.lr = 0x822C9B10;
	sub_822C8BF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822D0CE8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x822D0CF0;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822d0d2c
	if (!ctx.cr6.eq) goto loc_822D0D2C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,19504
	ctx.r11.s64 = ctx.r11.s64 + 19504;
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822D0D2C:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d0d40
	if (!ctx.cr6.eq) goto loc_822D0D40;
	// rlwinm. r27,r27,0,28,23
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x822d1388
	if (ctx.cr0.eq) goto loc_822D1388;
loc_822D0D40:
	// lfs f0,12824(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12824);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f13,12828(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12828);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f12,12832(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12832);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f11,12836(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12836);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// fctiwz f0,f11
	ctx.f0.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// bgt cr6,0x822d0d94
	if (ctx.cr6.gt) goto loc_822D0D94;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
loc_822D0D94:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// bgt cr6,0x822d0da8
	if (ctx.cr6.gt) goto loc_822D0DA8;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
loc_822D0DA8:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// blt cr6,0x822d0dc0
	if (ctx.cr6.lt) goto loc_822D0DC0;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_822D0DC0:
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// blt cr6,0x822d0dd8
	if (ctx.cr6.lt) goto loc_822D0DD8;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_822D0DD8:
	// lwz r11,12032(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12032);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d0e24
	if (ctx.cr6.eq) goto loc_822D0E24;
	// lwz r11,12852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12852);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822d0df4
	if (ctx.cr6.gt) goto loc_822D0DF4;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_822D0DF4:
	// lwz r11,12856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12856);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x822d0e04
	if (ctx.cr6.gt) goto loc_822D0E04;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_822D0E04:
	// lwz r11,12860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12860);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d0e14
	if (ctx.cr6.lt) goto loc_822D0E14;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_822D0E14:
	// lwz r11,12864(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12864);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d0e24
	if (ctx.cr6.lt) goto loc_822D0E24;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_822D0E24:
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(r26.s32, r24.s32, ctx.xer);
	// ble cr6,0x822d1388
	if (!ctx.cr6.gt) goto loc_822D1388;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(r28.s32, r25.s32, ctx.xer);
	// ble cr6,0x822d1388
	if (!ctx.cr6.gt) goto loc_822D1388;
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x822d0f54
	if (ctx.cr6.eq) goto loc_822D0F54;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d0e60
	if (ctx.cr6.eq) goto loc_822D0E60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// bl 0x822db298
	ctx.lr = 0x822D0E5C;
	sub_822DB298(ctx, base);
	// std r3,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r3.u64);
loc_822D0E60:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822d0e90
	if (ctx.cr6.eq) goto loc_822D0E90;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D0E84;
	sub_822DB630(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822D0E90:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822d0ec8
	if (ctx.cr6.eq) goto loc_822D0EC8;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D0EB4;
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
loc_822D0EC8:
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
	// beq cr6,0x822d0f10
	if (ctx.cr6.eq) goto loc_822D0F10;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D0EF8;
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
loc_822D0F10:
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
	// beq cr6,0x822d0f54
	if (ctx.cr6.eq) goto loc_822D0F54;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D0F3C;
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
loc_822D0F54:
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d0fa4
	if (ctx.cr6.eq) goto loc_822D0FA4;
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
	// beq cr6,0x822d0fa4
	if (ctx.cr6.eq) goto loc_822D0FA4;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D0F8C;
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
loc_822D0FA4:
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822d0fdc
	if (ctx.cr6.eq) goto loc_822D0FDC;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x822d0fdc
	if (ctx.cr6.eq) goto loc_822D0FDC;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db630
	ctx.lr = 0x822D0FD0;
	sub_822DB630(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
loc_822D0FDC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d0ff8
	if (!ctx.cr6.gt) goto loc_822D0FF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D0FF4;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D0FF8:
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d1018
	if (ctx.cr0.eq) goto loc_822D1018;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
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
loc_822D1018:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16356
	ctx.r8.s64 = -1071906816;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r6,27
	ctx.r6.s64 = 27;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,108
	ctx.r5.s64 = 108;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r29,r10,12700
	r29.s64 = ctx.r10.s64 + 12700;
	// addi r4,r29,1468
	ctx.r4.s64 = r29.s64 + 1468;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
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
	ctx.lr = 0x822D1064;
	sub_826A1E70(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r30,108
	ctx.r11.s64 = r30.s64 + 108;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d1084
	if (!ctx.cr6.gt) goto loc_822D1084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D1080;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D1084:
	// lbz r10,10943(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d10ac
	if (ctx.cr0.eq) goto loc_822D10AC;
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lbz r10,10943(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,10943(r31)
	REX_STORE_U8(r31.u32 + 10943, ctx.r10.u8);
loc_822D10AC:
	// lis r10,-16374
	ctx.r10.s64 = -1073086464;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,11008
	ctx.r10.u64 = ctx.r10.u64 | 11008;
	// li r8,9
	ctx.r8.s64 = 9;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822D10DC;
	sub_826A1E70(ctx, base);
	// addi r11,r30,36
	ctx.r11.s64 = r30.s64 + 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4097
	ctx.r9.s64 = 268500992;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d111c
	if (!ctx.cr6.gt) goto loc_822D111C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D111C;
	sub_822D5B28(ctx, base);
loc_822D111C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// ori r6,r6,8708
	ctx.r6.u64 = ctx.r6.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r29,8978
	r29.s64 = 8978;
	// li r11,8205
	ctx.r11.s64 = 8205;
	// li r20,0
	r20.s64 = 0;
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r21,r30
	r21.u64 = r30.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// clrlwi. r19,r27,28
	r19.u64 = r27.u32 & 0xF;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
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
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
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
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne 0x822d126c
	if (!ctx.cr0.eq) goto loc_822D126C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0770
	ctx.lr = 0x822D1268;
	sub_822D0770(ctx, base);
	// b 0x822d1340
	goto loc_822D1340;
loc_822D126C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d1280
	if (!ctx.cr6.gt) goto loc_822D1280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D1280;
	sub_822D5B28(ctx, base);
loc_822D1280:
	// li r11,8452
	ctx.r11.s64 = 8452;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8706
	ctx.r11.s64 = 8706;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8705
	ctx.r8.s64 = 8705;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r12,1
	ctx.r12.s64 = 1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r31,12616
	r29.s64 = r31.s64 + 12616;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822D12E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1330
	if (ctx.cr0.eq) goto loc_822D1330;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1330
	if (ctx.cr6.eq) goto loc_822D1330;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d0770
	ctx.lr = 0x822D132C;
	sub_822D0770(ctx, base);
	// rlwinm r27,r27,0,28,23
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
loc_822D1330:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x822d12e4
	if (ctx.cr6.lt) goto loc_822D12E4;
loc_822D1340:
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
	ctx.lr = 0x822D1370;
	sub_822C1C90(ctx, base);
	// lbz r11,10941(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10941);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,10941(r31)
	REX_STORE_U8(r31.u32 + 10941, ctx.r11.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822D1388:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_822FF560) {
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
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// beq cr6,0x822ff5a4
	if (ctx.cr6.eq) goto loc_822FF5A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x822ff5a4
	if (ctx.cr6.lt) goto loc_822FF5A4;
	// lfs f1,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// bl 0x822ff510
	ctx.lr = 0x822FF598;
	sub_822FF510(ctx, base);
	// stb r3,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r3.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822ff5a8
	goto loc_822FF5A8;
loc_822FF5A4:
	// li r3,37
	ctx.r3.s64 = 37;
loc_822FF5A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823001E8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8230020c
	if (ctx.cr6.eq) goto loc_8230020C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
loc_8230020C:
	// addi r6,r7,36
	ctx.r6.s64 = ctx.r7.s64 + 36;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822ff648
	ctx.lr = 0x82300218;
	sub_822FF648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82300244
	if (ctx.cr0.lt) goto loc_82300244;
	// lwz r11,20(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// beq cr6,0x82300244
	if (ctx.cr6.eq) goto loc_82300244;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
loc_82300244:
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

DEFINE_REX_FUNC(sub_82302D20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82302D28;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82302d4c
	if (!ctx.cr6.eq) goto loc_82302D4C;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82302da4
	goto loc_82302DA4;
loc_82302D4C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82302da0
	if (ctx.cr6.eq) goto loc_82302DA0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82302da0
	if (ctx.cr6.eq) goto loc_82302DA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4120
	ctx.r4.s64 = ctx.r11.s64 + 4120;
	// bl 0x82331668
	ctx.lr = 0x82302D6C;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82302d80
	if (!ctx.cr0.eq) goto loc_82302D80;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82302da4
	goto loc_82302DA4;
loc_82302D80:
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82302D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82302da4
	goto loc_82302DA4;
loc_82302DA0:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82302DA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823089C0) {
	REX_FUNC_PROLOGUE();
	// lhz r10,34(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// sth r10,34(r3)
	REX_STORE_U16(ctx.r3.u32 + 34, ctx.r10.u16);
	// b 0x823089e4
	goto loc_823089E4;
loc_823089D4:
	// lhz r10,34(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// sth r10,34(r11)
	REX_STORE_U16(ctx.r11.u32 + 34, ctx.r10.u16);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
loc_823089E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823089d4
	if (!ctx.cr6.eq) goto loc_823089D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230A640) {
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
	ctx.lr = 0x8230A648;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r28,r29
	r28.u64 = r29.u64;
	// mr r25,r29
	r25.u64 = r29.u64;
	// beq cr6,0x8230a8d0
	if (ctx.cr6.eq) goto loc_8230A8D0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230a8d0
	if (ctx.cr6.eq) goto loc_8230A8D0;
	// lwz r11,96(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// rlwinm r10,r6,19,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 19) & 0x400000;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,96(r4)
	REX_STORE_U32(ctx.r4.u32 + 96, ctx.r11.u32);
	// bl 0x822f7a88
	ctx.lr = 0x8230A694;
	sub_822F7A88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq 0x8230a6c0
	if (ctx.cr0.eq) goto loc_8230A6C0;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8230bb70
	ctx.lr = 0x8230A6B0;
	sub_8230BB70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a8d4
	if (!ctx.cr0.eq) goto loc_8230A8D4;
	// li r25,1
	r25.s64 = 1;
	// b 0x8230a77c
	goto loc_8230A77C;
loc_8230A6C0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82308f70
	ctx.lr = 0x8230A6C8;
	sub_82308F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a8d4
	if (!ctx.cr0.eq) goto loc_8230A8D4;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8230a754
	if (!ctx.cr6.gt) goto loc_8230A754;
loc_8230A6E4:
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subfc r7,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// subfe r9,r9,r8
	temp.u8 = (~ctx.r9.u32 + ctx.r8.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r11
	r28.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230A724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230a734
	if (ctx.cr0.eq) goto loc_8230A734;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bne cr6,0x8230a8d4
	if (!ctx.cr6.eq) goto loc_8230A8D4;
loc_8230A734:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// beq 0x8230a794
	if (ctx.cr0.eq) goto loc_8230A794;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230a6e4
	if (ctx.cr6.lt) goto loc_8230A6E4;
loc_8230A754:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8230A758:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230a780
	if (!ctx.cr6.eq) goto loc_8230A780;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82309058
	ctx.lr = 0x8230A774;
	sub_82309058(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a8d4
	if (!ctx.cr0.eq) goto loc_8230A8D4;
loc_8230A77C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8230A780:
	// clrlwi. r29,r25,24
	r29.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8230a7a4
	if (ctx.cr0.eq) goto loc_8230A7A4;
	// lhz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// b 0x8230a7b0
	goto loc_8230A7B0;
loc_8230A794:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8230a758
	goto loc_8230A758;
loc_8230A7A4:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8230A7B0:
	// clrlwi. r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230a7dc
	if (ctx.cr0.eq) goto loc_8230A7DC;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a7dc
	if (ctx.cr6.eq) goto loc_8230A7DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822f7c10
	ctx.lr = 0x8230A7D4;
	sub_822F7C10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a8d4
	if (!ctx.cr0.eq) goto loc_8230A8D4;
loc_8230A7DC:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// beq cr6,0x8230a7f4
	if (ctx.cr6.eq) goto loc_8230A7F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8230a814
	if (ctx.cr6.eq) goto loc_8230A814;
loc_8230A7F4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230A80C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a8d4
	if (!ctx.cr0.eq) goto loc_8230A8D4;
loc_8230A814:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8230a838
	if (ctx.cr6.eq) goto loc_8230A838;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8230bd30
	ctx.lr = 0x8230A830;
	sub_8230BD30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a8d4
	if (!ctx.cr0.eq) goto loc_8230A8D4;
loc_8230A838:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230a884
	if (ctx.cr0.eq) goto loc_8230A884;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,96(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 96);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230a888
	if (!ctx.cr0.eq) goto loc_8230A888;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822f77d8
	ctx.lr = 0x8230A85C;
	sub_822F77D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a8d4
	if (!ctx.cr0.eq) goto loc_8230A8D4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fc768
	ctx.lr = 0x8230A87C;
	sub_822FC768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a8d4
	if (!ctx.cr0.eq) goto loc_8230A8D4;
loc_8230A884:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8230A888:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82309aa8
	ctx.lr = 0x8230A898;
	sub_82309AA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a8d4
	if (!ctx.cr0.eq) goto loc_8230A8D4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822fc328
	ctx.lr = 0x8230A8A8;
	sub_822FC328(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a8d4
	if (!ctx.cr0.eq) goto loc_8230A8D4;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r3,-10820(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// bl 0x82303ea8
	ctx.lr = 0x8230A8CC;
	sub_82303EA8(ctx, base);
	// b 0x8230a8d4
	goto loc_8230A8D4;
loc_8230A8D0:
	// li r3,37
	ctx.r3.s64 = 37;
loc_8230A8D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8231D158) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8231D160;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,6740
	r30.s64 = ctx.r11.s64 + 6740;
	// beq cr6,0x8231d198
	if (ctx.cr6.eq) goto loc_8231D198;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,59
	ctx.r6.s64 = 59;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231D198;
	sub_82330D00(ctx, base);
loc_8231D198:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231D1E0;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82320E30) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82312008
	sub_82312008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82321C10) {
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
	ctx.lr = 0x82321C18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r11,r4
	r28.u64 = ctx.r11.u64 & ctx.r4.u64;
	// beq 0x82321c88
	if (ctx.cr0.eq) goto loc_82321C88;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r3,24
	r30.s64 = ctx.r3.s64 + 24;
	// b 0x82321c70
	goto loc_82321C70;
loc_82321C4C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82321c5c
	if (!ctx.cr6.eq) goto loc_82321C5C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82321C5C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823003b0
	ctx.lr = 0x82321C64;
	sub_823003B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82321c8c
	if (!ctx.cr0.eq) goto loc_82321C8C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82321C70:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82321c4c
	if (!ctx.cr6.eq) goto loc_82321C4C;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x822fcdd0
	ctx.lr = 0x82321C80;
	sub_822FCDD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82321c8c
	if (!ctx.cr0.eq) goto loc_82321C8C;
loc_82321C88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82321C8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82328850) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,20(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82328898
	if (ctx.cr6.eq) goto loc_82328898;
	// bl 0x823317f0
	ctx.lr = 0x82328884;
	sub_823317F0(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82328898
	if (!ctx.cr0.eq) goto loc_82328898;
loc_82328890:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x823288d4
	goto loc_823288D4;
loc_82328898:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne cr6,0x823288c8
	if (!ctx.cr6.eq) goto loc_823288C8;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823288d0
	if (ctx.cr6.eq) goto loc_823288D0;
	// bl 0x823317f0
	ctx.lr = 0x823288B8;
	sub_823317F0(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823288d0
	if (!ctx.cr0.eq) goto loc_823288D0;
	// b 0x82328890
	goto loc_82328890;
loc_823288C8:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_823288D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823288D4:
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

DEFINE_REX_FUNC(sub_8232C2D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,8232
	ctx.r7.s64 = ctx.r9.s64 + 8232;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lfs f0,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
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
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232F0F8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232f108
	if (ctx.cr6.eq) goto loc_8232F108;
	// lwz r11,1188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8232F108:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8232f118
	if (ctx.cr6.eq) goto loc_8232F118;
	// lwz r11,1184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1184);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8232F118:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8232f128
	if (ctx.cr6.eq) goto loc_8232F128;
	// lwz r11,1200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1200);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8232F128:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8232f138
	if (ctx.cr6.eq) goto loc_8232F138;
	// lwz r11,1196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1196);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_8232F138:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232f148
	if (ctx.cr6.eq) goto loc_8232F148;
	// lwz r11,21948(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21948);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_8232F148:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8232f1ec
	if (ctx.cr6.eq) goto loc_8232F1EC;
	// lwz r11,1184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1184);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8232f1ec
	if (ctx.cr6.gt) goto loc_8232F1EC;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3724
	ctx.r12.s64 = ctx.r12.s64 + -3724;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8232F1E4;
	case 1:
		goto loc_8232F1A4;
	case 2:
		goto loc_8232F1B4;
	case 3:
		goto loc_8232F1C4;
	case 4:
		goto loc_8232F1D4;
	case 5:
		goto loc_8232F1D4;
	case 6:
		goto loc_8232F1E4;
	case 7:
		goto loc_8232F1E4;
	case 8:
		goto loc_8232F1E4;
	case 9:
		goto loc_8232F1E4;
	case 10:
		goto loc_8232F1E4;
	case 11:
		goto loc_8232F1E4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8232F1A4:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8232F1B4:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8232F1C4:
	// li r11,24
	ctx.r11.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8232F1D4:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8232F1E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_8232F1EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82336570) {
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
	ctx.lr = 0x82336578;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21364(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21364);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823365a0
	if (!ctx.cr6.eq) goto loc_823365A0;
	// li r3,81
	ctx.r3.s64 = 81;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d04
	return;
loc_823365A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x823365b4
	if (!ctx.cr6.eq) goto loc_823365B4;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d04
	return;
loc_823365B4:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// bne cr6,0x82336610
	if (!ctx.cr6.eq) goto loc_82336610;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x823365D4;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,8972
	ctx.r4.s64 = ctx.r11.s64 + 8972;
	// bl 0x82331480
	ctx.lr = 0x823365E4;
	sub_82331480(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823362b8
	ctx.lr = 0x823365F4;
	sub_823362B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233668c
	if (!ctx.cr6.eq) goto loc_8233668C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,212(r11)
	REX_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d04
	return;
loc_82336610:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,21364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21364);
	// bl 0x823566f8
	ctx.lr = 0x8233661C;
	sub_823566F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233668c
	if (!ctx.cr6.eq) goto loc_8233668C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82336688
	if (!ctx.cr6.gt) goto loc_82336688;
loc_82336634:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,21364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21364);
	// bl 0x823567d8
	ctx.lr = 0x82336648;
	sub_823567D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336678
	if (!ctx.cr6.eq) goto loc_82336678;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,21364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21364);
	// bl 0x82356910
	ctx.lr = 0x82336660;
	sub_82356910(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336678
	if (!ctx.cr6.eq) goto loc_82336678;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,108(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// beq cr6,0x82336694
	if (ctx.cr6.eq) goto loc_82336694;
loc_82336678:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82336634
	if (ctx.cr6.lt) goto loc_82336634;
loc_82336688:
	// li r3,68
	ctx.r3.s64 = 68;
loc_8233668C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d04
	return;
loc_82336694:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,21364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21364);
	// bl 0x82357b40
	ctx.lr = 0x823366A0;
	sub_82357B40(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82342188) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82342190;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823421bc
	if (!ctx.cr6.eq) goto loc_823421BC;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823421BC:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8239dfd8
	ctx.lr = 0x823421CC;
	sub_8239DFD8(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x8239de80
	ctx.lr = 0x823421E4;
	sub_8239DE80(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r5,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r5.u32);
	// beq cr6,0x8234220c
	if (ctx.cr6.eq) goto loc_8234220C;
	// li r6,2
	ctx.r6.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8234220C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234220C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82349548) {
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
	ctx.lr = 0x82349550;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82349580
	if (ctx.cr6.eq) goto loc_82349580;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// bl 0x823314a0
	ctx.lr = 0x82349580;
	sub_823314A0(ctx, base);
loc_82349580:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82349590
	if (ctx.cr6.eq) goto loc_82349590;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82349590:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823495a0
	if (ctx.cr6.eq) goto loc_823495A0;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_823495A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823495b0
	if (ctx.cr6.eq) goto loc_823495B0;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_823495B0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x823495c4
	if (ctx.cr6.eq) goto loc_823495C4;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_823495C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8234C800) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234c974
	if (ctx.cr6.eq) goto loc_8234C974;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8234c974
	if (ctx.cr6.eq) goto loc_8234C974;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8234c974
	if (ctx.cr6.lt) goto loc_8234C974;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,1200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8234c974
	if (!ctx.cr6.lt) goto loc_8234C974;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234c83c
	if (!ctx.cr6.eq) goto loc_8234C83C;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234C83C:
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234c948
	if (ctx.cr6.eq) goto loc_8234C948;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8234c8fc
	if (ctx.cr6.lt) goto loc_8234C8FC;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8234C868:
	// lwz r9,68(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// mullw r9,r7,r4
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r9,68(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// mullw r9,r7,r4
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r9,68(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// mullw r9,r7,r4
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r9,68(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// mullw r9,r7,r4
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8234c868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234C868;
loc_8234C8FC:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8234c96c
	if (!ctx.cr6.lt) goto loc_8234C96C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8234C918:
	// lwz r9,68(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// mullw r9,r7,r4
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r5,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8234c918
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234C918;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8234C948:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8234c96c
	if (!ctx.cr6.gt) goto loc_8234C96C;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234c96c
	if (ctx.cr6.eq) goto loc_8234C96C;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8234C964:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8234c964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234C964;
loc_8234C96C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8234C974:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82355878) {
	REX_FUNC_PROLOGUE();
	// lwz r3,412(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 412);
	// b 0x823d1958
	sub_823D1958(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82355A30) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,436
	ctx.r6.s64 = 436;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x82355A60;
	sub_82331A00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823410f8
	ctx.lr = 0x82355A6C;
	sub_823410F8(ctx, base);
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

DEFINE_REX_FUNC(sub_82357378) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r5,r8,9656
	ctx.r5.s64 = ctx.r8.s64 + 9656;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lis r31,-32203
	r31.s64 = -2110455808;
	// lwz r8,1012(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 1012);
	// addi r7,r6,10336
	ctx.r7.s64 = ctx.r6.s64 + 10336;
	// lis r5,-32203
	ctx.r5.s64 = -2110455808;
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r9,r3,120
	ctx.r9.s64 = ctx.r3.s64 + 120;
	// stw r10,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// addi r6,r4,26128
	ctx.r6.s64 = ctx.r4.s64 + 26128;
	// addi r4,r31,26144
	ctx.r4.s64 = r31.s64 + 26144;
	// stw r9,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// addi r10,r5,26152
	ctx.r10.s64 = ctx.r5.s64 + 26152;
	// stw r9,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r6,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235B008) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235b028
	if (ctx.cr6.eq) goto loc_8235B028;
	// lwz r11,568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,572(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,576(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 576);
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
loc_8235B028:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8235b038
	if (ctx.cr6.eq) goto loc_8235B038;
	// lfs f0,580(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8235B038:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8235b048
	if (ctx.cr6.eq) goto loc_8235B048;
	// lfs f0,584(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8235B048:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235DC98) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// beq cr6,0x8235dce4
	if (ctx.cr6.eq) goto loc_8235DCE4;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x8235dce4
	if (ctx.cr6.eq) goto loc_8235DCE4;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x8235dce4
	if (ctx.cr6.eq) goto loc_8235DCE4;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x8235dce4
	if (ctx.cr6.eq) goto loc_8235DCE4;
loc_8235DCD0:
	// li r3,-103
	ctx.r3.s64 = -103;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235DCE4:
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r5,32000
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32000, ctx.xer);
	// beq cr6,0x8235dd14
	if (ctx.cr6.eq) goto loc_8235DD14;
	// cmplwi cr6,r5,44100
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 44100, ctx.xer);
	// beq cr6,0x8235dd14
	if (ctx.cr6.eq) goto loc_8235DD14;
	// cmplwi cr6,r5,48000
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 48000, ctx.xer);
	// beq cr6,0x8235dd14
	if (ctx.cr6.eq) goto loc_8235DD14;
	// li r3,-102
	ctx.r3.s64 = -102;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235DD14:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x8235dd34
	if (ctx.cr6.eq) goto loc_8235DD34;
	// li r3,-104
	ctx.r3.s64 = -104;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235DD34:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r11,1468
	ctx.r9.u64 = ctx.r11.u64 | 1468;
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic r8,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r8.s64 = ctx.r6.s64 + -1;
	// subfe r11,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8235dd68
	if (!ctx.cr6.eq) goto loc_8235DD68;
	// li r3,-105
	ctx.r3.s64 = -105;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235DD68:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8235ddf4
	if (ctx.cr6.gt) goto loc_8235DDF4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235ddac
	if (ctx.cr6.eq) goto loc_8235DDAC;
	// bdz 0x8235ddd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235DDD0;
	// bdz 0x8235dcd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8235DCD0;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x823b2028
	ctx.lr = 0x8235DD90;
	sub_823B2028(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235DDAC:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x823b1a28
	ctx.lr = 0x8235DDB4;
	sub_823B1A28(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235DDD0:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x823b11f8
	ctx.lr = 0x8235DDD8;
	sub_823B11F8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235DDF4:
	// li r3,-106
	ctx.r3.s64 = -106;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823679F8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82367a08
	if (!ctx.cr6.eq) goto loc_82367A08;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82367A08:
	// b 0x823677d0
	sub_823677D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82369840) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82369850
	if (!ctx.cr6.eq) goto loc_82369850;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82369850:
	// b 0x82367a10
	sub_82367A10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236A768) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236a778
	if (!ctx.cr6.eq) goto loc_8236A778;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A778:
	// b 0x82369a28
	sub_82369A28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236AD68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8236ad90
	if (ctx.cr6.lt) goto loc_8236AD90;
	// beq cr6,0x8236ad88
	if (ctx.cr6.eq) goto loc_8236AD88;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x8236ad94
	if (!ctx.cr6.lt) goto loc_8236AD94;
	// stfs f1,316(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// b 0x8236ad94
	goto loc_8236AD94;
loc_8236AD88:
	// stfs f1,312(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 312, temp.u32);
	// b 0x8236ad94
	goto loc_8236AD94;
loc_8236AD90:
	// stfs f1,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 320, temp.u32);
loc_8236AD94:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8236ade8
	if (ctx.cr6.eq) goto loc_8236ADE8;
	// lwz r10,336(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 336);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,4104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4104);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f12,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fdivs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// stfs f8,324(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 324, temp.u32);
	// blr 
	return;
loc_8236ADE8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,324(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 324, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82370D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82370d88
	if (!ctx.cr6.eq) goto loc_82370D88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82370D88:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x82370da0
	if (ctx.cr6.lt) goto loc_82370DA0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stfs f1,328(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 328, temp.u32);
	// blr 
	return;
loc_82370DA0:
	// lfs f0,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,316(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 316, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// stfs f0,316(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 316, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823738E8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823738f8
	if (!ctx.cr6.eq) goto loc_823738F8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823738F8:
	// b 0x823736d8
	sub_823736D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82374788) {
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
	// lis r31,-32124
	r31.s64 = -2105278464;
	// lwz r11,-7924(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -7924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823747e8
	if (!ctx.cr6.eq) goto loc_823747E8;
	// lis r3,0
	ctx.r3.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r3,r3,44100
	ctx.r3.u64 = ctx.r3.u64 | 44100;
	// bl 0x823bf0d0
	ctx.lr = 0x823747C0;
	sub_823BF0D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,-7924(r31)
	REX_STORE_U32(r31.u32 + -7924, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823747e8
	if (ctx.cr6.eq) goto loc_823747E8;
	// li r3,33
	ctx.r3.s64 = 33;
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
loc_823747E8:
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-7916(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -7916);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-7916(r10)
	REX_STORE_U32(ctx.r10.u32 + -7916, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82377AA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82377AB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82377b60
	if (ctx.cr6.eq) goto loc_82377B60;
	// lwz r10,272(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82377b60
	if (ctx.cr6.eq) goto loc_82377B60;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82377b2c
	if (!ctx.cr6.gt) goto loc_82377B2C;
	// li r31,0
	r31.s64 = 0;
loc_82377AE4:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,272(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 272);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r10,148(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82377B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,276(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 276);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82377ae4
	if (ctx.cr6.lt) goto loc_82377AE4;
loc_82377B2C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82343470
	ctx.lr = 0x82377B34;
	sub_82343470(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,272(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 272);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,18104
	ctx.r5.s64 = ctx.r10.s64 + 18104;
	// li r6,1524
	ctx.r6.s64 = 1524;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82377B58;
	sub_82330D00(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,272(r29)
	REX_STORE_U32(r29.u32 + 272, ctx.r9.u32);
loc_82377B60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82380788) {
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
	ctx.lr = 0x82380790;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823809ec
	if (ctx.cr6.eq) goto loc_823809EC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823809ec
	if (ctx.cr6.eq) goto loc_823809EC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823809ec
	if (ctx.cr6.eq) goto loc_823809EC;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823809ac
	if (ctx.cr6.eq) goto loc_823809AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// lis r17,-32129
	r17.s64 = -2105606144;
	// li r14,1
	r14.s64 = 1;
	// ori r23,r10,65535
	r23.u64 = ctx.r10.u64 | 65535;
	// addi r18,r11,19376
	r18.s64 = ctx.r11.s64 + 19376;
	// ori r24,r9,65528
	r24.u64 = ctx.r9.u64 | 65528;
loc_823807F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82380470
	ctx.lr = 0x82380804;
	sub_82380470(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823809f0
	if (!ctx.cr6.eq) goto loc_823809F0;
	// cmpwi cr6,r15,16384
	ctx.cr6.compare<int32_t>(r15.s32, 16384, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// blt cr6,0x8238081c
	if (ctx.cr6.lt) goto loc_8238081C;
	// li r11,16384
	ctx.r11.s64 = 16384;
loc_8238081C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r27,r19
	r27.u64 = r19.u64;
	// li r30,17
	r30.s64 = 17;
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238097c
	if (ctx.cr6.eq) goto loc_8238097C;
loc_82380840:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82380348
	ctx.lr = 0x82380850;
	sub_82380348(ctx, base);
	// clrlwi r31,r30,24
	r31.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(r31.u32, 7, ctx.xer);
	// bge cr6,0x823808a0
	if (!ctx.cr6.lt) goto loc_823808A0;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r9,r14,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r10.u8 & 0x3F));
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82380910
	if (!ctx.cr6.eq) goto loc_82380910;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82380348
	ctx.lr = 0x82380880;
	sub_82380348(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x82380898
	if (ctx.cr6.lt) goto loc_82380898;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82380898:
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8238096c
	goto loc_8238096C;
loc_823808A0:
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(r31.u32, 17, ctx.xer);
	// bge cr6,0x823808f0
	if (!ctx.cr6.lt) goto loc_823808F0;
	// subfic r10,r31,17
	ctx.xer.ca = r31.u32 <= 17;
	ctx.r10.u64 = static_cast<uint64_t>(17) - r31.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sraw r9,r23,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r23.s32 < 0) & (((r23.s32 >> temp.u32) << temp.u32) != r23.s32);
	ctx.r9.s64 = r23.s32 >> temp.u32;
	// add r8,r9,r24
	ctx.r8.u64 = ctx.r9.u64 + r24.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82380910
	if (!ctx.cr6.gt) goto loc_82380910;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82380910
	if (ctx.cr6.gt) goto loc_82380910;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x82380898
	if (ctx.cr6.lt) goto loc_82380898;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8238096c
	goto loc_8238096C;
loc_823808F0:
	// bne cr6,0x823809b8
	if (!ctx.cr6.eq) goto loc_823809B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82380910
	if (ctx.cr6.eq) goto loc_82380910;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8238096c
	goto loc_8238096C;
loc_82380910:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// bge cr6,0x82380930
	if (!ctx.cr6.lt) goto loc_82380930;
	// subfic r10,r31,16
	ctx.xer.ca = r31.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - r31.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// slw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r11,r7,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r11.s64 = ctx.r7.s32 >> temp.u32;
	// b 0x82380934
	goto loc_82380934;
loc_82380930:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82380934:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// clrlwi r9,r21,24
	ctx.r9.u64 = r21.u32 & 0xFF;
	// extsh r29,r10
	r29.s64 = ctx.r10.s16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r8,r28,r29
	ctx.r8.u64 = r28.u64 + r29.u64;
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// bne cr6,0x82380958
	if (!ctx.cr6.eq) goto loc_82380958;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82380958:
	// clrlwi r11,r27,16
	ctx.r11.u64 = r27.u32 & 0xFFFF;
	// rlwinm r9,r16,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r27,r8,16
	r27.u64 = ctx.r8.u32 & 0xFFFF;
	// sthux r10,r20,r9
	ea = r20.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	r20.u32 = ea;
loc_8238096C:
	// clrlwi r11,r27,16
	ctx.r11.u64 = r27.u32 & 0xFFFF;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// blt cr6,0x82380840
	if (ctx.cr6.lt) goto loc_82380840;
	// lwz r31,268(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
loc_8238097C:
	// lwz r4,15524(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 15524);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823809a4
	if (ctx.cr6.eq) goto loc_823809A4;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823809A0;
	sub_82330D00(ctx, base);
	// stw r19,15524(r26)
	REX_STORE_U32(r26.u32 + 15524, r19.u32);
loc_823809A4:
	// subf. r15,r22,r15
	r15.u64 = r15.u64 - r22.u64;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne 0x823807f8
	if (!ctx.cr0.eq) goto loc_823807F8;
loc_823809AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_823809B8:
	// lwz r4,15524(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 15524);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823809e0
	if (ctx.cr6.eq) goto loc_823809E0;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,264
	ctx.r6.s64 = 264;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823809DC;
	sub_82330D00(ctx, base);
	// stw r19,15524(r26)
	REX_STORE_U32(r26.u32 + 15524, r19.u32);
loc_823809E0:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_823809EC:
	// li r3,37
	ctx.r3.s64 = 37;
loc_823809F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8239BD00) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239bd14
	if (!ctx.cr6.eq) goto loc_8239BD14;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8239BD14:
	// li r10,17
	ctx.r10.s64 = 17;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8239C110) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8239C118;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82343360
	ctx.lr = 0x8239C128;
	sub_82343360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239c170
	if (!ctx.cr6.eq) goto loc_8239C170;
	// lwz r11,172(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 172);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8239c16c
	if (!ctx.cr6.gt) goto loc_8239C16C;
	// addi r30,r29,172
	r30.s64 = r29.s64 + 172;
loc_8239C144:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239C15C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,172(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 172);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8239c144
	if (ctx.cr6.lt) goto loc_8239C144;
loc_8239C16C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239C170:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8239F860) {
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
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239f908
	if (ctx.cr6.eq) goto loc_8239F908;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r10,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239f8c0
	if (!ctx.cr6.eq) goto loc_8239F8C0;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8239f8c0
	if (ctx.cr6.gt) goto loc_8239F8C0;
	// lwz r10,160(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239f8c0
	if (!ctx.cr6.eq) goto loc_8239F8C0;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239f8c4
	if (!ctx.cr6.eq) goto loc_8239F8C4;
loc_8239F8C0:
	// lwz r31,44(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
loc_8239F8C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239eec0
	ctx.lr = 0x8239F8DC;
	sub_8239EEC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239f8ec
	if (ctx.cr6.eq) goto loc_8239F8EC;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8239f918
	if (!ctx.cr6.eq) goto loc_8239F918;
loc_8239F8EC:
	// lwz r3,292(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 292);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8239f908
	if (!ctx.cr6.lt) goto loc_8239F908;
	// subf r5,r31,r11
	ctx.r5.u64 = ctx.r11.u64 - r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823457c0
	ctx.lr = 0x8239F908;
	sub_823457C0(ctx, base);
loc_8239F908:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r10.u32);
loc_8239F918:
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

DEFINE_REX_FUNC(sub_823A31B8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r3,-28
	r31.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823a31d8
	if (!ctx.cr6.eq) goto loc_823A31D8;
	// li r31,0
	r31.s64 = 0;
loc_823A31D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82360a70
	ctx.lr = 0x823A31E0;
	sub_82360A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a3210
	if (!ctx.cr6.eq) goto loc_823A3210;
	// lwz r3,684(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 684);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r9,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 31;
	// li r8,59
	ctx.r8.s64 = 59;
	// and r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_823A3210:
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

DEFINE_REX_FUNC(sub_823A7DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a7db4
	if (!ctx.cr6.lt) goto loc_823A7DB4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7DB4:
	// stfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a7dcc
	if (!ctx.cr6.gt) goto loc_823A7DCC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7DCC:
	// stfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a7de4
	if (!ctx.cr6.lt) goto loc_823A7DE4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7DE4:
	// stfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a7dfc
	if (!ctx.cr6.gt) goto loc_823A7DFC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7DFC:
	// stfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823a7e14
	if (!ctx.cr6.lt) goto loc_823A7E14;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823A7E14:
	// stfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823a7e30
	if (!ctx.cr6.gt) goto loc_823A7E30;
	// stfs f13,20(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// blr 
	return;
loc_823A7E30:
	// stfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823AC2F0) {
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
	ctx.lr = 0x823AC2F8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823ac320
	if (!ctx.cr6.eq) goto loc_823AC320;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
loc_823AC320:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_823AC330:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r10,22464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22464);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ac3a0
	if (ctx.cr6.eq) goto loc_823AC3A0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82348ca0
	ctx.lr = 0x823AC35C;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac4c4
	if (!ctx.cr6.eq) goto loc_823AC4C4;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235ae80
	ctx.lr = 0x823AC384;
	sub_8235AE80(ctx, base);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// bl 0x8235bb20
	ctx.lr = 0x823AC3A0;
	sub_8235BB20(ctx, base);
loc_823AC3A0:
	// addi r29,r29,132
	r29.s64 = r29.s64 + 132;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r29,528
	ctx.cr6.compare<int32_t>(r29.s32, 528, ctx.xer);
	// blt cr6,0x823ac330
	if (ctx.cr6.lt) goto loc_823AC330;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,25000(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 25000);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ac41c
	if (ctx.cr6.eq) goto loc_823AC41C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82348ca0
	ctx.lr = 0x823AC3D8;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac4c4
	if (!ctx.cr6.eq) goto loc_823AC4C4;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,24980
	ctx.r3.s64 = ctx.r11.s64 + 24980;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235ae80
	ctx.lr = 0x823AC400;
	sub_8235AE80(ctx, base);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r11,24980
	ctx.r3.s64 = ctx.r11.s64 + 24980;
	// lwz r5,56(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// bl 0x8235bb20
	ctx.lr = 0x823AC41C;
	sub_8235BB20(ctx, base);
loc_823AC41C:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,25576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823ac434
	if (!ctx.cr6.eq) goto loc_823AC434;
	// li r31,0
	r31.s64 = 0;
loc_823AC434:
	// addi r11,r10,25572
	ctx.r11.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823ac4c0
	if (ctx.cr6.eq) goto loc_823AC4C0;
loc_823AC440:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ac49c
	if (ctx.cr6.eq) goto loc_823AC49C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82348ca0
	ctx.lr = 0x823AC460;
	sub_82348CA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ac4c4
	if (!ctx.cr6.eq) goto loc_823AC4C4;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8235ae80
	ctx.lr = 0x823AC484;
	sub_8235AE80(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235bb20
	ctx.lr = 0x823AC49C;
	sub_8235BB20(ctx, base);
loc_823AC49C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823ac4b0
	if (!ctx.cr6.eq) goto loc_823AC4B0;
	// li r31,0
	r31.s64 = 0;
loc_823AC4B0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,25572
	ctx.r11.s64 = ctx.r11.s64 + 25572;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823ac440
	if (!ctx.cr6.eq) goto loc_823AC440;
loc_823AC4C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC4C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823C15A0) {
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
	// beq cr6,0x823c1620
	if (ctx.cr6.eq) goto loc_823C1620;
	// lis r10,21572
	ctx.r10.s64 = 1413742592;
	// addic. r11,r3,76
	ctx.xer.ca = ctx.r3.u32 > 4294967219;
	ctx.r11.s64 = ctx.r3.s64 + 76;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r9,r10,17228
	ctx.r9.u64 = ctx.r10.u64 | 17228;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r3,5196
	ctx.r10.s64 = ctx.r3.s64 + 5196;
	// addi r9,r3,5388
	ctx.r9.s64 = ctx.r3.s64 + 5388;
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r7,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// beq 0x823c161c
	if (ctx.cr0.eq) goto loc_823C161C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c161c
	if (ctx.cr6.eq) goto loc_823C161C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c161c
	if (ctx.cr6.eq) goto loc_823C161C;
	// lis r11,19523
	ctx.r11.s64 = 1279459328;
	// ori r10,r11,17492
	ctx.r10.u64 = ctx.r11.u64 | 17492;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823C161C:
	// bl 0x823c0830
	ctx.lr = 0x823C1620;
	sub_823C0830(ctx, base);
loc_823C1620:
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

DEFINE_REX_FUNC(sub_823C6F90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	ctx.lr = 0x823C6F98;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c94
	ctx.lr = 0x823C6FA0;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,-30784(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -30784);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f23,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f23.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,17180(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-30788(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -30788);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f9,19412(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 19412);
	ctx.f9.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f0,-30792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30792);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f11,-30796(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -30796);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f3,-30800(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -30800);
	ctx.f3.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f6,-30804(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30804);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f8,-30808(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -30808);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f7,20332(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20332);
	ctx.f7.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f4,-30812(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30812);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,-30816(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -30816);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,3816(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 3816);
	f31.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f5,-30820(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30820);
	ctx.f5.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f2,-30824(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -30824);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f26,19812(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19812);
	f26.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f28,-30828(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30828);
	f28.f64 = double(temp.f32);
	// li r10,6
	ctx.r10.s64 = 6;
	// lfs f30,-30832(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -30832);
	f30.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// lfs f29,-30836(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -30836);
	f29.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f27,8392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8392);
	f27.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f25,-30840(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -30840);
	f25.f64 = double(temp.f32);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// lfs f24,-30844(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -30844);
	f24.f64 = double(temp.f32);
	// stfs f23,144(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r31,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stfs f8,172(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f7,176(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f6,180(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f5,184(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f4,188(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f3,192(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f2,196(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f1,200(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f30,208(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f29,212(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f28,216(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f27,220(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f26,224(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f25,228(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f24,232(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-30848(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -30848);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f13,-30852(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -30852);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f13,240(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// lfs f12,-30856(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30856);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-30860(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -30860);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,244(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f11,248(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
loc_823C7110:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823c7110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C7110;
	// addi r11,r1,94
	ctx.r11.s64 = ctx.r1.s64 + 94;
	// stb r31,91(r1)
	REX_STORE_U8(ctx.r1.u32 + 91, r31.u8);
	// li r10,17
	ctx.r10.s64 = 17;
	// li r9,18
	ctx.r9.s64 = 18;
	// li r6,19
	ctx.r6.s64 = 19;
	// stb r10,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// li r5,20
	ctx.r5.s64 = 20;
	// stb r9,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// lis r4,-32120
	ctx.r4.s64 = -2105016320;
	// stb r6,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r6.u8);
	// lis r3,-32120
	ctx.r3.s64 = -2105016320;
	// stb r5,93(r1)
	REX_STORE_U8(ctx.r1.u32 + 93, ctx.r5.u8);
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// sth r31,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r31.u16);
	// sth r31,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r31.u16);
	// addi r9,r4,-31544
	ctx.r9.s64 = ctx.r4.s64 + -31544;
	// addi r5,r10,-31064
	ctx.r5.s64 = ctx.r10.s64 + -31064;
	// addi r6,r3,-31448
	ctx.r6.s64 = ctx.r3.s64 + -31448;
	// stb r8,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r8.u8);
	// li r11,23
	ctx.r11.s64 = 23;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stb r7,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r7.u8);
	// li r4,21
	ctx.r4.s64 = 21;
	// li r3,22
	ctx.r3.s64 = 22;
	// stb r11,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// li r9,25
	ctx.r9.s64 = 25;
	// stb r10,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r10.u8);
	// li r7,5
	ctx.r7.s64 = 5;
	// stb r8,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r8.u8);
	// li r6,9
	ctx.r6.s64 = 9;
	// stb r4,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r4.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r3,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r3.u8);
	// stb r31,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, r31.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r9,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// mr r30,r31
	r30.u64 = r31.u64;
	// stw r5,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
loc_823C71D0:
	// lwzx r6,r30,r10
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823c7234
	if (!ctx.cr6.gt) goto loc_823C7234;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
loc_823C71E8:
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
loc_823C71F4:
	// lbz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823C7200:
	// lbzx r28,r8,r10
	r28.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823c7200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C7200;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne 0x823c71f4
	if (!ctx.cr0.eq) goto loc_823C71F4;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x823c71e8
	if (!ctx.cr0.eq) goto loc_823C71E8;
loc_823C7234:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r8,r8,9
	ctx.r8.s64 = ctx.r8.s64 + 9;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(r30.s32, 12, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// blt cr6,0x823c71d0
	if (ctx.cr6.lt) goto loc_823C71D0;
	// lis r11,-32121
	ctx.r11.s64 = -2105081856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r11,27080
	r27.s64 = ctx.r11.s64 + 27080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lfs f30,10980(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10980);
	f30.f64 = double(temp.f32);
	// lfd f29,8312(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
loc_823C726C:
	// lfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f31.f64 = double(temp.f32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// li r31,3
	r31.s64 = 3;
loc_823C7278:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * f30.f64));
	// bl 0x8269f778
	ctx.lr = 0x823C7298;
	sub_8269F778(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r31,-60
	ctx.cr6.compare<int32_t>(r31.s32, -60, ctx.xer);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bgt cr6,0x823c7278
	if (ctx.cr6.gt) goto loc_823C7278;
	// addi r29,r29,256
	r29.s64 = r29.s64 + 256;
	// stfs f23,0(r30)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r11,r27,6912
	ctx.r11.s64 = r27.s64 + 6912;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823c726c
	if (ctx.cr6.lt) goto loc_823C726C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ce0
	ctx.lr = 0x823C72DC;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823D7CB0) {
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
	ctx.lr = 0x823D7CB8;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2ca0
	ctx.lr = 0x823D7CC0;
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// srawi r27,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r27.s64 = ctx.r11.s32 >> 1;
	// srawi r26,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r26.s64 = ctx.r11.s32 >> 2;
	// rlwinm r25,r27,2,0,29
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r10,r25
	ctx.r10.s64 = static_cast<int64_t>(-r25.u64);
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823D7CEC;
	sub_826A2D14(ctx, base);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// lwz r9,0(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// srawi r29,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	r29.s64 = ctx.r7.s32 >> 2;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r5,r8,-4
	ctx.r5.s64 = ctx.r8.s64 + -4;
	// addi r22,r1,80
	r22.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x823d7e38
	if (ctx.cr6.lt) goto loc_823D7E38;
	// addi r8,r29,-4
	ctx.r8.s64 = r29.s64 + -4;
	// addi r3,r27,2
	ctx.r3.s64 = r27.s64 + 2;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r30,r3,r10
	r30.u64 = ctx.r10.u64 - ctx.r3.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D7D60:
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,-8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f7,-8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfs f2,-16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lfs f0,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f8,-24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f8,f2
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmadds f4,f13,f10,f9
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f9.f64)));
	// lfsu f0,32(r3)
	ea = 32 + ctx.r3.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// lfsu f13,-32(r30)
	ea = -32 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	r30.u32 = ea;
	// fmuls f2,f0,f7
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f9,f13,f12,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f6.f64)));
	// lfs f10,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r5,-32
	ctx.r5.s64 = ctx.r5.s64 + -32;
	// lfs f6,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f3.f64)));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmsubs f4,f6,f10,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, -ctx.f1.f64)));
	// lfs f3,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// stfsu f9,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f13,f1,f3,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f11.f64)));
	// stfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f12,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f10,f12,f3,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f3.f64, -ctx.f5.f64)));
	// lfs f9,-24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f8,f9,f11,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f2.f64)));
	// lfs f7,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmsubs f6,f7,f11,f0
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, -ctx.f0.f64)));
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stfsu f8,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d7d60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7D60;
loc_823D7E38:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r29.s32, ctx.xer);
	// bge cr6,0x823d7e9c
	if (!ctx.cr6.lt) goto loc_823D7E9C;
	// subf r28,r8,r29
	r28.u64 = r29.u64 - ctx.r8.u64;
	// subf r3,r25,r10
	ctx.r3.u64 = ctx.r10.u64 - r25.u64;
	// add r8,r28,r8
	ctx.r8.u64 = r28.u64 + ctx.r8.u64;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// addi r3,r5,8
	ctx.r3.s64 = ctx.r5.s64 + 8;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r5,r4,-8
	ctx.r5.s64 = ctx.r4.s64 + -8;
loc_823D7E5C:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lfsu f0,8(r5)
	ea = 8 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfsu f13,-8(r3)
	ea = -8 + ctx.r3.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// lfsu f12,-8(r30)
	ea = -8 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	r30.u32 = ea;
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfsx f9,r25,r9
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// fmadds f7,f9,f13,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmsubs f6,f8,f0,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, -ctx.f10.f64)));
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d7e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7E5C;
loc_823D7E9C:
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r29,r26
	ctx.r7.u64 = r26.u64 - r29.u64;
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823d7f64
	if (!ctx.cr6.lt) goto loc_823D7F64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x823d7f30
	if (ctx.cr6.lt) goto loc_823D7F30;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823D7EE0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f12,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f11,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// stfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f9,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f8,-24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stfsu f9,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f7,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stfsu f8,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d7ee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7EE0;
loc_823D7F30:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823d7f64
	if (!ctx.cr6.lt) goto loc_823D7F64;
	// subf r7,r8,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823D7F44:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d7f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7F44;
loc_823D7F64:
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r26.s32, ctx.xer);
	// bge cr6,0x823d80e4
	if (!ctx.cr6.lt) goto loc_823D80E4;
	// subf r7,r8,r26
	ctx.r7.u64 = r26.u64 - ctx.r8.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x823d8084
	if (ctx.cr6.lt) goto loc_823D8084;
	// subf r7,r8,r26
	ctx.r7.u64 = r26.u64 - ctx.r8.u64;
	// addi r30,r27,2
	r30.s64 = r27.s64 + 2;
	// addi r3,r7,-4
	ctx.r3.s64 = ctx.r7.s64 + -4;
	// addi r6,r27,2
	ctx.r6.s64 = r27.s64 + 2;
	// rlwinm r7,r3,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r3,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
loc_823D7FAC:
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f5,16(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfs f2,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lfs f0,24(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f8,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,-24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -24);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// lfsu f0,32(r7)
	ea = 32 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// fmuls f7,f13,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// lfs f5,-8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsu f13,-32(r6)
	ea = -32 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// fmsubs f10,f0,f10,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f9.f64)));
	// fmuls f2,f13,f8
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f13,-8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f5,f12,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f6.f64)));
	// lfs f5,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f6,f9,f13,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f3.f64)));
	// fmadds f3,f5,f13,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f1,-16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f8,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmsubs f13,f0,f1,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, -ctx.f11.f64)));
	// lfs f12,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f10,f12,f1,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f7.f64)));
	// lfs f11,-24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r4,-32
	ctx.r4.s64 = ctx.r4.s64 + -32;
	// lfs f9,-24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmsubs f8,f9,f11,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f4.f64)));
	// lfs f7,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f6,f7,f11,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f2.f64)));
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f8,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d7fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7FAC;
loc_823D8084:
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r26.s32, ctx.xer);
	// bge cr6,0x823d80e4
	if (!ctx.cr6.lt) goto loc_823D80E4;
	// subf r3,r8,r26
	ctx.r3.u64 = r26.u64 - ctx.r8.u64;
	// subf r8,r25,r9
	ctx.r8.u64 = ctx.r9.u64 - r25.u64;
	// addi r6,r4,8
	ctx.r6.s64 = ctx.r4.s64 + 8;
	// addi r7,r8,-8
	ctx.r7.s64 = ctx.r8.s64 + -8;
	// addi r8,r5,-8
	ctx.r8.s64 = ctx.r5.s64 + -8;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
loc_823D80A8:
	// lfsu f0,8(r8)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfsu f12,8(r7)
	ea = 8 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfsu f13,-8(r6)
	ea = -8 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// lfsu f12,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r25,r10
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// fmsubs f7,f9,f13,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f11.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f6,f8,f0,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d80a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D80A8;
loc_823D80E4:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x823d81f0
	if (ctx.cr6.lt) goto loc_823D81F0;
	// addi r8,r26,-4
	ctx.r8.s64 = r26.s64 + -4;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823D8118:
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fneg f2,f11
	ctx.f2.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmsubs f1,f8,f13,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f9.f64)));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// fnmsubs f13,f8,f10,f2
	ctx.f13.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f10.f64, -ctx.f2.f64)));
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f7,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmsubs f7,f6,f11,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f9.f64)));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// fnmsubs f6,f6,f12,f8
	ctx.f6.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f12.f64, -ctx.f8.f64)));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f2,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f5,f1
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmsubs f10,f4,f1,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, -ctx.f12.f64)));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// fnmsubs f9,f4,f2,f11
	ctx.f9.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f2.f64, -ctx.f11.f64)));
	// stfs f9,0(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f3,f7
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f5,f3,f8
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fneg f4,f6
	ctx.f4.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fmsubs f3,f0,f7,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, -ctx.f5.f64)));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fnmsubs f2,f0,f8,f4
	ctx.f2.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f4.f64)));
	// stfs f2,0(r8)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823d8118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8118;
loc_823D81F0:
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r26.s32, ctx.xer);
	// bge cr6,0x823d8240
	if (!ctx.cr6.lt) goto loc_823D8240;
	// subf r10,r7,r26
	ctx.r10.u64 = r26.u64 - ctx.r7.u64;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D8204:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfsx f9,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fneg f8,f12
	ctx.f8.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmsubs f7,f9,f0,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f10.f64)));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// fnmsubs f6,f9,f11,f8
	ctx.f6.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// bdnz 0x823d8204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8204;
loc_823D8240:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x823e8238
	ctx.lr = 0x823D8250;
	sub_823E8238(ctx, base);
	// add r10,r25,r24
	ctx.r10.u64 = r25.u64 + r24.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// blt cr6,0x823d835c
	if (ctx.cr6.lt) goto loc_823D835C;
	// addi r6,r26,-4
	ctx.r6.s64 = r26.s64 + -4;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// subf r5,r22,r24
	ctx.r5.u64 = r24.u64 - r22.u64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823D8294:
	// lfs f13,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f12,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f5,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfsu f0,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f2,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// lfs f31,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	f31.f64 = double(temp.f32);
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f30,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f30.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfs f29,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f27,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	f27.f64 = double(temp.f32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// fneg f6,f6
	ctx.f6.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f28,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	f28.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f26,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f26.f64 = double(temp.f32);
	// fneg f4,f4
	ctx.f4.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fneg f3,f3
	ctx.f3.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fmsubs f13,f10,f29,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f29.f64, -ctx.f13.f64)));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmsubs f11,f7,f27,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, f27.f64, -ctx.f11.f64)));
	// stfs f11,16(r7)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// fmsubs f10,f5,f26,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, f26.f64, -ctx.f0.f64)));
	// stfs f10,24(r7)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// fmsubs f9,f9,f28,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, f28.f64, -ctx.f12.f64)));
	// stfs f9,8(r6)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// fnmsubs f7,f30,f28,f6
	ctx.f7.f64 = double(float(-std::fma(f30.f64, f28.f64, -ctx.f6.f64)));
	// stfs f7,-8(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// fnmsubs f8,f2,f29,f8
	ctx.f8.f64 = double(float(-std::fma(ctx.f2.f64, f29.f64, -ctx.f8.f64)));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fnmsubs f6,f1,f27,f4
	ctx.f6.f64 = double(float(-std::fma(ctx.f1.f64, f27.f64, -ctx.f4.f64)));
	// stfs f6,-16(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + -16, temp.u32);
	// fnmsubs f5,f31,f26,f3
	ctx.f5.f64 = double(float(-std::fma(f31.f64, f26.f64, -ctx.f3.f64)));
	// stfs f5,-24(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + -24, temp.u32);
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// bdnz 0x823d8294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8294;
loc_823D835C:
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r26.s32, ctx.xer);
	// bge cr6,0x823d83b0
	if (!ctx.cr6.lt) goto loc_823D83B0;
	// subf r5,r4,r26
	ctx.r5.u64 = r26.u64 - ctx.r4.u64;
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// rlwinm r6,r26,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r7,-8
	ctx.r9.s64 = ctx.r7.s64 + -8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823D837C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmsubs f7,f13,f9,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f10.f64)));
	// stfsu f7,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fnmsubs f6,f0,f9,f8
	ctx.f6.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f9.f64, -ctx.f8.f64)));
	// stfsu f6,-8(r8)
	ea = -8 + ctx.r8.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823d837c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D837C;
loc_823D83B0:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2cec
	ctx.lr = 0x823D83BC;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8240C6C0) {
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
	ctx.lr = 0x8240C6C8;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240c6fc
	if (ctx.cr6.eq) goto loc_8240C6FC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240C6F8;
	sub_82408848(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8240C6FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240c718
	if (ctx.cr6.eq) goto loc_8240C718;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240C714;
	sub_824094E0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8240C718:
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
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x8240c780
	if (!ctx.cr0.eq) goto loc_8240C780;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240c788
	goto loc_8240C788;
loc_8240C780:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240C788:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240c7a0
	if (ctx.cr6.eq) goto loc_8240C7A0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240C7A0;
	sub_82409A88(ctx, base);
loc_8240C7A0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240c9b0
	if (!ctx.cr6.gt) goto loc_8240C9B0;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r27,r28
	r29.u64 = r28.u64 - r27.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfd f8,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r24,-32255
	r24.s64 = -2113863680;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f9,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f11.f64 = double(temp.f32);
	// ori r30,r11,65535
	r30.u64 = ctx.r11.u64 | 65535;
	// lfs f12,20264(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20264);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,20260(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 20260);
	ctx.f7.f64 = double(temp.f32);
loc_8240C808:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// rlwinm r9,r4,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// lfsx f6,r9,r26
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r26.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fadds f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8240c930
	if (ctx.cr6.eq) goto loc_8240C930;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r28,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r28.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmadds f6,f0,f11,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f6,f0,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fmul f0,f0,f8
	ctx.f0.f64 = ctx.f0.f64 * ctx.f8.f64;
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f13,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f6.f64)));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmul f5,f13,f8
	ctx.f5.f64 = ctx.f13.f64 * ctx.f8.f64;
	// fmadds f6,f13,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// frsp f30,f5
	f30.f64 = double(float(ctx.f5.f64));
loc_8240C930:
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8240c940
	if (ctx.cr6.lt) goto loc_8240C940;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8240C940:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240c958
	if (!ctx.cr6.gt) goto loc_8240C958;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// blt cr6,0x8240c95c
	if (ctx.cr6.lt) goto loc_8240C95C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x8240c95c
	goto loc_8240C95C;
loc_8240C958:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8240C95C:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x8240c96c
	if (ctx.cr6.lt) goto loc_8240C96C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8240C96C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240c984
	if (!ctx.cr6.gt) goto loc_8240C984;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// blt cr6,0x8240c988
	if (ctx.cr6.lt) goto loc_8240C988;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x8240c988
	goto loc_8240C988;
loc_8240C984:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8240C988:
	// rlwinm r11,r6,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stwux r11,r29,r27
	ea = r29.u32 + r27.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240c808
	if (ctx.cr6.lt) goto loc_8240C808;
loc_8240C9B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8241AF70) {
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
	ctx.lr = 0x8241AF78;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241af9c
	if (ctx.cr6.lt) goto loc_8241AF9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8241b170
	goto loc_8241B170;
loc_8241AF9C:
	// lbz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// bne cr6,0x8241b164
	if (!ctx.cr6.eq) goto loc_8241B164;
	// lwz r9,40(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 40);
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241b164
	if (!ctx.cr0.eq) goto loc_8241B164;
	// addi r31,r26,1
	r31.s64 = r26.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241afdc
	if (ctx.cr6.lt) goto loc_8241AFDC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,48(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 48);
	// li r5,1007
	ctx.r5.s64 = 1007;
	// addi r6,r11,25120
	ctx.r6.s64 = ctx.r11.s64 + 25120;
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// bl 0x8241a4f0
	ctx.lr = 0x8241AFDC;
	sub_8241A4F0(ctx, base);
loc_8241AFDC:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// beq cr6,0x8241b154
	if (ctx.cr6.eq) goto loc_8241B154;
	// cmplwi cr6,r10,98
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 98, ctx.xer);
	// beq cr6,0x8241b14c
	if (ctx.cr6.eq) goto loc_8241B14C;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// beq cr6,0x8241b144
	if (ctx.cr6.eq) goto loc_8241B144;
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// beq cr6,0x8241b13c
	if (ctx.cr6.eq) goto loc_8241B13C;
	// cmplwi cr6,r10,114
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 114, ctx.xer);
	// beq cr6,0x8241b134
	if (ctx.cr6.eq) goto loc_8241B134;
	// cmplwi cr6,r10,116
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 116, ctx.xer);
	// beq cr6,0x8241b12c
	if (ctx.cr6.eq) goto loc_8241B12C;
	// cmplwi cr6,r10,118
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 118, ctx.xer);
	// beq cr6,0x8241b124
	if (ctx.cr6.eq) goto loc_8241B124;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8241b080
	if (ctx.cr6.lt) goto loc_8241B080;
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// bgt cr6,0x8241b080
	if (ctx.cr6.gt) goto loc_8241B080;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r9,r31,3
	ctx.r9.s64 = r31.s64 + 3;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241b044
	if (ctx.cr6.lt) goto loc_8241B044;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8241B044:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8241b074
	goto loc_8241B074;
loc_8241B04C:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8241b15c
	if (ctx.cr6.lt) goto loc_8241B15C;
	// cmpwi cr6,r10,55
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 55, ctx.xer);
	// bgt cr6,0x8241b15c
	if (ctx.cr6.gt) goto loc_8241B15C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_8241B074:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241b04c
	if (ctx.cr6.lt) goto loc_8241B04C;
	// b 0x8241b15c
	goto loc_8241B15C;
loc_8241B080:
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x8241b118
	if (!ctx.cr6.eq) goto loc_8241B118;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r29,r31,1
	r29.s64 = r31.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8241b118
	if (!ctx.cr6.lt) goto loc_8241B118;
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(r29.u32 + 0);
	// bl 0x826a0840
	ctx.lr = 0x8241B0A0;
	sub_826A0840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241b118
	if (ctx.cr0.eq) goto loc_8241B118;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8241b110
	if (!ctx.cr6.lt) goto loc_8241B110;
loc_8241B0BC:
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// bl 0x826a0840
	ctx.lr = 0x8241B0C4;
	sub_826A0840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241b110
	if (ctx.cr0.eq) goto loc_8241B110;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x8241b0ec
	if (ctx.cr6.lt) goto loc_8241B0EC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-87
	r30.s64 = ctx.r11.s64 + -87;
	// b 0x8241b100
	goto loc_8241B100;
loc_8241B0EC:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-55
	r30.s64 = ctx.r11.s64 + -55;
	// bge cr6,0x8241b100
	if (!ctx.cr6.lt) goto loc_8241B100;
	// addi r30,r11,-48
	r30.s64 = ctx.r11.s64 + -48;
loc_8241B100:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8241b0bc
	if (ctx.cr6.lt) goto loc_8241B0BC;
loc_8241B110:
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// b 0x8241b16c
	goto loc_8241B16C;
loc_8241B118:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x8241b158
	goto loc_8241B158;
loc_8241B124:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8241b158
	goto loc_8241B158;
loc_8241B12C:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8241b158
	goto loc_8241B158;
loc_8241B134:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8241b158
	goto loc_8241B158;
loc_8241B13C:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8241b158
	goto loc_8241B158;
loc_8241B144:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8241b158
	goto loc_8241B158;
loc_8241B14C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8241b158
	goto loc_8241B158;
loc_8241B154:
	// li r11,7
	ctx.r11.s64 = 7;
loc_8241B158:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8241B15C:
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x8241b16c
	goto loc_8241B16C;
loc_8241B164:
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r31,r26,1
	r31.s64 = r26.s64 + 1;
loc_8241B16C:
	// subf r3,r26,r31
	ctx.r3.u64 = r31.u64 - r26.u64;
loc_8241B170:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82438060) {
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
	// beq 0x82438094
	if (ctx.cr0.eq) goto loc_82438094;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_82438080:
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
	// bdnz 0x82438080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82438080;
loc_82438094:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x822c9160
	ctx.lr = 0x8243809C;
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

DEFINE_REX_FUNC(sub_8243B198) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8243B1A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x8243b1c4
	goto loc_8243B1C4;
loc_8243B1B8:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243b1e8
	if (ctx.cr6.eq) goto loc_8243B1E8;
loc_8243B1C4:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243a648
	ctx.lr = 0x8243B1DC;
	sub_8243A648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243b1b8
	if (!ctx.cr0.lt) goto loc_8243B1B8;
	// b 0x8243b1ec
	goto loc_8243B1EC;
loc_8243B1E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243B1EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8243D9B0) {
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
	ctx.lr = 0x8243D9B8;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,24(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243d9fc
	if (!ctx.cr6.eq) goto loc_8243D9FC;
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243D9E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8243d9f4
	if (!ctx.cr6.eq) goto loc_8243D9F4;
loc_8243D9E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1ce0
	return;
loc_8243D9F4:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_8243D9FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r29,r9,8
	r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x8243da30
	if (!ctx.cr0.eq) goto loc_8243DA30;
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243DA20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d9e8
	if (ctx.cr6.eq) goto loc_8243D9E8;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_8243DA30:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// addi r26,r11,-2
	r26.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r26,16
	ctx.cr6.compare<int32_t>(r26.s32, 16, ctx.xer);
	// ble cr6,0x8243dd10
	if (!ctx.cr6.gt) goto loc_8243DD10;
	// li r21,80
	r21.s64 = 80;
	// li r22,0
	r22.s64 = 0;
	// li r23,86
	r23.s64 = 86;
	// li r19,8
	r19.s64 = 8;
	// li r20,30
	r20.s64 = 30;
loc_8243DA60:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8243da88
	if (!ctx.cr6.eq) goto loc_8243DA88;
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243DA78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d9e8
	if (ctx.cr6.eq) goto loc_8243D9E8;
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r28,4(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_8243DA88:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r25,0(r31)
	r25.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r21,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r21.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r25,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r25.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8243DABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r22
	r27.u64 = r22.u64;
	// stb r22,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r22.u8);
	// li r29,1
	r29.s64 = 1;
loc_8243DAC8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8243daf0
	if (!ctx.cr6.eq) goto loc_8243DAF0;
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243DAE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d9e8
	if (ctx.cr6.eq) goto loc_8243D9E8;
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r28,4(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_8243DAF0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// ble cr6,0x8243dac8
	if (!ctx.cr6.gt) goto loc_8243DAC8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r5,82(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r26,r26,-17
	r26.s64 = r26.s64 + -17;
	// lbz r9,83(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r8,86(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r18,88(r1)
	r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r29,87(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r29,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r29.u32);
	// stw r18,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r18.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r23,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r23.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243DB88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r7,89(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 89);
	// li r4,2
	ctx.r4.s64 = 2;
	// lbz r5,90(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 90);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r9,91(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r10,93(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 93);
	// lbz r8,94(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r18,96(r1)
	r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r29,95(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r29,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r29.u32);
	// stw r18,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, r18.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r23,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r23.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243DBF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r27,256
	ctx.cr6.compare<int32_t>(r27.s32, 256, ctx.xer);
	// bgt cr6,0x8243dc00
	if (ctx.cr6.gt) goto loc_8243DC00;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// ble cr6,0x8243dc1c
	if (!ctx.cr6.gt) goto loc_8243DC1C;
loc_8243DC00:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r19,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r19.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8243DC1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243DC1C:
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8243dc70
	if (!ctx.cr6.gt) goto loc_8243DC70;
loc_8243DC28:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8243dc50
	if (!ctx.cr6.eq) goto loc_8243DC50;
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243DC40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243d9e8
	if (ctx.cr6.eq) goto loc_8243D9E8;
	// lwz r31,0(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r28,4(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_8243DC50:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stbx r11,r29,r10
	REX_STORE_U8(r29.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x8243dc28
	if (ctx.cr6.lt) goto loc_8243DC28;
loc_8243DC70:
	// rlwinm r11,r25,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x10;
	// subf r26,r27,r26
	r26.u64 = r26.u64 - r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8243dc8c
	if (ctx.cr6.eq) goto loc_8243DC8C;
	// addi r25,r25,-16
	r25.s64 = r25.s64 + -16;
	// addi r11,r25,50
	ctx.r11.s64 = r25.s64 + 50;
	// b 0x8243dc90
	goto loc_8243DC90;
loc_8243DC8C:
	// addi r11,r25,46
	ctx.r11.s64 = r25.s64 + 46;
loc_8243DC90:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// blt cr6,0x8243dca8
	if (ctx.cr6.lt) goto loc_8243DCA8;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// blt cr6,0x8243dccc
	if (ctx.cr6.lt) goto loc_8243DCCC;
loc_8243DCA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r20,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r20.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r25,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r25.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8243DCCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243DCCC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243dce4
	if (!ctx.cr6.eq) goto loc_8243DCE4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824c11e8
	ctx.lr = 0x8243DCE0;
	sub_824C11E8(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_8243DCE4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x826a1e70
	ctx.lr = 0x8243DCF4;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,17
	ctx.r3.s64 = ctx.r11.s64 + 17;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x826a1e70
	ctx.lr = 0x8243DD08;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r26,16
	ctx.cr6.compare<int32_t>(r26.s32, 16, ctx.xer);
	// bgt cr6,0x8243da60
	if (ctx.cr6.gt) goto loc_8243DA60;
loc_8243DD10:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8243dd38
	if (ctx.cr6.eq) goto loc_8243DD38;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8243DD38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8243DD38:
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,4(r24)
	REX_STORE_U32(r24.u32 + 4, r28.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82452838) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// beq cr6,0x824528b8
	if (ctx.cr6.eq) goto loc_824528B8;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x824528a0
	if (ctx.cr6.eq) goto loc_824528A0;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8245287c
	if (ctx.cr6.eq) goto loc_8245287C;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82452924
	if (!ctx.cr6.eq) goto loc_82452924;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,12512
	ctx.r4.s64 = ctx.r11.s64 + 12512;
	// b 0x824528a8
	goto loc_824528A8;
loc_8245287C:
	// lwz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r11,248
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 248, ctx.xer);
	// beq cr6,0x82452894
	if (ctx.cr6.eq) goto loc_82452894;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,12460
	ctx.r4.s64 = ctx.r11.s64 + 12460;
	// b 0x824528a8
	goto loc_824528A8;
loc_82452894:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,12408
	ctx.r4.s64 = ctx.r11.s64 + 12408;
	// b 0x824528a8
	goto loc_824528A8;
loc_824528A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,12352
	ctx.r4.s64 = ctx.r11.s64 + 12352;
loc_824528A8:
	// bl 0x8244beb0
	ctx.lr = 0x824528AC;
	sub_8244BEB0(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x82452924
	goto loc_82452924;
loc_824528B8:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x82452924
	if (ctx.cr6.gt) goto loc_82452924;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82452914
	if (ctx.cr6.eq) goto loc_82452914;
	// bdz 0x8245290c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8245290C;
	// bdz 0x824528ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_824528EC;
	// bdz 0x824528ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_824528EC;
	// bdz 0x824528ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_824528EC;
	// bdz 0x824528f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_824528F4;
	// bdz 0x82452904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82452904;
	// bdz 0x8245291c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8245291C;
	// b 0x824528fc
	goto loc_824528FC;
loc_824528EC:
	// bl 0x82451018
	ctx.lr = 0x824528F0;
	sub_82451018(ctx, base);
	// b 0x82452920
	goto loc_82452920;
loc_824528F4:
	// bl 0x82451bb0
	ctx.lr = 0x824528F8;
	sub_82451BB0(ctx, base);
	// b 0x82452920
	goto loc_82452920;
loc_824528FC:
	// bl 0x82452720
	ctx.lr = 0x82452900;
	sub_82452720(ctx, base);
	// b 0x82452920
	goto loc_82452920;
loc_82452904:
	// bl 0x824503a8
	ctx.lr = 0x82452908;
	sub_824503A8(ctx, base);
	// b 0x82452920
	goto loc_82452920;
loc_8245290C:
	// bl 0x82451630
	ctx.lr = 0x82452910;
	sub_82451630(ctx, base);
	// b 0x82452920
	goto loc_82452920;
loc_82452914:
	// bl 0x824517b8
	ctx.lr = 0x82452918;
	sub_824517B8(ctx, base);
	// b 0x82452920
	goto loc_82452920;
loc_8245291C:
	// bl 0x82450910
	ctx.lr = 0x82452920;
	sub_82450910(ctx, base);
loc_82452920:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82452924:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824585B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,14780
	ctx.r4.s64 = ctx.r11.s64 + 14780;
	// bl 0x824555b8
	ctx.lr = 0x824585D4;
	sub_824555B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82458E58) {
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
	ctx.lr = 0x82458E60;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// bl 0x82455688
	ctx.lr = 0x82458E74;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14352
	ctx.r4.s64 = ctx.r11.s64 + 14352;
	// bl 0x824555b8
	ctx.lr = 0x82458E8C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r4,r10,14100
	ctx.r4.s64 = ctx.r10.s64 + 14100;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82458EC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14096
	ctx.r4.s64 = ctx.r11.s64 + 14096;
	// bl 0x824555b8
	ctx.lr = 0x82458ED8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r23,r11,15688
	r23.s64 = ctx.r11.s64 + 15688;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// addi r25,r10,14160
	r25.s64 = ctx.r10.s64 + 14160;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82458f68
	if (ctx.cr6.eq) goto loc_82458F68;
loc_82458F00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82458F08;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82458F28;
	sub_82404168(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82458F3C;
	sub_82404168(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458F50;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82458f00
	if (ctx.cr6.lt) goto loc_82458F00;
loc_82458F68:
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r8,15656
	r29.s64 = ctx.r8.s64 + 15656;
	// addi r28,r9,14344
	r28.s64 = ctx.r9.s64 + 14344;
	// addi r26,r10,14372
	r26.s64 = ctx.r10.s64 + 14372;
	// beq cr6,0x82459010
	if (ctx.cr6.eq) goto loc_82459010;
loc_82458F8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82458F94;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82458FB4;
	sub_82404168(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82458FC8;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82458FDC;
	sub_82404168(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458FF8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82458f8c
	if (ctx.cr6.lt) goto loc_82458F8C;
loc_82459010:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r10,15624
	r27.s64 = ctx.r10.s64 + 15624;
	// beq cr6,0x82459090
	if (ctx.cr6.eq) goto loc_82459090;
loc_82459024:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245902C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459048;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x8245905C;
	sub_82404168(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459078;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459024
	if (ctx.cr6.lt) goto loc_82459024;
loc_82459090:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82459120
	if (ctx.cr6.eq) goto loc_82459120;
loc_8245909C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824590A4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x824590C4;
	sub_82404168(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x824590D8;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x824590EC;
	sub_82404168(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459108;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245909c
	if (ctx.cr6.lt) goto loc_8245909C;
loc_82459120:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82459198
	if (ctx.cr6.eq) goto loc_82459198;
loc_8245912C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459134;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459150;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82459164;
	sub_82404168(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459180;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245912c
	if (ctx.cr6.lt) goto loc_8245912C;
loc_82459198:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82459214
	if (ctx.cr6.eq) goto loc_82459214;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15596
	r29.s64 = ctx.r11.s64 + 15596;
loc_824591AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824591B4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x824591D0;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x824591E4;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824591FC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824591ac
	if (ctx.cr6.lt) goto loc_824591AC;
loc_82459214:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r10,14148
	r28.s64 = ctx.r10.s64 + 14148;
	// beq cr6,0x82459290
	if (ctx.cr6.eq) goto loc_82459290;
loc_82459228:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459230;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82459250;
	sub_82404168(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404168
	ctx.lr = 0x82459264;
	sub_82404168(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459278;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459228
	if (ctx.cr6.lt) goto loc_82459228;
loc_82459290:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245933c
	if (ctx.cr6.eq) goto loc_8245933C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15568
	r29.s64 = ctx.r11.s64 + 15568;
loc_824592A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824592AC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82404168
	ctx.lr = 0x824592CC;
	sub_82404168(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404168
	ctx.lr = 0x824592E0;
	sub_82404168(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x824592F4;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82459308;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459324;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82459340
	if (ctx.cr0.lt) goto loc_82459340;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824592a4
	if (ctx.cr6.lt) goto loc_824592A4;
loc_8245933C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82459340:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82476D88) {
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
	ctx.lr = 0x82476D90;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,108(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82476DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82476DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82476f70
	if (ctx.cr6.eq) goto loc_82476F70;
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82476df4
	if (!ctx.cr6.eq) goto loc_82476DF4;
loc_82476DEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824770a8
	goto loc_824770A8;
loc_82476DF4:
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(r30.u32, 65535, ctx.xer);
	// beq cr6,0x82476f5c
	if (ctx.cr6.eq) goto loc_82476F5C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82476e30
	if (ctx.cr0.eq) goto loc_82476E30;
	// bl 0x8246d250
	ctx.lr = 0x82476E24;
	sub_8246D250(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r10,30436
	ctx.r5.s64 = ctx.r10.s64 + 30436;
	// b 0x82476e3c
	goto loc_82476E3C;
loc_82476E30:
	// bl 0x8246d250
	ctx.lr = 0x82476E34;
	sub_8246D250(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r10,30428
	ctx.r5.s64 = ctx.r10.s64 + 30428;
loc_82476E3C:
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82404168
	ctx.lr = 0x82476E54;
	sub_82404168(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r31,472
	r27.s64 = r31.s64 + 472;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 12);
	// stb r11,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8241c9f0
	ctx.lr = 0x82476E74;
	sub_8241C9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824770a8
	if (ctx.cr0.lt) goto loc_824770A8;
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 500);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// beq 0x82476f5c
	if (ctx.cr0.eq) goto loc_82476F5C;
	// lwz r11,96(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82476f5c
	if (ctx.cr6.eq) goto loc_82476F5C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82476f5c
	if (!ctx.cr6.eq) goto loc_82476F5C;
	// lwz r28,20(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82476f5c
	if (!ctx.cr6.eq) goto loc_82476F5C;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82476EC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82476ec4
	if (!ctx.cr6.eq) goto loc_82476EC4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,3
	r29.s64 = ctx.r11.s64 + 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82476EF0;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82476f04
	if (!ctx.cr0.eq) goto loc_82476F04;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824770a8
	goto loc_824770A8;
loc_82476F04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,24(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,30420
	ctx.r5.s64 = ctx.r11.s64 + 30420;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82404168
	ctx.lr = 0x82476F1C;
	sub_82404168(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8241c9f0
	ctx.lr = 0x82476F30;
	sub_8241C9F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0350
	ctx.lr = 0x82476F40;
	sub_823F0350(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x82476f50
	if (!ctx.cr6.lt) goto loc_82476F50;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x824770a8
	goto loc_824770A8;
loc_82476F50:
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 500);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
loc_82476F5C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82476dec
	if (ctx.cr6.eq) goto loc_82476DEC;
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 108);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// b 0x82476dec
	goto loc_82476DEC;
loc_82476F70:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(r30.u32, 18, ctx.xer);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bgt cr6,0x824770a0
	if (ctx.cr6.gt) goto loc_824770A0;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// addi r12,r12,29584
	ctx.r12.s64 = ctx.r12.s64 + 29584;
	// lbzx r0,r12,r30
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + r30.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32185
	ctx.r12.s64 = -2109276160;
	// nop 
	// addi r12,r12,28584
	ctx.r12.s64 = ctx.r12.s64 + 28584;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r30.u32) {
	case 0:
		goto loc_824772DC;
	case 1:
		goto loc_82476FA8;
	case 2:
		goto loc_8247705C;
	case 3:
		goto loc_82477064;
	case 4:
		goto loc_8247706C;
	case 5:
		goto loc_82477074;
	case 6:
		goto loc_8247707C;
	case 7:
		goto loc_82477084;
	case 8:
		goto loc_8247708C;
	case 9:
		goto loc_82477094;
	case 10:
		goto loc_824770B0;
	case 11:
		goto loc_824770B8;
	case 12:
		goto loc_824770C0;
	case 13:
		goto loc_824770C8;
	case 14:
		goto loc_824770D0;
	case 15:
		goto loc_824770A0;
	case 16:
		goto loc_824770A0;
	case 17:
		goto loc_824770E0;
	case 18:
		goto loc_824770D8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82476FA8:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82476FAC:
	// cmplwi cr6,r29,15
	ctx.cr6.compare<uint32_t>(r29.u32, 15, ctx.xer);
	// bgt cr6,0x824770a0
	if (ctx.cr6.gt) goto loc_824770A0;
loc_82476FB4:
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r30,r28
	r30.u64 = r28.u64;
	// rlwimi r9,r29,16,1,15
	ctx.r9.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0x7FFF0000) | (ctx.r9.u64 & 0xFFFFFFFF8000FFFF);
	// rlwinm. r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r29,r9,r11
	r29.u64 = ctx.r9.u64 | ctx.r11.u64;
	// beq 0x82476fd4
	if (ctx.cr0.eq) goto loc_82476FD4;
	// lis r30,64
	r30.s64 = 4194304;
loc_82476FD4:
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824715b8
	ctx.lr = 0x82476FE0;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824770a8
	if (ctx.cr0.lt) goto loc_824770A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246e840
	ctx.lr = 0x82476FF4;
	sub_8246E840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824770a8
	if (ctx.cr0.lt) goto loc_824770A8;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824770f0
	if (ctx.cr0.eq) goto loc_824770F0;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// srawi r11,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 31;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,348(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 348);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82477050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82477114
	if (!ctx.cr0.lt) goto loc_82477114;
	// b 0x824770a8
	goto loc_824770A8;
loc_8247705C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82476fac
	goto loc_82476FAC;
loc_82477064:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82476fac
	goto loc_82476FAC;
loc_8247706C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82476fac
	goto loc_82476FAC;
loc_82477074:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82476fac
	goto loc_82476FAC;
loc_8247707C:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82476fac
	goto loc_82476FAC;
loc_82477084:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82476fac
	goto loc_82476FAC;
loc_8247708C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82476fac
	goto loc_82476FAC;
loc_82477094:
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82476fb4
	if (ctx.cr6.eq) goto loc_82476FB4;
loc_824770A0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824770A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
loc_824770B0:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82476fac
	goto loc_82476FAC;
loc_824770B8:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82476fac
	goto loc_82476FAC;
loc_824770C0:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82476fac
	goto loc_82476FAC;
loc_824770C8:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82476fac
	goto loc_82476FAC;
loc_824770D0:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82476fac
	goto loc_82476FAC;
loc_824770D8:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// b 0x82476fac
	goto loc_82476FAC;
loc_824770E0:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82476fac
	goto loc_82476FAC;
loc_824770F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82477108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824770a8
	if (ctx.cr0.lt) goto loc_824770A8;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_82477114:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// ble cr6,0x824771a0
	if (!ctx.cr6.gt) goto loc_824771A0;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_82477150:
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82477190
	if (!ctx.cr6.eq) goto loc_82477190;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82477190
	if (!ctx.cr6.eq) goto loc_82477190;
	// lwz r4,12(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82477190
	if (!ctx.cr6.eq) goto loc_82477190;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
loc_82477190:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82477150
	if (ctx.cr6.lt) goto loc_82477150;
loc_824771A0:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824771B0:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824771c4
	if (ctx.cr6.eq) goto loc_824771C4;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_824771C4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x824771b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824771B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824771EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824770a8
	if (ctx.cr0.lt) goto loc_824770A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82477210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r29,1
	ctx.r11.u64 = r29.u32 & 0x7FFFFFFF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82477224
	if (!ctx.cr6.eq) goto loc_82477224;
	// oris r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 983040;
loc_82477224:
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm r5,r11,0,12,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm. r11,r10,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bne 0x82477258
	if (!ctx.cr0.eq) goto loc_82477258;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82477250
	if (!ctx.cr0.eq) goto loc_82477250;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82477258
	if (ctx.cr0.eq) goto loc_82477258;
loc_82477250:
	// oris r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 2097152;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_82477258:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwimi r10,r11,20,9,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x700000) | (ctx.r10.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r8,r11,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// clrlwi r11,r7,21
	ctx.r11.u64 = ctx.r7.u32 & 0x7FF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r9,312(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 312);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 | r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82477298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824770a8
	if (ctx.cr0.lt) goto loc_824770A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824772B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824770a8
	if (ctx.cr0.lt) goto loc_824770A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824772C4;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824770a8
	if (ctx.cr0.lt) goto loc_824770A8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82476dec
	if (ctx.cr6.eq) goto loc_82476DEC;
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// b 0x82476dec
	goto loc_82476DEC;
loc_824772DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824770a8
	goto loc_824770A8;
}

DEFINE_REX_FUNC(sub_824A8650) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// subf r5,r4,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-24168
	ctx.r6.s64 = ctx.r11.s64 + -24168;
loc_824A8660:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824A8674:
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwzx r3,r5,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824a86a4
	if (ctx.cr6.eq) goto loc_824A86A4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// subf r9,r9,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r9.u64;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_824A86A4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824a8674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A8674;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x824a86cc
	if (!ctx.cr6.eq) goto loc_824A86CC;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// blt cr6,0x824a8660
	if (ctx.cr6.lt) goto loc_824A8660;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824A86CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824ABD00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb0
	ctx.lr = 0x824ABD08;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// lwz r26,12(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82477ac8
	ctx.lr = 0x824ABD20;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824abd34
	if (ctx.cr0.eq) goto loc_824ABD34;
	// bl 0x824773d0
	ctx.lr = 0x824ABD2C;
	sub_824773D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x824abd38
	goto loc_824ABD38;
loc_824ABD34:
	// li r27,0
	r27.s64 = 0;
loc_824ABD38:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x824abd4c
	if (!ctx.cr6.eq) goto loc_824ABD4C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824abf4c
	goto loc_824ABF4C;
loc_824ABD4C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82477b60
	ctx.lr = 0x824ABD68;
	sub_82477B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824abd8c
	if (!ctx.cr0.lt) goto loc_824ABD8C;
loc_824ABD70:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824ABD74:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82130e88
	ctx.lr = 0x824ABD7C;
	sub_82130E88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82477b20
	ctx.lr = 0x824ABD84;
	sub_82477B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824abf4c
	goto loc_824ABF4C;
loc_824ABD8C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824abe14
	if (!ctx.cr6.gt) goto loc_824ABE14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824ABDA8:
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r7,132(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 132);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824abe00
	if (!ctx.cr6.eq) goto loc_824ABE00;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r7,8(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,136(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 136);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r9,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r28,108(r8)
	r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 108);
loc_824ABE00:
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824abda8
	if (ctx.cr6.lt) goto loc_824ABDA8;
loc_824ABE14:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824ABE24:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,132(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82478758
	ctx.lr = 0x824ABE3C;
	sub_82478758(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824abf58
	if (ctx.cr6.eq) goto loc_824ABF58;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r28,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, r28.u32);
	// blt cr6,0x824abe24
	if (ctx.cr6.lt) goto loc_824ABE24;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824785e8
	ctx.lr = 0x824ABE90;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824abd70
	if (ctx.cr0.lt) goto loc_824ABD70;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824abf48
	if (ctx.cr6.eq) goto loc_824ABF48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_824ABEA8:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824abf3c
	if (ctx.cr6.eq) goto loc_824ABF3C;
	// lwz r6,12(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824abf3c
	if (ctx.cr6.eq) goto loc_824ABF3C;
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,132(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824abf3c
	if (!ctx.cr6.eq) goto loc_824ABF3C;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x824abf3c
	if (ctx.cr0.eq) goto loc_824ABF3C;
loc_824ABEF4:
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824ABF04:
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r3,16(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r31,r10,r9
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824abf28
	if (!ctx.cr6.eq) goto loc_824ABF28;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// stwx r3,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
loc_824ABF28:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824abf04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ABF04;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824abef4
	if (ctx.cr6.lt) goto loc_824ABEF4;
loc_824ABF3C:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x824abea8
	if (!ctx.cr0.eq) goto loc_824ABEA8;
loc_824ABF48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824ABF4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
loc_824ABF58:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824abd74
	goto loc_824ABD74;
}

DEFINE_REX_FUNC(sub_824BDA30) {
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
	ctx.lr = 0x824BDA38;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,108(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BDA5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BDA78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824bdbec
	if (ctx.cr6.eq) goto loc_824BDBEC;
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824bda9c
	if (!ctx.cr6.eq) goto loc_824BDA9C;
loc_824BDA94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824bde40
	goto loc_824BDE40;
loc_824BDA9C:
	// cmplwi cr6,r30,65535
	ctx.cr6.compare<uint32_t>(r30.u32, 65535, ctx.xer);
	// beq cr6,0x824bdbd8
	if (ctx.cr6.eq) goto loc_824BDBD8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246d250
	ctx.lr = 0x824BDAB0;
	sub_8246D250(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r10,30436
	ctx.r5.s64 = ctx.r10.s64 + 30436;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82404168
	ctx.lr = 0x824BDAD0;
	sub_82404168(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r31,472
	r27.s64 = r31.s64 + 472;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 12);
	// stb r11,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8241c9f0
	ctx.lr = 0x824BDAF0;
	sub_8241C9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bde40
	if (ctx.cr0.lt) goto loc_824BDE40;
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 500);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// beq 0x824bdbd8
	if (ctx.cr0.eq) goto loc_824BDBD8;
	// lwz r11,96(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bdbd8
	if (ctx.cr6.eq) goto loc_824BDBD8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x824bdbd8
	if (!ctx.cr6.eq) goto loc_824BDBD8;
	// lwz r28,20(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824bdbd8
	if (!ctx.cr6.eq) goto loc_824BDBD8;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_824BDB40:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824bdb40
	if (!ctx.cr6.eq) goto loc_824BDB40;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,3
	r29.s64 = ctx.r11.s64 + 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824BDB6C;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824bdb80
	if (!ctx.cr0.eq) goto loc_824BDB80;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824bde40
	goto loc_824BDE40;
loc_824BDB80:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,24(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,30420
	ctx.r5.s64 = ctx.r11.s64 + 30420;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82404168
	ctx.lr = 0x824BDB98;
	sub_82404168(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8241c9f0
	ctx.lr = 0x824BDBAC;
	sub_8241C9F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0350
	ctx.lr = 0x824BDBBC;
	sub_823F0350(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x824bdbcc
	if (!ctx.cr6.lt) goto loc_824BDBCC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x824bde40
	goto loc_824BDE40;
loc_824BDBCC:
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 500);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
loc_824BDBD8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824bda94
	if (ctx.cr6.eq) goto loc_824BDA94;
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 108);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// b 0x824bda94
	goto loc_824BDA94;
loc_824BDBEC:
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(r30.u32, 14, ctx.xer);
	// bgt cr6,0x824bde38
	if (ctx.cr6.gt) goto loc_824BDE38;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,3792
	ctx.r12.s64 = ctx.r12.s64 + 3792;
	// lbzx r0,r12,r30
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + r30.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32180
	ctx.r12.s64 = -2108948480;
	// nop 
	// addi r12,r12,-9188
	ctx.r12.s64 = ctx.r12.s64 + -9188;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r30.u32) {
	case 0:
		goto loc_824BDE70;
	case 1:
		goto loc_824BDC1C;
	case 2:
		goto loc_824BDDF4;
	case 3:
		goto loc_824BDDFC;
	case 4:
		goto loc_824BDE04;
	case 5:
		goto loc_824BDE0C;
	case 6:
		goto loc_824BDE14;
	case 7:
		goto loc_824BDE1C;
	case 8:
		goto loc_824BDE24;
	case 9:
		goto loc_824BDE2C;
	case 10:
		goto loc_824BDE48;
	case 11:
		goto loc_824BDE50;
	case 12:
		goto loc_824BDE58;
	case 13:
		goto loc_824BDE60;
	case 14:
		goto loc_824BDE68;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824BDC1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824BDC20:
	// cmplwi cr6,r29,15
	ctx.cr6.compare<uint32_t>(r29.u32, 15, ctx.xer);
	// bgt cr6,0x824bde38
	if (ctx.cr6.gt) goto loc_824BDE38;
loc_824BDC28:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r4,31
	ctx.r4.s64 = 31;
	// rlwimi r10,r29,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r30,r10,r11
	r30.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x824715b8
	ctx.lr = 0x824BDC40;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bde40
	if (ctx.cr0.lt) goto loc_824BDE40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246e840
	ctx.lr = 0x824BDC54;
	sub_8246E840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bde40
	if (ctx.cr0.lt) goto loc_824BDE40;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824bdd48
	if (ctx.cr0.eq) goto loc_824BDD48;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// ble cr6,0x824bdcf4
	if (!ctx.cr6.gt) goto loc_824BDCF4;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_824BDCA4:
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824bdce4
	if (!ctx.cr6.eq) goto loc_824BDCE4;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824bdce4
	if (!ctx.cr6.eq) goto loc_824BDCE4;
	// lwz r4,12(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824bdce4
	if (!ctx.cr6.eq) goto loc_824BDCE4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
loc_824BDCE4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824bdca4
	if (ctx.cr6.lt) goto loc_824BDCA4;
loc_824BDCF4:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824BDD04:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824bdd18
	if (ctx.cr6.eq) goto loc_824BDD18;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_824BDD18:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x824bdd04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824BDD04;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BDD40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bde40
	if (ctx.cr0.lt) goto loc_824BDE40;
loc_824BDD48:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,348(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BDD68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bde40
	if (ctx.cr0.lt) goto loc_824BDE40;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwimi r10,r11,20,9,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x700000) | (ctx.r10.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r11,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// clrlwi r11,r7,21
	ctx.r11.u64 = ctx.r7.u32 & 0x7FF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r9,312(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 312);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824BDDB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bde40
	if (ctx.cr0.lt) goto loc_824BDE40;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BDDCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bde40
	if (ctx.cr0.lt) goto loc_824BDE40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824BDDDC;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bde40
	if (ctx.cr0.lt) goto loc_824BDE40;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824bda94
	if (ctx.cr6.eq) goto loc_824BDA94;
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// b 0x824bda94
	goto loc_824BDA94;
loc_824BDDF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDDFC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE04:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE0C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE14:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE1C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE24:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE2C:
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824bdc28
	if (ctx.cr6.eq) goto loc_824BDC28;
loc_824BDE38:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824BDE40:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
loc_824BDE48:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE50:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE58:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE60:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE68:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x824bdc20
	goto loc_824BDC20;
loc_824BDE70:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824bde40
	goto loc_824BDE40;
}

DEFINE_REX_FUNC(sub_824D2558) {
	REX_FUNC_PROLOGUE();
	// b 0x824d2128
	sub_824D2128(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D28C8) {
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
	ctx.lr = 0x824D28D0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824d2928
	if (ctx.cr6.lt) goto loc_824D2928;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_824D2928:
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// subfic r7,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addme r7,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r31,r7,r9
	r31.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplw cr6,r24,r31
	ctx.cr6.compare<uint32_t>(r24.u32, r31.u32, ctx.xer);
	// bge cr6,0x824d2958
	if (!ctx.cr6.lt) goto loc_824D2958;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// b 0x824d2a74
	goto loc_824D2A74;
loc_824D2958:
	// subf r9,r10,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// ble cr6,0x824d29a0
	if (!ctx.cr6.gt) goto loc_824D29A0;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x824d29a4
	goto loc_824D29A4;
loc_824D29A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824D29A4:
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r6,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - r31.u64;
	// addme r6,r6
	temp.u8 = (ctx.r6.u32 + 0xFFFFFFFFu < ctx.r6.u32) | (ctx.r6.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r6.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - r31.u64;
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// slw r29,r11,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// slw r28,r11,r7
	r28.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// slw r27,r11,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,7816
	ctx.r11.s64 = ctx.r11.s64 + 7816;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lbzx r23,r10,r11
	r23.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x822d1608
	ctx.lr = 0x824D2A10;
	sub_822D1608(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r8,r7,r10
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// bgt cr6,0x824d2a34
	if (ctx.cr6.gt) goto loc_824D2A34;
	// addi r11,r8,4095
	ctx.r11.s64 = ctx.r8.s64 + 4095;
	// rlwinm r8,r11,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_824D2A34:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r31,r24
	ctx.r3.u64 = r24.u64 - r31.u64;
	// bl 0x822d1bd0
	ctx.lr = 0x824D2A60;
	sub_822D1BD0(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r10.u32);
	// stw r9,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r9.u32);
loc_824D2A74:
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824DA9E0) {
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
	// ble cr6,0x824daa14
	if (!ctx.cr6.gt) goto loc_824DAA14;
	// bl 0x824d8238
	ctx.lr = 0x824DAA14;
	sub_824D8238(ctx, base);
loc_824DAA14:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_824DC430) {
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
	ctx.lr = 0x824DC438;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// addi r26,r3,144
	r26.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc550
	if (ctx.cr6.lt) goto loc_824DC550;
	// lwz r31,120(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dc4a0
	if (ctx.cr6.gt) goto loc_824DC4A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r4,1
	r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dc490
	if (!ctx.cr6.gt) goto loc_824DC490;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7ff8
	ctx.lr = 0x824DC490;
	sub_824D7FF8(ctx, base);
loc_824DC490:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc550
	if (ctx.cr6.lt) goto loc_824DC550;
loc_824DC4A0:
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
	// bgt cr6,0x824dc4f4
	if (ctx.cr6.gt) goto loc_824DC4F4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r27,1
	r29.s64 = r27.s64 + 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dc4e4
	if (!ctx.cr6.gt) goto loc_824DC4E4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d83e8
	ctx.lr = 0x824DC4E4;
	sub_824D83E8(ctx, base);
loc_824DC4E4:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc550
	if (ctx.cr6.lt) goto loc_824DC550;
loc_824DC4F4:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r27,28
	ctx.r11.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(28));
	// stwx r27,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r27.u32);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x824dc544
	if (ctx.cr6.gt) goto loc_824DC544;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r29,r25,1
	r29.s64 = r25.s64 + 1;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dc534
	if (!ctx.cr6.gt) goto loc_824DC534;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d82c8
	ctx.lr = 0x824DC534;
	sub_824D82C8(ctx, base);
loc_824DC534:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dc550
	if (ctx.cr6.lt) goto loc_824DC550;
loc_824DC544:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r24.u32);
loc_824DC550:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824E3FF0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// addi r3,r3,1136
	ctx.r3.s64 = ctx.r3.s64 + 1136;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x826a4440
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
	return;
}

DEFINE_REX_FUNC(sub_824E43A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8269d1a8
	ctx.lr = 0x824E43EC;
	sub_8269D1A8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,3542
	ctx.r4.s64 = 3542;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x824E43FC;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_824E6868) {
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
	ctx.lr = 0x824E6870;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwimi r8,r3,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrlwi r4,r3,21
	ctx.r4.u64 = ctx.r3.u32 & 0x7FF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r8,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x1F;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r10,0,12,15
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	// bl 0x824e5c68
	ctx.lr = 0x824E68B4;
	sub_824E5C68(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwimi r11,r27,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r27,r27,21
	r27.u64 = r27.u32 & 0x7FF;
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e68d0
	if (ctx.cr0.eq) goto loc_824E68D0;
	// bl 0x826b40a0
	ctx.lr = 0x824E68D0;
	sub_826B40A0(ctx, base);
loc_824E68D0:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e6938
	if (ctx.cr6.eq) goto loc_824E6938;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r8,r29,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// beq 0x824e6908
	if (ctx.cr0.eq) goto loc_824E6908;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824E6908:
	// rlwinm. r9,r29,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824e6914
	if (ctx.cr0.eq) goto loc_824E6914;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_824E6914:
	// rlwinm. r9,r29,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824e6920
	if (ctx.cr0.eq) goto loc_824E6920;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_824E6920:
	// rlwinm. r9,r29,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824e692c
	if (ctx.cr0.eq) goto loc_824E692C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_824E692C:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// b 0x824e694c
	goto loc_824E694C;
loc_824E6938:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// rlwimi r30,r10,16,10,15
	r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (r30.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r30,10
	ctx.r10.u64 = r30.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_824E694C:
	// rlwinm r10,r28,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 14) & 0x3FFF;
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,17
	ctx.r7.s64 = 17;
	// addi r9,r9,-19960
	ctx.r9.s64 = ctx.r9.s64 + -19960;
	// rlwinm r6,r8,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r5,r28,18,28,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 18) & 0xC;
	// rlwimi r27,r7,18,0,15
	r27.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFFFF0000) | (r27.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r7,r6,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r6,r5,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824EFDF0) {
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
	ctx.lr = 0x824EFDF8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-25912
	r27.s64 = ctx.r10.s64 + -25912;
	// bne cr6,0x824efe50
	if (!ctx.cr6.eq) goto loc_824EFE50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-26440
	ctx.r5.s64 = ctx.r11.s64 + -26440;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,155
	ctx.r7.s64 = 155;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFE50;
	sub_824EA978(ctx, base);
loc_824EFE50:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x824efe74
	if (!ctx.cr6.eq) goto loc_824EFE74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-26452
	ctx.r5.s64 = ctx.r11.s64 + -26452;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFE74;
	sub_824EA978(ctx, base);
loc_824EFE74:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x824efe98
	if (!ctx.cr6.eq) goto loc_824EFE98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-25924
	ctx.r5.s64 = ctx.r11.s64 + -25924;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,157
	ctx.r7.s64 = 157;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFE98;
	sub_824EA978(ctx, base);
loc_824EFE98:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x824efebc
	if (!ctx.cr6.eq) goto loc_824EFEBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-25940
	ctx.r5.s64 = ctx.r11.s64 + -25940;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,158
	ctx.r7.s64 = 158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFEBC;
	sub_824EA978(ctx, base);
loc_824EFEBC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x824efee0
	if (!ctx.cr6.eq) goto loc_824EFEE0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-25956
	ctx.r5.s64 = ctx.r11.s64 + -25956;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,159
	ctx.r7.s64 = 159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFEE0;
	sub_824EA978(ctx, base);
loc_824EFEE0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824eff04
	if (!ctx.cr6.eq) goto loc_824EFF04;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-25972
	ctx.r5.s64 = ctx.r11.s64 + -25972;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFF04;
	sub_824EA978(ctx, base);
loc_824EFF04:
	// li r4,2452
	ctx.r4.s64 = 2452;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bctrl 
	ctx.lr = 0x824EFF14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824eff40
	if (!ctx.cr0.eq) goto loc_824EFF40;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-26016
	ctx.r5.s64 = ctx.r11.s64 + -26016;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,166
	ctx.r7.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFF38;
	sub_824EA978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824effc0
	goto loc_824EFFC0;
loc_824EFF40:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r23,8(r31)
	REX_STORE_U32(r31.u32 + 8, r23.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r22,12(r31)
	REX_STORE_U32(r31.u32 + 12, r22.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r25,20(r31)
	REX_STORE_U32(r31.u32 + 20, r25.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r10,2448(r31)
	REX_STORE_U32(r31.u32 + 2448, ctx.r10.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r21,36(r31)
	REX_STORE_U32(r31.u32 + 36, r21.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x825a2e60
	ctx.lr = 0x824EFF88;
	sub_825A2E60(ctx, base);
	// stw r3,2428(r31)
	REX_STORE_U32(r31.u32 + 2428, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a2e60
	ctx.lr = 0x824EFF94;
	sub_825A2E60(ctx, base);
	// stw r3,2436(r31)
	REX_STORE_U32(r31.u32 + 2436, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a2e60
	ctx.lr = 0x824EFFA0;
	sub_825A2E60(ctx, base);
	// stw r3,2440(r31)
	REX_STORE_U32(r31.u32 + 2440, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825a29d0
	ctx.lr = 0x824EFFAC;
	sub_825A29D0(ctx, base);
	// stw r3,2432(r31)
	REX_STORE_U32(r31.u32 + 2432, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a2c20
	ctx.lr = 0x824EFFB8;
	sub_825A2C20(ctx, base);
	// stw r3,2444(r31)
	REX_STORE_U32(r31.u32 + 2444, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824EFFC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_824FF5D8) {
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
	ctx.lr = 0x824FF5E0;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
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
	// beq cr6,0x824ff72c
	if (ctx.cr6.eq) goto loc_824FF72C;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// ori r3,r3,208
	ctx.r3.u64 = ctx.r3.u64 | 208;
	// bl 0x823f02b8
	ctx.lr = 0x824FF608;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x824ff718
	if (ctx.cr0.eq) goto loc_824FF718;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,208
	ctx.r5.u64 = ctx.r5.u64 | 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824FF628;
	sub_826A2E60(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ff040
	ctx.lr = 0x824FF648;
	sub_824FF040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824ff658
	if (!ctx.cr0.lt) goto loc_824FF658;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824ff718
	goto loc_824FF718;
loc_824FF658:
	// lbz r11,41(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 41);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32872
	r29.u64 = ctx.r11.u64 | 32872;
	// beq 0x824ff694
	if (ctx.cr0.eq) goto loc_824FF694;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r26,2
	r26.s64 = 2;
	// bl 0x824ff040
	ctx.lr = 0x824FF684;
	sub_824FF040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824ff694
	if (!ctx.cr0.lt) goto loc_824FF694;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824ff718
	goto loc_824FF718;
loc_824FF694:
	// li r28,0
	r28.s64 = 0;
loc_824FF698:
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// bge cr6,0x824ff6c4
	if (!ctx.cr6.lt) goto loc_824FF6C4;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r29.s32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x824fee08
	ctx.lr = 0x824FF6B0;
	sub_824FEE08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blt 0x824ff718
	if (ctx.cr0.lt) goto loc_824FF718;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x824ff698
	goto loc_824FF698;
loc_824FF6C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r5,41(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 41);
	// add r4,r30,r29
	ctx.r4.u64 = r30.u64 + r29.u64;
	// bl 0x824ff308
	ctx.lr = 0x824FF6D4;
	sub_824FF308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824ff6e4
	if (!ctx.cr0.lt) goto loc_824FF6E4;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824ff718
	goto loc_824FF718;
loc_824FF6E4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824ff6fc
	goto loc_824FF6FC;
loc_824FF6FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824ff710
	if (ctx.cr6.eq) goto loc_824FF710;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0350
	ctx.lr = 0x824FF710;
	sub_823F0350(ctx, base);
loc_824FF710:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824ff730
	goto loc_824FF730;
loc_824FF718:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824ff72c
	if (ctx.cr6.eq) goto loc_824FF72C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0350
	ctx.lr = 0x824FF72C;
	sub_823F0350(ctx, base);
loc_824FF72C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824FF730:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82506A98) {
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
	ctx.lr = 0x82506AA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82506ac8
	if (ctx.cr0.eq) goto loc_82506AC8;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x824e4368
	ctx.lr = 0x82506AC8;
	sub_824E4368(ctx, base);
loc_82506AC8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x82506aec
	if (!ctx.cr6.eq) goto loc_82506AEC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825068d8
	ctx.lr = 0x82506ADC;
	sub_825068D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82506aec
	if (!ctx.cr0.eq) goto loc_82506AEC;
loc_82506AE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82506bc4
	goto loc_82506BC4;
loc_82506AEC:
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82506bc0
	if (ctx.cr6.eq) goto loc_82506BC0;
loc_82506AF8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x82506b14
	if (!ctx.cr6.eq) goto loc_82506B14;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825068d8
	ctx.lr = 0x82506B0C;
	sub_825068D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82506ae4
	if (ctx.cr0.eq) goto loc_82506AE4;
loc_82506B14:
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82506b5c
	if (ctx.cr6.eq) goto loc_82506B5C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
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
	// b 0x82506b94
	goto loc_82506B94;
loc_82506B5C:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_82506B94:
	// stw r31,60(r30)
	REX_STORE_U32(r30.u32 + 60, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x82506788
	ctx.lr = 0x82506BAC;
	sub_82506788(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82506bcc
	if (!ctx.cr0.eq) goto loc_82506BCC;
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82506af8
	if (!ctx.cr6.eq) goto loc_82506AF8;
loc_82506BC0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82506BC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82506BCC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82506be4
	if (ctx.cr0.eq) goto loc_82506BE4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82506bec
	goto loc_82506BEC;
loc_82506BE4:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,-40
	ctx.r10.s64 = ctx.r10.s64 + -40;
loc_82506BEC:
	// stw r10,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(r27.u32, r31.u32, ctx.xer);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r7,36(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// and r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x82506c54
	if (ctx.cr6.eq) goto loc_82506C54;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82505988
	ctx.lr = 0x82506C50;
	sub_82505988(ctx, base);
	// b 0x82506bcc
	goto loc_82506BCC;
loc_82506C54:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x82506ae4
	if (!ctx.cr6.eq) goto loc_82506AE4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,28(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 28);
	// lwz r5,60(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 60);
	// bl 0x825066c0
	ctx.lr = 0x82506C6C;
	sub_825066C0(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82506ae4
	if (!ctx.cr6.eq) goto loc_82506AE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,72(r30)
	REX_STORE_U8(r30.u32 + 72, ctx.r11.u8);
	// b 0x82506ae4
	goto loc_82506AE4;
}

DEFINE_REX_FUNC(sub_8251FF10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8251FF18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8251f2f8
	ctx.lr = 0x8251FF30;
	sub_8251F2F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8251ff48
	if (!ctx.cr6.eq) goto loc_8251FF48;
	// li r4,3569
	ctx.r4.s64 = 3569;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x824e4368
	ctx.lr = 0x8251FF48;
	sub_824E4368(ctx, base);
loc_8251FF48:
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82502060
	ctx.lr = 0x8251FF5C;
	sub_82502060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825233D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825233f8
	if (ctx.cr6.lt) goto loc_825233F8;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x825233fc
	if (!ctx.cr6.gt) goto loc_825233FC;
loc_825233F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825233FC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82523494
	if (ctx.cr0.eq) goto loc_82523494;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82523418
	if (ctx.cr6.lt) goto loc_82523418;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8252341c
	if (!ctx.cr6.gt) goto loc_8252341C;
loc_82523418:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252341C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82523494
	if (ctx.cr0.eq) goto loc_82523494;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82523488
	if (!ctx.cr0.eq) goto loc_82523488;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82523488
	if (ctx.cr6.eq) goto loc_82523488;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82523488
	if (!ctx.cr0.eq) goto loc_82523488;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82523478
	if (ctx.cr6.lt) goto loc_82523478;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8252347c
	if (!ctx.cr6.gt) goto loc_8252347C;
loc_82523478:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252347C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8252348c
	if (!ctx.cr0.eq) goto loc_8252348C;
loc_82523488:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252348C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82523494:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8252E650) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8252E658;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8252e678
	if (!ctx.cr6.eq) goto loc_8252E678;
loc_8252E670:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252e6e4
	goto loc_8252E6E4;
loc_8252E678:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252e6e0
	if (!ctx.cr0.eq) goto loc_8252E6E0;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8252e6b0
	goto loc_8252E6B0;
loc_8252E694:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8252e650
	ctx.lr = 0x8252E6A4;
	sub_8252E650(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252e670
	if (!ctx.cr0.eq) goto loc_8252E670;
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8252E6B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8252e694
	if (!ctx.cr6.eq) goto loc_8252E694;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,3,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252e6e0
	if (!ctx.cr0.eq) goto loc_8252E6E0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8252e650
	ctx.lr = 0x8252E6D4;
	sub_8252E650(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8252e6e4
	if (!ctx.cr0.eq) goto loc_8252E6E4;
loc_8252E6E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252E6E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82531AF0) {
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
	ctx.lr = 0x82531AF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x825be308
	ctx.lr = 0x82531B10;
	sub_825BE308(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r26,r11,27
	r26.u64 = ctx.r11.u32 & 0x1F;
	// beq 0x82531ba0
	if (ctx.cr0.eq) goto loc_82531BA0;
	// li r31,0
	r31.s64 = 0;
	// addi r27,r29,-8
	r27.s64 = r29.s64 + -8;
loc_82531B2C:
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// srw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r31.u8 & 0x3F));
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,30,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,1,27,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1E;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// li r5,-1
	ctx.r5.s64 = -1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r7,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r8,r5,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// srw r4,r11,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// lfdx f1,r10,r29
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + r29.u32);
	// bl 0x825b8348
	ctx.lr = 0x82531B84;
	sub_825B8348(ctx, base);
	// stfdu f1,8(r27)
	ctx.fpscr.disableFlushMode();
	ea = 8 + r27.u32;
	REX_STORE_U64(ea, ctx.f1.u64);
	r27.u32 = ea;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82531b2c
	if (ctx.cr6.lt) goto loc_82531B2C;
loc_82531BA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82544328) {
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
	ctx.lr = 0x82544330;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca8
	ctx.lr = 0x82544338;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// lfd f28,3728(r11)
	ctx.fpscr.disableFlushMode();
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// lfs f31,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lfs f29,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f29.f64 = double(temp.f32);
	// lfd f30,-3744(r8)
	f30.u64 = REX_LOAD_U64(ctx.r8.u32 + -3744);
loc_82544360:
	// lwz r11,116(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 116);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544384
	if (ctx.cr6.eq) goto loc_82544384;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82519798
	ctx.lr = 0x82544384;
	sub_82519798(ctx, base);
loc_82544384:
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7678
	ctx.lr = 0x82544394;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r5,38
	ctx.r5.s64 = 38;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7678
	ctx.lr = 0x825443B8;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,652(r14)
	REX_STORE_U32(r14.u32 + 652, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r5,45
	ctx.r5.s64 = 45;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7678
	ctx.lr = 0x825443E0;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,656(r14)
	REX_STORE_U32(r14.u32 + 656, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r5,38
	ctx.r5.s64 = 38;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7678
	ctx.lr = 0x82544408;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,660(r14)
	REX_STORE_U32(r14.u32 + 660, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r31,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,40(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 40);
	// lwz r10,4(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 4);
	// lwz r11,44(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 44);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,40(r14)
	REX_STORE_U32(r14.u32 + 40, ctx.r9.u32);
	// stw r11,44(r14)
	REX_STORE_U32(r14.u32 + 44, ctx.r11.u32);
	// bne 0x82548bbc
	if (!ctx.cr0.eq) goto loc_82548BBC;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq 0x82548bbc
	if (ctx.cr0.eq) goto loc_82548BBC;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8254447C:
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,20(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825444b0
	if (ctx.cr0.eq) goto loc_825444B0;
	// lwz r11,28(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825444a4
	if (ctx.cr0.eq) goto loc_825444A4;
	// lwz r9,36(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// addi r11,r7,32
	ctx.r11.s64 = ctx.r7.s64 + 32;
	// b 0x825444b8
	goto loc_825444B8;
loc_825444A4:
	// lwz r9,28(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// addi r11,r7,24
	ctx.r11.s64 = ctx.r7.s64 + 24;
	// b 0x825444b8
	goto loc_825444B8;
loc_825444B0:
	// lwz r9,20(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// addi r11,r7,16
	ctx.r11.s64 = ctx.r7.s64 + 16;
loc_825444B8:
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// b 0x82544540
	goto loc_82544540;
loc_825444D0:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// rlwinm r6,r6,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r11,40(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82544500
	if (!ctx.cr0.eq) goto loc_82544500;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825444d0
	if (!ctx.cr6.eq) goto loc_825444D0;
loc_82544500:
	// addi r8,r7,32
	ctx.r8.s64 = ctx.r7.s64 + 32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82544548
	if (ctx.cr6.eq) goto loc_82544548;
	// addi r9,r7,24
	ctx.r9.s64 = ctx.r7.s64 + 24;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82544530
	if (ctx.cr6.eq) goto loc_82544530;
	// lwz r11,28(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544530
	if (!ctx.cr0.eq) goto loc_82544530;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82544538
	goto loc_82544538;
loc_82544530:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82544538:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82544548
	if (!ctx.cr0.eq) goto loc_82544548;
loc_82544540:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825444d0
	if (!ctx.cr6.eq) goto loc_825444D0;
loc_82544548:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,564(r14)
	REX_STORE_U32(r14.u32 + 564, ctx.r7.u32);
loc_82544550:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82544554:
	// lwz r21,96(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r20,0
	r20.s64 = 0;
	// addi r11,r21,16
	ctx.r11.s64 = r21.s64 + 16;
	// mr r30,r20
	r30.u64 = r20.u64;
	// lwz r31,20(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 20);
	// clrlwi. r10,r31,31
	ctx.r10.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82544618
	if (!ctx.cr0.eq) goto loc_82544618;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82544618
	if (ctx.cr0.eq) goto loc_82544618;
loc_82544578:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x82544580;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254459c
	if (ctx.cr0.eq) goto loc_8254459C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2288
	ctx.lr = 0x8254459C;
	sub_825C2288(ctx, base);
loc_8254459C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825445e4
	if (ctx.cr6.eq) goto loc_825445E4;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
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
	// bne cr6,0x825445d4
	if (!ctx.cr6.eq) goto loc_825445D4;
loc_825445C4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82544608
	goto loc_82544608;
loc_825445D4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82544618
	if (!ctx.cr0.eq) goto loc_82544618;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x82544610
	goto loc_82544610;
loc_825445E4:
	// lwz r10,20(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 20);
	// addi r11,r21,16
	ctx.r11.s64 = r21.s64 + 16;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825445c4
	if (ctx.cr6.eq) goto loc_825445C4;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82544608:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544618
	if (!ctx.cr0.eq) goto loc_82544618;
loc_82544610:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82544578
	if (!ctx.cr6.eq) goto loc_82544578;
loc_82544618:
	// lwz r31,28(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 28);
	// addi r11,r21,24
	ctx.r11.s64 = r21.s64 + 24;
	// mr r23,r20
	r23.u64 = r20.u64;
	// clrlwi. r10,r31,31
	ctx.r10.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82544dfc
	if (!ctx.cr0.eq) goto loc_82544DFC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82544dfc
	if (ctx.cr0.eq) goto loc_82544DFC;
loc_82544634:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8252e918
	ctx.lr = 0x8254463C;
	sub_8252E918(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d80
	if (ctx.cr0.eq) goto loc_82544D80;
	// stw r20,32(r31)
	REX_STORE_U32(r31.u32 + 32, r20.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f568
	ctx.lr = 0x82544654;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544d80
	if (!ctx.cr0.eq) goto loc_82544D80;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r30,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82544a1c
	if (ctx.cr6.eq) goto loc_82544A1C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8254499c
	if (ctx.cr6.eq) goto loc_8254499C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x825448ac
	if (ctx.cr6.eq) goto loc_825448AC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8254475c
	if (ctx.cr6.eq) goto loc_8254475C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82544d80
	if (!ctx.cr6.eq) goto loc_82544D80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x82544698;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d80
	if (ctx.cr0.eq) goto loc_82544D80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,44(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825c1a18
	ctx.lr = 0x825446C0;
	sub_825C1A18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r28,r11,7,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8250ab60
	ctx.lr = 0x825446D8;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r28,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x825446F0;
	sub_8250A620(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_82544704:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82530e20
	ctx.lr = 0x82544718;
	sub_82530E20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544734
	if (ctx.cr0.eq) goto loc_82544734;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82544734:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8254473C;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x82530160
	ctx.lr = 0x82544754;
	sub_82530160(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// b 0x82544d6c
	goto loc_82544D6C;
loc_8254475C:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x82544768;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d80
	if (ctx.cr0.eq) goto loc_82544D80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,44(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825c1a18
	ctx.lr = 0x82544790;
	sub_825C1A18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82544818
	if (ctx.cr0.eq) goto loc_82544818;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825447B0;
	sub_82503DA0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r30,r11,7,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8250ab60
	ctx.lr = 0x825447D4;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r30,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x825447EC;
	sub_8250A620(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_82544804:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82531020
	ctx.lr = 0x82544814;
	sub_82531020(ctx, base);
	// b 0x82544868
	goto loc_82544868;
loc_82544818:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r28,48(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r27,r11,7,29,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8250ab60
	ctx.lr = 0x82544828;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82544840;
	sub_8250A620(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
loc_82544858:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82530f20
	ctx.lr = 0x82544868;
	sub_82530F20(ctx, base);
loc_82544868:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544884
	if (ctx.cr0.eq) goto loc_82544884;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82544884:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82528fd8
	ctx.lr = 0x8254488C;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bl 0x82530160
	ctx.lr = 0x825448A4;
	sub_82530160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x82544d6c
	goto loc_82544D6C;
loc_825448AC:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x825448B8;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d80
	if (ctx.cr0.eq) goto loc_82544D80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,44(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825c1a18
	ctx.lr = 0x825448E0;
	sub_825C1A18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82544958
	if (ctx.cr0.eq) goto loc_82544958;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82544900;
	sub_82503DA0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r30,r11,7,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8250ab60
	ctx.lr = 0x82544924;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r30,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8254493C;
	sub_8250A620(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x82544858
	goto loc_82544858;
loc_82544958:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r28,48(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r27,r11,7,29,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8250ab60
	ctx.lr = 0x82544968;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82544980;
	sub_8250A620(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x82544804
	goto loc_82544804;
loc_8254499C:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x825449A8;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d80
	if (ctx.cr0.eq) goto loc_82544D80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,44(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x825c1a18
	ctx.lr = 0x825449D0;
	sub_825C1A18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r28,48(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r27,r11,7,29,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x8250ab60
	ctx.lr = 0x825449EC;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82544A04;
	sub_8250A620(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x82544704
	goto loc_82544704;
loc_82544A1C:
	// lwz r24,44(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544d80
	if (!ctx.cr0.eq) goto loc_82544D80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x824f7010
	ctx.lr = 0x82544A38;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d80
	if (ctx.cr0.eq) goto loc_82544D80;
	// lwz r29,12(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82503a60
	ctx.lr = 0x82544A4C;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d80
	if (ctx.cr0.eq) goto loc_82544D80;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r30,9,23,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1FF;
	// rlwinm r11,r11,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544d80
	if (!ctx.cr0.eq) goto loc_82544D80;
	// li r4,809
	ctx.r4.s64 = 809;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252dd80
	ctx.lr = 0x82544A78;
	sub_8252DD80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d80
	if (ctx.cr0.eq) goto loc_82544D80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825bba68
	ctx.lr = 0x82544A8C;
	sub_825BBA68(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r30,r10,36
	r30.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// addi r7,r30,-36
	ctx.r7.s64 = r30.s64 + -36;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r20
	r26.u64 = r20.u64;
	// addi r28,r3,44
	r28.s64 = ctx.r3.s64 + 44;
	// subf r25,r3,r29
	r25.u64 = r29.u64 - ctx.r3.u64;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82544AD4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82544b80
	if (!ctx.cr6.lt) goto loc_82544B80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r25,r28
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + r28.u32);
	// bl 0x8250ad28
	ctx.lr = 0x82544AF0;
	sub_8250AD28(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544b74
	if (ctx.cr0.eq) goto loc_82544B74;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x82544b74
	if (ctx.cr6.eq) goto loc_82544B74;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r11,27,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r7,r11,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r11,31,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r8,r7,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r9,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r8,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwimi r10,r11,0,7,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF) | (ctx.r10.u64 & 0xE000000);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82544B74:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x82544ad4
	goto loc_82544AD4;
loc_82544B80:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82544B84:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82544bac
	if (ctx.cr6.eq) goto loc_82544BAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544ba4
	if (!ctx.cr0.eq) goto loc_82544BA4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82544BA4;
	sub_8250AD28(ctx, base);
loc_82544BA4:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x82544b84
	goto loc_82544B84;
loc_82544BAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwimi r10,r11,0,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// rlwinm r11,r9,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r10,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r10,r9,0,27,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,16(r27)
	REX_STORE_U32(r27.u32 + 16, ctx.r11.u32);
	// rlwinm r11,r9,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d68
	if (ctx.cr0.eq) goto loc_82544D68;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82544d54
	goto loc_82544D54;
loc_82544BFC:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82544c18
	if (ctx.cr6.lt) goto loc_82544C18;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82544c1c
	if (!ctx.cr6.gt) goto loc_82544C1C;
loc_82544C18:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82544C1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d4c
	if (ctx.cr0.eq) goto loc_82544D4C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_82544C28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544c4c
	if (ctx.cr6.eq) goto loc_82544C4C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// beq cr6,0x82544c44
	if (ctx.cr6.eq) goto loc_82544C44;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82544c28
	goto loc_82544C28;
loc_82544C44:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544c50
	goto loc_82544C50;
loc_82544C4C:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_82544C50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544d4c
	if (!ctx.cr0.eq) goto loc_82544D4C;
	// lwz r26,0(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 0);
loc_82544C5C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82544d4c
	if (ctx.cr6.eq) goto loc_82544D4C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544cd8
	if (ctx.cr0.eq) goto loc_82544CD8;
	// lwz r4,12(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544cd8
	if (ctx.cr0.eq) goto loc_82544CD8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82516480
	ctx.lr = 0x82544C88;
	sub_82516480(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82516480
	ctx.lr = 0x82544C98;
	sub_82516480(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82544ccc
	if (ctx.cr6.eq) goto loc_82544CCC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82516b38
	ctx.lr = 0x82544CB4;
	sub_82516B38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82516b38
	ctx.lr = 0x82544CC4;
	sub_82516B38(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82544cd0
	if (!ctx.cr6.eq) goto loc_82544CD0;
loc_82544CCC:
	// li r28,1
	r28.s64 = 1;
loc_82544CD0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544ce0
	if (!ctx.cr0.eq) goto loc_82544CE0;
loc_82544CD8:
	// lwz r26,4(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 4);
	// b 0x82544c5c
	goto loc_82544C5C;
loc_82544CE0:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d3c
	if (ctx.cr0.eq) goto loc_82544D3C;
	// lwz r29,4(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_82544CF0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82544d4c
	if (ctx.cr6.eq) goto loc_82544D4C;
	// lwz r30,16(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82544d34
	if (ctx.cr6.eq) goto loc_82544D34;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d34
	if (ctx.cr0.eq) goto loc_82544D34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825bcf88
	ctx.lr = 0x82544D1C;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544d34
	if (ctx.cr0.eq) goto loc_82544D34;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250adf0
	ctx.lr = 0x82544D34;
	sub_8250ADF0(ctx, base);
loc_82544D34:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x82544cf0
	goto loc_82544CF0;
loc_82544D3C:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250adf0
	ctx.lr = 0x82544D4C;
	sub_8250ADF0(ctx, base);
loc_82544D4C:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
loc_82544D54:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82544d68
	if (!ctx.cr0.eq) goto loc_82544D68;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r25,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r25.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x82544bfc
	if (!ctx.cr0.eq) goto loc_82544BFC;
loc_82544D68:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_82544D6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,228
	ctx.r6.s64 = 228;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825374d8
	ctx.lr = 0x82544D80;
	sub_825374D8(ctx, base);
loc_82544D80:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82544dc8
	if (ctx.cr6.eq) goto loc_82544DC8;
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
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
	// bne cr6,0x82544db8
	if (!ctx.cr6.eq) goto loc_82544DB8;
loc_82544DA8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r23,r31
	r23.u64 = r31.u64;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82544dec
	goto loc_82544DEC;
loc_82544DB8:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82544dfc
	if (!ctx.cr0.eq) goto loc_82544DFC;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x82544df4
	goto loc_82544DF4;
loc_82544DC8:
	// lwz r10,28(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 28);
	// addi r11,r21,24
	ctx.r11.s64 = r21.s64 + 24;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82544da8
	if (ctx.cr6.eq) goto loc_82544DA8;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82544DEC:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544dfc
	if (!ctx.cr0.eq) goto loc_82544DFC;
loc_82544DF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82544634
	if (!ctx.cr6.eq) goto loc_82544634;
loc_82544DFC:
	// lwz r31,36(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 36);
	// addi r11,r21,32
	ctx.r11.s64 = r21.s64 + 32;
	// clrlwi. r10,r31,31
	ctx.r10.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82544e40
	if (!ctx.cr0.eq) goto loc_82544E40;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82544e40
	if (ctx.cr0.eq) goto loc_82544E40;
loc_82544E14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8252e918
	ctx.lr = 0x82544E1C;
	sub_8252E918(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544e28
	if (ctx.cr0.eq) goto loc_82544E28;
	// stw r20,32(r31)
	REX_STORE_U32(r31.u32 + 32, r20.u32);
loc_82544E28:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82544e40
	if (!ctx.cr0.eq) goto loc_82544E40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82544e14
	if (!ctx.cr6.eq) goto loc_82544E14;
loc_82544E40:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825bad90
	ctx.lr = 0x82544E4C;
	sub_825BAD90(ctx, base);
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7678
	ctx.lr = 0x82544E60;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r21,24
	ctx.r10.s64 = r21.s64 + 24;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254578c
	if (!ctx.cr0.eq) goto loc_8254578C;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8254578c
	if (ctx.cr0.eq) goto loc_8254578C;
loc_82544E98:
	// lwz r31,8(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r31,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x82544f5c
	if (!ctx.cr6.eq) goto loc_82544F5C;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// rlwinm r6,r31,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0x7;
	// addi r10,r23,40
	ctx.r10.s64 = r23.s64 + 40;
loc_82544EBC:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82544ed4
	if (!ctx.cr6.lt) goto loc_82544ED4;
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// b 0x82544ebc
	goto loc_82544EBC;
loc_82544ED4:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r8,100
	ctx.r8.s64 = 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825424f8
	ctx.lr = 0x82544EF4;
	sub_825424F8(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545770
	if (!ctx.cr0.eq) goto loc_82545770;
	// lwz r10,336(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 336);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82545770
	if (!ctx.cr6.gt) goto loc_82545770;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
loc_82544F10:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82544f44
	if (ctx.cr6.eq) goto loc_82544F44;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82544f3c
	if (ctx.cr6.eq) goto loc_82544F3C;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82544f3c
	if (ctx.cr0.eq) goto loc_82544F3C;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82545770
	if (ctx.cr0.eq) goto loc_82545770;
loc_82544F3C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82544f10
	goto loc_82544F10;
loc_82544F44:
	// li r10,111
	ctx.r10.s64 = 111;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
	// b 0x82545770
	goto loc_82545770;
loc_82544F5C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82545204
	if (!ctx.cr6.eq) goto loc_82545204;
	// rlwinm r25,r31,31,28,31
	r25.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0xF;
loc_82544F68:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825454a0
	if (ctx.cr6.eq) goto loc_825454A0;
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// lwz r8,28(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,44(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 44);
	// andc r11,r25,r11
	ctx.r11.u64 = r25.u64 & ~ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// subfic r31,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r31.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x825ba3a0
	ctx.lr = 0x82544FA4;
	sub_825BA3A0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 28);
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// lwz r3,48(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 48);
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x82544FC8;
	sub_825BA3A0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x82544ff0
	if (ctx.cr6.eq) goto loc_82544FF0;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x825451f4
	if (!ctx.cr6.eq) goto loc_825451F4;
loc_82544FF0:
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7678
	ctx.lr = 0x82545000;
	sub_824F7678(ctx, base);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r30,1
	ctx.r10.u64 = r30.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82536cc8
	ctx.lr = 0x8254502C;
	sub_82536CC8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r20
	r31.u64 = r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825451e4
	if (!ctx.cr0.eq) goto loc_825451E4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825451e4
	if (ctx.cr0.eq) goto loc_825451E4;
loc_82545044:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545064
	if (!ctx.cr0.eq) goto loc_82545064;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545044
	if (!ctx.cr6.eq) goto loc_82545044;
loc_82545064:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// ble cr6,0x825451e4
	if (!ctx.cr6.gt) goto loc_825451E4;
	// rlwinm r26,r31,3,0,28
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x82545080;
	sub_824F7DC0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r3
	r28.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82545090:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254514c
	if (!ctx.cr0.eq) goto loc_8254514C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8254514c
	if (ctx.cr0.eq) goto loc_8254514C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 65536;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825450f0
	if (ctx.cr0.eq) goto loc_825450F0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// b 0x825450fc
	goto loc_825450FC;
loc_825450F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_825450FC:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82545144
	if (!ctx.cr0.eq) goto loc_82545144;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824e4308
	ctx.lr = 0x82545144;
	sub_824E4308(ctx, base);
loc_82545144:
	// addi r28,r28,-8
	r28.s64 = r28.s64 + -8;
	// b 0x82545090
	goto loc_82545090;
loc_8254514C:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825424f8
	ctx.lr = 0x82545170;
	sub_825424F8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825451d0
	if (ctx.cr6.eq) goto loc_825451D0;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8254517C:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825451c4
	if (!ctx.cr6.eq) goto loc_825451C4;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825451a4
	goto loc_825451A4;
loc_8254519C:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825451A4:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8254519c
	if (!ctx.cr6.eq) goto loc_8254519C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x825451C4;
	sub_824F7A20(ctx, base);
loc_825451C4:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x8254517c
	if (!ctx.cr0.eq) goto loc_8254517C;
loc_825451D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x825451E4;
	sub_824FFBD8(ctx, base);
loc_825451E4:
	// lwz r10,976(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 976);
	// addi r11,r14,972
	ctx.r11.s64 = r14.s64 + 972;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r29,976(r14)
	REX_STORE_U32(r14.u32 + 976, r29.u32);
loc_825451F4:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// andc r11,r25,r11
	ctx.r11.u64 = r25.u64 & ~ctx.r11.u64;
	// subf r25,r11,r25
	r25.u64 = r25.u64 - ctx.r11.u64;
	// b 0x82544f68
	goto loc_82544F68;
loc_82545204:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x825454a0
	if (!ctx.cr6.eq) goto loc_825454A0;
	// lwz r4,48(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 48);
	// lwz r3,44(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 44);
	// bl 0x824f7010
	ctx.lr = 0x82545218;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825454a0
	if (!ctx.cr0.eq) goto loc_825454A0;
	// rlwinm r25,r31,31,28,31
	r25.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0xF;
loc_82545224:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825454a0
	if (ctx.cr6.eq) goto loc_825454A0;
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// li r5,27
	ctx.r5.s64 = 27;
	// andc r11,r25,r11
	ctx.r11.u64 = r25.u64 & ~ctx.r11.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// subfic r31,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r31.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// bl 0x824f7678
	ctx.lr = 0x8254524C;
	sub_824F7678(ctx, base);
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r30,1
	ctx.r10.u64 = r30.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82536f60
	ctx.lr = 0x82545278;
	sub_82536F60(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r31,r20
	r31.u64 = r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545480
	if (!ctx.cr0.eq) goto loc_82545480;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82545480
	if (ctx.cr0.eq) goto loc_82545480;
loc_82545290:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825452b0
	if (!ctx.cr0.eq) goto loc_825452B0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545290
	if (!ctx.cr6.eq) goto loc_82545290;
loc_825452B0:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x82545480
	if (ctx.cr6.lt) goto loc_82545480;
	// rlwinm r24,r31,3,0,28
	r24.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x825452CC;
	sub_824F7DC0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r3
	r28.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_825452E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254535c
	if (!ctx.cr0.eq) goto loc_8254535C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8254535c
	if (ctx.cr0.eq) goto loc_8254535C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
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
	// bne 0x82545354
	if (!ctx.cr0.eq) goto loc_82545354;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	ctx.lr = 0x82545354;
	sub_824E4308(ctx, base);
loc_82545354:
	// stwu r29,-8(r28)
	ea = -8 + r28.u32;
	REX_STORE_U32(ea, r29.u32);
	r28.u32 = ea;
	// b 0x825452e0
	goto loc_825452E0;
loc_8254535C:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825424f8
	ctx.lr = 0x82545380;
	sub_825424F8(ctx, base);
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82545400
	if (ctx.cr6.eq) goto loc_82545400;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82545394:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825453e0
	if (!ctx.cr6.eq) goto loc_825453E0;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825453bc
	goto loc_825453BC;
loc_825453B4:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825453BC:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x825453b4
	if (!ctx.cr6.eq) goto loc_825453B4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x825453DC;
	sub_824F7A20(ctx, base);
	// b 0x825453f4
	goto loc_825453F4;
loc_825453E0:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825453f4
	if (!ctx.cr0.eq) goto loc_825453F4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_825453F4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82545394
	if (!ctx.cr0.eq) goto loc_82545394;
loc_82545400:
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(r28.u32, r31.u32, ctx.xer);
	// bne cr6,0x8254546c
	if (!ctx.cr6.eq) goto loc_8254546C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8254546c
	if (ctx.cr6.eq) goto loc_8254546C;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82545414:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,3968
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3968, ctx.xer);
	// beq cr6,0x82545460
	if (ctx.cr6.eq) goto loc_82545460;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c0b40
	ctx.lr = 0x82545444;
	sub_825C0B40(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r9,r11,7,18,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x3F80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82545460:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82545414
	if (!ctx.cr0.eq) goto loc_82545414;
loc_8254546C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x82545480;
	sub_824FFBD8(ctx, base);
loc_82545480:
	// lwz r10,976(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 976);
	// addi r9,r25,-1
	ctx.r9.s64 = r25.s64 + -1;
	// addi r11,r14,972
	ctx.r11.s64 = r14.s64 + 972;
	// andc r11,r25,r9
	ctx.r11.u64 = r25.u64 & ~ctx.r9.u64;
	// subf r25,r11,r25
	r25.u64 = r25.u64 - ctx.r11.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r27,976(r14)
	REX_STORE_U32(r14.u32 + 976, r27.u32);
	// b 0x82545224
	goto loc_82545224;
loc_825454A0:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82545770
	if (ctx.cr0.eq) goto loc_82545770;
	// rlwinm. r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545770
	if (ctx.cr0.eq) goto loc_82545770;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7678
	ctx.lr = 0x825454C4;
	sub_824F7678(ctx, base);
	// addi r25,r3,4
	r25.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r25,1
	ctx.r11.u64 = r25.u64 | 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x82545504
	if (!ctx.cr0.eq) goto loc_82545504;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545504
	if (ctx.cr0.eq) goto loc_82545504;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82545514
	if (!ctx.cr6.gt) goto loc_82545514;
loc_82545504:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82545510;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82545514:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r23,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r23.u32);
	// bl 0x82516b38
	ctx.lr = 0x82545538;
	sub_82516B38(ctx, base);
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825455c4
	goto loc_825455C4;
loc_82545544:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825455c0
	if (ctx.cr0.eq) goto loc_825455C0;
	// rlwinm. r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825455c0
	if (ctx.cr0.eq) goto loc_825455C0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82516b38
	ctx.lr = 0x82545564;
	sub_82516B38(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x825455c0
	if (!ctx.cr6.eq) goto loc_825455C0;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254559c
	if (!ctx.cr0.eq) goto loc_8254559C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8254559c
	if (ctx.cr0.eq) goto loc_8254559C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825455a8
	if (!ctx.cr6.gt) goto loc_825455A8;
loc_8254559C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825455A8;
	sub_8251FE00(ctx, base);
loc_825455A8:
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
loc_825455C0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_825455C4:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825455dc
	if (!ctx.cr0.eq) goto loc_825455DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bne cr6,0x82545544
	if (!ctx.cr6.eq) goto loc_82545544;
loc_825455DC:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r31,r20
	r31.u64 = r20.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545614
	if (!ctx.cr0.eq) goto loc_82545614;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82545614
	if (ctx.cr0.eq) goto loc_82545614;
loc_825455F4:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545614
	if (!ctx.cr0.eq) goto loc_82545614;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825455f4
	if (!ctx.cr6.eq) goto loc_825455F4;
loc_82545614:
	// rlwinm r26,r31,3,0,28
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x82545628;
	sub_824F7DC0(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r3
	r29.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8254563C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825456c4
	if (!ctx.cr0.eq) goto loc_825456C4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825456c4
	if (ctx.cr0.eq) goto loc_825456C4;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
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
	// bne 0x825456b0
	if (!ctx.cr0.eq) goto loc_825456B0;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x825456B0;
	sub_824E4308(ctx, base);
loc_825456B0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825456BC;
	sub_8250AB60(ctx, base);
	// stwu r3,-8(r29)
	ea = -8 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// b 0x8254563c
	goto loc_8254563C;
loc_825456C4:
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x825456D8;
	sub_824FFBD8(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825424f8
	ctx.lr = 0x825456FC;
	sub_825424F8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8254575c
	if (ctx.cr6.eq) goto loc_8254575C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82545708:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545750
	if (!ctx.cr6.eq) goto loc_82545750;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82545730
	goto loc_82545730;
loc_82545728:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82545730:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82545728
	if (!ctx.cr6.eq) goto loc_82545728;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x82545750;
	sub_824F7A20(ctx, base);
loc_82545750:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82545708
	if (!ctx.cr0.eq) goto loc_82545708;
loc_8254575C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x82545770;
	sub_824FFBD8(ctx, base);
loc_82545770:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254578c
	if (!ctx.cr0.eq) goto loc_8254578C;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544e98
	if (!ctx.cr6.eq) goto loc_82544E98;
loc_8254578C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825426b8
	ctx.lr = 0x8254579C;
	sub_825426B8(ctx, base);
	// lwz r10,28(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 28);
	// addi r11,r21,24
	ctx.r11.s64 = r21.s64 + 24;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825459b4
	if (!ctx.cr0.eq) goto loc_825459B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825459a8
	goto loc_825459A8;
loc_825457B4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82503a60
	ctx.lr = 0x825457BC;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545998
	if (ctx.cr0.eq) goto loc_82545998;
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545998
	if (!ctx.cr6.eq) goto loc_82545998;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f568
	ctx.lr = 0x825457DC;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545998
	if (!ctx.cr0.eq) goto loc_82545998;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// li r30,1
	r30.s64 = 1;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545998
	if (!ctx.cr0.eq) goto loc_82545998;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82545998
	if (ctx.cr0.eq) goto loc_82545998;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r29,r11,25,25,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
loc_8254580C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82545840
	if (!ctx.cr6.eq) goto loc_82545840;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545840
	if (!ctx.cr6.eq) goto loc_82545840;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f568
	ctx.lr = 0x82545834;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545840
	if (!ctx.cr0.eq) goto loc_82545840;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82545840:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254585c
	if (!ctx.cr0.eq) goto loc_8254585C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8254580c
	if (!ctx.cr0.eq) goto loc_8254580C;
loc_8254585C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// ble cr6,0x82545998
	if (!ctx.cr6.gt) goto loc_82545998;
	// rlwinm r27,r30,3,0,28
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x82545878;
	sub_824F7DC0(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r31,r26
	r31.u64 = r26.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r3
	r29.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82545890:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825458d4
	if (!ctx.cr0.eq) goto loc_825458D4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825458d4
	if (!ctx.cr6.eq) goto loc_825458D4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f568
	ctx.lr = 0x825458BC;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825458d4
	if (!ctx.cr0.eq) goto loc_825458D4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825458D0;
	sub_8250AB60(ctx, base);
	// stwu r3,-8(r29)
	ea = -8 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
loc_825458D4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825458f0
	if (!ctx.cr0.eq) goto loc_825458F0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82545890
	if (!ctx.cr0.eq) goto loc_82545890;
loc_825458F0:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825424f8
	ctx.lr = 0x82545914;
	sub_825424F8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82545974
	if (ctx.cr6.eq) goto loc_82545974;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82545920:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545968
	if (!ctx.cr6.eq) goto loc_82545968;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82545948
	goto loc_82545948;
loc_82545940:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82545948:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82545940
	if (!ctx.cr6.eq) goto loc_82545940;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x82545968;
	sub_824F7A20(ctx, base);
loc_82545968:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82545920
	if (!ctx.cr0.eq) goto loc_82545920;
loc_82545974:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x82545988;
	sub_824FFBD8(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825426b8
	ctx.lr = 0x82545998;
	sub_825426B8(ctx, base);
loc_82545998:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825459b4
	if (!ctx.cr0.eq) goto loc_825459B4;
loc_825459A8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r26.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x825457b4
	if (!ctx.cr0.eq) goto loc_825457B4;
loc_825459B4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r29,116(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// beq cr6,0x82545b58
	if (ctx.cr6.eq) goto loc_82545B58;
loc_825459D0:
	// addi r30,r1,84
	r30.s64 = ctx.r1.s64 + 84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82545b54
	if (ctx.cr6.eq) goto loc_82545B54;
loc_825459DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,3,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545a4c
	if (!ctx.cr0.eq) goto loc_82545A4C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r22,4
	ctx.r11.s64 = r22.s64 + 4;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545a24
	if (!ctx.cr0.eq) goto loc_82545A24;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82545a24
	if (ctx.cr0.eq) goto loc_82545A24;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82545a30
	if (!ctx.cr6.gt) goto loc_82545A30;
loc_82545A24:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82545A30;
	sub_8251FE00(ctx, base);
loc_82545A30:
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
	// b 0x82545b3c
	goto loc_82545B3C;
loc_82545A4C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// b 0x82545a98
	goto loc_82545A98;
loc_82545A58:
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82545A60:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r9,r9,0,3,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x82545a58
	if (ctx.cr0.eq) goto loc_82545A58;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// oris r8,r8,16384
	ctx.r8.u64 = ctx.r8.u64 | 1073741824;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82545a94
	if (!ctx.cr0.eq) goto loc_82545A94;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82545A94:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82545A98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545a60
	if (!ctx.cr6.eq) goto loc_82545A60;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545b38
	if (!ctx.cr0.eq) goto loc_82545B38;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// clrlwi. r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq 0x82545b20
	if (ctx.cr0.eq) goto loc_82545B20;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
loc_82545AF8:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 12);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82545b20
	if (ctx.cr0.eq) goto loc_82545B20;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// clrlwi r8,r8,19
	ctx.r8.u64 = ctx.r8.u32 & 0x1FFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82545af8
	if (ctx.cr6.lt) goto loc_82545AF8;
loc_82545B20:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82545b3c
	if (!ctx.cr6.eq) goto loc_82545B3C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82545b3c
	goto loc_82545B3C;
loc_82545B38:
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_82545B3C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825459dc
	if (!ctx.cr6.eq) goto loc_825459DC;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825459d0
	if (!ctx.cr6.eq) goto loc_825459D0;
loc_82545B54:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82545B58:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545f7c
	if (!ctx.cr0.eq) goto loc_82545F7C;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r23,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	r23.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x82545f7c
	if (ctx.cr0.eq) goto loc_82545F7C;
loc_82545B70:
	// lwz r11,24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24);
	// addi r15,r23,24
	r15.s64 = r23.s64 + 24;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82545c78
	if (!ctx.cr6.eq) goto loc_82545C78;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r31,r20
	r31.u64 = r20.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// clrlwi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82545bcc
	if (ctx.cr0.eq) goto loc_82545BCC;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r10,r15,-4
	ctx.r10.s64 = r15.s64 + -4;
	// clrlwi r8,r9,19
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFF;
loc_82545BA8:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// blt cr6,0x82545ba8
	if (ctx.cr6.lt) goto loc_82545BA8;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// bgt cr6,0x82545f5c
	if (ctx.cr6.gt) goto loc_82545F5C;
loc_82545BCC:
	// lwz r4,20(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 20);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// b 0x82545c50
	goto loc_82545C50;
loc_82545BD8:
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82545c4c
	if (!ctx.cr6.eq) goto loc_82545C4C;
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// clrlwi. r7,r8,19
	ctx.r7.u64 = ctx.r8.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82545c30
	if (ctx.cr0.eq) goto loc_82545C30;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// clrlwi r5,r7,19
	ctx.r5.u64 = ctx.r7.u32 & 0x1FFF;
loc_82545C14:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r7,r7,18,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0x7;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// blt cr6,0x82545c14
	if (ctx.cr6.lt) goto loc_82545C14;
loc_82545C30:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x82545c4c
	if (!ctx.cr6.eq) goto loc_82545C4C;
	// rlwinm r11,r8,19,13,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x7FFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r8,r11,14,3,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1FFFC000) | (ctx.r8.u64 & 0xFFFFFFFFE0003FFF);
	// rlwinm r11,r8,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82545C4C:
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_82545C50:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82545bd8
	if (!ctx.cr6.eq) goto loc_82545BD8;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545f00
	if (ctx.cr0.eq) goto loc_82545F00;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r10,r11,19,13,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// rlwimi r11,r10,14,3,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1FFFC000) | (ctx.r11.u64 & 0xFFFFFFFFE0003FFF);
	// rlwinm r11,r11,0,19,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// b 0x82545f00
	goto loc_82545F00;
loc_82545C78:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82545f00
	if (!ctx.cr6.eq) goto loc_82545F00;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r16,r20
	r16.u64 = r20.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// clrlwi. r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82545f5c
	if (ctx.cr0.eq) goto loc_82545F5C;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r10,r15,-4
	ctx.r10.s64 = r15.s64 + -4;
	// clrlwi r8,r9,19
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFF;
loc_82545CA0:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// add r16,r9,r16
	r16.u64 = ctx.r9.u64 + r16.u64;
	// blt cr6,0x82545ca0
	if (ctx.cr6.lt) goto loc_82545CA0;
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(r16.u32, 3, ctx.xer);
	// blt cr6,0x82545f5c
	if (ctx.cr6.lt) goto loc_82545F5C;
	// mr r17,r20
	r17.u64 = r20.u64;
loc_82545CC8:
	// addi r11,r17,6
	ctx.r11.s64 = r17.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r19,4(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82545CD8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82545ef4
	if (ctx.cr6.eq) goto loc_82545EF4;
	// lwz r18,16(r19)
	r18.u64 = REX_LOAD_U32(r19.u32 + 16);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x82545ee8
	if (ctx.cr6.eq) goto loc_82545EE8;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545ee8
	if (ctx.cr0.eq) goto loc_82545EE8;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x82545ee8
	if (!ctx.cr6.eq) goto loc_82545EE8;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r22,r17,1
	r22.s64 = r17.s64 + 1;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82545ee8
	if (!ctx.cr6.lt) goto loc_82545EE8;
	// addi r11,r22,6
	ctx.r11.s64 = r22.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r11,r23
	r20.u64 = ctx.r11.u64 + r23.u64;
loc_82545D28:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r21,4(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82545D30:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82545ed8
	if (ctx.cr6.eq) goto loc_82545ED8;
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545ed0
	if (ctx.cr6.eq) goto loc_82545ED0;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82545ed0
	if (ctx.cr0.eq) goto loc_82545ED0;
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(r21.u32, r19.u32, ctx.xer);
	// beq cr6,0x82545ed0
	if (ctx.cr6.eq) goto loc_82545ED0;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82545ed0
	if (!ctx.cr6.eq) goto loc_82545ED0;
	// lwz r24,4(r18)
	r24.u64 = REX_LOAD_U32(r18.u32 + 4);
loc_82545D64:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82545ed0
	if (ctx.cr6.eq) goto loc_82545ED0;
	// lwz r25,16(r24)
	r25.u64 = REX_LOAD_U32(r24.u32 + 16);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82545e14
	if (ctx.cr6.eq) goto loc_82545E14;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545e14
	if (ctx.cr0.eq) goto loc_82545E14;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x82545e14
	if (!ctx.cr6.eq) goto loc_82545E14;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// clrlwi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545e14
	if (ctx.cr0.eq) goto loc_82545E14;
	// mr r27,r15
	r27.u64 = r15.u64;
loc_82545DA8:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
loc_82545DB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545dd4
	if (ctx.cr6.eq) goto loc_82545DD4;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82545dcc
	if (ctx.cr6.eq) goto loc_82545DCC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82545db0
	goto loc_82545DB0;
loc_82545DCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82545dd8
	goto loc_82545DD8;
loc_82545DD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82545DD8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545dfc
	if (ctx.cr0.eq) goto loc_82545DFC;
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(r16.u32, 3, ctx.xer);
	// bne cr6,0x82545e1c
	if (!ctx.cr6.eq) goto loc_82545E1C;
	// li r6,41
	ctx.r6.s64 = 41;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f838
	ctx.lr = 0x82545DFC;
	sub_8252F838(ctx, base);
loc_82545DFC:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// clrlwi r8,r11,19
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82545da8
	if (ctx.cr6.lt) goto loc_82545DA8;
loc_82545E14:
	// lwz r24,8(r24)
	r24.u64 = REX_LOAD_U32(r24.u32 + 8);
	// b 0x82545d64
	goto loc_82545D64;
loc_82545E1C:
	// lwz r28,4(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_82545E20:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82545dfc
	if (ctx.cr6.eq) goto loc_82545DFC;
	// lwz r29,16(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82545ec8
	if (ctx.cr6.eq) goto loc_82545EC8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545ec8
	if (ctx.cr0.eq) goto loc_82545EC8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x82545ec8
	if (!ctx.cr6.eq) goto loc_82545EC8;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// clrlwi. r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545ec8
	if (ctx.cr0.eq) goto loc_82545EC8;
	// mr r31,r15
	r31.u64 = r15.u64;
loc_82545E64:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82545E6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545e90
	if (ctx.cr6.eq) goto loc_82545E90;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82545e88
	if (ctx.cr6.eq) goto loc_82545E88;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82545e6c
	goto loc_82545E6C;
loc_82545E88:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82545e94
	goto loc_82545E94;
loc_82545E90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82545E94:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545eb0
	if (ctx.cr0.eq) goto loc_82545EB0;
	// li r6,61
	ctx.r6.s64 = 61;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f838
	ctx.lr = 0x82545EB0;
	sub_8252F838(ctx, base);
loc_82545EB0:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82545e64
	if (ctx.cr6.lt) goto loc_82545E64;
loc_82545EC8:
	// lwz r28,8(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 8);
	// b 0x82545e20
	goto loc_82545E20;
loc_82545ED0:
	// lwz r21,8(r21)
	r21.u64 = REX_LOAD_U32(r21.u32 + 8);
	// b 0x82545d30
	goto loc_82545D30;
loc_82545ED8:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmplw cr6,r22,r8
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82545d28
	if (ctx.cr6.lt) goto loc_82545D28;
loc_82545EE8:
	// lwz r19,8(r19)
	r19.u64 = REX_LOAD_U32(r19.u32 + 8);
	// li r20,0
	r20.s64 = 0;
	// b 0x82545cd8
	goto loc_82545CD8;
loc_82545EF4:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// cmplw cr6,r17,r8
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82545cc8
	if (ctx.cr6.lt) goto loc_82545CC8;
loc_82545F00:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
loc_82545F14:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82545f5c
	if (!ctx.cr6.lt) goto loc_82545F5C;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r8,r8,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82545f38
	if (!ctx.cr0.eq) goto loc_82545F38;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82545f14
	goto loc_82545F14;
loc_82545F38:
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// clrlwi r8,r9,19
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFF;
	// rlwinm r11,r9,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFE000;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwimi r11,r9,0,19,2
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE0001FFF) | (ctx.r11.u64 & 0x1FFFE000);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
loc_82545F5C:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545f78
	if (!ctx.cr0.eq) goto loc_82545F78;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r23,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	r23.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne 0x82545b70
	if (!ctx.cr0.eq) goto loc_82545B70;
loc_82545F78:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82545F7C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82545ffc
	if (!ctx.cr0.eq) goto loc_82545FFC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545ffc
	if (ctx.cr6.eq) goto loc_82545FFC;
loc_82545F90:
	// lwz r11,20(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// addi r9,r7,20
	ctx.r9.s64 = ctx.r7.s64 + 20;
	// b 0x82545fd8
	goto loc_82545FD8;
loc_82545F9C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r8,r8,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82545fb8
	if (ctx.cr0.eq) goto loc_82545FB8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x82545fd4
	goto loc_82545FD4;
loc_82545FB8:
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r8,r6,0,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFE000;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwimi r11,r6,0,19,2
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFE0001FFF) | (ctx.r11.u64 & 0x1FFFE000);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82545FD4:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
loc_82545FD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82545f9c
	if (!ctx.cr6.eq) goto loc_82545F9C;
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82545ff8
	if (!ctx.cr0.eq) goto loc_82545FF8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82545f90
	if (!ctx.cr6.eq) goto loc_82545F90;
loc_82545FF8:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82545FFC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546180
	if (!ctx.cr0.eq) goto loc_82546180;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546180
	if (ctx.cr6.eq) goto loc_82546180;
loc_82546010:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r18,0
	r18.s64 = 0;
	// clrlwi. r17,r11,19
	r17.u64 = ctx.r11.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq 0x82546160
	if (ctx.cr0.eq) goto loc_82546160;
	// addi r19,r25,24
	r19.s64 = r25.s64 + 24;
	// mr r21,r19
	r21.u64 = r19.u64;
loc_82546028:
	// lwz r24,0(r21)
	r24.u64 = REX_LOAD_U32(r21.u32 + 0);
	// li r23,0
	r23.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r27,44
	r27.s64 = 44;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r20,r11,13,29,31
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
loc_82546040:
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(r22.u32, r20.u32, ctx.xer);
	// bge cr6,0x82546138
	if (!ctx.cr6.lt) goto loc_82546138;
	// lwzx r31,r27,r24
	r31.u64 = REX_LOAD_U32(r27.u32 + r24.u32);
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8252e918
	ctx.lr = 0x82546058;
	sub_8252E918(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254612c
	if (ctx.cr0.eq) goto loc_8254612C;
	// lwz r26,32(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8254612c
	if (ctx.cr6.eq) goto loc_8254612C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6fc8
	ctx.lr = 0x82546074;
	sub_824F6FC8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r19
	r31.u64 = r19.u64;
loc_82546080:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r27,r11
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x825460b8
	if (!ctx.cr6.eq) goto loc_825460B8;
	// bl 0x824f6fc8
	ctx.lr = 0x82546098;
	sub_824F6FC8(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825460b8
	if (!ctx.cr6.eq) goto loc_825460B8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82546080
	if (ctx.cr6.lt) goto loc_82546080;
loc_825460B8:
	// cmplw cr6,r30,r17
	ctx.cr6.compare<uint32_t>(r30.u32, r17.u32, ctx.xer);
	// beq cr6,0x8254612c
	if (ctx.cr6.eq) goto loc_8254612C;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 20);
loc_825460C4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825460f4
	if (ctx.cr0.eq) goto loc_825460F4;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_825460D4:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825460ec
	if (ctx.cr6.eq) goto loc_825460EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825460d4
	if (!ctx.cr6.eq) goto loc_825460D4;
loc_825460EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82546124
	if (!ctx.cr6.eq) goto loc_82546124;
loc_825460F4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546118
	if (!ctx.cr0.eq) goto loc_82546118;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,19,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFFF;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// ble cr6,0x82546118
	if (!ctx.cr6.gt) goto loc_82546118;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
loc_82546118:
	// lwz r26,4(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825460c4
	if (!ctx.cr6.eq) goto loc_825460C4;
loc_82546124:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82546148
	if (!ctx.cr6.eq) goto loc_82546148;
loc_8254612C:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x82546040
	goto loc_82546040;
loc_82546138:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82546148
	if (!ctx.cr6.gt) goto loc_82546148;
	// sth r23,6(r25)
	REX_STORE_U16(r25.u32 + 6, r23.u16);
loc_82546148:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82546028
	if (ctx.cr6.lt) goto loc_82546028;
loc_82546160:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254617c
	if (!ctx.cr0.eq) goto loc_8254617C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82546010
	if (!ctx.cr6.eq) goto loc_82546010;
loc_8254617C:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82546180:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825461f4
	if (!ctx.cr0.eq) goto loc_825461F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825461f4
	if (ctx.cr6.eq) goto loc_825461F4;
loc_82546190:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825461d8
	if (ctx.cr0.eq) goto loc_825461D8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r9,100
	ctx.r9.s64 = ctx.r9.s64 + 100;
	// sth r9,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// b 0x825461d0
	goto loc_825461D0;
loc_825461B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r8,r8,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825461cc
	if (!ctx.cr0.eq) goto loc_825461CC;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r8,100
	ctx.r8.s64 = ctx.r8.s64 + 100;
	// sth r8,6(r9)
	REX_STORE_U16(ctx.r9.u32 + 6, ctx.r8.u16);
loc_825461CC:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_825461D0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825461b0
	if (!ctx.cr6.eq) goto loc_825461B0;
loc_825461D8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825461f0
	if (!ctx.cr0.eq) goto loc_825461F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82546190
	if (!ctx.cr6.eq) goto loc_82546190;
loc_825461F0:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_825461F4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546278
	if (!ctx.cr0.eq) goto loc_82546278;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r10,-16
	ctx.xer.ca = ctx.r10.u32 > 15;
	ctx.r10.s64 = ctx.r10.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82546278
	if (ctx.cr0.eq) goto loc_82546278;
loc_8254620C:
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x82546238
	goto loc_82546238;
loc_82546214:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r9,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82546234
	if (!ctx.cr0.eq) goto loc_82546234;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r11,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
loc_82546234:
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_82546238:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82546214
	if (!ctx.cr6.eq) goto loc_82546214;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546258
	if (ctx.cr0.eq) goto loc_82546258;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82546258:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546274
	if (!ctx.cr0.eq) goto loc_82546274;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r10.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254620c
	if (!ctx.cr0.eq) goto loc_8254620C;
loc_82546274:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82546278:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// bne 0x825462e4
	if (!ctx.cr0.eq) goto loc_825462E4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825462e4
	if (ctx.cr6.eq) goto loc_825462E4;
loc_82546290:
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x825462bc
	goto loc_825462BC;
loc_82546298:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x825462b8
	if (!ctx.cr6.lt) goto loc_825462B8;
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r11,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
loc_825462B8:
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_825462BC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82546298
	if (!ctx.cr6.eq) goto loc_82546298;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825462e0
	if (!ctx.cr0.eq) goto loc_825462E0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82546290
	if (!ctx.cr6.eq) goto loc_82546290;
loc_825462E0:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_825462E4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546330
	if (!ctx.cr0.eq) goto loc_82546330;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546330
	if (ctx.cr6.eq) goto loc_82546330;
loc_825462F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82546314
	if (!ctx.cr6.gt) goto loc_82546314;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
loc_82546314:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254632c
	if (!ctx.cr0.eq) goto loc_8254632C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825462f4
	if (!ctx.cr6.eq) goto loc_825462F4;
loc_8254632C:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82546330:
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546278
	if (!ctx.cr0.eq) goto loc_82546278;
	// li r23,1
	r23.s64 = 1;
	// b 0x82546344
	goto loc_82546344;
loc_82546340:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82546344:
	// li r16,3
	r16.s64 = 3;
	// li r15,0
	r15.s64 = 0;
loc_8254634C:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r24,r15
	r24.u64 = r15.u64;
	// mr r29,r15
	r29.u64 = r15.u64;
	// bne 0x8254670c
	if (!ctx.cr0.eq) goto loc_8254670C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	r31.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8254670c
	if (ctx.cr0.eq) goto loc_8254670C;
loc_8254636C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,3,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82546504
	if (ctx.cr0.eq) goto loc_82546504;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82546504
	if (!ctx.cr0.eq) goto loc_82546504;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// beq cr6,0x82546504
	if (ctx.cr6.eq) goto loc_82546504;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x82546504
	if (ctx.cr6.gt) goto loc_82546504;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// b 0x825463dc
	goto loc_825463DC;
loc_825463A8:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,3,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825463d4
	if (!ctx.cr0.eq) goto loc_825463D4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r6,49
	ctx.r6.s64 = 49;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x824ffbd8
	ctx.lr = 0x825463D0;
	sub_824FFBD8(ctx, base);
	// b 0x825463d8
	goto loc_825463D8;
loc_825463D4:
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
loc_825463D8:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_825463DC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825463a8
	if (!ctx.cr6.eq) goto loc_825463A8;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// clrlwi. r11,r6,19
	ctx.r11.u64 = ctx.r6.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254644c
	if (ctx.cr0.eq) goto loc_8254644C;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// clrlwi r7,r10,19
	ctx.r7.u64 = ctx.r10.u32 & 0x1FFF;
loc_82546404:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254641c
	if (ctx.cr6.eq) goto loc_8254641C;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8254641C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82546404
	if (ctx.cr6.lt) goto loc_82546404;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// ble cr6,0x8254644c
	if (!ctx.cr6.gt) goto loc_8254644C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254644c
	if (!ctx.cr0.eq) goto loc_8254644C;
	// oris r11,r6,32768
	ctx.r11.u64 = ctx.r6.u64 | 2147483648;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82546504
	goto loc_82546504;
loc_8254644C:
	// lwz r30,24(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82546504
	if (ctx.cr6.eq) goto loc_82546504;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x82546504
	if (ctx.cr6.eq) goto loc_82546504;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f568
	ctx.lr = 0x82546474;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82546504
	if (!ctx.cr0.eq) goto loc_82546504;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82542b30
	ctx.lr = 0x82546490;
	sub_82542B30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82546504
	if (ctx.cr0.eq) goto loc_82546504;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825464ec
	if (ctx.cr6.eq) goto loc_825464EC;
loc_825464A8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825464d8
	if (!ctx.cr0.eq) goto loc_825464D8;
	// lhz r10,6(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bgt cr6,0x825464d8
	if (ctx.cr6.gt) goto loc_825464D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,3,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFE000;
	// rlwinm r10,r10,0,3,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFFE000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825464e4
	if (ctx.cr6.lt) goto loc_825464E4;
loc_825464D8:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825464a8
	if (!ctx.cr6.eq) goto loc_825464A8;
loc_825464E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82546504
	if (!ctx.cr6.eq) goto loc_82546504;
loc_825464EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,19,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFFF;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// ble cr6,0x82546504
	if (!ctx.cr6.gt) goto loc_82546504;
	// mr r24,r31
	r24.u64 = r31.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_82546504:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546520
	if (!ctx.cr0.eq) goto loc_82546520;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	r31.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8254636c
	if (!ctx.cr0.eq) goto loc_8254636C;
loc_82546520:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8254670c
	if (ctx.cr6.eq) goto loc_8254670C;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,24(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 24);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwimi r11,r23,0,19,31
	ctx.r11.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x1FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE000);
	// stw r11,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r11.u32);
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// bl 0x82542b30
	ctx.lr = 0x82546548;
	sub_82542B30(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82546340
	if (ctx.cr0.eq) goto loc_82546340;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r25,2
	r25.s64 = 2;
	// stw r30,24(r24)
	REX_STORE_U32(r24.u32 + 24, r30.u32);
	// clrlwi r10,r11,19
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFF;
	// rlwinm r11,r11,19,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFFF;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825465ac
	if (!ctx.cr6.gt) goto loc_825465AC;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825465a8
	if (ctx.cr6.eq) goto loc_825465A8;
loc_8254657C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r10,0,3,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFFE000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82546594
	if (ctx.cr0.eq) goto loc_82546594;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825465a0
	if (ctx.cr0.eq) goto loc_825465A0;
loc_82546594:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8254657c
	if (!ctx.cr6.eq) goto loc_8254657C;
loc_825465A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825465ac
	if (!ctx.cr6.eq) goto loc_825465AC;
loc_825465A8:
	// mr r25,r16
	r25.u64 = r16.u64;
loc_825465AC:
	// li r26,1
	r26.s64 = 1;
	// li r27,1
	r27.s64 = 1;
	// addi r28,r24,28
	r28.s64 = r24.s64 + 28;
loc_825465B8:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi r10,r11,19
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825466e8
	if (!ctx.cr6.lt) goto loc_825466E8;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825466dc
	if (ctx.cr6.eq) goto loc_825466DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r29,r15
	r29.u64 = r15.u64;
	// bl 0x82542b30
	ctx.lr = 0x825465E8;
	sub_82542B30(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825466b8
	if (ctx.cr0.eq) goto loc_825466B8;
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x825466b8
	if (ctx.cr6.eq) goto loc_825466B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x825466b8
	if (ctx.cr6.eq) goto loc_825466B8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f568
	ctx.lr = 0x82546618;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825466b8
	if (!ctx.cr0.eq) goto loc_825466B8;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82532070
	ctx.lr = 0x82546634;
	sub_82532070(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgt cr6,0x825466b4
	if (ctx.cr6.gt) goto loc_825466B4;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82542e20
	ctx.lr = 0x82546654;
	sub_82542E20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82546688
	if (!ctx.cr0.eq) goto loc_82546688;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x825466b8
	if (ctx.cr6.gt) goto loc_825466B8;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825398f0
	ctx.lr = 0x8254667C;
	sub_825398F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// b 0x825466b8
	goto loc_825466B8;
loc_82546688:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825466b8
	if (ctx.cr6.eq) goto loc_825466B8;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// cmplwi cr6,r23,8192
	ctx.cr6.compare<uint32_t>(r23.u32, 8192, ctx.xer);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// blt cr6,0x8254634c
	if (ctx.cr6.lt) goto loc_8254634C;
	// mr r23,r15
	r23.u64 = r15.u64;
	// b 0x8254634c
	goto loc_8254634C;
loc_825466B4:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_825466B8:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825466c8
	if (!ctx.cr0.eq) goto loc_825466C8;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// b 0x825466dc
	goto loc_825466DC;
loc_825466C8:
	// addi r11,r23,1
	ctx.r11.s64 = r23.s64 + 1;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// subfc r10,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r10,r11
	r23.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_825466DC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x825465b8
	goto loc_825465B8;
loc_825466E8:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// bne cr6,0x82546340
	if (!ctx.cr6.eq) goto loc_82546340;
	// rlwinm r11,r11,0,19,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE0001FFF;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r23,8192
	ctx.cr6.compare<uint32_t>(r23.u32, 8192, ctx.xer);
	// blt cr6,0x82546340
	if (ctx.cr6.lt) goto loc_82546340;
	// mr r23,r15
	r23.u64 = r15.u64;
	// b 0x82546340
	goto loc_82546340;
loc_8254670C:
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_82546710:
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825467ac
	if (!ctx.cr0.eq) goto loc_825467AC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825467ac
	if (ctx.cr0.eq) goto loc_825467AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
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
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82546788
	if (!ctx.cr0.eq) goto loc_82546788;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82546788;
	sub_824E4308(ctx, base);
loc_82546788:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824ffbd8
	ctx.lr = 0x825467A8;
	sub_824FFBD8(ctx, base);
	// b 0x82546710
	goto loc_82546710;
loc_825467AC:
	// li r6,50
	ctx.r6.s64 = 50;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x825467C0;
	sub_824FFBD8(ctx, base);
	// lwz r17,96(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x825bad90
	ctx.lr = 0x825467D0;
	sub_825BAD90(ctx, base);
	// lwz r11,40(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 40);
	// stw r15,664(r14)
	REX_STORE_U32(r14.u32 + 664, r15.u32);
	// oris r11,r11,2560
	ctx.r11.u64 = ctx.r11.u64 | 167772160;
	// stw r11,40(r14)
	REX_STORE_U32(r14.u32 + 40, ctx.r11.u32);
loc_825467E0:
	// lwz r3,652(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825468b0
	if (!ctx.cr0.eq) goto loc_825468B0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825468b0
	if (ctx.cr0.eq) goto loc_825468B0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254680c
	if (ctx.cr0.eq) goto loc_8254680C;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// b 0x82546818
	goto loc_82546818;
loc_8254680C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82546818:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82546868
	if (!ctx.cr0.eq) goto loc_82546868;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82546868;
	sub_824E4308(ctx, base);
loc_82546868:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,115
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 115, ctx.xer);
	// beq cr6,0x825467e0
	if (ctx.cr6.eq) goto loc_825467E0;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825467e0
	if (ctx.cr6.eq) goto loc_825467E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x82546890;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825467e0
	if (ctx.cr0.eq) goto loc_825467E0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r14)
	ctx.r5.u64 = REX_LOAD_U32(r14.u32 + 652);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2288
	ctx.lr = 0x825468AC;
	sub_825C2288(ctx, base);
	// b 0x825467e0
	goto loc_825467E0;
loc_825468B0:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r31,7
	r31.s64 = 7;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_825468BC:
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7678
	ctx.lr = 0x825468CC;
	sub_824F7678(ctx, base);
	// stwu r3,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r30.u32 = ea;
	// bl 0x825318e8
	ctx.lr = 0x825468D4;
	sub_825318E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825468bc
	if (!ctx.cr0.eq) goto loc_825468BC;
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
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
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82546948
	if (!ctx.cr0.eq) goto loc_82546948;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82546948
	if (ctx.cr0.eq) goto loc_82546948;
loc_82546904:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// beq cr6,0x8254691c
	if (ctx.cr6.eq) goto loc_8254691C;
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// bne cr6,0x82546930
	if (!ctx.cr6.eq) goto loc_82546930;
loc_8254691C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82531aa8
	ctx.lr = 0x82546930;
	sub_82531AA8(ctx, base);
loc_82546930:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82546948
	if (!ctx.cr0.eq) goto loc_82546948;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82546904
	if (!ctx.cr6.eq) goto loc_82546904;
loc_82546948:
	// lwz r31,28(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 28);
	// addi r11,r17,24
	ctx.r11.s64 = r17.s64 + 24;
	// mr r30,r15
	r30.u64 = r15.u64;
	// clrlwi. r10,r31,31
	ctx.r10.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825469f8
	if (!ctx.cr0.eq) goto loc_825469F8;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x825469f8
	if (ctx.cr0.eq) goto loc_825469F8;
loc_82546964:
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82543878
	ctx.lr = 0x8254697C;
	sub_82543878(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825469c4
	if (ctx.cr6.eq) goto loc_825469C4;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
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
	// bne cr6,0x825469b4
	if (!ctx.cr6.eq) goto loc_825469B4;
loc_825469A4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x825469e8
	goto loc_825469E8;
loc_825469B4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825469f8
	if (!ctx.cr0.eq) goto loc_825469F8;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x825469f0
	goto loc_825469F0;
loc_825469C4:
	// lwz r10,28(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 28);
	// addi r11,r17,24
	ctx.r11.s64 = r17.s64 + 24;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825469a4
	if (ctx.cr6.eq) goto loc_825469A4;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_825469E8:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825469f8
	if (!ctx.cr0.eq) goto loc_825469F8;
loc_825469F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82546964
	if (!ctx.cr6.eq) goto loc_82546964;
loc_825469F8:
	// lwz r3,652(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546aa8
	if (!ctx.cr0.eq) goto loc_82546AA8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82546aa8
	if (ctx.cr0.eq) goto loc_82546AA8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546a24
	if (ctx.cr0.eq) goto loc_82546A24;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// b 0x82546a30
	goto loc_82546A30;
loc_82546A24:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82546A30:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82546a80
	if (!ctx.cr0.eq) goto loc_82546A80;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82546A80;
	sub_824E4308(ctx, base);
loc_82546A80:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82543878
	ctx.lr = 0x82546AA4;
	sub_82543878(ctx, base);
	// b 0x825469f8
	goto loc_825469F8;
loc_82546AA8:
	// mr r29,r15
	r29.u64 = r15.u64;
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
loc_82546AB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82530848
	ctx.lr = 0x82546AB8;
	sub_82530848(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546ad4
	if (ctx.cr0.eq) goto loc_82546AD4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(r29.u32, 7, ctx.xer);
	// blt cr6,0x82546ab0
	if (ctx.cr6.lt) goto loc_82546AB0;
	// b 0x82546cc0
	goto loc_82546CC0;
loc_82546AD4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwzx r28,r11,r10
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82546AE0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82530898
	ctx.lr = 0x82546AE8;
	sub_82530898(ctx, base);
	// rlwinm r5,r3,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14720, ctx.xer);
	// beq cr6,0x82546c90
	if (ctx.cr6.eq) goto loc_82546C90;
	// clrlwi r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mulli r10,r10,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r10,664(r14)
	REX_STORE_U32(r14.u32 + 664, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82542b30
	ctx.lr = 0x82546B20;
	sub_82542B30(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82546c90
	if (ctx.cr0.eq) goto loc_82546C90;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,664(r14)
	ctx.r5.u64 = REX_LOAD_U32(r14.u32 + 664);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252e848
	ctx.lr = 0x82546B38;
	sub_8252E848(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x82546b54
	if (ctx.cr6.eq) goto loc_82546B54;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825335b8
	ctx.lr = 0x82546B50;
	sub_825335B8(ctx, base);
	// b 0x82546c90
	goto loc_82546C90;
loc_82546B54:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546b90
	if (!ctx.cr0.eq) goto loc_82546B90;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82546b90
	if (!ctx.cr0.eq) goto loc_82546B90;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8253c510
	ctx.lr = 0x82546B78;
	sub_8253C510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82546b90
	if (ctx.cr0.eq) goto loc_82546B90;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825bad90
	ctx.lr = 0x82546B8C;
	sub_825BAD90(ctx, base);
	// b 0x82546c90
	goto loc_82546C90;
loc_82546B90:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bne cr6,0x82546c40
	if (!ctx.cr6.eq) goto loc_82546C40;
	// addi r11,r17,24
	ctx.r11.s64 = r17.s64 + 24;
loc_82546BA4:
	// lwz r10,28(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 28);
	// addi r11,r17,24
	ctx.r11.s64 = r17.s64 + 24;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r9,r10
	r30.u64 = ctx.r9.u64 & ctx.r10.u64;
loc_82546BBC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82546c30
	if (ctx.cr6.eq) goto loc_82546C30;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x82546bf4
	if (ctx.cr6.eq) goto loc_82546BF4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82546bf4
	if (!ctx.cr6.eq) goto loc_82546BF4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8253af10
	ctx.lr = 0x82546BEC;
	sub_8253AF10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82546c10
	if (!ctx.cr0.eq) goto loc_82546C10;
loc_82546BF4:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
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
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82546bbc
	goto loc_82546BBC;
loc_82546C10:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825bad90
	ctx.lr = 0x82546C1C;
	sub_825BAD90(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// bne cr6,0x82546ba4
	if (!ctx.cr6.eq) goto loc_82546BA4;
	// b 0x82546c90
	goto loc_82546C90;
loc_82546C30:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82544048
	ctx.lr = 0x82546C3C;
	sub_82544048(ctx, base);
	// b 0x82546c5c
	goto loc_82546C5C;
loc_82546C40:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82546c5c
	if (!ctx.cr6.eq) goto loc_82546C5C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82546c5c
	if (!ctx.cr6.eq) goto loc_82546C5C;
	// rlwinm r11,r10,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// beq cr6,0x82546c6c
	if (ctx.cr6.eq) goto loc_82546C6C;
loc_82546C5C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825438f8
	ctx.lr = 0x82546C6C;
	sub_825438F8(ctx, base);
loc_82546C6C:
	// lwz r11,664(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 664);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82546c90
	if (!ctx.cr6.eq) goto loc_82546C90;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82543878
	ctx.lr = 0x82546C90;
	sub_82543878(ctx, base);
loc_82546C90:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82530848
	ctx.lr = 0x82546C98;
	sub_82530848(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82546cc0
	if (!ctx.cr0.eq) goto loc_82546CC0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82546ae0
	if (ctx.cr6.eq) goto loc_82546AE0;
	// lwz r11,652(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546ae0
	if (!ctx.cr0.eq) goto loc_82546AE0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82546ae0
	if (ctx.cr0.eq) goto loc_82546AE0;
loc_82546CC0:
	// cmplwi cr6,r29,7
	ctx.cr6.compare<uint32_t>(r29.u32, 7, ctx.xer);
	// bne cr6,0x825469f8
	if (!ctx.cr6.eq) goto loc_825469F8;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r31,7
	r31.s64 = 7;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_82546CD4:
	// lwzu r30,4(r29)
	ea = 4 + r29.u32;
	r30.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82530950
	ctx.lr = 0x82546CE0;
	sub_82530950(ctx, base);
	// li r6,37
	ctx.r6.s64 = 37;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x82546CF4;
	sub_824FFBD8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82546cd4
	if (!ctx.cr0.eq) goto loc_82546CD4;
	// stw r16,664(r14)
	REX_STORE_U32(r14.u32 + 664, r16.u32);
	// lwz r11,40(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 40);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,40(r14)
	REX_STORE_U32(r14.u32 + 40, ctx.r11.u32);
	// lwz r11,20(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546d3c
	if (ctx.cr0.eq) goto loc_82546D3C;
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546d30
	if (ctx.cr0.eq) goto loc_82546D30;
	// lwz r11,36(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 36);
	// addi r30,r17,32
	r30.s64 = r17.s64 + 32;
	// b 0x82546d44
	goto loc_82546D44;
loc_82546D30:
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 28);
	// addi r30,r17,24
	r30.s64 = r17.s64 + 24;
	// b 0x82546d44
	goto loc_82546D44;
loc_82546D3C:
	// lwz r11,20(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 20);
	// addi r30,r17,16
	r30.s64 = r17.s64 + 16;
loc_82546D44:
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
	// b 0x82546e38
	goto loc_82546E38;
loc_82546D58:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82546d88
	if (ctx.cr6.eq) goto loc_82546D88;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82546d7c
	if (ctx.cr6.lt) goto loc_82546D7C;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82546d80
	if (!ctx.cr6.gt) goto loc_82546D80;
loc_82546D7C:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_82546D80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546de0
	if (ctx.cr0.eq) goto loc_82546DE0;
loc_82546D88:
	// lwz r3,652(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82546dbc
	if (!ctx.cr0.eq) goto loc_82546DBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546dbc
	if (ctx.cr0.eq) goto loc_82546DBC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82546dc8
	if (!ctx.cr6.gt) goto loc_82546DC8;
loc_82546DBC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82546DC4;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82546DC8:
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
loc_82546DE0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82546df8
	if (!ctx.cr0.eq) goto loc_82546DF8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82546d58
	if (!ctx.cr6.eq) goto loc_82546D58;
loc_82546DF8:
	// addi r10,r17,32
	ctx.r10.s64 = r17.s64 + 32;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82546e40
	if (ctx.cr6.eq) goto loc_82546E40;
	// addi r11,r17,24
	ctx.r11.s64 = r17.s64 + 24;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82546e28
	if (ctx.cr6.eq) goto loc_82546E28;
	// lwz r9,28(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82546e28
	if (!ctx.cr0.eq) goto loc_82546E28;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x82546e30
	goto loc_82546E30;
loc_82546E28:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_82546E30:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82546e40
	if (!ctx.cr0.eq) goto loc_82546E40;
loc_82546E38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82546d58
	if (!ctx.cr6.eq) goto loc_82546D58;
loc_82546E40:
	// lwz r3,652(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82546f00
	if (!ctx.cr0.eq) goto loc_82546F00;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82546f00
	if (ctx.cr0.eq) goto loc_82546F00;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82546e6c
	if (ctx.cr0.eq) goto loc_82546E6C;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// b 0x82546e78
	goto loc_82546E78;
loc_82546E6C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82546E78:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82546ec8
	if (!ctx.cr0.eq) goto loc_82546EC8;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82546EC8;
	sub_824E4308(ctx, base);
loc_82546EC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82542898
	ctx.lr = 0x82546EE8;
	sub_82542898(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82546e40
	if (ctx.cr0.eq) goto loc_82546E40;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82544180
	ctx.lr = 0x82546EFC;
	sub_82544180(ctx, base);
	// b 0x82546e40
	goto loc_82546E40;
loc_82546F00:
	// addi r11,r17,24
	ctx.r11.s64 = r17.s64 + 24;
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825474c8
	if (!ctx.cr0.eq) goto loc_825474C8;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825474c8
	if (ctx.cr0.eq) goto loc_825474C8;
	// lwz r18,100(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82546F20:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825474a8
	if (ctx.cr0.eq) goto loc_825474A8;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x825474a8
	if (!ctx.cr6.eq) goto loc_825474A8;
	// lwz r3,44(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825474a8
	if (!ctx.cr0.eq) goto loc_825474A8;
	// lwz r20,12(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x82546f64
	if (ctx.cr6.eq) goto loc_82546F64;
	// cmplwi cr6,r11,111
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 111, ctx.xer);
	// bne cr6,0x825474a8
	if (!ctx.cr6.eq) goto loc_825474A8;
loc_82546F64:
	// lwz r4,48(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 48);
	// bl 0x824f7010
	ctx.lr = 0x82546F6C;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825474a8
	if (ctx.cr0.eq) goto loc_825474A8;
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 4);
loc_82546F78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82546fa4
	if (ctx.cr6.eq) goto loc_82546FA4;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546f94
	if (ctx.cr6.eq) goto loc_82546F94;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bne cr6,0x82546f9c
	if (!ctx.cr6.eq) goto loc_82546F9C;
loc_82546F94:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82546f78
	goto loc_82546F78;
loc_82546F9C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82546fa8
	goto loc_82546FA8;
loc_82546FA4:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_82546FA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825474a8
	if (!ctx.cr0.eq) goto loc_825474A8;
	// addi r23,r20,44
	r23.s64 = r20.s64 + 44;
	// mr r22,r15
	r22.u64 = r15.u64;
	// mr r21,r23
	r21.u64 = r23.u64;
loc_82546FBC:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825474a8
	if (!ctx.cr6.lt) goto loc_825474A8;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r28,12(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82503a60
	ctx.lr = 0x82546FDC;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254749c
	if (ctx.cr0.eq) goto loc_8254749C;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r11,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x8254749c
	if (!ctx.cr6.eq) goto loc_8254749C;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8254749c
	if (!ctx.cr6.eq) goto loc_8254749C;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_82547008:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82547034
	if (ctx.cr6.eq) goto loc_82547034;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547024
	if (ctx.cr6.eq) goto loc_82547024;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x8254702c
	if (!ctx.cr6.eq) goto loc_8254702C;
loc_82547024:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82547008
	goto loc_82547008;
loc_8254702C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82547038
	goto loc_82547038;
loc_82547034:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_82547038:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254749c
	if (!ctx.cr0.eq) goto loc_8254749C;
	// lwz r30,44(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lwz r29,48(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8254749c
	if (ctx.cr6.eq) goto loc_8254749C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x82547080
	if (!ctx.cr6.eq) goto loc_82547080;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// beq cr6,0x8254749c
	if (ctx.cr6.eq) goto loc_8254749C;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8254708c
	if (ctx.cr6.eq) goto loc_8254708C;
loc_82547080:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// bne cr6,0x82547090
	if (!ctx.cr6.eq) goto loc_82547090;
loc_8254708C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82547090:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254749c
	if (!ctx.cr0.eq) goto loc_8254749C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825470b4
	if (ctx.cr6.eq) goto loc_825470B4;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// bne cr6,0x825470b8
	if (!ctx.cr6.eq) goto loc_825470B8;
loc_825470B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825470B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254749c
	if (!ctx.cr0.eq) goto loc_8254749C;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82533008
	ctx.lr = 0x825470E0;
	sub_82533008(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254749c
	if (ctx.cr0.eq) goto loc_8254749C;
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r10,r11,0,21,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F0;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bgt cr6,0x8254749c
	if (ctx.cr6.gt) goto loc_8254749C;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254749c
	if (!ctx.cr0.eq) goto loc_8254749C;
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254749c
	if (!ctx.cr0.eq) goto loc_8254749C;
	// li r4,816
	ctx.r4.s64 = 816;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252dd80
	ctx.lr = 0x82547114;
	sub_8252DD80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254749c
	if (ctx.cr0.eq) goto loc_8254749C;
	// mr r24,r15
	r24.u64 = r15.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_82547124:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8254749c
	if (!ctx.cr6.lt) goto loc_8254749C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r27,12(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// beq cr6,0x82547260
	if (ctx.cr6.eq) goto loc_82547260;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82547160
	if (ctx.cr6.lt) goto loc_82547160;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82547164
	if (!ctx.cr6.gt) goto loc_82547164;
loc_82547160:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_82547164:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547260
	if (ctx.cr0.eq) goto loc_82547260;
	// rlwinm r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82547260
	if (!ctx.cr6.lt) goto loc_82547260;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_82547180:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825471ac
	if (ctx.cr6.eq) goto loc_825471AC;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254719c
	if (ctx.cr6.eq) goto loc_8254719C;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x825471a4
	if (!ctx.cr6.eq) goto loc_825471A4;
loc_8254719C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82547180
	goto loc_82547180;
loc_825471A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825471b0
	goto loc_825471B0;
loc_825471AC:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_825471B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547260
	if (!ctx.cr0.eq) goto loc_82547260;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825bce50
	ctx.lr = 0x825471C4;
	sub_825BCE50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547260
	if (ctx.cr0.eq) goto loc_82547260;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825355f8
	ctx.lr = 0x825471F0;
	sub_825355F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r26,12(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8250ad28
	ctx.lr = 0x82547204;
	sub_8250AD28(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c4930
	ctx.lr = 0x8254721C;
	sub_825C4930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254726c
	if (!ctx.cr0.eq) goto loc_8254726C;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250b470
	ctx.lr = 0x82547234;
	sub_8250B470(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f7708
	ctx.lr = 0x8254723C;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// beq 0x8254725c
	if (ctx.cr0.eq) goto loc_8254725C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825c2288
	ctx.lr = 0x82547258;
	sub_825C2288(ctx, base);
	// b 0x82547260
	goto loc_82547260;
loc_8254725C:
	// bl 0x825335b8
	ctx.lr = 0x82547260;
	sub_825335B8(ctx, base);
loc_82547260:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// b 0x82547124
	goto loc_82547124;
loc_8254726C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c4a48
	ctx.lr = 0x82547284;
	sub_825C4A48(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r10,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// rlwinm r10,r10,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x3;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x825472ac
	goto loc_825472AC;
loc_825472A4:
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
loc_825472AC:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// bne cr6,0x825472a4
	if (!ctx.cr6.eq) goto loc_825472A4;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	// or r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r6,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// or r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r30,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r30.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r8,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r8,r8,0,0,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFE000;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x82547328
	goto loc_82547328;
loc_82547320:
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
loc_82547328:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// bne cr6,0x82547320
	if (!ctx.cr6.eq) goto loc_82547320;
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r10,26
	ctx.r6.u64 = ctx.r10.u32 & 0x3F;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x8250b470
	ctx.lr = 0x82547398;
	sub_8250B470(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824ffd98
	ctx.lr = 0x825473B4;
	sub_824FFD98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8250ab60
	ctx.lr = 0x825473D0;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825473DC;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250adf0
	ctx.lr = 0x825473F8;
	sub_8250ADF0(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250adf0
	ctx.lr = 0x82547408;
	sub_8250ADF0(ctx, base);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// bne cr6,0x82547438
	if (!ctx.cr6.eq) goto loc_82547438;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7678
	ctx.lr = 0x82547420;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82547438:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547468
	if (!ctx.cr0.eq) goto loc_82547468;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547468
	if (ctx.cr0.eq) goto loc_82547468;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82547478
	if (!ctx.cr6.gt) goto loc_82547478;
loc_82547468:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82547474;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82547478:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
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
	// bl 0x825bad90
	ctx.lr = 0x8254749C;
	sub_825BAD90(ctx, base);
loc_8254749C:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// b 0x82546fbc
	goto loc_82546FBC;
loc_825474A8:
	// rlwinm r11,r19,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825474c4
	if (!ctx.cr0.eq) goto loc_825474C4;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82546f20
	if (!ctx.cr6.eq) goto loc_82546F20;
loc_825474C4:
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
loc_825474C8:
	// stw r16,664(r14)
	REX_STORE_U32(r14.u32 + 664, r16.u32);
	// addi r11,r17,24
	ctx.r11.s64 = r17.s64 + 24;
	// lwz r31,28(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547540
	if (!ctx.cr0.eq) goto loc_82547540;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82547540
	if (ctx.cr0.eq) goto loc_82547540;
loc_825474E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503a60
	ctx.lr = 0x825474EC;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547528
	if (ctx.cr0.eq) goto loc_82547528;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f568
	ctx.lr = 0x82547500;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547528
	if (!ctx.cr0.eq) goto loc_82547528;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82547528
	if (!ctx.cr6.lt) goto loc_82547528;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825335b8
	ctx.lr = 0x82547528;
	sub_825335B8(ctx, base);
loc_82547528:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547540
	if (!ctx.cr0.eq) goto loc_82547540;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825474e4
	if (!ctx.cr6.eq) goto loc_825474E4;
loc_82547540:
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7678
	ctx.lr = 0x82547550;
	sub_824F7678(ctx, base);
	// addi r25,r3,4
	r25.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r25,1
	ctx.r10.u64 = r25.u64 | 1;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82547568:
	// lwz r11,652(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82547828
	if (!ctx.cr0.eq) goto loc_82547828;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82547828
	if (ctx.cr0.eq) goto loc_82547828;
loc_82547580:
	// lwz r3,652(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825476ac
	if (!ctx.cr0.eq) goto loc_825476AC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825476ac
	if (ctx.cr0.eq) goto loc_825476AC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825475ac
	if (ctx.cr0.eq) goto loc_825475AC;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// b 0x825475b8
	goto loc_825475B8;
loc_825475AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_825475B8:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82547608
	if (!ctx.cr0.eq) goto loc_82547608;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82547608;
	sub_824E4308(ctx, base);
loc_82547608:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82542898
	ctx.lr = 0x82547628;
	sub_82542898(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82547580
	if (ctx.cr0.eq) goto loc_82547580;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f568
	ctx.lr = 0x8254763C;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547580
	if (!ctx.cr0.eq) goto loc_82547580;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503a60
	ctx.lr = 0x8254764C;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547580
	if (ctx.cr0.eq) goto loc_82547580;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547684
	if (!ctx.cr0.eq) goto loc_82547684;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82547684
	if (ctx.cr0.eq) goto loc_82547684;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82547690
	if (!ctx.cr6.gt) goto loc_82547690;
loc_82547684:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82547690;
	sub_8251FE00(ctx, base);
loc_82547690:
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
	// b 0x82547580
	goto loc_82547580;
loc_825476AC:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82547828
	if (!ctx.cr0.eq) goto loc_82547828;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82547828
	if (ctx.cr0.eq) goto loc_82547828;
loc_825476C4:
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825476e4
	if (!ctx.cr0.eq) goto loc_825476E4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825476c4
	if (!ctx.cr6.eq) goto loc_825476C4;
loc_825476E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547828
	if (ctx.cr6.eq) goto loc_82547828;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x82547700;
	sub_824F7DC0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r15
	r30.u64 = r15.u64;
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
loc_8254770C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825477a4
	if (!ctx.cr0.eq) goto loc_825477A4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825477a4
	if (ctx.cr0.eq) goto loc_825477A4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
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
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82547780
	if (!ctx.cr0.eq) goto loc_82547780;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82547780;
	sub_824E4308(ctx, base);
loc_82547780:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254770c
	if (!ctx.cr0.eq) goto loc_8254770C;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x8254770c
	if (ctx.cr6.eq) goto loc_8254770C;
	// stwu r31,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, r31.u32);
	r29.u32 = ea;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x8254770c
	goto loc_8254770C;
loc_825477A4:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-6712
	ctx.r6.s64 = ctx.r11.s64 + -6712;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a0028
	ctx.lr = 0x825477BC;
	sub_826A0028(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82547810
	if (ctx.cr6.eq) goto loc_82547810;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_825477C8:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82547804
	if (!ctx.cr0.eq) goto loc_82547804;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x82547804
	if (ctx.cr6.eq) goto loc_82547804;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82543538
	ctx.lr = 0x825477F0;
	sub_82543538(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547804
	if (ctx.cr0.eq) goto loc_82547804;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825bad90
	ctx.lr = 0x82547804;
	sub_825BAD90(ctx, base);
loc_82547804:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x825477c8
	if (!ctx.cr0.eq) goto loc_825477C8;
loc_82547810:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x82547824;
	sub_824FFBD8(ctx, base);
	// b 0x82547568
	goto loc_82547568;
loc_82547828:
	// li r6,38
	ctx.r6.s64 = 38;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x8254783C;
	sub_824FFBD8(ctx, base);
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82547858
	if (ctx.cr0.eq) goto loc_82547858;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825384c8
	ctx.lr = 0x82547854;
	sub_825384C8(ctx, base);
	// stb r15,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r15.u8);
loc_82547858:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82547874
	if (ctx.cr0.eq) goto loc_82547874;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82530478
	ctx.lr = 0x82547870;
	sub_82530478(ctx, base);
	// stb r15,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r15.u8);
loc_82547874:
	// lwz r11,656(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 656);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82547acc
	if (!ctx.cr0.eq) goto loc_82547ACC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82547acc
	if (ctx.cr0.eq) goto loc_82547ACC;
	// lwz r11,40(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 40);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r30,10
	r30.s64 = 10;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,664(r14)
	REX_STORE_U32(r14.u32 + 664, ctx.r10.u32);
	// stw r11,40(r14)
	REX_STORE_U32(r14.u32 + 40, ctx.r11.u32);
loc_825478A4:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,656(r14)
	ctx.r4.u64 = REX_LOAD_U32(r14.u32 + 656);
	// bl 0x8255db50
	ctx.lr = 0x825478B0;
	sub_8255DB50(ctx, base);
	// b 0x82547938
	goto loc_82547938;
loc_825478B4:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825845a0
	ctx.lr = 0x825478BC;
	sub_825845A0(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82547938
	if (!ctx.cr6.eq) goto loc_82547938;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r3,652(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547914
	if (!ctx.cr0.eq) goto loc_82547914;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547914
	if (ctx.cr0.eq) goto loc_82547914;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82547920
	if (!ctx.cr6.gt) goto loc_82547920;
loc_82547914:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8254791C;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82547920:
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
loc_82547938:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825856e0
	ctx.lr = 0x82547940;
	sub_825856E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825478b4
	if (ctx.cr0.eq) goto loc_825478B4;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x825478a4
	if (!ctx.cr0.lt) goto loc_825478A4;
	// lwz r3,656(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 656);
	// bl 0x82559f10
	ctx.lr = 0x82547958;
	sub_82559F10(ctx, base);
loc_82547958:
	// lwz r3,652(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82547acc
	if (!ctx.cr0.eq) goto loc_82547ACC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82547acc
	if (ctx.cr0.eq) goto loc_82547ACC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547984
	if (ctx.cr0.eq) goto loc_82547984;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// b 0x82547990
	goto loc_82547990;
loc_82547984:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82547990:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x825479e0
	if (!ctx.cr0.eq) goto loc_825479E0;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x825479E0;
	sub_824E4308(ctx, base);
loc_825479E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82542898
	ctx.lr = 0x82547A00;
	sub_82542898(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82547958
	if (ctx.cr0.eq) goto loc_82547958;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82544180
	ctx.lr = 0x82547A18;
	sub_82544180(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547958
	if (!ctx.cr0.eq) goto loc_82547958;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r29,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x82547958
	if (ctx.cr6.eq) goto loc_82547958;
	// mr r28,r15
	r28.u64 = r15.u64;
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
loc_82547A38:
	// rlwinm r11,r29,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x7;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82547a84
	if (!ctx.cr6.lt) goto loc_82547A84;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825438f8
	ctx.lr = 0x82547A58;
	sub_825438F8(ctx, base);
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r29,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x82547958
	if (ctx.cr6.eq) goto loc_82547958;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x82547A70;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547958
	if (!ctx.cr0.eq) goto loc_82547958;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x82547a38
	goto loc_82547A38;
loc_82547A84:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8252f568
	ctx.lr = 0x82547A8C;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547958
	if (!ctx.cr0.eq) goto loc_82547958;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503a60
	ctx.lr = 0x82547A9C;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547958
	if (ctx.cr0.eq) goto loc_82547958;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82543538
	ctx.lr = 0x82547AB4;
	sub_82543538(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547958
	if (ctx.cr0.eq) goto loc_82547958;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825bad90
	ctx.lr = 0x82547AC8;
	sub_825BAD90(ctx, base);
	// b 0x82547958
	goto loc_82547958;
loc_82547ACC:
	// lwz r31,652(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 652);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r15,652(r14)
	REX_STORE_U32(r14.u32 + 652, r15.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82514840
	ctx.lr = 0x82547AE0;
	sub_82514840(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,652(r14)
	REX_STORE_U32(r14.u32 + 652, r31.u32);
	// bne 0x82544554
	if (!ctx.cr0.eq) goto loc_82544554;
	// lwz r18,96(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,20(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547d28
	if (ctx.cr0.eq) goto loc_82547D28;
	// lwz r11,28(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547d28
	if (ctx.cr0.eq) goto loc_82547D28;
	// lwz r11,36(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547d28
	if (ctx.cr0.eq) goto loc_82547D28;
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 8);
	// addi r10,r18,8
	ctx.r10.s64 = r18.s64 + 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82547d28
	if (ctx.cr6.eq) goto loc_82547D28;
	// lwz r11,48(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 48);
	// rlwinm. r9,r11,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82547d28
	if (!ctx.cr0.eq) goto loc_82547D28;
	// rlwinm. r9,r11,12,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82547d28
	if (!ctx.cr0.eq) goto loc_82547D28;
	// rlwinm. r11,r11,11,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547d28
	if (!ctx.cr0.eq) goto loc_82547D28;
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547b54
	if (ctx.cr6.eq) goto loc_82547B54;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82547B54:
	// rlwinm r27,r18,0,0,30
	r27.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
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
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82547d28
	if (!ctx.cr6.eq) goto loc_82547D28;
	// lwz r28,0(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_82547B7C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82547cf0
	if (ctx.cr6.eq) goto loc_82547CF0;
	// lwz r30,4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547b9c
	if (ctx.cr0.eq) goto loc_82547B9C;
	// li r31,0
	r31.s64 = 0;
	// b 0x82547c10
	goto loc_82547C10;
loc_82547B9C:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82547c10
	if (ctx.cr0.eq) goto loc_82547C10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6f80
	ctx.lr = 0x82547BB4;
	sub_824F6F80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547c10
	if (ctx.cr0.eq) goto loc_82547C10;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f74c8
	ctx.lr = 0x82547BC8;
	sub_824F74C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x82547c30
	if (!ctx.cr6.eq) goto loc_82547C30;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_82547BD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x82547c10
	if (!ctx.cr6.eq) goto loc_82547C10;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8252e968
	ctx.lr = 0x82547BF4;
	sub_8252E968(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824f7570
	ctx.lr = 0x82547C00;
	sub_824F7570(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x82547c10
	if (!ctx.cr6.eq) goto loc_82547C10;
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
loc_82547C10:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_82547C14:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547c60
	if (ctx.cr6.eq) goto loc_82547C60;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82547c58
	if (ctx.cr6.eq) goto loc_82547C58;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82547c14
	goto loc_82547C14;
loc_82547C30:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82547bd8
	if (!ctx.cr6.eq) goto loc_82547BD8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2510
	ctx.lr = 0x82547C44;
	sub_825C2510(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c6828
	ctx.lr = 0x82547C54;
	sub_825C6828(ctx, base);
	// b 0x82547cd8
	goto loc_82547CD8;
loc_82547C58:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82547c64
	goto loc_82547C64;
loc_82547C60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82547C64:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x82547ccc
	if (ctx.cr0.eq) goto loc_82547CCC;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x825c6828
	ctx.lr = 0x82547C7C;
	sub_825C6828(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82547cd8
	if (ctx.cr6.eq) goto loc_82547CD8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11520, ctx.xer);
	// bne cr6,0x82547cd8
	if (!ctx.cr6.eq) goto loc_82547CD8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82547cb0
	if (ctx.cr6.eq) goto loc_82547CB0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82547cb4
	if (!ctx.cr6.eq) goto loc_82547CB4;
loc_82547CB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82547CB4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547cd8
	if (!ctx.cr0.eq) goto loc_82547CD8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2510
	ctx.lr = 0x82547CC8;
	sub_825C2510(ctx, base);
	// b 0x82547cd8
	goto loc_82547CD8;
loc_82547CCC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825c67e8
	ctx.lr = 0x82547CD8;
	sub_825C67E8(ctx, base);
loc_82547CD8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82547ce8
	if (!ctx.cr6.eq) goto loc_82547CE8;
	// addi r26,r28,12
	r26.s64 = r28.s64 + 12;
loc_82547CE8:
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x82547b7c
	goto loc_82547B7C;
loc_82547CF0:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825c6828
	ctx.lr = 0x82547D00;
	sub_825C6828(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8257dfd8
	ctx.lr = 0x82547D28;
	sub_8257DFD8(ctx, base);
loc_82547D28:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82548330
	if (!ctx.cr6.eq) goto loc_82548330;
	// lwz r10,28(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 28);
	// addi r11,r18,24
	ctx.r11.s64 = r18.s64 + 24;
	// li r26,0
	r26.s64 = 0;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r23,0
	r23.s64 = 0;
	// bne 0x82548240
	if (!ctx.cr0.eq) goto loc_82548240;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r29,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r29.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82548240
	if (ctx.cr0.eq) goto loc_82548240;
loc_82547D5C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f7708
	ctx.lr = 0x82547D64;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547d84
	if (ctx.cr0.eq) goto loc_82547D84;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2288
	ctx.lr = 0x82547D80;
	sub_825C2288(ctx, base);
	// b 0x82547f9c
	goto loc_82547F9C;
loc_82547D84:
	// lwz r31,8(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r31,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82547da8
	if (!ctx.cr6.eq) goto loc_82547DA8;
	// rlwinm. r11,r31,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547f9c
	if (ctx.cr0.eq) goto loc_82547F9C;
	// rlwinm r11,r31,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// b 0x82547f9c
	goto loc_82547F9C;
loc_82547DA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82503a60
	ctx.lr = 0x82547DB0;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547f9c
	if (ctx.cr0.eq) goto loc_82547F9C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f568
	ctx.lr = 0x82547DC4;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547f9c
	if (!ctx.cr0.eq) goto loc_82547F9C;
	// lwz r30,4(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r27,r31,6,31,31
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0x1;
	// li r28,0
	r28.s64 = 0;
loc_82547DD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82547e90
	if (ctx.cr6.eq) goto loc_82547E90;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82547e84
	if (ctx.cr6.eq) goto loc_82547E84;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547e84
	if (ctx.cr0.eq) goto loc_82547E84;
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r31,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82547e64
	if (!ctx.cr6.eq) goto loc_82547E64;
	// rlwinm. r11,r31,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bne 0x82547e84
	if (!ctx.cr0.eq) goto loc_82547E84;
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r6,r31,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0x7;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
loc_82547E24:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82547e3c
	if (!ctx.cr6.lt) goto loc_82547E3C;
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// b 0x82547e24
	goto loc_82547E24;
loc_82547E3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825424f8
	ctx.lr = 0x82547E5C;
	sub_825424F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// b 0x82547e80
	goto loc_82547E80;
loc_82547E64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f6fc8
	ctx.lr = 0x82547E6C;
	sub_824F6FC8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82547e84
	if (ctx.cr6.eq) goto loc_82547E84;
	// rlwinm. r11,r31,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82547E80:
	// bne 0x82547e8c
	if (!ctx.cr0.eq) goto loc_82547E8C;
loc_82547E84:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x82547dd8
	goto loc_82547DD8;
loc_82547E8C:
	// li r27,1
	r27.s64 = 1;
loc_82547E90:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547f18
	if (ctx.cr0.eq) goto loc_82547F18;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82547eb0
	if (!ctx.cr6.eq) goto loc_82547EB0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82509448
	ctx.lr = 0x82547EA8;
	sub_82509448(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82547f18
	if (ctx.cr0.eq) goto loc_82547F18;
loc_82547EB0:
	// lwz r30,4(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_82547EB4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82547f18
	if (ctx.cr6.eq) goto loc_82547F18;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82547f0c
	if (ctx.cr6.eq) goto loc_82547F0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547f0c
	if (ctx.cr0.eq) goto loc_82547F0C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547f0c
	if (ctx.cr0.eq) goto loc_82547F0C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825bcf88
	ctx.lr = 0x82547EE8;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547f0c
	if (ctx.cr0.eq) goto loc_82547F0C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c3328
	ctx.lr = 0x82547F04;
	sub_825C3328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547f14
	if (ctx.cr0.eq) goto loc_82547F14;
loc_82547F0C:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x82547eb4
	goto loc_82547EB4;
loc_82547F14:
	// li r27,0
	r27.s64 = 0;
loc_82547F18:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82547f9c
	if (ctx.cr0.eq) goto loc_82547F9C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82547f80
	if (ctx.cr6.eq) goto loc_82547F80;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82547f80
	if (!ctx.cr0.eq) goto loc_82547F80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825335b8
	ctx.lr = 0x82547F40;
	sub_825335B8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r30,r28,40
	r30.s64 = r28.s64 + 40;
loc_82547F48:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82547f70
	if (!ctx.cr6.lt) goto loc_82547F70;
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825335b8
	ctx.lr = 0x82547F68;
	sub_825335B8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82547f48
	goto loc_82547F48;
loc_82547F70:
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(r28.u32, r23.u32, ctx.xer);
	// beq cr6,0x82547f80
	if (ctx.cr6.eq) goto loc_82547F80;
	// mr r23,r28
	r23.u64 = r28.u64;
	// b 0x82547f9c
	goto loc_82547F9C;
loc_82547F80:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r11,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bgt cr6,0x82548198
	if (ctx.cr6.gt) goto loc_82548198;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825335b8
	ctx.lr = 0x82547F9C;
	sub_825335B8(ctx, base);
loc_82547F9C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x825481f4
	if (ctx.cr6.eq) goto loc_825481F4;
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825481bc
	if (ctx.cr0.eq) goto loc_825481BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825481c4
	goto loc_825481C4;
loc_82547FBC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f7708
	ctx.lr = 0x82547FC4;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bne 0x825481a8
	if (!ctx.cr0.eq) goto loc_825481A8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r27,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r27.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// bl 0x825bba68
	ctx.lr = 0x82547FF0;
	sub_825BBA68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r12,-17537
	ctx.r12.s64 = -1149304832;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x8254fb38
	ctx.lr = 0x8254802C;
	sub_8254FB38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254fbd8
	ctx.lr = 0x8254803C;
	sub_8254FBD8(ctx, base);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// addi r24,r29,44
	r24.s64 = r29.s64 + 44;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8254807C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82548184
	if (!ctx.cr6.lt) goto loc_82548184;
	// lwz r28,0(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r26,12(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x825480f0
	if (!ctx.cr6.eq) goto loc_825480F0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825480D0;
	sub_82503DA0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8250a620
	ctx.lr = 0x825480E0;
	sub_8250A620(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825335b8
	ctx.lr = 0x825480EC;
	sub_825335B8(ctx, base);
	// b 0x82548138
	goto loc_82548138;
loc_825480F0:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82503da0
	ctx.lr = 0x825480FC;
	sub_82503DA0(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r8,r11,25,4,6
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r8.u64 & 0xFFFFFFFFF1FFFFFF);
	// li r9,7296
	ctx.r9.s64 = 7296;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// rlwinm r11,r8,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r9,r10,5,25,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x60) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF9F);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82548138:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503360
	ctx.lr = 0x82548148;
	sub_82503360(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548178
	if (ctx.cr0.eq) goto loc_82548178;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250a678
	ctx.lr = 0x8254815C;
	sub_8250A678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82503400
	ctx.lr = 0x8254816C;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82548178;
	sub_8250AD28(ctx, base);
loc_82548178:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x8254807c
	goto loc_8254807C;
loc_82548184:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82537a20
	ctx.lr = 0x82548194;
	sub_82537A20(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_82548198:
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// bne cr6,0x82547fbc
	if (!ctx.cr6.eq) goto loc_82547FBC;
	// b 0x825481b4
	goto loc_825481B4;
loc_825481A8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825c2288
	ctx.lr = 0x825481B4;
	sub_825C2288(ctx, base);
loc_825481B4:
	// li r26,1
	r26.s64 = 1;
	// b 0x82547f9c
	goto loc_82547F9C;
loc_825481BC:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_825481C4:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825481e4
	if (!ctx.cr6.eq) goto loc_825481E4;
loc_825481CC:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r23,r29
	r23.u64 = r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82548240
	if (!ctx.cr0.eq) goto loc_82548240;
	// b 0x82548230
	goto loc_82548230;
loc_825481E4:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82548240
	if (!ctx.cr0.eq) goto loc_82548240;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x82548234
	goto loc_82548234;
loc_825481F4:
	// lwz r11,28(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 28);
	// addi r10,r18,24
	ctx.r10.s64 = r18.s64 + 24;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254820c
	if (ctx.cr0.eq) goto loc_8254820C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82548218
	goto loc_82548218;
loc_8254820C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_82548218:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825481cc
	if (ctx.cr6.eq) goto loc_825481CC;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82548240
	if (!ctx.cr0.eq) goto loc_82548240;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_82548230:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82548234:
	// addi r29,r11,-40
	r29.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82547d5c
	if (!ctx.cr6.eq) goto loc_82547D5C;
loc_82548240:
	// lwz r3,652(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82548320
	if (!ctx.cr0.eq) goto loc_82548320;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82548320
	if (ctx.cr0.eq) goto loc_82548320;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254826c
	if (ctx.cr0.eq) goto loc_8254826C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82548278
	goto loc_82548278;
loc_8254826C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82548278:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x825482c8
	if (!ctx.cr0.eq) goto loc_825482C8;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x825482C8;
	sub_824E4308(ctx, base);
loc_825482C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r30,r11,25,25,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r30,115
	ctx.cr6.compare<uint32_t>(r30.u32, 115, ctx.xer);
	// beq cr6,0x82548240
	if (ctx.cr6.eq) goto loc_82548240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x825482E8;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548308
	if (ctx.cr0.eq) goto loc_82548308;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2288
	ctx.lr = 0x82548304;
	sub_825C2288(ctx, base);
	// b 0x82548240
	goto loc_82548240;
loc_82548308:
	// cmplwi cr6,r30,110
	ctx.cr6.compare<uint32_t>(r30.u32, 110, ctx.xer);
	// bne cr6,0x82548240
	if (!ctx.cr6.eq) goto loc_82548240;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82534560
	ctx.lr = 0x8254831C;
	sub_82534560(ctx, base);
	// b 0x82548240
	goto loc_82548240;
loc_82548320:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548330
	if (ctx.cr0.eq) goto loc_82548330;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82544550
	goto loc_82544550;
loc_82548330:
	// addi r11,r18,24
	ctx.r11.s64 = r18.s64 + 24;
	// lwz r11,28(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 28);
	// li r15,0
	r15.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82548a6c
	if (!ctx.cr0.eq) goto loc_82548A6C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82548a6c
	if (ctx.cr0.eq) goto loc_82548A6C;
loc_82548350:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252f568
	ctx.lr = 0x8254835C;
	sub_8252F568(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825489fc
	if (!ctx.cr0.eq) goto loc_825489FC;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x825484a4
	if (ctx.cr6.eq) goto loc_825484A4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8254841c
	if (ctx.cr6.eq) goto loc_8254841C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x825489fc
	if (!ctx.cr6.eq) goto loc_825489FC;
	// lwz r3,48(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 48);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x824f8b38
	ctx.lr = 0x82548390;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825483c8
	if (ctx.cr0.eq) goto loc_825483C8;
	// lwz r3,52(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 52);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x825483A4;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825483c8
	if (ctx.cr0.eq) goto loc_825483C8;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,52(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 44);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82529848
	ctx.lr = 0x825483C4;
	sub_82529848(ctx, base);
	// b 0x8254852c
	goto loc_8254852C;
loc_825483C8:
	// lwz r3,48(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x825483D4;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825489fc
	if (ctx.cr0.eq) goto loc_825489FC;
	// lwz r3,52(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 52);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x824f8b38
	ctx.lr = 0x825483E8;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825489fc
	if (ctx.cr0.eq) goto loc_825489FC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,48(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 44);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82529918
	ctx.lr = 0x82548408;
	sub_82529918(ctx, base);
loc_82548408:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x8250a620
	ctx.lr = 0x82548418;
	sub_8250A620(ctx, base);
	// b 0x82548530
	goto loc_82548530;
loc_8254841C:
	// lwz r3,48(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 48);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x824f8b38
	ctx.lr = 0x82548428;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548460
	if (ctx.cr0.eq) goto loc_82548460;
	// lwz r3,52(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 52);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x8254843C;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548460
	if (ctx.cr0.eq) goto loc_82548460;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,52(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 44);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82529918
	ctx.lr = 0x8254845C;
	sub_82529918(ctx, base);
	// b 0x8254852c
	goto loc_8254852C;
loc_82548460:
	// lwz r3,48(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 48);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x8254846C;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825489fc
	if (ctx.cr0.eq) goto loc_825489FC;
	// lwz r3,52(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 52);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x824f8b38
	ctx.lr = 0x82548480;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825489fc
	if (ctx.cr0.eq) goto loc_825489FC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,48(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 44);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82529848
	ctx.lr = 0x825484A0;
	sub_82529848(ctx, base);
	// b 0x82548408
	goto loc_82548408;
loc_825484A4:
	// lwz r3,48(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 48);
	// addi r30,r25,48
	r30.s64 = r25.s64 + 48;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x824f8b38
	ctx.lr = 0x825484B4;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825484ec
	if (ctx.cr0.eq) goto loc_825484EC;
	// lwz r3,52(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 52);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x825484C8;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825484ec
	if (ctx.cr0.eq) goto loc_825484EC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,52(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 44);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82530c80
	ctx.lr = 0x825484E8;
	sub_82530C80(ctx, base);
	// b 0x8254852c
	goto loc_8254852C;
loc_825484EC:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x824f8b38
	ctx.lr = 0x825484F8;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548570
	if (ctx.cr0.eq) goto loc_82548570;
	// lwz r3,52(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 52);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x824f8b38
	ctx.lr = 0x8254850C;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548570
	if (ctx.cr0.eq) goto loc_82548570;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,44(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 44);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82530d50
	ctx.lr = 0x8254852C;
	sub_82530D50(ctx, base);
loc_8254852C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82548530:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548548
	if (ctx.cr0.eq) goto loc_82548548;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82548548:
	// li r6,228
	ctx.r6.s64 = 228;
	// lwz r7,652(r14)
	ctx.r7.u64 = REX_LOAD_U32(r14.u32 + 652);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825374d8
	ctx.lr = 0x82548560;
	sub_825374D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825335b8
	ctx.lr = 0x8254856C;
	sub_825335B8(ctx, base);
	// b 0x825489fc
	goto loc_825489FC;
loc_82548570:
	// lwz r31,8(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm. r11,r31,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825489fc
	if (!ctx.cr0.eq) goto loc_825489FC;
	// rlwinm. r11,r31,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825489fc
	if (!ctx.cr0.eq) goto loc_825489FC;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825489fc
	if (!ctx.cr0.eq) goto loc_825489FC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82509448
	ctx.lr = 0x82548594;
	sub_82509448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825489fc
	if (!ctx.cr0.eq) goto loc_825489FC;
	// rlwinm. r11,r31,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825489fc
	if (!ctx.cr0.eq) goto loc_825489FC;
	// lwz r17,44(r25)
	r17.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r16,12(r17)
	r16.u64 = REX_LOAD_U32(r17.u32 + 12);
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x825489fc
	if (!ctx.cr6.eq) goto loc_825489FC;
	// li r20,1
	r20.s64 = 1;
	// mr r22,r30
	r22.u64 = r30.u64;
	// addi r21,r25,52
	r21.s64 = r25.s64 + 52;
loc_825485C8:
	// lwz r19,0(r21)
	r19.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r23,0(r22)
	r23.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825487c4
	if (!ctx.cr0.eq) goto loc_825487C4;
	// lwz r26,12(r19)
	r26.u64 = REX_LOAD_U32(r19.u32 + 12);
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bne cr6,0x825487c4
	if (!ctx.cr6.eq) goto loc_825487C4;
	// lwz r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r10,r9,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x82548608
	if (ctx.cr6.eq) goto loc_82548608;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254860c
	if (!ctx.cr6.eq) goto loc_8254860C;
loc_82548608:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8254860C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825487c4
	if (!ctx.cr0.eq) goto loc_825487C4;
	// cmplwi cr6,r10,110
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 110, ctx.xer);
	// beq cr6,0x825487c4
	if (ctx.cr6.eq) goto loc_825487C4;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r8,r11,18,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r7,r11,31,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// slw r11,r10,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825487c4
	if (!ctx.cr6.eq) goto loc_825487C4;
	// lwz r24,12(r23)
	r24.u64 = REX_LOAD_U32(r23.u32 + 12);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254867c
	if (ctx.cr0.eq) goto loc_8254867C;
	// rlwinm. r11,r9,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825487c4
	if (!ctx.cr0.eq) goto loc_825487C4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82516b38
	ctx.lr = 0x82548660;
	sub_82516B38(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r9,192(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r10,r11,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// clrlwi r11,r9,29
	ctx.r11.u64 = ctx.r9.u32 & 0x7;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x825487c4
	if (ctx.cr6.gt) goto loc_825487C4;
loc_8254867C:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// li r18,0
	r18.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// rlwinm r29,r11,31,28,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// li r30,0
	r30.s64 = 0;
loc_82548694:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82548778
	if (ctx.cr6.eq) goto loc_82548778;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// andc r11,r29,r11
	ctx.r11.u64 = r29.u64 & ~ctx.r11.u64;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r9,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r31.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x825b8558
	ctx.lr = 0x825486CC;
	sub_825B8558(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825486dc
	if (ctx.cr6.eq) goto loc_825486DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825486DC:
	// addi r10,r20,-1
	ctx.r10.s64 = r20.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r10,3
	ctx.r10.s64 = 3;
	// bne cr6,0x82548748
	if (!ctx.cr6.eq) goto loc_82548748;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// slw r8,r10,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// lwz r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 8);
	// andc r8,r28,r8
	ctx.r8.u64 = r28.u64 & ~ctx.r8.u64;
	// srw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r31.u8 & 0x3F));
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r11,r9,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// slw r9,r7,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r30.u8 & 0x3F));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// or r28,r9,r8
	r28.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8254872c
	if (ctx.cr6.lt) goto loc_8254872C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8254872C:
	// slw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// andc r10,r18,r10
	ctx.r10.u64 = r18.u64 & ~ctx.r10.u64;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// or r18,r10,r11
	r18.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x82548768
	goto loc_82548768;
loc_82548748:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// slw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// andc r10,r18,r10
	ctx.r10.u64 = r18.u64 & ~ctx.r10.u64;
	// srw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r31.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// or r18,r11,r10
	r18.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82548768:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// andc r11,r29,r11
	ctx.r11.u64 = r29.u64 & ~ctx.r11.u64;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// b 0x82548694
	goto loc_82548694;
loc_82548778:
	// lwz r30,8(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r30,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x7;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// bgt cr6,0x825487c4
	if (ctx.cr6.gt) goto loc_825487C4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82509448
	ctx.lr = 0x82548794;
	sub_82509448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825487c4
	if (!ctx.cr0.eq) goto loc_825487C4;
	// rlwinm. r11,r30,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825487e0
	if (ctx.cr0.eq) goto loc_825487E0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82516b38
	ctx.lr = 0x825487B0;
	sub_82516B38(ctx, base);
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x825487e0
	if (!ctx.cr6.gt) goto loc_825487E0;
loc_825487C4:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// lwz r18,96(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// addi r21,r21,-4
	r21.s64 = r21.s64 + -4;
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(r20.u32, 2, ctx.xer);
	// ble cr6,0x825485c8
	if (!ctx.cr6.gt) goto loc_825485C8;
	// b 0x825489fc
	goto loc_825489FC;
loc_825487E0:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825309c8
	ctx.lr = 0x825487F4;
	sub_825309C8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250ac20
	ctx.lr = 0x82548814;
	sub_8250AC20(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82530ae0
	ctx.lr = 0x8254882C;
	sub_82530AE0(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r31,r11,31,28,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_8254883C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8254888c
	if (ctx.cr6.eq) goto loc_8254888C;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// subfic r5,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r5.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// bl 0x8250acc8
	ctx.lr = 0x82548868;
	sub_8250ACC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82503360
	ctx.lr = 0x82548878;
	sub_82503360(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// b 0x8254883c
	goto loc_8254883C;
loc_8254888C:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825488c8
	if (ctx.cr6.eq) goto loc_825488C8;
loc_82548898:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825488A8;
	sub_8250AC70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82503360
	ctx.lr = 0x825488B8;
	sub_82503360(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// blt cr6,0x82548898
	if (ctx.cr6.lt) goto loc_82548898;
loc_825488C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250aed8
	ctx.lr = 0x825488D0;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825489c8
	if (ctx.cr0.eq) goto loc_825489C8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x825488FC;
	sub_82516448(ctx, base);
	// sth r3,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82548934
	if (!ctx.cr0.eq) goto loc_82548934;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548934
	if (ctx.cr0.eq) goto loc_82548934;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82548940
	if (!ctx.cr6.gt) goto loc_82548940;
loc_82548934:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8254893C;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82548940:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x8254896C;
	sub_82516448(ctx, base);
	// sth r3,18(r28)
	REX_STORE_U16(r28.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825489a4
	if (!ctx.cr0.eq) goto loc_825489A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825489a4
	if (ctx.cr0.eq) goto loc_825489A4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825489b0
	if (!ctx.cr6.gt) goto loc_825489B0;
loc_825489A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x825489AC;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825489B0:
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
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r28.u32);
loc_825489C8:
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// lwz r7,652(r14)
	ctx.r7.u64 = REX_LOAD_U32(r14.u32 + 652);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825374d8
	ctx.lr = 0x825489E0;
	sub_825374D8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825335b8
	ctx.lr = 0x825489EC;
	sub_825335B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825335b8
	ctx.lr = 0x825489F8;
	sub_825335B8(ctx, base);
	// lwz r18,96(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825489FC:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x82548a34
	if (ctx.cr6.eq) goto loc_82548A34;
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFE;
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
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82548a58
	if (!ctx.cr6.eq) goto loc_82548A58;
loc_82548A24:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r15,r25
	r15.u64 = r25.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82548a58
	goto loc_82548A58;
loc_82548A34:
	// lwz r10,28(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 28);
	// addi r11,r18,24
	ctx.r11.s64 = r18.s64 + 24;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82548a24
	if (ctx.cr6.eq) goto loc_82548A24;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82548A58:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82548a6c
	if (!ctx.cr0.eq) goto loc_82548A6C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82548350
	if (!ctx.cr6.eq) goto loc_82548350;
loc_82548A6C:
	// lwz r3,652(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82548b9c
	if (!ctx.cr0.eq) goto loc_82548B9C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82548b9c
	if (ctx.cr0.eq) goto loc_82548B9C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548a98
	if (ctx.cr0.eq) goto loc_82548A98;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82548aa4
	goto loc_82548AA4;
loc_82548A98:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82548AA4:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82548af4
	if (!ctx.cr0.eq) goto loc_82548AF4;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82548AF4;
	sub_824E4308(ctx, base);
loc_82548AF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,14720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14720, ctx.xer);
	// beq cr6,0x82548a6c
	if (ctx.cr6.eq) goto loc_82548A6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x82548B18;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548b38
	if (ctx.cr0.eq) goto loc_82548B38;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r14)
	ctx.r5.u64 = REX_LOAD_U32(r14.u32 + 652);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2288
	ctx.lr = 0x82548B34;
	sub_825C2288(ctx, base);
	// b 0x82548a6c
	goto loc_82548A6C;
loc_82548B38:
	// li r29,0
	r29.s64 = 0;
	// addi r28,r31,44
	r28.s64 = r31.s64 + 44;
loc_82548B40:
	// rlwinm r11,r30,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82548a6c
	if (!ctx.cr6.lt) goto loc_82548A6C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// beq cr6,0x82548b90
	if (ctx.cr6.eq) goto loc_82548B90;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825438f8
	ctx.lr = 0x82548B70;
	sub_825438F8(ctx, base);
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r30,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x82548a6c
	if (ctx.cr6.eq) goto loc_82548A6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7708
	ctx.lr = 0x82548B88;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82548a6c
	if (!ctx.cr0.eq) goto loc_82548A6C;
loc_82548B90:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x82548b40
	goto loc_82548B40;
loc_82548B9C:
	// rlwinm r11,r18,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82548bbc
	if (!ctx.cr0.eq) goto loc_82548BBC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x8254447c
	if (!ctx.cr0.eq) goto loc_8254447C;
loc_82548BBC:
	// lwz r11,44(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 44);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82548bd8
	if (!ctx.cr0.eq) goto loc_82548BD8;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,44(r14)
	REX_STORE_U32(r14.u32 + 44, ctx.r11.u32);
	// bl 0x825117d8
	ctx.lr = 0x82548BD8;
	sub_825117D8(ctx, base);
loc_82548BD8:
	// lwz r30,100(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82548c68
	if (ctx.cr6.eq) goto loc_82548C68;
loc_82548BE4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82548c68
	if (!ctx.cr0.eq) goto loc_82548C68;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82548c68
	if (ctx.cr0.eq) goto loc_82548C68;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
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
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82548c58
	if (!ctx.cr0.eq) goto loc_82548C58;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82548C58;
	sub_824E4308(ctx, base);
loc_82548C58:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2510
	ctx.lr = 0x82548C64;
	sub_825C2510(ctx, base);
	// b 0x82548be4
	goto loc_82548BE4;
loc_82548C68:
	// lwz r11,44(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,4(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 4);
	// addis r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -524288;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r11,44(r14)
	REX_STORE_U32(r14.u32 + 44, ctx.r11.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82548d8c
	if (!ctx.cr0.eq) goto loc_82548D8C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82548d8c
	if (ctx.cr0.eq) goto loc_82548D8C;
loc_82548CA4:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825297d0
	ctx.lr = 0x82548CB0;
	sub_825297D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x82548ce4
	if (!ctx.cr6.eq) goto loc_82548CE4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82548ce4
	if (!ctx.cr6.eq) goto loc_82548CE4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2288
	ctx.lr = 0x82548CE0;
	sub_825C2288(ctx, base);
	// b 0x82548cf4
	goto loc_82548CF4;
loc_82548CE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,660(r14)
	ctx.r5.u64 = REX_LOAD_U32(r14.u32 + 660);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8254f428
	ctx.lr = 0x82548CF4;
	sub_8254F428(ctx, base);
loc_82548CF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82548d3c
	if (ctx.cr6.eq) goto loc_82548D3C;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
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
	// bne cr6,0x82548d2c
	if (!ctx.cr6.eq) goto loc_82548D2C;
loc_82548D1C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82548d7c
	goto loc_82548D7C;
loc_82548D2C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82548d8c
	if (!ctx.cr0.eq) goto loc_82548D8C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x82548d84
	goto loc_82548D84;
loc_82548D3C:
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
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
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82548d1c
	if (ctx.cr6.eq) goto loc_82548D1C;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_82548D7C:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82548d8c
	if (!ctx.cr0.eq) goto loc_82548D8C;
loc_82548D84:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82548ca4
	if (!ctx.cr6.eq) goto loc_82548CA4;
loc_82548D8C:
	// lwz r3,660(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82548e7c
	if (!ctx.cr0.eq) goto loc_82548E7C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82548e7c
	if (ctx.cr0.eq) goto loc_82548E7C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82548db8
	if (ctx.cr0.eq) goto loc_82548DB8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82548dc4
	goto loc_82548DC4;
loc_82548DB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82548DC4:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82548e14
	if (!ctx.cr0.eq) goto loc_82548E14;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82548E14;
	sub_824E4308(ctx, base);
loc_82548E14:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,115
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 115, ctx.xer);
	// beq cr6,0x82548d8c
	if (ctx.cr6.eq) goto loc_82548D8C;
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// bne cr6,0x82548e60
	if (!ctx.cr6.eq) goto loc_82548E60;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,116(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 116);
	// lhz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// lwz r11,116(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r14)
	REX_STORE_U32(r14.u32 + 116, ctx.r11.u32);
	// b 0x82548d8c
	goto loc_82548D8C;
loc_82548E60:
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// sth r29,18(r31)
	REX_STORE_U16(r31.u32 + 18, r29.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82549518
	ctx.lr = 0x82548E78;
	sub_82549518(ctx, base);
	// b 0x82548d8c
	goto loc_82548D8C;
loc_82548E7C:
	// stw r29,660(r14)
	REX_STORE_U32(r14.u32 + 660, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,708(r14)
	REX_STORE_U32(r14.u32 + 708, r29.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7a78
	ctx.lr = 0x82548E90;
	sub_824F7A78(ctx, base);
	// lwz r11,44(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 44);
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82548ea8
	if (ctx.cr0.eq) goto loc_82548EA8;
	// addis r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -1048576;
	// stw r11,44(r14)
	REX_STORE_U32(r14.u32 + 44, ctx.r11.u32);
	// b 0x82544360
	goto loc_82544360;
loc_82548EA8:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf4
	ctx.lr = 0x82548EB4;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8276F248) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r9,r5,31
	ctx.r9.u64 = ctx.r5.u32 & 0x1;
	// clrlwi r31,r11,31
	r31.u64 = ctx.r11.u32 & 0x1;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// or r30,r4,r5
	r30.u64 = ctx.r4.u64 | ctx.r5.u64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8276f348
	if (ctx.cr6.eq) goto loc_8276F348;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8276f294
	if (!ctx.cr6.eq) goto loc_8276F294;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x8276f358
	goto loc_8276F358;
loc_8276F294:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8276f2a4
	if (!ctx.cr6.eq) goto loc_8276F2A4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8276f34c
	goto loc_8276F34C;
loc_8276F2A4:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r4.u32);
	// add r9,r31,r4
	ctx.r9.u64 = r31.u64 + ctx.r4.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// lbz r10,-1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8276f34c
	if (ctx.cr6.eq) goto loc_8276F34C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8276f2dc
	if (!ctx.cr6.eq) goto loc_8276F2DC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276f2f0
	if (!ctx.cr6.eq) goto loc_8276F2F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8276f34c
	goto loc_8276F34C;
loc_8276F2DC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8276f300
	if (!ctx.cr6.eq) goto loc_8276F300;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8276f348
	if (!ctx.cr6.eq) goto loc_8276F348;
	// b 0x8276f34c
	goto loc_8276F34C;
loc_8276F2F0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8276f348
	if (!ctx.cr6.eq) goto loc_8276F348;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8276f34c
	goto loc_8276F34C;
loc_8276F300:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8276f348
	if (!ctx.cr6.eq) goto loc_8276F348;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8276f348
	if (!ctx.cr6.eq) goto loc_8276F348;
	// lbz r11,-1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8276f328
	if (!ctx.cr6.eq) goto loc_8276F328;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8276f34c
	goto loc_8276F34C;
loc_8276F328:
	// cmpwi cr6,r6,12
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 12, ctx.xer);
	// ble cr6,0x8276f338
	if (!ctx.cr6.gt) goto loc_8276F338;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8276f34c
	goto loc_8276F34C;
loc_8276F338:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8276f34c
	if (!ctx.cr6.eq) goto loc_8276F34C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8276f34c
	goto loc_8276F34C;
loc_8276F348:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276F34C:
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8276f384
	if (!ctx.cr6.eq) goto loc_8276F384;
loc_8276F358:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8276f370
	if (!ctx.cr6.eq) goto loc_8276F370;
	// li r11,16
	ctx.r11.s64 = 16;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8276f3ac
	goto loc_8276F3AC;
loc_8276F370:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x8276f3ac
	goto loc_8276F3AC;
loc_8276F384:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r7,r10,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// bne cr6,0x8276f3a0
	if (!ctx.cr6.eq) goto loc_8276F3A0;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// b 0x8276f3a8
	goto loc_8276F3A8;
loc_8276F3A0:
	// lbzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + ctx.r4.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
loc_8276F3A8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_8276F3AC:
	// and r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276f3c0
	if (!ctx.cr6.eq) goto loc_8276F3C0;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// b 0x8276f3cc
	goto loc_8276F3CC;
loc_8276F3C0:
	// add r11,r31,r4
	ctx.r11.u64 = r31.u64 + ctx.r4.u64;
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
loc_8276F3CC:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8276f400
	if (!ctx.cr6.lt) goto loc_8276F400;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276f40c
	if (ctx.cr6.lt) goto loc_8276F40C;
loc_8276F3EC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8276F400:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276f3ec
	if (ctx.cr6.lt) goto loc_8276F3EC;
loc_8276F40C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8277EA88) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// vspltisw v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x8277e798
	sub_8277E798(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8277F5B8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8277ec28
	sub_8277EC28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8277F5E8) {
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
	ctx.lr = 0x8277F5F0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,13206
	ctx.r11.s64 = ctx.r4.s64 + 13206;
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
	// rlwinm r20,r10,2,0,29
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r20,r3
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277f650
	if (ctx.cr6.eq) goto loc_8277F650;
	// addi r10,r4,13210
	ctx.r10.s64 = ctx.r4.s64 + 13210;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r7,r10,r24
	ctx.r7.u64 = ctx.r10.u64 + r24.u64;
	// ori r6,r9,40240
	ctx.r6.u64 = ctx.r9.u64 | 40240;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r4,r8,40244
	ctx.r4.u64 = ctx.r8.u64 | 40244;
	// stwx r11,r3,r6
	REX_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwzx r3,r5,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stwx r3,r31,r4
	REX_STORE_U32(r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_8277F650:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x8271b190
	ctx.lr = 0x8277F65C;
	sub_8271B190(ctx, base);
	// addi r26,r3,512
	r26.s64 = ctx.r3.s64 + 512;
	// li r30,0
	r30.s64 = 0;
	// stwx r3,r20,r31
	REX_STORE_U32(r20.u32 + r31.u32, ctx.r3.u32);
	// addi r28,r26,-2
	r28.s64 = r26.s64 + -2;
	// addi r27,r26,2
	r27.s64 = r26.s64 + 2;
loc_8277F670:
	// lwz r11,22044(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22044);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8277f694
	if (!ctx.cr6.lt) goto loc_8277F694;
	// lwz r11,22060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22060);
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
	// b 0x8277f6bc
	goto loc_8277F6BC;
loc_8277F694:
	// lwz r10,22064(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22064);
	// lwz r11,22052(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22052);
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
loc_8277F6BC:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277F6CC;
	sub_82799390(ctx, base);
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277F6E4;
	sub_82799390(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sthu r23,2(r28)
	ea = 2 + r28.u32;
	REX_STORE_U16(ea, r23.u16);
	r28.u32 = ea;
	// sthu r3,-2(r27)
	ea = -2 + r27.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	r27.u32 = ea;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(r30.s32, 256, ctx.xer);
	// blt cr6,0x8277f670
	if (ctx.cr6.lt) goto loc_8277F670;
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// li r4,-256
	ctx.r4.s64 = -256;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277F70C;
	sub_82799390(ctx, base);
	// sth r3,-512(r26)
	REX_STORE_U16(r26.u32 + -512, ctx.r3.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,768
	ctx.r3.s64 = 768;
	// bl 0x8271b190
	ctx.lr = 0x8277F71C;
	sub_8271B190(ctx, base);
	// addi r10,r25,13210
	ctx.r10.s64 = r25.s64 + 13210;
	// addi r23,r3,384
	r23.s64 = ctx.r3.s64 + 384;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r3,128
	r22.s64 = ctx.r3.s64 + 128;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r21,r9,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// addi r25,r23,258
	r25.s64 = r23.s64 + 258;
	// subf r24,r23,r22
	r24.u64 = r22.u64 - r23.u64;
	// stwx r3,r21,r31
	REX_STORE_U32(r21.u32 + r31.u32, ctx.r3.u32);
loc_8277F74C:
	// lwz r11,22048(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22048);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8277f778
	if (!ctx.cr6.lt) goto loc_8277F778;
	// lwz r11,22060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22060);
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
	// rlwinm r28,r8,0,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r27,r7,0,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8277f7b0
	goto loc_8277F7B0;
loc_8277F778:
	// lwz r11,22064(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22064);
	// lwz r9,22056(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22056);
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
	// rlwinm r10,r6,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r8,r9
	r27.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8277F7B0:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277F7C4;
	sub_82799390(ctx, base);
	// sthx r3,r24,r29
	REX_STORE_U16(r24.u32 + r29.u32, ctx.r3.u16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277F7DC;
	sub_82799390(ctx, base);
	// sthx r3,r24,r26
	REX_STORE_U16(r24.u32 + r26.u32, ctx.r3.u16);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// bl 0x82799390
	ctx.lr = 0x8277F7F4;
	sub_82799390(ctx, base);
	// sth r3,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r3.u16);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// addi r4,r27,1
	ctx.r4.s64 = r27.s64 + 1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// bl 0x82799390
	ctx.lr = 0x8277F80C;
	sub_82799390(ctx, base);
	// sth r3,0(r26)
	REX_STORE_U16(r26.u32 + 0, ctx.r3.u16);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// addi r4,r28,-1
	ctx.r4.s64 = r28.s64 + -1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// bl 0x82799390
	ctx.lr = 0x8277F824;
	sub_82799390(ctx, base);
	// sth r3,256(r29)
	REX_STORE_U16(r29.u32 + 256, ctx.r3.u16);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// addi r4,r27,-1
	ctx.r4.s64 = r27.s64 + -1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// bl 0x82799390
	ctx.lr = 0x8277F83C;
	sub_82799390(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sthu r3,-2(r25)
	ea = -2 + r25.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	r25.u32 = ea;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r26,r26,-2
	r26.s64 = r26.s64 + -2;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(r30.s32, 64, ctx.xer);
	// blt cr6,0x8277f74c
	if (ctx.cr6.lt) goto loc_8277F74C;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// li r4,-128
	ctx.r4.s64 = -128;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x82799390
	ctx.lr = 0x8277F868;
	sub_82799390(ctx, base);
	// sth r3,-128(r22)
	REX_STORE_U16(r22.u32 + -128, ctx.r3.u16);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// li r4,-127
	ctx.r4.s64 = -127;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// bl 0x82799390
	ctx.lr = 0x8277F880;
	sub_82799390(ctx, base);
	// sth r3,-128(r23)
	REX_STORE_U16(r23.u32 + -128, ctx.r3.u16);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// li r4,-129
	ctx.r4.s64 = -129;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// bl 0x82799390
	ctx.lr = 0x8277F898;
	sub_82799390(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// sth r3,128(r23)
	REX_STORE_U16(r23.u32 + 128, ctx.r3.u16);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwzx r4,r20,r31
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + r31.u32);
	// ori r7,r9,40240
	ctx.r7.u64 = ctx.r9.u64 | 40240;
	// stwx r4,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// ori r5,r8,40244
	ctx.r5.u64 = ctx.r8.u64 | 40244;
	// lwzx r3,r21,r31
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + r31.u32);
	// stwx r3,r31,r5
	REX_STORE_U32(r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82791AA0) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82791B00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_82791B10:
	// lhzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x82791b2c
	if (ctx.cr0.eq) goto loc_82791B2C;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82791b10
	if (!ctx.cr0.eq) goto loc_82791B10;
loc_82791B2C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82791B50:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82791b50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82791B50;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792090) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r9,r10,-15556
	ctx.r9.s64 = ctx.r10.s64 + -15556;
	// lfd f0,1680(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1680);
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r8,-4(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// lfd f0,1688(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1688);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r11,-4(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// stb r8,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r8.u8);
	// stb r10,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
	// stb r11,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792510) {
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
	// addi r3,r11,-10824
	ctx.r3.s64 = ctx.r11.s64 + -10824;
	// bl 0x822f65c0
	ctx.lr = 0x82792528;
	sub_822F65C0(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,13592
	ctx.r3.s64 = ctx.r11.s64 + 13592;
	// bl 0x8269d008
	ctx.lr = 0x82792534;
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

DEFINE_REX_FUNC(sub_82792C78) {
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
	// li r4,643
	ctx.r4.s64 = 643;
	// addi r3,r11,16232
	ctx.r3.s64 = ctx.r11.s64 + 16232;
	// bl 0x8269c348
	ctx.lr = 0x82792C94;
	sub_8269C348(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r3,8872(r11)
	REX_STORE_U32(ctx.r11.u32 + 8872, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792F48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,8572
	ctx.r3.s64 = ctx.r11.s64 + 8572;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82120ac0
	sub_82120AC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793258) {
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
	// li r30,9
	r30.s64 = 9;
	// addi r11,r11,12760
	ctx.r11.s64 = ctx.r11.s64 + 12760;
	// addi r31,r11,280
	r31.s64 = ctx.r11.s64 + 280;
loc_8279327C:
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82793290;
	sub_82120AC0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8279327c
	if (!ctx.cr0.lt) goto loc_8279327C;
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

DEFINE_REX_FUNC(sub_82793B58) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100cc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793CF8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100be
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793EB8) {
	REX_FUNC_PROLOGUE();
	// .long 0x201007d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827940C8) {
	REX_FUNC_PROLOGUE();
	// .long 0x200000e
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827942D8) {
	REX_FUNC_PROLOGUE();
	// .long 0x201000a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8279A080) {
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
	ctx.lr = 0x8279A088;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r28.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8279a184
	if (ctx.cr6.lt) goto loc_8279A184;
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
	// bge cr6,0x8279a17c
	if (!ctx.cr6.lt) goto loc_8279A17C;
loc_8279A0E4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8279a110
	if (ctx.cr6.lt) goto loc_8279A110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x8279A100;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8279a0e4
	if (ctx.cr6.eq) goto loc_8279A0E4;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8279a1c4
	goto loc_8279A1C4;
loc_8279A110:
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
loc_8279A17C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8279a1c4
	goto loc_8279A1C4;
loc_8279A184:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8279A18C;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_8279A194:
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
	ctx.lr = 0x8279A1AC;
	sub_82725F80(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8279a194
	if (ctx.cr6.lt) goto loc_8279A194;
loc_8279A1C4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// bne cr6,0x8279a360
	if (!ctx.cr6.eq) goto loc_8279A360;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8279a2ac
	if (ctx.cr6.eq) goto loc_8279A2AC;
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8279a24c
	if (!ctx.cr6.lt) goto loc_8279A24C;
loc_8279A1F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279a24c
	if (ctx.cr6.eq) goto loc_8279A24C;
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
	// bge 0x8279a23c
	if (!ctx.cr0.lt) goto loc_8279A23C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A23C;
	sub_82725E38(ctx, base);
loc_8279A23C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8279a1f4
	if (ctx.cr6.gt) goto loc_8279A1F4;
loc_8279A24C:
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
	// bge 0x8279a284
	if (!ctx.cr0.lt) goto loc_8279A284;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A284;
	sub_82725E38(ctx, base);
loc_8279A284:
	// srawi r11,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r11.s64 = r30.s32 >> 1;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r3,r9,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r9.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8279A2AC:
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8279a310
	if (!ctx.cr6.lt) goto loc_8279A310;
loc_8279A2B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279a310
	if (ctx.cr6.eq) goto loc_8279A310;
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
	// bge 0x8279a300
	if (!ctx.cr0.lt) goto loc_8279A300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A300;
	sub_82725E38(ctx, base);
loc_8279A300:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8279a2b8
	if (ctx.cr6.gt) goto loc_8279A2B8;
loc_8279A310:
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
	// bge 0x8279a348
	if (!ctx.cr0.lt) goto loc_8279A348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A348;
	sub_82725E38(ctx, base);
loc_8279A348:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8279A360:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r30,71
	ctx.cr6.compare<int32_t>(r30.s32, 71, ctx.xer);
	// bne cr6,0x8279a454
	if (!ctx.cr6.eq) goto loc_8279A454;
	// lhz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 72);
	// lhz r9,70(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 70);
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x8279a38c
	if (!ctx.cr6.gt) goto loc_8279A38C;
loc_8279A384:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8279a430
	goto loc_8279A430;
loc_8279A38C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8279a384
	if (ctx.cr6.eq) goto loc_8279A384;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8279a3f4
	if (!ctx.cr6.gt) goto loc_8279A3F4;
loc_8279A39C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279a3f4
	if (ctx.cr6.eq) goto loc_8279A3F4;
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
	// bge 0x8279a3e4
	if (!ctx.cr0.lt) goto loc_8279A3E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A3E4;
	sub_82725E38(ctx, base);
loc_8279A3E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8279a39c
	if (ctx.cr6.gt) goto loc_8279A39C;
loc_8279A3F4:
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
	// bge 0x8279a42c
	if (!ctx.cr0.lt) goto loc_8279A42C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A42C;
	sub_82725E38(ctx, base);
loc_8279A42C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8279A430:
	// lhz r9,72(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 72);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// sraw r3,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r3.s64 = ctx.r11.s32 >> temp.u32;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8279A454:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// clrlwi r28,r7,28
	r28.u64 = ctx.r7.u32 & 0xF;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// srawi r5,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 16;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// srawi r4,r8,24
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 24;
	// clrlwi r27,r6,24
	r27.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r26,r5,24
	r26.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r25,r4,24
	r25.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x8279a49c
	if (!ctx.cr6.gt) goto loc_8279A49C;
loc_8279A494:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8279a540
	goto loc_8279A540;
loc_8279A49C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8279a494
	if (ctx.cr6.eq) goto loc_8279A494;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8279a504
	if (!ctx.cr6.gt) goto loc_8279A504;
loc_8279A4AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8279a504
	if (ctx.cr6.eq) goto loc_8279A504;
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
	// bge 0x8279a4f4
	if (!ctx.cr0.lt) goto loc_8279A4F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A4F4;
	sub_82725E38(ctx, base);
loc_8279A4F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8279a4ac
	if (ctx.cr6.gt) goto loc_8279A4AC;
loc_8279A504:
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
	// bge 0x8279a53c
	if (!ctx.cr0.lt) goto loc_8279A53C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8279A53C;
	sub_82725E38(ctx, base);
loc_8279A53C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8279A540:
	// sraw r11,r10,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// and r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 & r25.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// neg r6,r8
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + r27.u64;
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// xor r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r3,r6,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_827B93F0) {
	REX_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x827B93F8;
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// li r10,96
	ctx.r10.s64 = 96;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,144
	ctx.r9.s64 = 144;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,64
	ctx.r8.s64 = 64;
	// li r31,16
	r31.s64 = 16;
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v11,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,160
	r30.s64 = 160;
	// li r11,112
	ctx.r11.s64 = 112;
	// lvx128 v10,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v7,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v11,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v3,v12,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vaddshs v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsldoi128 v31,v9,v61,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vaddshs v30,v7,v11
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v29,v10,v60,2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vaddshs v28,v6,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r31,r1,-64
	r31.s64 = ctx.r1.s64 + -64;
	// vaddshs v27,v5,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r30,r1,-48
	r30.s64 = ctx.r1.s64 + -48;
	// vaddshs v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vaddshs v25,v30,v4
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v24,v28,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// vaddshs v23,v27,v31
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vpkshus128 v58,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx128 v59,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-56(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r31,-64(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stvx128 v58,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r30,-48(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r29,-40(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// stwx r6,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r30,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, r30.u32);
	// stwx r29,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r29.u32);
	// bne cr6,0x827b950c
	if (!ctx.cr6.eq) goto loc_827B950C;
	// lwz r6,-60(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r31,-52(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r30,-44(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r29,-36(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// stw r6,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
loc_827B950C:
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x827b9618
	if (!ctx.cr6.eq) goto loc_827B9618;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,240
	ctx.r9.s64 = 240;
	// li r7,288
	ctx.r7.s64 = 288;
	// li r6,336
	ctx.r6.s64 = 336;
	// li r31,256
	r31.s64 = 256;
	// lvx128 v12,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,208
	r30.s64 = 208;
	// lvx128 v11,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,352
	ctx.r10.s64 = 352;
	// li r9,304
	ctx.r9.s64 = 304;
	// lvx128 v10,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v8,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v57,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v55,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v12,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// vsldoi128 v3,v11,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// vaddshs v2,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v31,v7,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v30,v10,v54,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 14));
	// vsldoi128 v29,v9,v55,2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vaddshs v28,v6,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v5,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// vaddshs v26,v2,v4
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// vaddshs v25,v31,v3
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v24,v28,v30
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v23,v27,v29
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vpkshus128 v52,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx128 v53,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,-56(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r7,-52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// stvx128 v52,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-48(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r31,-44(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r30,-40(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r29,-36(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lwz r3,-60(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r9,-64(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stwux r9,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// stwx r8,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r8.u32);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stwux r6,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stwx r30,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r30.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
loc_827B9618:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_827D2618) {
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
	ctx.lr = 0x827D2620;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r19,50(r3)
	r19.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lwz r29,348(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rotlwi r18,r19,3
	r18.u64 = __builtin_rotateleft32(r19.u32, 3);
	// lhz r26,74(r3)
	r26.u64 = REX_LOAD_U16(ctx.r3.u32 + 74);
	// lhz r20,76(r3)
	r20.u64 = REX_LOAD_U16(ctx.r3.u32 + 76);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r27,352(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// addi r5,r29,2
	ctx.r5.s64 = r29.s64 + 2;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// rotlwi r21,r19,2
	r21.u64 = __builtin_rotateleft32(r19.u32, 2);
	// srawi r30,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	r30.s64 = r19.s32 >> 1;
	// bl 0x82745428
	ctx.lr = 0x827D2678;
	sub_82745428(ctx, base);
	// rotlwi r11,r19,2
	ctx.r11.u64 = __builtin_rotateleft32(r19.u32, 2);
	// rotlwi r10,r19,7
	ctx.r10.u64 = __builtin_rotateleft32(r19.u32, 7);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// bl 0x82745428
	ctx.lr = 0x827D26A0;
	sub_82745428(ctx, base);
	// addi r29,r27,2
	r29.s64 = r27.s64 + 2;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82745428
	ctx.lr = 0x827D26C0;
	sub_82745428(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82745428
	ctx.lr = 0x827D26DC;
	sub_82745428(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// srawi r7,r18,4
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0xF) != 0);
	ctx.r7.s64 = r18.s32 >> 4;
	// rotlwi r6,r19,4
	ctx.r6.u64 = __builtin_rotateleft32(r19.u32, 4);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_827D26EC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827d2720
	if (!ctx.cr6.gt) goto loc_827D2720;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_827D2704:
	// lvx128 v63,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vpkshus128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v63.s16), simde_mm_load_si128((simde__m128i*)ctx.v62.s16)));
	// stvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x827d2704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827D2704;
loc_827D2720:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r28,r26,r28
	r28.u64 = r26.u64 + r28.u64;
	// add r31,r6,r31
	r31.u64 = ctx.r6.u64 + r31.u64;
	// bne 0x827d26ec
	if (!ctx.cr0.eq) goto loc_827D26EC;
	// rlwinm r30,r21,0,0,27
	r30.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r27,r21,1,0,30
	r27.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// li r28,8
	r28.s64 = 8;
	// li r29,255
	r29.s64 = 255;
loc_827D2740:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x827d27dc
	if (!ctx.cr6.gt) goto loc_827D27DC;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r11,r25,16
	ctx.r11.s64 = r25.s64 + 16;
	// subf r7,r25,r23
	ctx.r7.u64 = r23.u64 - r25.u64;
	// subf r6,r24,r22
	ctx.r6.u64 = r22.u64 - r24.u64;
	// rlwinm r31,r8,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_827D2778:
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lvlx128 v60,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lvrx128 v59,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v58,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v56,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v55,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lvrx128 v54,r4,r5
	temp.u32 = ctx.r4.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v53,v57,v55
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvlx128 v52,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v51,v60,v54
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v50,r4,r8
	temp.u32 = ctx.r4.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// vor128 v49,v52,v50
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vpkshus128 v48,v56,v51
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v51.s16), simde_mm_load_si128((simde__m128i*)ctx.v56.s16)));
	// vpkshus128 v47,v49,v53
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v49.s16)));
	// stvlx128 v48,r6,r10
	ea = ctx.r6.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r5,r4
	ea = ctx.r5.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// stvlx128 v47,r0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvrx128 v47,r10,r4
	ea = ctx.r10.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v47.u8[i]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x827d2778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827D2778;
loc_827D27DC:
	// cmpw cr6,r31,r21
	ctx.cr6.compare<int32_t>(r31.s32, r21.s32, ctx.xer);
	// bge cr6,0x827d284c
	if (!ctx.cr6.lt) goto loc_827D284C;
	// subf r6,r31,r21
	ctx.r6.u64 = r21.u64 - r31.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r31,r24
	ctx.r9.u64 = r31.u64 + r24.u64;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// subf r7,r25,r23
	ctx.r7.u64 = r23.u64 - r25.u64;
	// subf r8,r24,r22
	ctx.r8.u64 = r22.u64 - r24.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_827D2800:
	// lhzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// ble cr6,0x827d281c
	if (!ctx.cr6.gt) goto loc_827D281C;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// and r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 & r29.u64;
loc_827D281C:
	// stbx r11,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// ble cr6,0x827d283c
	if (!ctx.cr6.gt) goto loc_827D283C;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// and r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 & r29.u64;
loc_827D283C:
	// stb r11,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x827d2800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827D2800;
loc_827D284C:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r22,r20,r22
	r22.u64 = r20.u64 + r22.u64;
	// add r24,r20,r24
	r24.u64 = r20.u64 + r24.u64;
	// add r23,r27,r23
	r23.u64 = r27.u64 + r23.u64;
	// add r25,r27,r25
	r25.u64 = r27.u64 + r25.u64;
	// bne 0x827d2740
	if (!ctx.cr0.eq) goto loc_827D2740;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

