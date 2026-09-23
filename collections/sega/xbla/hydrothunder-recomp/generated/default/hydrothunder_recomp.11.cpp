#include "hydrothunder_funcs.11.h"

DEFINE_REX_FUNC(sub_82120A20) {
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
	ctx.lr = 0x82120A28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82120a68
	goto loc_82120A68;
loc_82120A44:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82120A50;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82120a60
	if (!ctx.cr0.lt) goto loc_82120A60;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82120a68
	goto loc_82120A68;
loc_82120A60:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82120A68:
	// lbz r11,69(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82120a44
	if (ctx.cr0.eq) goto loc_82120A44;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82120aa0
	if (ctx.cr6.eq) goto loc_82120AA0;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x82120A90;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82120aa0
	if (ctx.cr0.lt) goto loc_82120AA0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82120aac
	goto loc_82120AAC;
loc_82120AA0:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82120AAC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8212B028) {
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
	ctx.lr = 0x8212B030;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x822f6280
	ctx.lr = 0x8212B04C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8212b0c4
	if (ctx.cr0.eq) goto loc_8212B0C4;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r30,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	r30.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r11,60(r31)
	REX_STORE_U8(r31.u32 + 60, ctx.r11.u8);
	// stb r11,61(r31)
	REX_STORE_U8(r31.u32 + 61, ctx.r11.u8);
	// beq 0x8212b0a4
	if (ctx.cr0.eq) goto loc_8212B0A4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r27,r28,28
	r27.s64 = r28.s64 + 28;
	// bl 0x82120d70
	ctx.lr = 0x8212B090;
	sub_82120D70(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8212ab28
	ctx.lr = 0x8212B09C;
	sub_8212AB28(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
loc_8212B0A4:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8212b298
	ctx.lr = 0x8212B0B8;
	sub_8212B298(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8212B0C4:
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
	ctx.lr = 0x8212B0E0;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82130D00) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82130d38
	if (ctx.cr6.gt) goto loc_82130D38;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-21824
	ctx.r4.s64 = ctx.r11.s64 + -21824;
	// addi r3,r10,-21756
	ctx.r3.s64 = ctx.r10.s64 + -21756;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x821231d0
	ctx.lr = 0x82130D38;
	sub_821231D0(ctx, base);
loc_82130D38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130d70
	ctx.lr = 0x82130D40;
	sub_82130D70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x82130D4C;
	sub_82120AC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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

DEFINE_REX_FUNC(sub_82133E88) {
	REX_FUNC_PROLOGUE();
	// lwz r3,252(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82133F68) {
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
	ctx.lr = 0x82133F70;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
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
	// bl 0x822f6280
	ctx.lr = 0x82133F90;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82133fb4
	if (ctx.cr0.eq) goto loc_82133FB4;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,27480
	ctx.r10.s64 = ctx.r10.s64 + 27480;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82133fb8
	goto loc_82133FB8;
loc_82133FB4:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82133FB8:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// addi r10,r10,-12628
	ctx.r10.s64 = ctx.r10.s64 + -12628;
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// addi r9,r9,-12432
	ctx.r9.s64 = ctx.r9.s64 + -12432;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// bl 0x822d3298
	ctx.lr = 0x82134008;
	sub_822D3298(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8213A150) {
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
	ctx.lr = 0x8213A174;
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
	ctx.lr = 0x8213A18C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6100(r10)
	REX_STORE_U32(ctx.r10.u32 + 6100, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8213B6D0) {
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
	ctx.lr = 0x8213B6D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,88
	ctx.r11.s64 = 88;
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r30,r5,-88
	r30.s64 = ctx.r5.s64 + -88;
	// divw r10,r10,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// subf r9,r4,r30
	ctx.r9.u64 = r30.u64 - ctx.r4.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// divw r11,r9,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mulli r10,r10,88
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(88));
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// add r31,r10,r4
	r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ble cr6,0x8213b780
	if (!ctx.cr6.gt) goto loc_8213B780;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r29,r11,88
	r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(88));
	// mulli r27,r11,176
	r27.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(176));
	// add r28,r29,r4
	r28.u64 = r29.u64 + ctx.r4.u64;
	// add r5,r27,r4
	ctx.r5.u64 = r27.u64 + ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8213bb08
	ctx.lr = 0x8213B744;
	sub_8213BB08(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// add r5,r29,r31
	ctx.r5.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r29,r31
	ctx.r3.u64 = r31.u64 - r29.u64;
	// bl 0x8213bb08
	ctx.lr = 0x8213B758;
	sub_8213BB08(ctx, base);
	// subf r29,r29,r30
	r29.u64 = r30.u64 - r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subf r3,r27,r30
	ctx.r3.u64 = r30.u64 - r27.u64;
	// bl 0x8213bb08
	ctx.lr = 0x8213B770;
	sub_8213BB08(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8213b784
	goto loc_8213B784;
loc_8213B780:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_8213B784:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8213bb08
	ctx.lr = 0x8213B78C;
	sub_8213BB08(ctx, base);
	// addi r28,r31,88
	r28.s64 = r31.s64 + 88;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(r25.u32, r31.u32, ctx.xer);
	// bge cr6,0x8213b810
	if (!ctx.cr6.lt) goto loc_8213B810;
loc_8213B798:
	// addi r30,r31,-88
	r30.s64 = r31.s64 + -88;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x8213B7AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213b810
	if (!ctx.cr0.eq) goto loc_8213B810;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8213B7C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213b810
	if (!ctx.cr0.eq) goto loc_8213B810;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(r25.u32, r30.u32, ctx.xer);
	// blt cr6,0x8213b798
	if (ctx.cr6.lt) goto loc_8213B798;
	// b 0x8213b810
	goto loc_8213B810;
loc_8213B7DC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x8213B7EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213b818
	if (!ctx.cr0.eq) goto loc_8213B818;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8213B804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213b818
	if (!ctx.cr0.eq) goto loc_8213B818;
	// addi r28,r28,88
	r28.s64 = r28.s64 + 88;
loc_8213B810:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// blt cr6,0x8213b7dc
	if (ctx.cr6.lt) goto loc_8213B7DC;
loc_8213B818:
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x8213b868
	goto loc_8213B868;
loc_8213B824:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8213B834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213b864
	if (!ctx.cr0.eq) goto loc_8213B864;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x8213B84C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213b870
	if (!ctx.cr0.eq) goto loc_8213B870;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r28,r28,88
	r28.s64 = r28.s64 + 88;
loc_8213B860:
	// bl 0x8213ba48
	ctx.lr = 0x8213B864;
	sub_8213BA48(ctx, base);
loc_8213B864:
	// addi r30,r30,88
	r30.s64 = r30.s64 + 88;
loc_8213B868:
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// blt cr6,0x8213b824
	if (ctx.cr6.lt) goto loc_8213B824;
loc_8213B870:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// ble cr6,0x8213b8d0
	if (!ctx.cr6.gt) goto loc_8213B8D0;
	// addi r29,r27,-88
	r29.s64 = r27.s64 + -88;
loc_8213B87C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x8213B88C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213b8bc
	if (!ctx.cr0.eq) goto loc_8213B8BC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8213B8A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213b8cc
	if (!ctx.cr0.eq) goto loc_8213B8CC;
	// addi r31,r31,-88
	r31.s64 = r31.s64 + -88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213ba48
	ctx.lr = 0x8213B8BC;
	sub_8213BA48(ctx, base);
loc_8213B8BC:
	// addi r27,r27,-88
	r27.s64 = r27.s64 + -88;
	// addi r29,r29,-88
	r29.s64 = r29.s64 + -88;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(r25.u32, r27.u32, ctx.xer);
	// blt cr6,0x8213b87c
	if (ctx.cr6.lt) goto loc_8213B87C;
loc_8213B8CC:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
loc_8213B8D0:
	// bne cr6,0x8213b908
	if (!ctx.cr6.eq) goto loc_8213B908;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// beq cr6,0x8213b94c
	if (ctx.cr6.eq) goto loc_8213B94C;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// beq cr6,0x8213b8f0
	if (ctx.cr6.eq) goto loc_8213B8F0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213ba48
	ctx.lr = 0x8213B8F0;
	sub_8213BA48(ctx, base);
loc_8213B8F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r28,88
	r28.s64 = r28.s64 + 88;
	// addi r31,r31,88
	r31.s64 = r31.s64 + 88;
	// addi r30,r30,88
	r30.s64 = r30.s64 + 88;
	// b 0x8213b938
	goto loc_8213B938;
loc_8213B908:
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// addi r27,r27,-88
	r27.s64 = r27.s64 + -88;
	// bne cr6,0x8213b940
	if (!ctx.cr6.eq) goto loc_8213B940;
	// addi r31,r31,-88
	r31.s64 = r31.s64 + -88;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(r27.u32, r31.u32, ctx.xer);
	// beq cr6,0x8213b92c
	if (ctx.cr6.eq) goto loc_8213B92C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8213ba48
	ctx.lr = 0x8213B92C;
	sub_8213BA48(ctx, base);
loc_8213B92C:
	// addi r28,r28,-88
	r28.s64 = r28.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8213B938:
	// bl 0x8213ba48
	ctx.lr = 0x8213B93C;
	sub_8213BA48(ctx, base);
	// b 0x8213b868
	goto loc_8213B868;
loc_8213B940:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8213b860
	goto loc_8213B860;
loc_8213B94C:
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r28,4(r23)
	REX_STORE_U32(r23.u32 + 4, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82150A10) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,73(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,73(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82150a6c
	if (!ctx.cr0.eq) goto loc_82150A6C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82150a40
	goto loc_82150A40;
loc_82150A38:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82150A40:
	// lbz r9,73(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82150a38
	if (ctx.cr0.eq) goto loc_82150A38;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82150A54:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82150a7c
	if (!ctx.cr6.eq) goto loc_82150A7C;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82150A6C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,73(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82150a54
	if (ctx.cr0.eq) goto loc_82150A54;
loc_82150A7C:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82154050) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82154058;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// addi r28,r11,-10444
	r28.s64 = ctx.r11.s64 + -10444;
	// beq cr6,0x82154090
	if (ctx.cr6.eq) goto loc_82154090;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-9840
	ctx.r3.s64 = ctx.r11.s64 + -9840;
	// li r5,614
	ctx.r5.s64 = 614;
	// bl 0x821231d0
	ctx.lr = 0x82154090;
	sub_821231D0(ctx, base);
loc_82154090:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x821540a4
	if (ctx.cr6.lt) goto loc_821540A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821540b8
	if (ctx.cr6.lt) goto loc_821540B8;
loc_821540A4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-9912
	ctx.r3.s64 = ctx.r11.s64 + -9912;
	// li r5,615
	ctx.r5.s64 = 615;
	// bl 0x821231d0
	ctx.lr = 0x821540B8;
	sub_821231D0(ctx, base);
loc_821540B8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r30,1064
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1064));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821530d0
	ctx.lr = 0x821540CC;
	sub_821530D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82157328) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82157330;
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
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82157350
	if (ctx.cr6.eq) goto loc_82157350;
loc_82157348:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821573b0
	goto loc_821573B0;
loc_82157350:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157348
	if (!ctx.cr6.eq) goto loc_82157348;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821583f0
	ctx.lr = 0x82157368;
	sub_821583F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82157348
	if (ctx.cr0.eq) goto loc_82157348;
	// addi r30,r31,4692
	r30.s64 = r31.s64 + 4692;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82157384;
	sub_826A2E60(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r31,1528
	ctx.r6.s64 = r31.s64 + 1528;
	// lwz r5,1524(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1524);
	// ld r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lwz r3,4728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4728);
	// bl 0x8264e488
	ctx.lr = 0x8215739C;
	sub_8264E488(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82157348
	if (!ctx.cr6.eq) goto loc_82157348;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_821573B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215B680) {
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
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8215b6cc
	if (ctx.cr6.eq) goto loc_8215B6CC;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8215b6cc
	if (!ctx.cr6.lt) goto loc_8215B6CC;
	// lbz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x8215b708
	goto loc_8215B708;
loc_8215B6CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215B6E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215b708
	if (ctx.cr6.eq) goto loc_8215B708;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215B704;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8215B708:
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

DEFINE_REX_FUNC(sub_8215F270) {
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
	// bl 0x8215fc78
	ctx.lr = 0x8215F288;
	sub_8215FC78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8215f2ac
	if (!ctx.cr6.eq) goto loc_8215F2AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r4,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 4;
	// b 0x8215f2b0
	goto loc_8215F2B0;
loc_8215F2AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8215F2B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x8215F2B8;
	sub_8215F200(ctx, base);
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

DEFINE_REX_FUNC(sub_821615C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821615D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// addi r4,r11,19476
	ctx.r4.s64 = ctx.r11.s64 + 19476;
	// bl 0x8215f338
	ctx.lr = 0x821615EC;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82161c20
	ctx.lr = 0x821615F8;
	sub_82161C20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82161608
	if (!ctx.cr0.eq) goto loc_82161608;
loc_82161600:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821616f4
	goto loc_821616F4;
loc_82161608:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,19484
	ctx.r4.s64 = ctx.r11.s64 + 19484;
	// bl 0x8215f338
	ctx.lr = 0x82161618;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82161d58
	ctx.lr = 0x82161624;
	sub_82161D58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82161600
	if (ctx.cr0.eq) goto loc_82161600;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,19496
	ctx.r4.s64 = ctx.r11.s64 + 19496;
	// bl 0x8215f338
	ctx.lr = 0x8216163C;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,19628
	ctx.r4.s64 = ctx.r11.s64 + 19628;
	// bl 0x8215f338
	ctx.lr = 0x8216164C;
	sub_8215F338(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x8215fb50
	ctx.lr = 0x82161654;
	sub_8215FB50(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19640
	ctx.r4.s64 = ctx.r11.s64 + 19640;
	// bl 0x8215f338
	ctx.lr = 0x82161664;
	sub_8215F338(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// bl 0x8215fb50
	ctx.lr = 0x8216166C;
	sub_8215FB50(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19652
	ctx.r4.s64 = ctx.r11.s64 + 19652;
	// bl 0x8215f338
	ctx.lr = 0x8216167C;
	sub_8215F338(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bl 0x8215fb50
	ctx.lr = 0x82161684;
	sub_8215FB50(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,19504
	ctx.r4.s64 = ctx.r11.s64 + 19504;
	// bl 0x8215f338
	ctx.lr = 0x82161694;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82161fc0
	ctx.lr = 0x821616A0;
	sub_82161FC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82161600
	if (ctx.cr0.eq) goto loc_82161600;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821616f0
	if (!ctx.cr6.gt) goto loc_821616F0;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
loc_821616C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82162650
	ctx.lr = 0x821616CC;
	sub_82162650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82162130
	ctx.lr = 0x821616D8;
	sub_82162130(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821616c0
	if (ctx.cr6.lt) goto loc_821616C0;
loc_821616F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821616F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8216BFE8) {
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
	ctx.lr = 0x8216BFF0;
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
	// bne 0x8216c050
	if (!ctx.cr0.eq) goto loc_8216C050;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
loc_8216C020:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
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
	// beq 0x8216c040
	if (ctx.cr0.eq) goto loc_8216C040;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8216c044
	goto loc_8216C044;
loc_8216C040:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8216C044:
	// lbz r9,21(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8216c020
	if (ctx.cr0.eq) goto loc_8216C020;
loc_8216C050:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r26,r30
	r26.u64 = r30.u64;
	// beq 0x8216c0a4
	if (ctx.cr0.eq) goto loc_8216C0A4;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8216c09c
	if (!ctx.cr6.eq) goto loc_8216C09C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8216C078:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82133540
	ctx.lr = 0x8216C088;
	sub_82133540(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	REX_STORE_U8(r31.u32 + 4, r25.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8216c0d4
	goto loc_8216C0D4;
loc_8216C09C:
	// bl 0x8216c0e0
	ctx.lr = 0x8216C0A0;
	sub_8216C0E0(ctx, base);
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8216C0A4:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8216c0c0
	if (!ctx.cr6.lt) goto loc_8216C0C0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x8216c078
	goto loc_8216C078;
loc_8216C0C0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8216C0C8;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_8216C0D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82173B10) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-824
	ctx.r4.s64 = ctx.r11.s64 + -824;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x82173B3C;
	sub_821A4270(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x82173B54;
	sub_821A4270(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,1776
	ctx.r4.s64 = ctx.r11.s64 + 1776;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x82173B6C;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// bne 0x82173b7c
	if (!ctx.cr0.eq) goto loc_82173B7C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82173B7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r30,r9,27560
	r30.s64 = ctx.r9.s64 + 27560;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173BD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r4,r10,27544
	ctx.r4.s64 = ctx.r10.s64 + 27544;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173C00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8217B060) {
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
	// addi r11,r11,28736
	ctx.r11.s64 = ctx.r11.s64 + 28736;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8217b0a8
	ctx.lr = 0x8217B084;
	sub_8217B0A8(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x8217a638
	ctx.lr = 0x8217B08C;
	sub_8217A638(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217ab08
	ctx.lr = 0x8217B094;
	sub_8217AB08(ctx, base);
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

DEFINE_REX_FUNC(sub_8217C5E8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8217DE40) {
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
	ctx.lr = 0x8217DE48;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217DE64;
	sub_8217D058(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8217a4b8
	ctx.lr = 0x8217DE70;
	sub_8217A4B8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8217e26c
	if (ctx.cr6.eq) goto loc_8217E26C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217e26c
	if (ctx.cr0.eq) goto loc_8217E26C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8217deb0
	if (ctx.cr6.eq) goto loc_8217DEB0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8217cef0
	ctx.lr = 0x8217DEA0;
	sub_8217CEF0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
loc_8217DEB0:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x8217ded0
	if (ctx.cr6.eq) goto loc_8217DED0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8217e28c
	if (ctx.cr6.eq) goto loc_8217E28C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x8217e27c
	goto loc_8217E27C;
loc_8217DED0:
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217DEDC;
	sub_8217D058(ctx, base);
	// addi r31,r25,32
	r31.s64 = r25.s64 + 32;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8217d180
	ctx.lr = 0x8217DEEC;
	sub_8217D180(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8217e254
	if (ctx.cr0.eq) goto loc_8217E254;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217e254
	if (ctx.cr0.eq) goto loc_8217E254;
	// li r26,0
	r26.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217a250
	ctx.lr = 0x8217DF14;
	sub_8217A250(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,28700
	ctx.r4.s64 = ctx.r10.s64 + 28700;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x8217DF2C;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8217a438
	ctx.lr = 0x8217DF40;
	sub_8217A438(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,28496
	ctx.r4.s64 = ctx.r11.s64 + 28496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217a438
	ctx.lr = 0x8217DF54;
	sub_8217A438(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r23,-1
	r23.s64 = -1;
	// addi r22,r11,28948
	r22.s64 = ctx.r11.s64 + 28948;
	// addi r21,r10,-20
	r21.s64 = ctx.r10.s64 + -20;
loc_8217DF68:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217e23c
	if (ctx.cr0.eq) goto loc_8217E23C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217DF80;
	sub_8217D058(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8217e228
	if (ctx.cr0.eq) goto loc_8217E228;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217e228
	if (ctx.cr0.eq) goto loc_8217E228;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x8217e0a4
	if (ctx.cr6.eq) goto loc_8217E0A4;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x8217e100
	if (ctx.cr6.eq) goto loc_8217E100;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x8217DFAC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217dfe0
	if (ctx.cr0.eq) goto loc_8217DFE0;
	// stw r23,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r23.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r23,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r23.u32);
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// stw r22,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// stw r21,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r21.u32);
	// stw r21,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r21.u32);
	// stw r26,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r26.u32);
	// stw r26,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r26.u32);
	// stw r26,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r26.u32);
	// b 0x8217dfe4
	goto loc_8217DFE4;
loc_8217DFE0:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8217DFE4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8217e1a4
	if (ctx.cr6.eq) goto loc_8217E1A4;
	// stw r24,16(r31)
	REX_STORE_U32(r31.u32 + 16, r24.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217E010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8217e204
	if (ctx.cr0.eq) goto loc_8217E204;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217e204
	if (ctx.cr0.eq) goto loc_8217E204;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r8,r25,44
	ctx.r8.s64 = r25.s64 + 44;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// b 0x8217e074
	goto loc_8217E074;
loc_8217E038:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8217E044:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// beq 0x8217e068
	if (ctx.cr0.eq) goto loc_8217E068;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8217e044
	if (ctx.cr6.eq) goto loc_8217E044;
loc_8217E068:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8217e080
	if (ctx.cr0.eq) goto loc_8217E080;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_8217E074:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8217e038
	if (!ctx.cr6.eq) goto loc_8217E038;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8217E080:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217e1b8
	if (!ctx.cr6.eq) goto loc_8217E1B8;
	// stw r8,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r31.u32);
	// stw r31,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r31.u32);
	// b 0x8217df68
	goto loc_8217DF68;
loc_8217E0A4:
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x8217e0e4
	if (ctx.cr6.eq) goto loc_8217E0E4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8217e0d0
	if (ctx.cr6.eq) goto loc_8217E0D0;
	// li r4,8
	ctx.r4.s64 = 8;
loc_8217E0C0:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217E0D0;
	sub_8217DAF0(ctx, base);
loc_8217E0D0:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r21.u32, ctx.xer);
	// beq cr6,0x8217e28c
	if (ctx.cr6.eq) goto loc_8217E28C;
loc_8217E0DC:
	// bl 0x8269d6a0
	ctx.lr = 0x8217E0E0;
	sub_8269D6A0(ctx, base);
	// b 0x8217e28c
	goto loc_8217E28C;
loc_8217E0E4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r5,1
	r31.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r21.u32, ctx.xer);
	// beq cr6,0x8217e0f8
	if (ctx.cr6.eq) goto loc_8217E0F8;
loc_8217E0F4:
	// bl 0x8269d6a0
	ctx.lr = 0x8217E0F8;
	sub_8269D6A0(ctx, base);
loc_8217E0F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8217e290
	goto loc_8217E290;
loc_8217E100:
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8217e298
	ctx.lr = 0x8217E114;
	sub_8217E298(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8217e190
	if (ctx.cr0.eq) goto loc_8217E190;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217e190
	if (ctx.cr0.eq) goto loc_8217E190;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217E140;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217e160
	if (ctx.cr0.eq) goto loc_8217E160;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(r30.u32, r21.u32, ctx.xer);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// beq cr6,0x8217e0f8
	if (ctx.cr6.eq) goto loc_8217E0F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8217e0f4
	goto loc_8217E0F4;
loc_8217E160:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8217e180
	if (ctx.cr6.eq) goto loc_8217E180;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217E180;
	sub_8217DAF0(ctx, base);
loc_8217E180:
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(r30.u32, r21.u32, ctx.xer);
	// beq cr6,0x8217e28c
	if (ctx.cr6.eq) goto loc_8217E28C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8217e0dc
	goto loc_8217E0DC;
loc_8217E190:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8217e0d0
	if (ctx.cr6.eq) goto loc_8217E0D0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x8217e0c0
	goto loc_8217E0C0;
loc_8217E1A4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8217e0d0
	if (ctx.cr6.eq) goto loc_8217E0D0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8217e0c0
	goto loc_8217E0C0;
loc_8217E1B8:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8217E1C4:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8217e1c4
	if (!ctx.cr6.eq) goto loc_8217E1C4;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8217a390
	ctx.lr = 0x8217E1E8;
	sub_8217A390(ctx, base);
loc_8217E1E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217E200;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8217e0d0
	goto loc_8217E0D0;
loc_8217E204:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8217e1e8
	if (ctx.cr6.eq) goto loc_8217E1E8;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217E224;
	sub_8217DAF0(ctx, base);
	// b 0x8217e1e8
	goto loc_8217E1E8;
loc_8217E228:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8217e0d0
	if (ctx.cr6.eq) goto loc_8217E0D0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8217e0c0
	goto loc_8217E0C0;
loc_8217E23C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r21.u32, ctx.xer);
	// beq cr6,0x8217e24c
	if (ctx.cr6.eq) goto loc_8217E24C;
	// bl 0x8269d6a0
	ctx.lr = 0x8217E24C;
	sub_8269D6A0(ctx, base);
loc_8217E24C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8217e290
	goto loc_8217E290;
loc_8217E254:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8217e28c
	if (ctx.cr6.eq) goto loc_8217E28C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8217e280
	goto loc_8217E280;
loc_8217E26C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8217e28c
	if (ctx.cr6.eq) goto loc_8217E28C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8217E27C:
	// li r4,4
	ctx.r4.s64 = 4;
loc_8217E280:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217E28C;
	sub_8217DAF0(ctx, base);
loc_8217E28C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217E290:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8219B840) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8219B848;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8219b8a8
	if (!ctx.cr0.gt) goto loc_8219B8A8;
	// li r29,0
	r29.s64 = 0;
loc_8219B870:
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219B888;
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
	// blt cr6,0x8219b870
	if (ctx.cr6.lt) goto loc_8219B870;
loc_8219B8A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8219E170) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15488
	ctx.r3.s64 = ctx.r11.s64 + -15488;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219E240) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f11,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f0,240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821911f8
	ctx.lr = 0x8219E290;
	sub_821911F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r9,-28748
	ctx.r9.s64 = ctx.r9.s64 + -28748;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// stw r7,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r7.u32);
	// stw r6,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r6.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r5,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r5.u32);
	// stw r4,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r4.u32);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_821A4578) {
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
	ctx.lr = 0x821A4580;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r29,r27
	r29.u64 = r27.u64;
	// beq cr6,0x821a4650
	if (ctx.cr6.eq) goto loc_821A4650;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a4650
	if (ctx.cr6.eq) goto loc_821A4650;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821a45c8
	if (!ctx.cr6.gt) goto loc_821A45C8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821A45C8:
	// bl 0x822f6338
	ctx.lr = 0x821A45CC;
	sub_822F6338(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x821a4628
	goto loc_821A4628;
loc_821A45E4:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x821a45f8
	if (ctx.cr6.lt) goto loc_821A45F8;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_821A45F8:
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821a4610
	if (ctx.cr6.lt) goto loc_821A4610;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821A4610:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bl 0x82121598
	ctx.lr = 0x821A4620;
	sub_82121598(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_821A4628:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821a45e4
	if (!ctx.cr6.eq) goto loc_821A45E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-26468
	ctx.r11.s64 = ctx.r11.s64 + -26468;
	// addi r10,r10,-26856
	ctx.r10.s64 = ctx.r10.s64 + -26856;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
loc_821A4650:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
loc_821A4658:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a4658
	if (!ctx.cr6.eq) goto loc_821A4658;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82400440
	ctx.lr = 0x821A468C;
	sub_82400440(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a46b0
	if (ctx.cr6.eq) goto loc_821A46B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A46B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A46B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821a46c0
	if (ctx.cr6.eq) goto loc_821A46C0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x821A46C0;
	sub_8269D6A0(ctx, base);
loc_821A46C0:
	// cntlzw r11,r31
	ctx.r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821AC788) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ac7a0
	if (!ctx.cr6.lt) goto loc_821AC7A0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821AC7A0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ADD38) {
	REX_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821AEDB8) {
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
	ctx.lr = 0x821AEDC0;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821aef8c
	if (ctx.cr0.eq) goto loc_821AEF8C;
	// bl 0x821ae978
	ctx.lr = 0x821AEDE4;
	sub_821AE978(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821aee7c
	if (!ctx.cr6.eq) goto loc_821AEE7C;
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// li r29,0
	r29.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821aef8c
	if (!ctx.cr0.gt) goto loc_821AEF8C;
	// li r28,128
	r28.s64 = 128;
	// li r27,255
	r27.s64 = 255;
	// stb r28,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// lis r25,-32106
	r25.s64 = -2104098816;
	// stb r28,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// addi r28,r30,152
	r28.s64 = r30.s64 + 152;
	// stb r27,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r27.u8);
	// stb r27,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r27.u8);
loc_821AEE20:
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r26,6096(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 6096);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r27,r11,176
	r27.s64 = ctx.r11.s64 + 176;
	// bl 0x821afa30
	ctx.lr = 0x821AEE3C;
	sub_821AFA30(ctx, base);
	// addi r23,r3,16
	r23.s64 = ctx.r3.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821afa30
	ctx.lr = 0x821AEE4C;
	sub_821AFA30(ctx, base);
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82136f38
	ctx.lr = 0x821AEE64;
	sub_82136F38(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 156);
	// mr r29,r31
	r29.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821aee20
	if (ctx.cr6.lt) goto loc_821AEE20;
	// b 0x821aef8c
	goto loc_821AEF8C;
loc_821AEE7C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821aef8c
	if (!ctx.cr6.eq) goto loc_821AEF8C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821aeb58
	ctx.lr = 0x821AEE8C;
	sub_821AEB58(ctx, base);
	// lbz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821aef8c
	if (ctx.cr0.eq) goto loc_821AEF8C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r30,180
	r31.s64 = r30.s64 + 180;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821de818
	ctx.lr = 0x821AEEB0;
	sub_821DE818(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// li r28,128
	r28.s64 = 128;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r27,255
	r27.s64 = 255;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lfs f30,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	f30.f64 = double(temp.f32);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x821aef3c
	if (!ctx.cr6.gt) goto loc_821AEF3C;
	// stb r28,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// stb r27,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r27.u8);
	// stb r28,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// stb r27,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r27.u8);
loc_821AEEE8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x821de818
	ctx.lr = 0x821AEF10;
	sub_821DE818(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,6096(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,176
	ctx.r7.s64 = ctx.r11.s64 + 176;
	// bl 0x82136f38
	ctx.lr = 0x821AEF2C;
	sub_82136F38(ctx, base);
	// fadds f31,f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f30.f64));
	// lfs f1,164(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f31,f1
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// blt cr6,0x821aeee8
	if (ctx.cr6.lt) goto loc_821AEEE8;
loc_821AEF3C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x821de818
	ctx.lr = 0x821AEF60;
	sub_821DE818(ctx, base);
	// stb r28,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stb r27,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r27.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r28,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r27,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r3,6096(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// addi r7,r11,176
	ctx.r7.s64 = ctx.r11.s64 + 176;
	// bl 0x82136f38
	ctx.lr = 0x821AEF8C;
	sub_82136F38(ctx, base);
loc_821AEF8C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821BC8A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14992
	ctx.r3.s64 = ctx.r11.s64 + -14992;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BCC10) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822f6280
	ctx.lr = 0x821BCC24;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bcc34
	if (ctx.cr0.eq) goto loc_821BCC34;
	// bl 0x821bcc48
	ctx.lr = 0x821BCC30;
	sub_821BCC48(ctx, base);
	// b 0x821bcc38
	goto loc_821BCC38;
loc_821BCC34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BCC38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE4F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14936
	ctx.r3.s64 = ctx.r11.s64 + -14936;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE538) {
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
	ctx.lr = 0x821BE540;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r27,r24
	r27.u64 = r24.u64;
	// bl 0x82178268
	ctx.lr = 0x821BE55C;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r29,116
	r31.s64 = r29.s64 + 116;
	// addi r11,r11,-18688
	ctx.r11.s64 = ctx.r11.s64 + -18688;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x821BE57C;
	sub_826A2E60(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821BE584;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821be5a4
	if (ctx.cr0.eq) goto loc_821BE5A4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BE59C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821be5a8
	goto loc_821BE5A8;
loc_821BE5A4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_821BE5A8:
	// stw r4,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r4.u32);
	// addi r3,r29,96
	ctx.r3.s64 = r29.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BE5B4;
	sub_821D3988(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// addi r26,r29,80
	r26.s64 = r29.s64 + 80;
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r25,r10,-19100
	r25.s64 = ctx.r10.s64 + -19100;
loc_821BE5C8:
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826a0568
	ctx.lr = 0x821BE5DC;
	sub_826A0568(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821BE5E4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821be610
	if (ctx.cr0.eq) goto loc_821BE610;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120600
	ctx.lr = 0x821BE5F8;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
	// bl 0x82196ba8
	ctx.lr = 0x821BE60C;
	sub_82196BA8(ctx, base);
	// b 0x821be614
	goto loc_821BE614;
loc_821BE610:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821BE614:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x821BE624;
	sub_82145710(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821be640
	if (ctx.cr0.eq) goto loc_821BE640;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r27,r27,0,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821BE640;
	sub_82120AC0(ctx, base);
loc_821BE640:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// blt cr6,0x821be5c8
	if (ctx.cr6.lt) goto loc_821BE5C8;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BE658;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821be6cc
	if (ctx.cr0.eq) goto loc_821BE6CC;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BE67C;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BE690;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821be6bc
	if (ctx.cr0.eq) goto loc_821BE6BC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-6216
	ctx.r10.s64 = ctx.r10.s64 + -6216;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821be6c0
	goto loc_821BE6C0;
loc_821BE6BC:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821BE6C0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821be6d0
	goto loc_821BE6D0;
loc_821BE6CC:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821BE6D0:
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BE6E8;
	sub_82264568(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r24
	r31.u64 = r24.u64;
	// addi r28,r11,-23824
	r28.s64 = ctx.r11.s64 + -23824;
loc_821BE6F4:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BE6FC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821be738
	if (ctx.cr0.eq) goto loc_821BE738;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// bl 0x826a06d8
	ctx.lr = 0x821BE718;
	sub_826A06D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BE72C;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// b 0x821be73c
	goto loc_821BE73C;
loc_821BE738:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821BE73C:
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BE754;
	sub_82264568(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// blt cr6,0x821be6f4
	if (ctx.cr6.lt) goto loc_821BE6F4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821CD860) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14692
	ctx.r3.s64 = ctx.r11.s64 + -14692;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CDE48) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,164
	ctx.r3.s64 = ctx.r11.s64 + 164;
	// bl 0x821ea168
	ctx.lr = 0x821CDE6C;
	sub_821EA168(ctx, base);
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

DEFINE_REX_FUNC(sub_821CF5D8) {
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
	ctx.lr = 0x821CF5E0;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r24,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r24.u32);
	// mr r30,r24
	r30.u64 = r24.u64;
	// bl 0x82178268
	ctx.lr = 0x821CF5FC;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// addi r10,r10,-13688
	ctx.r10.s64 = ctx.r10.s64 + -13688;
	// addi r9,r9,-13648
	ctx.r9.s64 = ctx.r9.s64 + -13648;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r28,r31,124
	r28.s64 = r31.s64 + 124;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,120(r31)
	REX_STORE_U32(r31.u32 + 120, r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821CF638;
	sub_82120AC0(ctx, base);
	// addi r27,r31,152
	r27.s64 = r31.s64 + 152;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821CF64C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r24,193(r31)
	REX_STORE_U8(r31.u32 + 193, r24.u8);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stb r24,194(r31)
	REX_STORE_U8(r31.u32 + 194, r24.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r24,204(r31)
	REX_STORE_U8(r31.u32 + 204, r24.u8);
	// li r3,108
	ctx.r3.s64 = 108;
	// stb r9,192(r31)
	REX_STORE_U8(r31.u32 + 192, ctx.r9.u8);
	// addi r26,r31,180
	r26.s64 = r31.s64 + 180;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r31,184
	r25.s64 = r31.s64 + 184;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r31,188
	r23.s64 = r31.s64 + 188;
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// addi r22,r31,192
	r22.s64 = r31.s64 + 192;
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// addi r21,r31,193
	r21.s64 = r31.s64 + 193;
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// addi r20,r31,194
	r20.s64 = r31.s64 + 194;
	// bl 0x822f6280
	ctx.lr = 0x821CF6A0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cf708
	if (ctx.cr0.eq) goto loc_821CF708;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-13768
	ctx.r4.s64 = ctx.r11.s64 + -13768;
	// bl 0x82120600
	ctx.lr = 0x821CF6B8;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// li r30,1
	r30.s64 = 1;
	// lwz r4,-15288(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15288);
	// bl 0x82120600
	ctx.lr = 0x821CF6CC;
	sub_82120600(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d58c8
	ctx.lr = 0x821CF6E0;
	sub_821D58C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x821CF6F0;
	sub_82120AC0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r24,104(r29)
	REX_STORE_U32(r29.u32 + 104, r24.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r10,-13640
	ctx.r10.s64 = ctx.r10.s64 + -13640;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x821cf70c
	goto loc_821CF70C;
loc_821CF708:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821CF70C:
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CF724;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf740
	if (ctx.cr0.eq) goto loc_821CF740;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821CF740;
	sub_82120AC0(ctx, base);
loc_821CF740:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CF748;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cf7b0
	if (ctx.cr0.eq) goto loc_821CF7B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-13752
	ctx.r4.s64 = ctx.r11.s64 + -13752;
	// bl 0x82120600
	ctx.lr = 0x821CF760;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// lwz r4,-15384(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15384);
	// bl 0x82120600
	ctx.lr = 0x821CF774;
	sub_82120600(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d58c8
	ctx.lr = 0x821CF788;
	sub_821D58C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x821CF798;
	sub_82120AC0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r24,104(r29)
	REX_STORE_U32(r29.u32 + 104, r24.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r10,-13576
	ctx.r10.s64 = ctx.r10.s64 + -13576;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x821cf7b4
	goto loc_821CF7B4;
loc_821CF7B0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821CF7B4:
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CF7C8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf7e4
	if (ctx.cr0.eq) goto loc_821CF7E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821CF7E4;
	sub_82120AC0(ctx, base);
loc_821CF7E4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821CF7EC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cf81c
	if (ctx.cr0.eq) goto loc_821CF81C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-13732
	ctx.r4.s64 = ctx.r11.s64 + -13732;
	// bl 0x82120600
	ctx.lr = 0x821CF804;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821CF818;
	sub_82196BA8(ctx, base);
	// b 0x821cf820
	goto loc_821CF820;
loc_821CF81C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CF820:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CF830;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf84c
	if (ctx.cr0.eq) goto loc_821CF84C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821CF84C;
	sub_82120AC0(ctx, base);
loc_821CF84C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821CF854;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cf884
	if (ctx.cr0.eq) goto loc_821CF884;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-13720
	ctx.r4.s64 = ctx.r11.s64 + -13720;
	// bl 0x82120600
	ctx.lr = 0x821CF86C;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x821CF880;
	sub_82196BA8(ctx, base);
	// b 0x821cf888
	goto loc_821CF888;
loc_821CF884:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CF888:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CF898;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf8b4
	if (ctx.cr0.eq) goto loc_821CF8B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821CF8B4;
	sub_82120AC0(ctx, base);
loc_821CF8B4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821CF8BC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cf8ec
	if (ctx.cr0.eq) goto loc_821CF8EC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-13708
	ctx.r4.s64 = ctx.r11.s64 + -13708;
	// bl 0x82120600
	ctx.lr = 0x821CF8D4;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x821CF8E8;
	sub_82196BA8(ctx, base);
	// b 0x821cf8f0
	goto loc_821CF8F0;
loc_821CF8EC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CF8F0:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CF900;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf91c
	if (ctx.cr0.eq) goto loc_821CF91C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821CF91C;
	sub_82120AC0(ctx, base);
loc_821CF91C:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821CF924;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cf954
	if (ctx.cr0.eq) goto loc_821CF954;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-13696
	ctx.r4.s64 = ctx.r11.s64 + -13696;
	// bl 0x82120600
	ctx.lr = 0x821CF93C;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82191600
	ctx.lr = 0x821CF950;
	sub_82191600(ctx, base);
	// b 0x821cf958
	goto loc_821CF958;
loc_821CF954:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CF958:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CF968;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf984
	if (ctx.cr0.eq) goto loc_821CF984;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821CF984;
	sub_82120AC0(ctx, base);
loc_821CF984:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821CF98C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cf9bc
	if (ctx.cr0.eq) goto loc_821CF9BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-24012
	ctx.r4.s64 = ctx.r11.s64 + -24012;
	// bl 0x82120600
	ctx.lr = 0x821CF9A4;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82191600
	ctx.lr = 0x821CF9B8;
	sub_82191600(ctx, base);
	// b 0x821cf9c0
	goto loc_821CF9C0;
loc_821CF9BC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CF9C0:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CF9D0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cf9ec
	if (ctx.cr0.eq) goto loc_821CF9EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821CF9EC;
	sub_82120AC0(ctx, base);
loc_821CF9EC:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821CF9F4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cfa24
	if (ctx.cr0.eq) goto loc_821CFA24;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-24000
	ctx.r4.s64 = ctx.r11.s64 + -24000;
	// bl 0x82120600
	ctx.lr = 0x821CFA0C;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x82191600
	ctx.lr = 0x821CFA20;
	sub_82191600(ctx, base);
	// b 0x821cfa28
	goto loc_821CFA28;
loc_821CFA24:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CFA28:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CFA38;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cfa50
	if (ctx.cr0.eq) goto loc_821CFA50;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82120ac0
	ctx.lr = 0x821CFA50;
	sub_82120AC0(ctx, base);
loc_821CFA50:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821CFA58;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cfa78
	if (ctx.cr0.eq) goto loc_821CFA78;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821CFA70;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cfa7c
	goto loc_821CFA7C;
loc_821CFA78:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_821CFA7C:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821CFA88;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CFA90;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821cfb10
	if (ctx.cr0.eq) goto loc_821CFB10;
	// stw r24,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, r24.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// addi r11,r11,-744
	ctx.r11.s64 = ctx.r11.s64 + -744;
	// addi r4,r10,-22996
	ctx.r4.s64 = ctx.r10.s64 + -22996;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CFAC4;
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
	ctx.lr = 0x821CFAD8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cfb00
	if (ctx.cr0.eq) goto loc_821CFB00;
	// ld r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
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
	// b 0x821cfb04
	goto loc_821CFB04;
loc_821CFB00:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821CFB04:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821cfb14
	goto loc_821CFB14;
loc_821CFB10:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821CFB14:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CFB2C;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821CFB34;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821cfb84
	if (ctx.cr0.eq) goto loc_821CFB84;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8216b9a8
	ctx.lr = 0x821CFB58;
	sub_8216B9A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,19784
	ctx.r4.s64 = ctx.r11.s64 + 19784;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CFB70;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x821cfb88
	goto loc_821CFB88;
loc_821CFB84:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821CFB88:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CFBA0;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_821F9A48) {
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
	ctx.lr = 0x821F9A50;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r27,r10,16592
	r27.s64 = ctx.r10.s64 + 16592;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lfs f0,172(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// bctrl 
	ctx.lr = 0x821F9ACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f9ad8
	if (ctx.cr0.eq) goto loc_821F9AD8;
	// li r26,1
	r26.s64 = 1;
loc_821F9AD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F9B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f9b14
	if (ctx.cr0.eq) goto loc_821F9B14;
	// li r26,1
	r26.s64 = 1;
loc_821F9B14:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F9B44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f9b50
	if (ctx.cr0.eq) goto loc_821F9B50;
	// li r26,1
	r26.s64 = 1;
loc_821F9B50:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f9c38
	if (ctx.cr0.eq) goto loc_821F9C38;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821f9b6c
	if (ctx.cr6.lt) goto loc_821F9B6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821F9B6C:
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821f9b7c
	if (!ctx.cr6.lt) goto loc_821F9B7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821F9B7C:
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r9,r27,256
	ctx.r9.s64 = r27.s64 + 256;
	// lfs f9,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r27,256
	ctx.r8.s64 = r27.s64 + 256;
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r27,256
	ctx.r7.s64 = r27.s64 + 256;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r27,256
	ctx.r10.s64 = r27.s64 + 256;
	// lfs f10,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
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
	// rlwinm r6,r11,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// lfsx f7,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f13,f7,f12,f13
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsubs f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
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
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
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
	// rlwinm r6,r9,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// rlwinm r5,r11,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 | ctx.r11.u64;
	// lfsx f12,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f12,f12,f10,f11
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// lfsx f11,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f9,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// stfs f13,0(r24)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r24.u32 + 0, temp.u32);
	// fsubs f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
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
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f8,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f8.f64 : ctx.f12.f64;
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
loc_821F9C38:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82210BD8) {
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
	// li r3,880
	ctx.r3.s64 = 880;
	// bl 0x822f6280
	ctx.lr = 0x82210BEC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82210bfc
	if (ctx.cr0.eq) goto loc_82210BFC;
	// bl 0x82210c10
	ctx.lr = 0x82210BF8;
	sub_82210C10(ctx, base);
	// b 0x82210c00
	goto loc_82210C00;
loc_82210BFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82210C00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212D10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14076
	ctx.r3.s64 = ctx.r11.s64 + -14076;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212E40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14060
	ctx.r3.s64 = ctx.r11.s64 + -14060;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82213540) {
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
	ctx.lr = 0x82213548;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,6192(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221356C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822136b0
	if (!ctx.cr0.gt) goto loc_822136B0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// addi r26,r10,-28404
	r26.s64 = ctx.r10.s64 + -28404;
	// addi r25,r11,-28436
	r25.s64 = ctx.r11.s64 + -28436;
loc_82213588:
	// lwz r3,6192(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6192);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822135A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822135B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6192(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822135D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82213690
	if (ctx.cr6.eq) goto loc_82213690;
	// lwz r3,6080(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6080);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822135F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82213690
	if (ctx.cr0.eq) goto loc_82213690;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82213664
	if (ctx.cr0.eq) goto loc_82213664;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82213b78
	ctx.lr = 0x8221360C;
	sub_82213B78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82213690
	if (!ctx.cr0.eq) goto loc_82213690;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213628;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82213644
	if (ctx.cr0.eq) goto loc_82213644;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82213a88
	ctx.lr = 0x8221363C;
	sub_82213A88(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x8221368c
	goto loc_8221368C;
loc_82213644:
	// lwz r3,6192(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6192);
	// li r4,4
	ctx.r4.s64 = 4;
	// lbz r5,120(r24)
	ctx.r5.u64 = REX_LOAD_U8(r24.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82213660;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82213690
	goto loc_82213690;
loc_82213664:
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82213690
	if (ctx.cr0.eq) goto loc_82213690;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82213b78
	ctx.lr = 0x82213674;
	sub_82213B78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82213690
	if (ctx.cr0.eq) goto loc_82213690;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82213a88
	ctx.lr = 0x82213688;
	sub_82213A88(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8221368C:
	// bl 0x8226afb8
	ctx.lr = 0x82213690;
	sub_8226AFB8(ctx, base);
loc_82213690:
	// lwz r3,6192(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6192);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822136A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82213588
	if (ctx.cr6.lt) goto loc_82213588;
loc_822136B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82224478) {
	REX_FUNC_PROLOGUE();
	// lwz r3,672(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// b 0x82191520
	sub_82191520(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82224FF8) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-24572
	ctx.r4.s64 = ctx.r11.s64 + -24572;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8215f670
	ctx.lr = 0x82225028;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x82225030;
	sub_8215F5F8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82225044
	if (ctx.cr6.lt) goto loc_82225044;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82225048
	goto loc_82225048;
loc_82225044:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82225048:
	// bl 0x8215fbf8
	ctx.lr = 0x8222504C;
	sub_8215FBF8(ctx, base);
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

DEFINE_REX_FUNC(sub_82227DF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13948
	ctx.r3.s64 = ctx.r11.s64 + -13948;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82228078) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13940
	ctx.r3.s64 = ctx.r11.s64 + -13940;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82228398) {
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
	ctx.lr = 0x822283A0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822283CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8222849c
	if (!ctx.cr0.gt) goto loc_8222849C;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r9,1624
	r28.s64 = ctx.r9.s64 + 1624;
	// addi r27,r10,16592
	r27.s64 = ctx.r10.s64 + 16592;
	// addi r26,r11,16584
	r26.s64 = ctx.r11.s64 + 16584;
loc_822283EC:
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228404;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82228414;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222841C;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82228424;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82228438
	if (!ctx.cr6.eq) goto loc_82228438;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8222843c
	goto loc_8222843C;
loc_82228438:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222843C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82228468
	if (ctx.cr0.eq) goto loc_82228468;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222845C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82228468
	if (ctx.cr0.eq) goto loc_82228468;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
loc_82228468:
	// lwz r3,6192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6192);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82228480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822283ec
	if (ctx.cr6.lt) goto loc_822283EC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8222849c
	if (ctx.cr6.eq) goto loc_8222849C;
	// cmpw cr6,r24,r25
	ctx.cr6.compare<int32_t>(r24.s32, r25.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822284a0
	if (ctx.cr6.eq) goto loc_822284A0;
loc_8222849C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822284A0:
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,4(r23)
	REX_STORE_U8(r23.u32 + 4, ctx.r11.u8);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8222C970) {
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
	ctx.lr = 0x8222C978;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222cb14
	if (ctx.cr0.eq) goto loc_8222CB14;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222C9A8:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8222c9a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C9A8;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x8222C9C4;
	sub_821884B0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x823fbf60
	ctx.lr = 0x8222C9D8;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222C9E8:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8222c9e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C9E8;
	// li r30,128
	r30.s64 = 128;
	// li r31,255
	r31.s64 = 255;
	// stb r30,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r30.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r31,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lfs f30,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f30.f64 = double(temp.f32);
	// lfs f1,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x821375f8
	ctx.lr = 0x8222CA3C;
	sub_821375F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,912(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c9318
	ctx.lr = 0x8222CA48;
	sub_821C9318(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823fbf60
	ctx.lr = 0x8222CA5C;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222CA6C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8222ca6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222CA6C;
	// stb r31,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stb r30,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r30.u8);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lfs f31,-16132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16132);
	f31.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82137ed8
	ctx.lr = 0x8222CAAC;
	sub_82137ED8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,908(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a4ca0
	ctx.lr = 0x8222CAB8;
	sub_821A4CA0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x823fbf60
	ctx.lr = 0x8222CACC;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222CADC:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8222cadc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222CADC;
	// stb r31,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stb r30,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r30.u8);
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lwz r3,6096(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82137ed8
	ctx.lr = 0x8222CB14;
	sub_82137ED8(ctx, base);
loc_8222CB14:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8223AE80) {
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
	ctx.lr = 0x8223AE88;
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
	// beq cr6,0x8223af34
	if (ctx.cr6.eq) goto loc_8223AF34;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8223af34
	if (ctx.cr6.eq) goto loc_8223AF34;
	// subfic r26,r3,4
	ctx.xer.ca = ctx.r3.u32 <= 4;
	r26.u64 = static_cast<uint64_t>(4) - ctx.r3.u64;
loc_8223AEB0:
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
	// bl 0x8223a708
	ctx.lr = 0x8223AEC8;
	sub_8223A708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223aef8
	if (ctx.cr0.eq) goto loc_8223AEF8;
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
	ctx.lr = 0x8223AEF0;
	sub_8269CC20(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x8223af28
	goto loc_8223AF28;
loc_8223AEF8:
	// lwz r5,-4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// b 0x8223af10
	goto loc_8223AF10;
loc_8223AF04:
	// stw r5,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r5.u32);
	// mr r27,r29
	r27.u64 = r29.u64;
	// lwzu r5,-4(r29)
	ea = -4 + r29.u32;
	ctx.r5.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
loc_8223AF10:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223a708
	ctx.lr = 0x8223AF1C;
	sub_8223A708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223af04
	if (!ctx.cr0.eq) goto loc_8223AF04;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_8223AF28:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// bne cr6,0x8223aeb0
	if (!ctx.cr6.eq) goto loc_8223AEB0;
loc_8223AF34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822416A0) {
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
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822416C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,3816
	ctx.r4.s64 = r31.s64 + 3816;
	// lwz r3,6276(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822416E4;
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

DEFINE_REX_FUNC(sub_82243F00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82243F08;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82243448
	ctx.lr = 0x82243F24;
	sub_82243448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243f3c
	if (ctx.cr0.eq) goto loc_82243F3C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82243F3C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82243448
	ctx.lr = 0x82243F48;
	sub_82243448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243f60
	if (ctx.cr0.eq) goto loc_82243F60;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82243F60:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82243448
	ctx.lr = 0x82243F6C;
	sub_82243448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243f84
	if (ctx.cr0.eq) goto loc_82243F84;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82243F84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82246AF8) {
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
	ctx.lr = 0x82246B28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6052(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6052);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82246B44;
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

DEFINE_REX_FUNC(sub_8224B070) {
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
	ctx.lr = 0x8224B078;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-12876
	ctx.r11.s64 = ctx.r11.s64 + -12876;
	// addi r10,r10,-12832
	ctx.r10.s64 = ctx.r10.s64 + -12832;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r8,-12812
	ctx.r11.s64 = ctx.r8.s64 + -12812;
	// addi r9,r9,-12820
	ctx.r9.s64 = ctx.r9.s64 + -12820;
	// addi r10,r7,-3616
	ctx.r10.s64 = ctx.r7.s64 + -3616;
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r9,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// bl 0x8224b620
	ctx.lr = 0x8224B0C0;
	sub_8224B620(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// lwz r3,204(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b0e4
	if (ctx.cr6.eq) goto loc_8224B0E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B0E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224B0E4:
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b104
	if (ctx.cr6.eq) goto loc_8224B104;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224B104:
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b114
	if (ctx.cr6.eq) goto loc_8224B114;
	// bl 0x8269ce98
	ctx.lr = 0x8224B114;
	sub_8269CE98(ctx, base);
loc_8224B114:
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b134
	if (ctx.cr6.eq) goto loc_8224B134;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224B134:
	// lwz r30,760(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 760);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8224b19c
	if (ctx.cr6.eq) goto loc_8224B19C;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b184
	if (ctx.cr6.eq) goto loc_8224B184;
	// bl 0x8228e5a8
	ctx.lr = 0x8224B154;
	sub_8228E5A8(ctx, base);
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8224b180
	if (ctx.cr6.eq) goto loc_8224B180;
	// addi r3,r29,180
	ctx.r3.s64 = r29.s64 + 180;
	// bl 0x822e6f28
	ctx.lr = 0x8224B168;
	sub_822E6F28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x8224B178;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224B180;
	sub_8269CE98(ctx, base);
loc_8224B180:
	// stw r27,4(r30)
	REX_STORE_U32(r30.u32 + 4, r27.u32);
loc_8224B184:
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// bl 0x822e6f28
	ctx.lr = 0x8224B18C;
	sub_822E6F28(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x822e6f28
	ctx.lr = 0x8224B194;
	sub_822E6F28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224B19C;
	sub_8269CE98(ctx, base);
loc_8224B19C:
	// lwz r30,928(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 928);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8224b1b8
	if (ctx.cr6.eq) goto loc_8224B1B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e78e8
	ctx.lr = 0x8224B1B0;
	sub_821E78E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224B1B8;
	sub_8269CE98(ctx, base);
loc_8224B1B8:
	// lwz r30,932(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 932);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8224b1d4
	if (ctx.cr6.eq) goto loc_8224B1D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e78e8
	ctx.lr = 0x8224B1CC;
	sub_821E78E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224B1D4;
	sub_8269CE98(ctx, base);
loc_8224B1D4:
	// lwz r30,936(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 936);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8224b1fc
	if (ctx.cr6.eq) goto loc_8224B1FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-14036
	ctx.r11.s64 = ctx.r11.s64 + -14036;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x821d5aa8
	ctx.lr = 0x8224B1F4;
	sub_821D5AA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224B1FC;
	sub_8269CE98(ctx, base);
loc_8224B1FC:
	// lwz r3,472(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 472);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b20c
	if (ctx.cr6.eq) goto loc_8224B20C;
	// bl 0x8224b3d8
	ctx.lr = 0x8224B20C;
	sub_8224B3D8(ctx, base);
loc_8224B20C:
	// lwz r3,476(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b21c
	if (ctx.cr6.eq) goto loc_8224B21C;
	// bl 0x8224b490
	ctx.lr = 0x8224B21C;
	sub_8224B490(ctx, base);
loc_8224B21C:
	// lwz r3,480(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b22c
	if (ctx.cr6.eq) goto loc_8224B22C;
	// bl 0x8224b558
	ctx.lr = 0x8224B22C;
	sub_8224B558(ctx, base);
loc_8224B22C:
	// lwz r30,484(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 484);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8224b288
	if (ctx.cr6.eq) goto loc_8224B288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822848b0
	ctx.lr = 0x8224B240;
	sub_822848B0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b250
	if (ctx.cr6.eq) goto loc_8224B250;
	// bl 0x821c5560
	ctx.lr = 0x8224B250;
	sub_821C5560(ctx, base);
loc_8224B250:
	// addi r3,r30,88
	ctx.r3.s64 = r30.s64 + 88;
	// bl 0x82285118
	ctx.lr = 0x8224B258;
	sub_82285118(ctx, base);
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// bl 0x82285118
	ctx.lr = 0x8224B260;
	sub_82285118(ctx, base);
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// bl 0x82285118
	ctx.lr = 0x8224B268;
	sub_82285118(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82285118
	ctx.lr = 0x8224B270;
	sub_82285118(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x82285118
	ctx.lr = 0x8224B278;
	sub_82285118(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82285118
	ctx.lr = 0x8224B280;
	sub_82285118(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224B288;
	sub_8269CE98(ctx, base);
loc_8224B288:
	// lwz r30,488(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 488);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8224b300
	if (ctx.cr6.eq) goto loc_8224B300;
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8224b2e4
	if (!ctx.cr6.gt) goto loc_8224B2E4;
	// addi r28,r30,156
	r28.s64 = r30.s64 + 156;
loc_8224B2A8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8224B2B4;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8224b2d4
	if (ctx.cr6.eq) goto loc_8224B2D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224B2D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224B2D4:
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8224b2a8
	if (ctx.cr6.lt) goto loc_8224B2A8;
loc_8224B2E4:
	// stw r27,160(r30)
	REX_STORE_U32(r30.u32 + 160, r27.u32);
	// lwz r3,156(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 156);
	// bl 0x8269d1b8
	ctx.lr = 0x8224B2F0;
	sub_8269D1B8(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x822ee9a0
	ctx.lr = 0x8224B2F8;
	sub_822EE9A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8224B300;
	sub_8269CE98(ctx, base);
loc_8224B300:
	// lbz r11,1000(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1000);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r31,1000
	ctx.r3.s64 = r31.s64 + 1000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x821ea168
	ctx.lr = 0x8224B31C;
	sub_821EA168(ctx, base);
	// addi r3,r31,980
	ctx.r3.s64 = r31.s64 + 980;
	// bl 0x8227eb00
	ctx.lr = 0x8224B324;
	sub_8227EB00(ctx, base);
	// addi r3,r31,964
	ctx.r3.s64 = r31.s64 + 964;
	// bl 0x8227eb00
	ctx.lr = 0x8224B32C;
	sub_8227EB00(ctx, base);
	// addi r3,r31,948
	ctx.r3.s64 = r31.s64 + 948;
	// bl 0x8227eb00
	ctx.lr = 0x8224B334;
	sub_8227EB00(ctx, base);
	// addi r3,r31,764
	ctx.r3.s64 = r31.s64 + 764;
	// bl 0x822e6f28
	ctx.lr = 0x8224B33C;
	sub_822E6F28(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-24540
	ctx.r11.s64 = ctx.r11.s64 + -24540;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r11.u32);
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x82120ac0
	ctx.lr = 0x8224B358;
	sub_82120AC0(ctx, base);
	// addi r30,r31,432
	r30.s64 = r31.s64 + 432;
	// li r29,4
	r29.s64 = 4;
loc_8224B360:
	// addi r30,r30,-28
	r30.s64 = r30.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8224B374;
	sub_82120AC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8224b360
	if (!ctx.cr0.lt) goto loc_8224B360;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,236
	ctx.r3.s64 = r31.s64 + 236;
	// bl 0x82120ac0
	ctx.lr = 0x8224B38C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x8224B39C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// bl 0x82120ac0
	ctx.lr = 0x8224B3AC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x8224B3BC;
	sub_82120AC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,17212
	ctx.r11.s64 = ctx.r11.s64 + 17212;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// bl 0x82178388
	ctx.lr = 0x8224B3D0;
	sub_82178388(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82262608) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82262610;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82262640
	if (ctx.cr6.eq) goto loc_82262640;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-9400
	ctx.r4.s64 = ctx.r11.s64 + -9400;
	// addi r3,r10,-7792
	ctx.r3.s64 = ctx.r10.s64 + -7792;
	// li r5,4537
	ctx.r5.s64 = 4537;
	// bl 0x821231d0
	ctx.lr = 0x82262640;
	sub_821231D0(ctx, base);
loc_82262640:
	// li r29,-1
	r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// bl 0x82120b20
	ctx.lr = 0x82262658;
	sub_82120B20(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x82120b20
	ctx.lr = 0x8226266C;
	sub_82120B20(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x82262674;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82262688
	if (ctx.cr0.eq) goto loc_82262688;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82208610
	ctx.lr = 0x82262684;
	sub_82208610(ctx, base);
	// b 0x8226268c
	goto loc_8226268C;
loc_82262688:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226268C:
	// stw r3,168(r30)
	REX_STORE_U32(r30.u32 + 168, ctx.r3.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x8226afb8
	ctx.lr = 0x8226269C;
	sub_8226AFB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82265398) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r12,4105
	ctx.r12.s64 = 4105;
	// stb r10,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// lwz r11,6060(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// clrldi r10,r10,15
	ctx.r10.u64 = ctx.r10.u64 & 0x1FFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// bl 0x821396b8
	ctx.lr = 0x822653F0;
	sub_821396B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82265490
	if (ctx.cr6.eq) goto loc_82265490;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// lfd f0,1248(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1248);
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,656(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 656);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r8,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fctiw f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r7,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r3,6096(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6096);
	// bl 0x82136798
	ctx.lr = 0x82265490;
	sub_82136798(ctx, base);
loc_82265490:
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

DEFINE_REX_FUNC(sub_8226EF38) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226F420) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8226f478
	if (ctx.cr0.eq) goto loc_8226F478;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,31476
	ctx.r3.s64 = ctx.r11.s64 + 31476;
	// bl 0x8216bc98
	ctx.lr = 0x8226F45C;
	sub_8216BC98(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-5100
	ctx.r4.s64 = ctx.r11.s64 + -5100;
	// addi r3,r10,-26396
	ctx.r3.s64 = ctx.r10.s64 + -26396;
	// bl 0x82208840
	ctx.lr = 0x8226F470;
	sub_82208840(ctx, base);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// b 0x8226f4bc
	goto loc_8226F4BC;
loc_8226F478:
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226f4bc
	if (ctx.cr0.eq) goto loc_8226F4BC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
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
	ctx.lr = 0x8226F4A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226F4BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8226F4BC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

DEFINE_REX_FUNC(sub_82273488) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822734c0
	if (!ctx.cr6.lt) goto loc_822734C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822734c4
	if (!ctx.cr6.gt) goto loc_822734C4;
loc_822734C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822734C4:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq 0x8227356c
	if (ctx.cr0.eq) goto loc_8227356C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r8,r11,r30
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// srawi r30,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	r30.s64 = ctx.r8.s32 >> 6;
	// bne cr6,0x82273550
	if (!ctx.cr6.eq) goto loc_82273550;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r8,1023
	ctx.r8.s64 = 67043328;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// ori r8,r8,65534
	ctx.r8.u64 = ctx.r8.u64 | 65534;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82273508
	if (!ctx.cr6.gt) goto loc_82273508;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x82273508;
	sub_822F6020(ctx, base);
loc_82273508:
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82273550
	if (!ctx.cr6.gt) goto loc_82273550;
	// lis r8,1023
	ctx.r8.s64 = 67043328;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8227353c
	if (ctx.cr6.lt) goto loc_8227353C;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8227353C:
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82273548
	if (!ctx.cr6.lt) goto loc_82273548;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82273548:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82273618
	ctx.lr = 0x82273550;
	sub_82273618(ctx, base);
loc_82273550:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822735f4
	if (ctx.cr6.eq) goto loc_822735F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822735f0
	goto loc_822735F0;
loc_8227356C:
	// bne cr6,0x822735e0
	if (!ctx.cr6.eq) goto loc_822735E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r8,1023
	ctx.r8.s64 = 67043328;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ori r8,r8,65534
	ctx.r8.u64 = ctx.r8.u64 | 65534;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82273598
	if (!ctx.cr6.gt) goto loc_82273598;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x82273598;
	sub_822F6020(ctx, base);
loc_82273598:
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822735e0
	if (!ctx.cr6.gt) goto loc_822735E0;
	// lis r8,1023
	ctx.r8.s64 = 67043328;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822735cc
	if (ctx.cr6.lt) goto loc_822735CC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822735CC:
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822735d8
	if (!ctx.cr6.lt) goto loc_822735D8;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_822735D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82273618
	ctx.lr = 0x822735E0;
	sub_82273618(ctx, base);
loc_822735E0:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822735f4
	if (ctx.cr6.eq) goto loc_822735F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_822735F0:
	// bl 0x82273848
	ctx.lr = 0x822735F4;
	sub_82273848(ctx, base);
loc_822735F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
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

DEFINE_REX_FUNC(sub_8227EB00) {
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
	ctx.lr = 0x8227EB08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-12880
	ctx.r11.s64 = ctx.r11.s64 + -12880;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ble cr6,0x8227eb64
	if (!ctx.cr6.gt) goto loc_8227EB64;
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// lis r27,-32106
	r27.s64 = -2104098816;
loc_8227EB34:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r29,6060(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 6060);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8227EB44;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8212eae0
	ctx.lr = 0x8227EB54;
	sub_8212EAE0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227eb34
	if (ctx.cr6.lt) goto loc_8227EB34;
loc_8227EB64:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x8227EB74;
	sub_8269D1B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822847E8) {
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
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82284894
	if (!ctx.cr0.eq) goto loc_82284894;
	// lbz r11,106(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 106);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82284824
	if (ctx.cr0.eq) goto loc_82284824;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// bl 0x822850b8
	ctx.lr = 0x82284824;
	sub_822850B8(ctx, base);
loc_82284824:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r11,705(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82284870
	if (!ctx.cr0.eq) goto loc_82284870;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x822850b8
	ctx.lr = 0x82284840;
	sub_822850B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x822850b8
	ctx.lr = 0x8228484C;
	sub_822850B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822850b8
	ctx.lr = 0x82284858;
	sub_822850B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x822850b8
	ctx.lr = 0x82284864;
	sub_822850B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822850b8
	ctx.lr = 0x82284870;
	sub_822850B8(ctx, base);
loc_82284870:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82284894
	if (ctx.cr6.eq) goto loc_82284894;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82284894;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82284894:
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

DEFINE_REX_FUNC(sub_82288030) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82288060
	if (ctx.cr6.eq) goto loc_82288060;
	// lha r11,714(r4)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 714));
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288060
	if (ctx.cr0.eq) goto loc_82288060;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,720(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 720);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82288060:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822899E0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82289a1c
	if (ctx.cr6.eq) goto loc_82289A1C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82289aa8
	if (!ctx.cr6.eq) goto loc_82289AA8;
loc_82289A1C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stb r31,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r31,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// li r12,4105
	ctx.r12.s64 = 4105;
	// stb r31,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// lwz r11,6060(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// li r3,3
	ctx.r3.s64 = 3;
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// clrldi r10,r10,15
	ctx.r10.u64 = ctx.r10.u64 & 0x1FFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// bl 0x821396b8
	ctx.lr = 0x82289A5C;
	sub_821396B8(ctx, base);
	// lbz r11,109(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 109);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82289aa8
	if (ctx.cr0.eq) goto loc_82289AA8;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r31,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8216b6a8
	ctx.lr = 0x82289A84;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// bl 0x8216bc98
	ctx.lr = 0x82289A94;
	sub_8216BC98(ctx, base);
	// lwz r3,104(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289AA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82289AA8:
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82289b18
	if (ctx.cr6.eq) goto loc_82289B18;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82289b18
	if (ctx.cr6.eq) goto loc_82289B18;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289AD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r10,192
	ctx.r10.s64 = 192;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stb r31,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// stb r31,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stb r31,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,6096(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6096);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82136798
	ctx.lr = 0x82289B18;
	sub_82136798(ctx, base);
loc_82289B18:
	// lwz r3,96(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289B2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

DEFINE_REX_FUNC(sub_82290B08) {
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
	ctx.lr = 0x82290B10;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r29,0(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x82290B4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82290be8
	if (ctx.cr0.eq) goto loc_82290BE8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82290b84
	if (!ctx.cr6.eq) goto loc_82290B84;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_82290B84:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82290be8
	if (ctx.cr6.eq) goto loc_82290BE8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82299828
	ctx.lr = 0x82290BA0;
	sub_82299828(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82290bcc
	if (!ctx.cr6.eq) goto loc_82290BCC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82290be8
	goto loc_82290BE8;
loc_82290BCC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290BD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82290be8
	if (!ctx.cr6.gt) goto loc_82290BE8;
	// stfs f1,12(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
loc_82290BE8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8229A408) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8229a180
	ctx.lr = 0x8229A42C;
	sub_8229A180(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8229a464
	if (ctx.cr6.eq) goto loc_8229A464;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_8229A464:
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

DEFINE_REX_FUNC(sub_8229FEC0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a0124
	if (ctx.cr0.eq) goto loc_822A0124;
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// lfs f5,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f5
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// bge cr6,0x8229ff0c
	if (!ctx.cr6.lt) goto loc_8229FF0C;
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
loc_8229FF0C:
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x8229ff24
	if (!ctx.cr6.lt) goto loc_8229FF24;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_8229FF24:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8229ff3c
	if (!ctx.cr6.lt) goto loc_8229FF3C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8229FF3C:
	// lfs f4,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// bge cr6,0x8229ff50
	if (!ctx.cr6.lt) goto loc_8229FF50;
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
loc_8229FF50:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x8229ff64
	if (!ctx.cr6.lt) goto loc_8229FF64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
loc_8229FF64:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8229ff78
	if (!ctx.cr6.lt) goto loc_8229FF78;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8229FF78:
	// fsubs f7,f12,f5
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// ld r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// lfs f9,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r7,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// fmuls f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// std r6,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r6.u64);
	// fmuls f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f7
	ctx.f7.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lhz r7,94(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// fctidz f7,f6
	ctx.f7.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lhz r6,86(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r5,94(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// sth r7,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r7.u16);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r5,r5,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r6,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, ctx.r6.u16);
	// sth r5,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r5.u16);
	// bge cr6,0x822a0004
	if (!ctx.cr6.lt) goto loc_822A0004;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
loc_822A0004:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bge cr6,0x822a0018
	if (!ctx.cr6.lt) goto loc_822A0018;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
loc_822A0018:
	// lfs f7,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x822a002c
	if (!ctx.cr6.lt) goto loc_822A002C;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
loc_822A002C:
	// fcmpu cr6,f4,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bge cr6,0x822a0038
	if (!ctx.cr6.lt) goto loc_822A0038;
	// fmr f13,f4
	ctx.f13.f64 = ctx.f4.f64;
loc_822A0038:
	// lfs f7,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x822a0048
	if (!ctx.cr6.lt) goto loc_822A0048;
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
loc_822A0048:
	// lfs f7,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x822a0058
	if (!ctx.cr6.lt) goto loc_822A0058;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
loc_822A0058:
	// fsubs f13,f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// fctidz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lhz r8,102(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// sth r9,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// ori r9,r8,1
	ctx.r9.u64 = ctx.r8.u64 | 1;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// blt cr6,0x822a0108
	if (ctx.cr6.lt) goto loc_822A0108;
	// beq cr6,0x822a00f4
	if (ctx.cr6.eq) goto loc_822A00F4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x822a012c
	if (!ctx.cr6.lt) goto loc_822A012C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,148(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822a0280
	ctx.lr = 0x822A00F0;
	sub_822A0280(ctx, base);
	// b 0x822a012c
	goto loc_822A012C;
loc_822A00F4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822a11a0
	ctx.lr = 0x822A0104;
	sub_822A11A0(ctx, base);
	// b 0x822a012c
	goto loc_822A012C;
loc_822A0108:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,68(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822a1048
	ctx.lr = 0x822A0120;
	sub_822A1048(ctx, base);
	// b 0x822a012c
	goto loc_822A012C;
loc_822A0124:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822a0140
	ctx.lr = 0x822A012C;
	sub_822A0140(ctx, base);
loc_822A012C:
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

DEFINE_REX_FUNC(sub_822B9E00) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x822B9E08;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2ca4
	ctx.lr = 0x822B9E10;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,784(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 784);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r28,788(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 788);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r11,240(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 240);
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lwz r10,240(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 240);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & r28.u64;
	// beq cr6,0x822b9e6c
	if (ctx.cr6.eq) goto loc_822B9E6C;
	// lfs f0,352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x822b9e80
	if (!ctx.cr6.eq) goto loc_822B9E80;
loc_822B9E6C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ba3c4
	if (ctx.cr6.eq) goto loc_822BA3C4;
	// lfs f0,352(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x822ba3c4
	if (ctx.cr6.eq) goto loc_822BA3C4;
loc_822B9E80:
	// lwz r11,792(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 792);
	// li r17,0
	r17.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ba3c4
	if (!ctx.cr6.gt) goto loc_822BA3C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r20,16
	r30.s64 = r20.s64 + 16;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r21,1
	r21.s64 = 1;
	// lis r18,-32126
	r18.s64 = -2105409536;
	// lis r19,-32106
	r19.s64 = -2104098816;
	// lfs f28,948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 948);
	f28.f64 = double(temp.f32);
	// lfs f27,920(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 920);
	f27.f64 = double(temp.f32);
	// lfs f29,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f29.f64 = double(temp.f32);
loc_822B9EB4:
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,800(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 800);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822ba3b0
	if (ctx.cr6.gt) goto loc_822BA3B0;
	// lwz r26,8(r24)
	r26.u64 = REX_LOAD_U32(r24.u32 + 8);
	// addi r31,r24,4
	r31.s64 = r24.s64 + 4;
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// mr r23,r26
	r23.u64 = r26.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822b9fac
	if (!ctx.cr6.eq) goto loc_822B9FAC;
	// cmpwi r26,0
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// rlwinm r25,r26,1,0,30
	r25.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822b9eec
	if (!ctx.cr0.eq) goto loc_822B9EEC;
	// mr r25,r21
	r25.u64 = r21.u64;
loc_822B9EEC:
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// bge cr6,0x822b9fac
	if (!ctx.cr6.lt) goto loc_822B9FAC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x822b9f0c
	if (ctx.cr6.eq) goto loc_822B9F0C;
	// mulli r3,r25,192
	ctx.r3.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(192));
	// bl 0x822c1a70
	ctx.lr = 0x822B9F04;
	sub_822C1A70(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x822b9f10
	goto loc_822B9F10;
loc_822B9F0C:
	// li r27,0
	r27.s64 = 0;
loc_822B9F10:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x822b9f64
	if (!ctx.cr6.gt) goto loc_822B9F64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_822B9F28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9f54
	if (ctx.cr6.eq) goto loc_822B9F54;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822B9F48:
	// ldu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r9,8(r7)
	ea = 8 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x822b9f48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B9F48;
loc_822B9F54:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bne 0x822b9f28
	if (!ctx.cr0.eq) goto loc_822B9F28;
loc_822B9F64:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b9fa0
	if (ctx.cr6.eq) goto loc_822B9FA0;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b9f98
	if (ctx.cr0.eq) goto loc_822B9F98;
	// lwz r11,112(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 112);
	// lwz r9,-19400(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r19)
	REX_STORE_U32(r19.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822B9F98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822B9F98:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822B9FA0:
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// stw r25,8(r31)
	REX_STORE_U32(r31.u32 + 8, r25.u32);
	// stb r21,16(r31)
	REX_STORE_U8(r31.u32 + 16, r21.u8);
loc_822B9FAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mulli r9,r26,192
	ctx.r9.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(192));
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r27,r9,r10
	r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r10,240(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 240);
	// lwz r11,240(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 240);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r26,r11,r29
	r26.u64 = ctx.r11.u64 & r29.u64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// and r25,r11,r28
	r25.u64 = ctx.r11.u64 & r28.u64;
	// beq cr6,0x822b9ffc
	if (ctx.cr6.eq) goto loc_822B9FFC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x822ba000
	goto loc_822BA000;
loc_822B9FFC:
	// bl 0x822b7ff0
	ctx.lr = 0x822BA000;
	sub_822B7FF0(ctx, base);
loc_822BA000:
	// stw r3,104(r27)
	REX_STORE_U32(r27.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822ba014
	if (ctx.cr6.eq) goto loc_822BA014;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x822ba018
	goto loc_822BA018;
loc_822BA014:
	// bl 0x822b7ff0
	ctx.lr = 0x822BA018;
	sub_822B7FF0(ctx, base);
loc_822BA018:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r3,108(r27)
	REX_STORE_U32(r27.u32 + 108, ctx.r3.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r30,112(r27)
	REX_STORE_U32(r27.u32 + 112, r30.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822b9090
	ctx.lr = 0x822BA054;
	sub_822B9090(ctx, base);
	// lwz r11,48(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 48);
	// stw r11,100(r27)
	REX_STORE_U32(r27.u32 + 100, ctx.r11.u32);
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ba0e4
	if (ctx.cr0.eq) goto loc_822BA0E4;
	// lbz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ba0e4
	if (ctx.cr0.eq) goto loc_822BA0E4;
	// lfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
	// addi r4,r30,160
	ctx.r4.s64 = r30.s64 + 160;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lfs f3,136(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lfs f2,128(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b8f00
	ctx.lr = 0x822BA0A4;
	sub_822B8F00(ctx, base);
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ba394
	if (ctx.cr0.eq) goto loc_822BA394;
	// addi r4,r30,176
	ctx.r4.s64 = r30.s64 + 176;
	// lfs f3,140(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lfs f2,132(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b8f00
	ctx.lr = 0x822BA0E0;
	sub_822B8F00(ctx, base);
	// b 0x822ba394
	goto loc_822BA394;
loc_822BA0E4:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f13,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,64
	ctx.r11.s64 = r30.s64 + 64;
	// lfs f12,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,72(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r30,160
	r31.s64 = r30.s64 + 160;
	// lfs f9,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,160(r30)
	REX_STORE_U64(r30.u32 + 160, ctx.r10.u64);
	// std r9,168(r30)
	REX_STORE_U64(r30.u32 + 168, ctx.r9.u64);
	// lfs f0,160(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,60(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 60);
	// lfs f13,168(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// bne 0x822ba23c
	if (!ctx.cr0.eq) goto loc_822BA23C;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// ble cr6,0x822ba23c
	if (!ctx.cr6.gt) goto loc_822BA23C;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
	// fdivs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 / ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lwz r10,60(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 60);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ba350
	if (ctx.cr0.eq) goto loc_822BA350;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r30,176
	ctx.r4.s64 = r30.s64 + 176;
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmsubs f12,f8,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, -ctx.f11.f64)));
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmsubs f13,f13,f7,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f9.f64)));
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmsubs f0,f0,f10,f6
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f6.f64)));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,176(r30)
	REX_STORE_U64(r30.u32 + 176, ctx.r11.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,184(r30)
	REX_STORE_U64(r30.u32 + 184, ctx.r10.u64);
	// lfs f0,184(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,176(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// lfs f13,180(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f29,f11
	ctx.f11.f64 = double(float(f29.f64 / ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,176(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 176, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,180(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 180, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,184(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 184, temp.u32);
	// b 0x822ba314
	goto loc_822BA314;
loc_822BA23C:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,176
	ctx.r4.s64 = r30.s64 + 176;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
	// ble cr6,0x822ba2a8
	if (!ctx.cr6.gt) goto loc_822BA2A8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f12,f29,f12
	ctx.f12.f64 = double(float(f29.f64 / ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// b 0x822ba2fc
	goto loc_822BA2FC;
loc_822BA2A8:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f11,f0
	ctx.f11.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f11,f29,f11
	ctx.f11.f64 = double(float(f29.f64 / ctx.f11.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_822BA2FC:
	// stfs f31,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
	// lfs f30,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f30.f64 = double(temp.f32);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ba350
	if (ctx.cr0.eq) goto loc_822BA350;
loc_822BA314:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b8910
	ctx.lr = 0x822BA31C;
	sub_822B8910(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b8910
	ctx.lr = 0x822BA324;
	sub_822B8910(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b8f00
	ctx.lr = 0x822BA350;
	sub_822B8F00(ctx, base);
loc_822BA350:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b8910
	ctx.lr = 0x822BA35C;
	sub_822B8910(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b8910
	ctx.lr = 0x822BA364;
	sub_822B8910(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b8f00
	ctx.lr = 0x822BA390;
	sub_822B8F00(ctx, base);
	// stb r21,116(r30)
	REX_STORE_U8(r30.u32 + 116, r21.u8);
loc_822BA394:
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b9a08
	ctx.lr = 0x822BA3B0;
	sub_822B9A08(ctx, base);
loc_822BA3B0:
	// lwz r11,792(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 792);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r30,r30,192
	r30.s64 = r30.s64 + 192;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b9eb4
	if (ctx.cr6.lt) goto loc_822B9EB4;
loc_822BA3C4:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2cf0
	ctx.lr = 0x822BA3D0;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_822E3A40) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-318(r10)
	REX_STORE_U8(ctx.r10.u32 + -318, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E3B30) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-319(r10)
	REX_STORE_U8(ctx.r10.u32 + -319, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E4688) {
	REX_FUNC_PROLOGUE();
	// lwz r8,596(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 596);
	// lhz r10,14(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r11,380(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 380);
	// rlwinm r9,r8,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3F;
	// addi r10,r10,172
	ctx.r10.s64 = ctx.r10.s64 + 172;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r8,r8,12,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3F;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,380(r3)
	REX_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x822e46c4
	if (!ctx.cr6.eq) goto loc_822E46C4;
	// lwz r9,384(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// b 0x822e46c8
	goto loc_822E46C8;
loc_822E46C4:
	// lis r9,-16
	ctx.r9.s64 = -1048576;
loc_822E46C8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e46e0
	if (ctx.cr6.lt) goto loc_822E46E0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822E46E0:
	// addi r10,r8,46
	ctx.r10.s64 = ctx.r8.s64 + 46;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r10,596(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 596);
	// rlwinm r11,r10,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F;
	// rlwinm r9,r10,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r8,r11,r9
	ctx.r8.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwimi r10,r11,20,6,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F00000) | (ctx.r10.u64 & 0xFFFFFFFFFC0FFFFF);
	// rlwinm. r11,r10,0,6,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,596(r3)
	REX_STORE_U32(ctx.r3.u32 + 596, ctx.r10.u32);
	// bne 0x822e4734
	if (!ctx.cr0.eq) goto loc_822E4734;
	// lbz r11,608(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 608);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r10,380(r3)
	REX_STORE_U32(ctx.r3.u32 + 380, ctx.r10.u32);
	// stb r11,608(r3)
	REX_STORE_U8(ctx.r3.u32 + 608, ctx.r11.u8);
	// blr 
	return;
loc_822E4734:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,380(r3)
	REX_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8460) {
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
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822e6f28
	ctx.lr = 0x822E8484;
	sub_822E6F28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x822E848C;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e849c
	if (ctx.cr0.eq) goto loc_822E849C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822E849C;
	sub_8269CE98(ctx, base);
loc_822E849C:
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

DEFINE_REX_FUNC(sub_822EB698) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r10,212(r4)
	REX_STORE_U8(ctx.r4.u32 + 212, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EBCA8) {
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
	// bl 0x8216b740
	ctx.lr = 0x822EBCD0;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x82125d00
	ctx.lr = 0x822EBCDC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ebd44
	if (!ctx.cr0.eq) goto loc_822EBD44;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// bl 0x826a1e70
	ctx.lr = 0x822EBCF8;
	sub_826A1E70(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// bl 0x82120600
	ctx.lr = 0x822EBD08;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x822EBD14;
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
	ctx.lr = 0x822EBD34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822EBD44;
	sub_82120AC0(ctx, base);
loc_822EBD44:
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

DEFINE_REX_FUNC(sub_822EF6B8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,15404
	ctx.r10.s64 = ctx.r10.s64 + 15404;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f13,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// std r11,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r11.u64);
	// bl 0x82160340
	ctx.lr = 0x822EF728;
	sub_82160340(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6072(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EF740;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-24868
	ctx.r5.s64 = ctx.r11.s64 + -24868;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121610
	ctx.lr = 0x822EF754;
	sub_82121610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82160388
	ctx.lr = 0x822EF764;
	sub_82160388(ctx, base);
	// stb r3,116(r31)
	REX_STORE_U8(r31.u32 + 116, ctx.r3.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x822EF778;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82120ac0
	ctx.lr = 0x822EF788;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_822F6058) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f5f38
	ctx.lr = 0x822F6070;
	sub_822F5F38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,2544
	ctx.r11.s64 = ctx.r11.s64 + 2544;
	// addi r4,r10,21624
	ctx.r4.s64 = ctx.r10.s64 + 21624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a1d30
	ctx.lr = 0x822F608C;
	sub_826A1D30(ctx, base);
}

DEFINE_REX_FUNC(sub_822F6538) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x822F6554;
	sub_822F6280(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x822f7008
	ctx.lr = 0x822F655C;
	sub_822F7008(ctx, base);
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

DEFINE_REX_FUNC(sub_822F6E10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822F6E18;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// lwz r30,-10936(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + -10936);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822f6eb0
	if (!ctx.cr6.eq) goto loc_822F6EB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822f66b0
	ctx.lr = 0x822F6E3C;
	sub_822F66B0(ctx, base);
	// lwz r30,-10936(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + -10936);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822f6ea8
	if (!ctx.cr6.eq) goto loc_822F6EA8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822f6280
	ctx.lr = 0x822F6E50;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822f6e68
	if (ctx.cr0.eq) goto loc_822F6E68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822f6c80
	ctx.lr = 0x822F6E60;
	sub_822F6C80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822f6e6c
	goto loc_822F6E6C;
loc_822F6E68:
	// li r30,0
	r30.s64 = 0;
loc_822F6E6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f6950
	ctx.lr = 0x822F6E74;
	sub_822F6950(ctx, base);
	// li r11,63
	ctx.r11.s64 = 63;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// addi r4,r10,-19348
	ctx.r4.s64 = ctx.r10.s64 + -19348;
	// bl 0x822f6b68
	ctx.lr = 0x822F6E8C;
	sub_822F6B68(ctx, base);
	// lis r29,-32126
	r29.s64 = -2105409536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,-10932(r29)
	REX_STORE_U32(r29.u32 + -10932, r30.u32);
	// bl 0x8215cbf0
	ctx.lr = 0x822F6E9C;
	sub_8215CBF0(ctx, base);
	// lwz r11,-10932(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -10932);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r11,-10908(r10)
	REX_STORE_U32(ctx.r10.u32 + -10908, ctx.r11.u32);
loc_822F6EA8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822f6700
	ctx.lr = 0x822F6EB0;
	sub_822F6700(ctx, base);
loc_822F6EB0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822FB3A0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822fb3b0
	if (!ctx.cr6.eq) goto loc_822FB3B0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FB3B0:
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FBB20) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822fbb30
	if (!ctx.cr6.eq) goto loc_822FBB30;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FBB30:
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FBFC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822FBFC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bl 0x822fbbf8
	ctx.lr = 0x822FBFE0;
	sub_822FBBF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fc008
	if (!ctx.cr0.eq) goto loc_822FC008;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FC008;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FC008:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822FDD10) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822faee0
	sub_822FAEE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FE2B0) {
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
	ctx.lr = 0x822FE2B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe2dc
	if (ctx.cr6.eq) goto loc_822FE2DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fe2e0
	goto loc_822FE2E0;
loc_822FE2DC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FE2E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fe300
	if (ctx.cr6.eq) goto loc_822FE300;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe2f8
	if (ctx.cr6.eq) goto loc_822FE2F8;
	// lwz r26,0(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fe304
	goto loc_822FE304;
loc_822FE2F8:
	// li r26,0
	r26.s64 = 0;
	// b 0x822fe304
	goto loc_822FE304;
loc_822FE300:
	// mr r26,r28
	r26.u64 = r28.u64;
loc_822FE304:
	// li r31,-1
	r31.s64 = -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822fe35c
	if (ctx.cr6.eq) goto loc_822FE35C;
	// lhz r11,100(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 100);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fe324
	if (ctx.cr0.eq) goto loc_822FE324;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// b 0x822fe35c
	goto loc_822FE35C;
loc_822FE324:
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// addi r8,r26,8
	ctx.r8.s64 = r26.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,52
	ctx.r10.s64 = ctx.r11.s64 + 52;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x822fe34c
	goto loc_822FE34C;
loc_822FE33C:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822fe358
	if (ctx.cr6.eq) goto loc_822FE358;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822FE34C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822fe33c
	if (!ctx.cr6.eq) goto loc_822FE33C;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_822FE358:
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_822FE35C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fe370
	if (ctx.cr6.eq) goto loc_822FE370;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822f7130
	ctx.lr = 0x822FE36C;
	sub_822F7130(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_822FE370:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822fe6a0
	if (ctx.cr6.eq) goto loc_822FE6A0;
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r4,r27,8
	ctx.r4.s64 = r27.s64 + 8;
	// lwz r3,312(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FE394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fe6a4
	if (!ctx.cr0.eq) goto loc_822FE6A4;
	// lwz r3,312(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 312);
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FE3B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fe6a4
	if (!ctx.cr0.eq) goto loc_822FE6A4;
	// addi r4,r27,16
	ctx.r4.s64 = r27.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f9d70
	ctx.lr = 0x822FE3C8;
	sub_822F9D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fe6a4
	if (!ctx.cr0.eq) goto loc_822FE6A4;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// bgt cr6,0x822fe6ac
	if (ctx.cr6.gt) goto loc_822FE6AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fe3f8
	if (ctx.cr6.eq) goto loc_822FE3F8;
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fe6ac
	if (ctx.cr6.eq) goto loc_822FE6AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822fe40c
	if (!ctx.cr6.eq) goto loc_822FE40C;
loc_822FE3F8:
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822fe6ac
	if (!ctx.cr6.eq) goto loc_822FE6AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fe470
	if (ctx.cr6.eq) goto loc_822FE470;
loc_822FE40C:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe470
	if (ctx.cr6.eq) goto loc_822FE470;
	// lwz r11,168(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 168);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822fe470
	if (!ctx.cr6.gt) goto loc_822FE470;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_822FE434:
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822fe470
	if (!ctx.cr6.lt) goto loc_822FE470;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// lwzx r3,r10,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// bl 0x8230c608
	ctx.lr = 0x822FE454;
	sub_8230C608(ctx, base);
	// lwz r11,168(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 168);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,288
	r30.s64 = r30.s64 + 288;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822fe434
	if (ctx.cr6.lt) goto loc_822FE434;
loc_822FE470:
	// lwz r11,168(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 168);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r11.u32);
	// lwz r3,312(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FE494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fe6a4
	if (!ctx.cr0.eq) goto loc_822FE6A4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f70d8
	ctx.lr = 0x822FE4A4;
	sub_822F70D8(ctx, base);
	// stw r3,32(r27)
	REX_STORE_U32(r27.u32 + 32, ctx.r3.u32);
	// lwz r11,172(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe4bc
	if (ctx.cr6.eq) goto loc_822FE4BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fe4c0
	goto loc_822FE4C0;
loc_822FE4BC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FE4C0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fe4e4
	if (ctx.cr6.eq) goto loc_822FE4E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe4d8
	if (ctx.cr6.eq) goto loc_822FE4D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fe4dc
	goto loc_822FE4DC;
loc_822FE4D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FE4DC:
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x822fe4e8
	goto loc_822FE4E8;
loc_822FE4E4:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
loc_822FE4E8:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r11.u32);
	// lwz r11,172(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe504
	if (ctx.cr6.eq) goto loc_822FE504;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fe508
	goto loc_822FE508;
loc_822FE504:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FE508:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r27,36
	ctx.r4.s64 = r27.s64 + 36;
	// beq cr6,0x822fe58c
	if (ctx.cr6.eq) goto loc_822FE58C;
	// lwz r3,312(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FE528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FE528:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fe6a4
	if (!ctx.cr0.eq) goto loc_822FE6A4;
	// lhz r11,100(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fe5e4
	if (ctx.cr0.eq) goto loc_822FE5E4;
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fe660
	if (ctx.cr6.eq) goto loc_822FE660;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822fe660
	if (!ctx.cr6.gt) goto loc_822FE660;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822FE56C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822fe5d8
	if (ctx.cr6.eq) goto loc_822FE5D8;
	// lwz r11,172(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe598
	if (ctx.cr6.eq) goto loc_822FE598;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fe59c
	goto loc_822FE59C;
loc_822FE58C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822fd3a8
	ctx.lr = 0x822FE594;
	sub_822FD3A8(ctx, base);
	// b 0x822fe528
	goto loc_822FE528;
loc_822FE598:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FE59C:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x822fe5d8
	if (!ctx.cr6.eq) goto loc_822FE5D8;
	// lhz r11,100(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fe5d8
	if (ctx.cr0.eq) goto loc_822FE5D8;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe5d0
	if (ctx.cr6.eq) goto loc_822FE5D0;
	// lwz r7,40(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822fe5d0
	if (!ctx.cr6.lt) goto loc_822FE5D0;
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stwx r9,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
loc_822FE5D0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_822FE5D8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822fe56c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822FE56C;
	// b 0x822fe660
	goto loc_822FE660;
loc_822FE5E4:
	// lwz r11,168(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 168);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822fe660
	if (ctx.cr6.eq) goto loc_822FE660;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822fe660
	if (!ctx.cr6.gt) goto loc_822FE660;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FE60C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe648
	if (ctx.cr6.eq) goto loc_822FE648;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe640
	if (ctx.cr6.eq) goto loc_822FE640;
	// lwz r5,40(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x822fe640
	if (!ctx.cr6.lt) goto loc_822FE640;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stwx r9,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
loc_822FE640:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_822FE648:
	// lwz r11,168(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 168);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x822fe60c
	if (ctx.cr6.lt) goto loc_822FE60C;
loc_822FE660:
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// stw r6,40(r27)
	REX_STORE_U32(r27.u32 + 40, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe6a0
	if (ctx.cr6.eq) goto loc_822FE6A0;
	// lwz r10,168(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 168);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822fe6a0
	if (ctx.cr6.eq) goto loc_822FE6A0;
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
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_822FE6A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FE6A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_822FE6AC:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x822fe6a4
	goto loc_822FE6A4;
}

DEFINE_REX_FUNC(sub_82319420) {
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
	ctx.lr = 0x82319428;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// bl 0x82317938
	ctx.lr = 0x8231944C;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// lis r11,25709
	ctx.r11.s64 = 1684865024;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// ori r11,r11,26740
	ctx.r11.u64 = ctx.r11.u64 | 26740;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82319470
	if (ctx.cr6.eq) goto loc_82319470;
loc_82319468:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82319760
	goto loc_82319760;
loc_82319470:
	// li r11,2000
	ctx.r11.s64 = 2000;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x82319490;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x823194B0;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x823194D0;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x823194F0;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x82319510;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// lis r11,53
	ctx.r11.s64 = 3473408;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82319544
	if (ctx.cr6.lt) goto loc_82319544;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x8231953C;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
loc_82319544:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x8231955C;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// lhz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,6576
	r31.s64 = ctx.r11.s64 + 6576;
	// li r6,1520
	ctx.r6.s64 = 1520;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82319590;
	sub_82330E40(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x823195a0
	if (!ctx.cr0.eq) goto loc_823195A0;
loc_82319598:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82319760
	goto loc_82319760;
loc_823195A0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r6,86(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x823195B8;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x823195D8;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lhz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1530
	ctx.r6.s64 = 1530;
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82319600;
	sub_82330E40(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82319598
	if (ctx.cr0.eq) goto loc_82319598;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82340718
	ctx.lr = 0x82319620;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lhz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1537
	ctx.r6.s64 = 1537;
	// mulli r4,r10,12
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82319648;
	sub_82330E40(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82319598
	if (ctx.cr0.eq) goto loc_82319598;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// li r30,0
	r30.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82319694
	if (ctx.cr0.eq) goto loc_82319694;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r8,r11,6196
	ctx.r8.s64 = ctx.r11.s64 + 6196;
loc_82319670:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82319680
	if (ctx.cr6.eq) goto loc_82319680;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r30.u32);
loc_82319680:
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82319670
	if (ctx.cr6.lt) goto loc_82319670;
loc_82319694:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823196fc
	if (ctx.cr6.eq) goto loc_823196FC;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_823196A0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82317938
	ctx.lr = 0x823196B0;
	sub_82317938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// lis r11,25710
	ctx.r11.s64 = 1684930560;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// ori r11,r11,28515
	ctx.r11.u64 = ctx.r11.u64 | 28515;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82319468
	if (!ctx.cr6.eq) goto loc_82319468;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823179d0
	ctx.lr = 0x823196E0;
	sub_823179D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319760
	if (!ctx.cr0.eq) goto loc_82319760;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823196a0
	if (ctx.cr6.lt) goto loc_823196A0;
loc_823196FC:
	// lhz r3,86(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r6,82(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// stw r9,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// stw r10,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// stw r7,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r7.u32);
	// stw r8,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r8.u32);
	// stw r6,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r6.u32);
	// stw r31,32(r29)
	REX_STORE_U32(r29.u32 + 32, r31.u32);
	// stw r26,36(r29)
	REX_STORE_U32(r29.u32 + 36, r26.u32);
	// stw r27,40(r29)
	REX_STORE_U32(r29.u32 + 40, r27.u32);
	// stw r11,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r11.u32);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
	// stw r25,52(r29)
	REX_STORE_U32(r29.u32 + 52, r25.u32);
	// lwz r3,24(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 24);
	// bl 0x82315050
	ctx.lr = 0x82319760;
	sub_82315050(ctx, base);
loc_82319760:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8232FC58) {
	REX_FUNC_PROLOGUE();
	// li r3,82
	ctx.r3.s64 = 82;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232FCA8) {
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
	// bl 0x8235ace0
	ctx.lr = 0x8232FCC4;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232fcdc
	if (!ctx.cr6.eq) goto loc_8232FCDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82348e28
	ctx.lr = 0x8232FCDC;
	sub_82348E28(ctx, base);
loc_8232FCDC:
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

DEFINE_REX_FUNC(sub_82331798) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x823317c8
	if (ctx.cr6.gt) goto loc_823317C8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823317B4:
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823317b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823317B4;
	// blr 
	return;
loc_823317C8:
	// add r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823317DC:
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823317dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823317DC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82336A68) {
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
	ctx.lr = 0x82336A70;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r30,r11,8872
	r30.s64 = ctx.r11.s64 + 8872;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,9974
	ctx.r6.s64 = 9974;
	// li r4,592
	ctx.r4.s64 = 592;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82336AA8;
	sub_82330A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336ac0
	if (ctx.cr6.eq) goto loc_82336AC0;
	// bl 0x8235c198
	ctx.lr = 0x82336AB4;
	sub_8235C198(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82336acc
	if (!ctx.cr6.eq) goto loc_82336ACC;
loc_82336AC0:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82336ACC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235c4c0
	ctx.lr = 0x82336AE0;
	sub_8235C4C0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82336b14
	if (ctx.cr6.eq) goto loc_82336B14;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9986
	ctx.r6.s64 = 9986;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82336B08;
	sub_82330D00(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82336B14:
	// addic. r11,r27,25572
	ctx.xer.ca = r27.u32 > 4294941723;
	ctx.r11.s64 = r27.s64 + 25572;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r27,25576
	ctx.r10.s64 = r27.s64 + 25576;
	// bne 0x82336b24
	if (!ctx.cr0.eq) goto loc_82336B24;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82336B24:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82336b4c
	if (ctx.cr6.eq) goto loc_82336B4C;
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
loc_82336B4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,22444
	ctx.r3.s64 = r27.s64 + 22444;
	// bl 0x8235b978
	ctx.lr = 0x82336B58;
	sub_8235B978(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,24980
	ctx.r3.s64 = r27.s64 + 24980;
	// bl 0x8235b978
	ctx.lr = 0x82336B64;
	sub_8235B978(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,26164(r27)
	REX_STORE_U8(r27.u32 + 26164, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82341060) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82341070
	if (!ctx.cr6.eq) goto loc_82341070;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82341070:
	// lwz r11,372(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 372);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82341850) {
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
	ctx.lr = 0x82341858;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,324(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// bl 0x8233e7e0
	ctx.lr = 0x82341868;
	sub_8233E7E0(ctx, base);
	// lwz r4,332(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 332);
	// addi r29,r30,332
	r29.s64 = r30.s64 + 332;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// lis r27,-32129
	r27.s64 = -2105606144;
	// addi r28,r11,9336
	r28.s64 = ctx.r11.s64 + 9336;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// beq cr6,0x823418d0
	if (ctx.cr6.eq) goto loc_823418D0;
loc_82341888:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,309
	ctx.r6.s64 = 309;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r4,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// stw r4,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// stw r26,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r26.u32);
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823418C4;
	sub_82330D00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x82341888
	if (!ctx.cr6.eq) goto loc_82341888;
loc_823418D0:
	// lwz r3,324(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 324);
	// bl 0x8233e820
	ctx.lr = 0x823418D8;
	sub_8233E820(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// stw r30,4(r30)
	REX_STORE_U32(r30.u32 + 4, r30.u32);
	// stw r30,0(r30)
	REX_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r26,8(r30)
	REX_STORE_U32(r30.u32 + 8, r26.u32);
	// stb r26,308(r30)
	REX_STORE_U8(r30.u32 + 308, r26.u8);
	// bl 0x82353708
	ctx.lr = 0x82341908;
	sub_82353708(ctx, base);
	// lwz r3,324(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234191c
	if (ctx.cr6.eq) goto loc_8234191C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233e770
	ctx.lr = 0x8234191C;
	sub_8233E770(ctx, base);
loc_8234191C:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,329
	ctx.r6.s64 = 329;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82341938;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8234B7D8) {
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
	ctx.lr = 0x8234B7E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r3,76
	r30.s64 = ctx.r3.s64 + 76;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234b808
	if (!ctx.cr6.eq) goto loc_8234B808;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8234B808:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234b890
	if (!ctx.cr6.gt) goto loc_8234B890;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r6,72
	ctx.r6.s64 = 72;
loc_8234B82C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r28,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r28.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,60(r9)
	REX_STORE_U32(ctx.r9.u32 + 60, ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,36(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// ori r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 8192;
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8234b82c
	if (ctx.cr6.lt) goto loc_8234B82C;
loc_8234B890:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b958
	if (ctx.cr6.eq) goto loc_8234B958;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r12,-76
	ctx.r12.s64 = -76;
	// addi r11,r31,220
	ctx.r11.s64 = r31.s64 + 220;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8234B8C0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8234b8c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234B8C0;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r7,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r7.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r6,84(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// rlwinm r4,r6,0,28,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lwz r3,20888(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20888);
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// lfs f13,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,20892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20892);
	// lfs f12,3740(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 3740);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3744(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3744);
	ctx.f11.f64 = double(temp.f32);
	// stw r7,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r7.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stw r4,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// stw r7,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r7.u32);
	// stfs f0,336(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 296, temp.u32);
	// stfs f13,364(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 288, temp.u32);
	// stfs f0,328(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f11,332(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f13,324(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// stfs f12,340(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 340, temp.u32);
	// stfs f12,344(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 344, temp.u32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// stfs f13,352(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 352, temp.u32);
	// stfs f13,356(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
	// stfs f0,360(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 408, temp.u32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 412, temp.u32);
loc_8234B958:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234b99c
	if (!ctx.cr6.gt) goto loc_8234B99C;
loc_8234B968:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234B980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234b9a0
	if (!ctx.cr6.eq) goto loc_8234B9A0;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234b968
	if (ctx.cr6.lt) goto loc_8234B968;
loc_8234B99C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234B9A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823560F0) {
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
	ctx.lr = 0x823560F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8235611c
	if (!ctx.cr6.eq) goto loc_8235611C;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_8235611C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823561ac
	if (ctx.cr6.eq) goto loc_823561AC;
	// lwz r11,256(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 256);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82356178
	if (ctx.cr6.gt) goto loc_82356178;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24904
	ctx.r12.s64 = ctx.r12.s64 + 24904;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82356184;
	case 1:
		goto loc_823561AC;
	case 2:
		goto loc_823561AC;
	case 3:
		goto loc_823561AC;
	case 4:
		goto loc_823561AC;
	case 5:
		goto loc_823561AC;
	case 6:
		goto loc_82356184;
	case 7:
		goto loc_82356184;
	case 8:
		goto loc_82356184;
	case 9:
		goto loc_82356184;
	case 10:
		goto loc_82356184;
	case 11:
		goto loc_82356184;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82356178:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82356184:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823561ac
	if (ctx.cr6.eq) goto loc_823561AC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x823561ac
	if (ctx.cr6.eq) goto loc_823561AC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x823561ac
	if (ctx.cr6.eq) goto loc_823561AC;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x823561ac
	if (ctx.cr6.eq) goto loc_823561AC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82356178
	if (!ctx.cr6.eq) goto loc_82356178;
loc_823561AC:
	// lwz r31,0(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	r27.s64 = 0;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r29,r11,9960
	r29.s64 = ctx.r11.s64 + 9960;
	// bne cr6,0x82356204
	if (!ctx.cr6.eq) goto loc_82356204;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,225
	ctx.r6.s64 = 225;
	// li r4,320
	ctx.r4.s64 = 320;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823561E8;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82356514
	if (ctx.cr6.eq) goto loc_82356514;
	// bl 0x823ada70
	ctx.lr = 0x823561F4;
	sub_823ADA70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82356514
	if (ctx.cr6.eq) goto loc_82356514;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_82356204:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82356600
	if (ctx.cr6.eq) goto loc_82356600;
	// lwz r11,256(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 256);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r10,256(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 256);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82356520
	if (ctx.cr6.eq) goto loc_82356520;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82356520
	if (ctx.cr6.eq) goto loc_82356520;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82356520
	if (ctx.cr6.eq) goto loc_82356520;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82356520
	if (ctx.cr6.eq) goto loc_82356520;
	// lwz r10,272(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 272);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// lwz r9,260(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 260);
	// bgt cr6,0x823563c4
	if (ctx.cr6.gt) goto loc_823563C4;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25188
	ctx.r12.s64 = ctx.r12.s64 + 25188;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823562C8;
	case 1:
		goto loc_82356294;
	case 2:
		goto loc_8235629C;
	case 3:
		goto loc_823562A4;
	case 4:
		goto loc_823562AC;
	case 5:
		goto loc_823562AC;
	case 6:
		goto loc_823562C8;
	case 7:
		goto loc_823562C8;
	case 8:
		goto loc_823562C8;
	case 9:
		goto loc_823562C8;
	case 10:
		goto loc_823562C8;
	case 11:
		goto loc_823562C8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82356294:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823562b0
	goto loc_823562B0;
loc_8235629C:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823562b0
	goto loc_823562B0;
loc_823562A4:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823562b0
	goto loc_823562B0;
loc_823562AC:
	// li r11,32
	ctx.r11.s64 = 32;
loc_823562B0:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulld r8,r11,r10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// rldicl r7,r8,61,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r7,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// b 0x82356360
	goto loc_82356360;
loc_823562C8:
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25312
	ctx.r12.s64 = ctx.r12.s64 + 25312;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8235635C;
	case 1:
		goto loc_823563C4;
	case 2:
		goto loc_823563C4;
	case 3:
		goto loc_823563C4;
	case 4:
		goto loc_823563C4;
	case 5:
		goto loc_823563C4;
	case 6:
		goto loc_82356310;
	case 7:
		goto loc_82356328;
	case 8:
		goto loc_82356344;
	case 9:
		goto loc_82356368;
	case 10:
		goto loc_82356368;
	case 11:
		goto loc_82356368;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82356310:
	// addi r11,r10,13
	ctx.r11.s64 = ctx.r10.s64 + 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// b 0x82356360
	goto loc_82356360;
loc_82356328:
	// addi r11,r10,63
	ctx.r11.s64 = ctx.r10.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// b 0x82356360
	goto loc_82356360;
loc_82356344:
	// addi r11,r10,27
	ctx.r11.s64 = ctx.r10.s64 + 27;
	// li r10,28
	ctx.r10.s64 = 28;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// b 0x82356360
	goto loc_82356360;
loc_8235635C:
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
loc_82356360:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
loc_82356368:
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r11,256(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 256);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// lwz r10,260(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 260);
	// bgt cr6,0x823563c4
	if (ctx.cr6.gt) goto loc_823563C4;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25492
	ctx.r12.s64 = ctx.r12.s64 + 25492;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82356440;
	case 1:
		goto loc_823563F0;
	case 2:
		goto loc_82356404;
	case 3:
		goto loc_82356418;
	case 4:
		goto loc_8235642C;
	case 5:
		goto loc_8235642C;
	case 6:
		goto loc_82356440;
	case 7:
		goto loc_82356440;
	case 8:
		goto loc_82356440;
	case 9:
		goto loc_82356440;
	case 10:
		goto loc_82356440;
	case 11:
		goto loc_82356440;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823563C4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823563e4
	if (ctx.cr6.eq) goto loc_823563E4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823563E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823563E4:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_823563F0:
	// li r11,8
	ctx.r11.s64 = 8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823564b4
	goto loc_823564B4;
loc_82356404:
	// li r11,16
	ctx.r11.s64 = 16;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823564b4
	goto loc_823564B4;
loc_82356418:
	// li r11,24
	ctx.r11.s64 = 24;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823564b4
	goto loc_823564B4;
loc_8235642C:
	// li r11,32
	ctx.r11.s64 = 32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldicl r9,r11,63,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x823564b4
	goto loc_823564B4;
loc_82356440:
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,25688
	ctx.r12.s64 = ctx.r12.s64 + 25688;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823564B0;
	case 1:
		goto loc_823563C4;
	case 2:
		goto loc_823563C4;
	case 3:
		goto loc_823563C4;
	case 4:
		goto loc_823563C4;
	case 5:
		goto loc_823563C4;
	case 6:
		goto loc_82356488;
	case 7:
		goto loc_82356490;
	case 8:
		goto loc_82356498;
	case 9:
		goto loc_823564A0;
	case 10:
		goto loc_823564A0;
	case 11:
		goto loc_823564A0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82356488:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823564b4
	goto loc_823564B4;
loc_82356490:
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x823564b4
	goto loc_823564B4;
loc_82356498:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823564b4
	goto loc_823564B4;
loc_823564A0:
	// addi r11,r31,304
	ctx.r11.s64 = r31.s64 + 304;
	// li r30,4
	r30.s64 = 4;
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
	// b 0x82356530
	goto loc_82356530;
loc_823564B0:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_823564B4:
	// mullw r30,r10,r11
	r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(r30.u32, 8, ctx.xer);
	// bgt cr6,0x823564cc
	if (ctx.cr6.gt) goto loc_823564CC;
	// addi r11,r31,304
	ctx.r11.s64 = r31.s64 + 304;
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
	// b 0x82356530
	goto loc_82356530;
loc_823564CC:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,272
	ctx.r6.s64 = 272;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823564E8;
	sub_82330E40(ctx, base);
	// stw r3,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82356530
	if (!ctx.cr6.eq) goto loc_82356530;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82356514
	if (ctx.cr6.eq) goto loc_82356514;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82356514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82356514:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82356520:
	// lwz r11,268(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 268);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r27,300(r31)
	REX_STORE_U32(r31.u32 + 300, r27.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_82356530:
	// rlwinm r11,r24,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356548
	if (ctx.cr6.eq) goto loc_82356548;
	// stw r27,296(r31)
	REX_STORE_U32(r31.u32 + 296, r27.u32);
	// stw r27,292(r31)
	REX_STORE_U32(r31.u32 + 292, r27.u32);
	// b 0x823565f0
	goto loc_823565F0;
loc_82356548:
	// rlwinm r10,r24,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x20000000;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82356584
	if (ctx.cr6.eq) goto loc_82356584;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82356584
	if (ctx.cr6.eq) goto loc_82356584;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,64
	ctx.r7.s64 = 4194304;
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// rlwimi r7,r24,26,30,30
	ctx.r7.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 26) & 0x2) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,317
	ctx.r6.s64 = 317;
	// b 0x82356598
	goto loc_82356598;
loc_82356584:
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r24,26,30,30
	ctx.r7.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 26) & 0x2;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,328
	ctx.r6.s64 = 328;
loc_82356598:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82330e40
	ctx.lr = 0x823565A8;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r3.u32);
	// bne cr6,0x823565e0
	if (!ctx.cr6.eq) goto loc_823565E0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823565d4
	if (ctx.cr6.eq) goto loc_823565D4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823565D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823565D4:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_823565E0:
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
loc_823565F0:
	// lwz r11,256(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 256);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r10,272(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 272);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
loc_82356600:
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8237DCC8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x8237DCD0;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 648);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8237dd08
	if (!ctx.cr6.eq) goto loc_8237DD08;
	// lwz r10,656(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 656);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8237dd08
	if (ctx.cr6.eq) goto loc_8237DD08;
	// stw r11,656(r3)
	REX_STORE_U32(ctx.r3.u32 + 656, ctx.r11.u32);
loc_8237DD08:
	// rlwinm r11,r4,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0;
	// cmpwi cr6,r11,176
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 176, ctx.xer);
	// bgt cr6,0x8237e73c
	if (ctx.cr6.gt) goto loc_8237E73C;
	// beq cr6,0x8237e2ac
	if (ctx.cr6.eq) goto loc_8237E2AC;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x8237e1e0
	if (ctx.cr6.eq) goto loc_8237E1E0;
	// cmpwi cr6,r11,144
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 144, ctx.xer);
	// beq cr6,0x8237ddcc
	if (ctx.cr6.eq) goto loc_8237DDCC;
	// cmpwi cr6,r11,160
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 160, ctx.xer);
	// bne cr6,0x8237e5c4
	if (!ctx.cr6.eq) goto loc_8237E5C4;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237dd44
	if (ctx.cr6.eq) goto loc_8237DD44;
	// stb r9,651(r30)
	REX_STORE_U8(r30.u32 + 651, ctx.r9.u8);
	// b 0x8237dd8c
	goto loc_8237DD8C;
loc_8237DD44:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8237dd74
	if (ctx.cr6.lt) goto loc_8237DD74;
loc_8237DD58:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,28(r11)
	REX_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237DD74:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r8,651(r30)
	REX_STORE_U8(r30.u32 + 651, ctx.r8.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_8237DD8C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8237dd58
	if (!ctx.cr6.lt) goto loc_8237DD58;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r8,652(r30)
	REX_STORE_U8(r30.u32 + 652, ctx.r8.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237DDCC:
	// li r22,0
	r22.s64 = 0;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// mr r28,r22
	r28.u64 = r22.u64;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// stw r22,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// stb r22,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r22.u8);
	// stw r22,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// stw r22,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r22.u32);
	// stw r22,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// stw r22,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r22.u32);
	// beq cr6,0x8237de0c
	if (ctx.cr6.eq) goto loc_8237DE0C;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// b 0x8237de30
	goto loc_8237DE30;
loc_8237DE0C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8237dd58
	if (!ctx.cr6.lt) goto loc_8237DD58;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r23,r9,r10
	r23.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_8237DE30:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8237dd58
	if (!ctx.cr6.lt) goto loc_8237DD58;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// clrlwi r24,r23,24
	r24.u64 = r23.u32 & 0xFF;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// lbzx r4,r8,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// stb r4,650(r30)
	REX_STORE_U8(r30.u32 + 650, ctx.r4.u8);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// bl 0x8237d1d8
	ctx.lr = 0x8237DE9C;
	sub_8237D1D8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e5c4
	if (!ctx.cr6.eq) goto loc_8237E5C4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237e5c4
	if (!ctx.cr6.eq) goto loc_8237E5C4;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237e5c4
	if (ctx.cr6.eq) goto loc_8237E5C4;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r26,r30,16
	r26.s64 = r30.s64 + 16;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x8237defc
	if (ctx.cr6.eq) goto loc_8237DEFC;
loc_8237DECC:
	// lwz r10,568(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8237dee8
	if (ctx.cr6.eq) goto loc_8237DEE8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8237decc
	if (!ctx.cr6.eq) goto loc_8237DECC;
	// b 0x8237defc
	goto loc_8237DEFC;
loc_8237DEE8:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r28,1
	r28.s64 = 1;
	// stw r10,568(r11)
	REX_STORE_U32(ctx.r11.u32 + 568, ctx.r10.u32);
	// stb r9,608(r11)
	REX_STORE_U8(ctx.r11.u32 + 608, ctx.r9.u8);
loc_8237DEFC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237df14
	if (ctx.cr6.eq) goto loc_8237DF14;
	// lbz r11,650(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 650);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237e5c4
	if (ctx.cr6.eq) goto loc_8237E5C4;
loc_8237DF14:
	// lbz r11,650(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 650);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237e5c4
	if (ctx.cr6.eq) goto loc_8237E5C4;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r25,120(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// beq cr6,0x8237df58
	if (ctx.cr6.eq) goto loc_8237DF58;
loc_8237DF30:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8237df4c
	if (ctx.cr6.eq) goto loc_8237DF4C;
	// lwz r11,616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 616);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8237df4c
	if (!ctx.cr6.eq) goto loc_8237DF4C;
	// bl 0x8237c920
	ctx.lr = 0x8237DF4C;
	sub_8237C920(ctx, base);
loc_8237DF4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bne cr6,0x8237df30
	if (!ctx.cr6.eq) goto loc_8237DF30;
loc_8237DF58:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,11736
	ctx.r11.s64 = ctx.r11.s64 + 11736;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8237df80
	if (!ctx.cr6.eq) goto loc_8237DF80;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8237df84
	if (ctx.cr6.eq) goto loc_8237DF84;
loc_8237DF80:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8237DF84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237e03c
	if (ctx.cr6.eq) goto loc_8237E03C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lfs f31,8996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8996);
	f31.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
loc_8237DFA8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r10,r11,400
	ctx.r10.s64 = ctx.r11.s64 + 400;
	// lwz r31,400(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8237e01c
	if (ctx.cr6.eq) goto loc_8237E01C;
loc_8237DFC4:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8234bd90
	ctx.lr = 0x8237DFD0;
	sub_8234BD90(ctx, base);
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8237dff0
	if (!ctx.cr6.eq) goto loc_8237DFF0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8237dff0
	if (!ctx.cr6.lt) goto loc_8237DFF0;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_8237DFF0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8237e000
	if (!ctx.cr6.lt) goto loc_8237E000;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_8237E000:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r10,r11,400
	ctx.r10.s64 = ctx.r11.s64 + 400;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8237dfc4
	if (!ctx.cr6.eq) goto loc_8237DFC4;
loc_8237E01C:
	// addi r29,r29,704
	r29.s64 = r29.s64 + 704;
	// cmpwi cr6,r29,11264
	ctx.cr6.compare<int32_t>(r29.s32, 11264, ctx.xer);
	// blt cr6,0x8237dfa8
	if (ctx.cr6.lt) goto loc_8237DFA8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x8237e038
	if (!ctx.cr6.eq) goto loc_8237E038;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8237E038:
	// bl 0x8237c920
	ctx.lr = 0x8237E03C;
	sub_8237C920(ctx, base);
loc_8237E03C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfd f1,10608(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 10608);
	// std r5,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,19156(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19156);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,11736(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 11736);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r22,8(r31)
	REX_STORE_U32(r31.u32 + 8, r22.u32);
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// stw r24,568(r31)
	REX_STORE_U32(r31.u32 + 568, r24.u32);
	// stw r30,624(r31)
	REX_STORE_U32(r31.u32 + 624, r30.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r9,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r9.u32);
	// stb r23,576(r31)
	REX_STORE_U8(r31.u32 + 576, r23.u8);
	// stb r3,577(r31)
	REX_STORE_U8(r31.u32 + 577, ctx.r3.u8);
	// stw r6,580(r31)
	REX_STORE_U32(r31.u32 + 580, ctx.r6.u32);
	// lbz r8,650(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 650);
	// stb r8,584(r31)
	REX_STORE_U8(r31.u32 + 584, ctx.r8.u8);
	// stw r4,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r4.u32);
	// stw r25,616(r31)
	REX_STORE_U32(r31.u32 + 616, r25.u32);
	// bl 0x8269f778
	ctx.lr = 0x8237E0F0;
	sub_8269F778(ctx, base);
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,620(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 620, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r7.u32);
	// stw r6,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r6.u32);
	// bl 0x8237c338
	ctx.lr = 0x8237E110;
	sub_8237C338(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237e5c8
	if (!ctx.cr6.eq) goto loc_8237E5C8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,268(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 268);
	// bl 0x82358550
	ctx.lr = 0x8237E13C;
	sub_82358550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237e1c0
	if (!ctx.cr6.eq) goto loc_8237E1C0;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x823500a8
	ctx.lr = 0x8237E168;
	sub_823500A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237e5c8
	if (!ctx.cr6.eq) goto loc_8237E5C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237cdc0
	ctx.lr = 0x8237E178;
	sub_8237CDC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237e5c8
	if (!ctx.cr6.eq) goto loc_8237E5C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c9b8
	ctx.lr = 0x8237E188;
	sub_8237C9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237e5c8
	if (!ctx.cr6.eq) goto loc_8237E5C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237d178
	ctx.lr = 0x8237E198;
	sub_8237D178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237e5c8
	if (!ctx.cr6.eq) goto loc_8237E5C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234e340
	ctx.lr = 0x8237E1AC;
	sub_8234E340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E1C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,19124
	ctx.r3.s64 = ctx.r11.s64 + 19124;
	// bl 0x826a2f48
	ctx.lr = 0x8237E1CC;
	sub_826A2F48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E1E0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e210
	if (!ctx.cr6.eq) goto loc_8237E210;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8237dd58
	if (!ctx.cr6.lt) goto loc_8237DD58;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_8237E210:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8237dd58
	if (!ctx.cr6.lt) goto loc_8237DD58;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r29,24
	ctx.r7.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lbzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stb r6,649(r30)
	REX_STORE_U8(r30.u32 + 649, ctx.r6.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// bne cr6,0x8237e5c4
	if (!ctx.cr6.eq) goto loc_8237E5C4;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8237e5c4
	if (ctx.cr6.eq) goto loc_8237E5C4;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
loc_8237E25C:
	// lwz r8,568(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8237e288
	if (ctx.cr6.eq) goto loc_8237E288;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8237e25c
	if (!ctx.cr6.eq) goto loc_8237E25C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E288:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r10,608(r11)
	REX_STORE_U8(ctx.r11.u32 + 608, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,568(r11)
	REX_STORE_U32(ctx.r11.u32 + 568, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E2AC:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e2dc
	if (!ctx.cr6.eq) goto loc_8237E2DC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8237dd58
	if (!ctx.cr6.lt) goto loc_8237DD58;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_8237E2DC:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8237e30c
	if (ctx.cr6.lt) goto loc_8237E30C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,28(r10)
	REX_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E30C:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// lbzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// bgt cr6,0x8237e5c4
	if (ctx.cr6.gt) goto loc_8237E5C4;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7360
	ctx.r12.s64 = ctx.r12.s64 + -7360;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_8237E540;
	case 1:
		goto loc_8237E5D8;
	case 2:
		goto loc_8237E5C4;
	case 3:
		goto loc_8237E5C4;
	case 4:
		goto loc_8237E5C4;
	case 5:
		goto loc_8237E5C4;
	case 6:
		goto loc_8237E5FC;
	case 7:
		goto loc_8237E624;
	case 8:
		goto loc_8237E5C4;
	case 9:
		goto loc_8237E5C4;
	case 10:
		goto loc_8237E640;
	case 11:
		goto loc_8237E65C;
	case 12:
		goto loc_8237E5C4;
	case 13:
		goto loc_8237E5C4;
	case 14:
		goto loc_8237E5C4;
	case 15:
		goto loc_8237E5C4;
	case 16:
		goto loc_8237E5C4;
	case 17:
		goto loc_8237E5C4;
	case 18:
		goto loc_8237E5C4;
	case 19:
		goto loc_8237E5C4;
	case 20:
		goto loc_8237E5C4;
	case 21:
		goto loc_8237E5C4;
	case 22:
		goto loc_8237E5C4;
	case 23:
		goto loc_8237E5C4;
	case 24:
		goto loc_8237E5C4;
	case 25:
		goto loc_8237E5C4;
	case 26:
		goto loc_8237E5C4;
	case 27:
		goto loc_8237E5C4;
	case 28:
		goto loc_8237E5C4;
	case 29:
		goto loc_8237E5C4;
	case 30:
		goto loc_8237E5C4;
	case 31:
		goto loc_8237E5C4;
	case 32:
		goto loc_8237E678;
	case 33:
		goto loc_8237E5C4;
	case 34:
		goto loc_8237E5C4;
	case 35:
		goto loc_8237E5C4;
	case 36:
		goto loc_8237E5C4;
	case 37:
		goto loc_8237E5C4;
	case 38:
		goto loc_8237E68C;
	case 39:
		goto loc_8237E5C4;
	case 40:
		goto loc_8237E5C4;
	case 41:
		goto loc_8237E5C4;
	case 42:
		goto loc_8237E5C4;
	case 43:
		goto loc_8237E5C4;
	case 44:
		goto loc_8237E5C4;
	case 45:
		goto loc_8237E5C4;
	case 46:
		goto loc_8237E5C4;
	case 47:
		goto loc_8237E5C4;
	case 48:
		goto loc_8237E5C4;
	case 49:
		goto loc_8237E5C4;
	case 50:
		goto loc_8237E5C4;
	case 51:
		goto loc_8237E5C4;
	case 52:
		goto loc_8237E5C4;
	case 53:
		goto loc_8237E5C4;
	case 54:
		goto loc_8237E5C4;
	case 55:
		goto loc_8237E5C4;
	case 56:
		goto loc_8237E5C4;
	case 57:
		goto loc_8237E5C4;
	case 58:
		goto loc_8237E5C4;
	case 59:
		goto loc_8237E5C4;
	case 60:
		goto loc_8237E5C4;
	case 61:
		goto loc_8237E5C4;
	case 62:
		goto loc_8237E5C4;
	case 63:
		goto loc_8237E5C4;
	case 64:
		goto loc_8237E6BC;
	case 65:
		goto loc_8237E5C4;
	case 66:
		goto loc_8237E5C4;
	case 67:
		goto loc_8237E5C4;
	case 68:
		goto loc_8237E5C4;
	case 69:
		goto loc_8237E5C4;
	case 70:
		goto loc_8237E5C4;
	case 71:
		goto loc_8237E5C4;
	case 72:
		goto loc_8237E5C4;
	case 73:
		goto loc_8237E5C4;
	case 74:
		goto loc_8237E5C4;
	case 75:
		goto loc_8237E5C4;
	case 76:
		goto loc_8237E5C4;
	case 77:
		goto loc_8237E5C4;
	case 78:
		goto loc_8237E5C4;
	case 79:
		goto loc_8237E5C4;
	case 80:
		goto loc_8237E5C4;
	case 81:
		goto loc_8237E5C4;
	case 82:
		goto loc_8237E5C4;
	case 83:
		goto loc_8237E5C4;
	case 84:
		goto loc_8237E5C4;
	case 85:
		goto loc_8237E5C4;
	case 86:
		goto loc_8237E5C4;
	case 87:
		goto loc_8237E5C4;
	case 88:
		goto loc_8237E5C4;
	case 89:
		goto loc_8237E5C4;
	case 90:
		goto loc_8237E5C4;
	case 91:
		goto loc_8237E5C4;
	case 92:
		goto loc_8237E5C4;
	case 93:
		goto loc_8237E5C4;
	case 94:
		goto loc_8237E5C4;
	case 95:
		goto loc_8237E5C4;
	case 96:
		goto loc_8237E5C4;
	case 97:
		goto loc_8237E5C4;
	case 98:
		goto loc_8237E5C4;
	case 99:
		goto loc_8237E5C4;
	case 100:
		goto loc_8237E6FC;
	case 101:
		goto loc_8237E720;
	case 102:
		goto loc_8237E5C4;
	case 103:
		goto loc_8237E5C4;
	case 104:
		goto loc_8237E5C4;
	case 105:
		goto loc_8237E5C4;
	case 106:
		goto loc_8237E5C4;
	case 107:
		goto loc_8237E5C4;
	case 108:
		goto loc_8237E5C4;
	case 109:
		goto loc_8237E5C4;
	case 110:
		goto loc_8237E5C4;
	case 111:
		goto loc_8237E5C4;
	case 112:
		goto loc_8237E5C4;
	case 113:
		goto loc_8237E5C4;
	case 114:
		goto loc_8237E5C4;
	case 115:
		goto loc_8237E5C4;
	case 116:
		goto loc_8237E5C4;
	case 117:
		goto loc_8237E5C4;
	case 118:
		goto loc_8237E5C4;
	case 119:
		goto loc_8237E5C4;
	case 120:
		goto loc_8237E5C4;
	case 121:
		goto loc_8237E5C4;
	case 122:
		goto loc_8237E5C4;
	case 123:
		goto loc_8237E5C4;
	case 124:
		goto loc_8237E5C4;
	case 125:
		goto loc_8237E5C4;
	case 126:
		goto loc_8237E5C4;
	case 127:
		goto loc_8237E5C4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8237E540:
	// lbz r10,648(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 648);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x8237e554
	if (ctx.cr6.eq) goto loc_8237E554;
	// rlwinm r11,r11,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// stw r11,656(r30)
	REX_STORE_U32(r30.u32 + 656, ctx.r11.u32);
loc_8237E554:
	// lwz r8,656(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 656);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8237e5c4
	if (ctx.cr6.eq) goto loc_8237E5C4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r22,0
	r22.s64 = 0;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,11728(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 11728);
	// lwz r11,264(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237e5b4
	if (!ctx.cr6.gt) goto loc_8237E5B4;
	// lwz r10,272(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,264
	ctx.r11.s64 = ctx.r10.s64 + 264;
loc_8237E58C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8237e5ac
	if (!ctx.cr6.eq) goto loc_8237E5AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,660(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 660);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8237e5ac
	if (!ctx.cr6.eq) goto loc_8237E5AC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8237E5AC:
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// bdnz 0x8237e58c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237E58C;
loc_8237E5B4:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e5c4
	if (!ctx.cr6.eq) goto loc_8237E5C4;
	// stw r22,656(r30)
	REX_STORE_U32(r30.u32 + 656, r22.u32);
loc_8237E5C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237E5C8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E5D8:
	// lwz r10,688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 688);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,688(r30)
	REX_STORE_U32(r30.u32 + 688, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E5FC:
	// lwz r10,664(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 664);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237e5c4
	if (!ctx.cr6.eq) goto loc_8237E5C4;
	// rlwinm r11,r11,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,680(r30)
	REX_STORE_U32(r30.u32 + 680, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E624:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,692(r30)
	REX_STORE_U32(r30.u32 + 692, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E640:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,696(r30)
	REX_STORE_U32(r30.u32 + 696, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E65C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,700(r30)
	REX_STORE_U32(r30.u32 + 700, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E678:
	// lwz r10,656(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 656);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,656(r30)
	REX_STORE_U32(r30.u32 + 656, ctx.r8.u32);
	// b 0x8237e554
	goto loc_8237E554;
loc_8237E68C:
	// lwz r10,664(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 664);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237e5c4
	if (!ctx.cr6.eq) goto loc_8237E5C4;
	// lwz r10,680(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 680);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,680(r30)
	REX_STORE_U32(r30.u32 + 680, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E6BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e6e0
	if (!ctx.cr6.eq) goto loc_8237E6E0;
	// stb r11,684(r30)
	REX_STORE_U8(r30.u32 + 684, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E6E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,684(r30)
	REX_STORE_U8(r30.u32 + 684, ctx.r11.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E6FC:
	// lwz r10,664(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 664);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,664(r30)
	REX_STORE_U32(r30.u32 + 664, ctx.r8.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E720:
	// rlwinm r11,r11,8,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,664(r30)
	REX_STORE_U32(r30.u32 + 664, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E73C:
	// cmpwi cr6,r11,192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 192, ctx.xer);
	// beq cr6,0x8237e838
	if (ctx.cr6.eq) goto loc_8237E838;
	// cmpwi cr6,r11,208
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 208, ctx.xer);
	// beq cr6,0x8237e7d4
	if (ctx.cr6.eq) goto loc_8237E7D4;
	// cmpwi cr6,r11,224
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 224, ctx.xer);
	// bne cr6,0x8237e5c4
	if (!ctx.cr6.eq) goto loc_8237E5C4;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e784
	if (!ctx.cr6.eq) goto loc_8237E784;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8237dd58
	if (!ctx.cr6.lt) goto loc_8237DD58;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_8237E784:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8237dd58
	if (!ctx.cr6.lt) goto loc_8237DD58;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r4,r5,-64
	ctx.r4.s64 = ctx.r5.s64 + -64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r3,r4,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,676(r30)
	REX_STORE_U32(r30.u32 + 676, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E7D4:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237e7f8
	if (ctx.cr6.eq) goto loc_8237E7F8;
	// stb r9,668(r30)
	REX_STORE_U8(r30.u32 + 668, ctx.r9.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E7F8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8237dd58
	if (!ctx.cr6.lt) goto loc_8237DD58;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r8,668(r30)
	REX_STORE_U8(r30.u32 + 668, ctx.r8.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
loc_8237E838:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237e84c
	if (ctx.cr6.eq) goto loc_8237E84C;
	// stb r9,660(r30)
	REX_STORE_U8(r30.u32 + 660, ctx.r9.u8);
	// b 0x8237e878
	goto loc_8237E878;
loc_8237E84C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8237dd58
	if (!ctx.cr6.lt) goto loc_8237DD58;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r8,660(r30)
	REX_STORE_U8(r30.u32 + 660, ctx.r8.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_8237E878:
	// lbz r11,648(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 648);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8237e5c4
	if (!ctx.cr6.eq) goto loc_8237E5C4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r22,0
	r22.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,11728(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 11728);
	// lwz r11,264(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237e8dc
	if (!ctx.cr6.gt) goto loc_8237E8DC;
	// lwz r10,272(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r9,656(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 656);
	// addi r11,r10,264
	ctx.r11.s64 = ctx.r10.s64 + 264;
loc_8237E8B4:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8237e8d4
	if (!ctx.cr6.eq) goto loc_8237E8D4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,660(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 660);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8237e8d4
	if (!ctx.cr6.eq) goto loc_8237E8D4;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8237E8D4:
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// bdnz 0x8237e8b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237E8B4;
loc_8237E8DC:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237e5c4
	if (!ctx.cr6.eq) goto loc_8237E5C4;
	// stb r22,660(r30)
	REX_STORE_U8(r30.u32 + 660, r22.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823D9BE0) {
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
	ctx.lr = 0x823D9BE8;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823D9C08;
	sub_826A2D14(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x823d9c2c
	if (!ctx.cr6.gt) goto loc_823D9C2C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x823D9C2C;
	sub_826A22F8(ctx, base);
loc_823D9C2C:
	// srawi r9,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r9.s64 = r28.s32 >> 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x823d9ca8
	if (ctx.cr6.lt) goto loc_823D9CA8;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// addi r8,r30,-4
	ctx.r8.s64 = r30.s64 + -4;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823D9C64:
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfsu f0,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfsu f13,16(r7)
	ea = 16 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d9c64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9C64;
loc_823D9CA8:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823d9cf4
	if (!ctx.cr6.lt) goto loc_823D9CF4;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r10,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 + r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 + r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_823D9CE0:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f13,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d9ce0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9CE0;
loc_823D9CF4:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823E2138) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,96(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823e2150
	if (!ctx.cr6.eq) goto loc_823E2150;
loc_823E2148:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_823E2150:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e2148
	if (ctx.cr6.eq) goto loc_823E2148;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e2148
	if (ctx.cr6.eq) goto loc_823E2148;
	// lwz r9,2848(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 2848);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// sraw r10,r10,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// sraw r5,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r5.s64 = ctx.r10.s32 >> temp.u32;
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,32(r8)
	REX_STORE_U64(ctx.r8.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E4E88) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x823e4bf0
	ctx.lr = 0x823E4EA0;
	sub_823E4BF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f0,4280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4280);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x823e4f00
	if (ctx.cr6.lt) goto loc_823E4F00;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823E4ECC:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
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
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfsu f6,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e4ecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E4ECC;
loc_823E4F00:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823e4f2c
	if (!ctx.cr6.lt) goto loc_823E4F2C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823E4F1C:
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
	// bdnz 0x823e4f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E4F1C;
loc_823E4F2C:
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

DEFINE_REX_FUNC(sub_823E91F0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823E9214;
	sub_826A2D14(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,0(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r8,r3,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r3.u64;
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stwux r7,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r1.u32 = ea;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subf r7,r3,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r3.u64;
loc_823E923C:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// std r3,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r31)
	ctx.f12.u64 = REX_LOAD_U64(r31.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfsx f9,r7,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x823e923c
	if (ctx.cr6.lt) goto loc_823E923C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// subf r8,r9,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r9.u64;
loc_823E9280:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f10,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f13.f64)));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823e9280
	if (ctx.cr6.lt) goto loc_823E9280;
	// fmadds f10,f13,f13,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r8,r6,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r6.u64;
	// lfs f12,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fnmsubs f8,f0,f11,f10
	ctx.f8.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f10.f64)));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f0,f6,f9
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
loc_823E92D0:
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsx f11,r8,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x823e92d0
	if (ctx.cr6.lt) goto loc_823E92D0;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ED690) {
	REX_FUNC_PROLOGUE();
	// b 0x82793a24
	__imp__MmQueryAllocationSize(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EDA18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// subfe r8,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823ed6b0
	sub_823ED6B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EDBB0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EDCE0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823edd4c
	if (ctx.cr6.eq) goto loc_823EDD4C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823edd4c
	if (ctx.cr6.eq) goto loc_823EDD4C;
	// andi. r11,r6,144
	ctx.r11.u64 = ctx.r6.u64 & 144;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,144
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 144, ctx.xer);
	// beq cr6,0x823edd4c
	if (ctx.cr6.eq) goto loc_823EDD4C;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823edd28
	if (!ctx.cr6.eq) goto loc_823EDD28;
	// rlwinm. r31,r6,0,24,24
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823edd28
	if (!ctx.cr0.eq) goto loc_823EDD28;
	// ori r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 16;
loc_823EDD28:
	// rlwinm. r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823edd3c
	if (ctx.cr0.eq) goto loc_823EDD3C;
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823edd4c
	if (!ctx.cr6.eq) goto loc_823EDD4C;
loc_823EDD3C:
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82793764
	ctx.lr = 0x823EDD48;
	__imp__XamContentCreateEx(ctx, base);
	// b 0x823edd50
	goto loc_823EDD50;
loc_823EDD4C:
	// li r3,87
	ctx.r3.s64 = 87;
loc_823EDD50:
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

DEFINE_REX_FUNC(sub_823EFCD0) {
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
	ctx.lr = 0x823EFCD8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lhz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// beq 0x823efd40
	if (ctx.cr0.eq) goto loc_823EFD40;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_823EFD2C:
	// lbzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r7,92
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 92, ctx.xer);
	// beq cr6,0x823efd40
	if (ctx.cr6.eq) goto loc_823EFD40;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823efd2c
	if (!ctx.cr0.eq) goto loc_823EFD2C;
loc_823EFD40:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// sth r10,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// sth r9,112(r1)
	REX_STORE_U16(ctx.r1.u32 + 112, ctx.r9.u16);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// sth r9,114(r1)
	REX_STORE_U16(ctx.r1.u32 + 114, ctx.r9.u16);
	// beq 0x823efe44
	if (ctx.cr0.eq) goto loc_823EFE44;
	// clrlwi. r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823efe44
	if (ctx.cr0.eq) goto loc_823EFE44;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823efda8
	if (!ctx.cr6.eq) goto loc_823EFDA8;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,42
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 42, ctx.xer);
	// bne cr6,0x823efda8
	if (!ctx.cr6.eq) goto loc_823EFDA8;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x823efda8
	if (!ctx.cr6.eq) goto loc_823EFDA8;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,-42
	ctx.r11.s64 = ctx.r11.s64 + -42;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// sth r11,112(r1)
	REX_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
loc_823EFDA8:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r8,16417
	ctx.r8.s64 = 16417;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827939e4
	ctx.lr = 0x823EFDC8;
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823efe4c
	if (ctx.cr0.lt) goto loc_823EFE4C;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// lwz r11,-30824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30824);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EFE08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x823efe20
	if (!ctx.cr0.lt) goto loc_823EFE20;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x827938d4
	ctx.lr = 0x823EFE18;
	__imp__NtClose(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823efe4c
	goto loc_823EFE4C;
loc_823EFE20:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823efe34
	if (ctx.cr6.eq) goto loc_823EFE34;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x823efe3c
	goto loc_823EFE3C;
loc_823EFE34:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x827938d4
	ctx.lr = 0x823EFE3C;
	__imp__NtClose(ctx, base);
loc_823EFE3C:
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x823efe4c
	goto loc_823EFE4C;
loc_823EFE44:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
loc_823EFE4C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823FBC68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
loc_823FBC7C:
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvsl v0,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v0,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v0,v63,5,2,2
	ctx.fpscr.enableFlushModeUnconditional();
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
	// stvehx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x1;
	REX_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
	// lhz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x823fbc7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FBC7C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82400620) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-21252
	ctx.r10.s64 = ctx.r10.s64 + -21252;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_82400644:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82400664
	if (!ctx.cr0.eq) goto loc_82400664;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82400644
	if (!ctx.cr6.eq) goto loc_82400644;
loc_82400664:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824006a4
	if (ctx.cr0.eq) goto loc_824006A4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-21284
	ctx.r10.s64 = ctx.r10.s64 + -21284;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_8240067C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240069c
	if (!ctx.cr0.eq) goto loc_8240069C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8240067c
	if (!ctx.cr6.eq) goto loc_8240067C;
loc_8240069C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824006c0
	if (!ctx.cr0.eq) goto loc_824006C0;
loc_824006A4:
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824006B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824006c8
	goto loc_824006C8;
loc_824006C0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_824006C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82405658) {
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
	ctx.lr = 0x82405660;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82405aec
	if (!ctx.cr6.eq) goto loc_82405AEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,104(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824056a4
	if (ctx.cr6.eq) goto loc_824056A4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82405aec
	if (!ctx.cr6.eq) goto loc_82405AEC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82405aec
	if (!ctx.cr6.eq) goto loc_82405AEC;
loc_824056A4:
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824056c8
	if (ctx.cr6.eq) goto loc_824056C8;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82405aec
	if (!ctx.cr6.eq) goto loc_82405AEC;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x82405aec
	if (!ctx.cr6.eq) goto loc_82405AEC;
loc_824056C8:
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82405aec
	if (!ctx.cr6.eq) goto loc_82405AEC;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82405aec
	if (!ctx.cr6.eq) goto loc_82405AEC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x82405710
	if (!ctx.cr6.gt) goto loc_82405710;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82405710
	if (ctx.cr0.eq) goto loc_82405710;
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_82405710:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8240572c
	if (!ctx.cr6.gt) goto loc_8240572C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_8240572C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824058b8
	if (!ctx.cr0.eq) goto loc_824058B8;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r10,0,26,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// rlwinm r10,r8,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x824058b8
	if (!ctx.cr6.eq) goto loc_824058B8;
	// lwz r5,104(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x824058b8
	if (ctx.cr6.lt) goto loc_824058B8;
	// lwz r6,108(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// blt cr6,0x824058b8
	if (ctx.cr6.lt) goto loc_824058B8;
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824058b8
	if (!ctx.cr6.eq) goto loc_824058B8;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824058b8
	if (!ctx.cr6.eq) goto loc_824058B8;
	// lis r9,10240
	ctx.r9.s64 = 671088640;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82405840
	if (ctx.cr6.gt) goto loc_82405840;
	// beq cr6,0x82405834
	if (ctx.cr6.eq) goto loc_82405834;
	// lis r9,1168
	ctx.r9.s64 = 76546048;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82405834
	if (ctx.cr6.eq) goto loc_82405834;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,10
	ctx.r9.u64 = ctx.r9.u64 | 10;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82405828
	if (ctx.cr6.eq) goto loc_82405828;
	// addis r10,r10,-6184
	ctx.r10.s64 = ctx.r10.s64 + -405274624;
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8240581c
	if (ctx.cr0.eq) goto loc_8240581C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x824057e8
	if (ctx.cr6.eq) goto loc_824057E8;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x82405810
	if (ctx.cr6.eq) goto loc_82405810;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824058b8
	if (!ctx.cr6.eq) goto loc_824058B8;
loc_824057E8:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,-29088(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -29088);
loc_824057F8:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r3,32(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r8,96(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// bctrl 
	ctx.lr = 0x8240580C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824058a8
	goto loc_824058A8;
loc_82405810:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259d7a0
	ctx.lr = 0x82405818;
	sub_8259D7A0(ctx, base);
	// b 0x824058a8
	goto loc_824058A8;
loc_8240581C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82404cc8
	ctx.lr = 0x82405824;
	sub_82404CC8(ctx, base);
	// b 0x824058a8
	goto loc_824058A8;
loc_82405828:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259d968
	ctx.lr = 0x82405830;
	sub_8259D968(ctx, base);
	// b 0x824058a8
	goto loc_824058A8;
loc_82405834:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259d8a0
	ctx.lr = 0x8240583C;
	sub_8259D8A0(ctx, base);
	// b 0x824058a8
	goto loc_824058A8;
loc_82405840:
	// addis r10,r10,-10280
	ctx.r10.s64 = ctx.r10.s64 + -673710080;
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824058a0
	if (ctx.cr0.eq) goto loc_824058A0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82405894
	if (ctx.cr6.eq) goto loc_82405894;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82405874
	if (ctx.cr6.eq) goto loc_82405874;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// beq cr6,0x82405888
	if (ctx.cr6.eq) goto loc_82405888;
	// lis r9,504
	ctx.r9.s64 = 33030144;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824058b8
	if (!ctx.cr6.eq) goto loc_824058B8;
loc_82405874:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,-29084(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -29084);
	// b 0x824057f8
	goto loc_824057F8;
loc_82405888:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82404dd0
	ctx.lr = 0x82405890;
	sub_82404DD0(ctx, base);
	// b 0x824058a8
	goto loc_824058A8;
loc_82405894:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259d5a0
	ctx.lr = 0x8240589C;
	sub_8259D5A0(ctx, base);
	// b 0x824058a8
	goto loc_824058A8;
loc_824058A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259d6a0
	ctx.lr = 0x824058A8;
	sub_8259D6A0(ctx, base);
loc_824058A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824058b8
	if (ctx.cr6.lt) goto loc_824058B8;
loc_824058B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82405af4
	goto loc_82405AF4;
loc_824058B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x824058CC;
	sub_823F02B8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne 0x824058e0
	if (!ctx.cr0.eq) goto loc_824058E0;
loc_824058D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82405af4
	goto loc_82405AF4;
loc_824058E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8240590c
	if (!ctx.cr6.eq) goto loc_8240590C;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x82405900;
	sub_823F02B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82405928
	goto loc_82405928;
loc_8240590C:
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x823f02b8
	ctx.lr = 0x82405914;
	sub_823F02B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r3
	r29.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82405928:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82405940
	if (!ctx.cr6.eq) goto loc_82405940;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f0350
	ctx.lr = 0x8240593C;
	sub_823F0350(ctx, base);
	// b 0x824058d4
	goto loc_824058D4;
loc_82405940:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8240595c
	if (!ctx.cr6.eq) goto loc_8240595C;
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
	// b 0x82405964
	goto loc_82405964;
loc_8240595C:
	// addi r27,r30,16
	r27.s64 = r30.s64 + 16;
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
loc_82405964:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82405ad0
	if (!ctx.cr6.gt) goto loc_82405AD0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	f31.f64 = double(temp.f32);
loc_82405980:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r28,r25,1,0,30
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824059A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x824059cc
	if (ctx.cr6.eq) goto loc_824059CC;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824059CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824059CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82405a9c
	if (!ctx.cr6.gt) goto loc_82405A9C;
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
loc_824059E4:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// lfsx f13,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + r26.u64;
	// lfsx f0,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfsx f10,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfsx f10,r11,r26
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f9,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824059e4
	if (ctx.cr6.lt) goto loc_824059E4;
loc_82405A9C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82405ABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82405980
	if (ctx.cr6.lt) goto loc_82405980;
loc_82405AD0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0350
	ctx.lr = 0x82405ADC;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f0350
	ctx.lr = 0x82405AE8;
	sub_823F0350(ctx, base);
	// b 0x824058b0
	goto loc_824058B0;
loc_82405AEC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82405AF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82421F60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	ctx.lr = 0x82421F78;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82421fbc
	if (ctx.cr0.eq) goto loc_82421FBC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82421fb4
	if (ctx.cr6.eq) goto loc_82421FB4;
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 32);
	// stfd f0,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// lfd f0,40(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 40);
loc_82421FB0:
	// stfd f0,8(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r30.u32 + 8, ctx.f0.u64);
loc_82421FB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824221a0
	goto loc_824221A0;
loc_82421FBC:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82421fdc
	if (ctx.cr0.eq) goto loc_82421FDC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82421fb4
	if (ctx.cr6.eq) goto loc_82421FB4;
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 32);
	// stfd f0,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.f0.u64);
	// lfd f0,32(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 32);
	// b 0x82421fb0
	goto loc_82421FB0;
loc_82421FDC:
	// lfd f31,176(r3)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r3.u32 + 176);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f30,168(r3)
	f30.u64 = REX_LOAD_U64(ctx.r3.u32 + 168);
	// stfd f31,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, f31.u64);
	// stfd f30,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, f30.u64);
	// beq 0x82422024
	if (ctx.cr0.eq) goto loc_82422024;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-3744
	ctx.r10.s64 = ctx.r11.s64 + -3744;
	// lfd f29,-3744(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// bgt cr6,0x82422010
	if (ctx.cr6.gt) goto loc_82422010;
	// stfd f29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, f29.u64);
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_82422010:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f29.f64);
	// bgt cr6,0x82422040
	if (ctx.cr6.gt) goto loc_82422040;
	// stfd f29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, f29.u64);
	// fmr f30,f29
	f30.f64 = f29.f64;
	// b 0x82422040
	goto loc_82422040;
loc_82422024:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-3744
	ctx.r10.s64 = ctx.r10.s64 + -3744;
	// lfd f29,0(r10)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// blt cr6,0x82422040
	if (ctx.cr6.lt) goto loc_82422040;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82422040:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82422060
	if (ctx.cr0.eq) goto loc_82422060;
	// fsel f31,f31,f29,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = f31.f64 >= 0.0 ? f29.f64 : f31.f64;
	// stfd f31,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, f31.u64);
	// fsel f30,f30,f29,f30
	f30.f64 = f30.f64 >= 0.0 ? f29.f64 : f30.f64;
	// stfd f30,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, f30.u64);
	// b 0x82422070
	goto loc_82422070;
loc_82422060:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f29.f64);
	// bgt cr6,0x82422070
	if (ctx.cr6.gt) goto loc_82422070;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82422070:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f28,3728(r10)
	ctx.fpscr.disableFlushMode();
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// beq 0x824220d0
	if (ctx.cr0.eq) goto loc_824220D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,4296(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 4296);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x8242209c
	if (ctx.cr6.gt) goto loc_8242209C;
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_8242209C:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bgt cr6,0x824220ac
	if (ctx.cr6.gt) goto loc_824220AC;
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
loc_824220AC:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f28.f64);
	// blt cr6,0x824220bc
	if (ctx.cr6.lt) goto loc_824220BC;
	// stfd f28,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, f28.u64);
	// fmr f31,f28
	f31.f64 = f28.f64;
loc_824220BC:
	// fcmpu cr6,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f28.f64);
	// blt cr6,0x824220f0
	if (ctx.cr6.lt) goto loc_824220F0;
	// stfd f28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, f28.u64);
	// fmr f30,f28
	f30.f64 = f28.f64;
	// b 0x824220f0
	goto loc_824220F0;
loc_824220D0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,4296(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 4296);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x824220f0
	if (ctx.cr6.lt) goto loc_824220F0;
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(f30.f64, f28.f64);
	// bgt cr6,0x824220f0
	if (ctx.cr6.gt) goto loc_824220F0;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824220F0:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// bne cr6,0x82422168
	if (!ctx.cr6.eq) goto loc_82422168;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a18c8
	ctx.lr = 0x82422100;
	sub_826A18C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82422168
	if (ctx.cr0.eq) goto loc_82422168;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f29.f64);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82422124
	if (ctx.cr6.eq) goto loc_82422124;
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(f31.f64, f28.f64);
	// bne cr6,0x8242212c
	if (!ctx.cr6.eq) goto loc_8242212C;
loc_82422124:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8242212C:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsub f13,f31,f0
	ctx.f13.f64 = f31.f64 - ctx.f0.f64;
	// lfd f0,-23680(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -23680);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82422168
	if (!ctx.cr6.lt) goto loc_82422168;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82422168:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfd f31,32(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 32, f31.u64);
	// stfd f30,40(r31)
	REX_STORE_U64(r31.u32 + 40, f30.u64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82422198
	if (ctx.cr6.eq) goto loc_82422198;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
loc_82422198:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824221A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cf4
	ctx.lr = 0x824221AC;
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

DEFINE_REX_FUNC(sub_82440650) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,1376(r3)
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82441A58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82441ac0
	if (!ctx.cr6.eq) goto loc_82441AC0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82441ac0
	if (ctx.cr6.eq) goto loc_82441AC0;
	// lbz r8,9(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bne cr6,0x82441ac0
	if (!ctx.cr6.eq) goto loc_82441AC0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82441b18
	if (ctx.cr6.eq) goto loc_82441B18;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_82441A90:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r7,5,19,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x1F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE0FF);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r7,r8,2,17,26
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7FE0) | (ctx.r7.u64 & 0xFFFFFFFFFFFF801F);
	// clrlwi r8,r7,17
	ctx.r8.u64 = ctx.r7.u32 & 0x7FFF;
	// lbzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82441a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82441A90;
	// b 0x82441b18
	goto loc_82441B18;
loc_82441AC0:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bne cr6,0x82441b48
	if (!ctx.cr6.eq) goto loc_82441B48;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82441b48
	if (ctx.cr6.eq) goto loc_82441B48;
	// lbz r8,9(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// bne cr6,0x82441b48
	if (!ctx.cr6.eq) goto loc_82441B48;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82441b18
	if (ctx.cr6.eq) goto loc_82441B18;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82441AEC:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r8,r7,5,19,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0x1F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE0FF);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwimi r7,r8,2,17,26
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7FE0) | (ctx.r7.u64 & 0xFFFFFFFFFFFF801F);
	// clrlwi r8,r7,17
	ctx.r8.u64 = ctx.r7.u32 & 0x7FFF;
	// lbzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82441aec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82441AEC;
loc_82441B18:
	// li r11,3
	ctx.r11.s64 = 3;
	// lbz r9,9(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stb r8,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r8.u8);
	// stb r9,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r9.u8);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82441B48:
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r9,9(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82441B74:
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82441b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82441B74;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82447468) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r10,r10,-7900
	ctx.r10.s64 = ctx.r10.s64 + -7900;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
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
	// stw r8,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// std r11,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// std r11,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82447C28) {
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
	ctx.lr = 0x82447C44;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82444608
	ctx.lr = 0x82447C54;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82447c90
	if (ctx.cr0.eq) goto loc_82447C90;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r10,r10,-7876
	ctx.r10.s64 = ctx.r10.s64 + -7876;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82447c94
	goto loc_82447C94;
loc_82447C90:
	// li r31,0
	r31.s64 = 0;
loc_82447C94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82447ca4
	if (!ctx.cr6.eq) goto loc_82447CA4;
loc_82447C9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82447d2c
	goto loc_82447D2C;
loc_82447CA4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82447cd0
	if (ctx.cr6.eq) goto loc_82447CD0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82447c9c
	if (ctx.cr0.eq) goto loc_82447C9C;
loc_82447CD0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82447cfc
	if (ctx.cr6.eq) goto loc_82447CFC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82447c9c
	if (ctx.cr0.eq) goto loc_82447C9C;
loc_82447CFC:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82447d28
	if (ctx.cr6.eq) goto loc_82447D28;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82447c9c
	if (ctx.cr0.eq) goto loc_82447C9C;
loc_82447D28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82447D2C:
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

DEFINE_REX_FUNC(sub_82451A70) {
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
	ctx.lr = 0x82451A78;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82450858
	ctx.lr = 0x82451A88;
	sub_82450858(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x822cdea0
	ctx.lr = 0x82451A90;
	sub_822CDEA0(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// beq 0x82451b4c
	if (ctx.cr0.eq) goto loc_82451B4C;
	// li r24,1
	r24.s64 = 1;
loc_82451AAC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822cdf00
	ctx.lr = 0x82451ABC;
	sub_822CDF00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82451b68
	if (ctx.cr0.eq) goto loc_82451B68;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82451b34
	if (!ctx.cr6.eq) goto loc_82451B34;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82451b34
	if (ctx.cr0.eq) goto loc_82451B34;
	// lwz r10,64(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 64);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82451b0c
	if (!ctx.cr6.eq) goto loc_82451B0C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82451b14
	if (ctx.cr6.lt) goto loc_82451B14;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x82451b34
	if (!ctx.cr6.eq) goto loc_82451B34;
	// lwz r11,288(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 288);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,288(r28)
	REX_STORE_U32(r28.u32 + 288, ctx.r11.u32);
	// b 0x82451b34
	goto loc_82451B34;
loc_82451B0C:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x82451b34
	if (ctx.cr6.gt) goto loc_82451B34;
loc_82451B14:
	// slw r10,r24,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82451b34
	if (!ctx.cr0.eq) goto loc_82451B34;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// or r31,r10,r31
	r31.u64 = ctx.r10.u64 | r31.u64;
	// bge cr6,0x82451b34
	if (!ctx.cr6.lt) goto loc_82451B34;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82451B34:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// blt cr6,0x82451aac
	if (ctx.cr6.lt) goto loc_82451AAC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// bne cr6,0x82451b50
	if (!ctx.cr6.eq) goto loc_82451B50;
loc_82451B4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82451B50:
	// lwz r10,64(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 64);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82451b7c
	if (!ctx.cr6.eq) goto loc_82451B7C;
	// lwz r10,288(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 288);
	// rlwimi r10,r11,28,1,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70000000) | (ctx.r10.u64 & 0xFFFFFFFF8FFFFFFF);
	// b 0x82451ba0
	goto loc_82451BA0;
loc_82451B68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,11092
	ctx.r4.s64 = ctx.r11.s64 + 11092;
	// bl 0x8244beb0
	ctx.lr = 0x82451B78;
	sub_8244BEB0(ctx, base);
	// b 0x82451ba4
	goto loc_82451BA4;
loc_82451B7C:
	// lwz r10,96(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 96);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82451b8c
	if (!ctx.cr0.eq) goto loc_82451B8C;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82451B8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82451b98
	if (ctx.cr6.eq) goto loc_82451B98;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82451B98:
	// lwz r10,288(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 288);
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
loc_82451BA0:
	// stw r10,288(r28)
	REX_STORE_U32(r28.u32 + 288, ctx.r10.u32);
loc_82451BA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8245A270) {
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
	// addi r4,r10,16236
	ctx.r4.s64 = ctx.r10.s64 + 16236;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245A294;
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

DEFINE_REX_FUNC(sub_8245B278) {
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
	ctx.lr = 0x8245B280;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,108(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245B2A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245B2C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8245b744
	if (!ctx.cr6.eq) goto loc_8245B744;
	// cmplwi cr6,r30,18
	ctx.cr6.compare<uint32_t>(r30.u32, 18, ctx.xer);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bgt cr6,0x8245b94c
	if (ctx.cr6.gt) goto loc_8245B94C;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,12912
	ctx.r12.s64 = ctx.r12.s64 + 12912;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32186
	ctx.r12.s64 = -2109341696;
	// addi r12,r12,-19708
	ctx.r12.s64 = ctx.r12.s64 + -19708;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r30.u32) {
	case 0:
		goto loc_8245B944;
	case 1:
		goto loc_8245B304;
	case 2:
		goto loc_8245B30C;
	case 3:
		goto loc_8245B314;
	case 4:
		goto loc_8245B31C;
	case 5:
		goto loc_8245B324;
	case 6:
		goto loc_8245B32C;
	case 7:
		goto loc_8245B334;
	case 8:
		goto loc_8245B33C;
	case 9:
		goto loc_8245B344;
	case 10:
		goto loc_8245B34C;
	case 11:
		goto loc_8245B354;
	case 12:
		goto loc_8245B35C;
	case 13:
		goto loc_8245B364;
	case 14:
		goto loc_8245B36C;
	case 15:
		goto loc_8245B94C;
	case 16:
		goto loc_8245B94C;
	case 17:
		goto loc_8245B374;
	case 18:
		goto loc_8245B37C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8245B304:
	// li r30,0
	r30.s64 = 0;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B30C:
	// li r30,1
	r30.s64 = 1;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B314:
	// li r30,2
	r30.s64 = 2;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B31C:
	// li r30,3
	r30.s64 = 3;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B324:
	// li r30,4
	r30.s64 = 4;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B32C:
	// li r30,5
	r30.s64 = 5;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B334:
	// li r30,6
	r30.s64 = 6;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B33C:
	// li r30,7
	r30.s64 = 7;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B344:
	// li r30,8
	r30.s64 = 8;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B34C:
	// li r30,9
	r30.s64 = 9;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B354:
	// li r30,10
	r30.s64 = 10;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B35C:
	// li r30,11
	r30.s64 = 11;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B364:
	// li r30,12
	r30.s64 = 12;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B36C:
	// li r30,13
	r30.s64 = 13;
	// b 0x8245b380
	goto loc_8245B380;
loc_8245B374:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8245B37C:
	// lis r30,-32768
	r30.s64 = -2147483648;
loc_8245B380:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r27,r9,r10
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8245b3dc
	if (ctx.cr0.eq) goto loc_8245B3DC;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r10,348(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 348);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8245B3D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8245b404
	if (!ctx.cr0.lt) goto loc_8245B404;
	// b 0x8245b748
	goto loc_8245B748;
loc_8245B3DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245B3F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_8245B404:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r28,-1
	r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r28.u32);
	// stw r28,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r28.u32);
	// stw r28,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r28.u32);
	// ble cr6,0x8245b494
	if (!ctx.cr6.gt) goto loc_8245B494;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8245B444:
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8245b484
	if (!ctx.cr6.eq) goto loc_8245B484;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8245b484
	if (!ctx.cr6.eq) goto loc_8245B484;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8245b484
	if (!ctx.cr6.eq) goto loc_8245B484;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
loc_8245B484:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8245b444
	if (ctx.cr6.lt) goto loc_8245B444;
loc_8245B494:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8245B4A4:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8245b4b8
	if (ctx.cr6.eq) goto loc_8245B4B8;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8245B4B8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8245b4a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245B4A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245B4E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
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
	ctx.lr = 0x8245B504;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r30,1
	ctx.r11.u64 = r30.u32 & 0x7FFFFFFF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bne cr6,0x8245b518
	if (!ctx.cr6.eq) goto loc_8245B518;
	// oris r11,r11,15
	ctx.r11.u64 = ctx.r11.u64 | 983040;
loc_8245B518:
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm. r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bne 0x8245b54c
	if (!ctx.cr0.eq) goto loc_8245B54C;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8245b544
	if (!ctx.cr0.eq) goto loc_8245B544;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8245b54c
	if (ctx.cr0.eq) goto loc_8245B54C;
loc_8245B544:
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8245B54C:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// rlwimi r10,r11,20,9,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x700000) | (ctx.r10.u64 & 0xFFFFFFFFFF8FFFFF);
	// rlwinm r8,r11,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// clrlwi r11,r7,21
	ctx.r11.u64 = ctx.r7.u32 & 0x7FF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r9,r9,-26040
	ctx.r9.s64 = ctx.r9.s64 + -26040;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r5,r8,18180
	ctx.r5.s64 = ctx.r8.s64 + 18180;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r10,26,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x7C;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82404168
	ctx.lr = 0x8245B59C;
	sub_82404168(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8245b750
	if (ctx.cr0.eq) goto loc_8245B750;
	// beq cr6,0x8245b754
	if (ctx.cr6.eq) goto loc_8245B754;
	// lwz r11,1676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1676);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r26,1548(r11)
	REX_STORE_U32(ctx.r11.u32 + 1548, r26.u32);
	// lwz r11,1676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1676);
	// addi r11,r11,194
	ctx.r11.s64 = ctx.r11.s64 + 194;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
	// lwz r11,1676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1676(r31)
	REX_STORE_U32(r31.u32 + 1676, ctx.r11.u32);
	// bl 0x82455688
	ctx.lr = 0x8245B5E4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,18120
	ctx.r4.s64 = ctx.r11.s64 + 18120;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245B604;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245B614;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,18032
	ctx.r4.s64 = ctx.r11.s64 + 18032;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245B634;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r30,15
	r30.s64 = 983040;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8245b664
	if (!ctx.cr6.eq) goto loc_8245B664;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// bl 0x8244a6e0
	ctx.lr = 0x8245B660;
	sub_8244A6E0(ctx, base);
	// b 0x8245b684
	goto loc_8245B684;
loc_8245B664:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,18020
	ctx.r5.s64 = ctx.r11.s64 + 18020;
	// bl 0x8244a6e0
	ctx.lr = 0x8245B670;
	sub_8244A6E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82455928
	ctx.lr = 0x8245B67C;
	sub_82455928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
loc_8245B684:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r10,18004
	ctx.r4.s64 = ctx.r10.s64 + 18004;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,452(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 452);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245B6A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26300
	ctx.r4.s64 = ctx.r11.s64 + -26300;
	// bl 0x824555b8
	ctx.lr = 0x8245B6BC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8245b744
	if (ctx.cr6.eq) goto loc_8245B744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245B6DC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,14172
	ctx.r4.s64 = ctx.r11.s64 + 14172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245B6F8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r6,r10,14180
	ctx.r6.s64 = ctx.r10.s64 + 14180;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245B724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,14096
	ctx.r4.s64 = ctx.r11.s64 + 14096;
loc_8245B734:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245B73C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
loc_8245B744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8245B748:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cfc
	return;
loc_8245B750:
	// bne cr6,0x8245b744
	if (!ctx.cr6.eq) goto loc_8245B744;
loc_8245B754:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245B75C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,17944
	ctx.r4.s64 = ctx.r11.s64 + 17944;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245B77C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245B78C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,17856
	ctx.r4.s64 = ctx.r11.s64 + 17856;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245B7AC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// rlwinm r10,r9,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8245b874
	if (ctx.cr6.eq) goto loc_8245B874;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8245B7D8:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8245b804
	goto loc_8245B804;
loc_8245B7E8:
	// rlwinm. r10,r9,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8245b80c
	if (!ctx.cr0.eq) goto loc_8245B80C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8245B804:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8245b7e8
	if (ctx.cr6.lt) goto loc_8245B7E8;
loc_8245B80C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8245b7d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245B7D8;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8245B824:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8245b838
	if (ctx.cr6.lt) goto loc_8245B838;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8245B838:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8245b824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245B824;
	// lwz r30,132(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,140(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r27,136(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bne cr6,0x8245b888
	if (!ctx.cr6.eq) goto loc_8245B888;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// bne cr6,0x8245b888
	if (!ctx.cr6.eq) goto loc_8245B888;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// bne cr6,0x8245b888
	if (!ctx.cr6.eq) goto loc_8245B888;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// bne cr6,0x8245b888
	if (!ctx.cr6.eq) goto loc_8245B888;
loc_8245B874:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8244a6e0
	ctx.lr = 0x8245B884;
	sub_8244A6E0(ctx, base);
	// b 0x8245b910
	goto loc_8245B910;
loc_8245B888:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,18020
	ctx.r5.s64 = ctx.r11.s64 + 18020;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8244a6e0
	ctx.lr = 0x8245B89C;
	sub_8244A6E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245B8A4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,14172
	ctx.r4.s64 = ctx.r11.s64 + 14172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245B8C0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245B8F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14096
	ctx.r4.s64 = ctx.r11.s64 + 14096;
	// bl 0x824555b8
	ctx.lr = 0x8245B908;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
loc_8245B910:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r10,18004
	ctx.r4.s64 = ctx.r10.s64 + 18004;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,448(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245B930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245b748
	if (ctx.cr0.lt) goto loc_8245B748;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26300
	ctx.r4.s64 = ctx.r11.s64 + -26300;
	// b 0x8245b734
	goto loc_8245B734;
loc_8245B944:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8245b748
	goto loc_8245B748;
loc_8245B94C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8245b748
	goto loc_8245B748;
}

DEFINE_REX_FUNC(sub_82494060) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82494068;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// addi r10,r5,0
	ctx.r10.s64 = ctx.r5.s64 + 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r9,r11,0
	ctx.r9.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x824941d0
	if (!ctx.cr6.eq) goto loc_824941D0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82494124
	if (ctx.cr6.eq) goto loc_82494124;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ff268
	ctx.lr = 0x824940B8;
	sub_823FF268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824940ec
	if (ctx.cr0.lt) goto loc_824940EC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ff268
	ctx.lr = 0x824940D0;
	sub_823FF268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824940ec
	if (ctx.cr0.lt) goto loc_824940EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82494124
	if (ctx.cr6.eq) goto loc_82494124;
	// b 0x824941d0
	goto loc_824941D0;
loc_824940EC:
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_824940F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8249411c
	if (ctx.cr0.eq) goto loc_8249411C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824940f8
	if (ctx.cr6.eq) goto loc_824940F8;
loc_8249411C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824941d0
	if (!ctx.cr0.eq) goto loc_824941D0;
loc_82494124:
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// b 0x824941b0
	goto loc_824941B0;
loc_82494130:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824941bc
	if (ctx.cr6.eq) goto loc_824941BC;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,44(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x824941d0
	if (!ctx.cr6.eq) goto loc_824941D0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,48(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,48(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x824937e8
	ctx.lr = 0x82494168;
	sub_824937E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824941d0
	if (ctx.cr0.eq) goto loc_824941D0;
	// b 0x82494184
	goto loc_82494184;
loc_82494174:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x824941a4
	if (ctx.cr6.eq) goto loc_824941A4;
loc_82494184:
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82494174
	if (!ctx.cr6.eq) goto loc_82494174;
	// b 0x824941a4
	goto loc_824941A4;
loc_82494194:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x824941b0
	if (ctx.cr6.eq) goto loc_824941B0;
loc_824941A4:
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82494194
	if (!ctx.cr6.eq) goto loc_82494194;
loc_824941B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82494130
	if (!ctx.cr6.eq) goto loc_82494130;
	// b 0x824941c4
	goto loc_824941C4;
loc_824941BC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824941d0
	if (!ctx.cr6.eq) goto loc_824941D0;
loc_824941C4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x824941d4
	if (ctx.cr6.eq) goto loc_824941D4;
loc_824941D0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_824941D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8249C230) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8249C238;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8249c2dc
	if (ctx.cr6.eq) goto loc_8249C2DC;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8249af20
	ctx.lr = 0x8249C258;
	sub_8249AF20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8249c27c
	if (!ctx.cr0.lt) goto loc_8249C27C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3060
	ctx.r5.s64 = 3060;
	// addi r6,r11,-10588
	ctx.r6.s64 = ctx.r11.s64 + -10588;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249C278;
	sub_82494D48(ctx, base);
	// b 0x8249c2dc
	goto loc_8249C2DC;
loc_8249C27C:
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x8249c2c0
	if (ctx.cr6.lt) goto loc_8249C2C0;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bgt cr6,0x8249c2c0
	if (ctx.cr6.gt) goto loc_8249C2C0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249C298;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249c2dc
	if (ctx.cr0.eq) goto loc_8249C2DC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,20(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824461c0
	ctx.lr = 0x8249C2BC;
	sub_824461C0(ctx, base);
	// b 0x8249c2e0
	goto loc_8249C2E0;
loc_8249C2C0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,-10632
	ctx.r6.s64 = ctx.r11.s64 + -10632;
	// li r5,3052
	ctx.r5.s64 = 3052;
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249C2DC;
	sub_82494D48(ctx, base);
loc_8249C2DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249C2E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824A6B08) {
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
	ctx.lr = 0x824A6B10;
	// stwu r1,-3200(r1)
	ea = -3200 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x826a42a0
	ctx.lr = 0x824A6B34;
	sub_826A42A0(ctx, base);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x826a42a0
	ctx.lr = 0x824A6B48;
	sub_826A42A0(ctx, base);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826a42a0
	ctx.lr = 0x824A6B54;
	sub_826A42A0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824a6b68
	if (!ctx.cr6.eq) goto loc_824A6B68;
	// lis r29,-30602
	r29.s64 = -2005532672;
	// ori r29,r29,2156
	r29.u64 = r29.u64 | 2156;
	// b 0x824a6c44
	goto loc_824A6C44;
loc_824A6B68:
	// li r30,0
	r30.s64 = 0;
	// li r25,1
	r25.s64 = 1;
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r26,120(r31)
	REX_STORE_U32(r31.u32 + 120, r26.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// bl 0x82415dc8
	ctx.lr = 0x824A6BD4;
	sub_82415DC8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x824a6c44
	if (ctx.cr0.lt) goto loc_824A6C44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82494f18
	ctx.lr = 0x824A6BEC;
	sub_82494F18(ctx, base);
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a2e60
	ctx.lr = 0x824A6BFC;
	sub_826A2E60(ctx, base);
	// stw r31,3112(r1)
	REX_STORE_U32(ctx.r1.u32 + 3112, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824a5550
	ctx.lr = 0x824A6C08;
	sub_824A5550(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824a6c14
	if (ctx.cr0.eq) goto loc_824A6C14;
	// stw r25,72(r31)
	REX_STORE_U32(r31.u32 + 72, r25.u32);
loc_824A6C14:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82418e98
	ctx.lr = 0x824A6C1C;
	sub_82418E98(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x824a6c44
	if (ctx.cr0.lt) goto loc_824A6C44;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824a6c44
	if (!ctx.cr6.eq) goto loc_824A6C44;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
loc_824A6C44:
	// bl 0x826a4408
	ctx.lr = 0x824A6C48;
	sub_826A4408(ctx, base);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x826a42a0
	ctx.lr = 0x824A6C58;
	sub_826A42A0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x824a6c68
	if (!ctx.cr6.lt) goto loc_824A6C68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x824a6c90
	goto loc_824A6C90;
loc_824A6C68:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a6c8c
	if (ctx.cr6.eq) goto loc_824A6C8C;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824a6c90
	if (ctx.cr6.lt) goto loc_824A6C90;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824a6c90
	goto loc_824A6C90;
loc_824A6C8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A6C90:
	// addi r1,r1,3200
	ctx.r1.s64 = ctx.r1.s64 + 3200;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824AEBD8) {
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
	ctx.lr = 0x824AEBE0;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r5,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// li r21,0
	r21.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r21.u64);
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r21.u64);
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// std r21,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r21.u64);
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// add. r29,r7,r9
	r29.u64 = ctx.r7.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lis r16,24576
	r16.s64 = 1610612736;
	// lis r17,4352
	r17.s64 = 285212672;
	// lis r15,29392
	r15.s64 = 1926234112;
	// mr r30,r21
	r30.u64 = r21.u64;
	// beq 0x824aed90
	if (ctx.cr0.eq) goto loc_824AED90;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// subf r26,r11,r8
	r26.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_824AEC40:
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(r30.u32, r20.u32, ctx.xer);
	// bge cr6,0x824aec50
	if (!ctx.cr6.lt) goto loc_824AEC50;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x824aec54
	goto loc_824AEC54;
loc_824AEC50:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_824AEC54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824aed7c
	if (ctx.cr6.eq) goto loc_824AED7C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824aed7c
	if (ctx.cr0.eq) goto loc_824AED7C;
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x824aed7c
	if (ctx.cr6.eq) goto loc_824AED7C;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// beq cr6,0x824aecbc
	if (ctx.cr6.eq) goto loc_824AECBC;
	// lis r9,24656
	ctx.r9.s64 = 1615855616;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aecbc
	if (ctx.cr6.eq) goto loc_824AECBC;
	// lis r9,24736
	ctx.r9.s64 = 1621098496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aecbc
	if (ctx.cr6.eq) goto loc_824AECBC;
	// lis r9,24816
	ctx.r9.s64 = 1626341376;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aecbc
	if (ctx.cr6.eq) goto loc_824AECBC;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x824aecbc
	if (ctx.cr6.eq) goto loc_824AECBC;
	// lis r9,29376
	ctx.r9.s64 = 1925185536;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824aecbc
	if (ctx.cr6.eq) goto loc_824AECBC;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// bne cr6,0x824aecc4
	if (!ctx.cr6.eq) goto loc_824AECC4;
loc_824AECBC:
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(r30.u32, r20.u32, ctx.xer);
	// blt cr6,0x824aed7c
	if (ctx.cr6.lt) goto loc_824AED7C;
loc_824AECC4:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824aed7c
	if (ctx.cr6.eq) goto loc_824AED7C;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r5,20(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r4,128(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 128);
loc_824AECE4:
	// lwzx r11,r7,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824aed6c
	if (!ctx.cr6.eq) goto loc_824AED6C;
	// lbz r10,110(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 110);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x824aed7c
	if (ctx.cr6.gt) goto loc_824AED7C;
	// lbz r9,111(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 111);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x824aed6c
	if (!ctx.cr6.eq) goto loc_824AED6C;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(r30.u32, r20.u32, ctx.xer);
	// blt cr6,0x824aed4c
	if (ctx.cr6.lt) goto loc_824AED4C;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r25,r8,r9
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// ble cr6,0x824aed6c
	if (!ctx.cr6.gt) goto loc_824AED6C;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824aed6c
	if (ctx.cr6.eq) goto loc_824AED6C;
	// stwx r10,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x824aed6c
	goto loc_824AED6C;
loc_824AED4C:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x824aed6c
	if (!ctx.cr6.gt) goto loc_824AED6C;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
loc_824AED6C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// blt cr6,0x824aece4
	if (ctx.cr6.lt) goto loc_824AECE4;
loc_824AED7C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x824aec40
	if (ctx.cr6.lt) goto loc_824AEC40;
loc_824AED90:
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824aef80
	if (!ctx.cr6.gt) goto loc_824AEF80;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r25,r1,128
	r25.s64 = ctx.r1.s64 + 128;
	// subf r24,r11,r19
	r24.u64 = r19.u64 - ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824AEDB4:
	// lwz r28,0(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824aef6c
	if (ctx.cr6.eq) goto loc_824AEF6C;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824AEDC8;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824aeddc
	if (ctx.cr0.eq) goto loc_824AEDDC;
	// bl 0x824773d0
	ctx.lr = 0x824AEDD4;
	sub_824773D0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x824aede0
	goto loc_824AEDE0;
loc_824AEDDC:
	// mr r26,r21
	r26.u64 = r21.u64;
loc_824AEDE0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824aefb8
	if (ctx.cr6.eq) goto loc_824AEFB8;
	// li r11,1825
	ctx.r11.s64 = 1825;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82477b60
	ctx.lr = 0x824AEE08;
	sub_82477B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824aefc4
	if (ctx.cr0.lt) goto loc_824AEFC4;
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824aee88
	if (ctx.cr6.eq) goto loc_824AEE88;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_824AEE20:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,136(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 136);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82478758
	ctx.lr = 0x824AEE38;
	sub_82478758(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x824aefe0
	if (ctx.cr6.eq) goto loc_824AEFE0;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwimi r9,r29,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r21,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r21.u32);
	// stw r7,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// blt cr6,0x824aee20
	if (ctx.cr6.lt) goto loc_824AEE20;
loc_824AEE88:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824ae5e0
	ctx.lr = 0x824AEEA8;
	sub_824AE5E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824aefc4
	if (ctx.cr0.lt) goto loc_824AEFC4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824ae7b0
	ctx.lr = 0x824AEED0;
	sub_824AE7B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824aefc4
	if (ctx.cr0.lt) goto loc_824AEFC4;
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824aef48
	if (ctx.cr6.eq) goto loc_824AEF48;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_824AEEE8:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,128(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 128);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82478758
	ctx.lr = 0x824AEF00;
	sub_82478758(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x824aefe0
	if (ctx.cr6.eq) goto loc_824AEFE0;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r8,0(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwimi r9,r29,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r21,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r21.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// blt cr6,0x824aeee8
	if (ctx.cr6.lt) goto loc_824AEEE8;
loc_824AEF48:
	// lwzx r11,r24,r25
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824aefec
	if (!ctx.cr6.eq) goto loc_824AEFEC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824785e8
	ctx.lr = 0x824AEF60;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824af590
	if (ctx.cr0.lt) goto loc_824AF590;
	// stwx r26,r24,r25
	REX_STORE_U32(r24.u32 + r25.u32, r26.u32);
loc_824AEF6C:
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824aedb4
	if (ctx.cr6.lt) goto loc_824AEDB4;
loc_824AEF80:
	// li r23,1
	r23.s64 = 1;
	// mr r22,r23
	r22.u64 = r23.u64;
loc_824AEF88:
	// mr r25,r21
	r25.u64 = r21.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824af414
	if (ctx.cr6.eq) goto loc_824AF414;
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r18
	r26.u64 = r18.u64;
	// subf r24,r11,r18
	r24.u64 = r18.u64 - ctx.r11.u64;
loc_824AEFA0:
	// cmplwi cr6,r25,512
	ctx.cr6.compare<uint32_t>(r25.u32, 512, ctx.xer);
	// bge cr6,0x824af458
	if (!ctx.cr6.lt) goto loc_824AF458;
	// cmplw cr6,r25,r20
	ctx.cr6.compare<uint32_t>(r25.u32, r20.u32, ctx.xer);
	// bge cr6,0x824af014
	if (!ctx.cr6.lt) goto loc_824AF014;
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x824af018
	goto loc_824AF018;
loc_824AEFB8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824af590
	goto loc_824AF590;
loc_824AEFC4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824AEFC8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82130e88
	ctx.lr = 0x824AEFD0;
	sub_82130E88(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82477b20
	ctx.lr = 0x824AEFD8;
	sub_82477B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824af590
	goto loc_824AF590;
loc_824AEFE0:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824aefc8
	goto loc_824AEFC8;
loc_824AEFEC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r7,203(r27)
	ctx.r7.u64 = REX_LOAD_U8(r27.u32 + 203);
	// li r5,4516
	ctx.r5.s64 = 4516;
	// addi r6,r11,664
	ctx.r6.s64 = ctx.r11.s64 + 664;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82489c30
	ctx.lr = 0x824AF008;
	sub_82489C30(ctx, base);
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x824aefc8
	goto loc_824AEFC8;
loc_824AF014:
	// lwz r28,0(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 0);
loc_824AF018:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824af400
	if (ctx.cr6.eq) goto loc_824AF400;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824af400
	if (ctx.cr6.eq) goto loc_824AF400;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// beq cr6,0x824af094
	if (ctx.cr6.eq) goto loc_824AF094;
	// lis r9,24656
	ctx.r9.s64 = 1615855616;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824af094
	if (ctx.cr6.eq) goto loc_824AF094;
	// lis r9,24736
	ctx.r9.s64 = 1621098496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824af094
	if (ctx.cr6.eq) goto loc_824AF094;
	// lis r9,24816
	ctx.r9.s64 = 1626341376;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824af094
	if (ctx.cr6.eq) goto loc_824AF094;
	// lis r9,29408
	ctx.r9.s64 = 1927282688;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824af094
	if (ctx.cr6.eq) goto loc_824AF094;
	// lis r9,24688
	ctx.r9.s64 = 1617952768;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824af094
	if (ctx.cr6.eq) goto loc_824AF094;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x824af094
	if (ctx.cr6.eq) goto loc_824AF094;
	// lis r9,29376
	ctx.r9.s64 = 1925185536;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824af094
	if (ctx.cr6.eq) goto loc_824AF094;
	// cmplw cr6,r11,r15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r15.u32, ctx.xer);
	// bne cr6,0x824af400
	if (!ctx.cr6.eq) goto loc_824AF400;
loc_824AF094:
	// subf r9,r11,r17
	ctx.r9.u64 = r17.u64 - ctx.r11.u64;
	// lwz r6,8(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 8);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r10,r9,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne cr6,0x824af0d0
	if (!ctx.cr6.eq) goto loc_824AF0D0;
	// mr r31,r21
	r31.u64 = r21.u64;
	// b 0x824af0dc
	goto loc_824AF0DC;
loc_824AF0D0:
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r11
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_824AF0DC:
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,128(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 128);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824af238
	if (!ctx.cr6.eq) goto loc_824AF238;
	// lwz r9,200(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 200);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x824af238
	if (ctx.cr6.eq) goto loc_824AF238;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(r22.u32, 1, ctx.xer);
	// bne cr6,0x824af238
	if (!ctx.cr6.eq) goto loc_824AF238;
	// lbz r30,110(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 110);
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(r30.u32, 6, ctx.xer);
	// bge cr6,0x824af414
	if (!ctx.cr6.lt) goto loc_824AF414;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824af16c
	if (ctx.cr6.eq) goto loc_824AF16C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// andi. r10,r11,2112
	ctx.r10.u64 = ctx.r11.u64 & 2112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x824af168
	if (ctx.cr0.eq) goto loc_824AF168;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824af16c
	if (ctx.cr6.eq) goto loc_824AF16C;
	// lwz r4,60(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 60);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// li r5,4515
	ctx.r5.s64 = 4515;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq 0x824af47c
	if (ctx.cr0.eq) goto loc_824AF47C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,544
	ctx.r6.s64 = ctx.r11.s64 + 544;
	// b 0x824af484
	goto loc_824AF484;
loc_824AF168:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_824AF16C:
	// addi r11,r30,266
	ctx.r11.s64 = r30.s64 + 266;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x824af48c
	if (!ctx.cr6.eq) goto loc_824AF48C;
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r19
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + r19.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824af48c
	if (!ctx.cr6.eq) goto loc_824AF48C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824af230
	if (ctx.cr6.eq) goto loc_824AF230;
	// addi r10,r30,260
	ctx.r10.s64 = r30.s64 + 260;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r10,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r10.u32);
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
	ctx.lr = 0x824AF1CC;
	sub_82478758(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824af200
	if (ctx.cr0.eq) goto loc_824AF200;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_824AF1E0:
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r3,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824af1e0
	if (ctx.cr6.lt) goto loc_824AF1E0;
loc_824AF200:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x824780d8
	ctx.lr = 0x824AF21C;
	sub_824780D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r14,356(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// stw r23,64(r31)
	REX_STORE_U32(r31.u32 + 64, r23.u32);
	// stw r21,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r21.u32);
loc_824AF230:
	// stwx r28,r29,r19
	REX_STORE_U32(r29.u32 + r19.u32, r28.u32);
	// b 0x824af3f8
	goto loc_824AF3F8;
loc_824AF238:
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(r22.u32, 2, ctx.xer);
	// bne cr6,0x824af400
	if (!ctx.cr6.eq) goto loc_824AF400;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824af2e4
	if (ctx.cr6.eq) goto loc_824AF2E4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(r30.u32, 6, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bge cr6,0x824af414
	if (!ctx.cr6.lt) goto loc_824AF414;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// andi. r11,r8,2112
	ctx.r11.u64 = ctx.r8.u64 & 2112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824af2e4
	if (ctx.cr0.eq) goto loc_824AF2E4;
	// addi r11,r30,266
	ctx.r11.s64 = r30.s64 + 266;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x824af2b4
	if (!ctx.cr6.eq) goto loc_824AF2B4;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r19
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r19.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824af2b4
	if (!ctx.cr6.eq) goto loc_824AF2B4;
	// addi r10,r30,260
	ctx.r10.s64 = r30.s64 + 260;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r10,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r10.u32);
	// b 0x824af3f0
	goto loc_824AF3F0;
loc_824AF2B4:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824af4a8
	if (!ctx.cr6.eq) goto loc_824AF4A8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824af3f0
	if (ctx.cr6.eq) goto loc_824AF3F0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4518
	ctx.r5.s64 = 4518;
	// addi r6,r11,440
	ctx.r6.s64 = ctx.r11.s64 + 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824af49c
	goto loc_824AF49C;
loc_824AF2E4:
	// lwz r7,76(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 76);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824af334
	if (ctx.cr6.eq) goto loc_824AF334;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// addi r10,r27,1064
	ctx.r10.s64 = r27.s64 + 1064;
loc_824AF2FC:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824af320
	if (!ctx.cr6.eq) goto loc_824AF320;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,0(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x824af334
	if (ctx.cr6.eq) goto loc_824AF334;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x824af334
	if (ctx.cr6.eq) goto loc_824AF334;
loc_824AF320:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824af2fc
	if (ctx.cr6.lt) goto loc_824AF2FC;
loc_824AF334:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824af4d4
	if (ctx.cr6.eq) goto loc_824AF4D4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824af3f0
	if (ctx.cr6.eq) goto loc_824AF3F0;
	// lhz r10,202(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 202);
	// cmplwi cr6,r10,260
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 260, ctx.xer);
	// beq cr6,0x824af35c
	if (ctx.cr6.eq) goto loc_824AF35C;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824af380
	if (!ctx.cr6.eq) goto loc_824AF380;
loc_824AF35C:
	// addi r10,r11,260
	ctx.r10.s64 = ctx.r11.s64 + 260;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,266
	ctx.r11.s64 = ctx.r11.s64 + 266;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwx r10,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r10.u32);
loc_824AF380:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	ctx.lr = 0x824AF398;
	sub_82478758(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824af3cc
	if (ctx.cr0.eq) goto loc_824AF3CC;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_824AF3AC:
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r3,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824af3ac
	if (ctx.cr6.lt) goto loc_824AF3AC;
loc_824AF3CC:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824780d8
	ctx.lr = 0x824AF3E4;
	sub_824780D8(ctx, base);
	// stw r30,12(r29)
	REX_STORE_U32(r29.u32 + 12, r30.u32);
	// stw r23,64(r31)
	REX_STORE_U32(r31.u32 + 64, r23.u32);
	// stw r21,64(r29)
	REX_STORE_U32(r29.u32 + 64, r21.u32);
loc_824AF3F0:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r19
	REX_STORE_U32(ctx.r11.u32 + r19.u32, r28.u32);
loc_824AF3F8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r23,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r23.u32);
loc_824AF400:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r25,r20
	ctx.cr6.compare<uint32_t>(r25.u32, r20.u32, ctx.xer);
	// blt cr6,0x824aefa0
	if (ctx.cr6.lt) goto loc_824AEFA0;
loc_824AF414:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplwi cr6,r22,3
	ctx.cr6.compare<uint32_t>(r22.u32, 3, ctx.xer);
	// blt cr6,0x824aef88
	if (ctx.cr6.lt) goto loc_824AEF88;
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824af528
	if (ctx.cr6.eq) goto loc_824AF528;
	// mr r31,r19
	r31.u64 = r19.u64;
loc_824AF434:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824af514
	if (!ctx.cr6.eq) goto loc_824AF514;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824AF448;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824af4e4
	if (ctx.cr0.eq) goto loc_824AF4E4;
	// bl 0x824773d0
	ctx.lr = 0x824AF454;
	sub_824773D0(ctx, base);
	// b 0x824af4e8
	goto loc_824AF4E8;
loc_824AF458:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4514
	ctx.r5.s64 = 4514;
	// addi r6,r11,424
	ctx.r6.s64 = ctx.r11.s64 + 424;
loc_824AF464:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_824AF46C:
	// bl 0x82489c30
	ctx.lr = 0x824AF470;
	sub_82489C30(ctx, base);
loc_824AF470:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824af590
	goto loc_824AF590;
loc_824AF47C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,312
	ctx.r6.s64 = ctx.r11.s64 + 312;
loc_824AF484:
	// bl 0x82489c30
	ctx.lr = 0x824AF488;
	sub_82489C30(ctx, base);
	// b 0x824af470
	goto loc_824AF470;
loc_824AF48C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,60(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 60);
	// li r5,4516
	ctx.r5.s64 = 4516;
	// addi r6,r11,224
	ctx.r6.s64 = ctx.r11.s64 + 224;
loc_824AF49C:
	// lbz r7,203(r27)
	ctx.r7.u64 = REX_LOAD_U8(r27.u32 + 203);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x824af484
	goto loc_824AF484;
loc_824AF4A8:
	// rlwinm. r11,r8,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,4517
	ctx.r5.s64 = 4517;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq 0x824af4c8
	if (ctx.cr0.eq) goto loc_824AF4C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,88
	ctx.r6.s64 = ctx.r11.s64 + 88;
	// b 0x824af46c
	goto loc_824AF46C;
loc_824AF4C8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// b 0x824af46c
	goto loc_824AF46C;
loc_824AF4D4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4519
	ctx.r5.s64 = 4519;
	// addi r6,r11,0
	ctx.r6.s64 = ctx.r11.s64 + 0;
	// b 0x824af464
	goto loc_824AF464;
loc_824AF4E4:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_824AF4E8:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824aefb8
	if (ctx.cr6.eq) goto loc_824AEFB8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82477b60
	ctx.lr = 0x824AF508;
	sub_82477B60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824785e8
	ctx.lr = 0x824AF514;
	sub_824785E8(ctx, base);
loc_824AF514:
	// lwz r11,60(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 60);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824af434
	if (ctx.cr6.lt) goto loc_824AF434;
loc_824AF528:
	// stw r11,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824af58c
	if (ctx.cr6.eq) goto loc_824AF58C;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
loc_824AF53C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824af584
	if (ctx.cr6.eq) goto loc_824AF584;
	// lwz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x824af584
	if (ctx.cr6.eq) goto loc_824AF584;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824af584
	if (ctx.cr6.eq) goto loc_824AF584;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r19
	REX_STORE_U32(ctx.r10.u32 + r19.u32, ctx.r9.u32);
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r14)
	REX_STORE_U32(r14.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r23,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r23.u32);
loc_824AF584:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824af53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AF53C;
loc_824AF58C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824AF590:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824E9598) {
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
	ctx.lr = 0x824E95A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824e95c0
	if (!ctx.cr6.lt) goto loc_824E95C0;
	// bl 0x826b40a0
	ctx.lr = 0x824E95C0;
	sub_826B40A0(ctx, base);
loc_824E95C0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r11,4
	r30.s64 = ctx.r11.s64 + 4;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r28,21
	r29.u64 = r28.u32 & 0x7FF;
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(r29.u32, 256, ctx.xer);
	// blt cr6,0x824e95e8
	if (ctx.cr6.lt) goto loc_824E95E8;
	// bl 0x826b40a0
	ctx.lr = 0x824E95E4;
	sub_826B40A0(ctx, base);
	// li r29,255
	r29.s64 = 255;
loc_824E95E8:
	// rlwimi r28,r28,12,21,23
	r28.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0x700) | (r28.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r28,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x824e95fc
	if (ctx.cr6.eq) goto loc_824E95FC;
	// bl 0x826b40a0
	ctx.lr = 0x824E95FC;
	sub_826B40A0(ctx, base);
loc_824E95FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,28
	ctx.r10.s64 = 28;
	// rlwimi r29,r11,16,0,15
	r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r29.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stwu r29,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, r29.u32);
	r31.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stwu r11,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r31.u32 = ea;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824EE408) {
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
	ctx.lr = 0x824EE410;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r10,-26736
	r29.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824ee454
	if (!ctx.cr6.eq) goto loc_824EE454;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26380
	ctx.r5.s64 = ctx.r11.s64 + -26380;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,621
	ctx.r7.s64 = 621;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE454;
	sub_824EA978(ctx, base);
loc_824EE454:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824ee478
	if (!ctx.cr6.eq) goto loc_824EE478;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26392
	ctx.r5.s64 = ctx.r11.s64 + -26392;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,622
	ctx.r7.s64 = 622;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE478;
	sub_824EA978(ctx, base);
loc_824EE478:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x824ee4c0
	if (ctx.cr6.eq) goto loc_824EE4C0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,-26404
	r27.s64 = ctx.r11.s64 + -26404;
loc_824EE488:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x824ee4c4
	if (ctx.cr6.eq) goto loc_824EE4C4;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824ee4b8
	if (!ctx.cr6.eq) goto loc_824EE4B8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,636
	ctx.r7.s64 = 636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE4B8;
	sub_824EA978(ctx, base);
loc_824EE4B8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x824ee488
	if (!ctx.cr6.eq) goto loc_824EE488;
loc_824EE4C0:
	// li r31,0
	r31.s64 = 0;
loc_824EE4C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824F08A0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824f08e4
	if (ctx.cr6.eq) goto loc_824F08E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-25192
	ctx.r6.s64 = ctx.r11.s64 + -25192;
	// addi r5,r10,-25232
	ctx.r5.s64 = ctx.r10.s64 + -25232;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,268
	ctx.r7.s64 = 268;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F08DC;
	sub_824EA978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824f08e8
	goto loc_824F08E8;
loc_824F08E4:
	// li r3,32
	ctx.r3.s64 = 32;
loc_824F08E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F1BE0) {
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
	ctx.lr = 0x824F1BE8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// beq cr6,0x824f1c00
	if (ctx.cr6.eq) goto loc_824F1C00;
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bne cr6,0x824f21a8
	if (!ctx.cr6.eq) goto loc_824F21A8;
loc_824F1C00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824f21a8
	if (ctx.cr6.eq) goto loc_824F21A8;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824f21a8
	if (ctx.cr6.eq) goto loc_824F21A8;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r5,48(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x824eac50
	ctx.lr = 0x824F1C34;
	sub_824EAC50(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-24720
	r26.s64 = ctx.r10.s64 + -24720;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f1c6c
	if (!ctx.cr6.eq) goto loc_824F1C6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24072
	ctx.r5.s64 = ctx.r11.s64 + -24072;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,291
	ctx.r7.s64 = 291;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1C6C;
	sub_824EA978(ctx, base);
loc_824F1C6C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f1ce8
	if (ctx.cr6.eq) goto loc_824F1CE8;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r29,15
	r29.s64 = 15;
	// addi r11,r11,-19872
	ctx.r11.s64 = ctx.r11.s64 + -19872;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r11,-24208
	r28.s64 = ctx.r11.s64 + -24208;
loc_824F1C90:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + -4);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824F1CA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824f1cdc
	if (ctx.cr6.eq) goto loc_824F1CDC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824f1cdc
	if (ctx.cr6.eq) goto loc_824F1CDC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824f1cdc
	if (ctx.cr6.eq) goto loc_824F1CDC;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,306
	ctx.r7.s64 = 306;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1CDC;
	sub_824EA978(ctx, base);
loc_824F1CDC:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x824f1c90
	if (!ctx.cr0.eq) goto loc_824F1C90;
loc_824F1CE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x824f1d10
	if (ctx.cr6.eq) goto loc_824F1D10;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24256
	ctx.r5.s64 = ctx.r11.s64 + -24256;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1D10;
	sub_824EA978(ctx, base);
loc_824F1D10:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f1d38
	if (!ctx.cr6.eq) goto loc_824F1D38;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24292
	ctx.r5.s64 = ctx.r11.s64 + -24292;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,316
	ctx.r7.s64 = 316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1D38;
	sub_824EA978(ctx, base);
loc_824F1D38:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f1d60
	if (!ctx.cr6.eq) goto loc_824F1D60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24324
	ctx.r5.s64 = ctx.r11.s64 + -24324;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,317
	ctx.r7.s64 = 317;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1D60;
	sub_824EA978(ctx, base);
loc_824F1D60:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f21a8
	if (ctx.cr6.eq) goto loc_824F21A8;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824f21a8
	if (ctx.cr6.eq) goto loc_824F21A8;
	// li r4,312
	ctx.r4.s64 = 312;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824F1D88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824f21a8
	if (ctx.cr0.eq) goto loc_824F21A8;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r11,r30,204
	ctx.r11.s64 = r30.s64 + 204;
	// addi r10,r10,-18056
	ctx.r10.s64 = ctx.r10.s64 + -18056;
	// li r6,5
	ctx.r6.s64 = 5;
loc_824F1DA0:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824F1DB0:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x824f1db0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F1DB0;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bne 0x824f1da0
	if (!ctx.cr0.eq) goto loc_824F1DA0;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r29,0
	r29.s64 = 0;
	// stw r11,304(r30)
	REX_STORE_U32(r30.u32 + 304, ctx.r11.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,308(r30)
	REX_STORE_U32(r30.u32 + 308, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r29,76(r30)
	REX_STORE_U32(r30.u32 + 76, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824F1DF0;
	sub_826A1E70(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a2ff8
	ctx.lr = 0x824F1E08;
	sub_825A2FF8(ctx, base);
	// stw r3,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r3.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a3190
	ctx.lr = 0x824F1E24;
	sub_825A3190(ctx, base);
	// stw r3,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r3.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a3328
	ctx.lr = 0x824F1E40;
	sub_825A3328(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// stw r3,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f1e6c
	if (!ctx.cr6.eq) goto loc_824F1E6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24348
	ctx.r5.s64 = ctx.r11.s64 + -24348;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,382
	ctx.r7.s64 = 382;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1E6C;
	sub_824EA978(ctx, base);
loc_824F1E6C:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f1e94
	if (!ctx.cr6.eq) goto loc_824F1E94;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24376
	ctx.r5.s64 = ctx.r11.s64 + -24376;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,383
	ctx.r7.s64 = 383;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1E94;
	sub_824EA978(ctx, base);
loc_824F1E94:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f1ebc
	if (!ctx.cr6.eq) goto loc_824F1EBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24404
	ctx.r5.s64 = ctx.r11.s64 + -24404;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1EBC;
	sub_824EA978(ctx, base);
loc_824F1EBC:
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a0ec8
	ctx.lr = 0x824F1ED0;
	sub_825A0EC8(ctx, base);
	// stw r3,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r3.u32);
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x824f1b58
	ctx.lr = 0x824F1EDC;
	sub_824F1B58(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x824ee118
	ctx.lr = 0x824F1EF0;
	sub_824EE118(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r3,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x825a5510
	ctx.lr = 0x824F1F34;
	sub_825A5510(ctx, base);
	// stw r3,200(r30)
	REX_STORE_U32(r30.u32 + 200, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-31152
	ctx.r11.s64 = ctx.r11.s64 + -31152;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r29,304(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 304);
	// lwz r28,120(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 120);
	// lwz r25,116(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lwz r9,92(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 92);
	// bl 0x825a5178
	ctx.lr = 0x824F1F84;
	sub_825A5178(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r3.u32);
	// lwz r7,308(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 308);
	// lwz r6,112(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x824f2e78
	ctx.lr = 0x824F1FA0;
	sub_824F2E78(ctx, base);
	// stw r3,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r8,200(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 200);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lwz r7,80(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r6,92(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 92);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a21a8
	ctx.lr = 0x824F1FC8;
	sub_825A21A8(ctx, base);
	// stw r3,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r3.u32);
	// lwz r7,92(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 92);
	// lwz r6,84(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a41f8
	ctx.lr = 0x824F1FE4;
	sub_825A41F8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r3.u32);
	// lwz r10,92(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 92);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,200(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 200);
	// lwz r7,84(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r6,80(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 80);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824f3880
	ctx.lr = 0x824F2018;
	sub_824F3880(ctx, base);
	// stw r3,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lwz r9,116(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lwz r8,88(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 88);
	// lwz r7,80(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a22d8
	ctx.lr = 0x824F2040;
	sub_825A22D8(ctx, base);
	// stw r3,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r7,92(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 92);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a0a38
	ctx.lr = 0x824F205C;
	sub_825A0A38(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 92);
	// stw r3,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f2088
	if (!ctx.cr6.eq) goto loc_824F2088;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24424
	ctx.r5.s64 = ctx.r11.s64 + -24424;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,487
	ctx.r7.s64 = 487;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2088;
	sub_824EA978(ctx, base);
loc_824F2088:
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f20b0
	if (!ctx.cr6.eq) goto loc_824F20B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24444
	ctx.r5.s64 = ctx.r11.s64 + -24444;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,488
	ctx.r7.s64 = 488;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F20B0;
	sub_824EA978(ctx, base);
loc_824F20B0:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f20d8
	if (!ctx.cr6.eq) goto loc_824F20D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24468
	ctx.r5.s64 = ctx.r11.s64 + -24468;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,489
	ctx.r7.s64 = 489;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F20D8;
	sub_824EA978(ctx, base);
loc_824F20D8:
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f2100
	if (!ctx.cr6.eq) goto loc_824F2100;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24492
	ctx.r5.s64 = ctx.r11.s64 + -24492;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,490
	ctx.r7.s64 = 490;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2100;
	sub_824EA978(ctx, base);
loc_824F2100:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f2128
	if (!ctx.cr6.eq) goto loc_824F2128;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24516
	ctx.r5.s64 = ctx.r11.s64 + -24516;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,491
	ctx.r7.s64 = 491;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2128;
	sub_824EA978(ctx, base);
loc_824F2128:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f2150
	if (!ctx.cr6.eq) goto loc_824F2150;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24540
	ctx.r5.s64 = ctx.r11.s64 + -24540;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,492
	ctx.r7.s64 = 492;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2150;
	sub_824EA978(ctx, base);
loc_824F2150:
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f2178
	if (!ctx.cr6.eq) goto loc_824F2178;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24564
	ctx.r5.s64 = ctx.r11.s64 + -24564;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,493
	ctx.r7.s64 = 493;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2178;
	sub_824EA978(ctx, base);
loc_824F2178:
	// lwz r11,200(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f21a0
	if (!ctx.cr6.eq) goto loc_824F21A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-24584
	ctx.r5.s64 = ctx.r11.s64 + -24584;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,494
	ctx.r7.s64 = 494;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F21A0;
	sub_824EA978(ctx, base);
loc_824F21A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824f21ac
	goto loc_824F21AC;
loc_824F21A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F21AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825299E8) {
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
	ctx.lr = 0x825299F0;
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
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82529A24;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82529a48
	if (ctx.cr6.eq) goto loc_82529A48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82529A44;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82529A48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82529A50;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82529a74
	if (ctx.cr6.eq) goto loc_82529A74;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82529A70;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82529A74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82529A7C;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// beq cr6,0x82529aa0
	if (ctx.cr6.eq) goto loc_82529AA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82529A9C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82529AA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82529AA8;
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
	ctx.lr = 0x82529AD8;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82532070) {
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
	ctx.lr = 0x82532078;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x82503a60
	ctx.lr = 0x825320A4;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// beq 0x82532184
	if (ctx.cr0.eq) goto loc_82532184;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r28,r11,18,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r31,r10,18,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// bl 0x82531ba8
	ctx.lr = 0x825320D0;
	sub_82531BA8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825321c4
	if (ctx.cr0.eq) goto loc_825321C4;
	// ld r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// beq cr6,0x82532158
	if (ctx.cr6.eq) goto loc_82532158;
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
loc_82532100:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// rlwinm r6,r11,29,3,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r8,r8,58
	ctx.r8.u64 = ctx.r8.u64 & 0x3F;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// clrldi r3,r11,58
	ctx.r3.u64 = ctx.r11.u64 & 0x3F;
	// sld r8,r4,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r4.u64 << (ctx.r8.u8 & 0x7F));
	// ldx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r5.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// sld r6,r5,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r5.u64 << (ctx.r3.u8 & 0x7F));
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// srd r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r3.u8 & 0x7F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82532100
	if (ctx.cr6.lt) goto loc_82532100;
loc_82532158:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r27,r11,29
	r27.u64 = ctx.r11.u32 & 0x7;
	// b 0x825321c4
	goto loc_825321C4;
loc_82532184:
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// li r28,0
	r28.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// rlwinm r10,r10,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825321a0
	if (ctx.cr0.eq) goto loc_825321A0;
	// li r28,2
	r28.s64 = 2;
loc_825321A0:
	// rlwinm. r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825321ac
	if (ctx.cr0.eq) goto loc_825321AC;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
loc_825321AC:
	// clrlwi. r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825321b8
	if (ctx.cr0.eq) goto loc_825321B8;
	// li r31,2
	r31.s64 = 2;
loc_825321B8:
	// rlwinm. r11,r10,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825321c4
	if (ctx.cr0.eq) goto loc_825321C4;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
loc_825321C4:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// subf r11,r27,r31
	ctx.r11.u64 = r31.u64 - r27.u64;
	// rlwimi r10,r27,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// stw r10,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8254F428) {
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
	ctx.lr = 0x8254F430;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x8254f50c
	if (ctx.cr6.eq) goto loc_8254F50C;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x8254f4f8
	if (ctx.cr6.eq) goto loc_8254F4F8;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// beq cr6,0x8254f4f8
	if (ctx.cr6.eq) goto loc_8254F4F8;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x8254f504
	if (ctx.cr6.eq) goto loc_8254F504;
	// rlwinm r31,r10,31,28,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// bl 0x8250aed8
	ctx.lr = 0x8254F474;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8254f4f8
	if (ctx.cr6.eq) goto loc_8254F4F8;
	// lwz r10,652(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 652);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8254f4f8
	if (ctx.cr6.eq) goto loc_8254F4F8;
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254f4f8
	if (!ctx.cr0.eq) goto loc_8254F4F8;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254f4d4
	if (!ctx.cr0.eq) goto loc_8254F4D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254f4d4
	if (ctx.cr0.eq) goto loc_8254F4D4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8254f4e0
	if (!ctx.cr6.gt) goto loc_8254F4E0;
loc_8254F4D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8254F4DC;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8254F4E0:
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
loc_8254F4F8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
loc_8254F504:
	// bl 0x82528fd8
	ctx.lr = 0x8254F508;
	sub_82528FD8(ctx, base);
	// b 0x8254f4f8
	goto loc_8254F4F8;
loc_8254F50C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82548eb8
	ctx.lr = 0x8254F518;
	sub_82548EB8(ctx, base);
loc_8254F518:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r11,27,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1C000;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8254f6b8
	if (!ctx.cr6.gt) goto loc_8254F6B8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825495f8
	ctx.lr = 0x8254F538;
	sub_825495F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8254F53C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82548eb8
	ctx.lr = 0x8254F548;
	sub_82548EB8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254f62c
	if (ctx.cr0.eq) goto loc_8254F62C;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// rlwimi r10,r11,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x82516448
	ctx.lr = 0x8254F580;
	sub_82516448(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254f5b4
	if (!ctx.cr0.eq) goto loc_8254F5B4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8254f5b4
	if (ctx.cr0.eq) goto loc_8254F5B4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8254f5c0
	if (!ctx.cr6.gt) goto loc_8254F5C0;
loc_8254F5B4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8254F5C0;
	sub_8251FE00(ctx, base);
loc_8254F5C0:
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
	// lwz r11,708(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254f62c
	if (ctx.cr6.eq) goto loc_8254F62C;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm. r11,r10,0,13,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254f62c
	if (ctx.cr0.eq) goto loc_8254F62C;
	// lwz r9,708(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 708);
	// rlwinm r11,r10,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// stwx r31,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r31.u32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,708(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 708);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,708(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 708);
	// stwx r31,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r10,708(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 708);
	// stwx r31,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r31.u32);
loc_8254F62C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825c2288
	ctx.lr = 0x8254F640;
	sub_825C2288(ctx, base);
	// lwz r11,652(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254f6b0
	if (ctx.cr6.eq) goto loc_8254F6B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254f68c
	if (!ctx.cr0.eq) goto loc_8254F68C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254f68c
	if (ctx.cr0.eq) goto loc_8254F68C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8254f698
	if (!ctx.cr6.gt) goto loc_8254F698;
loc_8254F68C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8254F694;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8254F698:
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
loc_8254F6B0:
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x8254f518
	goto loc_8254F518;
loc_8254F6B8:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r3,r10,13,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r4,r28,44
	ctx.r4.s64 = r28.s64 + 44;
loc_8254F6CC:
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8254f4f8
	if (!ctx.cr6.lt) goto loc_8254F4F8;
	// lwzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r8,r7,27
	ctx.r8.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r7,r7,27,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x3;
	// stwx r8,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r8.u32);
	// stwx r7,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r7.u32);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r9.u32);
	// beq cr6,0x8254f758
	if (ctx.cr6.eq) goto loc_8254F758;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254F710:
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r10,r31
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8254f740
	if (!ctx.cr6.eq) goto loc_8254F740;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lwzx r31,r10,r31
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8254f740
	if (!ctx.cr6.eq) goto loc_8254F740;
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// lwzx r31,r10,r31
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8254f750
	if (ctx.cr6.eq) goto loc_8254F750;
loc_8254F740:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8254f710
	if (ctx.cr6.lt) goto loc_8254F710;
loc_8254F750:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8254f764
	if (ctx.cr6.lt) goto loc_8254F764;
loc_8254F758:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8254f6cc
	goto loc_8254F6CC;
loc_8254F764:
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8254f794
	if (ctx.cr6.eq) goto loc_8254F794;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8254F794:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82557cc8
	ctx.lr = 0x8254F7A4;
	sub_82557CC8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r28,4
	r27.s64 = r28.s64 + 4;
loc_8254F7AC:
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8254f53c
	if (ctx.cr6.eq) goto loc_8254F53C;
	// lwz r29,16(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8254f8c4
	if (ctx.cr6.eq) goto loc_8254F8C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8254f88c
	if (ctx.cr0.eq) goto loc_8254F88C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,652(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254f88c
	if (ctx.cr6.eq) goto loc_8254F88C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254f88c
	if (!ctx.cr0.eq) goto loc_8254F88C;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254f868
	if (!ctx.cr0.eq) goto loc_8254F868;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254f868
	if (ctx.cr0.eq) goto loc_8254F868;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8254f874
	if (!ctx.cr6.gt) goto loc_8254F874;
loc_8254F868:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8254F870;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8254F874:
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
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
loc_8254F88C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8254f8a4
	goto loc_8254F8A4;
loc_8254F89C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8254F8A4:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x8254f89c
	if (!ctx.cr6.eq) goto loc_8254F89C;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
loc_8254F8C4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8254f7ac
	if (!ctx.cr6.eq) goto loc_8254F7AC;
	// addi r27,r30,8
	r27.s64 = r30.s64 + 8;
	// b 0x8254f7ac
	goto loc_8254F7AC;
}

DEFINE_REX_FUNC(sub_8257FD20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8257FD28;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x824ff930
	ctx.lr = 0x8257FD40;
	sub_824FF930(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82447818
	ctx.lr = 0x8257FD4C;
	sub_82447818(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,24(r29)
	REX_STORE_U32(r29.u32 + 24, r31.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,28(r29)
	REX_STORE_U32(r29.u32 + 28, r30.u32);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825806E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,972
	ctx.r11.s64 = ctx.r11.s64 + 972;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82580F80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82580F88;
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
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82580FB0;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82580fd4
	if (ctx.cr6.eq) goto loc_82580FD4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82580FD0;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82580FD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82580FDC;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82581000
	if (ctx.cr6.eq) goto loc_82581000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82580FFC;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581000:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581008;
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

DEFINE_REX_FUNC(sub_82583608) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82583610;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82583644
	if (!ctx.cr6.eq) goto loc_82583644;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7dc0
	ctx.lr = 0x82583640;
	sub_824F7DC0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_82583644:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8258367c
	if (!ctx.cr6.eq) goto loc_8258367C;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mulli r10,r28,40
	ctx.r10.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(40));
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r4,r11,0,15,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x82583674;
	sub_824F7DC0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
loc_8258367C:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82586148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82586150;
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
	ctx.lr = 0x82586178;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586188;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586194;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825861A4;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825861B0;
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

DEFINE_REX_FUNC(sub_8258A2B8) {
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
	ctx.lr = 0x8258A2C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824f7678
	ctx.lr = 0x8258A2D4;
	sub_824F7678(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r29,1
	ctx.r11.u64 = r29.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,576(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 576);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8258A314:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258a330
	if (ctx.cr6.eq) goto loc_8258A330;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8258a334
	if (!ctx.cr6.eq) goto loc_8258A334;
loc_8258A330:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8258A334:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258a3a4
	if (!ctx.cr0.eq) goto loc_8258A3A4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553828
	ctx.lr = 0x8258A344;
	sub_82553828(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// ld r28,0(r3)
	r28.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258a378
	if (!ctx.cr0.eq) goto loc_8258A378;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258a378
	if (ctx.cr0.eq) goto loc_8258A378;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8258a384
	if (!ctx.cr6.gt) goto loc_8258A384;
loc_8258A378:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82531a20
	ctx.lr = 0x8258A384;
	sub_82531A20(ctx, base);
loc_8258A384:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stdx r28,r11,r3
	REX_STORE_U64(ctx.r11.u32 + ctx.r3.u32, r28.u64);
	// b 0x8258a314
	goto loc_8258A314;
loc_8258A3A4:
	// lwz r3,580(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 580);
	// bl 0x825897d0
	ctx.lr = 0x8258A3AC;
	sub_825897D0(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwimi r10,r11,3,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwimi r11,r10,0,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825A22D8) {
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
	ctx.lr = 0x825A22E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-11824
	r28.s64 = ctx.r10.s64 + -11824;
	// bne cr6,0x825a2338
	if (!ctx.cr6.eq) goto loc_825A2338;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26440
	ctx.r5.s64 = ctx.r11.s64 + -26440;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,127
	ctx.r7.s64 = 127;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2338;
	sub_824EA978(ctx, base);
loc_825A2338:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825a235c
	if (!ctx.cr6.eq) goto loc_825A235C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26452
	ctx.r5.s64 = ctx.r11.s64 + -26452;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A235C;
	sub_824EA978(ctx, base);
loc_825A235C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x825a2380
	if (!ctx.cr6.eq) goto loc_825A2380;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-11836
	ctx.r5.s64 = ctx.r11.s64 + -11836;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,129
	ctx.r7.s64 = 129;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2380;
	sub_824EA978(ctx, base);
loc_825A2380:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x825a23a4
	if (!ctx.cr6.eq) goto loc_825A23A4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-11848
	ctx.r5.s64 = ctx.r11.s64 + -11848;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,135
	ctx.r7.s64 = 135;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A23A4;
	sub_824EA978(ctx, base);
loc_825A23A4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x825a23c8
	if (!ctx.cr6.eq) goto loc_825A23C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-22900
	ctx.r5.s64 = ctx.r11.s64 + -22900;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,136
	ctx.r7.s64 = 136;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A23C8;
	sub_824EA978(ctx, base);
loc_825A23C8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x825a23ec
	if (!ctx.cr6.eq) goto loc_825A23EC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-11972
	ctx.r5.s64 = ctx.r11.s64 + -11972;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,137
	ctx.r7.s64 = 137;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A23EC;
	sub_824EA978(ctx, base);
loc_825A23EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825a2410
	if (!ctx.cr6.eq) goto loc_825A2410;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-11856
	ctx.r5.s64 = ctx.r11.s64 + -11856;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,138
	ctx.r7.s64 = 138;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2410;
	sub_824EA978(ctx, base);
loc_825A2410:
	// li r4,28
	ctx.r4.s64 = 28;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x825A2420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825a2444
	if (!ctx.cr0.eq) goto loc_825A2444;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-11872
	ctx.r5.s64 = ctx.r11.s64 + -11872;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,145
	ctx.r7.s64 = 145;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A2444;
	sub_824EA978(ctx, base);
loc_825A2444:
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r24,16(r31)
	REX_STORE_U32(r31.u32 + 16, r24.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r23,20(r31)
	REX_STORE_U32(r31.u32 + 20, r23.u32);
	// bl 0x825a5c38
	ctx.lr = 0x825A2474;
	sub_825A5C38(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825A7A98) {
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
	// bl 0x825a60d8
	ctx.lr = 0x825A7AB8;
	sub_825A60D8(ctx, base);
	// li r11,73
	ctx.r11.s64 = 73;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,16,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// sth r10,6(r30)
	REX_STORE_U16(r30.u32 + 6, ctx.r10.u16);
	// li r12,-18038
	ctx.r12.s64 = -18038;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r9,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// ori r9,r9,12546
	ctx.r9.u64 = ctx.r9.u64 | 12546;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r8,r9,24,28,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,4,24,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,4,20,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r8,r9,0,17,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r8.u64 & 0x8000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r8,r9,0,12,10
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF) | (ctx.r8.u64 & 0x100000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a7b98
	if (ctx.cr0.eq) goto loc_825A7B98;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A7B98:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r12,-18263
	ctx.r12.s64 = -18263;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// ori r9,r9,12321
	ctx.r9.u64 = ctx.r9.u64 | 12321;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r8,r9,28,28,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r9,r8,28,24,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r9,r8,8,20,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r9,r8,0,16,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r9,r8,0,11,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000) | (ctx.r9.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a7c44
	if (ctx.cr0.eq) goto loc_825A7C44;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A7C44:
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r9,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r9,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// oris r9,r7,64
	ctx.r9.u64 = ctx.r7.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r8,r9,0,30,27
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3) | (ctx.r8.u64 & 0xC);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwimi r8,r9,0,28,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF) | (ctx.r8.u64 & 0x30);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a7cd8
	if (ctx.cr0.eq) goto loc_825A7CD8;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A7CD8:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r12,-18263
	ctx.r12.s64 = -18263;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r9,r8,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// ori r9,r9,12321
	ctx.r9.u64 = ctx.r9.u64 | 12321;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,24,28,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,4,24,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,4,20,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,0,17,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r9.u64 & 0x8000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r8,r9,0,12,10
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF) | (ctx.r8.u64 & 0x100000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a7d80
	if (ctx.cr0.eq) goto loc_825A7D80;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A7D80:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r12,-18038
	ctx.r12.s64 = -18038;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// ori r9,r9,12546
	ctx.r9.u64 = ctx.r9.u64 | 12546;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r9,r8,28,28,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r9,r8,28,24,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r9,r8,8,20,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r9,r8,0,16,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwimi r9,r8,0,11,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000) | (ctx.r9.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a7e28
	if (ctx.cr0.eq) goto loc_825A7E28;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A7E28:
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// li r9,17
	ctx.r9.s64 = 17;
	// li r8,5971
	ctx.r8.s64 = 5971;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwimi r10,r8,3,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825C4BA0) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x825c4c0c
	if (ctx.cr6.eq) goto loc_825C4C0C;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x825c4bd4
	if (ctx.cr6.eq) goto loc_825C4BD4;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x825c4bd8
	if (!ctx.cr6.eq) goto loc_825C4BD8;
loc_825C4BD4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825C4BD8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c4c0c
	if (!ctx.cr0.eq) goto loc_825C4C0C;
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// beq cr6,0x825c4c0c
	if (ctx.cr6.eq) goto loc_825C4C0C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x825c3328
	ctx.lr = 0x825C4BFC;
	sub_825C3328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x825c4c18
	goto loc_825C4C18;
loc_825C4C0C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825c28f8
	ctx.lr = 0x825C4C18;
	sub_825C28F8(ctx, base);
loc_825C4C18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825C6E00) {
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
	ctx.lr = 0x825C6E08;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,568
	ctx.r11.s64 = ctx.r11.s64 + 568;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r28,r3,60
	r28.s64 = ctx.r3.s64 + 60;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// bl 0x826a1e70
	ctx.lr = 0x825C6E60;
	sub_826A1E70(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// beq cr6,0x825c6e7c
	if (ctx.cr6.eq) goto loc_825C6E7C;
	// addi r11,r11,-28584
	ctx.r11.s64 = ctx.r11.s64 + -28584;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// b 0x825c6e80
	goto loc_825C6E80;
loc_825C6E7C:
	// addi r10,r11,-28584
	ctx.r10.s64 = ctx.r11.s64 + -28584;
loc_825C6E80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// addic r10,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// rlwinm r7,r30,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// subfe r6,r10,r30
	temp.u8 = (~ctx.r10.u32 + r30.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r7,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r7.u32);
	// stw r6,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 76);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r9,72(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 72);
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x825c6f7c
	if (ctx.cr6.eq) goto loc_825C6F7C;
	// lwz r10,76(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 76);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r3,r10,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// rlwinm r5,r10,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// rlwinm r10,r10,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f0,20328(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20328);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r31,36
	ctx.r9.s64 = r31.s64 + 36;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r5,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// stw r8,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r8.u32);
loc_825C6F7C:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// bne cr6,0x825c6f9c
	if (!ctx.cr6.eq) goto loc_825C6F9C;
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r10,r10,2885
	ctx.r10.u64 = ctx.r10.u64 | 2885;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825c6f9c
	if (ctx.cr6.eq) goto loc_825C6F9C;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_825C6F9C:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// bne cr6,0x825c6fa8
	if (!ctx.cr6.eq) goto loc_825C6FA8;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_825C6FA8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// subf r6,r9,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r9.u64;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mullw r3,r5,r7
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// stw r5,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r5.u32);
	// stw r6,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r6.u32);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// subf r6,r8,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r8.u64;
	// stw r6,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r6.u32);
	// beq cr6,0x825c7034
	if (ctx.cr6.eq) goto loc_825C7034;
	// mullw r7,r10,r7
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r9,r4
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_825C7034:
	// lwz r10,68(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825c7080
	if (ctx.cr6.eq) goto loc_825C7080;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c7060
	if (!ctx.cr6.gt) goto loc_825C7060;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825C7060:
	// bl 0x822f6280
	ctx.lr = 0x825C7064;
	sub_822F6280(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a2e60
	ctx.lr = 0x825C707C;
	sub_826A2E60(ctx, base);
	// b 0x825c7084
	goto loc_825C7084;
loc_825C7080:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
loc_825C7084:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D3568) {
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
	ctx.lr = 0x825D3570;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d35b0
	if (!ctx.cr6.eq) goto loc_825D35B0;
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
	// li r7,2102
	ctx.r7.s64 = 2102;
	// bl 0x824ea978
	ctx.lr = 0x825D35B0;
	sub_824EA978(ctx, base);
loc_825D35B0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D35C0;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d3628
	if (!ctx.cr6.eq) goto loc_825D3628;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d35e4
	if (ctx.cr6.eq) goto loc_825D35E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D35E4;
	sub_824F0950(ctx, base);
loc_825D35E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d3620
	if (ctx.cr6.eq) goto loc_825D3620;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d3620
	if (ctx.cr6.eq) goto loc_825D3620;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
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
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,188(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// bctrl 
	ctx.lr = 0x825D3620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3620:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d3684
	goto loc_825D3684;
loc_825D3628:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d3644
	if (ctx.cr6.eq) goto loc_825D3644;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D3644;
	sub_824F0950(ctx, base);
loc_825D3644:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d3680
	if (ctx.cr6.eq) goto loc_825D3680;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d3680
	if (ctx.cr6.eq) goto loc_825D3680;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
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
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,188(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// bctrl 
	ctx.lr = 0x825D3680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3680:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D3684:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D69F8) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825a27b8
	ctx.lr = 0x825D6A1C;
	sub_825A27B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825D81A0) {
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
	ctx.lr = 0x825D81A8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825d8158
	ctx.lr = 0x825D81B4;
	sub_825D8158(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,172(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 172);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stb r11,2073(r30)
	REX_STORE_U8(r30.u32 + 2073, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x825f7d60
	ctx.lr = 0x825D81D0;
	sub_825F7D60(ctx, base);
	// b 0x825d82b0
	goto loc_825D82B0;
loc_825D81D4:
	// li r26,0
	r26.s64 = 0;
	// addi r25,r11,32
	r25.s64 = ctx.r11.s64 + 32;
loc_825D81DC:
	// cntlzw r11,r26
	ctx.r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r27,r11,21
	r27.s64 = ctx.r11.s64 + 21;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bne cr6,0x825d829c
	if (!ctx.cr6.eq) goto loc_825D829C;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d829c
	if (!ctx.cr6.eq) goto loc_825D829C;
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825D8210;
	sub_825F9AD0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D8220;
	sub_825F9F38(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D8230;
	sub_825F9F38(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_825D8234:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D8254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// blt cr6,0x825d8234
	if (ctx.cr6.lt) goto loc_825D8234;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D8270;
	sub_825F9F38(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,172(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825D8280;
	sub_825E7538(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D8290;
	sub_825F9F38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825D829C;
	sub_825FCB18(ctx, base);
loc_825D829C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x825d81dc
	if (ctx.cr6.lt) goto loc_825D81DC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825f7ca8
	ctx.lr = 0x825D82B0;
	sub_825F7CA8(ctx, base);
loc_825D82B0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bne cr6,0x825d81d4
	if (!ctx.cr6.eq) goto loc_825D81D4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825E3420) {
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
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E3444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e346c
	if (ctx.cr0.eq) goto loc_825E346C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e3370
	ctx.lr = 0x825E3454;
	sub_825E3370(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e346c
	if (ctx.cr0.eq) goto loc_825E346C;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x825e3470
	if (ctx.cr0.eq) goto loc_825E3470;
loc_825E346C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E3470:
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

DEFINE_REX_FUNC(sub_825E6A00) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x825e6a60
	if (!ctx.cr6.gt) goto loc_825E6A60;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_825E6A18:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825e6a2c
	if (!ctx.cr6.eq) goto loc_825E6A2C;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x825e6a50
	goto loc_825E6A50;
loc_825E6A2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E6A30:
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x825e6a30
	if (ctx.cr6.lt) goto loc_825E6A30;
loc_825E6A50:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x825e6a18
	if (ctx.cr6.lt) goto loc_825E6A18;
loc_825E6A60:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EA4B0) {
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
	ctx.lr = 0x825EA4B8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r25,1
	r25.s64 = 1;
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lbz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 164);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA4EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x825ea550
	if (ctx.cr6.lt) goto loc_825EA550;
	// li r29,204
	r29.s64 = 204;
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// addi r27,r31,-124
	r27.s64 = r31.s64 + -124;
loc_825EA500:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 152);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r11,158(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 158);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r11,8(r28)
	ea = 8 + r28.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r28.u32 = ea;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stwx r11,r27,r29
	REX_STORE_U32(r27.u32 + r29.u32, ctx.r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x825ea500
	if (!ctx.cr6.gt) goto loc_825EA500;
loc_825EA550:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825ea648
	if (ctx.cr0.eq) goto loc_825EA648;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x825ea5a4
	if (ctx.cr6.lt) goto loc_825EA5A4;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
loc_825EA588:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825ea640
	if (ctx.cr6.eq) goto loc_825EA640;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x825ea588
	if (!ctx.cr6.gt) goto loc_825EA588;
loc_825EA5A4:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_825EA5A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ea5d4
	if (!ctx.cr0.eq) goto loc_825EA5D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,14672
	ctx.r6.s64 = ctx.r11.s64 + 14672;
	// addi r5,r10,14632
	ctx.r5.s64 = ctx.r10.s64 + 14632;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,677
	ctx.r7.s64 = 677;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EA5D4;
	sub_824EA978(ctx, base);
loc_825EA5D4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825ea844
	if (ctx.cr6.lt) goto loc_825EA844;
	// li r10,4
	ctx.r10.s64 = 4;
loc_825EA5EC:
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r8,r10,25
	ctx.r8.s64 = ctx.r10.s64 + 25;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825EA5FC:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r9,91
	ctx.r9.s64 = ctx.r9.s64 + 91;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stwx r9,r5,r31
	REX_STORE_U32(ctx.r5.u32 + r31.u32, ctx.r9.u32);
	// bdnz 0x825ea5fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825EA5FC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825ea5ec
	if (!ctx.cr6.gt) goto loc_825EA5EC;
	// b 0x825ea844
	goto loc_825EA844;
loc_825EA640:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x825ea5a8
	goto loc_825EA5A8;
loc_825EA648:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA660;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x825ea740
	if (ctx.cr6.lt) goto loc_825EA740;
	// li r29,29
	r29.s64 = 29;
loc_825EA670:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,3(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825f15c0
	ctx.lr = 0x825EA690;
	sub_825F15C0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r5,2736(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825f1ad8
	ctx.lr = 0x825EA6AC;
	sub_825F1AD8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r30,r26
	r30.u64 = r26.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
loc_825EA6BC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ea370
	ctx.lr = 0x825EA6C8;
	sub_825EA370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825ea704
	if (ctx.cr0.eq) goto loc_825EA704;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA6EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r11.u32);
	// b 0x825ea710
	goto loc_825EA710;
loc_825EA704:
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r26.u32);
loc_825EA710:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x825ea6bc
	if (ctx.cr6.lt) goto loc_825EA6BC;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA738;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x825ea670
	if (!ctx.cr6.gt) goto loc_825EA670;
loc_825EA740:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// rlwinm. r10,r10,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ea790
	if (ctx.cr0.eq) goto loc_825EA790;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
loc_825EA790:
	// mr r30,r26
	r30.u64 = r26.u64;
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
loc_825EA798:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA7B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825ea7f4
	if (ctx.cr6.eq) goto loc_825EA7F4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x825ea7e8
	if (ctx.cr6.eq) goto loc_825EA7E8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x825ea7e0
	if (ctx.cr6.eq) goto loc_825EA7E0;
	// ble cr6,0x825ea834
	if (!ctx.cr6.gt) goto loc_825EA834;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bgt cr6,0x825ea834
	if (ctx.cr6.gt) goto loc_825EA834;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// b 0x825ea834
	goto loc_825EA834;
loc_825EA7E0:
	// stw r25,0(r29)
	REX_STORE_U32(r29.u32 + 0, r25.u32);
	// b 0x825ea834
	goto loc_825EA834;
loc_825EA7E8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x825ea834
	goto loc_825EA834;
loc_825EA7F4:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,20(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
loc_825EA834:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x825ea798
	if (ctx.cr6.lt) goto loc_825EA798;
loc_825EA844:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,168
	ctx.r4.s64 = ctx.r11.s64 + 168;
	// bl 0x826a1e70
	ctx.lr = 0x825EA858;
	sub_826A1E70(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EA86C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ea88c
	if (ctx.cr0.eq) goto loc_825EA88C;
	// stw r26,212(r31)
	REX_STORE_U32(r31.u32 + 212, r26.u32);
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r5,30
	ctx.r5.s64 = 30;
	// lwz r4,184(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x826a1e70
	ctx.lr = 0x825EA88C;
	sub_826A1E70(ctx, base);
loc_825EA88C:
	// stb r25,264(r31)
	REX_STORE_U8(r31.u32 + 264, r25.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82607208) {
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
	ctx.lr = 0x82607210;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d8668
	ctx.lr = 0x8260722C;
	sub_825D8668(ctx, base);
	// stw r3,180(r27)
	REX_STORE_U32(r27.u32 + 180, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825db640
	ctx.lr = 0x82607238;
	sub_825DB640(ctx, base);
	// addi r18,r27,128
	r18.s64 = r27.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r19,1
	r19.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// mr r21,r19
	r21.u64 = r19.u64;
	// bl 0x825f74b8
	ctx.lr = 0x82607250;
	sub_825F74B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x826074dc
	if (ctx.cr6.lt) goto loc_826074DC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r22,r31,4
	r22.s64 = r31.s64 + 4;
	// addi r20,r11,-17760
	r20.s64 = ctx.r11.s64 + -17760;
loc_82607264:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r31,0(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d8668
	ctx.lr = 0x82607278;
	sub_825D8668(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d8668
	ctx.lr = 0x8260728C;
	sub_825D8668(ctx, base);
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d8668
	ctx.lr = 0x826072A0;
	sub_825D8668(ctx, base);
	// lwz r26,28(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r23,100(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// b 0x826074b8
	goto loc_826074B8;
loc_826072B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826074a8
	if (ctx.cr0.eq) goto loc_826074A8;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826072D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826074a8
	if (!ctx.cr0.eq) goto loc_826074A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_826072E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82607414
	if (!ctx.cr0.eq) goto loc_82607414;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826073fc
	if (ctx.cr0.eq) goto loc_826073FC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x826073b0
	if (ctx.cr6.lt) goto loc_826073B0;
	// addi r28,r31,236
	r28.s64 = r31.s64 + 236;
loc_8260730C:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82607344
	if (ctx.cr6.eq) goto loc_82607344;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82607344
	if (!ctx.cr0.eq) goto loc_82607344;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r10,r20,4
	ctx.r10.s64 = r20.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// bne 0x82607348
	if (!ctx.cr0.eq) goto loc_82607348;
loc_82607344:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82607348:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260739c
	if (ctx.cr0.eq) goto loc_8260739C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fa588
	ctx.lr = 0x82607360;
	sub_825FA588(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8260739c
	if (!ctx.cr0.eq) goto loc_8260739C;
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// srw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8260739c
	if (!ctx.cr0.eq) goto loc_8260739C;
	// lwzx r9,r11,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// slw r10,r19,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r10.u32);
loc_8260739C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8260730c
	if (!ctx.cr6.gt) goto loc_8260730C;
loc_826073B0:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826073fc
	if (ctx.cr0.eq) goto loc_826073FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7ae0
	ctx.lr = 0x826073C4;
	sub_825D7AE0(ctx, base);
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,180(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 180);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x826073fc
	if (!ctx.cr0.eq) goto loc_826073FC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_826073FC:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bne cr6,0x826072e4
	if (!ctx.cr6.eq) goto loc_826072E4;
loc_82607414:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8260741C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826074a8
	if (!ctx.cr0.eq) goto loc_826074A8;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82607490
	if (ctx.cr0.eq) goto loc_82607490;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82607460
	if (ctx.cr6.eq) goto loc_82607460;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82607460
	if (!ctx.cr0.eq) goto loc_82607460;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r9,r20,4
	ctx.r9.s64 = r20.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// bne 0x82607464
	if (!ctx.cr0.eq) goto loc_82607464;
loc_82607460:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82607464:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82607490
	if (ctx.cr0.eq) goto loc_82607490;
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r25
	REX_STORE_U32(ctx.r10.u32 + r25.u32, ctx.r9.u32);
loc_82607490:
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// bne cr6,0x8260741c
	if (!ctx.cr6.eq) goto loc_8260741C;
loc_826074A8:
	// lwz r11,228(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 228);
	// lwz r26,8(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_826074B8:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826072b8
	if (!ctx.cr6.eq) goto loc_826072B8;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// bl 0x825f74b8
	ctx.lr = 0x826074D4;
	sub_825F74B8(ctx, base);
	// cmpw cr6,r21,r3
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82607264
	if (!ctx.cr6.gt) goto loc_82607264;
loc_826074DC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825db6e8
	ctx.lr = 0x826074E4;
	sub_825DB6E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_826074E8:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r19
	r30.u64 = r19.u64;
	// bl 0x825f74b8
	ctx.lr = 0x826074F8;
	sub_825F74B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x82607658
	if (ctx.cr6.lt) goto loc_82607658;
	// addi r29,r27,4
	r29.s64 = r27.s64 + 4;
loc_82607504:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260751C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82607640
	if (!ctx.cr0.eq) goto loc_82607640;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82607554
	if (!ctx.cr6.gt) goto loc_82607554;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_8260753C:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8260753c
	if (ctx.cr6.lt) goto loc_8260753C;
loc_82607554:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_82607564:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8260757c
	if (!ctx.cr6.gt) goto loc_8260757C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82607588
	goto loc_82607588;
loc_8260757C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// lwzx r7,r10,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_82607588:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82607624
	if (ctx.cr0.eq) goto loc_82607624;
	// lwz r8,100(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 100);
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x826075dc
	if (ctx.cr0.eq) goto loc_826075DC;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x826075d4
	if (!ctx.cr6.gt) goto loc_826075D4;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_826075B8:
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x826075b8
	if (ctx.cr6.lt) goto loc_826075B8;
loc_826075D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82607618
	goto loc_82607618;
loc_826075DC:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82607618
	if (!ctx.cr6.gt) goto loc_82607618;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_826075F4:
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r26,0(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// or r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 | r26.u64;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x826075f4
	if (ctx.cr6.lt) goto loc_826075F4;
loc_82607618:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x82607564
	goto loc_82607564;
loc_82607624:
	// lwz r3,104(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r5,108(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x82606f18
	ctx.lr = 0x82607634;
	sub_82606F18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// or r28,r11,r10
	r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82607640:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bl 0x825f74b8
	ctx.lr = 0x82607650;
	sub_825F74B8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82607504
	if (!ctx.cr6.gt) goto loc_82607504;
loc_82607658:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826074e8
	if (!ctx.cr0.eq) goto loc_826074E8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_826267D0) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826267F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82626808
	if (ctx.cr0.lt) goto loc_82626808;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82626410
	ctx.lr = 0x82626808;
	sub_82626410(ctx, base);
loc_82626808:
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

DEFINE_REX_FUNC(sub_826273E8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82628440
	ctx.lr = 0x82627424;
	sub_82628440(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82628F38) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82628f50
	sub_82628F50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82629018) {
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
	ctx.lr = 0x82629020;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x8262905C;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82629080
	if (ctx.cr0.eq) goto loc_82629080;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82628fb8
	ctx.lr = 0x82629078;
	sub_82628FB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82629084
	goto loc_82629084;
loc_82629080:
	// li r29,0
	r29.s64 = 0;
loc_82629084:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82629098
	if (!ctx.cr6.eq) goto loc_82629098;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x826290e8
	goto loc_826290E8;
loc_82629098:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826290BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x826290cc
	if (ctx.cr0.lt) goto loc_826290CC;
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// b 0x826290e8
	goto loc_826290E8;
loc_826290CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826290E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x826290E8;
	sub_8264C3D0(ctx, base);
loc_826290E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82634178) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f11,22428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22428);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2800(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2800);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3788);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x826342cc
	if (ctx.cr6.lt) goto loc_826342CC;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_826341AC:
	// lfs f0,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826341c0
	if (!ctx.cr6.lt) goto loc_826341C0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x826341cc
	goto loc_826341CC;
loc_826341C0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x826341cc
	if (!ctx.cr6.gt) goto loc_826341CC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_826341CC:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r31,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r7.s32 >> 16;
	// stb r7,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// stb r31,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r31.u8);
	// bge cr6,0x82634204
	if (!ctx.cr6.lt) goto loc_82634204;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82634210
	goto loc_82634210;
loc_82634204:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82634210
	if (!ctx.cr6.gt) goto loc_82634210;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82634210:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r31,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r7.s32 >> 16;
	// stb r6,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// stb r7,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// stb r31,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, r31.u8);
	// bge cr6,0x82634248
	if (!ctx.cr6.lt) goto loc_82634248;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82634254
	goto loc_82634254;
loc_82634248:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82634254
	if (!ctx.cr6.gt) goto loc_82634254;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82634254:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r31,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r7.s32 >> 16;
	// stb r6,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, ctx.r6.u8);
	// stb r7,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// stb r31,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, r31.u8);
	// bge cr6,0x8263428c
	if (!ctx.cr6.lt) goto loc_8263428C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82634298
	goto loc_82634298;
loc_8263428C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82634298
	if (!ctx.cr6.gt) goto loc_82634298;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82634298:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// srawi r31,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r7.s32 >> 16;
	// stb r7,10(r11)
	REX_STORE_U8(ctx.r11.u32 + 10, ctx.r7.u8);
	// stb r6,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r6.u8);
	// stbu r31,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U8(ea, r31.u8);
	ctx.r11.u32 = ea;
	// blt cr6,0x826341ac
	if (ctx.cr6.lt) goto loc_826341AC;
loc_826342CC:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82634340
	if (!ctx.cr6.lt) goto loc_82634340;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r10,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826342F4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82634308
	if (!ctx.cr6.lt) goto loc_82634308;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82634314
	goto loc_82634314;
loc_82634308:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82634314
	if (!ctx.cr6.gt) goto loc_82634314;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82634314:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// srawi r7,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 16;
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stb r8,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// stbu r7,3(r11)
	ea = 3 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x826342f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826342F4;
loc_82634340:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82640258) {
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
	ctx.lr = 0x82640260;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r25,4(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8264045c
	if (!ctx.cr6.lt) goto loc_8264045C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r21,3
	r21.s64 = 3;
	// addi r22,r11,-20976
	r22.s64 = ctx.r11.s64 + -20976;
	// addi r24,r10,-19376
	r24.s64 = ctx.r10.s64 + -19376;
	// addi r23,r9,-19616
	r23.s64 = ctx.r9.s64 + -19616;
loc_826402A8:
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// beq cr6,0x826402d0
	if (ctx.cr6.eq) goto loc_826402D0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826403d8
	if (!ctx.cr6.eq) goto loc_826403D8;
	// b 0x82640314
	goto loc_82640314;
loc_826402D0:
	// addi r28,r29,224
	r28.s64 = r29.s64 + 224;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82641440
	ctx.lr = 0x826402EC;
	sub_82641440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8264045c
	if (ctx.cr6.lt) goto loc_8264045C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82638ef0
	ctx.lr = 0x82640300;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8264045c
	if (ctx.cr6.lt) goto loc_8264045C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82640364
	if (!ctx.cr6.eq) goto loc_82640364;
loc_82640314:
	// stw r21,124(r29)
	REX_STORE_U32(r29.u32 + 124, r21.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x82638d80
	ctx.lr = 0x82640328;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8264045c
	if (ctx.cr6.lt) goto loc_8264045C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,26,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFFFF;
	// sth r10,30(r30)
	REX_STORE_U16(r30.u32 + 30, ctx.r10.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r7,0,26,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3E;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// sth r4,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r4.u16);
	// stw r27,124(r29)
	REX_STORE_U32(r29.u32 + 124, r27.u32);
	// b 0x826403d8
	goto loc_826403D8;
loc_82640364:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8264038c
	if (!ctx.cr6.eq) goto loc_8264038C;
	// lhz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 32);
	// lwz r10,304(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 304);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sth r27,30(r30)
	REX_STORE_U16(r30.u32 + 30, r27.u16);
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// sth r8,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r8.u16);
	// b 0x826403d8
	goto loc_826403D8;
loc_8264038C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82638ef0
	ctx.lr = 0x82640398;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8264045c
	if (ctx.cr6.lt) goto loc_8264045C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r23
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r23.u32);
	// sth r8,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r8.u16);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r7,-2
	ctx.r6.s64 = ctx.r7.s64 + -2;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r24
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + r24.u32);
	// sth r4,30(r30)
	REX_STORE_U16(r30.u32 + 30, ctx.r4.u16);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r10.u32);
loc_826403D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8264045c
	if (ctx.cr6.lt) goto loc_8264045C;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 28);
	// xor r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// subf r5,r9,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r9.u64;
	// sth r5,30(r31)
	REX_STORE_U16(r31.u32 + 30, ctx.r5.u16);
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// bge cr6,0x8264045c
	if (!ctx.cr6.lt) goto loc_8264045C;
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r9.u16);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r7,30(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 30);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lwzx r9,r11,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r6,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, ctx.r6.u32);
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r4.u16);
	// stw r27,124(r29)
	REX_STORE_U32(r29.u32 + 124, r27.u32);
	// lhz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// blt cr6,0x826402a8
	if (ctx.cr6.lt) goto loc_826402A8;
loc_8264045C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8264C608) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8264C610;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-11516
	ctx.r11.s64 = ctx.r11.s64 + -11516;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8264c644
	if (ctx.cr6.eq) goto loc_8264C644;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264C644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264C644:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c66c
	if (ctx.cr6.eq) goto loc_8264C66C;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
loc_8264C654:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x8264C65C;
	sub_8260C0A0(ctx, base);
	// bl 0x826419c8
	ctx.lr = 0x8264C660;
	sub_826419C8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264c654
	if (!ctx.cr6.eq) goto loc_8264C654;
loc_8264C66C:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8264c694
	if (ctx.cr6.eq) goto loc_8264C694;
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
loc_8264C67C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x8264C684;
	sub_8260C0A0(ctx, base);
	// bl 0x826419c8
	ctx.lr = 0x8264C688;
	sub_826419C8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8264c67c
	if (!ctx.cr6.eq) goto loc_8264C67C;
loc_8264C694:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260adc0
	ctx.lr = 0x8264C69C;
	sub_8260ADC0(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8260adc0
	ctx.lr = 0x8264C6A4;
	sub_8260ADC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8260f8f8
	ctx.lr = 0x8264C6B4;
	sub_8260F8F8(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8260f8f8
	ctx.lr = 0x8264C6BC;
	sub_8260F8F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8264E5B0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// ori r4,r4,32821
	ctx.r4.u64 = ctx.r4.u64 | 32821;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bl 0x82793744
	ctx.lr = 0x8264E5F8;
	__imp__XMsgInProcessCall(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264e608
	if (ctx.cr0.lt) goto loc_8264E608;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8264e638
	goto loc_8264E638;
loc_8264E608:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8264e620
	if (!ctx.cr6.eq) goto loc_8264E620;
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x8264e638
	goto loc_8264E638;
loc_8264E620:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,122
	ctx.r11.u64 = ctx.r11.u64 | 122;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,122
	ctx.r3.s64 = 122;
	// beq cr6,0x8264e638
	if (ctx.cr6.eq) goto loc_8264E638;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_8264E638:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264F998) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8264f9bc
	if (!ctx.cr6.lt) goto loc_8264F9BC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_8264F9BC:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8264fa3c
	if (ctx.cr6.eq) goto loc_8264FA3C;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
loc_8264F9D8:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8264fa24
	if (ctx.cr6.eq) goto loc_8264FA24;
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r10,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r6,r9,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r10,8,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r6,r9,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r6,r9,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwimi r6,r9,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// rldimi r10,r6,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// b 0x8264fa28
	goto loc_8264FA28;
loc_8264FA24:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
loc_8264FA28:
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bdnz 0x8264f9d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264F9D8;
loc_8264FA3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82655818) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-11320
	ctx.r11.s64 = ctx.r11.s64 + -11320;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82655854
	if (ctx.cr6.eq) goto loc_82655854;
	// bl 0x823ede68
	ctx.lr = 0x82655850;
	sub_823EDE68(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_82655854:
	// lis r4,-32761
	ctx.r4.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,1235
	ctx.r4.u64 = ctx.r4.u64 | 1235;
	// bl 0x82654f40
	ctx.lr = 0x82655864;
	sub_82654F40(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82661120
	ctx.lr = 0x8265586C;
	sub_82661120(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// lwz r10,-6224(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -6224);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82655884
	if (!ctx.cr6.eq) goto loc_82655884;
	// stw r30,-6224(r11)
	REX_STORE_U32(ctx.r11.u32 + -6224, r30.u32);
loc_82655884:
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// bl 0x8265d8c8
	ctx.lr = 0x8265588C;
	sub_8265D8C8(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x82130e88
	ctx.lr = 0x82655894;
	sub_82130E88(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x8265c7b8
	ctx.lr = 0x8265589C;
	sub_8265C7B8(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// bl 0x8265d138
	ctx.lr = 0x826558A4;
	sub_8265D138(ctx, base);
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

DEFINE_REX_FUNC(sub_8265B890) {
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
	ctx.lr = 0x8265B898;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265b9b0
	if (ctx.cr6.eq) goto loc_8265B9B0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r27,r3,424
	r27.s64 = ctx.r3.s64 + 424;
	// addi r28,r11,-8
	r28.s64 = ctx.r11.s64 + -8;
	// addi r29,r10,-4
	r29.s64 = ctx.r10.s64 + -4;
loc_8265B8C8:
	// stwu r30,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, r30.u32);
	r29.u32 = ea;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// ld r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 16);
	// stdu r11,8(r28)
	ea = 8 + r28.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	r28.u32 = ea;
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// stw r11,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265b928
	if (!ctx.cr6.eq) goto loc_8265B928;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8265b928
	if (ctx.cr6.lt) goto loc_8265B928;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x8265b928
	if (!ctx.cr6.lt) goto loc_8265B928;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B91C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r11.u32);
loc_8265B928:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265b950
	if (!ctx.cr6.eq) goto loc_8265B950;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8265b950
	if (ctx.cr6.eq) goto loc_8265B950;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265b4f8
	ctx.lr = 0x8265B950;
	sub_8265B4F8(ctx, base);
loc_8265B950:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r11.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 16);
	// beq cr6,0x8265b9a4
	if (ctx.cr6.eq) goto loc_8265B9A4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B9A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265B9A4:
	// lwz r30,88(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8265b8c8
	if (!ctx.cr6.eq) goto loc_8265B8C8;
loc_8265B9B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8264df40
	ctx.lr = 0x8265B9C4;
	sub_8264DF40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265b9d4
	if (ctx.cr0.eq) goto loc_8265B9D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x8265B9D4;
	sub_823EDE70(ctx, base);
loc_8265B9D4:
	// lwz r3,420(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265ba00
	if (ctx.cr6.eq) goto loc_8265BA00;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82660120
	ctx.lr = 0x8265BA00;
	sub_82660120(ctx, base);
loc_8265BA00:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8265bab4
	if (!ctx.cr6.eq) goto loc_8265BAB4;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8265ba94
	if (ctx.cr6.eq) goto loc_8265BA94;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// li r5,60
	ctx.r5.s64 = 60;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8265BA34;
	sub_826A2E60(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// ori r6,r11,4113
	ctx.r6.u64 = ctx.r11.u64 | 4113;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r6,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265BA70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654550
	ctx.lr = 0x8265BA80;
	sub_82654550(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826537e0
	ctx.lr = 0x8265BA90;
	sub_826537E0(ctx, base);
	// b 0x8265bab4
	goto loc_8265BAB4;
loc_8265BA94:
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265bab4
	if (ctx.cr0.eq) goto loc_8265BAB4;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,396(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265bab4
	if (!ctx.cr0.eq) goto loc_8265BAB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826592b0
	ctx.lr = 0x8265BAB4;
	sub_826592B0(ctx, base);
loc_8265BAB4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82665E68) {
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
	ctx.lr = 0x82665E70;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r5.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r10,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lwz r11,428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stw r11,428(r3)
	REX_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// li r24,0
	r24.s64 = 0;
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82665ec8
	if (ctx.cr0.eq) goto loc_82665EC8;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// li r22,1
	r22.s64 = 1;
	// stw r11,428(r3)
	REX_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// b 0x82665ecc
	goto loc_82665ECC;
loc_82665EC8:
	// li r22,0
	r22.s64 = 0;
loc_82665ECC:
	// lwz r11,240(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 240);
	// addi r25,r30,240
	r25.s64 = r30.s64 + 240;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x8266612c
	if (ctx.cr6.eq) goto loc_8266612C;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8266612c
	if (ctx.cr0.eq) goto loc_8266612C;
loc_82665EE8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r31,r26,-4
	r31.s64 = r26.s64 + -4;
	// lwz r10,232(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 232);
	// subf r9,r11,r25
	ctx.r9.u64 = r25.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r10,r11
	r26.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x82666124
	if (!ctx.cr6.eq) goto loc_82666124;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82665f4c
	if (ctx.cr0.eq) goto loc_82665F4C;
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82665f40
	if (ctx.cr0.eq) goto loc_82665F40;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82665f40
	if (!ctx.cr6.eq) goto loc_82665F40;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82663030
	ctx.lr = 0x82665F40;
	sub_82663030(ctx, base);
loc_82665F40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826652d0
	ctx.lr = 0x82665F4C;
	sub_826652D0(ctx, base);
loc_82665F4C:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82665f70
	if (ctx.cr0.eq) goto loc_82665F70;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82665f90
	if (!ctx.cr0.eq) goto loc_82665F90;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,17,14,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwimi r11,r10,17,4,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// b 0x82665f8c
	goto loc_82665F8C;
loc_82665F70:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82665f90
	if (!ctx.cr0.eq) goto loc_82665F90;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82665f90
	if (!ctx.cr0.eq) goto loc_82665F90;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82665f90
	if (!ctx.cr0.eq) goto loc_82665F90;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
loc_82665F8C:
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
loc_82665F90:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82666124
	if (!ctx.cr0.eq) goto loc_82666124;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826660d4
	if (!ctx.cr0.eq) goto loc_826660D4;
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826660d4
	if (!ctx.cr0.eq) goto loc_826660D4;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82665fbc
	if (!ctx.cr0.eq) goto loc_82665FBC;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
loc_82665FBC:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82665fd8
	if (ctx.cr0.eq) goto loc_82665FD8;
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82665fd8
	if (ctx.cr0.eq) goto loc_82665FD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670d68
	ctx.lr = 0x82665FD8;
	sub_82670D68(ctx, base);
loc_82665FD8:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x826660d4
	if (!ctx.cr6.eq) goto loc_826660D4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82666000
	if (!ctx.cr6.eq) goto loc_82666000;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82675ee0
	ctx.lr = 0x82665FF4;
	sub_82675EE0(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x82666210
	if (ctx.cr0.eq) goto loc_82666210;
	// stw r23,24(r24)
	REX_STORE_U32(r24.u32 + 24, r23.u32);
loc_82666000:
	// li r7,1155
	ctx.r7.s64 = 1155;
	// lwz r6,32(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 32);
	// addi r5,r24,36
	ctx.r5.s64 = r24.s64 + 36;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826711d8
	ctx.lr = 0x82666018;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826715f0
	ctx.lr = 0x82666034;
	sub_826715F0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826660bc
	if (ctx.cr6.eq) goto loc_826660BC;
	// li r29,0
	r29.s64 = 0;
loc_8266604C:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,236(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 236);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826660a8
	if (ctx.cr0.eq) goto loc_826660A8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x826660a4
	if (!ctx.cr6.eq) goto loc_826660A4;
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826660a4
	if (!ctx.cr0.eq) goto loc_826660A4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826660a4
	if (!ctx.cr0.eq) goto loc_826660A4;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826660a4
	if (!ctx.cr0.eq) goto loc_826660A4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826715f0
	ctx.lr = 0x8266609C;
	sub_826715F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826661cc
	if (!ctx.cr0.eq) goto loc_826661CC;
loc_826660A4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_826660A8:
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8266604c
	if (ctx.cr6.lt) goto loc_8266604C;
loc_826660BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82671558
	ctx.lr = 0x826660C8;
	sub_82671558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826660d4
	if (ctx.cr0.eq) goto loc_826660D4;
	// li r21,1
	r21.s64 = 1;
loc_826660D4:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826660e8
	if (!ctx.cr0.eq) goto loc_826660E8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x82666124
	if (ctx.cr6.eq) goto loc_82666124;
loc_826660E8:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x826660FC;
	sub_8266BFC8(ctx, base);
	// lwz r11,428(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 428);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82666124
	if (ctx.cr0.eq) goto loc_82666124;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// li r22,1
	r22.s64 = 1;
	// stw r11,428(r30)
	REX_STORE_U32(r30.u32 + 428, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x8266612c
	if (ctx.cr6.eq) goto loc_8266612C;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_82666124:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82665ee8
	if (!ctx.cr6.eq) goto loc_82665EE8;
loc_8266612C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x826662bc
	if (ctx.cr6.eq) goto loc_826662BC;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826662bc
	if (ctx.cr0.eq) goto loc_826662BC;
loc_82666144:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r31,r29,-4
	r31.s64 = r29.s64 + -4;
	// lwz r10,232(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 232);
	// subf r9,r11,r25
	ctx.r9.u64 = r25.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x826662b4
	if (ctx.cr6.eq) goto loc_826662B4;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826661a8
	if (ctx.cr0.eq) goto loc_826661A8;
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266619c
	if (ctx.cr0.eq) goto loc_8266619C;
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266619c
	if (!ctx.cr6.eq) goto loc_8266619C;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82663030
	ctx.lr = 0x8266619C;
	sub_82663030(ctx, base);
loc_8266619C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826652d0
	ctx.lr = 0x826661A8;
	sub_826652D0(ctx, base);
loc_826661A8:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82666218
	if (ctx.cr0.eq) goto loc_82666218;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82666228
	if (!ctx.cr0.eq) goto loc_82666228;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,17,14,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwimi r11,r10,17,4,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// b 0x82666224
	goto loc_82666224;
loc_826661CC:
	// addi r11,r24,4
	ctx.r11.s64 = r24.s64 + 4;
loc_826661D0:
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
	// bne 0x826661d0
	if (!ctx.cr0.eq) goto loc_826661D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266620c
	if (!ctx.cr6.eq) goto loc_8266620C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266620C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266620C:
	// li r24,0
	r24.s64 = 0;
loc_82666210:
	// li r21,1
	r21.s64 = 1;
	// b 0x826660e8
	goto loc_826660E8;
loc_82666218:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82666228
	if (!ctx.cr0.eq) goto loc_82666228;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
loc_82666224:
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
loc_82666228:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826662b4
	if (!ctx.cr0.eq) goto loc_826662B4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82666264
	if (!ctx.cr0.eq) goto loc_82666264;
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82666264
	if (!ctx.cr0.eq) goto loc_82666264;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// beq 0x82666264
	if (ctx.cr0.eq) goto loc_82666264;
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82666264
	if (ctx.cr0.eq) goto loc_82666264;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670d68
	ctx.lr = 0x82666264;
	sub_82670D68(ctx, base);
loc_82666264:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82666278
	if (!ctx.cr0.eq) goto loc_82666278;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x826662b4
	if (ctx.cr6.eq) goto loc_826662B4;
loc_82666278:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266628C;
	sub_8266BFC8(ctx, base);
	// lwz r11,428(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 428);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826662b4
	if (ctx.cr0.eq) goto loc_826662B4;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// li r22,1
	r22.s64 = 1;
	// stw r11,428(r30)
	REX_STORE_U32(r30.u32 + 428, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x826662bc
	if (ctx.cr6.eq) goto loc_826662BC;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_826662B4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82666144
	if (!ctx.cr6.eq) goto loc_82666144;
loc_826662BC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82666304
	if (ctx.cr6.eq) goto loc_82666304;
	// addi r11,r24,4
	ctx.r11.s64 = r24.s64 + 4;
loc_826662C8:
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
	// bne 0x826662c8
	if (!ctx.cr0.eq) goto loc_826662C8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82666304
	if (!ctx.cr6.eq) goto loc_82666304;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82666304:
	// lwz r11,428(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 428);
	// rlwimi r11,r22,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r11,428(r30)
	REX_STORE_U32(r30.u32 + 428, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82684EE0) {
	REX_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82685528) {
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
	ctx.lr = 0x82685530;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// li r27,-1
	r27.s64 = -1;
	// li r28,0
	r28.s64 = 0;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268556c
	if (ctx.cr0.eq) goto loc_8268556C;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x8268557c
	goto loc_8268557C;
loc_8268556C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// beq cr6,0x82685598
	if (ctx.cr6.eq) goto loc_82685598;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8268557C:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x8268559c
	goto loc_8268559C;
loc_82685598:
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_8268559C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826877b8
	ctx.lr = 0x826855A8;
	sub_826877B8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x82685608
	if (!ctx.cr6.eq) goto loc_82685608;
	// lbz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 204);
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 188);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826855cc
	if (ctx.cr0.eq) goto loc_826855CC;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x826855dc
	goto loc_826855DC;
loc_826855CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// beq cr6,0x826855f8
	if (ctx.cr6.eq) goto loc_826855F8;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_826855DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x826855fc
	goto loc_826855FC;
loc_826855F8:
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_826855FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826877b8
	ctx.lr = 0x82685608;
	sub_826877B8(ctx, base);
loc_82685608:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8268A4C0) {
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
	// lis r11,-2
	ctx.r11.s64 = -131072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,31072
	ctx.r11.u64 = ctx.r11.u64 | 31072;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826b4180
	ctx.lr = 0x8268A4F4;
	sub_826B4180(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8268a504
	if (!ctx.cr0.eq) goto loc_8268A504;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826b4158
	ctx.lr = 0x8268A504;
	sub_826B4158(ctx, base);
loc_8268A504:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b40e8
	ctx.lr = 0x8268A520;
	sub_826B40E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268a530
	if (!ctx.cr0.eq) goto loc_8268A530;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826b4158
	ctx.lr = 0x8268A530;
	sub_826B4158(ctx, base);
loc_8268A530:
	// lwz r3,264(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 264);
	// bl 0x823eea98
	ctx.lr = 0x8268A538;
	sub_823EEA98(ctx, base);
	// b 0x8268a54c
	goto loc_8268A54C;
loc_8268A53C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x823eeb10
	ctx.lr = 0x8268A544;
	sub_823EEB10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82689e58
	ctx.lr = 0x8268A54C;
	sub_82689E58(ctx, base);
loc_8268A54C:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8268a53c
	if (!ctx.cr6.eq) goto loc_8268A53C;
	// bl 0x826b40a8
	ctx.lr = 0x8268A560;
	sub_826B40A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ed360
	ctx.lr = 0x8268A568;
	sub_823ED360(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826b4158
	ctx.lr = 0x8268A570;
	sub_826B4158(ctx, base);
}

DEFINE_REX_FUNC(sub_8268EF40) {
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
	// beq cr6,0x8268ef8c
	if (ctx.cr6.eq) goto loc_8268EF8C;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268ef7c
	if (ctx.cr6.eq) goto loc_8268EF7C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823f0350
	ctx.lr = 0x8268EF74;
	sub_823F0350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8268EF7C:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// bl 0x823f0350
	ctx.lr = 0x8268EF8C;
	sub_823F0350(ctx, base);
loc_8268EF8C:
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

DEFINE_REX_FUNC(sub_82692C48) {
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
	// stwu r1,-3344(r1)
	ea = -3344 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,291
	ctx.r5.s64 = 291;
	// li r4,145
	ctx.r4.s64 = 145;
	// bl 0x82695338
	ctx.lr = 0x82692C74;
	sub_82695338(ctx, base);
	// li r7,145
	ctx.r7.s64 = 145;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-9872
	ctx.r10.s64 = ctx.r11.s64 + -9872;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,1244
	ctx.r8.s64 = ctx.r1.s64 + 1244;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82692C90:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f0,-4(r8)
	ea = -4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82692c90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82692C90;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r5,291
	ctx.r5.s64 = 291;
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826955c0
	ctx.lr = 0x82692CDC;
	sub_826955C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r7,r1,2288
	ctx.r7.s64 = ctx.r1.s64 + 2288;
	// addi r6,r1,1248
	ctx.r6.s64 = ctx.r1.s64 + 1248;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,291
	ctx.r4.s64 = 291;
	// lfs f0,-9288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -9288);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// bl 0x82695498
	ctx.lr = 0x82692D04;
	sub_82695498(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,2288
	ctx.r4.s64 = ctx.r1.s64 + 2288;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82694eb0
	ctx.lr = 0x82692D14;
	sub_82694EB0(ctx, base);
	// addi r1,r1,3344
	ctx.r1.s64 = ctx.r1.s64 + 3344;
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

DEFINE_REX_FUNC(sub_82699930) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r11,r11,-5936
	ctx.r11.s64 = ctx.r11.s64 + -5936;
loc_8269993C:
	// lwz r10,2112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2112);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// subfc r9,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mulli r9,r10,132
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(132));
	// stw r10,2112(r11)
	REX_STORE_U32(ctx.r11.u32 + 2112, ctx.r10.u32);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
loc_8269996C:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r7,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82699990
	if (!ctx.cr6.eq) goto loc_82699990;
	// stwcx. r4,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8269996c
	if (!ctx.cr0.eq) goto loc_8269996C;
	// b 0x82699998
	goto loc_82699998;
loc_82699990:
	// stwcx. r7,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_82699998:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826999b4
	if (ctx.cr6.eq) goto loc_826999B4;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8269993c
	if (!ctx.cr0.eq) goto loc_8269993C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826999B4:
	// lwz r10,2112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2112);
	// addi r9,r11,2116
	ctx.r9.s64 = ctx.r11.s64 + 2116;
	// mulli r11,r10,768
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(768));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269CB10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r3,8928(r11)
	REX_STORE_U32(ctx.r11.u32 + 8928, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269CC20) {
	REX_FUNC_PROLOGUE();
	// cmpw r3,r4
	ctx.cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beqlr- 
	if (ctx.cr0.eq) return;
	// bge+ 0x8269cc30
	if (!ctx.cr0.lt) goto loc_8269CC30;
	// b 0x826a1e70
	sub_826A1E70(ctx, base);
	return;
loc_8269CC30:
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x8269cc58
	goto loc_8269CC58;
loc_8269CC44:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	REX_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_8269CC58:
	// andi. r0,r3,3
	ctx.r0.u64 = ctx.r3.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x8269cc44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_8269CC44;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x8269cc88
	if (ctx.cr0.eq) goto loc_8269CC88;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x8269ccac
	if (!ctx.cr0.eq) goto loc_8269CCAC;
loc_8269CC74:
	// lwz r7,-4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	REX_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x8269cc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269CC74;
loc_8269CC88:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_8269CC94:
	// lbz r0,-1(r4)
	ctx.r0.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	REX_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x8269cc94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269CC94;
	// blr 
	return;
loc_8269CCAC:
	// lbz r7,-1(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x8269ccac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269CCAC;
	// b 0x8269cc88
	goto loc_8269CC88;
}

DEFINE_REX_FUNC(sub_826A11AC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
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
	ctx.lr = 0x826A11CC;
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

DEFINE_REX_FUNC(__restgprlr_15) {
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

DEFINE_REX_FUNC(sub_826A2D10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// neg r12,r3
	ctx.r12.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// neg r11,r12
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r12.u64);
	// addi r0,r11,4095
	ctx.r0.s64 = ctx.r11.s64 + 4095;
	// srawi. r0,r0,12
	ctx.xer.ca = (ctx.r0.s32 < 0) & ((ctx.r0.u32 & 0xFFF) != 0);
	ctx.r0.s64 = ctx.r0.s32 >> 12;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r1
	ctx.r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_826A2D2C:
	// lwzu r0,-4096(r11)
	ea = -4096 + ctx.r11.u32;
	ctx.r0.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x826a2d2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826A2D2C;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_30) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_94) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826A5B04) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A5B80) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31520(r10)
	REX_STORE_U32(ctx.r10.u32 + 31520, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A5CB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826A5CC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826a3320
	ctx.lr = 0x826A5CD4;
	sub_826A3320(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// andi. r10,r11,130
	ctx.r10.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a5d0c
	if (!ctx.cr0.eq) goto loc_826A5D0C;
	// bl 0x826a33d0
	ctx.lr = 0x826A5CEC;
	sub_826A33D0(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_826A5CF0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_826A5CF8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_826A5CFC:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x826a5e84
	goto loc_826A5E84;
loc_826A5D0C:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a5d20
	if (ctx.cr0.eq) goto loc_826A5D20;
	// bl 0x826a33d0
	ctx.lr = 0x826A5D18;
	sub_826A33D0(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x826a5cf0
	goto loc_826A5CF0;
loc_826A5D20:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x826a5d48
	if (ctx.cr0.eq) goto loc_826A5D48;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq 0x826a5cfc
	if (ctx.cr0.eq) goto loc_826A5CFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_826A5D48:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a5da4
	if (!ctx.cr0.eq) goto loc_826A5DA4;
	// bl 0x8269dfa8
	ctx.lr = 0x826A5D70;
	sub_8269DFA8(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826a5d8c
	if (ctx.cr6.eq) goto loc_826A5D8C;
	// bl 0x8269dfa8
	ctx.lr = 0x826A5D80;
	sub_8269DFA8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826a5d9c
	if (!ctx.cr6.eq) goto loc_826A5D9C;
loc_826A5D8C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821aae70
	ctx.lr = 0x826A5D94;
	sub_821AAE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a5da4
	if (!ctx.cr0.eq) goto loc_826A5DA4;
loc_826A5D9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a94c0
	ctx.lr = 0x826A5DA4;
	sub_826A94C0(ctx, base);
loc_826A5DA4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a5e5c
	if (ctx.cr0.eq) goto loc_826A5E5C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// subf. r30,r4,r10
	r30.u64 = ctx.r10.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble 0x826a5dec
	if (!ctx.cr0.gt) goto loc_826A5DEC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9bd0
	ctx.lr = 0x826A5DE4;
	sub_826A9BD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x826a5e4c
	goto loc_826A5E4C;
loc_826A5DEC:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x826a5e20
	if (ctx.cr6.eq) goto loc_826A5E20;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(r29.s32, -2, ctx.xer);
	// beq cr6,0x826a5e20
	if (ctx.cr6.eq) goto loc_826A5E20;
	// srawi r11,r29,5
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1F) != 0);
	ctx.r11.s64 = r29.s32 >> 5;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,31264
	ctx.r10.s64 = ctx.r10.s64 + 31264;
	// clrlwi r11,r29,27
	ctx.r11.u64 = r29.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x826a5e28
	goto loc_826A5E28;
loc_826A5E20:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,26400
	ctx.r11.s64 = ctx.r11.s64 + 26400;
loc_826A5E28:
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a5e4c
	if (ctx.cr0.eq) goto loc_826A5E4C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a9e20
	ctx.lr = 0x826A5E44;
	sub_826A9E20(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x826a5cf8
	if (ctx.cr6.eq) goto loc_826A5CF8;
loc_826A5E4C:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// b 0x826a5e74
	goto loc_826A5E74;
loc_826A5E5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x826a9bd0
	ctx.lr = 0x826A5E70;
	sub_826A9BD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_826A5E74:
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(r28.s32, r30.s32, ctx.xer);
	// bne cr6,0x826a5cf8
	if (!ctx.cr6.eq) goto loc_826A5CF8;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_826A5E84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826B5FC0) {
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
	// lwz r9,128(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lfs f9,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,124(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f12,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f13,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// addi r11,r11,3716
	ctx.r11.s64 = ctx.r11.s64 + 3716;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// fdivs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// frsp f11,f8
	ctx.f11.f64 = double(float(ctx.f8.f64));
	// frsp f10,f7
	ctx.f10.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// ble cr6,0x826b6048
	if (!ctx.cr6.gt) goto loc_826B6048;
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fdivs f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fdivs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmuls f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fadds f10,f12,f5
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// b 0x826b606c
	goto loc_826B606C;
loc_826B6048:
	// fmuls f8,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fdivs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f11,f6,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fadds f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
loc_826B606C:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stw r9,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fcfid f4,f8
	ctx.f4.f64 = double(ctx.f8.s64);
	// lfs f13,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f2,f7
	ctx.f2.f64 = double(ctx.f7.s64);
	// stfs f13,176(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// stfs f13,200(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// stfs f1,164(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f1,224(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stw r8,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// stfs f1,244(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stfs f13,220(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stfs f13,236(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f13,256(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfs f12,144(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// stfs f12,184(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// stfs f11,148(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f11,168(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f10,188(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f10,208(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f11,228(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f10,248(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f13,260(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// bl 0x826b5bf8
	ctx.lr = 0x826B6168;
	sub_826B5BF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C6920) {
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
	// beq cr6,0x826c6940
	if (ctx.cr6.eq) goto loc_826C6940;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823f0350
	ctx.lr = 0x826C6940;
	sub_823F0350(ctx, base);
loc_826C6940:
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

DEFINE_REX_FUNC(sub_826C8068) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826c80a0
	if (!ctx.cr6.eq) goto loc_826C80A0;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x826c8094
	if (ctx.cr6.eq) goto loc_826C8094;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	return;
loc_826C8094:
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826c7e60
	sub_826C7E60(ctx, base);
	return;
loc_826C80A0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826CA830) {
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
	ctx.lr = 0x826CA838;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bne cr6,0x826ca85c
	if (!ctx.cr6.eq) goto loc_826CA85C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826CA85C:
	// addi r26,r4,-24
	r26.s64 = ctx.r4.s64 + -24;
	// cmplwi cr6,r26,8
	ctx.cr6.compare<uint32_t>(r26.u32, 8, ctx.xer);
	// bge cr6,0x826ca874
	if (!ctx.cr6.lt) goto loc_826CA874;
loc_826CA868:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826CA874:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CA888;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bne cr6,0x826ca868
	if (!ctx.cr6.eq) goto loc_826CA868;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,8
	r28.s64 = 8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r8,r6,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r30,r3,0
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r3.u32);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// ble cr6,0x826ca8f0
	if (!ctx.cr6.gt) goto loc_826CA8F0;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826CA8F0:
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x823f02b8
	ctx.lr = 0x826CA900;
	sub_823F02B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// bne cr6,0x826ca918
	if (!ctx.cr6.eq) goto loc_826CA918;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826CA918:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(r30.u32, 128, ctx.xer);
	// ble cr6,0x826ca990
	if (!ctx.cr6.gt) goto loc_826CA990;
loc_826CA920:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(r30.u32, 128, ctx.xer);
	// li r29,128
	r29.s64 = 128;
	// bgt cr6,0x826ca930
	if (ctx.cr6.gt) goto loc_826CA930;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_826CA930:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CA94C;
	sub_826B9678(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x826ca868
	if (!ctx.cr6.eq) goto loc_826CA868;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// add r29,r27,r3
	r29.u64 = r27.u64 + ctx.r3.u64;
	// add r28,r28,r3
	r28.u64 = r28.u64 + ctx.r3.u64;
	// subf r30,r3,r30
	r30.u64 = r30.u64 - ctx.r3.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826ca868
	if (ctx.cr6.gt) goto loc_826CA868;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826CA980;
	sub_826A1E70(ctx, base);
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x826ca920
	if (!ctx.cr6.eq) goto loc_826CA920;
	// b 0x826ca9c0
	goto loc_826CA9C0;
loc_826CA990:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826CA9A8;
	sub_826B9678(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x826ca868
	if (!ctx.cr6.eq) goto loc_826CA868;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a1e70
	ctx.lr = 0x826CA9C0;
	sub_826A1E70(ctx, base);
loc_826CA9C0:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r26,32
	ctx.r11.u64 = r26.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826D9E48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826D9E50;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826d9e84
	if (!ctx.cr6.eq) goto loc_826D9E84;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
loc_826D9E84:
	// lwz r30,28(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826D9EA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9f20
	if (ctx.cr6.lt) goto loc_826D9F20;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d4080
	ctx.lr = 0x826D9EC8;
	sub_826D4080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9f20
	if (ctx.cr6.lt) goto loc_826D9F20;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D9EE8;
	sub_826D3EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9f20
	if (ctx.cr6.lt) goto loc_826D9F20;
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// cmpldi cr6,r11,24
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 24, ctx.xer);
	// blt cr6,0x826d9f18
	if (ctx.cr6.lt) goto loc_826D9F18;
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-24
	ctx.r8.s64 = ctx.r11.s64 + -24;
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// ble cr6,0x826d9f20
	if (!ctx.cr6.gt) goto loc_826D9F20;
loc_826D9F18:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
loc_826D9F20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826DE420) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826DE428;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826de454
	if (!ctx.cr6.eq) goto loc_826DE454;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_826DE454:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826de4ac
	if (ctx.cr6.eq) goto loc_826DE4AC;
loc_826DE464:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r29,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, r29.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// bl 0x826c68d8
	ctx.lr = 0x826DE490;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826de4d8
	if (ctx.cr6.lt) goto loc_826DE4D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826de464
	if (!ctx.cr6.eq) goto loc_826DE464;
loc_826DE4AC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x826c68d8
	ctx.lr = 0x826DE4BC;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826de4d8
	if (ctx.cr6.lt) goto loc_826DE4D8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_826DE4D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826E0D80) {
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
	ctx.lr = 0x826E0D88;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r24,0
	r24.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e0e28
	if (ctx.cr6.eq) goto loc_826E0E28;
	// mr r28,r24
	r28.u64 = r24.u64;
	// li r25,4
	r25.s64 = 4;
loc_826E0DB0:
	// mulli r11,r28,1776
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(1776));
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// sth r25,182(r29)
	REX_STORE_U16(r29.u32 + 182, r25.u16);
loc_826E0DC4:
	// mulli r11,r30,56
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r31,r11,200
	r31.s64 = ctx.r11.s64 + 200;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826f4188
	ctx.lr = 0x826E0DE8;
	sub_826F4188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0e28
	if (ctx.cr6.lt) goto loc_826E0E28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826f4e00
	ctx.lr = 0x826E0DFC;
	sub_826F4E00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0e28
	if (ctx.cr6.lt) goto loc_826E0E28;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x826e0dc4
	if (ctx.cr6.lt) goto loc_826E0DC4;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e0db0
	if (ctx.cr6.lt) goto loc_826E0DB0;
loc_826E0E28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826E5798) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,40(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,60(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x826e57dc
	if (ctx.cr6.gt) goto loc_826E57DC;
	// lwz r7,212(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826e57d4
	if (ctx.cr6.eq) goto loc_826E57D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// b 0x826e57f8
	goto loc_826E57F8;
loc_826E57D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826e57fc
	goto loc_826E57FC;
loc_826E57DC:
	// lwz r7,604(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826e57f4
	if (ctx.cr6.eq) goto loc_826E57F4;
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// b 0x826e57f8
	goto loc_826E57F8;
loc_826E57F4:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
loc_826E57F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_826E57FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xor r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// stw r7,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x826e588c
	if (!ctx.cr6.gt) goto loc_826E588C;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x826e5858
	if (ctx.cr6.gt) goto loc_826E5858;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
loc_826E5858:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r7,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// subf r4,r6,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r6.u64;
	// srw r11,r9,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r5,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
loc_826E588C:
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r9,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F20D8) {
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
	ctx.lr = 0x826F20E0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r17,0
	r17.s64 = 0;
	// lwz r30,24(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r24,0(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// lwz r28,260(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r31,r3,224
	r31.s64 = ctx.r3.s64 + 224;
	// lwz r29,264(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// li r26,23
	r26.s64 = 23;
	// lwz r25,256(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r20,r17
	r20.u64 = r17.u64;
	// lwz r27,252(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lwz r23,272(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r22,268(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// bgt cr6,0x826f27dc
	if (ctx.cr6.gt) goto loc_826F27DC;
	// li r18,1
	r18.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826f21a0
	if (ctx.cr6.eq) goto loc_826F21A0;
	// bdz 0x826f27dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826F27DC;
	// bdz 0x826f27dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826F27DC;
	// bdz 0x826f27dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826F27DC;
	// bdz 0x826f2150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826F2150;
	// bdz 0x826f251c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826F251C;
	// b 0x826f2704
	goto loc_826F2704;
loc_826F2150:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F2160;
	sub_826E58B8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f27dc
	if (ctx.cr6.lt) goto loc_826F27DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x826ef1f8
	ctx.lr = 0x826F2180;
	sub_826EF1F8(ctx, base);
	// stw r17,56(r21)
	REX_STORE_U32(r21.u32 + 56, r17.u32);
	// li r26,23
	r26.s64 = 23;
	// lwz r28,36(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r25,32(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r27,28(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r23,48(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r22,44(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 44);
loc_826F21A0:
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(r29.u32, 23, ctx.xer);
	// bge cr6,0x826f22c4
	if (!ctx.cr6.lt) goto loc_826F22C4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826f21e0
	if (ctx.cr6.eq) goto loc_826F21E0;
	// subfic r11,r29,32
	ctx.xer.ca = r29.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - r29.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// blt cr6,0x826f21c0
	if (ctx.cr6.lt) goto loc_826F21C0;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_826F21C0:
	// subf r23,r11,r23
	r23.u64 = r23.u64 - ctx.r11.u64;
	// slw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// slw r10,r18,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (r18.u32 << (r23.u8 & 0x3F));
	// srw r8,r22,r23
	ctx.r8.u64 = r23.u8 & 0x20 ? 0 : (r22.u32 >> (r23.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// or r28,r9,r8
	r28.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r22,r7,r22
	r22.u64 = ctx.r7.u64 & r22.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
loc_826F21E0:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r9,r11,3720
	ctx.r9.s64 = ctx.r11.s64 + 3720;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826f2228
	if (!ctx.cr6.eq) goto loc_826F2228;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// bgt cr6,0x826f2264
	if (ctx.cr6.gt) goto loc_826F2264;
loc_826F21FC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826f2264
	if (ctx.cr6.eq) goto loc_826F2264;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// or r28,r10,r11
	r28.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// ble cr6,0x826f21fc
	if (!ctx.cr6.gt) goto loc_826F21FC;
	// b 0x826f2264
	goto loc_826F2264;
loc_826F2228:
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// bgt cr6,0x826f2264
	if (ctx.cr6.gt) goto loc_826F2264;
loc_826F2230:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826f2264
	if (ctx.cr6.eq) goto loc_826F2264;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lbz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826F2248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// rlwimi r3,r28,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// ble cr6,0x826f2230
	if (!ctx.cr6.gt) goto loc_826F2230;
loc_826F2264:
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(r29.u32, 23, ctx.xer);
	// bge cr6,0x826f22c4
	if (!ctx.cr6.lt) goto loc_826F22C4;
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,32(r31)
	REX_STORE_U32(r31.u32 + 32, r25.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,28(r31)
	REX_STORE_U32(r31.u32 + 28, r27.u32);
	// stw r23,48(r31)
	REX_STORE_U32(r31.u32 + 48, r23.u32);
	// stw r22,44(r31)
	REX_STORE_U32(r31.u32 + 44, r22.u32);
	// bl 0x82638bf0
	ctx.lr = 0x826F2294;
	sub_82638BF0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f27dc
	if (ctx.cr6.lt) goto loc_826F27DC;
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r28,36(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r25,32(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r29,23
	ctx.cr6.compare<uint32_t>(r29.u32, 23, ctx.xer);
	// lwz r27,28(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r23,48(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r22,44(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bge cr6,0x826f22c4
	if (!ctx.cr6.lt) goto loc_826F22C4;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_826F22C4:
	// subf r11,r26,r29
	ctx.r11.u64 = r29.u64 - r26.u64;
	// subfic r10,r26,32
	ctx.xer.ca = r26.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - r26.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r28,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r8.u8 & 0x3F));
	// slw r8,r7,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r6,r8,3,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x6;
	// lhzux r11,r30,r6
	ea = r30.u32 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r5,r11,0,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r9,r8,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x3;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r9
	ea = r30.u32 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzux r11,r30,r10
	ea = r30.u32 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// rlwinm r9,r11,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826f2490
	if (!ctx.cr6.eq) goto loc_826F2490;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
loc_826F2490:
	// rlwinm r4,r11,22,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1F;
	// clrlwi r26,r11,22
	r26.u64 = ctx.r11.u32 & 0x3FF;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmplwi cr6,r26,1020
	ctx.cr6.compare<uint32_t>(r26.u32, 1020, ctx.xer);
	// blt cr6,0x826f24b4
	if (ctx.cr6.lt) goto loc_826F24B4;
	// clrlwi r11,r26,30
	ctx.r11.u64 = r26.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r26,r10,r30
	r26.u64 = REX_LOAD_U16(ctx.r10.u32 + r30.u32);
loc_826F24B4:
	// slw r30,r8,r4
	r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// stw r28,36(r31)
	REX_STORE_U32(r31.u32 + 36, r28.u32);
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, ctx.xer);
	// stw r25,32(r31)
	REX_STORE_U32(r31.u32 + 32, r25.u32);
	// stw r27,28(r31)
	REX_STORE_U32(r31.u32 + 28, r27.u32);
	// stw r23,48(r31)
	REX_STORE_U32(r31.u32 + 48, r23.u32);
	// stw r22,44(r31)
	REX_STORE_U32(r31.u32 + 44, r22.u32);
	// bge cr6,0x826f24f4
	if (!ctx.cr6.lt) goto loc_826F24F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638ef0
	ctx.lr = 0x826F24E0;
	sub_82638EF0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f27dc
	if (ctx.cr6.lt) goto loc_826F27DC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// b 0x826f24f8
	goto loc_826F24F8;
loc_826F24F4:
	// subf r11,r4,r29
	ctx.r11.u64 = r29.u64 - ctx.r4.u64;
loc_826F24F8:
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x826f255c
	if (!ctx.cr6.eq) goto loc_826F255C;
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,56(r21)
	REX_STORE_U32(r21.u32 + 56, ctx.r11.u32);
	// ble cr6,0x826f251c
	if (!ctx.cr6.gt) goto loc_826F251C;
	// stw r17,24(r24)
	REX_STORE_U32(r24.u32 + 24, r17.u32);
loc_826F251C:
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826f25f8
	if (ctx.cr6.gt) goto loc_826F25F8;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x826e58b8
	ctx.lr = 0x826F253C;
	sub_826E58B8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f27dc
	if (ctx.cr6.lt) goto loc_826F27DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r11.u32);
	// stw r10,56(r21)
	REX_STORE_U32(r21.u32 + 56, ctx.r10.u32);
	// b 0x826f2704
	goto loc_826F2704;
loc_826F255C:
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// bne cr6,0x826f2590
	if (!ctx.cr6.eq) goto loc_826F2590;
	// stw r17,20(r24)
	REX_STORE_U32(r24.u32 + 20, r17.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lhz r11,202(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r9,36(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 36);
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// stw r6,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r6.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_826F2590:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x826f25b8
	if (!ctx.cr6.lt) goto loc_826F25B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638ef0
	ctx.lr = 0x826F25A4;
	sub_82638EF0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f27dc
	if (ctx.cr6.lt) goto loc_826F27DC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// b 0x826f25bc
	goto loc_826F25BC;
loc_826F25B8:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826F25BC:
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// addi r10,r26,-2
	ctx.r10.s64 = r26.s64 + -2;
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r9,28(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 28);
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// stw r5,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r5.u32);
	// lwz r4,32(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 32);
	// lhzx r3,r4,r8
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// stw r7,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r7.u32);
	// stw r3,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r3.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_826F25F8:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826f26b4
	if (!ctx.cr6.eq) goto loc_826F26B4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r17
	r30.u64 = r17.u64;
	// bl 0x826f1e00
	ctx.lr = 0x826F2618;
	sub_826F1E00(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f27dc
	if (ctx.cr6.lt) goto loc_826F27DC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r17,20(r24)
	REX_STORE_U32(r24.u32 + 20, r17.u32);
	// stw r11,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826f269c
	if (ctx.cr6.eq) goto loc_826F269C;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r11.u32);
	// mr r30,r18
	r30.u64 = r18.u64;
	// stw r10,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r9,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826f269c
	if (ctx.cr6.eq) goto loc_826F269C;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
loc_826F2668:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r9,20(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 20);
	// slw r10,r18,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r9.u32);
	// stw r10,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r10.u32);
	// srw r7,r8,r30
	ctx.r7.u64 = r30.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r30.u8 & 0x3F));
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826f2668
	if (!ctx.cr6.eq) goto loc_826F2668;
loc_826F269C:
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82638ef0
	ctx.lr = 0x826F26A8;
	sub_82638EF0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f27dc
	if (ctx.cr6.lt) goto loc_826F27DC;
loc_826F26B4:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x826e58b8
	ctx.lr = 0x826F26C8;
	sub_826E58B8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f27dc
	if (ctx.cr6.lt) goto loc_826F27DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r6.u32);
	// stw r9,56(r21)
	REX_STORE_U32(r21.u32 + 56, ctx.r9.u32);
loc_826F2704:
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826f2790
	if (ctx.cr6.gt) goto loc_826F2790;
	// lwz r11,248(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 248);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x826e58b8
	ctx.lr = 0x826F2728;
	sub_826E58B8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f27dc
	if (ctx.cr6.lt) goto loc_826F27DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r11,248(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 248);
	// stw r8,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r8.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// subfic r5,r6,32
	ctx.xer.ca = ctx.r6.u32 <= 32;
	ctx.r5.u64 = static_cast<uint64_t>(32) - ctx.r6.u64;
	// srw r4,r10,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// clrlwi r4,r5,1
	ctx.r4.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// stw r4,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r4.u32);
	// stw r17,56(r21)
	REX_STORE_U32(r21.u32 + 56, r17.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_826F2790:
	// lhz r11,312(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 312);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x826f10a0
	ctx.lr = 0x826F27A4;
	sub_826F10A0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f27dc
	if (ctx.cr6.lt) goto loc_826F27DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r9,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826f27d8
	if (!ctx.cr6.eq) goto loc_826F27D8;
	// lhz r11,314(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 314);
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r10.u32);
loc_826F27D8:
	// stw r17,56(r21)
	REX_STORE_U32(r21.u32 + 56, r17.u32);
loc_826F27DC:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82738868) {
	REX_FUNC_PROLOGUE();
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
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltisw128 v60,7
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x7)));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r10,-32592
	ctx.r7.s64 = ctx.r10.s64 + -32592;
	// lvx128 v59,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,48
	ctx.r4.s64 = 48;
	// vcsxwfp128 v58,v59,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v13,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// vaddsws v12,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// lvx128 v57,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubsws v10,v0,v13
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v13.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v13.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v13.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v13.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v11,v57,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// lvx128 v13,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,80
	ctx.r8.s64 = 80;
	// lvx128 v61,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// vcsxwfp128 v56,v12,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v63,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v10,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v10,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r6,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x8;
	// lvx128 v12,r7,r8
	ea = (ctx.r7.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,64
	ctx.r6.s64 = 64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// vmulfp128 v9,v58,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v13.f32)));
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// vmulfp128 v7,v58,v61
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v61.f32)));
	// li r10,64
	ctx.r10.s64 = 64;
	// lvx128 v62,r7,r6
	ea = (ctx.r7.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vor128 v54,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx128 v0,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v53,v56,v63
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v52,v55,v63
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v8,v11,v10,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v7,v11,v13,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v11,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v53.f32)));
	// vcfpsxws128 v9,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v52.f32)));
	// vctsxs v8,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vctsxs v7,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vaddsws v6,v11,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v5,v11,v8
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v5.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v5.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v5.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v5.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v4,v9,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v3,v9,v7
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v7.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v7.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v7.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v7.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v2,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v1,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
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
	// vaddsws v30,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v51,v2,v60
	ctx.v51.s32[0] = ctx.v2.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v51.s32[1] = ctx.v2.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v51.s32[2] = ctx.v2.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v51.s32[3] = ctx.v2.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v50,v1,v60
	ctx.v50.s32[0] = ctx.v1.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v50.s32[1] = ctx.v1.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v50.s32[2] = ctx.v1.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v50.s32[3] = ctx.v1.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v49,v31,v60
	ctx.v49.s32[0] = v31.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v49.s32[1] = v31.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v49.s32[2] = v31.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v49.s32[3] = v31.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v48,v30,v60
	ctx.v48.s32[0] = v30.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v48.s32[1] = v30.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v48.s32[2] = v30.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v48.s32[3] = v30.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vmrglw128 v47,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v46,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrghw128 v45,v51,v48
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrghw128 v44,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrghw128 v12,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrglw128 v43,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vmrghw128 v11,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// vmrglw128 v42,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// vcsxwfp128 v41,v43,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vaddsws v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v28,v11,v12
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v12.s32[0]);
	v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v12.s32[1]);
	v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v12.s32[2]);
	v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v12.s32[3]);
	v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vcsxwfp128 v12,v42,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vcsxwfp128 v40,v29,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vcsxwfp128 v39,v28,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmulfp128 v11,v41,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v9,v41,v61
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v38,v40,v63
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v37,v39,v63
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaddfp v11,v12,v10,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v12,v13,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v13,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v38.f32)));
	// vcfpsxws128 v12,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v37.f32)));
	// vctsxs v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vctsxs v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vaddsws v27,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v26,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v25,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v24,v13,v11
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v11.s32[0]);
	v24.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v11.s32[1]);
	v24.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v11.s32[2]);
	v24.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v11.s32[3]);
	v24.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v23,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v22,v26,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v21,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v20,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v36,v23,v62
	ctx.v36.s32[0] = v23.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v36.s32[1] = v23.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v36.s32[2] = v23.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v36.s32[3] = v23.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v35,v22,v54
	ctx.v35.s32[0] = v22.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v35.s32[1] = v22.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v35.s32[2] = v22.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v35.s32[3] = v22.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vsraw128 v34,v21,v54
	ctx.v34.s32[0] = v21.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v34.s32[1] = v21.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v34.s32[2] = v21.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v34.s32[3] = v21.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// vsraw128 v33,v20,v54
	ctx.v33.s32[0] = v20.s32[0] >> (ctx.v54.u8[0] & 0x1F);
	ctx.v33.s32[1] = v20.s32[1] >> (ctx.v54.u8[4] & 0x1F);
	ctx.v33.s32[2] = v20.s32[2] >> (ctx.v54.u8[8] & 0x1F);
	ctx.v33.s32[3] = v20.s32[3] >> (ctx.v54.u8[12] & 0x1F);
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8275A138) {
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
	ctx.lr = 0x8275A140;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8275a50c
	if (ctx.cr6.eq) goto loc_8275A50C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8275a50c
	if (ctx.cr6.eq) goto loc_8275A50C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8275a17c
	if (ctx.cr6.eq) goto loc_8275A17C;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lhz r29,14(r4)
	r29.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// b 0x8275a190
	goto loc_8275A190;
loc_8275A17C:
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,14588(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// lwz r3,14592(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 14592);
	// lhz r29,14(r5)
	r29.u64 = REX_LOAD_U16(ctx.r5.u32 + 14);
	// lwz r4,16(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
loc_8275A190:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8275a50c
	if (ctx.cr6.lt) goto loc_8275A50C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x8275a50c
	if (ctx.cr6.lt) goto loc_8275A50C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8275a50c
	if (ctx.cr6.lt) goto loc_8275A50C;
	// lwz r5,228(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8275a50c
	if (ctx.cr6.lt) goto loc_8275A50C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8275a50c
	if (ctx.cr6.lt) goto loc_8275A50C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8275a50c
	if (ctx.cr6.lt) goto loc_8275A50C;
	// add r27,r6,r10
	r27.u64 = ctx.r6.u64 + ctx.r10.u64;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(r27.s32, r30.s32, ctx.xer);
	// bgt cr6,0x8275a50c
	if (ctx.cr6.gt) goto loc_8275A50C;
	// srawi r27,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	r27.s64 = ctx.r3.s32 >> 31;
	// add r26,r7,r5
	r26.u64 = ctx.r7.u64 + ctx.r5.u64;
	// xor r25,r3,r27
	r25.u64 = ctx.r3.u64 ^ r27.u64;
	// subf r27,r27,r25
	r27.u64 = r25.u64 - r27.u64;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(r26.s32, r27.s32, ctx.xer);
	// bgt cr6,0x8275a50c
	if (ctx.cr6.gt) goto loc_8275A50C;
	// lwz r27,4(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 4);
	// add r26,r8,r10
	r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(r26.s32, r27.s32, ctx.xer);
	// bgt cr6,0x8275a50c
	if (ctx.cr6.gt) goto loc_8275A50C;
	// lwz r27,8(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 8);
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r25,r27,31
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFFFFFF) != 0);
	r25.s64 = r27.s32 >> 31;
	// xor r27,r27,r25
	r27.u64 = r27.u64 ^ r25.u64;
	// subf r27,r25,r27
	r27.u64 = r27.u64 - r25.u64;
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(r26.s32, r27.s32, ctx.xer);
	// bgt cr6,0x8275a50c
	if (ctx.cr6.gt) goto loc_8275A50C;
	// lwz r27,14604(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 14604);
	// cmpw cr6,r27,r6
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8275a228
	if (ctx.cr6.eq) goto loc_8275A228;
	// stw r6,14604(r31)
	REX_STORE_U32(r31.u32 + 14604, ctx.r6.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8275A228:
	// lwz r6,14608(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 14608);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8275a23c
	if (ctx.cr6.eq) goto loc_8275A23C;
	// stw r7,14608(r31)
	REX_STORE_U32(r31.u32 + 14608, ctx.r7.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8275A23C:
	// lwz r7,14612(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 14612);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8275a250
	if (ctx.cr6.eq) goto loc_8275A250;
	// stw r8,14612(r31)
	REX_STORE_U32(r31.u32 + 14612, ctx.r8.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8275A250:
	// lwz r8,14616(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 14616);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8275a264
	if (ctx.cr6.eq) goto loc_8275A264;
	// stw r9,14616(r31)
	REX_STORE_U32(r31.u32 + 14616, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8275A264:
	// lwz r9,14516(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14516);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8275a280
	if (ctx.cr6.eq) goto loc_8275A280;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,14516(r31)
	REX_STORE_U32(r31.u32 + 14516, ctx.r10.u32);
loc_8275A280:
	// lwz r9,14520(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14520);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8275a29c
	if (ctx.cr6.eq) goto loc_8275A29C;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r5,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r5,14520(r31)
	REX_STORE_U32(r31.u32 + 14520, ctx.r5.u32);
loc_8275A29C:
	// lwz r9,14480(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14480);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8275a2b8
	if (ctx.cr6.eq) goto loc_8275A2B8;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,14480(r31)
	REX_STORE_U32(r31.u32 + 14480, ctx.r10.u32);
loc_8275A2B8:
	// lwz r10,14484(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14484);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8275a2d4
	if (ctx.cr6.eq) goto loc_8275A2D4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r5,14484(r31)
	REX_STORE_U32(r31.u32 + 14484, ctx.r5.u32);
loc_8275A2D4:
	// lwz r10,14588(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// beq cr6,0x8275a2f4
	if (ctx.cr6.eq) goto loc_8275A2F4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r30,14588(r31)
	REX_STORE_U32(r31.u32 + 14588, r30.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8275A2F4:
	// lwz r10,14592(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14592);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8275a308
	if (ctx.cr6.eq) goto loc_8275A308;
	// stw r3,14592(r31)
	REX_STORE_U32(r31.u32 + 14592, ctx.r3.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8275A308:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r9,14596(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14596);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8275a32c
	if (ctx.cr6.eq) goto loc_8275A32C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14596(r31)
	REX_STORE_U32(r31.u32 + 14596, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8275A32C:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r9,14600(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14600);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8275a344
	if (ctx.cr6.eq) goto loc_8275A344;
	// stw r10,14600(r31)
	REX_STORE_U32(r31.u32 + 14600, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8275A344:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8275a35c
	if (ctx.cr6.eq) goto loc_8275A35C;
	// stw r4,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8275A35C:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8275a378
	if (ctx.cr6.eq) goto loc_8275A378;
	// stw r10,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8275A378:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r9,14(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// beq cr6,0x8275a390
	if (ctx.cr6.eq) goto loc_8275A390;
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r29,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, r29.u16);
loc_8275A390:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lhz r10,14(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 14);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lhz r7,14(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8275a3b0
	if (ctx.cr6.eq) goto loc_8275A3B0;
	// sth r10,14(r9)
	REX_STORE_U16(ctx.r9.u32 + 14, ctx.r10.u16);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8275A3B0:
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,14624(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14624);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8275a3d4
	if (ctx.cr6.eq) goto loc_8275A3D4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14624(r31)
	REX_STORE_U32(r31.u32 + 14624, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8275A3D4:
	// lwz r10,252(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r9,14628(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14628);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8275a3f8
	if (ctx.cr6.eq) goto loc_8275A3F8;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14628(r31)
	REX_STORE_U32(r31.u32 + 14628, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8275A3F8:
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r9,14632(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14632);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8275a41c
	if (ctx.cr6.eq) goto loc_8275A41C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,14632(r31)
	REX_STORE_U32(r31.u32 + 14632, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8275A41C:
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r9,14620(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 14620);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8275a434
	if (ctx.cr6.eq) goto loc_8275A434;
	// stw r10,14620(r31)
	REX_STORE_U32(r31.u32 + 14620, ctx.r10.u32);
	// b 0x8275a43c
	goto loc_8275A43C;
loc_8275A434:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8275a4e0
	if (!ctx.cr6.eq) goto loc_8275A4E0;
loc_8275A43C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82787e88
	ctx.lr = 0x8275A444;
	sub_82787E88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8275a510
	if (!ctx.cr6.eq) goto loc_8275A510;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8275a46c
	if (!ctx.cr6.eq) goto loc_8275A46C;
	// lhz r10,14(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8275a46c
	if (!ctx.cr6.eq) goto loc_8275A46C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// b 0x8275a478
	goto loc_8275A478;
loc_8275A46C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8275a488
	if (!ctx.cr6.eq) goto loc_8275A488;
	// li r5,12
	ctx.r5.s64 = 12;
loc_8275A478:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x826a1e70
	ctx.lr = 0x8275A488;
	sub_826A1E70(ctx, base);
loc_8275A488:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8275a49c
	if (!ctx.cr6.lt) goto loc_8275A49C;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8275A49C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// bl 0x8278b3c8
	ctx.lr = 0x8275A4C0;
	sub_8278B3C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8275a510
	if (!ctx.cr6.eq) goto loc_8275A510;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82788dc0
	ctx.lr = 0x8275A4D0;
	sub_82788DC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275a500
	if (ctx.cr6.eq) goto loc_8275A500;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8275A4E0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8275a500
	if (!ctx.cr6.eq) goto loc_8275A500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,14600(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 14600);
	// lwz r6,14596(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 14596);
	// lwz r5,14592(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14592);
	// lwz r4,14588(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 14588);
	// bl 0x82789d60
	ctx.lr = 0x8275A500;
	sub_82789D60(ctx, base);
loc_8275A500:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8275A50C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8275A510:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8276F590) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8276F598;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r1,-120
	ctx.r10.s64 = ctx.r1.s64 + -120;
	// rlwimi r9,r4,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// li r31,0
	r31.s64 = 0;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276F5BC:
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8276f5bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276F5BC;
	// lis r30,16
	r30.s64 = 1048576;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r30,-112(r1)
	REX_STORE_U32(ctx.r1.u32 + -112, r30.u32);
	// ble cr6,0x8276f6d8
	if (!ctx.cr6.gt) goto loc_8276F6D8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r4,r9,-4
	ctx.r4.s64 = ctx.r9.s64 + -4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8276F5E0:
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// rlwinm r10,r9,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFC;
	// clrlwi r7,r9,26
	ctx.r7.u64 = ctx.r9.u32 & 0x3F;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfic r11,r7,20
	ctx.xer.ca = ctx.r7.u32 <= 20;
	ctx.r11.u64 = static_cast<uint64_t>(20) - ctx.r7.u64;
	// slw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sraw r5,r6,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r5.s64 = ctx.r6.s32 >> temp.u32;
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// and r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 & ctx.r6.u64;
	// or r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 | ctx.r7.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r4.u32 = ea;
	// beq cr6,0x8276f624
	if (ctx.cr6.eq) goto loc_8276F624;
	// lwz r5,-4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x8276f628
	goto loc_8276F628;
loc_8276F624:
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_8276F628:
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// bne cr6,0x8276f638
	if (!ctx.cr6.eq) goto loc_8276F638;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
loc_8276F638:
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// ble cr6,0x8276f69c
	if (!ctx.cr6.gt) goto loc_8276F69C;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8276F650:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8276f69c
	if (!ctx.cr6.eq) goto loc_8276F69C;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r29,r10,r8
	r29.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8276f674
	if (ctx.cr6.eq) goto loc_8276F674;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x8276f678
	goto loc_8276F678;
loc_8276F674:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8276F678:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bne cr6,0x8276f68c
	if (!ctx.cr6.eq) goto loc_8276F68C;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
loc_8276F68C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// bgt cr6,0x8276f650
	if (ctx.cr6.gt) goto loc_8276F650;
loc_8276F69C:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bge cr6,0x8276f6d4
	if (!ctx.cr6.lt) goto loc_8276F6D4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8276F6B8:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8276f6d4
	if (!ctx.cr6.eq) goto loc_8276F6D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// blt cr6,0x8276f6b8
	if (ctx.cr6.lt) goto loc_8276F6B8;
loc_8276F6D4:
	// bdnz 0x8276f5e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276F5E0;
loc_8276F6D8:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8277CE78) {
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
	ctx.lr = 0x8277CE80;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c9c
	ctx.lr = 0x8277CE88;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r9,484(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// stw r10,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// std r5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fcfid f31,f0
	f31.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f29,-22776(r10)
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + -22776);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// lwz r24,452(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r8,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// srawi r22,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	r22.s64 = r21.s32 >> 1;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfd f0,-9920(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + -9920);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfd f13,8312(r3)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 8312);
	// fmul f11,f31,f0
	ctx.f11.f64 = f31.f64 * ctx.f0.f64;
	// fmul f28,f12,f29
	f28.f64 = ctx.f12.f64 * f29.f64;
	// fmul f10,f28,f13
	ctx.f10.f64 = f28.f64 * ctx.f13.f64;
	// fsub f9,f10,f11
	ctx.f9.f64 = ctx.f10.f64 - ctx.f11.f64;
	// fadd f8,f10,f11
	ctx.f8.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fctiwz f7,f9
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f7.u64);
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f6.u64);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// ble cr6,0x8277cfb8
	if (!ctx.cr6.gt) goto loc_8277CFB8;
	// subf r29,r10,r21
	r29.u64 = r21.u64 - ctx.r10.u64;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r31,r24
	r31.u64 = r24.u64;
	// subf r26,r24,r8
	r26.u64 = ctx.r8.u64 - r24.u64;
	// subf r27,r24,r21
	r27.u64 = r21.u64 - r24.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_8277CF50:
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(r30.s32, r21.s32, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// blt cr6,0x8277cf60
	if (ctx.cr6.lt) goto loc_8277CF60;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_8277CF60:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8277cf74
	if (!ctx.cr6.gt) goto loc_8277CF74;
	// add r4,r31,r26
	ctx.r4.u64 = r31.u64 + r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277CF74;
	sub_826A1E70(ctx, base);
loc_8277CF74:
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(r29.s32, r21.s32, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// blt cr6,0x8277cf84
	if (ctx.cr6.lt) goto loc_8277CF84;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_8277CF84:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8277cfa0
	if (!ctx.cr6.gt) goto loc_8277CFA0;
	// subf r11,r5,r31
	ctx.r11.u64 = r31.u64 - ctx.r5.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277CFA0;
	sub_826A1E70(ctx, base);
loc_8277CFA0:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// add r31,r31,r21
	r31.u64 = r31.u64 + r21.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x8277cf50
	if (!ctx.cr0.eq) goto loc_8277CF50;
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
loc_8277CFB8:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8277d08c
	if (!ctx.cr6.gt) goto loc_8277D08C;
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// subf r27,r28,r11
	r27.u64 = ctx.r11.u64 - r28.u64;
loc_8277CFD0:
	// add r11,r27,r28
	ctx.r11.u64 = r27.u64 + r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(r30.s32, r22.s32, ctx.xer);
	// blt cr6,0x8277cfe8
	if (ctx.cr6.lt) goto loc_8277CFE8;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8277CFE8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8277d024
	if (!ctx.cr6.gt) goto loc_8277D024;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r10,436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r9,460(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mullw r31,r11,r22
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// add r4,r31,r10
	ctx.r4.u64 = r31.u64 + ctx.r10.u64;
	// add r3,r31,r9
	ctx.r3.u64 = r31.u64 + ctx.r9.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277D010;
	sub_826A1E70(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r23
	ctx.r4.u64 = r31.u64 + r23.u64;
	// add r3,r31,r8
	ctx.r3.u64 = r31.u64 + ctx.r8.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277D024;
	sub_826A1E70(ctx, base);
loc_8277D024:
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// subf r30,r11,r22
	r30.u64 = r22.u64 - ctx.r11.u64;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(r30.s32, r22.s32, ctx.xer);
	// blt cr6,0x8277d038
	if (ctx.cr6.lt) goto loc_8277D038;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8277D038:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8277d078
	if (!ctx.cr6.gt) goto loc_8277D078;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r10,460(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r8,r9,r22
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r22.s32);
	// subf r31,r30,r8
	r31.u64 = ctx.r8.u64 - r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = r31.u64 + r15.u64;
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277D064;
	sub_826A1E70(ctx, base);
	// lwz r7,468(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r17
	ctx.r4.u64 = r31.u64 + r17.u64;
	// add r3,r31,r7
	ctx.r3.u64 = r31.u64 + ctx.r7.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277D078;
	sub_826A1E70(ctx, base);
loc_8277D078:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r28,r28,-2
	r28.s64 = r28.s64 + -2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8277cfd0
	if (ctx.cr6.lt) goto loc_8277CFD0;
loc_8277D08C:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r14,r21,-1
	r14.s64 = r21.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r16,r25,r9
	r16.u64 = ctx.r9.u64 - r25.u64;
	// addc r6,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// and r30,r4,r11
	r30.u64 = ctx.r4.u64 & ctx.r11.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f27,32424(r10)
	ctx.fpscr.disableFlushMode();
	f27.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// addi r18,r22,-1
	r18.s64 = r22.s64 + -1;
	// subf r19,r25,r24
	r19.u64 = r24.u64 - r25.u64;
	// lfd f26,-22768(r9)
	f26.u64 = REX_LOAD_U64(ctx.r9.u32 + -22768);
	// subfic r20,r25,1
	ctx.xer.ca = r25.u32 <= 1;
	r20.u64 = static_cast<uint64_t>(1) - r25.u64;
	// lfd f25,-22784(r11)
	f25.u64 = REX_LOAD_U64(ctx.r11.u32 + -22784);
loc_8277D0DC:
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x8277d0f0
	if (ctx.cr6.lt) goto loc_8277D0F0;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8277D0F0:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8277d2b0
	if (!ctx.cr6.lt) goto loc_8277D2B0;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f28
	ctx.f12.f64 = ctx.f13.f64 - f28.f64;
	// fsub f11,f12,f28
	ctx.f11.f64 = ctx.f12.f64 - f28.f64;
	// fmul f30,f11,f26
	f30.f64 = ctx.f11.f64 * f26.f64;
	// fdiv f1,f30,f31
	ctx.f1.f64 = f30.f64 / f31.f64;
	// bl 0x8269d370
	ctx.lr = 0x8277D11C;
	sub_8269D370(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f25.f64 - ctx.f1.f64;
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// fmsub f9,f1,f31,f30
	ctx.f9.f64 = std::fma(ctx.f1.f64, f31.f64, -f30.f64);
	// add r6,r30,r25
	ctx.r6.u64 = r30.u64 + r25.u64;
	// lwz r7,396(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// add r10,r6,r20
	ctx.r10.u64 = ctx.r6.u64 + r20.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// fmsub f8,f10,f31,f30
	ctx.f8.f64 = std::fma(ctx.f10.f64, f31.f64, -f30.f64);
	// fmadd f7,f9,f29,f27
	ctx.f7.f64 = std::fma(ctx.f9.f64, f29.f64, f27.f64);
	// fmadd f6,f8,f29,f27
	ctx.f6.f64 = std::fma(ctx.f8.f64, f29.f64, f27.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f5.u64);
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// neg r29,r9
	r29.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f4.u64);
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// neg r28,r8
	r28.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// mullw r8,r11,r28
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + r30.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + r25.u64;
	// add r5,r9,r25
	ctx.r5.u64 = ctx.r9.u64 + r25.u64;
	// blt cr6,0x8277d184
	if (ctx.cr6.lt) goto loc_8277D184;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8277D184:
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// neg r3,r28
	ctx.r3.s64 = static_cast<int64_t>(-r28.u64);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// add r7,r6,r16
	ctx.r7.u64 = ctx.r6.u64 + r16.u64;
	// neg r10,r29
	ctx.r10.s64 = static_cast<int64_t>(-r29.u64);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// add r3,r6,r19
	ctx.r3.u64 = ctx.r6.u64 + r19.u64;
	// bl 0x8277bd48
	ctx.lr = 0x8277D1C0;
	sub_8277BD48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277d2a8
	if (!ctx.cr6.eq) goto loc_8277D2A8;
	// srawi r31,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r31.s64 = r30.s32 >> 1;
	// lwz r7,460(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r26,436(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// addi r9,r22,1
	ctx.r9.s64 = r22.s64 + 1;
	// srawi r10,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r10.s64 = r28.s32 >> 1;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r28,r8,r31
	r28.u64 = ctx.r8.u64 + r31.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r27,r9,r31
	r27.u64 = ctx.r9.u64 + r31.u64;
	// addi r29,r31,1
	r29.s64 = r31.s64 + 1;
	// add r3,r31,r7
	ctx.r3.u64 = r31.u64 + ctx.r7.u64;
	// add r4,r28,r15
	ctx.r4.u64 = r28.u64 + r15.u64;
	// add r5,r27,r15
	ctx.r5.u64 = r27.u64 + r15.u64;
	// add r6,r31,r15
	ctx.r6.u64 = r31.u64 + r15.u64;
	// add r7,r31,r26
	ctx.r7.u64 = r31.u64 + r26.u64;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8277d21c
	if (!ctx.cr6.lt) goto loc_8277D21C;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_8277D21C:
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r24,r8,1
	r24.s64 = ctx.r8.s64 + 1;
	// addi r26,r9,1
	r26.s64 = ctx.r9.s64 + 1;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// neg r25,r11
	r25.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// neg r23,r10
	r23.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// bl 0x8277bd48
	ctx.lr = 0x8277D254;
	sub_8277BD48(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r9,444(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r28,r17
	ctx.r4.u64 = r28.u64 + r17.u64;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r3,r31,r10
	ctx.r3.u64 = r31.u64 + ctx.r10.u64;
	// add r5,r27,r17
	ctx.r5.u64 = r27.u64 + r17.u64;
	// add r6,r31,r17
	ctx.r6.u64 = r31.u64 + r17.u64;
	// add r7,r31,r9
	ctx.r7.u64 = r31.u64 + ctx.r9.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8277d280
	if (ctx.cr6.lt) goto loc_8277D280;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_8277D280:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// bl 0x8277bd48
	ctx.lr = 0x8277D2A0;
	sub_8277BD48(ctx, base);
	// lwz r24,452(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r25,404(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_8277D2A8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x8277d0dc
	goto loc_8277D0DC;
loc_8277D2B0:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// subf r11,r21,r11
	ctx.r11.u64 = ctx.r11.u64 - r21.u64;
	// addi r23,r11,2
	r23.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bge cr6,0x8277d2c8
	if (!ctx.cr6.lt) goto loc_8277D2C8;
	// li r23,1
	r23.s64 = 1;
loc_8277D2C8:
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r11,r21,r10
	ctx.r11.u64 = ctx.r10.u64 - r21.u64;
	// mullw r19,r23,r21
	r19.s64 = int64_t(r23.s32) * int64_t(r21.s32);
	// addi r16,r11,2
	r16.s64 = ctx.r11.s64 + 2;
	// subf r20,r23,r9
	r20.u64 = ctx.r9.u64 - r23.u64;
loc_8277D2DC:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// blt cr6,0x8277d2ec
	if (ctx.cr6.lt) goto loc_8277D2EC;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_8277D2EC:
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8277d4d0
	if (!ctx.cr6.lt) goto loc_8277D4D0;
	// add r11,r14,r23
	ctx.r11.u64 = r14.u64 + r23.u64;
	// add r31,r19,r14
	r31.u64 = r19.u64 + r14.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f28
	ctx.f12.f64 = ctx.f13.f64 - f28.f64;
	// fsub f11,f12,f28
	ctx.f11.f64 = ctx.f12.f64 - f28.f64;
	// fmul f30,f11,f26
	f30.f64 = ctx.f11.f64 * f26.f64;
	// fdiv f1,f30,f31
	ctx.f1.f64 = f30.f64 / f31.f64;
	// bl 0x8269d370
	ctx.lr = 0x8277D320;
	sub_8269D370(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f25.f64 - ctx.f1.f64;
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// fmsub f9,f1,f31,f30
	ctx.f9.f64 = std::fma(ctx.f1.f64, f31.f64, -f30.f64);
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// add r3,r31,r24
	ctx.r3.u64 = r31.u64 + r24.u64;
	// add r6,r31,r25
	ctx.r6.u64 = r31.u64 + r25.u64;
	// add r7,r31,r9
	ctx.r7.u64 = r31.u64 + ctx.r9.u64;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(r21.s32, r20.s32, ctx.xer);
	// fmsub f8,f10,f31,f30
	ctx.f8.f64 = std::fma(ctx.f10.f64, f31.f64, -f30.f64);
	// fmadd f7,f9,f29,f27
	ctx.f7.f64 = std::fma(ctx.f9.f64, f29.f64, f27.f64);
	// fmadd f6,f8,f29,f27
	ctx.f6.f64 = std::fma(ctx.f8.f64, f29.f64, f27.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f5.u64);
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// neg r29,r8
	r29.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r30,r5
	r30.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + r25.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + r25.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// blt cr6,0x8277d390
	if (ctx.cr6.lt) goto loc_8277D390;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_8277D390:
	// add r10,r30,r23
	ctx.r10.u64 = r30.u64 + r23.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r31,r30,r21
	r31.u64 = r30.u64 + r21.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// add r9,r29,r23
	ctx.r9.u64 = r29.u64 + r23.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// add r11,r29,r21
	ctx.r11.u64 = r29.u64 + r21.u64;
	// neg r10,r9
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8277bd48
	ctx.lr = 0x8277D3C4;
	sub_8277BD48(ctx, base);
	// clrlwi r10,r23,31
	ctx.r10.u64 = r23.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8277d4c0
	if (ctx.cr6.eq) goto loc_8277D4C0;
	// addi r11,r23,1
	ctx.r11.s64 = r23.s64 + 1;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r10,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r10.s64 = r29.s32 >> 1;
	// lwz r3,460(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// srawi r9,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r9.s64 = r30.s32 >> 1;
	// lwz r27,436(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r7,r21,-2
	ctx.r7.s64 = r21.s64 + -2;
	// addi r8,r22,1
	ctx.r8.s64 = r22.s64 + 1;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw r6,r11,r22
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r31,r6,r5
	r31.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r29,r7,r31
	r29.u64 = ctx.r7.u64 + r31.u64;
	// add r28,r8,r31
	r28.u64 = ctx.r8.u64 + r31.u64;
	// subf r30,r11,r4
	r30.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// add r4,r29,r15
	ctx.r4.u64 = r29.u64 + r15.u64;
	// add r5,r28,r15
	ctx.r5.u64 = r28.u64 + r15.u64;
	// add r6,r31,r15
	ctx.r6.u64 = r31.u64 + r15.u64;
	// add r7,r31,r27
	ctx.r7.u64 = r31.u64 + r27.u64;
	// cmpw cr6,r22,r30
	ctx.cr6.compare<int32_t>(r22.s32, r30.s32, ctx.xer);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// blt cr6,0x8277d438
	if (ctx.cr6.lt) goto loc_8277D438;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
loc_8277D438:
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r27,r10,r22
	r27.u64 = ctx.r10.u64 + r22.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// neg r26,r8
	r26.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// add r25,r9,r22
	r25.u64 = ctx.r9.u64 + r22.u64;
	// neg r24,r10
	r24.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x8277bd48
	ctx.lr = 0x8277D470;
	sub_8277BD48(ctx, base);
	// lwz r7,468(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r11,444(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r29,r17
	ctx.r4.u64 = r29.u64 + r17.u64;
	// add r3,r31,r7
	ctx.r3.u64 = r31.u64 + ctx.r7.u64;
	// add r5,r28,r17
	ctx.r5.u64 = r28.u64 + r17.u64;
	// add r6,r31,r17
	ctx.r6.u64 = r31.u64 + r17.u64;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + ctx.r11.u64;
	// cmpw cr6,r22,r30
	ctx.cr6.compare<int32_t>(r22.s32, r30.s32, ctx.xer);
	// bge cr6,0x8277d498
	if (!ctx.cr6.lt) goto loc_8277D498;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8277D498:
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// bl 0x8277bd48
	ctx.lr = 0x8277D4B8;
	sub_8277BD48(ctx, base);
	// lwz r24,452(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r25,404(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_8277D4C0:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// add r19,r19,r21
	r19.u64 = r19.u64 + r21.u64;
	// addi r20,r20,-1
	r20.s64 = r20.s64 + -1;
	// b 0x8277d2dc
	goto loc_8277D2DC;
loc_8277D4D0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ce8
	ctx.lr = 0x8277D4DC;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827B1AB8) {
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
	ctx.lr = 0x827B1AC0;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// bne cr6,0x827b1bd0
	if (!ctx.cr6.eq) goto loc_827B1BD0;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r5,96
	ctx.r11.s64 = ctx.r5.s64 + 96;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r29,r4,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r4,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r30,-96
	r30.s64 = -96;
	// li r31,-48
	r31.s64 = -48;
	// li r5,48
	ctx.r5.s64 = 48;
loc_827B1AFC:
	// add r9,r29,r3
	ctx.r9.u64 = r29.u64 + ctx.r3.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r29,r3
	ea = (r29.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r28,r3
	ctx.r8.u64 = r28.u64 + ctx.r3.u64;
	// lvx128 v61,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v60,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r28,r3
	ea = (r28.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v63,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v3,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v59,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v1,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v62,v54,v5
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v30,v58,v55,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v61,v57,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v28,v0,v4
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v2
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v26,v9,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v23,v8,v9
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v25,v28,v8
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v24,v10,v27
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vslh v22,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v18,v22,v11
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v15,v19,v11
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v17,v21,v11
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v16,v20,v11
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v14,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bdnz 0x827b1afc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B1AFC;
	// b 0x826a1d00
	return;
loc_827B1BD0:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827b1d40
	if (!ctx.cr6.gt) goto loc_827B1D40;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r5,96
	ctx.r11.s64 = ctx.r5.s64 + 96;
	// rlwinm r29,r4,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,-96
	r30.s64 = -96;
	// li r31,-48
	r31.s64 = -48;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r26,-80
	r26.s64 = -80;
	// li r27,-32
	r27.s64 = -32;
	// li r28,64
	r28.s64 = 64;
loc_827B1C10:
	// add r9,r6,r3
	ctx.r9.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvx128 v53,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v51,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v50,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r3,r29,r3
	ctx.r3.u64 = r29.u64 + ctx.r3.u64;
	// lvx128 v49,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v52,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v47,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v3,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v45,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v51,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v44,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v49,v46,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v44,v45,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v30,v3,v10
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v29,v10,v5
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v27,v5,v4
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrglb v26,v0,v6
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v25,v31,v9
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v24,v9,v8
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v23,v8,v7
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v22,v4,v28
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v21,v7,v26
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vslh v20,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v10,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v9,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v8,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v4,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v3,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v1,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v27,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v31,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v26,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v30,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v29,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bdnz 0x827b1c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B1C10;
loc_827B1D40:
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_827C98D8) {
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
	ctx.lr = 0x827C98E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lbz r25,668(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 668);
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// clrlwi r27,r25,30
	r27.u64 = r25.u32 & 0x3;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// addi r26,r3,232
	r26.s64 = ctx.r3.s64 + 232;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lwz r4,632(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
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
	// blt cr6,0x827c9958
	if (ctx.cr6.lt) goto loc_827C9958;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82731930
	ctx.lr = 0x827C9950;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c99b0
	goto loc_827C99B0;
loc_827C9958:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c99ac
	if (!ctx.cr6.gt) goto loc_827C99AC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C9964:
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
	// lbzx r23,r26,r3
	r23.u64 = REX_LOAD_U8(r26.u32 + ctx.r3.u32);
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
	// bdnz 0x827c9964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C9964;
loc_827C99AC:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C99B0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827c9a1c
	if (!ctx.cr6.eq) goto loc_827C9A1C;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	// rlwinm r9,r27,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x8;
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
	// b 0x827c9a38
	goto loc_827C9A38;
loc_827C9A1C:
	// rlwinm r10,r27,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x8;
	// clrlwi r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x827af130
	ctx.lr = 0x827C9A38;
	sub_827AF130(ctx, base);
loc_827C9A38:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r25,r25,30,26,31
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r27,r25,30
	r27.u64 = r25.u32 & 0x3;
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
	// blt cr6,0x827c9a94
	if (ctx.cr6.lt) goto loc_827C9A94;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82731930
	ctx.lr = 0x827C9A8C;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c9aec
	goto loc_827C9AEC;
loc_827C9A94:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c9ae8
	if (!ctx.cr6.gt) goto loc_827C9AE8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C9AA0:
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
	// lbzx r23,r26,r3
	r23.u64 = REX_LOAD_U8(r26.u32 + ctx.r3.u32);
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
	// bdnz 0x827c9aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C9AA0;
loc_827C9AE8:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C9AEC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827c9b58
	if (!ctx.cr6.eq) goto loc_827C9B58;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// clrlwi r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	// rlwinm r9,r27,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x8;
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
	// b 0x827c9b74
	goto loc_827C9B74;
loc_827C9B58:
	// rlwinm r10,r27,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x8;
	// clrlwi r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x827af130
	ctx.lr = 0x827C9B74;
	sub_827AF130(ctx, base);
loc_827C9B74:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r25,30,26,31
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3F;
	// lwz r4,632(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 632);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r27,r9,30
	r27.u64 = ctx.r9.u32 & 0x3;
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
	// blt cr6,0x827c9bd0
	if (ctx.cr6.lt) goto loc_827C9BD0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82731930
	ctx.lr = 0x827C9BC8;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c9c28
	goto loc_827C9C28;
loc_827C9BD0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827c9c24
	if (!ctx.cr6.gt) goto loc_827C9C24;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827C9BDC:
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
	// lbzx r29,r26,r3
	r29.u64 = REX_LOAD_U8(r26.u32 + ctx.r3.u32);
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
	// bdnz 0x827c9bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C9BDC;
loc_827C9C24:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_827C9C28:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	// bne cr6,0x827c9c98
	if (!ctx.cr6.eq) goto loc_827C9C98;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rlwinm r9,r27,2,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + r24.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r5,r6,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rldicr r3,r4,32,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// std r10,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_827C9C98:
	// rlwinm r11,r27,2,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x827af130
	ctx.lr = 0x827C9CB0;
	sub_827AF130(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

