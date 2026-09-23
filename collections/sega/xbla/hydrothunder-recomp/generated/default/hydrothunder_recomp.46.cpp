#include "hydrothunder_funcs.46.h"

DEFINE_REX_FUNC(sub_821223D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821223D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x821223F0;
	sub_82120600(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82122690
	ctx.lr = 0x82122400;
	sub_82122690(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x82122418;
	sub_82120AC0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212243c
	if (!ctx.cr6.eq) goto loc_8212243C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-26632
	ctx.r4.s64 = ctx.r11.s64 + -26632;
	// addi r3,r10,-26616
	ctx.r3.s64 = ctx.r10.s64 + -26616;
	// li r5,122
	ctx.r5.s64 = 122;
	// bl 0x821231d0
	ctx.lr = 0x8212243C;
	sub_821231D0(ctx, base);
loc_8212243C:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mulli r11,r29,28
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(28));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82122458
	if (ctx.cr6.lt) goto loc_82122458;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82122458:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212AD08) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,61(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 61);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8212ad28
	if (!ctx.cr0.eq) goto loc_8212AD28;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_8212AD28:
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
	// bne cr6,0x8212ad48
	if (!ctx.cr6.eq) goto loc_8212AD48;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8212ad64
	goto loc_8212AD64;
loc_8212AD48:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8212ad60
	if (!ctx.cr6.eq) goto loc_8212AD60;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8212ad64
	goto loc_8212AD64;
loc_8212AD60:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8212AD64:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212DD28) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r3,r10,44
	ctx.r3.s64 = ctx.r10.s64 + 44;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82125c20
	ctx.lr = 0x8212DD6C;
	sub_82125C20(ctx, base);
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
	ctx.lr = 0x8212DD84;
	sub_82125C98(ctx, base);
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

DEFINE_REX_FUNC(sub_82132498) {
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
	// mulli r11,r4,436
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(436));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,272
	r31.s64 = ctx.r11.s64 + 272;
	// lbz r11,272(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 272);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213255c
	if (ctx.cr0.eq) goto loc_8213255C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,2020
	ctx.r3.s64 = ctx.r3.s64 + 2020;
	// bl 0x8214fcc8
	ctx.lr = 0x821324D4;
	sub_8214FCC8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8213255c
	if (!ctx.cr6.gt) goto loc_8213255C;
	// lwz r11,2016(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2016);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8213255c
	if (ctx.cr6.gt) goto loc_8213255C;
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// lwz r7,428(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 428);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// srawi r6,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 4;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82132554
	if (ctx.cr6.eq) goto loc_82132554;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addic. r11,r11,172
	ctx.xer.ca = ctx.r11.u32 > 4294967123;
	ctx.r11.s64 = ctx.r11.s64 + 172;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82132554
	if (ctx.cr0.eq) goto loc_82132554;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mulli r10,r8,116
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(116));
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,2036(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2036);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// li r5,116
	ctx.r5.s64 = 116;
	// bl 0x826a1e70
	ctx.lr = 0x8213254C;
	sub_826A1E70(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_82132554:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82132560
	goto loc_82132560;
loc_8213255C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82132560:
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

DEFINE_REX_FUNC(sub_8213A230) {
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
	// addi r11,r11,-19104
	ctx.r11.s64 = ctx.r11.s64 + -19104;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8213a25c
	if (ctx.cr0.eq) goto loc_8213A25C;
	// bl 0x8269ce98
	ctx.lr = 0x8213A25C;
	sub_8269CE98(ctx, base);
loc_8213A25C:
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

DEFINE_REX_FUNC(sub_8213B2B0) {
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
	ctx.lr = 0x8213B2B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,744
	ctx.r11.s64 = 48758784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,47662
	ctx.r11.u64 = ctx.r11.u64 | 47662;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8213b2e0
	if (!ctx.cr6.gt) goto loc_8213B2E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x8213B2E0;
	sub_822F6020(ctx, base);
loc_8213B2E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r25,88
	r25.s64 = 88;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r25
	ctx.r11.u64 = uint32_t((r25.s32 && !(ctx.r11.s32 == INT32_MIN && r25.s32 == -1)) ? ctx.r11.s32 / r25.s32 : 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x8213b3a8
	if (!ctx.cr6.lt) goto loc_8213B3A8;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8213b318
	if (ctx.cr6.eq) goto loc_8213B318;
	// mulli r3,r26,88
	ctx.r3.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(88));
	// bl 0x822f6280
	ctx.lr = 0x8213B310;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8213b3b0
	if (ctx.cr0.eq) goto loc_8213B3B0;
loc_8213B318:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8213b344
	goto loc_8213B344;
loc_8213B328:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8213b33c
	if (ctx.cr6.eq) goto loc_8213B33C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213b670
	ctx.lr = 0x8213B33C;
	sub_8213B670(ctx, base);
loc_8213B33C:
	// addi r30,r30,88
	r30.s64 = r30.s64 + 88;
	// addi r29,r29,88
	r29.s64 = r29.s64 + 88;
loc_8213B344:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x8213b328
	if (!ctx.cr6.eq) goto loc_8213B328;
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
	// beq cr6,0x8213b38c
	if (ctx.cr6.eq) goto loc_8213B38C;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8213b384
	if (ctx.cr6.eq) goto loc_8213B384;
loc_8213B370:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8213add0
	ctx.lr = 0x8213B378;
	sub_8213ADD0(ctx, base);
	// addi r29,r29,88
	r29.s64 = r29.s64 + 88;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x8213b370
	if (!ctx.cr6.eq) goto loc_8213B370;
loc_8213B384:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8213B38C;
	sub_8269CE98(ctx, base);
loc_8213B38C:
	// mulli r11,r26,88
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(88));
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// mulli r10,r27,88
	ctx.r10.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(88));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8213B3A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8213B3B0:
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
	ctx.lr = 0x8213B3CC;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82146F18) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821473E0) {
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
	// addi r11,r11,-14028
	ctx.r11.s64 = ctx.r11.s64 + -14028;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8214740c
	if (ctx.cr0.eq) goto loc_8214740C;
	// bl 0x8269ce98
	ctx.lr = 0x8214740C;
	sub_8269CE98(ctx, base);
loc_8214740C:
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

DEFINE_REX_FUNC(sub_82148C88) {
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
	// lwz r30,20(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82148bb8
	ctx.lr = 0x82148CB8;
	sub_82148BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82148cc4
	if (ctx.cr0.eq) goto loc_82148CC4;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
loc_82148CC4:
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

DEFINE_REX_FUNC(sub_8214B990) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,28(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82293d58
	ctx.lr = 0x8214B9B0;
	sub_82293D58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8214C760) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6052(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6052);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214C794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214c7d0
	if (ctx.cr6.eq) goto loc_8214C7D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82193250
	ctx.lr = 0x8214C7A8;
	sub_82193250(ctx, base);
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// bl 0x8269d1b8
	ctx.lr = 0x8214C7B0;
	sub_8269D1B8(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// bl 0x8269d1b8
	ctx.lr = 0x8214C7B8;
	sub_8269D1B8(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269d1b8
	ctx.lr = 0x8214C7C0;
	sub_8269D1B8(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x8269d1b8
	ctx.lr = 0x8214C7C8;
	sub_8269D1B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8214C7D0;
	sub_8269CE98(ctx, base);
loc_8214C7D0:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r30,0
	r30.s64 = 0;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c7e8
	if (ctx.cr6.eq) goto loc_8214C7E8;
	// bl 0x8214c848
	ctx.lr = 0x8214C7E8;
	sub_8214C848(ctx, base);
loc_8214C7E8:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c7fc
	if (ctx.cr6.eq) goto loc_8214C7FC;
	// bl 0x8214c920
	ctx.lr = 0x8214C7FC;
	sub_8214C920(ctx, base);
loc_8214C7FC:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c810
	if (ctx.cr6.eq) goto loc_8214C810;
	// bl 0x8214c9e8
	ctx.lr = 0x8214C810;
	sub_8214C9E8(ctx, base);
loc_8214C810:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214c824
	if (ctx.cr6.eq) goto loc_8214C824;
	// bl 0x8214cad0
	ctx.lr = 0x8214C824;
	sub_8214CAD0(ctx, base);
loc_8214C824:
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214de78
	ctx.lr = 0x8214C830;
	sub_8214DE78(ctx, base);
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

DEFINE_REX_FUNC(sub_82153360) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x82153368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca4
	ctx.lr = 0x82153370;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f27,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f27.f64 = double(temp.f32);
	// mr r24,r27
	r24.u64 = r27.u64;
	// lfs f28,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f28.f64 = double(temp.f32);
	// ble cr6,0x8215349c
	if (!ctx.cr6.gt) goto loc_8215349C;
	// lfs f30,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	f30.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f29,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f29.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// addi r26,r10,-26784
	r26.s64 = ctx.r10.s64 + -26784;
	// addi r25,r11,-26920
	r25.s64 = ctx.r11.s64 + -26920;
loc_821533C0:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// lfs f0,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 40, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x82153408
	if (ctx.cr6.gt) goto loc_82153408;
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bge cr6,0x82153408
	if (!ctx.cr6.lt) goto loc_82153408;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x82153408
	if (!ctx.cr6.gt) goto loc_82153408;
	// lfs f0,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// ble cr6,0x82153408
	if (!ctx.cr6.gt) goto loc_82153408;
	// lfs f0,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bgt cr6,0x8215340c
	if (ctx.cr6.gt) goto loc_8215340C;
loc_82153408:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8215340C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82153488
	if (ctx.cr0.eq) goto loc_82153488;
	// lwz r11,1048(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1048);
	// addi r31,r30,1048
	r31.s64 = r30.s64 + 1048;
	// lwz r10,1052(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1052);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82153438
	if (ctx.cr6.lt) goto loc_82153438;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// bl 0x821231d0
	ctx.lr = 0x82153438;
	sub_821231D0(ctx, base);
loc_82153438:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r27.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// b 0x82153490
	goto loc_82153490;
loc_82153488:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_82153490:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821533c0
	if (ctx.cr6.lt) goto loc_821533C0;
loc_8215349C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821535fc
	if (!ctx.cr6.gt) goto loc_821535FC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// addi r29,r11,-16120
	r29.s64 = ctx.r11.s64 + -16120;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// addi r3,r10,-2552
	ctx.r3.s64 = ctx.r10.s64 + -2552;
	// lfs f9,-12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
loc_821534C0:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x82153504
	if (!ctx.cr6.gt) goto loc_82153504;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f10,-8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// bl 0x821a33a0
	ctx.lr = 0x821534E8;
	sub_821A33A0(ctx, base);
	// fsubs f0,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmadds f0,f1,f0,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
loc_82153504:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lfs f13,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// ble cr6,0x821535e8
	if (!ctx.cr6.gt) goto loc_821535E8;
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f27
	ctx.f13.f64 = double(float(f31.f64 * f27.f64));
	// lfs f12,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 * ctx.f12.f64));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f11,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// lfs f10,1044(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1044);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f28,f11
	ctx.f11.f64 = double(float(f28.f64 / ctx.f11.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
loc_821535E8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821534c0
	if (ctx.cr6.lt) goto loc_821534C0;
loc_821535FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf0
	ctx.lr = 0x82153608;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8216D0E8) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8216db30
	sub_8216DB30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216D6B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8216D6C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8216d9e8
	ctx.lr = 0x8216D6CC;
	sub_8216D9E8(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,716(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 716);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D6E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r4,720(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 720);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,716(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 716);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D71C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216d72c
	if (ctx.cr6.eq) goto loc_8216D72C;
	// bl 0x8216d7f0
	ctx.lr = 0x8216D72C;
	sub_8216D7F0(ctx, base);
loc_8216D72C:
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r4,712(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 712);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r4,716(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 716);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D75C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r4,720(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 720);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,692(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 692);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D77C;
	sub_8269D1B8(ctx, base);
	// addi r29,r31,684
	r29.s64 = r31.s64 + 684;
	// li r30,7
	r30.s64 = 7;
loc_8216D784:
	// lwzu r3,-12(r29)
	ea = -12 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x8269d1b8
	ctx.lr = 0x8216D78C;
	sub_8269D1B8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8216d784
	if (!ctx.cr0.lt) goto loc_8216D784;
	// addi r30,r31,588
	r30.s64 = r31.s64 + 588;
	// li r29,1
	r29.s64 = 1;
loc_8216D79C:
	// addi r30,r30,-24
	r30.s64 = r30.s64 + -24;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D7A8;
	sub_8269D1B8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D7B0;
	sub_8269D1B8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8216d79c
	if (!ctx.cr0.lt) goto loc_8216D79C;
	// addi r30,r31,516
	r30.s64 = r31.s64 + 516;
	// li r29,15
	r29.s64 = 15;
loc_8216D7C0:
	// addi r30,r30,-24
	r30.s64 = r30.s64 + -24;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D7CC;
	sub_8269D1B8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D7D4;
	sub_8269D1B8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8216d7c0
	if (!ctx.cr0.lt) goto loc_8216D7C0;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x8269d1b8
	ctx.lr = 0x8216D7E4;
	sub_8269D1B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821781A0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,28332
	ctx.r11.s64 = ctx.r11.s64 + 28332;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821780e8
	ctx.lr = 0x821781CC;
	sub_821780E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821781dc
	if (ctx.cr0.eq) goto loc_821781DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821781DC;
	sub_8269CE98(ctx, base);
loc_821781DC:
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

DEFINE_REX_FUNC(sub_8217A528) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217A530;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r10,28948
	ctx.r10.s64 = ctx.r10.s64 + 28948;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
loc_8217A578:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217a578
	if (!ctx.cr6.eq) goto loc_8217A578;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8217a390
	ctx.lr = 0x8217A598;
	sub_8217A390(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8217A59C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217a59c
	if (!ctx.cr6.eq) goto loc_8217A59C;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8217a390
	ctx.lr = 0x8217A5C4;
	sub_8217A390(ctx, base);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8217E8D8) {
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
	ctx.lr = 0x8217E8E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,32
	r26.s64 = ctx.r3.s64 + 32;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8217a390
	ctx.lr = 0x8217E90C;
	sub_8217A390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217a4b8
	ctx.lr = 0x8217E914;
	sub_8217A4B8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8217e940
	if (ctx.cr6.eq) goto loc_8217E940;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8217cef0
	ctx.lr = 0x8217E930;
	sub_8217CEF0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8217E940:
	// lbz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 44);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r11,28704
	r27.s64 = ctx.r11.s64 + 28704;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8217e99c
	if (!ctx.cr0.eq) goto loc_8217E99C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217E968;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8217e99c
	if (!ctx.cr0.eq) goto loc_8217E99C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r11,28696
	ctx.r6.s64 = ctx.r11.s64 + 28696;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217d568
	ctx.lr = 0x8217E98C;
	sub_8217D568(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217e9d8
	if (ctx.cr0.eq) goto loc_8217E9D8;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x8217ea78
	goto loc_8217EA78;
loc_8217E99C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stb r11,44(r31)
	REX_STORE_U8(r31.u32 + 44, ctx.r11.u8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217E9B8;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8217e9e0
	if (!ctx.cr0.eq) goto loc_8217E9E0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217E9D8;
	sub_8217DAF0(ctx, base);
loc_8217E9D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217ea78
	goto loc_8217EA78;
loc_8217E9E0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addic. r31,r30,9
	ctx.xer.ca = r30.u32 > 4294967286;
	r31.s64 = r30.s64 + 9;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r11,28716
	r30.s64 = ctx.r11.s64 + 28716;
	// beq 0x8217ea38
	if (ctx.cr0.eq) goto loc_8217EA38;
loc_8217E9F0:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217ea38
	if (ctx.cr0.eq) goto loc_8217EA38;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217EA10;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8217ea38
	if (!ctx.cr0.eq) goto loc_8217EA38;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8217a438
	ctx.lr = 0x8217EA30;
	sub_8217A438(ctx, base);
	// addic. r31,r31,1
	ctx.xer.ca = r31.u32 > 4294967294;
	r31.s64 = r31.s64 + 1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8217e9f0
	if (!ctx.cr0.eq) goto loc_8217E9F0;
loc_8217EA38:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r30,r11,-20
	r30.s64 = ctx.r11.s64 + -20;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217d568
	ctx.lr = 0x8217EA5C;
	sub_8217D568(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8217ea74
	if (ctx.cr6.eq) goto loc_8217EA74;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x8217EA74;
	sub_8269D6A0(ctx, base);
loc_8217EA74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8217EA78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8218C4E8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x8218C4F0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2c98
	ctx.lr = 0x8218C4F8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// add r24,r10,r3
	r24.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r28,r11,12
	r28.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8218c6c8
	if (!ctx.cr6.gt) goto loc_8218C6C8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r25,0
	r25.s64 = 0;
	// lfs f24,-19392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	f24.f64 = double(temp.f32);
	// lfs f28,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f28.f64 = double(temp.f32);
loc_8218C54C:
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// lwz r10,104(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 104);
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218c6a0
	if (!ctx.cr6.eq) goto loc_8218C6A0;
	// lfs f13,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmsubs f27,f13,f11,f10
	f27.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f10.f64)));
	// fmadds f26,f12,f11,f0
	f26.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// bl 0x8218aa80
	ctx.lr = 0x8218C5A8;
	sub_8218AA80(ctx, base);
	// fmuls f0,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f27.f64 * f27.f64));
	// lfs f13,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmadds f0,f26,f26,f0
	ctx.f0.f64 = double(float(std::fma(f26.f64, f26.f64, ctx.f0.f64)));
	// fsqrts f25,f0
	f25.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f30,f25,f13
	f30.f64 = double(float(f25.f64 / ctx.f13.f64));
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(f30.f64, f28.f64);
	// bge cr6,0x8218c6a0
	if (!ctx.cr6.lt) goto loc_8218C6A0;
	// lfs f29,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	f29.f64 = double(temp.f32);
	// fmr f31,f28
	f31.f64 = f28.f64;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(f30.f64, f29.f64);
	// ble cr6,0x8218c5ec
	if (!ctx.cr6.gt) goto loc_8218C5EC;
	// fsubs f0,f30,f28
	ctx.f0.f64 = double(float(f30.f64 - f28.f64));
	// fsubs f13,f29,f28
	ctx.f13.f64 = double(float(f29.f64 - f28.f64));
	// fdivs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8218C5EC:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8218c6d8
	ctx.lr = 0x8218C600;
	sub_8218C6D8(ctx, base);
	// lfs f13,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(f30.f64, f29.f64);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f9,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f0,f9,f13,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmsubs f13,f11,f13,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f8.f64)));
	// ble cr6,0x8218c67c
	if (!ctx.cr6.gt) goto loc_8218C67C;
	// fmuls f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 * f27.f64));
	// lfs f8,224(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f25,f24
	ctx.f10.f64 = double(float(f25.f64 * f24.f64));
	// lfs f7,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f28
	ctx.f7.f64 = double(float(ctx.f7.f64 - f28.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmadds f11,f9,f26,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, f26.f64, ctx.f11.f64)));
	// fmuls f11,f11,f24
	ctx.f11.f64 = double(float(ctx.f11.f64 * f24.f64));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fdivs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// fdivs f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f7.f64));
	// fdivs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f7.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f13.f64)));
loc_8218C67C:
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// lfs f0,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
loc_8218C6A0:
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8218c54c
	if (ctx.cr6.lt) goto loc_8218C54C;
loc_8218C6C8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce4
	ctx.lr = 0x8218C6D4;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8219B160) {
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
	ctx.lr = 0x8219B168;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1092
	ctx.r10.s64 = 71565312;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,17475
	ctx.r10.u64 = ctx.r10.u64 | 17475;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8219b1c4
	if (ctx.cr6.lt) goto loc_8219B1C4;
	// addi r31,r7,12
	r31.s64 = ctx.r7.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8219B1A0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8219B1B0;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8219B1B8;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x822f6020
	ctx.lr = 0x8219B1C4;
	sub_822F6020(ctx, base);
loc_8219B1C4:
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
	// bne cr6,0x8219b1f0
	if (!ctx.cr6.eq) goto loc_8219B1F0;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8219b228
	goto loc_8219B228;
loc_8219B1F0:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219b214
	if (ctx.cr0.eq) goto loc_8219B214;
	// stw r29,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219b22c
	if (!ctx.cr6.eq) goto loc_8219B22C;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// b 0x8219b22c
	goto loc_8219B22C;
loc_8219B214:
	// stw r29,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219b22c
	if (!ctx.cr6.eq) goto loc_8219B22C;
loc_8219B228:
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
loc_8219B22C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// lbz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8219b32c
	if (!ctx.cr0.eq) goto loc_8219B32C;
	// li r27,0
	r27.s64 = 0;
loc_8219B248:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219b2ac
	if (!ctx.cr6.eq) goto loc_8219B2AC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8219b2bc
	if (ctx.cr0.eq) goto loc_8219B2BC;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219b284
	if (!ctx.cr6.eq) goto loc_8219B284;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82150818
	ctx.lr = 0x8219B284;
	sub_82150818(ctx, base);
loc_8219B284:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82150880
	ctx.lr = 0x8219B2A8;
	sub_82150880(ctx, base);
	// b 0x8219b31c
	goto loc_8219B31C;
loc_8219B2AC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8219b2e0
	if (!ctx.cr0.eq) goto loc_8219B2E0;
loc_8219B2BC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r28,72(r10)
	REX_STORE_U8(ctx.r10.u32 + 72, r28.u8);
	// stb r28,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8219b31c
	goto loc_8219B31C;
loc_8219B2E0:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219b2f8
	if (!ctx.cr6.eq) goto loc_8219B2F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82150880
	ctx.lr = 0x8219B2F8;
	sub_82150880(ctx, base);
loc_8219B2F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82150818
	ctx.lr = 0x8219B31C;
	sub_82150818(ctx, base);
loc_8219B31C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219b248
	if (ctx.cr0.eq) goto loc_8219B248;
loc_8219B32C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,72(r11)
	REX_STORE_U8(ctx.r11.u32 + 72, r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821A7028) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822f6280
	ctx.lr = 0x821A7040;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821a7070
	if (ctx.cr0.eq) goto loc_821A7070;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125dc8
	ctx.lr = 0x821A7050;
	sub_82125DC8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-25196
	ctx.r10.s64 = ctx.r10.s64 + -25196;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r11.u64);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x821a7074
	goto loc_821A7074;
loc_821A7070:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A7074:
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

DEFINE_REX_FUNC(sub_821A8DF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15320
	ctx.r3.s64 = ctx.r11.s64 + -15320;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A9258) {
	REX_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A9558) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A9578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821AAE78) {
	REX_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AAF10) {
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
	ctx.lr = 0x821AAF28;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821aaf5c
	if (ctx.cr0.eq) goto loc_821AAF5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125dc8
	ctx.lr = 0x821AAF38;
	sub_82125DC8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24472
	ctx.r10.s64 = ctx.r10.s64 + -24472;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821aaf60
	goto loc_821AAF60;
loc_821AAF5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AAF60:
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

DEFINE_REX_FUNC(sub_821ADD20) {
	REX_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821AE2A8) {
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
	ctx.lr = 0x821AE2B0;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// bl 0x821ddac0
	ctx.lr = 0x821AE2CC;
	sub_821DDAC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r30,140(r31)
	REX_STORE_U8(r31.u32 + 140, r30.u8);
	// li r29,1
	r29.s64 = 1;
	// stb r30,141(r31)
	REX_STORE_U8(r31.u32 + 141, r30.u8);
	// addi r11,r11,-23596
	ctx.r11.s64 = ctx.r11.s64 + -23596;
	// addi r10,r10,-23544
	ctx.r10.s64 = ctx.r10.s64 + -23544;
	// stb r29,142(r31)
	REX_STORE_U8(r31.u32 + 142, r29.u8);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r3,384
	ctx.r3.s64 = 384;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stb r29,143(r31)
	REX_STORE_U8(r31.u32 + 143, r29.u8);
	// addi r11,r31,152
	ctx.r11.s64 = r31.s64 + 152;
	// stb r29,144(r31)
	REX_STORE_U8(r31.u32 + 144, r29.u8);
	// addi r21,r31,136
	r21.s64 = r31.s64 + 136;
	// addi r25,r31,140
	r25.s64 = r31.s64 + 140;
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// addi r26,r31,141
	r26.s64 = r31.s64 + 141;
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// addi r24,r31,142
	r24.s64 = r31.s64 + 142;
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
	// addi r23,r31,143
	r23.s64 = r31.s64 + 143;
	// addi r22,r31,144
	r22.s64 = r31.s64 + 144;
	// bl 0x8269d1d0
	ctx.lr = 0x821AE334;
	sub_8269D1D0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x821AE340;
	sub_8269D1B8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r28,8
	r28.s64 = 8;
	// stw r20,152(r31)
	REX_STORE_U32(r31.u32 + 152, r20.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r28,160(r31)
	REX_STORE_U32(r31.u32 + 160, r28.u32);
	// li r3,384
	ctx.r3.s64 = 384;
	// stb r29,176(r31)
	REX_STORE_U8(r31.u32 + 176, r29.u8);
	// addi r11,r31,180
	ctx.r11.s64 = r31.s64 + 180;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x821AE380;
	sub_8269D1D0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x821AE38C;
	sub_8269D1B8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,384
	ctx.r3.s64 = 384;
	// stw r20,180(r31)
	REX_STORE_U32(r31.u32 + 180, r20.u32);
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
	// addi r11,r31,196
	ctx.r11.s64 = r31.s64 + 196;
	// stb r30,192(r31)
	REX_STORE_U8(r31.u32 + 192, r30.u8);
	// stw r30,196(r31)
	REX_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r30,200(r31)
	REX_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x821AE3B4;
	sub_8269D1D0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x821AE3C0;
	sub_8269D1B8(ctx, base);
	// stw r20,196(r31)
	REX_STORE_U32(r31.u32 + 196, r20.u32);
	// stw r28,204(r31)
	REX_STORE_U32(r31.u32 + 204, r28.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stb r30,208(r31)
	REX_STORE_U8(r31.u32 + 208, r30.u8);
	// bl 0x822f6280
	ctx.lr = 0x821AE3D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ae400
	if (ctx.cr0.eq) goto loc_821AE400;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-4680
	ctx.r11.s64 = ctx.r11.s64 + -4680;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82233df8
	ctx.lr = 0x821AE3F8;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ae404
	goto loc_821AE404;
loc_821AE400:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_821AE404:
	// stw r4,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821AE410;
	sub_821D3988(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f0,172(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lfs f0,596(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r4,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// ld r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// ld r8,24(r5)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// ld r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// ld r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// std r7,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// std r8,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r8.u64);
	// bl 0x822f6280
	ctx.lr = 0x821AE49C;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821ae4cc
	if (ctx.cr0.eq) goto loc_821AE4CC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-23976
	ctx.r4.s64 = ctx.r11.s64 + -23976;
	// bl 0x82120600
	ctx.lr = 0x821AE4B4;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// bl 0x82191600
	ctx.lr = 0x821AE4C8;
	sub_82191600(ctx, base);
	// b 0x821ae4d0
	goto loc_821AE4D0;
loc_821AE4CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821AE4D0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821AE4E4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ae500
	if (ctx.cr0.eq) goto loc_821AE500;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r27,r27,0,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821AE500;
	sub_82120AC0(ctx, base);
loc_821AE500:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821AE508;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ae538
	if (ctx.cr0.eq) goto loc_821AE538;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-23664
	ctx.r4.s64 = ctx.r11.s64 + -23664;
	// bl 0x82120600
	ctx.lr = 0x821AE520;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x821AE534;
	sub_82191600(ctx, base);
	// b 0x821ae53c
	goto loc_821AE53C;
loc_821AE538:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821AE53C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821AE54C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ae568
	if (ctx.cr0.eq) goto loc_821AE568;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r27,r27,0,31,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821AE568;
	sub_82120AC0(ctx, base);
loc_821AE568:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r11,r11,-4192
	ctx.r11.s64 = ctx.r11.s64 + -4192;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821AE580;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ae5b0
	if (ctx.cr0.eq) goto loc_821AE5B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-23968
	ctx.r4.s64 = ctx.r11.s64 + -23968;
	// bl 0x82120600
	ctx.lr = 0x821AE598;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// bl 0x82191600
	ctx.lr = 0x821AE5AC;
	sub_82191600(ctx, base);
	// b 0x821ae5b4
	goto loc_821AE5B4;
loc_821AE5B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821AE5B4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821AE5C4;
	sub_82145710(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821AE5D0;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821AE5D8;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,-13900
	r26.s64 = ctx.r11.s64 + -13900;
	// beq 0x821ae600
	if (ctx.cr0.eq) goto loc_821AE600;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821ae604
	goto loc_821AE604;
loc_821AE600:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_821AE604:
	// rlwinm. r10,r27,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r30,33(r29)
	REX_STORE_U8(r29.u32 + 33, r30.u8);
	// beq 0x821ae628
	if (ctx.cr0.eq) goto loc_821AE628;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r27,r27,0,30,28
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821AE628;
	sub_82120AC0(ctx, base);
loc_821AE628:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821AE630;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ae660
	if (ctx.cr0.eq) goto loc_821AE660;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-23648
	ctx.r4.s64 = ctx.r11.s64 + -23648;
	// bl 0x82120600
	ctx.lr = 0x821AE648;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// bl 0x82191600
	ctx.lr = 0x821AE65C;
	sub_82191600(ctx, base);
	// b 0x821ae664
	goto loc_821AE664;
loc_821AE660:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821AE664:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821AE674;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ae690
	if (ctx.cr0.eq) goto loc_821AE690;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r27,r27,0,29,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821AE690;
	sub_82120AC0(ctx, base);
loc_821AE690:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821AE698;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ae6c8
	if (ctx.cr0.eq) goto loc_821AE6C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23632
	ctx.r4.s64 = ctx.r11.s64 + -23632;
	// bl 0x82120600
	ctx.lr = 0x821AE6B0;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r27,r27,16
	r27.u64 = r27.u64 | 16;
	// bl 0x82191600
	ctx.lr = 0x821AE6C4;
	sub_82191600(ctx, base);
	// b 0x821ae6cc
	goto loc_821AE6CC;
loc_821AE6C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821AE6CC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821AE6DC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ae6f8
	if (ctx.cr0.eq) goto loc_821AE6F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r27,r27,0,28,26
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821AE6F8;
	sub_82120AC0(ctx, base);
loc_821AE6F8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r11,r11,-4192
	ctx.r11.s64 = ctx.r11.s64 + -4192;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821AE710;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ae75c
	if (ctx.cr0.eq) goto loc_821AE75C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-23616
	ctx.r4.s64 = ctx.r11.s64 + -23616;
	// bl 0x82120600
	ctx.lr = 0x821AE728;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r27,r27,32
	r27.u64 = r27.u64 | 32;
	// bl 0x82197628
	ctx.lr = 0x821AE73C;
	sub_82197628(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,-12048
	ctx.r10.s64 = ctx.r10.s64 + -12048;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r10,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r10.u32);
	// b 0x821ae760
	goto loc_821AE760;
loc_821AE75C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_821AE760:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821AE770;
	sub_82145710(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821AE77C;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821AE784;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ae7a4
	if (ctx.cr0.eq) goto loc_821AE7A4;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821ae7a8
	goto loc_821AE7A8;
loc_821AE7A4:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_821AE7A8:
	// rlwinm. r10,r27,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r30,33(r29)
	REX_STORE_U8(r29.u32 + 33, r30.u8);
	// beq 0x821ae7c8
	if (ctx.cr0.eq) goto loc_821AE7C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x821AE7C8;
	sub_82120AC0(ctx, base);
loc_821AE7C8:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821AE7D0;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r11,-23824
	r28.s64 = ctx.r11.s64 + -23824;
	// beq 0x821ae808
	if (ctx.cr0.eq) goto loc_821AE808;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-23604
	ctx.r4.s64 = ctx.r11.s64 + -23604;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821AE7FC;
	sub_821DBB48(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x821ae80c
	goto loc_821AE80C;
loc_821AE808:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_821AE80C:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821AE824;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821AE82C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ae858
	if (ctx.cr0.eq) goto loc_821AE858;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-23892
	ctx.r4.s64 = ctx.r11.s64 + -23892;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821AE850;
	sub_821DBB48(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
loc_821AE858:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821AE870;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_821DA048) {
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
	ctx.lr = 0x821DA050;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,84
	ctx.r4.s64 = ctx.r3.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821DA068;
	sub_821626C0(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821DA074;
	sub_821626C0(ctx, base);
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821DA080;
	sub_821626C0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821DA08C;
	sub_821626C0(ctx, base);
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821DA098;
	sub_821626C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821626c0
	ctx.lr = 0x821DA0B4;
	sub_821626C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821DA0C0;
	sub_821626C0(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,16(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821DA0DC;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821DA0E8;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821DA0F4;
	sub_826A1E70(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821626c0
	ctx.lr = 0x821DA110;
	sub_821626C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821DA11C;
	sub_821626C0(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,36(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821DA138;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821DA144;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821DA150;
	sub_826A1E70(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821626c0
	ctx.lr = 0x821DA16C;
	sub_821626C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821DA178;
	sub_821626C0(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r30,r11,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,56(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821DA194;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821DA1A0;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821DA1AC;
	sub_826A1E70(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821626c0
	ctx.lr = 0x821DA1C8;
	sub_821626C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821DA1D4;
	sub_821626C0(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,76(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r4,r30,r31
	ctx.r4.u64 = r30.u64 + r31.u64;
	// bl 0x82125c20
	ctx.lr = 0x821DA1F0;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821DA1FC;
	sub_82125C98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821DA208;
	sub_826A1E70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821E4620) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e4710
	if (ctx.cr6.eq) goto loc_821E4710;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4710
	if (ctx.cr6.eq) goto loc_821E4710;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f12,104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r10,320
	ctx.r11.s64 = ctx.r10.s64 + 320;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r9,320(r10)
	REX_STORE_U64(ctx.r10.u32 + 320, ctx.r9.u64);
	// std r11,328(r10)
	REX_STORE_U64(ctx.r10.u32 + 328, ctx.r11.u64);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r9,r10,336
	ctx.r9.s64 = ctx.r10.s64 + 336;
	// lfs f0,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r9,336(r10)
	REX_STORE_U64(ctx.r10.u32 + 336, ctx.r9.u64);
	// std r11,344(r10)
	REX_STORE_U64(ctx.r10.u32 + 344, ctx.r11.u64);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x821c3ec8
	ctx.lr = 0x821E46D4;
	sub_821C3EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x822c0f18
	ctx.lr = 0x821E46E0;
	sub_822C0F18(ctx, base);
	// lbz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 264);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e4710
	if (ctx.cr0.eq) goto loc_821E4710;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r31,260(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r3,6164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E4708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82294a30
	ctx.lr = 0x821E4710;
	sub_82294A30(ctx, base);
loc_821E4710:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EC9B8) {
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
	// lbz r11,41(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 41);
	// lbz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821eca04
	if (ctx.cr6.eq) goto loc_821ECA04;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8215f5f8
	ctx.lr = 0x821EC9F0;
	sub_8215F5F8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ECA04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821ECA04:
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

DEFINE_REX_FUNC(sub_821F4178) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x821F41A8;
	sub_8269D1B8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,22764
	ctx.r11.s64 = ctx.r11.s64 + 22764;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x821f41c4
	if (ctx.cr0.eq) goto loc_821F41C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821F41C4;
	sub_8269CE98(ctx, base);
loc_821F41C4:
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

DEFINE_REX_FUNC(sub_821F5878) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F5880;
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
	// beq cr6,0x821f58b4
	if (ctx.cr6.eq) goto loc_821F58B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,388
	ctx.r5.s64 = 388;
	// bl 0x821231d0
	ctx.lr = 0x821F58B4;
	sub_821231D0(ctx, base);
loc_821F58B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F58C8;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23228
	ctx.r4.s64 = ctx.r11.s64 + 23228;
	// bl 0x8215f338
	ctx.lr = 0x821F58D4;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23236
	ctx.r4.s64 = ctx.r11.s64 + 23236;
	// bl 0x8215f338
	ctx.lr = 0x821F58E0;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23244
	ctx.r4.s64 = ctx.r11.s64 + 23244;
	// bl 0x8215f338
	ctx.lr = 0x821F58EC;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F58F8;
	sub_821F6130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F8AA0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x821F8AC8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f8af4
	if (ctx.cr0.eq) goto loc_821F8AF4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-31400
	ctx.r10.s64 = ctx.r10.s64 + -31400;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821f8af8
	goto loc_821F8AF8;
loc_821F8AF4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F8AF8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,-23868
	ctx.r5.s64 = ctx.r10.s64 + -23868;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r11,24292
	ctx.r4.s64 = ctx.r11.s64 + 24292;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82120c08
	ctx.lr = 0x821F8B28;
	sub_82120C08(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r10,24304
	ctx.r4.s64 = ctx.r10.s64 + 24304;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8B48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,-1
	r30.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x82120b20
	ctx.lr = 0x821F8B60;
	sub_82120B20(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821FD3F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821FD400;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,26824
	ctx.r11.s64 = ctx.r11.s64 + 26824;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821fddb0
	ctx.lr = 0x821FD418;
	sub_821FDDB0(ctx, base);
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
	ctx.lr = 0x821FD434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// bl 0x8212d668
	ctx.lr = 0x821FD444;
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
	ctx.lr = 0x821FD464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82249b40
	ctx.lr = 0x821FD46C;
	sub_82249B40(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd47c
	if (ctx.cr6.eq) goto loc_821FD47C;
	// bl 0x8269ce98
	ctx.lr = 0x821FD47C;
	sub_8269CE98(ctx, base);
loc_821FD47C:
	// li r30,0
	r30.s64 = 0;
	// addi r29,r31,68
	r29.s64 = r31.s64 + 68;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd4c0
	if (ctx.cr6.eq) goto loc_821FD4C0;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821fd4bc
	if (ctx.cr6.eq) goto loc_821FD4BC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_821FD4B0:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821fd4b0
	if (!ctx.cr6.eq) goto loc_821FD4B0;
loc_821FD4BC:
	// bl 0x8269ce98
	ctx.lr = 0x821FD4C0;
	sub_8269CE98(ctx, base);
loc_821FD4C0:
	// stw r30,4(r29)
	REX_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd4dc
	if (ctx.cr6.eq) goto loc_821FD4DC;
	// bl 0x8269ce98
	ctx.lr = 0x821FD4DC;
	sub_8269CE98(ctx, base);
loc_821FD4DC:
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd4f8
	if (ctx.cr6.eq) goto loc_821FD4F8;
	// bl 0x8269ce98
	ctx.lr = 0x821FD4F8;
	sub_8269CE98(ctx, base);
loc_821FD4F8:
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd514
	if (ctx.cr6.eq) goto loc_821FD514;
	// bl 0x8269ce98
	ctx.lr = 0x821FD514;
	sub_8269CE98(ctx, base);
loc_821FD514:
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fd530
	if (ctx.cr6.eq) goto loc_821FD530;
	// bl 0x8269ce98
	ctx.lr = 0x821FD530;
	sub_8269CE98(ctx, base);
loc_821FD530:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r11,r11,26800
	ctx.r11.s64 = ctx.r11.s64 + 26800;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822068E8) {
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
	ctx.lr = 0x822068F0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,111(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 111);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82206b14
	if (!ctx.cr0.eq) goto loc_82206B14;
	// lbz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 110);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82206b14
	if (!ctx.cr0.eq) goto loc_82206B14;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// stb r11,111(r3)
	REX_STORE_U8(ctx.r3.u32 + 111, ctx.r11.u8);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,30380
	ctx.r4.s64 = ctx.r11.s64 + 30380;
	// bl 0x82120600
	ctx.lr = 0x82206944;
	sub_82120600(ctx, base);
	// lis r23,-32106
	r23.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6312(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82206970;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,30404
	ctx.r4.s64 = ctx.r11.s64 + 30404;
	// bl 0x82120600
	ctx.lr = 0x82206980;
	sub_82120600(ctx, base);
	// lwz r3,6312(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6312);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822069A8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r11,30412
	r31.s64 = ctx.r11.s64 + 30412;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x822069BC;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180da0
	ctx.lr = 0x822069C8;
	sub_82180DA0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x822069DC;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82206b00
	if (ctx.cr0.eq) goto loc_82206B00;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120600
	ctx.lr = 0x822069F0;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x822069FC;
	sub_82180E18(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82206A10;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r22,96
	ctx.r3.s64 = r22.s64 + 96;
	// addi r4,r11,22808
	ctx.r4.s64 = ctx.r11.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x82206A20;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-24588
	ctx.r4.s64 = ctx.r11.s64 + -24588;
	// bl 0x8215f338
	ctx.lr = 0x82206A2C;
	sub_8215F338(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
loc_82206A34:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82206a4c
	if (!ctx.cr6.eq) goto loc_82206A4C;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82206a50
	goto loc_82206A50;
loc_82206A4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82206A50:
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82206ae8
	if (!ctx.cr6.lt) goto loc_82206AE8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f530
	ctx.lr = 0x82206A64;
	sub_8215F530(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82206A74;
	sub_8215F2D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
loc_82206A7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82206aa0
	if (!ctx.cr6.eq) goto loc_82206AA0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82206aa4
	goto loc_82206AA4;
loc_82206AA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82206AA4:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82206ae0
	if (!ctx.cr6.lt) goto loc_82206AE0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r27,0(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82206ABC;
	sub_8215F1B0(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82206AC0;
	sub_8215FA30(ctx, base);
	// lwz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 56);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206AD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82206a7c
	goto loc_82206A7C;
loc_82206AE0:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x82206a34
	goto loc_82206A34;
loc_82206AE8:
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206B00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82206B00:
	// lwz r3,6312(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206B14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82206B14:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82217720) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r11,1624
	r30.s64 = ctx.r11.s64 + 1624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r10,20320
	ctx.r4.s64 = ctx.r10.s64 + 20320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x82217750;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82217788
	if (!ctx.cr6.eq) goto loc_82217788;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// bl 0x82120600
	ctx.lr = 0x8221776C;
	sub_82120600(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ef630
	ctx.lr = 0x82217774;
	sub_821EF630(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82217784;
	sub_82120AC0(ctx, base);
	// b 0x822177a8
	goto loc_822177A8;
loc_82217788:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// bl 0x8215f338
	ctx.lr = 0x82217798;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822177a8
	if (ctx.cr6.eq) goto loc_822177A8;
	// bl 0x822185a8
	ctx.lr = 0x822177A8;
	sub_822185A8(ctx, base);
loc_822177A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822186d0
	ctx.lr = 0x822177B0;
	sub_822186D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82218f88
	ctx.lr = 0x822177B8;
	sub_82218F88(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// bl 0x8215f338
	ctx.lr = 0x822177C8;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x822177D4;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822177D8;
	sub_8215FA30(ctx, base);
	// lwz r11,904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 904);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x822177F0;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26668
	ctx.r4.s64 = ctx.r11.s64 + -26668;
	// bl 0x8215f338
	ctx.lr = 0x822177FC;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82217804;
	sub_8215F2D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26656
	ctx.r4.s64 = ctx.r11.s64 + -26656;
	// bl 0x8215f338
	ctx.lr = 0x82217810;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82217814;
	sub_8215FA30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82217830
	if (ctx.cr6.lt) goto loc_82217830;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_82217830:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82217834:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82217834
	if (!ctx.cr6.eq) goto loc_82217834;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x82217860;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-26644
	ctx.r3.s64 = ctx.r11.s64 + -26644;
	// bl 0x8216bc98
	ctx.lr = 0x82217870;
	sub_8216BC98(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221788C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

DEFINE_REX_FUNC(sub_822262A8) {
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
	ctx.lr = 0x822262B0;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// bl 0x82270fe0
	ctx.lr = 0x822262C8;
	sub_82270FE0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,31396
	ctx.r11.s64 = ctx.r11.s64 + 31396;
	// addi r10,r10,-24056
	ctx.r10.s64 = ctx.r10.s64 + -24056;
	// addi r9,r9,-23956
	ctx.r9.s64 = ctx.r9.s64 + -23956;
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r9,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r9.u32);
	// addi r30,r31,676
	r30.s64 = r31.s64 + 676;
	// stb r26,676(r31)
	REX_STORE_U8(r31.u32 + 676, r26.u8);
	// stw r26,680(r31)
	REX_STORE_U32(r31.u32 + 680, r26.u32);
	// bl 0x822f6280
	ctx.lr = 0x82226300;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82226330
	if (ctx.cr0.eq) goto loc_82226330;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-24312
	ctx.r4.s64 = ctx.r11.s64 + -24312;
	// bl 0x82120600
	ctx.lr = 0x82226318;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82191600
	ctx.lr = 0x8222632C;
	sub_82191600(ctx, base);
	// b 0x82226334
	goto loc_82226334;
loc_82226330:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82226334:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x82226344;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222635c
	if (ctx.cr0.eq) goto loc_8222635C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x8222635C;
	sub_82120AC0(ctx, base);
loc_8222635C:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82226364;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822263e4
	if (ctx.cr0.eq) goto loc_822263E4;
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// addi r11,r11,29712
	ctx.r11.s64 = ctx.r11.s64 + 29712;
	// addi r4,r10,-24292
	ctx.r4.s64 = ctx.r10.s64 + -24292;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82226398;
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
	ctx.lr = 0x822263AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822263d4
	if (ctx.cr0.eq) goto loc_822263D4;
	// ld r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
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
	// b 0x822263d8
	goto loc_822263D8;
loc_822263D4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822263D8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822263e8
	goto loc_822263E8;
loc_822263E4:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_822263E8:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82226400;
	sub_82264568(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r28,r11,-19124
	r28.s64 = ctx.r11.s64 + -19124;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r28
	r30.u64 = r28.u64;
	// addi r27,r11,-23824
	r27.s64 = ctx.r11.s64 + -23824;
loc_82226414:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8222641C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82226454
	if (ctx.cr0.eq) goto loc_82226454;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216b9a8
	ctx.lr = 0x82226434;
	sub_8216B9A8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82226448;
	sub_821DBB48(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// b 0x82226458
	goto loc_82226458;
loc_82226454:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82226458:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82226470;
	sub_82264568(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r11,r28,16
	ctx.r11.s64 = r28.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82226414
	if (ctx.cr6.lt) goto loc_82226414;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82226488;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822264b8
	if (ctx.cr0.eq) goto loc_822264B8;
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-24272
	ctx.r4.s64 = ctx.r11.s64 + -24272;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822264AC;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// b 0x822264bc
	goto loc_822264BC;
loc_822264B8:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_822264BC:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822264D4;
	sub_82264568(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// bl 0x82120600
	ctx.lr = 0x822264E4;
	sub_82120600(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x822264F4;
	sub_82180E18(ctx, base);
	// stw r3,684(r31)
	REX_STORE_U32(r31.u32 + 684, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82226508;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,16360
	ctx.r4.s64 = ctx.r11.s64 + 16360;
	// bl 0x82120600
	ctx.lr = 0x82226518;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82226524;
	sub_82180E18(ctx, base);
	// stw r3,688(r31)
	REX_STORE_U32(r31.u32 + 688, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x82226538;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-24252
	ctx.r4.s64 = ctx.r11.s64 + -24252;
	// bl 0x82120600
	ctx.lr = 0x82226548;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82226554;
	sub_82180E18(ctx, base);
	// stw r3,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82226568;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82235598) {
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
	ctx.lr = 0x822355AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822355bc
	if (ctx.cr0.eq) goto loc_822355BC;
	// bl 0x822355d0
	ctx.lr = 0x822355B8;
	sub_822355D0(ctx, base);
	// b 0x822355c0
	goto loc_822355C0;
loc_822355BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822355C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822376C0) {
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
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x822f6280
	ctx.lr = 0x822376D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822376e4
	if (ctx.cr0.eq) goto loc_822376E4;
	// bl 0x822376f8
	ctx.lr = 0x822376E0;
	sub_822376F8(ctx, base);
	// b 0x822376e8
	goto loc_822376E8;
loc_822376E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822376E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82238148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82238150;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x82238160;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-14776
	ctx.r11.s64 = ctx.r11.s64 + -14776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// addi r11,r9,-18272
	ctx.r11.s64 = ctx.r9.s64 + -18272;
	// addi r10,r10,-18312
	ctx.r10.s64 = ctx.r10.s64 + -18312;
	// li r28,0
	r28.s64 = 0;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// stb r28,120(r30)
	REX_STORE_U8(r30.u32 + 120, r28.u8);
	// bl 0x822f6280
	ctx.lr = 0x82238194;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822381b4
	if (ctx.cr0.eq) goto loc_822381B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x822381AC;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822381b8
	goto loc_822381B8;
loc_822381B4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_822381B8:
	// stw r4,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x822381C4;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822381CC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8223824c
	if (ctx.cr0.eq) goto loc_8223824C;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r11,r11,-32520
	ctx.r11.s64 = ctx.r11.s64 + -32520;
	// addi r4,r10,-19340
	ctx.r4.s64 = ctx.r10.s64 + -19340;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82238200;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82238214;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223823c
	if (ctx.cr0.eq) goto loc_8223823C;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-19528
	ctx.r9.s64 = ctx.r9.s64 + -19528;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x82238240
	goto loc_82238240;
loc_8223823C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82238240:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82238250
	goto loc_82238250;
loc_8223824C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82238250:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82238268;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82238270;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x822382a8
	if (ctx.cr0.eq) goto loc_822382A8;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19336
	ctx.r4.s64 = ctx.r11.s64 + -19336;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8223829C;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x822382ac
	goto loc_822382AC;
loc_822382A8:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_822382AC:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822382C4;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822382CC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822382fc
	if (ctx.cr0.eq) goto loc_822382FC;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18184
	ctx.r4.s64 = ctx.r11.s64 + -18184;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822382F0;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x82238300
	goto loc_82238300;
loc_822382FC:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82238300:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82238318;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82238320;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82238350
	if (ctx.cr0.eq) goto loc_82238350;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18168
	ctx.r4.s64 = ctx.r11.s64 + -18168;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82238344;
	sub_821DBB48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x82238354
	goto loc_82238354;
loc_82238350:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82238354:
	// lwz r10,116(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// bl 0x82264568
	ctx.lr = 0x8223836C;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82247228) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x822f6280
	ctx.lr = 0x8224723C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224724c
	if (ctx.cr0.eq) goto loc_8224724C;
	// bl 0x82247260
	ctx.lr = 0x82247248;
	sub_82247260(ctx, base);
	// b 0x82247250
	goto loc_82247250;
loc_8224724C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82247250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82249DA8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x82249DB0;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82249dd8
	if (ctx.cr6.eq) goto loc_82249DD8;
	// lwz r28,96(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x82249de4
	goto loc_82249DE4;
loc_82249DD8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lwz r28,24(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_82249DE4:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,576(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 576);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r27,96(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r26,96(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249E10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// addi r25,r10,16592
	r25.s64 = ctx.r10.s64 + 16592;
	// lwz r4,584(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lfs f0,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249E5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,588(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 588);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249E84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,592(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 592);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249EA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,592(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 592);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249EC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,592(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 592);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r4,592(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 592);
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249F08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 596);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249F24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 596);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 596);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249F68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 596);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249F84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,600(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 600);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,600(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 600);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249FC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,600(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 600);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249FE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,600(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 600);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224A000;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,28(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// std r8,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfs f13,1000(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 1000);
	ctx.f13.f64 = double(temp.f32);
	// std r9,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// lfs f0,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lwa r11,16(r27)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r27.u32 + 16));
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lwa r10,12(r27)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r27.u32 + 12));
	// lfs f8,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfs f7,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f6,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f5,36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f1,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fdivs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fdivs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwa r10,16(r28)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(r28.u32 + 16));
	// lwa r11,12(r28)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r28.u32 + 12));
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fdivs f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fmuls f9,f0,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// stfs f9,200(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f30,f12,f10
	f30.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x821265f8
	ctx.lr = 0x8224A16C;
	sub_821265F8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224A180:
	// lfs f12,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmsubs f11,f0,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f11.f64)));
	// fmadds f12,f13,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f12.f64)));
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + f31.f64));
	// stfs f11,20(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// fadds f12,f30,f12
	ctx.f12.f64 = double(float(f30.f64 + ctx.f12.f64));
	// stfsu f12,24(r10)
	ea = 24 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8224a180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224A180;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
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
	ctx.lr = 0x8224A1D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8226AE90) {
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
	ctx.lr = 0x8226AE98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226aec0
	if (!ctx.cr6.gt) goto loc_8226AEC0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x8226AEC0;
	sub_822F6020(ctx, base);
loc_8226AEC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x8226af94
	if (!ctx.cr6.lt) goto loc_8226AF94;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8226aef4
	if (ctx.cr6.eq) goto loc_8226AEF4;
	// rlwinm r3,r26,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x822f6280
	ctx.lr = 0x8226AEEC;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8226af9c
	if (ctx.cr0.eq) goto loc_8226AF9C;
loc_8226AEF4:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8226af28
	goto loc_8226AF28;
loc_8226AF04:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8226af20
	if (ctx.cr6.eq) goto loc_8226AF20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120d70
	ctx.lr = 0x8226AF18;
	sub_82120D70(ctx, base);
	// lbz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 28);
	// stb r11,28(r29)
	REX_STORE_U8(r29.u32 + 28, ctx.r11.u8);
loc_8226AF20:
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
loc_8226AF28:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x8226af04
	if (!ctx.cr6.eq) goto loc_8226AF04;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// srawi r27,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	r27.s64 = ctx.r10.s32 >> 5;
	// beq cr6,0x8226af78
	if (ctx.cr6.eq) goto loc_8226AF78;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8226af70
	if (ctx.cr6.eq) goto loc_8226AF70;
loc_8226AF54:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8226AF64;
	sub_82120AC0(ctx, base);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x8226af54
	if (!ctx.cr6.eq) goto loc_8226AF54;
loc_8226AF70:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8226AF78;
	sub_8269CE98(ctx, base);
loc_8226AF78:
	// rlwinm r11,r26,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// rlwinm r10,r27,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8226AF94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8226AF9C:
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
	ctx.lr = 0x8226AFB8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_822737D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822737E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822737FC;
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
	ctx.lr = 0x82273810;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82273834
	if (ctx.cr0.eq) goto loc_82273834;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// addi r10,r10,-15424
	ctx.r10.s64 = ctx.r10.s64 + -15424;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82273838
	goto loc_82273838;
loc_82273834:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82273838:
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82275C30) {
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
	ctx.lr = 0x82275C38;
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r29,r26
	r29.u64 = r26.u64;
	// bl 0x82178268
	ctx.lr = 0x82275C5C;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-14552
	ctx.r11.s64 = ctx.r11.s64 + -14552;
	// addi r10,r10,31396
	ctx.r10.s64 = ctx.r10.s64 + 31396;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// addi r9,r9,-18396
	ctx.r9.s64 = ctx.r9.s64 + -18396;
	// addi r10,r8,-2688
	ctx.r10.s64 = ctx.r8.s64 + -2688;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r7,-2624
	ctx.r9.s64 = ctx.r7.s64 + -2624;
	// addi r11,r11,-18608
	ctx.r11.s64 = ctx.r11.s64 + -18608;
	// addi r10,r6,-18528
	ctx.r10.s64 = ctx.r6.s64 + -18528;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r28,1
	r28.s64 = 1;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// addi r25,r31,148
	r25.s64 = r31.s64 + 148;
	// stb r28,144(r31)
	REX_STORE_U8(r31.u32 + 144, r28.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r20,r31,120
	r20.s64 = r31.s64 + 120;
	// addi r27,r31,144
	r27.s64 = r31.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82275CD4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r26,176(r31)
	REX_STORE_U8(r31.u32 + 176, r26.u8);
	// addi r21,r31,184
	r21.s64 = r31.s64 + 184;
	// stb r26,177(r31)
	REX_STORE_U8(r31.u32 + 177, r26.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lfs f30,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// addi r24,r31,176
	r24.s64 = r31.s64 + 176;
	// stfs f30,180(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// addi r23,r31,177
	r23.s64 = r31.s64 + 177;
	// addi r22,r31,180
	r22.s64 = r31.s64 + 180;
	// bl 0x82120ac0
	ctx.lr = 0x82275D08;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x82120ac0
	ctx.lr = 0x82275D18;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x82120ac0
	ctx.lr = 0x82275D28;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// lfs f0,700(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// stfs f31,272(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82275D50;
	sub_82120AC0(ctx, base);
	// stfs f31,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// stw r26,324(r31)
	REX_STORE_U32(r31.u32 + 324, r26.u32);
	// stfs f31,316(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 316, temp.u32);
	// stw r26,328(r31)
	REX_STORE_U32(r31.u32 + 328, r26.u32);
	// stfs f30,320(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// stw r26,340(r31)
	REX_STORE_U32(r31.u32 + 340, r26.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x82275D74;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82276404
	if (ctx.cr0.eq) goto loc_82276404;
	// stw r3,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r3.u32);
	// lfd f0,136(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 136);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// stb r28,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r28.u8);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// stb r28,33(r11)
	REX_STORE_U8(ctx.r11.u32 + 33, r28.u8);
	// stfd f0,352(r31)
	REX_STORE_U64(r31.u32 + 352, ctx.f0.u64);
	// stfs f30,368(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// stb r26,360(r31)
	REX_STORE_U8(r31.u32 + 360, r26.u8);
	// stfs f31,372(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// stb r26,361(r31)
	REX_STORE_U8(r31.u32 + 361, r26.u8);
	// stb r28,362(r31)
	REX_STORE_U8(r31.u32 + 362, r28.u8);
	// stw r26,364(r31)
	REX_STORE_U32(r31.u32 + 364, r26.u32);
	// bl 0x822f6280
	ctx.lr = 0x82275DCC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82275dfc
	if (ctx.cr0.eq) goto loc_82275DFC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-3080
	ctx.r4.s64 = ctx.r11.s64 + -3080;
	// bl 0x82120600
	ctx.lr = 0x82275DE4;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// bl 0x82191600
	ctx.lr = 0x82275DF8;
	sub_82191600(ctx, base);
	// b 0x82275e00
	goto loc_82275E00;
loc_82275DFC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82275E00:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82275E14;
	sub_82145710(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82275e30
	if (ctx.cr0.eq) goto loc_82275E30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82275E30;
	sub_82120AC0(ctx, base);
loc_82275E30:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// addi r11,r11,28400
	ctx.r11.s64 = ctx.r11.s64 + 28400;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82275E48;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82275e80
	if (ctx.cr0.eq) goto loc_82275E80;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// bl 0x82120600
	ctx.lr = 0x82275E60;
	sub_82120600(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r6,r11,-3060
	ctx.r6.s64 = ctx.r11.s64 + -3060;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
	// bl 0x821e9d10
	ctx.lr = 0x82275E7C;
	sub_821E9D10(ctx, base);
	// b 0x82275e84
	goto loc_82275E84;
loc_82275E80:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82275E84:
	// stw r3,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82275E98;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x82275EA4;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x82275EAC;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-13900
	r27.s64 = ctx.r11.s64 + -13900;
	// beq 0x82275ed4
	if (ctx.cr0.eq) goto loc_82275ED4;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x82275ed8
	goto loc_82275ED8;
loc_82275ED4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82275ED8:
	// rlwinm. r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r26,33(r30)
	REX_STORE_U8(r30.u32 + 33, r26.u8);
	// beq 0x82275efc
	if (ctx.cr0.eq) goto loc_82275EFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82275EFC;
	sub_82120AC0(ctx, base);
loc_82275EFC:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r11,r11,28400
	ctx.r11.s64 = ctx.r11.s64 + 28400;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82275F14;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82275f44
	if (ctx.cr0.eq) goto loc_82275F44;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-3048
	ctx.r4.s64 = ctx.r11.s64 + -3048;
	// bl 0x82120600
	ctx.lr = 0x82275F2C;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
	// bl 0x82191600
	ctx.lr = 0x82275F40;
	sub_82191600(ctx, base);
	// b 0x82275f48
	goto loc_82275F48;
loc_82275F44:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82275F48:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82275F58;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x82275F64;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x82275F6C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82275f8c
	if (ctx.cr0.eq) goto loc_82275F8C;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x82275f90
	goto loc_82275F90;
loc_82275F8C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82275F90:
	// rlwinm. r10,r29,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r26,33(r30)
	REX_STORE_U8(r30.u32 + 33, r26.u8);
	// beq 0x82275fb4
	if (ctx.cr0.eq) goto loc_82275FB4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r29,r29,0,30,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x82275FB4;
	sub_82120AC0(ctx, base);
loc_82275FB4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82275FBC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82275fec
	if (ctx.cr0.eq) goto loc_82275FEC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-3040
	ctx.r4.s64 = ctx.r11.s64 + -3040;
	// bl 0x82120600
	ctx.lr = 0x82275FD4;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r29,r29,8
	r29.u64 = r29.u64 | 8;
	// bl 0x82191600
	ctx.lr = 0x82275FE8;
	sub_82191600(ctx, base);
	// b 0x82275ff0
	goto loc_82275FF0;
loc_82275FEC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82275FF0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82276000;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227601c
	if (ctx.cr0.eq) goto loc_8227601C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r29,r29,0,29,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x8227601C;
	sub_82120AC0(ctx, base);
loc_8227601C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82276024;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82276054
	if (ctx.cr0.eq) goto loc_82276054;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-3020
	ctx.r4.s64 = ctx.r11.s64 + -3020;
	// bl 0x82120600
	ctx.lr = 0x8227603C;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r29,r29,16
	r29.u64 = r29.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x82276050;
	sub_82196BA8(ctx, base);
	// b 0x82276058
	goto loc_82276058;
loc_82276054:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82276058:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82276068;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82276084
	if (ctx.cr0.eq) goto loc_82276084;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r29,r29,0,28,26
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x82276084;
	sub_82120AC0(ctx, base);
loc_82276084:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8227608C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822760c4
	if (ctx.cr0.eq) goto loc_822760C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-3000
	ctx.r4.s64 = ctx.r11.s64 + -3000;
	// bl 0x82120600
	ctx.lr = 0x822760A4;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r6,r11,29636
	ctx.r6.s64 = ctx.r11.s64 + 29636;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r29,r29,32
	r29.u64 = r29.u64 | 32;
	// bl 0x821e9d10
	ctx.lr = 0x822760C0;
	sub_821E9D10(ctx, base);
	// b 0x822760c8
	goto loc_822760C8;
loc_822760C4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_822760C8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822760D8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822760f0
	if (ctx.cr0.eq) goto loc_822760F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x822760F0;
	sub_82120AC0(ctx, base);
loc_822760F0:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x822760F8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82276110
	if (ctx.cr0.eq) goto loc_82276110;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x82276108;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82276114
	goto loc_82276114;
loc_82276110:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82276114:
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x82276124;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x8227612C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82276158
	if (ctx.cr0.eq) goto loc_82276158;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,3720
	ctx.r11.s64 = ctx.r11.s64 + 3720;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82233df8
	ctx.lr = 0x82276150;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8227615c
	goto loc_8227615C;
loc_82276158:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8227615C:
	// stw r4,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x82276168;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82276170;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82276190
	if (ctx.cr0.eq) goto loc_82276190;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x82276188;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82276194
	goto loc_82276194;
loc_82276190:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82276194:
	// stw r4,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x822761A0;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x822761A8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822761c4
	if (ctx.cr0.eq) goto loc_822761C4;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd570
	ctx.lr = 0x822761BC;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822761c8
	goto loc_822761C8;
loc_822761C4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_822761C8:
	// stw r4,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x822761D4;
	sub_821D3988(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r11,r11,28976
	ctx.r11.s64 = ctx.r11.s64 + 28976;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r30,124(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 124);
	// bl 0x822f6280
	ctx.lr = 0x822761F0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82276214
	if (ctx.cr0.eq) goto loc_82276214;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x82276218
	goto loc_82276218;
loc_82276214:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82276218:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r11,r11,21968
	ctx.r11.s64 = ctx.r11.s64 + 21968;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82276234;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-12728
	r29.s64 = ctx.r11.s64 + -12728;
	// beq 0x8227625c
	if (ctx.cr0.eq) goto loc_8227625C;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x82276260
	goto loc_82276260;
loc_8227625C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82276260:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// addi r5,r11,17116
	ctx.r5.s64 = ctx.r11.s64 + 17116;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216be80
	ctx.lr = 0x82276274;
	sub_8216BE80(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r11,r11,21984
	ctx.r11.s64 = ctx.r11.s64 + 21984;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8227628C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822762ac
	if (ctx.cr0.eq) goto loc_822762AC;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x822762b0
	goto loc_822762B0;
loc_822762AC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_822762B0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,-20712
	ctx.r5.s64 = ctx.r11.s64 + -20712;
	// bl 0x8216be80
	ctx.lr = 0x822762C0;
	sub_8216BE80(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822762C8;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r11,-19528
	r28.s64 = ctx.r11.s64 + -19528;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x82276348
	if (ctx.cr0.eq) goto loc_82276348;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r11,r11,23456
	ctx.r11.s64 = ctx.r11.s64 + 23456;
	// addi r4,r10,-2980
	ctx.r4.s64 = ctx.r10.s64 + -2980;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8227630C;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x82276318;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82276338
	if (ctx.cr0.eq) goto loc_82276338;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x8227633c
	goto loc_8227633C;
loc_82276338:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8227633C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x8227634c
	goto loc_8227634C;
loc_82276348:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8227634C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82276364;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8227636C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822763d8
	if (ctx.cr0.eq) goto loc_822763D8;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// addi r11,r11,23528
	ctx.r11.s64 = ctx.r11.s64 + 23528;
	// addi r4,r10,-2972
	ctx.r4.s64 = ctx.r10.s64 + -2972;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822763A0;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x822763AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822763cc
	if (ctx.cr0.eq) goto loc_822763CC;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822763d0
	goto loc_822763D0;
loc_822763CC:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822763D0:
	// mr r26,r30
	r26.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
loc_822763D8:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r26)
	REX_STORE_U32(r26.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822763F0;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
loc_82276404:
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
	ctx.lr = 0x8227641C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_822ADE58) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// ble cr6,0x822ade84
	if (!ctx.cr6.gt) goto loc_822ADE84;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_822ADE84:
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r11,r8,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,36(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r11,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 10;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// and r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822adee8
	if (ctx.cr6.lt) goto loc_822ADEE8;
loc_822ADEE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822ADEE8:
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822adee0
	if (ctx.cr6.eq) goto loc_822ADEE0;
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
loc_822ADF00:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822adf2c
	if (!ctx.cr6.eq) goto loc_822ADF2C;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x822adf30
	if (ctx.cr6.eq) goto loc_822ADF30;
loc_822ADF2C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822ADF30:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822adf4c
	if (!ctx.cr0.eq) goto loc_822ADF4C;
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822adf00
	if (!ctx.cr6.eq) goto loc_822ADF00;
loc_822ADF4C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822adee0
	if (ctx.cr6.eq) goto loc_822ADEE0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BBA40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// beq 0x822bba74
	if (ctx.cr0.eq) goto loc_822BBA74;
	// ld r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// std r10,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r10.u64);
	// ld r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// b 0x822bbafc
	goto loc_822BBAFC;
loc_822BBA74:
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f13,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lfs f9,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lfs f8,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f0,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f13.f64)));
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// fmadds f12,f9,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f12.f64)));
	// fmadds f0,f8,f10,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// fmadds f13,f6,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f13.f64)));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmadds f13,f5,f7,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f12.f64)));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmadds f0,f4,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, ctx.f0.f64)));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// std r10,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r10.u64);
loc_822BBAFC:
	// ld r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// std r11,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// ld r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// std r11,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// lfs f1,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C1220) {
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
	ctx.lr = 0x822C1228;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,508(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 508);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r31,r3,504
	r31.s64 = ctx.r3.s64 + 504;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c1274
	if (!ctx.cr6.gt) goto loc_822C1274;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
loc_822C1250:
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, ctx.xer);
	// beq cr6,0x822c1270
	if (ctx.cr6.eq) goto loc_822C1270;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822c1250
	if (ctx.cr6.lt) goto loc_822C1250;
	// b 0x822c1274
	goto loc_822C1274;
loc_822C1270:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822C1274:
	// lwz r10,508(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 508);
	// li r28,1
	r28.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822c1374
	if (!ctx.cr6.eq) goto loc_822C1374;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822c1350
	if (!ctx.cr6.eq) goto loc_822C1350;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822c12a4
	if (!ctx.cr0.eq) goto loc_822C12A4;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_822C12A4:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x822c1350
	if (!ctx.cr6.lt) goto loc_822C1350;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822c12c4
	if (ctx.cr6.eq) goto loc_822C12C4;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822C12BC;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x822c12c8
	goto loc_822C12C8;
loc_822C12C4:
	// li r30,0
	r30.s64 = 0;
loc_822C12C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822c1300
	if (!ctx.cr6.gt) goto loc_822C1300;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822C12E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c12f4
	if (ctx.cr6.eq) goto loc_822C12F4;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822C12F4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822c12e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C12E0;
loc_822C1300:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c1344
	if (ctx.cr6.eq) goto loc_822C1344;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822c133c
	if (ctx.cr0.eq) goto loc_822C133C;
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
	ctx.lr = 0x822C133C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C133C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_822C1344:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r28,16(r31)
	REX_STORE_U8(r31.u32 + 16, r28.u8);
loc_822C1350:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c1368
	if (ctx.cr0.eq) goto loc_822C1368;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_822C1368:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822C1374:
	// stw r28,260(r27)
	REX_STORE_U32(r27.u32 + 260, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822C53F0) {
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
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x823f02b8
	ctx.lr = 0x822C5414;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24200(r31)
	REX_STORE_U32(r31.u32 + 24200, ctx.r3.u32);
	// bne 0x822c5428
	if (!ctx.cr0.eq) goto loc_822C5428;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c5550
	goto loc_822C5550;
loc_822C5428:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x823f02b8
	ctx.lr = 0x822C5434;
	sub_823F02B8(ctx, base);
	// stw r3,24208(r31)
	REX_STORE_U32(r31.u32 + 24208, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822c545c
	if (!ctx.cr0.eq) goto loc_822C545C;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24200(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24200);
	// bl 0x823f0350
	ctx.lr = 0x822C544C;
	sub_823F0350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,24200(r31)
	REX_STORE_U32(r31.u32 + 24200, ctx.r11.u32);
	// b 0x822c5550
	goto loc_822C5550;
loc_822C545C:
	// lwz r11,24200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24200);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r6,14952
	ctx.r4.s64 = ctx.r6.s64 + 14952;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
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
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822C54AC;
	sub_826A1E70(ctx, base);
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// li r10,8709
	ctx.r10.s64 = 8709;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r9,8576
	ctx.r9.u64 = ctx.r9.u64 | 8576;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,10568(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10568);
	// rlwinm r10,r10,0,29,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF807;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// lwz r10,24200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24200);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822C5504:
	// lis r10,-16381
	ctx.r10.s64 = -1073545216;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,8705
	ctx.r10.u64 = ctx.r10.u64 | 8705;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// ori r7,r7,4
	ctx.r7.u64 = ctx.r7.u64 | 4;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822c5504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C5504;
	// lwz r11,24200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24200);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,24204(r31)
	REX_STORE_U32(r31.u32 + 24204, ctx.r11.u32);
loc_822C5550:
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

DEFINE_REX_FUNC(sub_822CF418) {
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
	ctx.lr = 0x822CF420;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822e1b98
	ctx.lr = 0x822CF434;
	sub_822E1B98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80f8
	ctx.lr = 0x822CF440;
	sub_822C80F8(ctx, base);
	// li r28,-1
	r28.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822cf4c8
	if (!ctx.cr6.eq) goto loc_822CF4C8;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822cf464
	if (!ctx.cr6.gt) goto loc_822CF464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822CF464;
	sub_822D5B28(ctx, base);
loc_822CF464:
	// li r11,1401
	ctx.r11.s64 = 1401;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// li r9,19
	ctx.r9.s64 = 19;
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,256
	ctx.r6.s64 = 256;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10900);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822CF4C8:
	// lwz r11,13808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf504
	if (ctx.cr6.eq) goto loc_822CF504;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822cf504
	if (ctx.cr6.eq) goto loc_822CF504;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822cf4fc
	if (ctx.cr6.eq) goto loc_822CF4FC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x822cf508
	goto loc_822CF508;
loc_822CF4FC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x822cf508
	goto loc_822CF508;
loc_822CF504:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822CF508:
	// lwz r10,12028(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12028);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r10,9,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7F;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// or r30,r11,r29
	r30.u64 = ctx.r11.u64 | r29.u64;
	// ble cr6,0x822cf538
	if (!ctx.cr6.gt) goto loc_822CF538;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822CF534;
	sub_822D5B28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822CF538:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r11,-3480
	ctx.r6.s64 = ctx.r11.s64 + -3480;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5d20
	ctx.lr = 0x822CF550;
	sub_822D5D20(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x822cf5c0
	if (!ctx.cr6.eq) goto loc_822CF5C0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822cf570
	if (!ctx.cr6.gt) goto loc_822CF570;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822CF570;
	sub_822D5B28(ctx, base);
loc_822CF570:
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// li r10,19
	ctx.r10.s64 = 19;
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,256
	ctx.r8.s64 = 256;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10900);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822CF5C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1b98
	ctx.lr = 0x822CF5CC;
	sub_822E1B98(ctx, base);
	// lbz r11,10941(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10941);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,10941(r31)
	REX_STORE_U8(r31.u32 + 10941, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822DE4F0) {
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
	ctx.lr = 0x822DE4F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10941(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10941);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822de51c
	if (!ctx.cr0.eq) goto loc_822DE51C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x822d55e0
	ctx.lr = 0x822DE51C;
	sub_822D55E0(ctx, base);
loc_822DE51C:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,148
	ctx.r4.s64 = 148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4ea8
	ctx.lr = 0x822DE52C;
	sub_822D4EA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4ea8
	ctx.lr = 0x822DE540;
	sub_822D4EA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4ea8
	ctx.lr = 0x822DE554;
	sub_822D4EA8(ctx, base);
	// lbz r11,10941(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10941);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm. r24,r11,27,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r7,13408(r31)
	REX_STORE_U32(r31.u32 + 13408, ctx.r7.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r7,13412(r31)
	REX_STORE_U32(r31.u32 + 13412, ctx.r7.u32);
	// beq 0x822de5bc
	if (ctx.cr0.eq) goto loc_822DE5BC;
	// lwz r10,13616(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13616);
	// andi. r9,r11,223
	ctx.r9.u64 = ctx.r11.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// addi r11,r31,13616
	ctx.r11.s64 = r31.s64 + 13616;
	// lwz r11,13620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13620);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lwz r11,13624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13624);
	// stw r11,15140(r31)
	REX_STORE_U32(r31.u32 + 15140, ctx.r11.u32);
	// lwz r11,13628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13628);
	// stw r11,15136(r31)
	REX_STORE_U32(r31.u32 + 15136, ctx.r11.u32);
	// lwz r11,13632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13632);
	// stw r11,15128(r31)
	REX_STORE_U32(r31.u32 + 15128, ctx.r11.u32);
	// lwz r11,13636(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13636);
	// stw r11,15132(r31)
	REX_STORE_U32(r31.u32 + 15132, ctx.r11.u32);
	// lwz r11,13620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13620);
	// addi r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -160;
	// stb r9,10941(r31)
	REX_STORE_U8(r31.u32 + 10941, ctx.r9.u8);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// b 0x822de6ec
	goto loc_822DE6EC;
loc_822DE5BC:
	// addi r25,r31,13568
	r25.s64 = r31.s64 + 13568;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822d4930
	ctx.lr = 0x822DE5C8;
	sub_822D4930(ctx, base);
	// addi r3,r31,13424
	ctx.r3.s64 = r31.s64 + 13424;
	// bl 0x822d4930
	ctx.lr = 0x822DE5D0;
	sub_822D4930(ctx, base);
	// addi r3,r31,13544
	ctx.r3.s64 = r31.s64 + 13544;
	// bl 0x822d4930
	ctx.lr = 0x822DE5D8;
	sub_822D4930(ctx, base);
	// addi r3,r31,13448
	ctx.r3.s64 = r31.s64 + 13448;
	// bl 0x822d4930
	ctx.lr = 0x822DE5E0;
	sub_822D4930(ctx, base);
	// addi r3,r31,13472
	ctx.r3.s64 = r31.s64 + 13472;
	// bl 0x822d4930
	ctx.lr = 0x822DE5E8;
	sub_822D4930(ctx, base);
	// addi r3,r31,13496
	ctx.r3.s64 = r31.s64 + 13496;
	// bl 0x822d4930
	ctx.lr = 0x822DE5F0;
	sub_822D4930(ctx, base);
	// addi r3,r31,13520
	ctx.r3.s64 = r31.s64 + 13520;
	// bl 0x822d4930
	ctx.lr = 0x822DE5F8;
	sub_822D4930(ctx, base);
	// lwz r11,13568(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13568);
	// addi r4,r28,-4
	ctx.r4.s64 = r28.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822de620
	if (ctx.cr6.eq) goto loc_822DE620;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r7,r11,-16384
	ctx.r7.s64 = ctx.r11.s64 + -1073741824;
loc_822DE620:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// ori r5,r27,1
	ctx.r5.u64 = r27.u64 | 1;
	// addi r6,r11,-7576
	ctx.r6.s64 = ctx.r11.s64 + -7576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5d20
	ctx.lr = 0x822DE634;
	sub_822D5D20(ctx, base);
	// addi r27,r3,4
	r27.s64 = ctx.r3.s64 + 4;
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d57d8
	ctx.lr = 0x822DE644;
	sub_822D57D8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822de670
	if (ctx.cr6.eq) goto loc_822DE670;
	// addi r8,r31,13592
	ctx.r8.s64 = r31.s64 + 13592;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5a50
	ctx.lr = 0x822DE66C;
	sub_822D5A50(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822DE670:
	// lwz r11,21744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822de688
	if (!ctx.cr6.eq) goto loc_822DE688;
	// lbz r11,10941(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10941);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822de6bc
	if (!ctx.cr0.eq) goto loc_822DE6BC;
loc_822DE688:
	// rlwinm r11,r28,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r28,3
	ctx.r10.u64 = r28.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r28,r27
	ctx.r9.u64 = r27.u64 - r28.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r8,r31,13592
	ctx.r8.s64 = r31.s64 + 13592;
	// li r7,1
	ctx.r7.s64 = 1;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5a50
	ctx.lr = 0x822DE6B8;
	sub_822D5A50(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822DE6BC:
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r30,r26
	ctx.r9.u64 = r26.u64 - r30.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5a50
	ctx.lr = 0x822DE6EC;
	sub_822D5A50(ctx, base);
loc_822DE6EC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822EB6D8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// b 0x822eb7b0
	sub_822EB7B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EBDA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822EBDA8;
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
	// bl 0x822e8048
	ctx.lr = 0x822EBDBC;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,260
	r30.s64 = r31.s64 + 260;
	// addi r11,r11,14576
	ctx.r11.s64 = ctx.r11.s64 + 14576;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822EBDDC;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x822EBDE4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822ebe14
	if (ctx.cr0.eq) goto loc_822EBE14;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,20804
	ctx.r4.s64 = ctx.r11.s64 + 20804;
	// bl 0x82120600
	ctx.lr = 0x822EBDFC;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x822EBE10;
	sub_821BF110(ctx, base);
	// b 0x822ebe18
	goto loc_822EBE18;
loc_822EBE14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EBE18:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x822EBE28;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ebe40
	if (ctx.cr0.eq) goto loc_822EBE40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822EBE40;
	sub_82120AC0(ctx, base);
loc_822EBE40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822EF670) {
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
	// addi r11,r11,15376
	ctx.r11.s64 = ctx.r11.s64 + 15376;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822ef69c
	if (ctx.cr0.eq) goto loc_822EF69C;
	// bl 0x8269ce98
	ctx.lr = 0x822EF69C;
	sub_8269CE98(ctx, base);
loc_822EF69C:
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

DEFINE_REX_FUNC(sub_822F0048) {
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
	ctx.lr = 0x822F0050;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15432
	ctx.r4.s64 = ctx.r11.s64 + 15432;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82180150
	ctx.lr = 0x822F0074;
	sub_82180150(ctx, base);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// addi r26,r25,24
	r26.s64 = r25.s64 + 24;
	// li r24,0
	r24.s64 = 0;
	// li r20,1
	r20.s64 = 1;
	// lis r21,-32126
	r21.s64 = -2105409536;
	// lis r22,-32106
	r22.s64 = -2104098816;
	// lwz r31,28(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 28);
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt 0x822f0148
	if (ctx.cr0.gt) goto loc_822F0148;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x822f0148
	if (!ctx.cr6.lt) goto loc_822F0148;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822f011c
	if (!ctx.cr6.lt) goto loc_822F011C;
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble 0x822f00d8
	if (!ctx.cr0.gt) goto loc_822F00D8;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_822F00BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f00d0
	if (ctx.cr6.eq) goto loc_822F00D0;
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822F00D0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822f00bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F00BC;
loc_822F00D8:
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f0110
	if (ctx.cr6.eq) goto loc_822F0110;
	// lbz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f010c
	if (ctx.cr0.eq) goto loc_822F010C;
	// lwz r11,112(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 112);
	// lwz r9,-19400(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r22)
	REX_STORE_U32(r22.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F010C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F010C:
	// stw r24,12(r26)
	REX_STORE_U32(r26.u32 + 12, r24.u32);
loc_822F0110:
	// stb r20,16(r26)
	REX_STORE_U8(r26.u32 + 16, r20.u8);
	// stw r24,12(r26)
	REX_STORE_U32(r26.u32 + 12, r24.u32);
	// stw r24,8(r26)
	REX_STORE_U32(r26.u32 + 8, r24.u32);
loc_822F011C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x822f0148
	if (!ctx.cr6.lt) goto loc_822F0148;
	// neg r11,r31
	ctx.r11.s64 = static_cast<int64_t>(-r31.u64);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822F0130:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0140
	if (ctx.cr0.eq) goto loc_822F0140;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
loc_822F0140:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822f0130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0130;
loc_822F0148:
	// stw r24,4(r26)
	REX_STORE_U32(r26.u32 + 4, r24.u32);
	// addi r3,r25,4
	ctx.r3.s64 = r25.s64 + 4;
	// lwz r6,8(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822f01cc
	if (!ctx.cr6.gt) goto loc_822F01CC;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_822F0164:
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822f01a8
	if (ctx.cr6.eq) goto loc_822F01A8;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_822F017C:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r5,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r8,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x822f017c
	if (!ctx.cr6.eq) goto loc_822F017C;
loc_822F01A8:
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stwx r11,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822f0164
	if (ctx.cr6.lt) goto loc_822F0164;
loc_822F01CC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stb r24,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r24.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x822f01f0
	if (!ctx.cr6.gt) goto loc_822F01F0;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822f0bd0
	ctx.lr = 0x822F01F0;
	sub_822F0BD0(ctx, base);
loc_822F01F0:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r30,8(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// ble cr6,0x822f035c
	if (!ctx.cr6.gt) goto loc_822F035C;
loc_822F0208:
	// lwz r4,16(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 16);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// lwzx r31,r4,r3
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// bge cr6,0x822f0240
	if (!ctx.cr6.lt) goto loc_822F0240;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_822F0224:
	// lwzx r8,r4,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bne cr6,0x822f0240
	if (!ctx.cr6.eq) goto loc_822F0240;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// blt cr6,0x822f0224
	if (ctx.cr6.lt) goto loc_822F0224;
loc_822F0240:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822f02a4
	if (!ctx.cr6.lt) goto loc_822F02A4;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r6,12(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822F025C:
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwz r8,216(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bne cr6,0x822f029c
	if (!ctx.cr6.eq) goto loc_822F029C;
	// lwz r9,224(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_822F029C:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bdnz 0x822f025c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F025C;
loc_822F02A4:
	// clrlwi. r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822f0350
	if (!ctx.cr6.lt) goto loc_822F0350;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x822f030c
	if (ctx.cr0.eq) goto loc_822F030C;
loc_822F02C0:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,216(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bne cr6,0x822f0300
	if (!ctx.cr6.eq) goto loc_822F0300;
	// lwz r8,224(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x822f0300
	if (ctx.cr6.eq) goto loc_822F0300;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x822f0300
	if (ctx.cr6.eq) goto loc_822F0300;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, ctx.r8.u32);
loc_822F0300:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x822f02c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F02C0;
	// b 0x822f0350
	goto loc_822F0350;
loc_822F030C:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,216(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r31.s32, ctx.xer);
	// bne cr6,0x822f0348
	if (!ctx.cr6.eq) goto loc_822F0348;
	// lwz r8,224(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x822f0348
	if (!ctx.cr6.eq) goto loc_822F0348;
	// li r8,3
	ctx.r8.s64 = 3;
	// stfs f31,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// stw r8,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, ctx.r8.u32);
loc_822F0348:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x822f030c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F030C;
loc_822F0350:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// blt cr6,0x822f0208
	if (ctx.cr6.lt) goto loc_822F0208;
loc_822F035C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F0370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r28,r24
	r28.u64 = r24.u64;
	// ble 0x822f0560
	if (!ctx.cr0.gt) goto loc_822F0560;
loc_822F037C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F0394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,784(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r5,788(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f03b4
	if (ctx.cr6.eq) goto loc_822F03B4;
	// lwz r11,224(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822f03c8
	if (!ctx.cr6.eq) goto loc_822F03C8;
loc_822F03B4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f0554
	if (ctx.cr6.eq) goto loc_822F0554;
	// lwz r11,224(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822f0554
	if (ctx.cr6.eq) goto loc_822F0554;
loc_822F03C8:
	// lwz r11,212(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 212);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0408
	if (ctx.cr0.eq) goto loc_822F0408;
	// lwz r11,224(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822f0408
	if (ctx.cr6.eq) goto loc_822F0408;
	// lwz r11,212(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 212);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f0408
	if (!ctx.cr0.eq) goto loc_822F0408;
	// lwz r11,224(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 224);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822f0404
	if (ctx.cr6.eq) goto loc_822F0404;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822f0404
	if (ctx.cr6.eq) goto loc_822F0404;
	// stw r20,224(r5)
	REX_STORE_U32(ctx.r5.u32 + 224, r20.u32);
loc_822F0404:
	// stfs f31,228(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r5.u32 + 228, temp.u32);
loc_822F0408:
	// lwz r11,212(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 212);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0448
	if (ctx.cr0.eq) goto loc_822F0448;
	// lwz r11,224(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822f0448
	if (ctx.cr6.eq) goto loc_822F0448;
	// lwz r11,212(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 212);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f0448
	if (!ctx.cr0.eq) goto loc_822F0448;
	// lwz r11,224(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 224);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x822f0444
	if (ctx.cr6.eq) goto loc_822F0444;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x822f0444
	if (ctx.cr6.eq) goto loc_822F0444;
	// stw r20,224(r4)
	REX_STORE_U32(ctx.r4.u32 + 224, r20.u32);
loc_822F0444:
	// stfs f31,228(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r4.u32 + 228, temp.u32);
loc_822F0448:
	// lbz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f0554
	if (ctx.cr0.eq) goto loc_822F0554;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F0468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0554
	if (ctx.cr0.eq) goto loc_822F0554;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822f0530
	if (!ctx.cr6.eq) goto loc_822F0530;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822f0490
	if (!ctx.cr0.eq) goto loc_822F0490;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_822F0490:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bge cr6,0x822f0530
	if (!ctx.cr6.lt) goto loc_822F0530;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822f04b0
	if (ctx.cr6.eq) goto loc_822F04B0;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822F04A8;
	sub_822C1A70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822f04b4
	goto loc_822F04B4;
loc_822F04B0:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_822F04B4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822f04ec
	if (!ctx.cr6.gt) goto loc_822F04EC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822F04CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f04e0
	if (ctx.cr6.eq) goto loc_822F04E0;
	// lwz r9,12(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822F04E0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822f04cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F04CC;
loc_822F04EC:
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f0524
	if (ctx.cr6.eq) goto loc_822F0524;
	// lbz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f0520
	if (ctx.cr0.eq) goto loc_822F0520;
	// lwz r11,112(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 112);
	// lwz r9,-19400(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r22)
	REX_STORE_U32(r22.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F0520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F0520:
	// stw r24,12(r26)
	REX_STORE_U32(r26.u32 + 12, r24.u32);
loc_822F0524:
	// stw r31,12(r26)
	REX_STORE_U32(r26.u32 + 12, r31.u32);
	// stw r30,8(r26)
	REX_STORE_U32(r26.u32 + 8, r30.u32);
	// stb r20,16(r26)
	REX_STORE_U8(r26.u32 + 16, r20.u8);
loc_822F0530:
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f0548
	if (ctx.cr0.eq) goto loc_822F0548;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_822F0548:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
loc_822F0554:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x822f037c
	if (ctx.cr6.lt) goto loc_822F037C;
loc_822F0560:
	// bl 0x821800b8
	ctx.lr = 0x822F0564;
	sub_821800B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82315720) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// std r6,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r6.u64);
	// std r5,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r5.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231575C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lfs f13,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bctrl 
	ctx.lr = 0x82315794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82318BC8) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318bf8
	if (ctx.cr6.eq) goto loc_82318BF8;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x823150e0
	ctx.lr = 0x82318BEC;
	sub_823150E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82318bfc
	if (ctx.cr0.eq) goto loc_82318BFC;
loc_82318BF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82318BFC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231A6B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231BF00) {
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
	ctx.lr = 0x8231BF08;
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r21,0
	r21.s64 = 0;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r8,r31,80
	ctx.r8.s64 = r31.s64 + 80;
	// stw r21,88(r31)
	REX_STORE_U32(r31.u32 + 88, r21.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// bgt cr6,0x8231c204
	if (ctx.cr6.gt) goto loc_8231C204;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// b 0x8231bf58
	goto loc_8231BF58;
loc_8231BF50:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8231BF58:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8231bf50
	if (!ctx.cr6.eq) goto loc_8231BF50;
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x8231BF70;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addic. r29,r1,80
	ctx.xer.ca = ctx.r1.u32 > 4294967215;
	r29.s64 = ctx.r1.s64 + 80;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8231bf88
	if (!ctx.cr0.eq) goto loc_8231BF88;
loc_8231BF80:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231c208
	goto loc_8231C208;
loc_8231BF88:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231c004
	if (!ctx.cr6.gt) goto loc_8231C004;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
loc_8231BF9C:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82318950
	ctx.lr = 0x8231BFB0;
	sub_82318950(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231bfec
	if (ctx.cr0.eq) goto loc_8231BFEC;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r29,4(r29)
	REX_STORE_U32(r29.u32 + 4, r29.u32);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8231bf9c
	goto loc_8231BF9C;
loc_8231BFEC:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r5,r5,40
	ctx.r5.s64 = ctx.r5.s64 + 40;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231bf9c
	if (ctx.cr6.lt) goto loc_8231BF9C;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8231C004:
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8231c02c
	if (ctx.cr6.eq) goto loc_8231C02C;
loc_8231C018:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8231c018
	if (!ctx.cr6.eq) goto loc_8231C018;
loc_8231C02C:
	// stw r4,36(r25)
	REX_STORE_U32(r25.u32 + 36, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231c204
	if (ctx.cr6.eq) goto loc_8231C204;
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// li r6,-1
	ctx.r6.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231c0a4
	if (!ctx.cr6.gt) goto loc_8231C0A4;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r7,20(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 20);
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
loc_8231C054:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231c08c
	if (ctx.cr6.eq) goto loc_8231C08C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8231C074:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8231c084
	if (!ctx.cr6.gt) goto loc_8231C084;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8231C084:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x8231c074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C074;
loc_8231C08C:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8231c098
	if (!ctx.cr6.gt) goto loc_8231C098;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_8231C098:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// bne 0x8231c054
	if (!ctx.cr0.eq) goto loc_8231C054;
loc_8231C0A4:
	// addic. r24,r6,1
	ctx.xer.ca = ctx.r6.u32 > 4294967294;
	r24.s64 = ctx.r6.s64 + 1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble 0x8231c204
	if (!ctx.cr0.gt) goto loc_8231C204;
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
	// li r6,2403
	ctx.r6.s64 = 2403;
	// mulli r4,r4,24
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231C0D4;
	sub_82330A38(ctx, base);
	// stw r3,32(r25)
	REX_STORE_U32(r25.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231bf80
	if (ctx.cr0.eq) goto loc_8231BF80;
	// rlwinm r23,r24,2,0,29
	r23.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r23
	ctx.r11.s64 = static_cast<int64_t>(-r23.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x8231C0F0;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addic. r29,r1,80
	ctx.xer.ca = ctx.r1.u32 > 4294967215;
	r29.s64 = ctx.r1.s64 + 80;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8231bf80
	if (ctx.cr0.eq) goto loc_8231BF80;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8231c204
	if (ctx.cr6.eq) goto loc_8231C204;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r21
	r27.u64 = r21.u64;
	// addi r22,r11,6500
	r22.s64 = ctx.r11.s64 + 6500;
loc_8231C120:
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 32);
	// lwz r28,8(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8);
	// add. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231c144
	if (ctx.cr0.eq) goto loc_8231C144;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// stw r21,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r21.u32);
	// stw r21,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r21.u32);
	// stw r21,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r21.u32);
	// stb r21,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, r21.u8);
loc_8231C144:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8231C154;
	sub_823EF5F0(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231c1a0
	if (!ctx.cr6.gt) goto loc_8231C1A0;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_8231C168:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x823189c0
	ctx.lr = 0x8231C184;
	sub_823189C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8231c208
	if (!ctx.cr6.eq) goto loc_8231C208;
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231c168
	if (ctx.cr6.lt) goto loc_8231C168;
loc_8231C1A0:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8231c1dc
	if (!ctx.cr6.gt) goto loc_8231C1DC;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_8231C1BC:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8231c1d0
	if (ctx.cr6.eq) goto loc_8231C1D0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_8231C1D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8231c1bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C1BC;
loc_8231C1DC:
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// bl 0x82319a20
	ctx.lr = 0x8231C1F0;
	sub_82319A20(ctx, base);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// lwz r26,0(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8231c120
	if (!ctx.cr6.eq) goto loc_8231C120;
loc_8231C204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231C208:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_823362B8) {
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
	ctx.lr = 0x823362C0;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823362e4
	if (!ctx.cr6.eq) goto loc_823362E4;
loc_823362D8:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1ce8
	return;
loc_823362E4:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// beq cr6,0x823362d8
	if (ctx.cr6.eq) goto loc_823362D8;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82336310
	if (ctx.cr6.eq) goto loc_82336310;
	// li r3,51
	ctx.r3.s64 = 51;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1ce8
	return;
loc_82336310:
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// stw r30,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r30.u32);
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331480
	ctx.lr = 0x82336330;
	sub_82331480(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r30,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// stw r9,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stw r30,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// stw r30,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r30.u32);
	// stw r30,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// stw r30,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r30.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r3,21364(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 21364);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r30,56(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r27,60(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r26,64(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r25,68(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r24,72(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r23,76(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r22,80(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r21,84(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r31,88(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r20,4368(r28)
	r20.u64 = REX_LOAD_U32(r28.u32 + 4368);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// stw r26,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// stw r25,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r25.u32);
	// stw r24,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r24.u32);
	// stw r23,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r23.u32);
	// stw r22,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r22.u32);
	// stw r21,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r21.u32);
	// stw r31,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r20,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r20.u32);
	// bl 0x82357b40
	ctx.lr = 0x823363E4;
	sub_82357B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823363f4
	if (!ctx.cr6.eq) goto loc_823363F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
loc_823363F4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82343018) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82343020;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82343044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823430ec
	if (!ctx.cr6.eq) goto loc_823430EC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823430e8
	if (ctx.cr6.lt) goto loc_823430E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823430e8
	if (!ctx.cr6.lt) goto loc_823430E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823430e8
	if (ctx.cr6.eq) goto loc_823430E8;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823430dc
	if (ctx.cr6.eq) goto loc_823430DC;
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
loc_82343084:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823430a8
	if (ctx.cr6.eq) goto loc_823430A8;
	// lhz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// lwz r5,156(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 156);
	// subf r4,r6,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
loc_823430A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823430c0
	if (ctx.cr6.eq) goto loc_823430C0;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// bge cr6,0x823430d8
	if (!ctx.cr6.lt) goto loc_823430D8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_823430C0:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82343084
	if (!ctx.cr6.eq) goto loc_82343084;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823430D8:
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_823430DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823430E8:
	// li r3,37
	ctx.r3.s64 = 37;
loc_823430EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8234C3B8) {
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
	ctx.lr = 0x8234C3C0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234c41c
	if (ctx.cr6.eq) goto loc_8234C41C;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,1196(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1196);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8234c400
	if (!ctx.cr6.gt) goto loc_8234C400;
	// li r3,79
	ctx.r3.s64 = 79;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
loc_8234C400:
	// lwz r10,22056(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22056);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x8234c428
	if (!ctx.cr6.eq) goto loc_8234C428;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8234c41c
	if (ctx.cr6.lt) goto loc_8234C41C;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(r31.s32, 6, ctx.xer);
	// blt cr6,0x8234c43c
	if (ctx.cr6.lt) goto loc_8234C43C;
loc_8234C41C:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
loc_8234C428:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8234c41c
	if (ctx.cr6.lt) goto loc_8234C41C;
	// lwz r11,1200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8234c41c
	if (!ctx.cr6.lt) goto loc_8234C41C;
loc_8234C43C:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8234c550
	if (ctx.cr6.gt) goto loc_8234C550;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8234c47c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234C47C;
	// bdzf 4*cr6+eq,0x8234c498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234C498;
	// bdzf 4*cr6+eq,0x8234c4d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234C4D8;
	// bdzf 4*cr6+eq,0x8234c50c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234C50C;
	// bdzf 4*cr6+eq,0x8234c548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234C548;
	// bne cr6,0x8234c50c
	if (!ctx.cr6.eq) goto loc_8234C50C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
loc_8234C470:
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
loc_8234C47C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
loc_8234C498:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8234c4b8
	if (ctx.cr6.eq) goto loc_8234C4B8;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// beq cr6,0x8234c4b8
	if (ctx.cr6.eq) goto loc_8234C4B8;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// beq cr6,0x8234c4c0
	if (ctx.cr6.eq) goto loc_8234C4C0;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(r31.s32, 5, ctx.xer);
	// bne cr6,0x8234c470
	if (!ctx.cr6.eq) goto loc_8234C470;
loc_8234C4B8:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// bne cr6,0x8234c4c8
	if (!ctx.cr6.eq) goto loc_8234C4C8;
loc_8234C4C0:
	// li r31,2
	r31.s64 = 2;
	// b 0x8234c550
	goto loc_8234C550;
loc_8234C4C8:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(r31.s32, 5, ctx.xer);
	// bne cr6,0x8234c550
	if (!ctx.cr6.eq) goto loc_8234C550;
	// li r31,3
	r31.s64 = 3;
	// b 0x8234c550
	goto loc_8234C550;
loc_8234C4D8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(r31.s32, 5, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
loc_8234C50C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(r31.s32, 5, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// beq cr6,0x8234c550
	if (ctx.cr6.eq) goto loc_8234C550;
	// li r3,39
	ctx.r3.s64 = 39;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
loc_8234C548:
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(r31.s32, 7, ctx.xer);
	// bgt cr6,0x8234c470
	if (ctx.cr6.gt) goto loc_8234C470;
loc_8234C550:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef5f0
	ctx.lr = 0x8234C560;
	sub_823EF5F0(ctx, base);
	// lwz r11,284(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 284);
	// addi r30,r29,284
	r30.s64 = r29.s64 + 284;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234c598
	if (!ctx.cr6.eq) goto loc_8234C598;
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 68);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,22008
	ctx.r3.s64 = ctx.r11.s64 + 22008;
	// bl 0x82360640
	ctx.lr = 0x8234C580;
	sub_82360640(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234c598
	if (!ctx.cr6.eq) goto loc_8234C598;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
loc_8234C598:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// lfs f12,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x8234c6f8
	if (ctx.cr6.lt) goto loc_8234C6F8;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// subf r6,r28,r7
	ctx.r6.u64 = ctx.r7.u64 - r28.u64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r10,r28,8
	ctx.r10.s64 = r28.s64 + 8;
	// subf r7,r28,r5
	ctx.r7.u64 = ctx.r5.u64 - r28.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8234C5DC:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234c5f0
	if (!ctx.cr6.lt) goto loc_8234C5F0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8234c5fc
	goto loc_8234C5FC;
loc_8234C5F0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8234c5fc
	if (!ctx.cr6.gt) goto loc_8234C5FC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8234C5FC:
	// lwz r8,68(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 68);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,1196(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 1196);
	// mullw r8,r4,r31
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// stfs f0,-4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234c630
	if (!ctx.cr6.lt) goto loc_8234C630;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8234c63c
	goto loc_8234C63C;
loc_8234C630:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8234c63c
	if (!ctx.cr6.gt) goto loc_8234C63C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8234C63C:
	// lwz r8,68(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 68);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,1196(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 1196);
	// mullw r8,r4,r31
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234c674
	if (!ctx.cr6.lt) goto loc_8234C674;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8234c680
	goto loc_8234C680;
loc_8234C674:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8234c680
	if (!ctx.cr6.gt) goto loc_8234C680;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8234C680:
	// lwz r8,68(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 68);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,1196(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 1196);
	// mullw r8,r4,r31
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r3,r8,2
	ctx.r3.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// stfsx f0,r6,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234c6b8
	if (!ctx.cr6.lt) goto loc_8234C6B8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8234c6c4
	goto loc_8234C6C4;
loc_8234C6B8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8234c6c4
	if (!ctx.cr6.gt) goto loc_8234C6C4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8234C6C4:
	// lwz r8,68(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 68);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,1196(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 1196);
	// mullw r8,r4,r31
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r8,3
	ctx.r3.s64 = ctx.r8.s64 + 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r8,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// stfsx f0,r7,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x8234c5dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234C5DC;
loc_8234C6F8:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bge cr6,0x8234c768
	if (!ctx.cr6.lt) goto loc_8234C768;
	// subf r7,r11,r27
	ctx.r7.u64 = r27.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r8,r6,r28
	ctx.r8.u64 = r28.u64 - ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8234C71C:
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234c730
	if (!ctx.cr6.lt) goto loc_8234C730;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8234c73c
	goto loc_8234C73C;
loc_8234C730:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8234c73c
	if (!ctx.cr6.gt) goto loc_8234C73C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8234C73C:
	// lwz r9,68(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 68);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r6,1196(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// mullw r9,r6,r31
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r31.s32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r7.u32, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8234c71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234C71C;
loc_8234C768:
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r30,r29,76
	r30.s64 = r29.s64 + 76;
	// stw r10,88(r29)
	REX_STORE_U32(r29.u32 + 88, ctx.r10.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234c794
	if (ctx.cr6.eq) goto loc_8234C794;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
loc_8234C794:
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234c7f0
	if (ctx.cr6.eq) goto loc_8234C7F0;
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234c7f0
	if (!ctx.cr6.gt) goto loc_8234C7F0;
loc_8234C7B0:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234C7D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8234c7dc
	if (!ctx.cr6.eq) goto loc_8234C7DC;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8234C7DC:
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234c7b0
	if (ctx.cr6.lt) goto loc_8234C7B0;
loc_8234C7F0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8236A890) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236a8a0
	if (!ctx.cr6.eq) goto loc_8236A8A0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236A8A0:
	// b 0x8236a7b0
	sub_8236A7B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236AF30) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236af40
	if (!ctx.cr6.eq) goto loc_8236AF40;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236AF40:
	// b 0x8236adf8
	sub_8236ADF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236B878) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,792(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ctx.r11.u64;
	// bne cr6,0x8236b89c
	if (!ctx.cr6.eq) goto loc_8236B89C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8236B89C:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8236b8a8
	if (!ctx.cr6.eq) goto loc_8236B8A8;
	// li r7,2
	ctx.r7.s64 = 2;
loc_8236B8A8:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x8236b8b4
	if (!ctx.cr6.eq) goto loc_8236B8B4;
	// li r7,3
	ctx.r7.s64 = 3;
loc_8236B8B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,464
	ctx.r11.s64 = ctx.r3.s64 + 464;
	// addi r6,r9,15048
	ctx.r6.s64 = ctx.r9.s64 + 15048;
	// lfs f0,8300(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8300);
	ctx.f0.f64 = double(temp.f32);
loc_8236B8D4:
	// lfs f13,372(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f12,360(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 360);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x8236b91c
	if (ctx.cr6.lt) goto loc_8236B91C;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f11,412(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r4,r9
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f9,f10,f13,f12
	ctx.f9.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f12.f64)));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8236b950
	goto loc_8236B950;
loc_8236B91C:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f9,412(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 412);
	ctx.f9.f64 = double(temp.f32);
	// std r10,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fnmsubs f6,f7,f13,f12
	ctx.f6.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f12.f64)));
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f4.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8236B950:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,416(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8236b968
	if (ctx.cr6.lt) goto loc_8236B968;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// b 0x8236b974
	goto loc_8236B974;
loc_8236B968:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8236b978
	if (!ctx.cr6.lt) goto loc_8236B978;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8236B974:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8236B978:
	// lwz r10,792(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236b8d4
	if (ctx.cr6.lt) goto loc_8236B8D4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82376A98) {
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
	ctx.lr = 0x82376AA0;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca8
	ctx.lr = 0x82376AA8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r24,r11,11220
	r24.s64 = ctx.r11.s64 + 11220;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lfs f30,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f30.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// mr r27,r24
	r27.u64 = r24.u64;
	// lfs f28,11208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11208);
	f28.f64 = double(temp.f32);
	// li r25,16
	r25.s64 = 16;
	// lfs f31,3804(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3804);
	f31.f64 = double(temp.f32);
	// li r26,64
	r26.s64 = 64;
loc_82376AE0:
	// sraw. r30,r25,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r25.s32 < 0) & (((r25.s32 >> temp.u32) << temp.u32) != r25.s32);
	r30.s64 = r25.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// sraw r10,r26,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r26.s32 < 0) & (((r26.s32 >> temp.u32) << temp.u32) != r26.s32);
	ctx.r10.s64 = r26.s32 >> temp.u32;
	// li r31,0
	r31.s64 = 0;
	// ble 0x82376b4c
	if (!ctx.cr0.gt) goto loc_82376B4C;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f29,f13
	f29.f64 = double(float(ctx.f13.f64));
loc_82376B0C:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f31,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, f30.f64)));
	// fmuls f10,f11,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 * f28.f64));
	// fdivs f1,f10,f29
	ctx.f1.f64 = double(float(ctx.f10.f64 / f29.f64));
	// bl 0x826a15c0
	ctx.lr = 0x82376B30;
	sub_826A15C0(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fdivs f7,f30,f8
	ctx.f7.f64 = double(float(f30.f64 / ctx.f8.f64));
	// stfsu f7,4(r28)
	ea = 4 + r28.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	r28.u32 = ea;
	// blt cr6,0x82376b0c
	if (ctx.cr6.lt) goto loc_82376B0C;
loc_82376B4C:
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r11,r24,20
	ctx.r11.s64 = r24.s64 + 20;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82376ae0
	if (ctx.cr6.lt) goto loc_82376AE0;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,-32124
	ctx.r8.s64 = -2105278464;
	// addi r11,r11,-7768
	ctx.r11.s64 = ctx.r11.s64 + -7768;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r11,r7,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r4,r9,11240
	ctx.r4.s64 = ctx.r9.s64 + 11240;
	// stw r11,-5528(r8)
	REX_STORE_U32(ctx.r8.u32 + -5528, ctx.r11.u32);
	// neg r7,r23
	ctx.r7.s64 = static_cast<int64_t>(-r23.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,19564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19564);
	ctx.f0.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// li r3,256
	ctx.r3.s64 = 256;
	// addi r5,r11,2112
	ctx.r5.s64 = ctx.r11.s64 + 2112;
loc_82376BA8:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82376bec
	if (!ctx.cr6.lt) goto loc_82376BEC;
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// lwz r10,-4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r31.u64);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82376BEC:
	// clrlwi r10,r6,27
	ctx.r10.u64 = ctx.r6.u32 & 0x1F;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x82376bfc
	if (!ctx.cr6.eq) goto loc_82376BFC;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82376BFC:
	// clrlwi r10,r6,26
	ctx.r10.u64 = ctx.r6.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82376c0c
	if (!ctx.cr6.eq) goto loc_82376C0C;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82376C0C:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82376c54
	if (!ctx.cr6.lt) goto loc_82376C54;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// lwz r31,0(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// lfd f11,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82376C54:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// clrlwi r31,r10,27
	r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(r31.s32, 31, ctx.xer);
	// bne cr6,0x82376c68
	if (!ctx.cr6.eq) goto loc_82376C68;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82376C68:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82376c78
	if (!ctx.cr6.eq) goto loc_82376C78;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82376C78:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82376cc0
	if (!ctx.cr6.lt) goto loc_82376CC0;
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// std r31,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r31.u64);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f10,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82376CC0:
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x82376cd0
	if (!ctx.cr6.eq) goto loc_82376CD0;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82376CD0:
	// clrlwi r10,r8,26
	ctx.r10.u64 = ctx.r8.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82376ce0
	if (!ctx.cr6.eq) goto loc_82376CE0;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82376CE0:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82376d28
	if (!ctx.cr6.lt) goto loc_82376D28;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r31.u64);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// lfd f11,136(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82376D28:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// clrlwi r31,r10,27
	r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(r31.s32, 31, ctx.xer);
	// bne cr6,0x82376d3c
	if (!ctx.cr6.eq) goto loc_82376D3C;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82376D3C:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82376d4c
	if (!ctx.cr6.eq) goto loc_82376D4C;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82376D4C:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82376d94
	if (!ctx.cr6.lt) goto loc_82376D94;
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, r31.u64);
	// std r10,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,152(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82376D94:
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// clrlwi r31,r10,27
	r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(r31.s32, 31, ctx.xer);
	// bne cr6,0x82376da8
	if (!ctx.cr6.eq) goto loc_82376DA8;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82376DA8:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82376db8
	if (!ctx.cr6.eq) goto loc_82376DB8;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82376DB8:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82376e00
	if (!ctx.cr6.lt) goto loc_82376E00;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, r31.u64);
	// std r10,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// lfd f13,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,168(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82376E00:
	// addi r10,r8,3
	ctx.r10.s64 = ctx.r8.s64 + 3;
	// clrlwi r31,r10,27
	r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(r31.s32, 31, ctx.xer);
	// bne cr6,0x82376e14
	if (!ctx.cr6.eq) goto loc_82376E14;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82376E14:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82376e24
	if (!ctx.cr6.eq) goto loc_82376E24;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82376E24:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82376e6c
	if (!ctx.cr6.lt) goto loc_82376E6C;
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, r31.u64);
	// std r10,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// lfd f13,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,184(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82376E6C:
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// clrlwi r31,r10,27
	r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(r31.s32, 31, ctx.xer);
	// bne cr6,0x82376e80
	if (!ctx.cr6.eq) goto loc_82376E80;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82376E80:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82376e90
	if (!ctx.cr6.eq) goto loc_82376E90;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82376E90:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82376ed8
	if (!ctx.cr6.lt) goto loc_82376ED8;
	// lwz r10,24(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, r31.u64);
	// std r10,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lfd f13,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,200(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82376ED8:
	// addi r10,r8,5
	ctx.r10.s64 = ctx.r8.s64 + 5;
	// clrlwi r31,r10,27
	r31.u64 = ctx.r10.u32 & 0x1F;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(r31.s32, 31, ctx.xer);
	// bne cr6,0x82376eec
	if (!ctx.cr6.eq) goto loc_82376EEC;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82376EEC:
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82376efc
	if (!ctx.cr6.eq) goto loc_82376EFC;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82376EFC:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x82376ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376BA8;
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bge cr6,0x82377200
	if (!ctx.cr6.lt) goto loc_82377200;
	// subfic r10,r6,512
	ctx.xer.ca = ctx.r6.u32 <= 512;
	ctx.r10.u64 = static_cast<uint64_t>(512) - ctx.r6.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8237715c
	if (ctx.cr6.lt) goto loc_8237715C;
	// subfic r10,r6,508
	ctx.xer.ca = ctx.r6.u32 <= 508;
	ctx.r10.u64 = static_cast<uint64_t>(508) - ctx.r6.u64;
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r4,1016
	ctx.r9.s64 = ctx.r4.s64 + 1016;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r3,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r3.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82376F44:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82376f88
	if (!ctx.cr6.lt) goto loc_82376F88;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// lwz r31,8(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// std r10,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// lfd f11,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// std r10,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfd f13,200(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82376F88:
	// srawi r10,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x82376fa4
	if (!ctx.cr6.eq) goto loc_82376FA4;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82376FA4:
	// srawi r10,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 6;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82376fc0
	if (!ctx.cr6.eq) goto loc_82376FC0;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82376FC0:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82377008
	if (!ctx.cr6.lt) goto loc_82377008;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, r31.u64);
	// lfd f13,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r10,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// lfd f11,176(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_82377008:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// srawi r31,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	r31.s64 = ctx.r10.s32 >> 5;
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// rlwinm r31,r31,5,0,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r31,r31,r10
	r31.u64 = ctx.r10.u64 - r31.u64;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(r31.s32, 31, ctx.xer);
	// bne cr6,0x82377028
	if (!ctx.cr6.eq) goto loc_82377028;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_82377028:
	// srawi r31,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	r31.s64 = ctx.r10.s32 >> 6;
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// rlwinm r31,r31,6,0,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82377044
	if (!ctx.cr6.eq) goto loc_82377044;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82377044:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8237708c
	if (!ctx.cr6.lt) goto loc_8237708C;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, r31.u64);
	// std r10,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f13,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,160(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_8237708C:
	// srawi r10,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x823770a8
	if (!ctx.cr6.eq) goto loc_823770A8;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_823770A8:
	// srawi r10,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 6;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x823770c4
	if (!ctx.cr6.eq) goto loc_823770C4;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_823770C4:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8237710c
	if (!ctx.cr6.lt) goto loc_8237710C;
	// lwz r10,-4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r31,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, r31.u64);
	// std r10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f13,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_8237710C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// srawi r31,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	r31.s64 = ctx.r10.s32 >> 5;
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// rlwinm r31,r31,5,0,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r31,r31,r10
	r31.u64 = ctx.r10.u64 - r31.u64;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(r31.s32, 31, ctx.xer);
	// bne cr6,0x8237712c
	if (!ctx.cr6.eq) goto loc_8237712C;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_8237712C:
	// srawi r31,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	r31.s64 = ctx.r10.s32 >> 6;
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// rlwinm r31,r31,6,0,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x82377148
	if (!ctx.cr6.eq) goto loc_82377148;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_82377148:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82376f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82376F44;
loc_8237715C:
	// cmpwi cr6,r6,512
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 512, ctx.xer);
	// bge cr6,0x82377200
	if (!ctx.cr6.lt) goto loc_82377200;
	// subfic r9,r6,512
	ctx.xer.ca = ctx.r6.u32 <= 512;
	ctx.r9.u64 = static_cast<uint64_t>(512) - ctx.r6.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82377174:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x823771b8
	if (!ctx.cr6.lt) goto loc_823771B8;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// std r8,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// std r4,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r4.u64);
	// lfd f11,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f13,200(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f6,64(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_823771B8:
	// srawi r9,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 5;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r4,r8,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r4,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r4.u64;
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// bne cr6,0x823771d4
	if (!ctx.cr6.eq) goto loc_823771D4;
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
loc_823771D4:
	// srawi r9,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 6;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r4,r8,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r3,r4,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r4.u64;
	// cmpwi cr6,r3,63
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 63, ctx.xer);
	// bne cr6,0x823771f0
	if (!ctx.cr6.eq) goto loc_823771F0;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_823771F0:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz 0x82377174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82377174;
loc_82377200:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf4
	ctx.lr = 0x82377210;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823C8BB8) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addic. r10,r11,792
	ctx.xer.ca = ctx.r11.u32 > 4294966503;
	ctx.r10.s64 = ctx.r11.s64 + 792;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823c8bd8
	if (ctx.cr0.eq) goto loc_823C8BD8;
	// addi r3,r11,1068
	ctx.r3.s64 = ctx.r11.s64 + 1068;
	// bl 0x82351b38
	ctx.lr = 0x823C8BD8;
	sub_82351B38(ctx, base);
loc_823C8BD8:
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

DEFINE_REX_FUNC(sub_823C8CF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823c8d00
	if (!ctx.cr6.eq) goto loc_823C8D00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823C8D00:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823c8d4c
	if (ctx.cr6.lt) goto loc_823C8D4C;
	// lwz r10,788(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 788);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823c8d4c
	if (!ctx.cr6.lt) goto loc_823C8D4C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x823c8d4c
	if (ctx.cr6.lt) goto loc_823C8D4C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x823c8d4c
	if (ctx.cr6.gt) goto loc_823C8D4C;
	// addi r10,r4,198
	ctx.r10.s64 = ctx.r4.s64 + 198;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stfs f1,624(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 624, temp.u32);
	// blr 
	return;
loc_823C8D4C:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CA7C0) {
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
	ctx.lr = 0x823CA7C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x823ca7f4
	if (!ctx.cr6.eq) goto loc_823CA7F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823CA7F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,3628
	ctx.r4.s64 = ctx.r11.s64 + 3628;
	// addi r3,r11,3724
	ctx.r3.s64 = ctx.r11.s64 + 3724;
	// bl 0x823de6f0
	ctx.lr = 0x823CA804;
	sub_823DE6F0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823ca834
	if (ctx.cr6.eq) goto loc_823CA834;
	// lwz r3,452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 452);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ca834
	if (ctx.cr6.eq) goto loc_823CA834;
	// bl 0x8269d770
	ctx.lr = 0x823CA824;
	sub_8269D770(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r28,452(r11)
	REX_STORE_U32(ctx.r11.u32 + 452, r28.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r28,252(r10)
	REX_STORE_U32(ctx.r10.u32 + 252, r28.u32);
loc_823CA834:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcaa8
	ctx.lr = 0x823CA840;
	sub_823DCAA8(ctx, base);
	// li r30,64
	r30.s64 = 64;
loc_823CA844:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ca868
	if (ctx.cr6.eq) goto loc_823CA868;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x8269d770
	ctx.lr = 0x823CA860;
	sub_8269D770(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stwx r28,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r28.u32);
loc_823CA868:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r30,3520
	r29.s64 = r30.s64 + 3520;
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ca898
	if (ctx.cr6.eq) goto loc_823CA898;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8269d770
	ctx.lr = 0x823CA884;
	sub_8269D770(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r28,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r28.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stwx r28,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, r28.u32);
loc_823CA898:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(r30.u32, 96, ctx.xer);
	// blt cr6,0x823ca844
	if (ctx.cr6.lt) goto loc_823CA844;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r28,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, r28.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r28,228(r10)
	REX_STORE_U32(ctx.r10.u32 + 228, r28.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,56(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ca8e8
	if (ctx.cr6.eq) goto loc_823CA8E8;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r30,56(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8269dfa8
	ctx.lr = 0x823CA8D0;
	sub_8269DFA8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823ca8e0
	if (ctx.cr6.eq) goto loc_823CA8E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ef08
	ctx.lr = 0x823CA8E0;
	sub_8269EF08(ctx, base);
loc_823CA8E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r28,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r28.u32);
loc_823CA8E8:
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,3616(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 3616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ca934
	if (ctx.cr6.eq) goto loc_823CA934;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r11,r10,312
	ctx.r11.s64 = ctx.r10.s64 + 312;
	// addi r10,r10,3724
	ctx.r10.s64 = ctx.r10.s64 + 3724;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_823CA908:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ca928
	if (!ctx.cr0.eq) goto loc_823CA928;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823ca908
	if (!ctx.cr6.eq) goto loc_823CA908;
loc_823CA928:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ca934
	if (ctx.cr6.eq) goto loc_823CA934;
	// li r27,1
	r27.s64 = 1;
loc_823CA934:
	// stw r28,3624(r7)
	REX_STORE_U32(ctx.r7.u32 + 3624, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c9258
	ctx.lr = 0x823CA940;
	sub_823C9258(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,9
	ctx.r11.s64 = 9;
	// cntlzw r10,r27
	ctx.r10.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823D1958) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D1D68) {
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
	ctx.lr = 0x823D1D70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d1d9c
	if (!ctx.cr6.eq) goto loc_823D1D9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823D1D9C:
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// addi r4,r11,284
	ctx.r4.s64 = ctx.r11.s64 + 284;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d1dd4
	if (!ctx.cr6.eq) goto loc_823D1DD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,22008
	ctx.r3.s64 = ctx.r11.s64 + 22008;
	// bl 0x82360640
	ctx.lr = 0x823D1DB8;
	sub_82360640(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823d1dd4
	if (!ctx.cr6.eq) goto loc_823D1DD4;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823D1DD4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// lfs f12,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x823d1f1c
	if (ctx.cr6.lt) goto loc_823D1F1C;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// addi r10,r28,8
	ctx.r10.s64 = r28.s64 + 8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D1E04:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823d1e18
	if (!ctx.cr6.lt) goto loc_823D1E18;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823d1e24
	goto loc_823D1E24;
loc_823D1E18:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823d1e24
	if (!ctx.cr6.gt) goto loc_823D1E24;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823D1E24:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// lwz r6,284(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 284);
	// mullw r9,r7,r30
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823d1e58
	if (!ctx.cr6.lt) goto loc_823D1E58;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823d1e64
	goto loc_823D1E64;
loc_823D1E58:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823d1e64
	if (!ctx.cr6.gt) goto loc_823D1E64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823D1E64:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// lwz r6,284(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 284);
	// mullw r9,r7,r30
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823d1e9c
	if (!ctx.cr6.lt) goto loc_823D1E9C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823d1ea8
	goto loc_823D1EA8;
loc_823D1E9C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823d1ea8
	if (!ctx.cr6.gt) goto loc_823D1EA8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823D1EA8:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// lwz r6,284(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 284);
	// mullw r9,r7,r30
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823d1ee0
	if (!ctx.cr6.lt) goto loc_823D1EE0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823d1eec
	goto loc_823D1EEC;
loc_823D1EE0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823d1eec
	if (!ctx.cr6.gt) goto loc_823D1EEC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823D1EEC:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// lwz r6,284(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 284);
	// mullw r9,r7,r30
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// bdnz 0x823d1e04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D1E04;
loc_823D1F1C:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x823d1f80
	if (!ctx.cr6.lt) goto loc_823D1F80;
	// subf r9,r11,r29
	ctx.r9.u64 = r29.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D1F34:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823d1f48
	if (!ctx.cr6.lt) goto loc_823D1F48;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x823d1f54
	goto loc_823D1F54;
loc_823D1F48:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823d1f54
	if (!ctx.cr6.gt) goto loc_823D1F54;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823D1F54:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,1196(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 1196);
	// lwz r6,284(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 284);
	// mullw r9,r7,r30
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// bdnz 0x823d1f34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D1F34;
loc_823D1F80:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lfs f1,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823D1F9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823E1220) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e1240
	if (ctx.cr6.gt) goto loc_823E1240;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E1240:
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r9,0,21,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823e127c
	if (ctx.cr6.eq) goto loc_823E127C;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// ld r10,344(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 344);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// std r8,344(r11)
	REX_STORE_U64(ctx.r11.u32 + 344, ctx.r8.u64);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823E127C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823e128c
	if (!ctx.cr6.eq) goto loc_823E128C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823e1334
	if (ctx.cr6.eq) goto loc_823E1334;
loc_823E128C:
	// lwz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r6,r3,0,22,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x200;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r3,r3,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// bne cr6,0x823e12d0
	if (!ctx.cr6.eq) goto loc_823E12D0;
loc_823E12A8:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r31,r9,0,22,22
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823e12c4
	if (ctx.cr6.eq) goto loc_823E12C4;
	// li r6,512
	ctx.r6.s64 = 512;
loc_823E12C4:
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// beq cr6,0x823e12a8
	if (ctx.cr6.eq) goto loc_823E12A8;
loc_823E12D0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e130c
	if (ctx.cr6.eq) goto loc_823E130C;
	// stw r6,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// ld r9,344(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 344);
	// std r9,24(r4)
	REX_STORE_U64(ctx.r4.u32 + 24, ctx.r9.u64);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// ldx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r8.u32);
	// std r6,16(r4)
	REX_STORE_U64(ctx.r4.u32 + 16, ctx.r6.u64);
	// stw r7,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
loc_823E130C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823e1334
	if (ctx.cr6.eq) goto loc_823E1334;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// ld r10,344(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 344);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// std r6,344(r11)
	REX_STORE_U64(ctx.r11.u32 + 344, ctx.r6.u64);
loc_823E1334:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E7DD8) {
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
	ctx.lr = 0x823E7DE0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwzu r30,4(r7)
	ea = 4 + ctx.r7.u32;
	r30.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x823e7e1c
	if (ctx.cr6.eq) goto loc_823E7E1C;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mullw r9,r26,r9
	ctx.r9.s64 = int64_t(r26.s32) * int64_t(ctx.r9.s32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// mullw r5,r26,r5
	ctx.r5.s64 = int64_t(r26.s32) * int64_t(ctx.r5.s32);
	// bl 0x823e7dd8
	ctx.lr = 0x823E7E1C;
	sub_823E7DD8(ctx, base);
loc_823E7E1C:
	// addi r11,r26,-2
	ctx.r11.s64 = r26.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823e7ef4
	if (ctx.cr6.gt) goto loc_823E7EF4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e7e84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823E7E84;
	// bdzf 4*cr6+eq,0x823e7e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823E7E60;
	// bne cr6,0x823e7ebc
	if (!ctx.cr6.eq) goto loc_823E7EBC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e6a08
	ctx.lr = 0x823E7E58;
	sub_823E6A08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823E7E60:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e6dd0
	ctx.lr = 0x823E7E7C;
	sub_823E6DD0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823E7E84:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823e7f28
	if (!ctx.cr6.gt) goto loc_823E7F28;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r28,r11,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_823E7E98:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823e7090
	ctx.lr = 0x823E7EA8;
	sub_823E7090(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// bne 0x823e7e98
	if (!ctx.cr0.eq) goto loc_823E7E98;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823E7EBC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823e7f28
	if (!ctx.cr6.gt) goto loc_823E7F28;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r26,r11,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_823E7ECC:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e73f8
	ctx.lr = 0x823E7EE0;
	sub_823E73F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// bne 0x823e7ecc
	if (!ctx.cr0.eq) goto loc_823E7ECC;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823E7EF4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823e7f28
	if (!ctx.cr6.gt) goto loc_823E7F28;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r25,r11,3,0,28
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_823E7F04:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e7900
	ctx.lr = 0x823E7F1C;
	sub_823E7900(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r28,r28,r25
	r28.u64 = r28.u64 + r25.u64;
	// bne 0x823e7f04
	if (!ctx.cr0.eq) goto loc_823E7F04;
loc_823E7F28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823ECBD8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82793934
	ctx.lr = 0x823ECC00;
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823efcc0
	ctx.lr = 0x823ECC08;
	sub_823EFCC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ED488) {
	REX_FUNC_PROLOGUE();
	// b 0x82793714
	__imp__XamInputGetCapabilities(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ED608) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,15920(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ed634
	if (ctx.cr6.eq) goto loc_823ED634;
	// rlwinm r5,r5,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
loc_823ED634:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x823ed650
	if (ctx.cr6.eq) goto loc_823ED650;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823ed658
	goto loc_823ED658;
loc_823ED650:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_823ED658:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82793a14
	ctx.lr = 0x823ED664;
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823ed674
	if (!ctx.cr0.eq) goto loc_823ED674;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823f0188
	ctx.lr = 0x823ED674;
	sub_823F0188(ctx, base);
loc_823ED674:
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

DEFINE_REX_FUNC(sub_823EEAD8) {
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
	// bl 0x82793ab4
	ctx.lr = 0x823EEAE8;
	__imp__NtClearEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eeaf8
	if (ctx.cr0.lt) goto loc_823EEAF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823eeb00
	goto loc_823EEB00;
loc_823EEAF8:
	// bl 0x823f0020
	ctx.lr = 0x823EEAFC;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EEB00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EF5F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823EF5F8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x823ef628
	if (!ctx.cr6.lt) goto loc_823EF628;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ef78c
	if (ctx.cr6.eq) goto loc_823EF78C;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823EF618:
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823ef618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF618;
	// b 0x823ef78c
	goto loc_823EF78C;
loc_823EF628:
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// vspltisb v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvsl v12,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// vslb v0,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// vor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltb v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xF))));
	// beq 0x823ef664
	if (ctx.cr0.eq) goto loc_823EF664;
	// stvlx v0,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823EF664:
	// rlwinm r11,r5,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823ef674
	if (!ctx.cr6.lt) goto loc_823EF674;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_823EF674:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r6,-30912(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -30912);
	// beq cr6,0x823ef694
	if (ctx.cr6.eq) goto loc_823EF694;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823EF688:
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x823ef688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF688;
loc_823EF694:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi. r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r11,r7,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// bne 0x823ef6c4
	if (!ctx.cr0.eq) goto loc_823EF6C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ef760
	if (ctx.cr6.eq) goto loc_823EF760;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823EF6B4:
	// dcbzl r0,r10
	ea = (ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823ef6b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF6B4;
	// b 0x823ef760
	goto loc_823EF760;
loc_823EF6C4:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// blt cr6,0x823ef6d4
	if (ctx.cr6.lt) goto loc_823EF6D4;
	// li r8,4
	ctx.r8.s64 = 4;
loc_823EF6D4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ef6f4
	if (ctx.cr6.eq) goto loc_823EF6F4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823EF6E4:
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// dcbzl r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823ef6e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF6E4;
loc_823EF6F4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ef760
	if (ctx.cr6.eq) goto loc_823EF760;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823EF704:
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823ef718
	if (!ctx.cr6.lt) goto loc_823EF718;
	// li r8,512
	ctx.r8.s64 = 512;
	// dcbzl r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_823EF718:
	// li r8,16
	ctx.r8.s64 = 16;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r31,64
	r31.s64 = 64;
	// li r30,80
	r30.s64 = 80;
	// stvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,96
	r29.s64 = 96;
	// li r8,112
	ctx.r8.s64 = 112;
	// stvx128 v0,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stvx128 v0,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x823ef704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF704;
loc_823EF760:
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823ef788
	if (ctx.cr6.lt) goto loc_823EF788;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823EF778:
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bdnz 0x823ef778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF778;
loc_823EF788:
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
loc_823EF78C:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823FF3C0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,-26856
	ctx.r4.s64 = ctx.r10.s64 + -26856;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82417d68
	sub_82417D68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823FFFD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823FFFD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82400004
	if (!ctx.cr6.lt) goto loc_82400004;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8240003c
	goto loc_8240003C;
loc_82400004:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ffec0
	ctx.lr = 0x8240000C;
	sub_823FFEC0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x82400038
	if (ctx.cr0.lt) goto loc_82400038;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8240002C;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82400038:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8240003C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824026F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824026F8;
	// stwu r1,-2112(r1)
	ea = -2112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,2132(r1)
	REX_STORE_U32(ctx.r1.u32 + 2132, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,2140(r1)
	REX_STORE_U32(ctx.r1.u32 + 2140, ctx.r4.u32);
	// stw r5,2148(r1)
	REX_STORE_U32(ctx.r1.u32 + 2148, ctx.r5.u32);
	// beq cr6,0x824029dc
	if (ctx.cr6.eq) goto loc_824029DC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824029dc
	if (ctx.cr6.eq) goto loc_824029DC;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x8243f388
	ctx.lr = 0x82402720;
	sub_8243F388(ctx, base);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r11,r11,2256
	ctx.r11.s64 = ctx.r11.s64 + 2256;
	// addi r10,r10,3720
	ctx.r10.s64 = ctx.r10.s64 + 3720;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stw r11,576(r1)
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r11.u32);
	// stw r10,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r10.u32);
	// bl 0x826a4760
	ctx.lr = 0x82402744;
	env = ctx;
	temp.s64 = ppc_setjmp(ctx.r3.u32);
	if (temp.s64 != 0) ctx = env;
	ctx.r3 = temp;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82402820
	if (!ctx.cr0.eq) goto loc_82402820;
	// li r5,472
	ctx.r5.s64 = 472;
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8243c6e8
	ctx.lr = 0x8240275C;
	sub_8243C6E8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82402778;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,2148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 2148);
	// lwz r9,2140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 2140);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r6,-32192
	ctx.r6.s64 = -2109734912;
	// lis r5,-32192
	ctx.r5.s64 = -2109734912;
	// stw r10,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r10.u32);
	// addi r10,r8,3720
	ctx.r10.s64 = ctx.r8.s64 + 3720;
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// stw r9,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r9.u32);
	// lis r3,-32237
	ctx.r3.s64 = -2112684032;
	// stw r10,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// addi r11,r4,-4376
	ctx.r11.s64 = ctx.r4.s64 + -4376;
	// addi r10,r3,3720
	ctx.r10.s64 = ctx.r3.s64 + 3720;
	// li r28,0
	r28.s64 = 0;
	// stw r11,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// addi r9,r6,2360
	ctx.r9.s64 = ctx.r6.s64 + 2360;
	// stw r10,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r10.u32);
	// addi r8,r5,2392
	ctx.r8.s64 = ctx.r5.s64 + 2392;
	// stw r28,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r28.u32);
	// stw r9,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r28.u32);
	// bl 0x8243ccc8
	ctx.lr = 0x824027E8;
	sub_8243CCC8(ctx, base);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,2312
	ctx.r11.s64 = ctx.r11.s64 + 2312;
	// stw r30,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// bl 0x8243cf48
	ctx.lr = 0x82402804;
	sub_8243CF48(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lis r10,10240
	ctx.r10.s64 = 671088640;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ori r29,r10,2
	r29.u64 = ctx.r10.u64 | 2;
	// beq cr6,0x8240284c
	if (ctx.cr6.eq) goto loc_8240284C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8240282c
	if (ctx.cr6.eq) goto loc_8240282C;
loc_82402820:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x824029cc
	goto loc_824029CC;
loc_8240282C:
	// lwz r31,2132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 2132);
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// ori r10,r10,134
	ctx.r10.u64 = ctx.r10.u64 | 134;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// b 0x8240285c
	goto loc_8240285C;
loc_8240284C:
	// lwz r31,2132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 2132);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_8240285C:
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r28,52(r31)
	REX_STORE_U32(r31.u32 + 52, r28.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x824029c8
	if (ctx.cr6.eq) goto loc_824029C8;
	// lis r11,9345
	ctx.r11.s64 = 612433920;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// bl 0x823f02b8
	ctx.lr = 0x82402898;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x824028d4
	if (ctx.cr0.eq) goto loc_824028D4;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824028CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824028e0
	if (!ctx.cr0.eq) goto loc_824028E0;
loc_824028D4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824029cc
	goto loc_824029CC;
loc_824028E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bne cr6,0x82402934
	if (!ctx.cr6.eq) goto loc_82402934;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82402920
	goto loc_82402920;
loc_824028F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8243ce48
	ctx.lr = 0x82402908;
	sub_8243CE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x82402918;
	sub_826A1E70(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
loc_82402920:
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824028f8
	if (ctx.cr6.lt) goto loc_824028F8;
	// b 0x824029c0
	goto loc_824029C0;
loc_82402934:
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// ori r10,r10,6
	ctx.r10.u64 = ctx.r10.u64 | 6;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824029c0
	if (!ctx.cr6.eq) goto loc_824029C0;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x824029b0
	goto loc_824029B0;
loc_8240294C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8243ce48
	ctx.lr = 0x8240295C;
	sub_8243CE48(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824029b0
	if (!ctx.cr6.lt) goto loc_824029B0;
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r9,-3
	ctx.r11.s64 = ctx.r9.s64 + -3;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8240298C:
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbzu r10,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r8,r10,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x8240298c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240298C;
loc_824029B0:
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8240294c
	if (ctx.cr6.lt) goto loc_8240294C;
loc_824029C0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8243cb70
	ctx.lr = 0x824029C8;
	sub_8243CB70(ctx, base);
loc_824029C8:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_824029CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8243c800
	ctx.lr = 0x824029D4;
	sub_8243C800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824029e4
	goto loc_824029E4;
loc_824029DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824029E4:
	// addi r1,r1,2112
	ctx.r1.s64 = ctx.r1.s64 + 2112;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82411C10) {
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
	ctx.lr = 0x82411C18;
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
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bge cr6,0x82411c8c
	if (!ctx.cr6.lt) goto loc_82411C8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_82411C60:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823fbcc0
	ctx.lr = 0x82411C70;
	sub_823FBCC0(ctx, base);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// stfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// stfs f31,4(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// blt cr6,0x82411c60
	if (ctx.cr6.lt) goto loc_82411C60;
loc_82411C8C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411cac
	if (ctx.cr6.eq) goto loc_82411CAC;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x82411CAC;
	sub_825C73B8(ctx, base);
loc_82411CAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82411ccc
	if (ctx.cr6.eq) goto loc_82411CCC;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r29
	ctx.r4.u64 = r29.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x82411CCC;
	sub_82409820(ctx, base);
loc_82411CCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82415778) {
	REX_FUNC_PROLOGUE();
	// lwz r3,632(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// b 0x82419a40
	sub_82419A40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82415938) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r9,92
	ctx.r9.s64 = 92;
loc_82415954:
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,34
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 34, ctx.xer);
	// bne cr6,0x82415988
	if (!ctx.cr6.eq) goto loc_82415988;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82415974
	if (ctx.cr6.eq) goto loc_82415974;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82415974
	if (!ctx.cr6.lt) goto loc_82415974;
	// stbx r9,r3,r6
	REX_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u8);
loc_82415974:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82415988
	if (!ctx.cr6.eq) goto loc_82415988;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82415988:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824159bc
	if (ctx.cr6.eq) goto loc_824159BC;
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,92
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 92, ctx.xer);
	// bne cr6,0x824159bc
	if (!ctx.cr6.eq) goto loc_824159BC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824159b4
	if (ctx.cr6.eq) goto loc_824159B4;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824159b4
	if (!ctx.cr6.lt) goto loc_824159B4;
	// stbx r9,r3,r6
	REX_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u8);
loc_824159B4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824159BC:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824159d4
	if (ctx.cr6.eq) goto loc_824159D4;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824159d4
	if (!ctx.cr6.lt) goto loc_824159D4;
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stbx r8,r3,r6
	REX_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r8.u8);
loc_824159D4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x82415954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82415954;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82419E38) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82419f18
	if (!ctx.cr6.lt) goto loc_82419F18;
	// lbz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// cmpwi cr6,r8,35
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 35, ctx.xer);
	// bne cr6,0x82419e8c
	if (!ctx.cr6.eq) goto loc_82419E8C;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,35
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 35, ctx.xer);
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82419e8c
	if (!ctx.cr6.eq) goto loc_82419E8C;
loc_82419E80:
	// stb r10,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
loc_82419E84:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82419E8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82419f4c
	if (!ctx.cr6.eq) goto loc_82419F4C;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bgt cr6,0x82419ef8
	if (ctx.cr6.gt) goto loc_82419EF8;
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x82419f18
	if (!ctx.cr6.eq) goto loc_82419F18;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82419f18
	if (!ctx.cr6.lt) goto loc_82419F18;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,46
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 46, ctx.xer);
	// bne cr6,0x82419f18
	if (!ctx.cr6.eq) goto loc_82419F18;
	// stb r10,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// li r3,3
	ctx.r3.s64 = 3;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// blr 
	return;
loc_82419EF8:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x82419f20
	if (ctx.cr6.eq) goto loc_82419F20;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82419f20
	if (ctx.cr6.eq) goto loc_82419F20;
loc_82419F10:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
loc_82419F14:
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
loc_82419F18:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82419F20:
	// stb r10,1(r5)
	REX_STORE_U8(ctx.r5.u32 + 1, ctx.r10.u8);
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82419e84
	if (!ctx.cr6.lt) goto loc_82419E84;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x82419e84
	if (!ctx.cr6.eq) goto loc_82419E84;
	// stb r11,2(r5)
	REX_STORE_U8(ctx.r5.u32 + 2, ctx.r11.u8);
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82419F4C:
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// bne cr6,0x82419fb4
	if (!ctx.cr6.eq) goto loc_82419FB4;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bgt cr6,0x82419f98
	if (ctx.cr6.gt) goto loc_82419F98;
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// ble cr6,0x82419f18
	if (!ctx.cr6.gt) goto loc_82419F18;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// ble cr6,0x82419e80
	if (!ctx.cr6.gt) goto loc_82419E80;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// ble cr6,0x82419f18
	if (!ctx.cr6.gt) goto loc_82419F18;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// ble cr6,0x82419e80
	if (!ctx.cr6.gt) goto loc_82419E80;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// b 0x82419f18
	goto loc_82419F18;
loc_82419F98:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// beq cr6,0x82419e80
	if (ctx.cr6.eq) goto loc_82419E80;
	// b 0x82419f10
	goto loc_82419F10;
loc_82419FB4:
	// cmpwi cr6,r8,45
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 45, ctx.xer);
	// bne cr6,0x82419f18
	if (!ctx.cr6.eq) goto loc_82419F18;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// b 0x82419f14
	goto loc_82419F14;
}

DEFINE_REX_FUNC(sub_8242A6E0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8242A6E8;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r24,0
	r24.s64 = 0;
	// lwz r9,92(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r4,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r4.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r20,28(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// stw r7,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r7.u32);
	// mr r21,r24
	r21.u64 = r24.u64;
	// rlwinm r15,r20,2,0,29
	r15.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// mr r19,r24
	r19.u64 = r24.u64;
	// stw r24,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r24.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r8,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// stw r24,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r24.u32);
	// bl 0x823f02b8
	ctx.lr = 0x8242A75C;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x8242ae90
	if (ctx.cr0.eq) goto loc_8242AE90;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242A770;
	sub_823F02B8(ctx, base);
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242ae90
	if (ctx.cr0.eq) goto loc_8242AE90;
	// rlwinm r29,r20,4,0,27
	r29.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242A78C;
	sub_823F02B8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x8242ae90
	if (ctx.cr0.eq) goto loc_8242AE90;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242A7A0;
	sub_823F02B8(ctx, base);
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242ae90
	if (ctx.cr0.eq) goto loc_8242AE90;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242A7B8;
	sub_823F02B8(ctx, base);
	// mr. r19,r3
	r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq 0x8242ae90
	if (ctx.cr0.eq) goto loc_8242AE90;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242A7CC;
	sub_823F02B8(ctx, base);
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242ae90
	if (ctx.cr0.eq) goto loc_8242AE90;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242A7E4;
	sub_823F02B8(ctx, base);
	// stw r3,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242ae90
	if (ctx.cr0.eq) goto loc_8242AE90;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r24,92(r31)
	REX_STORE_U32(r31.u32 + 92, r24.u32);
	// beq cr6,0x8242a840
	if (ctx.cr6.eq) goto loc_8242A840;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x8242A80C;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242ae98
	if (ctx.cr0.lt) goto loc_8242AE98;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242a828
	if (ctx.cr6.eq) goto loc_8242A828;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_8242A828:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242ae88
	if (!ctx.cr6.eq) goto loc_8242AE88;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242ae88
	if (!ctx.cr6.eq) goto loc_8242AE88;
loc_8242A840:
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8242A850;
	sub_826A1E70(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826a1e70
	ctx.lr = 0x8242A860;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8242a8fc
	if (ctx.cr6.eq) goto loc_8242A8FC;
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r28,r20
	r28.u64 = r20.u64;
loc_8242A874:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8242a898
	if (ctx.cr6.eq) goto loc_8242A898;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82422288
	ctx.lr = 0x8242A890;
	sub_82422288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8242a8a8
	if (!ctx.cr0.lt) goto loc_8242A8A8;
loc_8242A898:
	// lfd f0,168(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 168);
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
	// lfd f0,176(r31)
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 176);
	// stfd f0,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.f0.u64);
loc_8242A8A8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8242a8e4
	if (ctx.cr6.eq) goto loc_8242A8E4;
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
	// beq cr6,0x8242a8e4
	if (ctx.cr6.eq) goto loc_8242A8E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x8242a8e8
	goto loc_8242A8E8;
loc_8242A8E4:
	// li r11,31
	ctx.r11.s64 = 31;
loc_8242A8E8:
	// stwx r11,r30,r19
	REX_STORE_U32(r30.u32 + r19.u32, ctx.r11.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8242a874
	if (!ctx.cr0.eq) goto loc_8242A874;
loc_8242A8FC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r26,-1
	r26.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r17,r24
	r17.u64 = r24.u64;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mr r16,r24
	r16.u64 = r24.u64;
	// stw r26,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r26.u32);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8242A92C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r23,8(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r22,12(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x826a1e70
	ctx.lr = 0x8242A948;
	sub_826A1E70(ctx, base);
	// rlwinm r5,r20,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8242A958;
	sub_826A1E70(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x826a1e70
	ctx.lr = 0x8242A968;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// beq cr6,0x8242aa50
	if (ctx.cr6.eq) goto loc_8242AA50;
	// stw r25,24(r31)
	REX_STORE_U32(r31.u32 + 24, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r24,84(r31)
	REX_STORE_U32(r31.u32 + 84, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82434350
	ctx.lr = 0x8242A998;
	sub_82434350(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242ae98
	if (ctx.cr0.lt) goto loc_8242AE98;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242A9C4;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242ae98
	if (ctx.cr0.lt) goto loc_8242AE98;
	// stw r18,24(r31)
	REX_STORE_U32(r31.u32 + 24, r18.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r24,84(r31)
	REX_STORE_U32(r31.u32 + 84, r24.u32);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82434350
	ctx.lr = 0x8242A9F0;
	sub_82434350(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242ae98
	if (ctx.cr0.lt) goto loc_8242AE98;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242AA1C;
	sub_82423F70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242ae98
	if (ctx.cr0.lt) goto loc_8242AE98;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242aa48
	if (!ctx.cr6.eq) goto loc_8242AA48;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242ad60
	if (!ctx.cr6.eq) goto loc_8242AD60;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242ad60
	if (!ctx.cr6.eq) goto loc_8242AD60;
loc_8242AA48:
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r24,84(r31)
	REX_STORE_U32(r31.u32 + 84, r24.u32);
loc_8242AA50:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82421f60
	ctx.lr = 0x8242AA60;
	sub_82421F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8242aa7c
	if (!ctx.cr0.lt) goto loc_8242AA7C;
	// lfd f30,176(r31)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(r31.u32 + 176);
	// lfd f29,168(r31)
	f29.u64 = REX_LOAD_U64(r31.u32 + 168);
	// stfd f30,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, f30.u64);
	// stfd f29,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, f29.u64);
	// b 0x8242aa84
	goto loc_8242AA84;
loc_8242AA7C:
	// lfd f29,216(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// lfd f30,208(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
loc_8242AA84:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// bgt cr6,0x8242aa94
	if (ctx.cr6.gt) goto loc_8242AA94;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// bge cr6,0x8242aa98
	if (!ctx.cr6.lt) goto loc_8242AA98;
loc_8242AA94:
	// li r17,1
	r17.s64 = 1;
loc_8242AA98:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8242ab7c
	if (ctx.cr6.eq) goto loc_8242AB7C;
	// mr r30,r18
	r30.u64 = r18.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// subf r28,r18,r19
	r28.u64 = r19.u64 - r18.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
loc_8242AAB0:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8242ab6c
	if (ctx.cr6.eq) goto loc_8242AB6C;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82421f60
	ctx.lr = 0x8242AAC8;
	sub_82421F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8242aae4
	if (!ctx.cr0.lt) goto loc_8242AAE4;
	// lfd f0,168(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 168);
	// lfd f13,176(r31)
	ctx.f13.u64 = REX_LOAD_U64(r31.u32 + 176);
	// stfd f0,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f0.u64);
	// stfd f13,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.f13.u64);
	// b 0x8242aaec
	goto loc_8242AAEC;
loc_8242AAE4:
	// lfd f13,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// lfd f0,192(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
loc_8242AAEC:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x8242ab28
	if (ctx.cr6.eq) goto loc_8242AB28;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r10.u64);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// b 0x8242ab68
	goto loc_8242AB68;
loc_8242AB28:
	// lfd f12,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(r29.u32 + 0);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8242ab38
	if (!ctx.cr6.gt) goto loc_8242AB38;
	// stfd f0,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.f0.u64);
loc_8242AB38:
	// lfd f0,8(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r29.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8242ab48
	if (!ctx.cr6.lt) goto loc_8242AB48;
	// stfd f13,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.f13.u64);
loc_8242AB48:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwzx r9,r28,r30
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + r30.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_8242AB68:
	// stwx r11,r28,r30
	REX_STORE_U32(r28.u32 + r30.u32, ctx.r11.u32);
loc_8242AB6C:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8242aab0
	if (!ctx.cr0.eq) goto loc_8242AAB0;
loc_8242AB7C:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// bne cr6,0x8242ab8c
	if (!ctx.cr6.eq) goto loc_8242AB8C;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// beq cr6,0x8242ad60
	if (ctx.cr6.eq) goto loc_8242AD60;
loc_8242AB8C:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, f31.f64);
	// bgt cr6,0x8242aba4
	if (ctx.cr6.gt) goto loc_8242ABA4;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// blt cr6,0x8242aba4
	if (ctx.cr6.lt) goto loc_8242ABA4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_8242ABA4:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242abe8
	if (ctx.cr6.eq) goto loc_8242ABE8;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x8242abe4
	if (!ctx.cr6.eq) goto loc_8242ABE4;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82427ff0
	ctx.lr = 0x8242ABD0;
	sub_82427FF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8242abe4
	if (ctx.cr0.eq) goto loc_8242ABE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x8242abe8
	goto loc_8242ABE8;
loc_8242ABE4:
	// stw r24,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r24.u32);
loc_8242ABE8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8242ac64
	if (ctx.cr6.eq) goto loc_8242AC64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// subf r8,r25,r18
	ctx.r8.u64 = r18.u64 - r25.u64;
loc_8242ABFC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8242ac5c
	if (ctx.cr6.eq) goto loc_8242AC5C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8242ac5c
	if (ctx.cr6.eq) goto loc_8242AC5C;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r7,r7,0,25,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// andi. r6,r6,415
	ctx.r6.u64 = ctx.r6.u64 & 415;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// stfd f0,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.f0.u64);
	// lfd f0,40(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 40);
	// stfd f0,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.f0.u64);
loc_8242AC5C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8242abfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242ABFC;
loc_8242AC64:
	// lwz r29,452(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8242acf0
	if (ctx.cr6.eq) goto loc_8242ACF0;
	// stw r25,24(r31)
	REX_STORE_U32(r31.u32 + 24, r25.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r24,84(r31)
	REX_STORE_U32(r31.u32 + 84, r24.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824284e0
	ctx.lr = 0x8242AC98;
	sub_824284E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242ae98
	if (ctx.cr0.lt) goto loc_8242AE98;
	// stw r18,24(r31)
	REX_STORE_U32(r31.u32 + 24, r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r24,84(r31)
	REX_STORE_U32(r31.u32 + 84, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82432f08
	ctx.lr = 0x8242ACBC;
	sub_82432F08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8242ae98
	if (ctx.cr0.lt) goto loc_8242AE98;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242ace8
	if (!ctx.cr6.eq) goto loc_8242ACE8;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242ad60
	if (!ctx.cr6.eq) goto loc_8242AD60;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242ad60
	if (!ctx.cr6.eq) goto loc_8242AD60;
loc_8242ACE8:
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r24,84(r31)
	REX_STORE_U32(r31.u32 + 84, r24.u32);
loc_8242ACF0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242ad0c
	if (!ctx.cr6.eq) goto loc_8242AD0C;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// cmplwi cr6,r16,1024
	ctx.cr6.compare<uint32_t>(r16.u32, 1024, ctx.xer);
	// blt cr6,0x8242a92c
	if (ctx.cr6.lt) goto loc_8242A92C;
	// b 0x8242ad60
	goto loc_8242AD60;
loc_8242AD0C:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r25,132(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// lwz r21,136(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r19,140(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423d38
	ctx.lr = 0x8242AD44;
	sub_82423D38(ctx, base);
	// stw r24,76(r31)
	REX_STORE_U32(r31.u32 + 76, r24.u32);
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// stw r24,84(r31)
	REX_STORE_U32(r31.u32 + 84, r24.u32);
	// bne cr6,0x8242ad60
	if (!ctx.cr6.eq) goto loc_8242AD60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_8242AD60:
	// cmplwi cr6,r16,1024
	ctx.cr6.compare<uint32_t>(r16.u32, 1024, ctx.xer);
	// bne cr6,0x8242ad88
	if (!ctx.cr6.eq) goto loc_8242AD88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,428(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// li r7,1024
	ctx.r7.s64 = 1024;
	// addi r6,r11,-22952
	ctx.r6.s64 = ctx.r11.s64 + -22952;
	// li r5,3511
	ctx.r5.s64 = 3511;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423e58
	ctx.lr = 0x8242AD84;
	sub_82423E58(ctx, base);
	// b 0x8242ae7c
	goto loc_8242AE7C;
loc_8242AD88:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8242ae04
	if (ctx.cr6.eq) goto loc_8242AE04;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// subf r7,r25,r19
	ctx.r7.u64 = r19.u64 - r25.u64;
loc_8242ADA0:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8242adf8
	if (ctx.cr6.eq) goto loc_8242ADF8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stfd f0,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.f0.u64);
	// lfd f0,8(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfd f0,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.f0.u64);
	// lfd f0,32(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// lfd f13,40(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lwzx r9,r7,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r9,r9,0,25,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x8242adf0
	if (!ctx.cr6.eq) goto loc_8242ADF0;
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
	// b 0x8242adf4
	goto loc_8242ADF4;
loc_8242ADF0:
	// ori r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 256;
loc_8242ADF4:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8242ADF8:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8242ada0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242ADA0;
loc_8242AE04:
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// bl 0x826a1e70
	ctx.lr = 0x8242AE18;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8242ae88
	if (ctx.cr6.eq) goto loc_8242AE88;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8242ae88
	if (ctx.cr6.eq) goto loc_8242AE88;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242ae88
	if (!ctx.cr6.eq) goto loc_8242AE88;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8242ae88
	if (!ctx.cr6.eq) goto loc_8242AE88;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242AE74;
	sub_82423F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8242ae88
	if (!ctx.cr0.lt) goto loc_8242AE88;
loc_8242AE7C:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x8242ae98
	goto loc_8242AE98;
loc_8242AE88:
	// mr r30,r24
	r30.u64 = r24.u64;
	// b 0x8242ae98
	goto loc_8242AE98;
loc_8242AE90:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_8242AE98:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bl 0x823f0350
	ctx.lr = 0x8242AEAC;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823f0350
	ctx.lr = 0x8242AEB8;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,172(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x823f0350
	ctx.lr = 0x8242AEC4;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8242AED0;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x823f0350
	ctx.lr = 0x8242AEDC;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823f0350
	ctx.lr = 0x8242AEE8;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823f0350
	ctx.lr = 0x8242AEF4;
	sub_823F0350(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
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

DEFINE_REX_FUNC(sub_8246BCA0) {
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
	ctx.lr = 0x8246BCA8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r10,28720
	ctx.r10.s64 = 1882193920;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r30,r11,12
	r30.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8246beb8
	if (!ctx.cr6.eq) goto loc_8246BEB8;
	// lwz r29,260(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r11,517
	ctx.r11.s64 = 517;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r24,256(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r7,2
	ctx.r7.s64 = 2;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82467bd8
	ctx.lr = 0x8246BCF0;
	sub_82467BD8(ctx, base);
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8246beb8
	if (ctx.cr6.eq) goto loc_8246BEB8;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8246bd40
	if (ctx.cr6.eq) goto loc_8246BD40;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r8,r30,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,16(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8246BD18:
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8246beb8
	if (!ctx.cr6.eq) goto loc_8246BEB8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// blt cr6,0x8246bd18
	if (ctx.cr6.lt) goto loc_8246BD18;
loc_8246BD40:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,8(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r30,8(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// add r27,r11,r31
	r27.u64 = ctx.r11.u64 + r31.u64;
	// add r26,r30,r11
	r26.u64 = r30.u64 + ctx.r11.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x82465658
	ctx.lr = 0x8246BD78;
	sub_82465658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8246bd88
	if (!ctx.cr0.eq) goto loc_8246BD88;
loc_8246BD80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8246bebc
	goto loc_8246BEBC;
loc_8246BD88:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82465658
	ctx.lr = 0x8246BDAC;
	sub_82465658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8246bd80
	if (ctx.cr0.eq) goto loc_8246BD80;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82465658
	ctx.lr = 0x8246BDD8;
	sub_82465658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8246bd80
	if (ctx.cr0.eq) goto loc_8246BD80;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82465658
	ctx.lr = 0x8246BE04;
	sub_82465658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8246bd80
	if (ctx.cr0.eq) goto loc_8246BD80;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82465658
	ctx.lr = 0x8246BE30;
	sub_82465658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8246bd80
	if (ctx.cr0.eq) goto loc_8246BD80;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82465658
	ctx.lr = 0x8246BE5C;
	sub_82465658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8246bd80
	if (ctx.cr0.eq) goto loc_8246BD80;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82465658
	ctx.lr = 0x8246BE88;
	sub_82465658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8246bd80
	if (ctx.cr0.eq) goto loc_8246BD80;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82465658
	ctx.lr = 0x8246BEB4;
	sub_82465658(ctx, base);
	// b 0x8246bebc
	goto loc_8246BEBC;
loc_8246BEB8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8246BEBC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82475868) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c98
	ctx.lr = 0x82475870;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r23,-1
	r23.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82475b58
	if (!ctx.cr6.gt) goto loc_82475B58;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r20,0
	r20.s64 = 0;
	// lfd f31,-3744(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824758A8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r22,256(r31)
	REX_STORE_U32(r31.u32 + 256, r22.u32);
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82475a54
	if (ctx.cr0.eq) goto loc_82475A54;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// divwu. r21,r11,r10
	r21.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x82475a54
	if (ctx.cr0.eq) goto loc_82475A54;
loc_824758E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82477448
	ctx.lr = 0x824758F0;
	sub_82477448(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// beq 0x82475a48
	if (ctx.cr0.eq) goto loc_82475A48;
	// li r30,0
	r30.s64 = 0;
loc_82475900:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82475a48
	if (ctx.cr0.eq) goto loc_82475A48;
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82475a48
	if (!ctx.cr0.eq) goto loc_82475A48;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// bne cr6,0x82475a48
	if (!ctx.cr6.eq) goto loc_82475A48;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82475978
	if (!ctx.cr6.eq) goto loc_82475978;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82475a48
	if (ctx.cr6.eq) goto loc_82475A48;
loc_82475978:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// bne cr6,0x82475a30
	if (!ctx.cr6.eq) goto loc_82475A30;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824759d4
	if (!ctx.cr6.gt) goto loc_824759D4;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_824759A4:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824759c4
	if (!ctx.cr6.eq) goto loc_824759C4;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824759c4
	if (ctx.cr6.lt) goto loc_824759C4;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
loc_824759C4:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824759a4
	if (ctx.cr6.lt) goto loc_824759A4;
loc_824759D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82478758
	ctx.lr = 0x824759E8;
	sub_82478758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82475b68
	if (ctx.cr6.eq) goto loc_82475B68;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r28,r3,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r3,r28,r10
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824781d0
	ctx.lr = 0x82475A14;
	sub_824781D0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r23,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, r23.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,260(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwzx r28,r30,r11
	r28.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// b 0x82475a34
	goto loc_82475A34;
loc_82475A30:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82475A34:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r29,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r29.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// blt cr6,0x82475900
	if (ctx.cr6.lt) goto loc_82475900;
loc_82475A48:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(r24.u32, r21.u32, ctx.xer);
	// blt cr6,0x824758e0
	if (ctx.cr6.lt) goto loc_824758E0;
loc_82475A54:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824758a8
	if (ctx.cr6.lt) goto loc_824758A8;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x82475b58
	if (ctx.cr6.eq) goto loc_82475B58;
	// lis r4,12288
	ctx.r4.s64 = 805306368;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824787f8
	ctx.lr = 0x82475A88;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82475b68
	if (ctx.cr6.eq) goto loc_82475B68;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477420
	ctx.lr = 0x82475AA8;
	sub_82477420(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f1,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x82478758
	ctx.lr = 0x82475AD4;
	sub_82478758(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lfd f1,4296(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 4296);
	// bl 0x82478758
	ctx.lr = 0x82475AF8;
	sub_82478758(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82475b68
	if (ctx.cr6.eq) goto loc_82475B68;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82475b68
	if (ctx.cr6.eq) goto loc_82475B68;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82475b50
	if (!ctx.cr6.gt) goto loc_82475B50;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82475B38:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x82475b38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82475B38;
loc_82475B50:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_82475B58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82475B5C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
loc_82475B68:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82475b5c
	goto loc_82475B5C;
}

DEFINE_REX_FUNC(sub_82494840) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82494928
	if (ctx.cr6.eq) goto loc_82494928;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82444750
	ctx.lr = 0x82494878;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249488c
	if (ctx.cr0.eq) goto loc_8249488C;
	// bl 0x82446f70
	ctx.lr = 0x82494884;
	sub_82446F70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82494890
	goto loc_82494890;
loc_8249488C:
	// li r30,0
	r30.s64 = 0;
loc_82494890:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82494928
	if (ctx.cr6.eq) goto loc_82494928;
	// li r11,9
	ctx.r11.s64 = 9;
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
	ctx.lr = 0x824948BC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824948e4
	if (ctx.cr0.eq) goto loc_824948E4;
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
	ctx.lr = 0x824948E0;
	sub_824474C0(ctx, base);
	// b 0x824948e8
	goto loc_824948E8;
loc_824948E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824948E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82494928
	if (ctx.cr6.eq) goto loc_82494928;
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824948FC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249491c
	if (ctx.cr0.eq) goto loc_8249491C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-22516
	ctx.r6.s64 = ctx.r11.s64 + -22516;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82444918
	ctx.lr = 0x82494918;
	sub_82444918(ctx, base);
	// b 0x82494920
	goto loc_82494920;
loc_8249491C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82494920:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8249492c
	if (!ctx.cr6.eq) goto loc_8249492C;
loc_82494928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249492C:
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

DEFINE_REX_FUNC(sub_82499480) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82499488;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824994a0
	if (!ctx.cr6.eq) goto loc_824994A0;
loc_82499498:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824995c4
	goto loc_824995C4;
loc_824994A0:
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r31,r4,16
	r31.s64 = ctx.r4.s64 + 16;
	// bl 0x82444750
	ctx.lr = 0x824994AC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824994d8
	if (ctx.cr0.eq) goto loc_824994D8;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
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
	ctx.lr = 0x824994D0;
	sub_824474C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824994dc
	goto loc_824994DC;
loc_824994D8:
	// li r30,0
	r30.s64 = 0;
loc_824994DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82499498
	if (ctx.cr6.eq) goto loc_82499498;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x824994EC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499514
	if (ctx.cr0.eq) goto loc_82499514;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824461c0
	ctx.lr = 0x82499510;
	sub_824461C0(ctx, base);
	// b 0x82499518
	goto loc_82499518;
loc_82499514:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82499518:
	// stw r3,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82499498
	if (ctx.cr6.eq) goto loc_82499498;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x8249952C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249956c
	if (ctx.cr0.eq) goto loc_8249956C;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8249953C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8249953c
	if (!ctx.cr6.eq) goto loc_8249953C;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,5
	ctx.r4.s64 = 5;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x824479b0
	ctx.lr = 0x82499568;
	sub_824479B0(ctx, base);
	// b 0x82499570
	goto loc_82499570;
loc_8249956C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82499570:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// beq cr6,0x82499498
	if (ctx.cr6.eq) goto loc_82499498;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x82499584;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824995a4
	if (ctx.cr0.eq) goto loc_824995A4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-17164
	ctx.r6.s64 = ctx.r11.s64 + -17164;
	// bl 0x82444918
	ctx.lr = 0x824995A0;
	sub_82444918(ctx, base);
	// b 0x824995a8
	goto loc_824995A8;
loc_824995A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824995A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82499498
	if (ctx.cr6.eq) goto loc_82499498;
	// stw r3,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824974b0
	ctx.lr = 0x824995C0;
	sub_824974B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824995C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824A6D08) {
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
	// addi r3,r3,508
	ctx.r3.s64 = ctx.r3.s64 + 508;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x824A6D34;
	sub_826A2E60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r11.u32);
	// bl 0x824700f0
	ctx.lr = 0x824A6D4C;
	sub_824700F0(ctx, base);
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

DEFINE_REX_FUNC(sub_824A86D8) {
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
	ctx.lr = 0x824A86E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824a8784
	if (ctx.cr6.eq) goto loc_824A8784;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_824A8704:
	// lwz r8,260(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824a8774
	if (!ctx.cr6.eq) goto loc_824A8774;
	// lwz r8,260(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwzx r5,r5,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r7,12(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824a8784
	if (ctx.cr6.eq) goto loc_824A8784;
loc_824A8774:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824a8704
	if (ctx.cr6.lt) goto loc_824A8704;
loc_824A8784:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x824a892c
	if (ctx.cr6.eq) goto loc_824A892C;
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mullw r7,r11,r29
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// li r31,0
	r31.s64 = 0;
	// std r9,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824a87e8
	if (ctx.cr6.eq) goto loc_824A87E8;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_824A87C8:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// bdnz 0x824a87c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A87C8;
loc_824A87E8:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824A87F4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// bdnz 0x824a87f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A87F4;
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
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A8834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a8930
	if (ctx.cr0.lt) goto loc_824A8930;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824A8844;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a8854
	if (ctx.cr0.eq) goto loc_824A8854;
	// bl 0x824773d0
	ctx.lr = 0x824A8850;
	sub_824773D0(ctx, base);
	// b 0x824a8858
	goto loc_824A8858;
loc_824A8854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A8858:
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824a8870
	if (!ctx.cr6.eq) goto loc_824A8870;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824a8930
	goto loc_824A8930;
loc_824A8870:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x824A888C;
	sub_82477B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a8930
	if (ctx.cr0.lt) goto loc_824A8930;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x82477420
	ctx.lr = 0x824A88A0;
	sub_82477420(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a8930
	if (ctx.cr0.lt) goto loc_824A8930;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824A88B8:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x824a88ec
	if (ctx.cr6.eq) goto loc_824A88EC;
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stwx r7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r9,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824A88EC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824a88b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A88B8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824a892c
	if (ctx.cr6.eq) goto loc_824A892C;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
loc_824A8904:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824a8904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A8904;
loc_824A892C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A8930:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824BA4D0) {
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
	// lwz r9,200(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r7,256
	ctx.r7.s64 = 256;
	// ori r10,r10,257
	ctx.r10.u64 = ctx.r10.u64 | 257;
	// oris r8,r8,256
	ctx.r8.u64 = ctx.r8.u64 | 16777216;
	// stw r7,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf. r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// stw r9,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r9.u32);
	// beq 0x824ba658
	if (ctx.cr0.eq) goto loc_824BA658;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x824ba60c
	if (ctx.cr6.eq) goto loc_824BA60C;
	// cmplwi cr6,r10,257
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 257, ctx.xer);
	// beq cr6,0x824ba5a4
	if (ctx.cr6.eq) goto loc_824BA5A4;
	// cmplwi cr6,r10,510
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 510, ctx.xer);
	// beq cr6,0x824ba544
	if (ctx.cr6.eq) goto loc_824BA544;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r10,3664
	ctx.r6.s64 = ctx.r10.s64 + 3664;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82489c30
	ctx.lr = 0x824BA538;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824ba6ac
	goto loc_824BA6AC;
loc_824BA544:
	// lwz r6,108(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r7,2048
	ctx.r7.s64 = 2048;
	// li r5,32
	ctx.r5.s64 = 32;
	// oris r6,r6,64
	ctx.r6.u64 = ctx.r6.u64 | 4194304;
	// stw r7,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r7.u32);
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// li r3,255
	ctx.r3.s64 = 255;
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// ori r6,r6,513
	ctx.r6.u64 = ctx.r6.u64 | 513;
	// stw r4,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r3,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r6.u32);
	// oris r8,r8,4096
	ctx.r8.u64 = ctx.r8.u64 | 268435456;
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r7,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r7.u32);
	// stw r5,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r5.u32);
	// b 0x824ba67c
	goto loc_824BA67C;
loc_824BA5A4:
	// lwz r7,108(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// lis r6,-2
	ctx.r6.s64 = -131072;
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// oris r7,r7,64
	ctx.r7.u64 = ctx.r7.u64 | 4194304;
	// stw r4,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r3,255
	ctx.r3.s64 = 255;
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// ori r7,r7,513
	ctx.r7.u64 = ctx.r7.u64 | 513;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r3,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// ori r6,r6,513
	ctx.r6.u64 = ctx.r6.u64 | 513;
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// oris r8,r8,4096
	ctx.r8.u64 = ctx.r8.u64 | 268435456;
	// stw r7,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// stw r5,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r5.u32);
	// stw r4,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r4.u32);
	// stw r9,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// stw r6,200(r11)
	REX_STORE_U32(ctx.r11.u32 + 200, ctx.r6.u32);
	// b 0x824ba67c
	goto loc_824BA67C;
loc_824BA60C:
	// lwz r7,108(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// oris r7,r7,64
	ctx.r7.u64 = ctx.r7.u64 | 4194304;
	// stw r6,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// ori r7,r7,512
	ctx.r7.u64 = ctx.r7.u64 | 512;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// stw r5,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r5.u32);
	// stw r7,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// stw r6,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// stw r9,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// b 0x824ba67c
	goto loc_824BA67C;
loc_824BA658:
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,10
	ctx.r6.s64 = 10;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stw r7,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r6,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// oris r8,r8,8194
	ctx.r8.u64 = ctx.r8.u64 | 537001984;
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
loc_824BA67C:
	// stw r8,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// oris r8,r8,96
	ctx.r8.u64 = ctx.r8.u64 | 6291456;
	// oris r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 16777216;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r8,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// stw r7,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r7.u32);
loc_824BA6AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C2E78) {
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
	ctx.lr = 0x824C2E80;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824c321c
	if (ctx.cr6.eq) goto loc_824C321C;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c321c
	if (ctx.cr6.eq) goto loc_824C321C;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c321c
	if (ctx.cr6.eq) goto loc_824C321C;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,-5
	r30.s64 = -5;
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r7,13
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r30
	r29.u64 = ctx.r11.u64 & r30.u64;
	// bgt cr6,0x824c321c
	if (ctx.cr6.gt) goto loc_824C321C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r28,13
	r28.s64 = 13;
	// li r27,5
	r27.s64 = 5;
	// li r22,0
	r22.s64 = 0;
	// li r21,12
	r21.s64 = 12;
	// addi r26,r11,6100
	r26.s64 = ctx.r11.s64 + 6100;
	// addi r25,r10,6076
	r25.s64 = ctx.r10.s64 + 6076;
	// addi r24,r9,6056
	r24.s64 = ctx.r9.s64 + 6056;
	// addi r23,r8,6028
	r23.s64 = ctx.r8.s64 + 6028;
loc_824C2EF8:
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// rlwinm r0,r7,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,5984
	ctx.r12.s64 = ctx.r12.s64 + 5984;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32180
	ctx.r12.s64 = -2108948480;
	// addi r12,r12,12064
	ctx.r12.s64 = ctx.r12.s64 + 12064;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r7.u32) {
	case 0:
		goto loc_824C2F20;
	case 1:
		goto loc_824C2FA8;
	case 2:
		goto loc_824C3238;
	case 3:
		goto loc_824C3288;
	case 4:
		goto loc_824C32E0;
	case 5:
		goto loc_824C3334;
	case 6:
		goto loc_824C3394;
	case 7:
		goto loc_824C3020;
	case 8:
		goto loc_824C30A0;
	case 9:
		goto loc_824C30F0;
	case 10:
		goto loc_824C3148;
	case 11:
		goto loc_824C31A0;
	case 12:
		goto loc_824C33B8;
	case 13:
		goto loc_824C33C0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824C2F20:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3228
	if (ctx.cr6.eq) goto loc_824C3228;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// beq cr6,0x824c2f7c
	if (ctx.cr6.eq) goto loc_824C2F7C;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r23,24(r31)
	REX_STORE_U32(r31.u32 + 24, r23.u32);
	// b 0x824c3204
	goto loc_824C3204;
loc_824C2F7C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x824c2fa0
	if (!ctx.cr6.gt) goto loc_824C2FA0;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r24,24(r31)
	REX_STORE_U32(r31.u32 + 24, r24.u32);
	// b 0x824c3204
	goto loc_824C3204;
loc_824C2FA0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824C2FA8:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824c3228
	if (ctx.cr6.eq) goto loc_824C3228;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,31
	ctx.r8.s64 = 31;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divwu r8,r9,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// mulli r8,r8,31
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(31));
	// subf. r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824c300c
	if (ctx.cr0.eq) goto loc_824C300C;
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
	// stw r25,24(r31)
	REX_STORE_U32(r31.u32 + 24, r25.u32);
	// b 0x824c3204
	goto loc_824C3204;
loc_824C300C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824c3230
	if (!ctx.cr0.eq) goto loc_824C3230;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x824c320c
	goto loc_824C320C;
loc_824C3020:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x824ce600
	ctx.lr = 0x824C3034;
	sub_824CE600(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x824c3054
	if (!ctx.cr6.eq) goto loc_824C3054;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
	// b 0x824c320c
	goto loc_824C320C;
loc_824C3054:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x824c3060
	if (!ctx.cr6.eq) goto loc_824C3060;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_824C3060:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x824c3228
	if (!ctx.cr6.eq) goto loc_824C3228;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x824ce450
	ctx.lr = 0x824C3080;
	sub_824CE450(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c3098
	if (ctx.cr6.eq) goto loc_824C3098;
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
	// b 0x824c320c
	goto loc_824C320C;
loc_824C3098:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824C30A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3228
	if (ctx.cr6.eq) goto loc_824C3228;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// stw r11,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_824C30F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3228
	if (ctx.cr6.eq) goto loc_824C3228;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_824C3148:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3228
	if (ctx.cr6.eq) goto loc_824C3228;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_824C31A0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c3228
	if (ctx.cr6.eq) goto loc_824C3228;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824c33b4
	if (ctx.cr6.eq) goto loc_824C33B4;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
loc_824C3204:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
loc_824C320C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,13
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13, ctx.xer);
	// ble cr6,0x824c2ef8
	if (!ctx.cr6.gt) goto loc_824C2EF8;
loc_824C321C:
	// li r3,-2
	ctx.r3.s64 = -2;
loc_824C3220:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_824C3228:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824c3220
	goto loc_824C3220;
loc_824C3230:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_824C3238:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3228
	if (ctx.cr6.eq) goto loc_824C3228;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r11,r11,24
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 24);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_824C3288:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3228
	if (ctx.cr6.eq) goto loc_824C3228;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_824C32E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3228
	if (ctx.cr6.eq) goto loc_824C3228;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
loc_824C3334:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c3228
	if (ctx.cr6.eq) goto loc_824C3228;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x824c3220
	goto loc_824C3220;
loc_824C3394:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r10,r10,6012
	ctx.r10.s64 = ctx.r10.s64 + 6012;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
	// b 0x824c321c
	goto loc_824C321C;
loc_824C33B4:
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
loc_824C33B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824c3220
	goto loc_824C3220;
loc_824C33C0:
	// li r3,-3
	ctx.r3.s64 = -3;
	// b 0x824c3220
	goto loc_824C3220;
}

DEFINE_REX_FUNC(sub_824DD7B0) {
	REX_FUNC_PROLOGUE();
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DDA00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824dda48
	if (ctx.cr0.lt) goto loc_824DDA48;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_824DDA14:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x824dda3c
	if (ctx.cr6.eq) goto loc_824DDA3C;
	// li r10,31
	ctx.r10.s64 = 31;
loc_824DDA24:
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and. r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824dda50
	if (ctx.cr0.eq) goto loc_824DDA50;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x824dda24
	if (!ctx.cr0.lt) goto loc_824DDA24;
loc_824DDA3C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x824dda14
	if (!ctx.cr0.lt) goto loc_824DDA14;
loc_824DDA48:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_824DDA50:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DFD28) {
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
	ctx.lr = 0x824DFD30;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824dfd74
	if (ctx.cr6.lt) goto loc_824DFD74;
	// beq cr6,0x824dfd6c
	if (ctx.cr6.eq) goto loc_824DFD6C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824dfd64
	if (ctx.cr6.lt) goto loc_824DFD64;
	// bne cr6,0x824dfd7c
	if (!ctx.cr6.eq) goto loc_824DFD7C;
	// li r10,115
	ctx.r10.s64 = 115;
	// b 0x824dfd80
	goto loc_824DFD80;
loc_824DFD64:
	// li r10,99
	ctx.r10.s64 = 99;
	// b 0x824dfd80
	goto loc_824DFD80;
loc_824DFD6C:
	// li r10,105
	ctx.r10.s64 = 105;
	// b 0x824dfd80
	goto loc_824DFD80;
loc_824DFD74:
	// li r10,98
	ctx.r10.s64 = 98;
	// b 0x824dfd80
	goto loc_824DFD80;
loc_824DFD7C:
	// lbz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
loc_824DFD80:
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824dfda4
	if (!ctx.cr6.eq) goto loc_824DFDA4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,23672
	ctx.r4.s64 = ctx.r11.s64 + 23672;
	// bl 0x826a0568
	ctx.lr = 0x824DFDA0;
	sub_826A0568(ctx, base);
	// b 0x824dfdd4
	goto loc_824DFDD4;
loc_824DFDA4:
	// lwz r6,8(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824dfdc0
	if (!ctx.cr6.eq) goto loc_824DFDC0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,23664
	ctx.r4.s64 = ctx.r11.s64 + 23664;
	// bl 0x826a0568
	ctx.lr = 0x824DFDBC;
	sub_826A0568(ctx, base);
	// b 0x824dfdd4
	goto loc_824DFDD4;
loc_824DFDC0:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r4,r9,23656
	ctx.r4.s64 = ctx.r9.s64 + 23656;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bl 0x826a0568
	ctx.lr = 0x824DFDD4;
	sub_826A0568(ctx, base);
loc_824DFDD4:
	// li r21,0
	r21.s64 = 0;
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r21,240(r1)
	REX_STORE_U8(ctx.r1.u32 + 240, r21.u8);
	// addi r3,r1,241
	ctx.r3.s64 = ctx.r1.s64 + 241;
	// bl 0x826a2e60
	ctx.lr = 0x824DFDEC;
	sub_826A2E60(ctx, base);
	// lwz r31,44(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824e0018
	if (ctx.cr6.eq) goto loc_824E0018;
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e0018
	if (ctx.cr6.eq) goto loc_824E0018;
	// lwz r11,32(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824e0018
	if (!ctx.cr6.eq) goto loc_824E0018;
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824e0018
	if (!ctx.cr6.eq) goto loc_824E0018;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,23648
	ctx.r4.s64 = ctx.r11.s64 + 23648;
	// bl 0x826a0568
	ctx.lr = 0x824DFE2C;
	sub_826A0568(ctx, base);
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// mr r22,r21
	r22.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824dffe0
	if (!ctx.cr6.gt) goto loc_824DFFE0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// addi r24,r11,-11784
	r24.s64 = ctx.r11.s64 + -11784;
	// addi r27,r10,23624
	r27.s64 = ctx.r10.s64 + 23624;
	// addi r30,r9,23608
	r30.s64 = ctx.r9.s64 + 23608;
	// addi r29,r8,28576
	r29.s64 = ctx.r8.s64 + 28576;
	// addi r26,r7,19324
	r26.s64 = ctx.r7.s64 + 19324;
	// addi r25,r6,19332
	r25.s64 = ctx.r6.s64 + 19332;
	// addi r28,r5,9192
	r28.s64 = ctx.r5.s64 + 9192;
loc_824DFE78:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824dfeb4
	if (ctx.cr6.eq) goto loc_824DFEB4;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_824DFE88:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824dfe88
	if (!ctx.cr6.eq) goto loc_824DFE88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824DFE9C:
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
	// bne cr6,0x824dfe9c
	if (!ctx.cr6.eq) goto loc_824DFE9C;
loc_824DFEB4:
	// li r5,127
	ctx.r5.s64 = 127;
	// stb r21,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r21.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x826a2e60
	ctx.lr = 0x824DFEC8;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824dff78
	if (ctx.cr6.lt) goto loc_824DFF78;
	// beq cr6,0x824dff58
	if (ctx.cr6.eq) goto loc_824DFF58;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824dfef4
	if (ctx.cr6.lt) goto loc_824DFEF4;
	// bne cr6,0x824dff9c
	if (!ctx.cr6.eq) goto loc_824DFF9C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a0568
	ctx.lr = 0x824DFEF0;
	sub_826A0568(ctx, base);
	// b 0x824dff9c
	goto loc_824DFF9C;
loc_824DFEF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f4,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f3,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// stfd f3,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x824DFF50;
	sub_826A0568(ctx, base);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// b 0x824dff9c
	goto loc_824DFF9C;
loc_824DFF58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzu r8,16(r31)
	ea = 16 + r31.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// bl 0x826a0568
	ctx.lr = 0x824DFF74;
	sub_826A0568(ctx, base);
	// b 0x824dff9c
	goto loc_824DFF9C;
loc_824DFF78:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824dff8c
	if (!ctx.cr6.eq) goto loc_824DFF8C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_824DFF8C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a0568
	ctx.lr = 0x824DFF98;
	sub_826A0568(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_824DFF9C:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_824DFFA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824dffa4
	if (!ctx.cr6.eq) goto loc_824DFFA4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824DFFB8:
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
	// bne cr6,0x824dffb8
	if (!ctx.cr6.eq) goto loc_824DFFB8;
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824dfe78
	if (ctx.cr6.lt) goto loc_824DFE78;
loc_824DFFE0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r10,r10,23604
	ctx.r10.s64 = ctx.r10.s64 + 23604;
loc_824DFFEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824dffec
	if (!ctx.cr6.eq) goto loc_824DFFEC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824E0000:
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
	// bne cr6,0x824e0000
	if (!ctx.cr6.eq) goto loc_824E0000;
loc_824E0018:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lwz r9,20(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 20);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r10,-21648
	ctx.r10.s64 = ctx.r10.s64 + -21648;
	// addi r7,r11,-26856
	ctx.r7.s64 = ctx.r11.s64 + -26856;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x824e004c
	goto loc_824E004C;
loc_824E0038:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824e0070
	if (ctx.cr6.eq) goto loc_824E0070;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824E004C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824e0038
	if (!ctx.cr6.eq) goto loc_824E0038;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_824E0058:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r9,16(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 16);
	// addi r10,r11,-21704
	ctx.r10.s64 = ctx.r11.s64 + -21704;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x824e008c
	goto loc_824E008C;
loc_824E0070:
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x824e0058
	goto loc_824E0058;
loc_824E0078:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824e0098
	if (ctx.cr6.eq) goto loc_824E0098;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824E008C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824e0078
	if (!ctx.cr6.eq) goto loc_824E0078;
	// b 0x824e009c
	goto loc_824E009C;
loc_824E0098:
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824E009C:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lwz r9,28(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 28);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lwz r8,24(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 24);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r4,r5,23564
	ctx.r4.s64 = ctx.r5.s64 + 23564;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E00C4;
	sub_824DF9F0(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_824F7610) {
	REX_FUNC_PROLOGUE();
	// lwz r9,140(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 140);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,144(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 144);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x824f763c
	if (ctx.cr6.lt) goto loc_824F763C;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,144(r4)
	REX_STORE_U32(ctx.r4.u32 + 144, ctx.r9.u32);
	// blr 
	return;
loc_824F763C:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f766c
	if (ctx.cr6.eq) goto loc_824F766C;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
loc_824F766C:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x824f7378
	sub_824F7378(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824FD558) {
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
	ctx.lr = 0x824FD560;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r29,208(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r22,r29,20,29,31
	r22.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 20) & 0x7;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmplwi cr6,r22,6
	ctx.cr6.compare<uint32_t>(r22.u32, 6, ctx.xer);
	// ble cr6,0x824fd594
	if (!ctx.cr6.gt) goto loc_824FD594;
loc_824FD588:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824fd6a0
	goto loc_824FD6A0;
loc_824FD594:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824fd678
	if (ctx.cr6.eq) goto loc_824FD678;
	// lwz r28,212(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// clrlwi r21,r29,20
	r21.u64 = r29.u32 & 0xFFF;
	// li r31,0
	r31.s64 = 0;
	// li r27,1
	r27.s64 = 1;
loc_824FD5B0:
	// add r4,r21,r30
	ctx.r4.u64 = r21.u64 + r30.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824fd588
	if (!ctx.cr6.lt) goto loc_824FD588;
	// rlwinm r10,r29,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xF;
	// rlwinm r11,r28,4,26,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0x30;
	// li r9,2
	ctx.r9.s64 = 2;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// slw r10,r27,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// slw r9,r9,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r31.u8 & 0x3F));
	// rlwinm r8,r29,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 & ctx.r8.u64;
	// slw r9,r27,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r27.u32 << (r31.u8 & 0x3F));
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subfe r5,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// subfe r6,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r28,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 20) & 0xF;
	// subfe r7,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824fd648
	if (ctx.cr6.eq) goto loc_824FD648;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824fd648
	if (ctx.cr6.eq) goto loc_824FD648;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x824fd640
	if (ctx.cr6.eq) goto loc_824FD640;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x824fd640
	if (ctx.cr6.eq) goto loc_824FD640;
	// not r11,r28
	ctx.r11.u64 = ~r28.u64;
	// rlwinm r8,r11,23,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// b 0x824fd64c
	goto loc_824FD64C;
loc_824FD640:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x824fd64c
	goto loc_824FD64C;
loc_824FD648:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_824FD64C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824fd380
	ctx.lr = 0x824FD660;
	sub_824FD380(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824fd588
	if (ctx.cr0.lt) goto loc_824FD588;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// blt cr6,0x824fd5b0
	if (ctx.cr6.lt) goto loc_824FD5B0;
loc_824FD678:
	// rlwinm. r11,r29,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fd69c
	if (ctx.cr0.eq) goto loc_824FD69C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_824FD69C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824FD6A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82509550) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82509558;
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
	// bl 0x82509490
	ctx.lr = 0x82509578;
	sub_82509490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825095b4
	if (!ctx.cr6.eq) goto loc_825095B4;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825095ac
	if (ctx.cr0.eq) goto loc_825095AC;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825095a4
	if (ctx.cr6.eq) goto loc_825095A4;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x824e4368
	ctx.lr = 0x825095A4;
	sub_824E4368(ctx, base);
loc_825095A4:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x824e4368
	ctx.lr = 0x825095AC;
	sub_824E4368(ctx, base);
loc_825095AC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825095ec
	goto loc_825095EC;
loc_825095B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = r31.u32 & 0xF;
	// rlwinm r29,r31,30,2,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFC;
	// bl 0x82503970
	ctx.lr = 0x825095C4;
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
loc_825095EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8250F530) {
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
	ctx.lr = 0x8250F538;
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250f558
	if (ctx.cr0.eq) goto loc_8250F558;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82510648
	goto loc_82510648;
loc_8250F558:
	// lwz r11,40(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 40);
	// li r15,0
	r15.s64 = 0;
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251039c
	if (ctx.cr0.eq) goto loc_8251039C;
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250f5e4
	if (!ctx.cr0.eq) goto loc_8250F5E4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250f5e4
	if (ctx.cr0.eq) goto loc_8250F5E4;
loc_8250F580:
	// lwz r31,28(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f5c8
	if (!ctx.cr0.eq) goto loc_8250F5C8;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8250f5c8
	if (ctx.cr0.eq) goto loc_8250F5C8;
loc_8250F594:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250F59C;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250f5b0
	if (ctx.cr0.eq) goto loc_8250F5B0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_8250F5B0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f5c8
	if (!ctx.cr0.eq) goto loc_8250F5C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250f594
	if (!ctx.cr6.eq) goto loc_8250F594;
loc_8250F5C8:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250f5e4
	if (!ctx.cr0.eq) goto loc_8250F5E4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250f580
	if (!ctx.cr6.eq) goto loc_8250F580;
loc_8250F5E4:
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250f814
	if (!ctx.cr0.eq) goto loc_8250F814;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250f814
	if (ctx.cr0.eq) goto loc_8250F814;
loc_8250F600:
	// lwz r31,28(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f7b4
	if (!ctx.cr0.eq) goto loc_8250F7B4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8250f7b4
	if (ctx.cr0.eq) goto loc_8250F7B4;
loc_8250F614:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250F61C;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250f79c
	if (ctx.cr0.eq) goto loc_8250F79C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// bgt cr6,0x8250f684
	if (ctx.cr6.gt) goto loc_8250F684;
	// beq cr6,0x8250f664
	if (ctx.cr6.eq) goto loc_8250F664;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// blt cr6,0x8250f69c
	if (ctx.cr6.lt) goto loc_8250F69C;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x8250f670
	if (!ctx.cr6.gt) goto loc_8250F670;
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// beq cr6,0x8250f664
	if (ctx.cr6.eq) goto loc_8250F664;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x8250f69c
	if (!ctx.cr6.eq) goto loc_8250F69C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// oris r11,r11,6144
	ctx.r11.u64 = ctx.r11.u64 | 402653184;
	// b 0x8250f67c
	goto loc_8250F67C;
loc_8250F664:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,0,5,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
	// b 0x8250f67c
	goto loc_8250F67C;
loc_8250F670:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,27,3,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x18000000) | (ctx.r11.u64 & 0xFFFFFFFFE7FFFFFF);
loc_8250F67C:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x8250f758
	goto loc_8250F758;
loc_8250F684:
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// beq cr6,0x8250f6a8
	if (ctx.cr6.eq) goto loc_8250F6A8;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// beq cr6,0x8250f664
	if (ctx.cr6.eq) goto loc_8250F664;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// beq cr6,0x8250f664
	if (ctx.cr6.eq) goto loc_8250F664;
loc_8250F69C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250F6A8;
	sub_824E4368(ctx, base);
loc_8250F6A8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,0,5,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ba3a0
	ctx.lr = 0x8250F6D8;
	sub_825BA3A0(ctx, base);
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,8(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r29,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8250f70c
	if (!ctx.cr6.eq) goto loc_8250F70C;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825b8558
	ctx.lr = 0x8250F6FC;
	sub_825B8558(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r29,156(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// b 0x8250f758
	goto loc_8250F758;
loc_8250F70C:
	// bl 0x824f6ec8
	ctx.lr = 0x8250F710;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250f7e4
	if (ctx.cr0.eq) goto loc_8250F7E4;
	// rlwinm. r11,r29,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250f738
	if (ctx.cr0.eq) goto loc_8250F738;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r5,18(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 18);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250ee58
	ctx.lr = 0x8250F730;
	sub_8250EE58(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
loc_8250F738:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r10,r11,0,3,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r29,r11,19,18,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x3FFF;
	// beq 0x8250f758
	if (ctx.cr0.eq) goto loc_8250F758;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// addi r29,r11,2
	r29.s64 = ctx.r11.s64 + 2;
loc_8250F758:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r11,r29,13,5,18
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x7FFE000) | (ctx.r11.u64 & 0xFFFFFFFFF8001FFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8250f79c
	if (ctx.cr6.lt) goto loc_8250F79C;
	// beq cr6,0x8250f790
	if (ctx.cr6.eq) goto loc_8250F790;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8250f7f0
	if (!ctx.cr6.eq) goto loc_8250F7F0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8250f7fc
	if (ctx.cr6.eq) goto loc_8250F7FC;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// b 0x8250f79c
	goto loc_8250F79C;
loc_8250F790:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,16383
	ctx.cr6.compare<uint32_t>(r29.u32, 16383, ctx.xer);
	// bgt cr6,0x8250f808
	if (ctx.cr6.gt) goto loc_8250F808;
loc_8250F79C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f7b4
	if (!ctx.cr0.eq) goto loc_8250F7B4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250f614
	if (!ctx.cr6.eq) goto loc_8250F614;
loc_8250F7B4:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250f7d0
	if (!ctx.cr0.eq) goto loc_8250F7D0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250f600
	if (!ctx.cr6.eq) goto loc_8250F600;
loc_8250F7D0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8250f814
	if (ctx.cr6.eq) goto loc_8250F814;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250F7E4;
	sub_824E4368(ctx, base);
loc_8250F7E4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250F7F0;
	sub_824E4368(ctx, base);
loc_8250F7F0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250F7FC;
	sub_824E4368(ctx, base);
loc_8250F7FC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250F808;
	sub_824E4368(ctx, base);
loc_8250F808:
	// li r4,3535
	ctx.r4.s64 = 3535;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250F814;
	sub_824E4368(ctx, base);
loc_8250F814:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8250F81C:
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 4);
	// li r21,0
	r21.s64 = 0;
	// li r30,16384
	r30.s64 = 16384;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r18,0
	r18.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r25,1
	r25.s64 = 1;
	// li r20,1
	r20.s64 = 1;
	// li r19,1
	r19.s64 = 1;
	// bne 0x8250ff70
	if (!ctx.cr0.eq) goto loc_8250FF70;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
loc_8250F848:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r17,r11,-4
	r17.s64 = ctx.r11.s64 + -4;
loc_8250F850:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x825102d8
	if (ctx.cr6.eq) goto loc_825102D8;
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 28);
	// addi r23,r17,24
	r23.s64 = r17.s64 + 24;
	// li r22,0
	r22.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ff60
	if (!ctx.cr0.eq) goto loc_8250FF60;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r28.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8250ff60
	if (ctx.cr0.eq) goto loc_8250FF60;
loc_8250F87C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250F884;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fdc4
	if (ctx.cr0.eq) goto loc_8250FDC4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f6e38
	ctx.lr = 0x8250F894;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250f8b4
	if (ctx.cr0.eq) goto loc_8250F8B4;
	// clrlwi r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwimi r10,r11,26,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r10.u32);
	// b 0x8250f8c0
	goto loc_8250F8C0;
loc_8250F8B4:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
loc_8250F8C0:
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm. r11,r10,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r10,19,18,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FFF;
	// beq 0x8250f8d8
	if (ctx.cr0.eq) goto loc_8250F8D8;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// addi r29,r11,2
	r29.s64 = ctx.r11.s64 + 2;
loc_8250F8D8:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x8250f8f0
	if (ctx.cr6.eq) goto loc_8250F8F0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// bne cr6,0x8250f8f0
	if (!ctx.cr6.eq) goto loc_8250F8F0;
	// oris r11,r10,16384
	ctx.r11.u64 = ctx.r10.u64 | 1073741824;
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
loc_8250F8F0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r24,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8250f91c
	if (ctx.cr6.lt) goto loc_8250F91C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8250f920
	if (!ctx.cr6.gt) goto loc_8250F920;
loc_8250F91C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250F920:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fabc
	if (ctx.cr0.eq) goto loc_8250FABC;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250a8a0
	ctx.lr = 0x8250F93C;
	sub_8250A8A0(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r24,104(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// beq 0x8250f96c
	if (ctx.cr0.eq) goto loc_8250F96C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x825102b4
	if (!ctx.cr6.eq) goto loc_825102B4;
	// lwz r27,100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825102b4
	if (!ctx.cr6.eq) goto loc_825102B4;
loc_8250F960:
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
	// b 0x8250fabc
	goto loc_8250FABC;
loc_8250F96C:
	// lwz r27,100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8250f99c
	if (!ctx.cr6.eq) goto loc_8250F99C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8250f994
	if (!ctx.cr6.eq) goto loc_8250F994;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// rlwinm r10,r10,19,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FFF;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// blt cr6,0x8250f960
	if (ctx.cr6.lt) goto loc_8250F960;
	// b 0x8250f99c
	goto loc_8250F99C;
loc_8250F994:
	// cmplw cr6,r24,r26
	ctx.cr6.compare<uint32_t>(r24.u32, r26.u32, ctx.xer);
	// beq cr6,0x8250f960
	if (ctx.cr6.eq) goto loc_8250F960;
loc_8250F99C:
	// clrlwi. r11,r19,24
	ctx.r11.u64 = r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fabc
	if (!ctx.cr0.eq) goto loc_8250FABC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8250fabc
	if (ctx.cr6.eq) goto loc_8250FABC;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fabc
	if (ctx.cr0.eq) goto loc_8250FABC;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// bne cr6,0x8250fabc
	if (!ctx.cr6.eq) goto loc_8250FABC;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8250fabc
	if (!ctx.cr6.eq) goto loc_8250FABC;
	// lwz r3,44(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 44);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x824f8b38
	ctx.lr = 0x8250F9D4;
	sub_824F8B38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fabc
	if (ctx.cr0.eq) goto loc_8250FABC;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8250faa4
	goto loc_8250FAA4;
loc_8250F9F4:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fabc
	if (ctx.cr0.eq) goto loc_8250FABC;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250fa3c
	if (ctx.cr0.eq) goto loc_8250FA3C;
	// b 0x8250fa20
	goto loc_8250FA20;
loc_8250FA14:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250fa2c
	if (ctx.cr0.eq) goto loc_8250FA2C;
loc_8250FA20:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250fa14
	if (!ctx.cr6.eq) goto loc_8250FA14;
loc_8250FA2C:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250fa20
	if (!ctx.cr0.eq) goto loc_8250FA20;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
loc_8250FA3C:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8250fabc
	if (!ctx.cr6.eq) goto loc_8250FABC;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250faa0
	if (!ctx.cr0.eq) goto loc_8250FAA0;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250faa0
	if (ctx.cr0.eq) goto loc_8250FAA0;
loc_8250FA64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6e38
	ctx.lr = 0x8250FA6C;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fa94
	if (!ctx.cr0.eq) goto loc_8250FA94;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250faa0
	if (!ctx.cr0.eq) goto loc_8250FAA0;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250fa64
	if (!ctx.cr6.eq) goto loc_8250FA64;
	// b 0x8250faa0
	goto loc_8250FAA0;
loc_8250FA94:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
loc_8250FAA0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_8250FAA4:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250fabc
	if (!ctx.cr0.eq) goto loc_8250FABC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bne cr6,0x8250f9f4
	if (!ctx.cr6.eq) goto loc_8250F9F4;
loc_8250FABC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8250fb18
	if (ctx.cr6.eq) goto loc_8250FB18;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r10,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8448
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8448, ctx.xer);
	// bne cr6,0x8250fb18
	if (!ctx.cr6.eq) goto loc_8250FB18;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8320, ctx.xer);
	// beq cr6,0x8250fb18
	if (ctx.cr6.eq) goto loc_8250FB18;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// rlwinm r9,r11,19,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x3FFF;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// bne cr6,0x8250fb18
	if (!ctx.cr6.eq) goto loc_8250FB18;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ff78
	if (!ctx.cr0.eq) goto loc_8250FF78;
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fb18
	if (!ctx.cr0.eq) goto loc_8250FB18;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250ff78
	if (ctx.cr0.eq) goto loc_8250FF78;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8250ff78
	if (ctx.cr6.eq) goto loc_8250FF78;
loc_8250FB18:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,66
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 66, ctx.xer);
	// beq cr6,0x8250fb30
	if (ctx.cr6.eq) goto loc_8250FB30;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// bne cr6,0x8250fba0
	if (!ctx.cr6.eq) goto loc_8250FBA0;
loc_8250FB30:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fba0
	if (!ctx.cr0.eq) goto loc_8250FBA0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8250fba0
	if (ctx.cr6.eq) goto loc_8250FBA0;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8320, ctx.xer);
	// bne cr6,0x8250fba0
	if (!ctx.cr6.eq) goto loc_8250FBA0;
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_8250FB54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8250ff78
	if (ctx.cr6.eq) goto loc_8250FF78;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fb98
	if (ctx.cr0.eq) goto loc_8250FB98;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8250FB8C;
	sub_825BA3A0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8250fba0
	if (!ctx.cr6.eq) goto loc_8250FBA0;
loc_8250FB98:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8250fb54
	goto loc_8250FB54;
loc_8250FBA0:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250fbf8
	if (ctx.cr0.eq) goto loc_8250FBF8;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fbf8
	if (ctx.cr0.eq) goto loc_8250FBF8;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x8250fbd0
	if (ctx.cr6.lt) goto loc_8250FBD0;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8250fbd4
	if (!ctx.cr6.gt) goto loc_8250FBD4;
loc_8250FBD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250FBD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fbf8
	if (ctx.cr0.eq) goto loc_8250FBF8;
	// cmplwi cr6,r10,63
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 63, ctx.xer);
	// bne cr6,0x8250ff90
	if (!ctx.cr6.eq) goto loc_8250FF90;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250c800
	ctx.lr = 0x8250FBF0;
	sub_8250C800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ff90
	if (!ctx.cr0.eq) goto loc_8250FF90;
loc_8250FBF8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8064
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8064, ctx.xer);
	// bne cr6,0x8250fc40
	if (!ctx.cr6.eq) goto loc_8250FC40;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fc40
	if (ctx.cr0.eq) goto loc_8250FC40;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8250fc40
	if (ctx.cr6.eq) goto loc_8250FC40;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x8250fc40
	if (!ctx.cr6.eq) goto loc_8250FC40;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250c800
	ctx.lr = 0x8250FC38;
	sub_8250C800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ff90
	if (!ctx.cr0.eq) goto loc_8250FF90;
loc_8250FC40:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8250fc5c
	if (ctx.cr6.lt) goto loc_8250FC5C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8250fc60
	if (!ctx.cr6.gt) goto loc_8250FC60;
loc_8250FC5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250FC60:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fd1c
	if (ctx.cr0.eq) goto loc_8250FD1C;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fd1c
	if (ctx.cr0.eq) goto loc_8250FD1C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8250fd1c
	if (ctx.cr6.eq) goto loc_8250FD1C;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8064
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8064, ctx.xer);
	// bne cr6,0x8250fd1c
	if (!ctx.cr6.eq) goto loc_8250FD1C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250c800
	ctx.lr = 0x8250FC98;
	sub_8250C800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fd1c
	if (ctx.cr0.eq) goto loc_8250FD1C;
	// lwz r10,28(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 28);
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8250fce0
	if (ctx.cr0.eq) goto loc_8250FCE0;
	// b 0x8250fcc4
	goto loc_8250FCC4;
loc_8250FCB8:
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8250fcd0
	if (ctx.cr0.eq) goto loc_8250FCD0;
loc_8250FCC4:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250fcb8
	if (!ctx.cr6.eq) goto loc_8250FCB8;
loc_8250FCD0:
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8250fcc4
	if (!ctx.cr0.eq) goto loc_8250FCC4;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_8250FCE0:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,112(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x8250b3d0
	ctx.lr = 0x8250FCEC;
	sub_8250B3D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8250ff98
	if (ctx.cr0.eq) goto loc_8250FF98;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7510
	ctx.lr = 0x8250FD00;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x8250fd1c
	if (ctx.cr6.eq) goto loc_8250FD1C;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7510
	ctx.lr = 0x8250FD14;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x8250ff98
	if (!ctx.cr6.eq) goto loc_8250FF98;
loc_8250FD1C:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250fd5c
	if (ctx.cr0.eq) goto loc_8250FD5C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8250fd3c
	if (ctx.cr6.eq) goto loc_8250FD3C;
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250fd5c
	if (ctx.cr0.eq) goto loc_8250FD5C;
loc_8250FD3C:
	// lwz r10,48(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r9,r9,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8250fd5c
	if (!ctx.cr0.eq) goto loc_8250FD5C;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250ffa8
	if (ctx.cr0.eq) goto loc_8250FFA8;
loc_8250FD5C:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r30,r11,19,18,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x3FFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r11,r10,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-8320
	ctx.r11.s64 = ctx.r11.s64 + -8320;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r25,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r25.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne 0x8250fdbc
	if (!ctx.cr0.eq) goto loc_8250FDBC;
	// rlwinm. r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fdbc
	if (ctx.cr0.eq) goto loc_8250FDBC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,44(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825ba3a0
	ctx.lr = 0x8250FDA4;
	sub_825BA3A0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8250fdbc
	if (!ctx.cr6.eq) goto loc_8250FDBC;
	// li r30,16384
	r30.s64 = 16384;
loc_8250FDBC:
	// mr r26,r28
	r26.u64 = r28.u64;
	// b 0x8250fe3c
	goto loc_8250FE3C;
loc_8250FDC4:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,85
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 85, ctx.xer);
	// bne cr6,0x8250fde8
	if (!ctx.cr6.eq) goto loc_8250FDE8;
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fe3c
	if (ctx.cr0.eq) goto loc_8250FE3C;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// b 0x8250fe3c
	goto loc_8250FE3C;
loc_8250FDE8:
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// bne cr6,0x8250fe3c
	if (!ctx.cr6.eq) goto loc_8250FE3C;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8250FE04;
	sub_824F71B8(ctx, base);
	// addi r11,r28,-16
	ctx.r11.s64 = r28.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250fe24
	if (ctx.cr0.eq) goto loc_8250FE24;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8250fe2c
	goto loc_8250FE2C;
loc_8250FE24:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8250FE2C:
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fe3c
	if (ctx.cr0.eq) goto loc_8250FE3C;
	// addi r18,r18,-1
	r18.s64 = r18.s64 + -1;
loc_8250FE3C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f6e38
	ctx.lr = 0x8250FE44;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fe70
	if (ctx.cr0.eq) goto loc_8250FE70;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r21,0
	r21.s64 = 0;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r11,r10,-66
	ctx.r11.s64 = ctx.r10.s64 + -66;
	// addi r10,r10,-63
	ctx.r10.s64 = ctx.r10.s64 + -63;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r20,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r20.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// subfe r19,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	r19.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8250FE70:
	// lwz r31,8(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r11,r31,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fea8
	if (!ctx.cr0.eq) goto loc_8250FEA8;
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fec4
	if (ctx.cr0.eq) goto loc_8250FEC4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ffb10
	ctx.lr = 0x8250FE90;
	sub_824FFB10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fec4
	if (ctx.cr0.eq) goto loc_8250FEC4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250FEA0;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fec4
	if (!ctx.cr0.eq) goto loc_8250FEC4;
loc_8250FEA8:
	// rlwinm r11,r31,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11520, ctx.xer);
	// bne cr6,0x8250fec0
	if (!ctx.cr6.eq) goto loc_8250FEC0;
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250fec4
	if (!ctx.cr0.eq) goto loc_8250FEC4;
loc_8250FEC0:
	// li r21,1
	r21.s64 = 1;
loc_8250FEC4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8250ff1c
	if (ctx.cr6.eq) goto loc_8250FF1C;
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fee4
	if (ctx.cr0.eq) goto loc_8250FEE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8250feec
	goto loc_8250FEEC;
loc_8250FEE4:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8250FEEC:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8250ff0c
	if (!ctx.cr6.eq) goto loc_8250FF0C;
loc_8250FEF4:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r22,r28
	r22.u64 = r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250ff60
	if (!ctx.cr0.eq) goto loc_8250FF60;
	// b 0x8250ff50
	goto loc_8250FF50;
loc_8250FF0C:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ff60
	if (!ctx.cr0.eq) goto loc_8250FF60;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8250ff54
	goto loc_8250FF54;
loc_8250FF1C:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250ff30
	if (ctx.cr0.eq) goto loc_8250FF30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8250ff3c
	goto loc_8250FF3C;
loc_8250FF30:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8250FF3C:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8250fef4
	if (ctx.cr6.eq) goto loc_8250FEF4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8250ff60
	if (!ctx.cr6.eq) goto loc_8250FF60;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
loc_8250FF50:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8250FF54:
	// addi r28,r11,-40
	r28.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8250f87c
	if (!ctx.cr6.eq) goto loc_8250F87C;
loc_8250FF60:
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250f848
	if (ctx.cr0.eq) goto loc_8250F848;
loc_8250FF70:
	// li r17,0
	r17.s64 = 0;
	// b 0x8250f850
	goto loc_8250F850;
loc_8250FF78:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8250FF7C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250b010
	ctx.lr = 0x8250FF88;
	sub_8250B010(ctx, base);
loc_8250FF88:
	// li r15,1
	r15.s64 = 1;
	// b 0x8250f81c
	goto loc_8250F81C;
loc_8250FF90:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x8250ff7c
	goto loc_8250FF7C;
loc_8250FF98:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b87f8
	ctx.lr = 0x8250FFA4;
	sub_825B87F8(ctx, base);
	// b 0x8250ff78
	goto loc_8250FF78;
loc_8250FFA8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
loc_8250FFB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825102c0
	if (ctx.cr6.eq) goto loc_825102C0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250ffd4
	if (ctx.cr6.eq) goto loc_8250FFD4;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,11520
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11520, ctx.xer);
	// beq cr6,0x8250ffdc
	if (ctx.cr6.eq) goto loc_8250FFDC;
loc_8250FFD4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8250ffb0
	goto loc_8250FFB0;
loc_8250FFDC:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_8250FFE0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,36
	r31.s64 = ctx.r11.s64 + 36;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250fffc
	if (ctx.cr0.eq) goto loc_8250FFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82510004
	goto loc_82510004;
loc_8250FFFC:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_82510004:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82510020
	if (ctx.cr6.lt) goto loc_82510020;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82510024
	if (!ctx.cr6.gt) goto loc_82510024;
loc_82510020:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82510024:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510048
	if (!ctx.cr0.eq) goto loc_82510048;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251003c
	if (ctx.cr0.eq) goto loc_8251003C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8250ffe0
	goto loc_8250FFE0;
loc_8251003C:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// b 0x8250ffe0
	goto loc_8250FFE0;
loc_82510048:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x82510088
	if (ctx.cr6.eq) goto loc_82510088;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82510080
	if (ctx.cr6.eq) goto loc_82510080;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x82510078
	if (ctx.cr6.eq) goto loc_82510078;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x825102cc
	if (!ctx.cr6.eq) goto loc_825102CC;
	// li r6,62
	ctx.r6.s64 = 62;
	// b 0x8251008c
	goto loc_8251008C;
loc_82510078:
	// li r6,61
	ctx.r6.s64 = 61;
	// b 0x8251008c
	goto loc_8251008C;
loc_82510080:
	// li r6,60
	ctx.r6.s64 = 60;
	// b 0x8251008c
	goto loc_8251008C;
loc_82510088:
	// li r6,59
	ctx.r6.s64 = 59;
loc_8251008C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825bb860
	ctx.lr = 0x825100A4;
	sub_825BB860(ctx, base);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r31,-36
	ctx.r8.s64 = r31.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r4,48(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 48);
	// bl 0x8250ad28
	ctx.lr = 0x825100EC;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825101c0
	if (ctx.cr6.eq) goto loc_825101C0;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8251019c
	goto loc_8251019C;
loc_82510104:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm. r11,r10,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825101b0
	if (ctx.cr0.eq) goto loc_825101B0;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8251014c
	if (ctx.cr0.eq) goto loc_8251014C;
	// b 0x82510130
	goto loc_82510130;
loc_82510124:
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8251013c
	if (ctx.cr0.eq) goto loc_8251013C;
loc_82510130:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82510124
	if (!ctx.cr6.eq) goto loc_82510124;
loc_8251013C:
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82510130
	if (!ctx.cr0.eq) goto loc_82510130;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_8251014C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,28(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x825101b0
	if (!ctx.cr6.eq) goto loc_825101B0;
	// rlwinm r11,r10,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x82510170;
	sub_8250B3D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82510198
	if (ctx.cr0.eq) goto loc_82510198;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,10880
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10880, ctx.xer);
	// bne cr6,0x82510198
	if (!ctx.cr6.eq) goto loc_82510198;
	// rlwinm. r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82510198
	if (ctx.cr0.eq) goto loc_82510198;
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82510198:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_8251019C:
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825101b0
	if (!ctx.cr0.eq) goto loc_825101B0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82510104
	if (!ctx.cr6.eq) goto loc_82510104;
loc_825101B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250b010
	ctx.lr = 0x825101C0;
	sub_8250B010(ctx, base);
loc_825101C0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x825101d8
	if (ctx.cr6.eq) goto loc_825101D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250b010
	ctx.lr = 0x825101D8;
	sub_8250B010(ctx, base);
loc_825101D8:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_825101DC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82510264
	if (ctx.cr6.eq) goto loc_82510264;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82510250
	if (ctx.cr6.eq) goto loc_82510250;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8251020c
	if (ctx.cr0.eq) goto loc_8251020C;
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x82510210
	if (ctx.cr0.eq) goto loc_82510210;
loc_8251020C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82510210:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82510250
	if (ctx.cr0.eq) goto loc_82510250;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82510230
	goto loc_82510230;
loc_82510228:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82510230:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82510228
	if (!ctx.cr6.eq) goto loc_82510228;
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
loc_82510250:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825101dc
	if (!ctx.cr6.eq) goto loc_825101DC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x825101dc
	goto loc_825101DC;
loc_82510264:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_82510268:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82510290
	if (ctx.cr6.eq) goto loc_82510290;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510288
	if (!ctx.cr0.eq) goto loc_82510288;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82510288;
	sub_8250AD28(ctx, base);
loc_82510288:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82510268
	goto loc_82510268;
loc_82510290:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82510298;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x825c2510
	ctx.lr = 0x825102B0;
	sub_825C2510(ctx, base);
	// b 0x8250ff88
	goto loc_8250FF88;
loc_825102B4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x825102C0;
	sub_824E4368(ctx, base);
loc_825102C0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x825102CC;
	sub_824E4368(ctx, base);
loc_825102CC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824e4368
	ctx.lr = 0x825102D8;
	sub_824E4368(ctx, base);
loc_825102D8:
	// clrlwi. r11,r15,24
	ctx.r11.u64 = r15.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251039c
	if (ctx.cr0.eq) goto loc_8251039C;
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251039c
	if (!ctx.cr0.eq) goto loc_8251039C;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251039c
	if (ctx.cr0.eq) goto loc_8251039C;
loc_825102F8:
	// lwz r31,28(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510380
	if (!ctx.cr0.eq) goto loc_82510380;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82510380
	if (ctx.cr0.eq) goto loc_82510380;
loc_8251030C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x82510314;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82510368
	if (ctx.cr0.eq) goto loc_82510368;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82510320:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82510348
	if (ctx.cr6.eq) goto loc_82510348;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82510340
	if (ctx.cr6.eq) goto loc_82510340;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82510368
	if (!ctx.cr0.eq) goto loc_82510368;
loc_82510340:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82510320
	goto loc_82510320;
loc_82510348:
	// lis r12,-130
	ctx.r12.s64 = -8519680;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r12,r12,16353
	ctx.r12.u64 = ctx.r12.u64 | 16353;
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82510368:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510380
	if (!ctx.cr0.eq) goto loc_82510380;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251030c
	if (!ctx.cr6.eq) goto loc_8251030C;
loc_82510380:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251039c
	if (!ctx.cr0.eq) goto loc_8251039C;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825102f8
	if (!ctx.cr6.eq) goto loc_825102F8;
loc_8251039C:
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82510644
	if (!ctx.cr0.eq) goto loc_82510644;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82510644
	if (ctx.cr0.eq) goto loc_82510644;
loc_825103B4:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510628
	if (!ctx.cr0.eq) goto loc_82510628;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510628
	if (!ctx.cr0.eq) goto loc_82510628;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82510628
	if (ctx.cr0.eq) goto loc_82510628;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82510418
	if (ctx.cr6.eq) goto loc_82510418;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82510418
	if (ctx.cr6.eq) goto loc_82510418;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82510418
	if (ctx.cr6.eq) goto loc_82510418;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82510418
	if (ctx.cr6.eq) goto loc_82510418;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82510418
	if (ctx.cr6.eq) goto loc_82510418;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8251041c
	if (!ctx.cr6.eq) goto loc_8251041C;
loc_82510418:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8251041C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82510628
	if (ctx.cr0.eq) goto loc_82510628;
	// rlwinm. r11,r10,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82510628
	if (ctx.cr0.eq) goto loc_82510628;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250efa0
	ctx.lr = 0x82510458;
	sub_8250EFA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82510628
	if (ctx.cr0.eq) goto loc_82510628;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7510
	ctx.lr = 0x8251046C;
	sub_824F7510(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82510628
	if (ctx.cr6.eq) goto loc_82510628;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82510494
	if (!ctx.cr6.gt) goto loc_82510494;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x82510628
	if (!ctx.cr6.gt) goto loc_82510628;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// ble cr6,0x82510494
	if (!ctx.cr6.gt) goto loc_82510494;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// ble cr6,0x82510628
	if (!ctx.cr6.gt) goto loc_82510628;
loc_82510494:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ff9c0
	ctx.lr = 0x8251049C;
	sub_824FF9C0(ctx, base);
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bne cr6,0x82510598
	if (!ctx.cr6.eq) goto loc_82510598;
	// lwz r27,100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r1,97
	ctx.r8.s64 = ctx.r1.s64 + 97;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8250c0a0
	ctx.lr = 0x825104D0;
	sub_8250C0A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82510628
	if (ctx.cr0.eq) goto loc_82510628;
	// lbz r29,96(r1)
	r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x82510534
	if (ctx.cr0.eq) goto loc_82510534;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_825104E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82510514
	if (ctx.cr6.eq) goto loc_82510514;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82510504
	if (ctx.cr6.eq) goto loc_82510504;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8251050c
	if (!ctx.cr6.eq) goto loc_8251050C;
loc_82510504:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825104e8
	goto loc_825104E8;
loc_8251050C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82510518
	goto loc_82510518;
loc_82510514:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82510518:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510628
	if (!ctx.cr0.eq) goto loc_82510628;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250b568
	ctx.lr = 0x8251052C;
	sub_8250B568(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stb r29,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r29.u8);
loc_82510534:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8251054C;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// beq cr6,0x82510570
	if (ctx.cr6.eq) goto loc_82510570;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwimi r9,r10,0,31,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r9.u64 & 0x2);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_82510570:
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r11,r10,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// lbz r8,97(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// b 0x82510610
	goto loc_82510610;
loc_82510598:
	// addi r8,r1,98
	ctx.r8.s64 = ctx.r1.s64 + 98;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8250c0a0
	ctx.lr = 0x825105A8;
	sub_8250C0A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82510628
	if (ctx.cr0.eq) goto loc_82510628;
	// lwz r29,100(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r1,99
	ctx.r8.s64 = ctx.r1.s64 + 99;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250c0a0
	ctx.lr = 0x825105D0;
	sub_8250C0A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82510628
	if (ctx.cr0.eq) goto loc_82510628;
	// lbz r31,96(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lbz r8,98(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250c438
	ctx.lr = 0x825105F8;
	sub_8250C438(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lbz r8,99(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 99);
	// li r6,0
	ctx.r6.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82510610:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250c438
	ctx.lr = 0x8251061C;
	sub_8250C438(ctx, base);
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// oris r11,r11,3072
	ctx.r11.u64 = ctx.r11.u64 | 201326592;
	// stw r11,48(r26)
	REX_STORE_U32(r26.u32 + 48, ctx.r11.u32);
loc_82510628:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82510644
	if (!ctx.cr0.eq) goto loc_82510644;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825103b4
	if (!ctx.cr6.eq) goto loc_825103B4;
loc_82510644:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_82510648:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_825C0EB0) {
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
	ctx.lr = 0x825C0EB8;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,228(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// clrlwi r11,r27,27
	ctx.r11.u64 = r27.u32 & 0x1F;
	// std r5,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x825c0f50
	if (!ctx.cr6.eq) goto loc_825C0F50;
	// lwz r10,536(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825c0f50
	if (!ctx.cr6.gt) goto loc_825C0F50;
	// addi r10,r3,348
	ctx.r10.s64 = ctx.r3.s64 + 348;
loc_825C0F04:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r9,17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 17, ctx.xer);
	// beq cr6,0x825c0f2c
	if (ctx.cr6.eq) goto loc_825C0F2C;
	// lwz r9,536(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825c0f04
	if (ctx.cr6.lt) goto loc_825C0F04;
	// b 0x825c0f50
	goto loc_825C0F50;
loc_825C0F2C:
	// addi r9,r11,29
	ctx.r9.s64 = ctx.r11.s64 + 29;
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r8,r27,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r30,352(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 352);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r9.u32);
loc_825C0F50:
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x825c0f60
	if (ctx.cr6.eq) goto loc_825C0F60;
	// li r28,4
	r28.s64 = 4;
loc_825C0F60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x825c10c8
	if (!ctx.cr6.eq) goto loc_825C10C8;
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x825c0f80
	if (!ctx.cr6.eq) goto loc_825C0F80;
	// li r4,3530
	ctx.r4.s64 = 3530;
	// bl 0x824e4368
	ctx.lr = 0x825C0F80;
	sub_824E4368(ctx, base);
loc_825C0F80:
	// lwz r30,232(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldicr r5,r30,32,63
	ctx.r5.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825b81b8
	ctx.lr = 0x825C0F98;
	sub_825B81B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c0fa8
	if (ctx.cr0.eq) goto loc_825C0FA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825c1308
	goto loc_825C1308;
loc_825C0FA8:
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,224(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r29,r10,r31
	r29.u64 = ctx.r10.u64 + r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,113
	ctx.r4.s64 = 113;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r11.u32);
	// stw r9,344(r29)
	REX_STORE_U32(r29.u32 + 344, ctx.r9.u32);
	// stw r27,348(r29)
	REX_STORE_U32(r29.u32 + 348, r27.u32);
	// stw r30,352(r29)
	REX_STORE_U32(r29.u32 + 352, r30.u32);
	// bl 0x824f71b8
	ctx.lr = 0x825C0FE0;
	sub_824F71B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// bl 0x824ff930
	ctx.lr = 0x825C0FF0;
	sub_824FF930(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r6,113
	ctx.r6.s64 = 113;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb1e0
	ctx.lr = 0x825C101C;
	sub_825BB1E0(ctx, base);
	// clrlwi. r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,-36
	ctx.r8.s64 = ctx.r8.s64 + -36;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// stw r30,352(r29)
	REX_STORE_U32(r29.u32 + 352, r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// beq 0x825c10c8
	if (ctx.cr0.eq) goto loc_825C10C8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x825c10c8
	if (!ctx.cr6.eq) goto loc_825C10C8;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// beq 0x825c10b4
	if (ctx.cr0.eq) goto loc_825C10B4;
	// andi. r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 & 17476;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,17476
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17476, ctx.xer);
	// beq cr6,0x825c10c8
	if (ctx.cr6.eq) goto loc_825C10C8;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// b 0x825c10c4
	goto loc_825C10C4;
loc_825C10B4:
	// andi. r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 & 26214;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,26214
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26214, ctx.xer);
	// beq cr6,0x825c10c8
	if (ctx.cr6.eq) goto loc_825C10C8;
	// ori r11,r11,26214
	ctx.r11.u64 = ctx.r11.u64 | 26214;
loc_825C10C4:
	// sth r11,14(r30)
	REX_STORE_U16(r30.u32 + 14, ctx.r11.u16);
loc_825C10C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825C10D4;
	sub_8250AB60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x825c12cc
	if (ctx.cr6.eq) goto loc_825C12CC;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// beq cr6,0x825c1278
	if (ctx.cr6.eq) goto loc_825C1278;
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// beq cr6,0x825c1154
	if (ctx.cr6.eq) goto loc_825C1154;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x825c1110
	if (ctx.cr6.eq) goto loc_825C1110;
	// bl 0x8250ab60
	ctx.lr = 0x825C1104;
	sub_8250AB60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x825c12ec
	goto loc_825C12EC;
loc_825C1110:
	// bl 0x8250ab60
	ctx.lr = 0x825C1114;
	sub_8250AB60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825498e0
	ctx.lr = 0x825C1138;
	sub_825498E0(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,61166
	ctx.r10.u64 = ctx.r11.u64 & 61166;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,61166
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61166, ctx.xer);
	// beq cr6,0x825c1308
	if (ctx.cr6.eq) goto loc_825C1308;
	// ori r11,r11,61166
	ctx.r11.u64 = ctx.r11.u64 | 61166;
	// sth r11,14(r3)
	REX_STORE_U16(ctx.r3.u32 + 14, ctx.r11.u16);
	// b 0x825c1308
	goto loc_825C1308;
loc_825C1154:
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
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825bcfc0
	ctx.lr = 0x825C116C;
	sub_825BCFC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825bdd18
	ctx.lr = 0x825C1198;
	sub_825BDD18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825bd558
	ctx.lr = 0x825C11BC;
	sub_825BD558(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,3804(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825bdd18
	ctx.lr = 0x825C11E4;
	sub_825BDD18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825bd490
	ctx.lr = 0x825C1208;
	sub_825BD490(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825bdd18
	ctx.lr = 0x825C1230;
	sub_825BDD18(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82584ed0
	ctx.lr = 0x825C1244;
	sub_82584ED0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8250a620
	ctx.lr = 0x825C1250;
	sub_8250A620(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825bd3b8
	ctx.lr = 0x825C1274;
	sub_825BD3B8(ctx, base);
	// b 0x825c1308
	goto loc_825C1308;
loc_825C1278:
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(r23.u32, 2, ctx.xer);
	// ble cr6,0x825c1294
	if (!ctx.cr6.gt) goto loc_825C1294;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r11,-2028
	ctx.r5.s64 = ctx.r11.s64 + -2028;
	// li r4,3634
	ctx.r4.s64 = 3634;
	// bl 0x824e4368
	ctx.lr = 0x825C1294;
	sub_824E4368(ctx, base);
loc_825C1294:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825C129C;
	sub_8250AB60(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r10,r11,26,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8250a620
	ctx.lr = 0x825C12B8;
	sub_8250A620(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,119
	ctx.r11.s64 = 119;
	// rlwimi r10,r11,6,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x825c12d8
	goto loc_825C12D8;
loc_825C12CC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825C12D4;
	sub_8250AB60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825C12D8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250a620
	ctx.lr = 0x825C12E4;
	sub_8250A620(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_825C12EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825498e0
	ctx.lr = 0x825C1308;
	sub_825498E0(ctx, base);
loc_825C1308:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825D57C8) {
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
	ctx.lr = 0x825D57D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d580c
	if (!ctx.cr6.eq) goto loc_825D580C;
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
	// li r7,3889
	ctx.r7.s64 = 3889;
	// bl 0x824ea978
	ctx.lr = 0x825D580C;
	sub_824EA978(ctx, base);
loc_825D580C:
	// li r4,999
	ctx.r4.s64 = 999;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a57a8
	ctx.lr = 0x825D5818;
	sub_825A57A8(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d585c
	if (ctx.cr6.eq) goto loc_825D585C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d585c
	if (ctx.cr6.eq) goto loc_825D585C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1a98
	ctx.lr = 0x825D5834;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5952
	ctx.r4.s64 = ctx.r10.s64 + 5952;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,94
	ctx.r6.s64 = 94;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,376(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 376);
	// bctrl 
	ctx.lr = 0x825D585C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D585C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D8A70) {
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
	ctx.lr = 0x825D8A78;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	ctx.lr = 0x825D8A98;
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
	// bl 0x825d23d8
	ctx.lr = 0x825D8AB4;
	sub_825D23D8(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D8AD0;
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
	// bl 0x825d24f0
	ctx.lr = 0x825D8AEC;
	sub_825D24F0(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D8B08;
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
	// bl 0x825d2600
	ctx.lr = 0x825D8B24;
	sub_825D2600(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825D8B44;
	sub_825E7538(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x825fd0a0
	ctx.lr = 0x825D8B50;
	sub_825FD0A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r23,r11,22852
	r23.s64 = ctx.r11.s64 + 22852;
	// addi r22,r10,9792
	r22.s64 = ctx.r10.s64 + 9792;
	// beq cr6,0x825d8b84
	if (ctx.cr6.eq) goto loc_825D8B84;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,10276
	ctx.r5.s64 = ctx.r11.s64 + 10276;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1338
	ctx.r7.s64 = 1338;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D8B84;
	sub_824EA978(ctx, base);
loc_825D8B84:
	// lwz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r26,0
	r26.s64 = 0;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_825D8BA4:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x825d8bb4
	if (!ctx.cr6.gt) goto loc_825D8BB4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x825d8bc0
	goto loc_825D8BC0;
loc_825D8BB4:
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_825D8BC0:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825d8bd8
	if (ctx.cr0.eq) goto loc_825D8BD8;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x825d8ba4
	goto loc_825D8BA4;
loc_825D8BD8:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// lwz r28,32(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bne cr6,0x825d8e1c
	if (!ctx.cr6.eq) goto loc_825D8E1C;
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
	ctx.lr = 0x825D8C00;
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
	// bl 0x825d2718
	ctx.lr = 0x825D8C1C;
	sub_825D2718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825d8d9c
	if (!ctx.cr0.eq) goto loc_825D8D9C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d54c0
	ctx.lr = 0x825D8C40;
	sub_825D54C0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d55c8
	ctx.lr = 0x825D8C5C;
	sub_825D55C8(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fbfb8
	ctx.lr = 0x825D8C68;
	sub_825FBFB8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D8C78;
	sub_825F9F38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r30,r11,9756
	r30.s64 = ctx.r11.s64 + 9756;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,-16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -16);
	// stw r11,128(r25)
	REX_STORE_U32(r25.u32 + 128, ctx.r11.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825D8CA8;
	sub_825FAAB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r11,153(r25)
	REX_STORE_U8(r25.u32 + 153, ctx.r11.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825f9f38
	ctx.lr = 0x825D8CC0;
	sub_825F9F38(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,136(r25)
	REX_STORE_U32(r25.u32 + 136, ctx.r11.u32);
	// bl 0x825d82d0
	ctx.lr = 0x825D8CD4;
	sub_825D82D0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825D8CE0;
	sub_825FCB18(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D8CE8;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d8d0c
	if (!ctx.cr0.eq) goto loc_825D8D0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,10260
	ctx.r5.s64 = ctx.r11.s64 + 10260;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1372
	ctx.r7.s64 = 1372;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D8D0C;
	sub_824EA978(ctx, base);
loc_825D8D0C:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fbfb8
	ctx.lr = 0x825D8D18;
	sub_825FBFB8(ctx, base);
	// lwz r11,-16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -16);
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r26,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r26.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// bl 0x825f9f38
	ctx.lr = 0x825D8D3C;
	sub_825F9F38(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r28)
	REX_STORE_U32(r28.u32 + 132, ctx.r11.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825D8D64;
	sub_825FAAB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825D8D70;
	sub_825D82D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825D8D7C;
	sub_825FCB18(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D8D84;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d9004
	if (!ctx.cr0.eq) goto loc_825D9004;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1383
	ctx.r7.s64 = 1383;
	// addi r5,r11,10244
	ctx.r5.s64 = ctx.r11.s64 + 10244;
	// b 0x825d8ff4
	goto loc_825D8FF4;
loc_825D8D9C:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825D8DA8;
	sub_825F9AD0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r26,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r26.u32);
	// addi r27,r11,9756
	r27.s64 = ctx.r11.s64 + 9756;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + -16);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// bl 0x825f9f38
	ctx.lr = 0x825D8DD4;
	sub_825F9F38(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r11.u32);
	// bl 0x825d82d0
	ctx.lr = 0x825D8DE8;
	sub_825D82D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D8DF0;
	sub_825F9B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825D8DFC;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D8E04;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d9004
	if (!ctx.cr0.eq) goto loc_825D9004;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1394
	ctx.r7.s64 = 1394;
	// addi r5,r11,10184
	ctx.r5.s64 = ctx.r11.s64 + 10184;
	// b 0x825d8ff4
	goto loc_825D8FF4;
loc_825D8E1C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x825d8fe0
	if (ctx.cr6.eq) goto loc_825D8FE0;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d57c8
	ctx.lr = 0x825D8E40;
	sub_825D57C8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d5728
	ctx.lr = 0x825D8E5C;
	sub_825D5728(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fb950
	ctx.lr = 0x825D8E68;
	sub_825FB950(ctx, base);
	// li r30,23
	r30.s64 = 23;
	// stw r26,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r26.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r30,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D8E84;
	sub_825F9F38(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r27,r11,9756
	r27.s64 = ctx.r11.s64 + 9756;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,132(r25)
	REX_STORE_U32(r25.u32 + 132, ctx.r11.u32);
	// bl 0x825d82d0
	ctx.lr = 0x825D8EA0;
	sub_825D82D0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825D8EAC;
	sub_825FCB18(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D8EB4;
	sub_825F9B60(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r25,r11,10244
	r25.s64 = ctx.r11.s64 + 10244;
	// bne 0x825d8edc
	if (!ctx.cr0.eq) goto loc_825D8EDC;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1412
	ctx.r7.s64 = 1412;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D8EDC;
	sub_824EA978(ctx, base);
loc_825D8EDC:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fbfb8
	ctx.lr = 0x825D8EE8;
	sub_825FBFB8(ctx, base);
	// stw r26,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r26.u32);
	// stw r30,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r26,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r26.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r30.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825D8F18;
	sub_825FAAB8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825D8F24;
	sub_825D82D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825D8F30;
	sub_825FCB18(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D8F38;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d8f58
	if (!ctx.cr0.eq) goto loc_825D8F58;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1420
	ctx.r7.s64 = 1420;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D8F58;
	sub_824EA978(ctx, base);
loc_825D8F58:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fc028
	ctx.lr = 0x825D8F64;
	sub_825FC028(ctx, base);
	// stw r26,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r26.u32);
	// stw r30,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r30.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r26,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r26.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r30.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D8F84;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,136(r24)
	REX_STORE_U32(r24.u32 + 136, ctx.r11.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825D8FAC;
	sub_825FAAB8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825D8FB8;
	sub_825D82D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825D8FC4;
	sub_825FCB18(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D8FCC;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d9004
	if (!ctx.cr0.eq) goto loc_825D9004;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,1430
	ctx.r7.s64 = 1430;
	// b 0x825d8ff4
	goto loc_825D8FF4;
loc_825D8FE0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x825d9004
	if (!ctx.cr6.eq) goto loc_825D9004;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,1432
	ctx.r7.s64 = 1432;
	// addi r5,r11,10228
	ctx.r5.s64 = ctx.r11.s64 + 10228;
loc_825D8FF4:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D9004;
	sub_824EA978(ctx, base);
loc_825D9004:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825FAD18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FAD20;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FAD38;
	sub_825FA990(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r31,1
	r31.s64 = 1;
	// addi r11,r11,31088
	ctx.r11.s64 = ctx.r11.s64 + 31088;
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,18
	ctx.r11.u64 = ctx.r11.u64 | 18;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 2736);
	// bl 0x825d7d20
	ctx.lr = 0x825FAD64;
	sub_825D7D20(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FBE68) {
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
	// lwz r30,1452(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FBE90;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825fbebc
	if (ctx.cr0.eq) goto loc_825FBEBC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,143
	ctx.r4.s64 = 143;
	// bl 0x825fb2c0
	ctx.lr = 0x825FBEAC;
	sub_825FB2C0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,32704
	ctx.r11.s64 = ctx.r11.s64 + 32704;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825fbec0
	goto loc_825FBEC0;
loc_825FBEBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FBEC0:
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

DEFINE_REX_FUNC(sub_825FE3A0) {
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
	ctx.lr = 0x825FE3A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r27,1
	r27.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r27,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stb r8,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x825fe3f4
	if (ctx.cr6.eq) goto loc_825FE3F4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x825fe418
	if (!ctx.cr6.eq) goto loc_825FE418;
loc_825FE3F4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-20568
	ctx.r6.s64 = ctx.r11.s64 + -20568;
	// addi r5,r10,-20304
	ctx.r5.s64 = ctx.r10.s64 + -20304;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,4319
	ctx.r7.s64 = 4319;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FE418;
	sub_824EA978(ctx, base);
loc_825FE418:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825fe4f0
	if (ctx.cr6.eq) goto loc_825FE4F0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fe454
	if (ctx.cr0.eq) goto loc_825FE454;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r11,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// rlwinm r9,r11,21,11,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x825fe458
	goto loc_825FE458;
loc_825FE454:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FE458:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825fe478
	if (ctx.cr6.eq) goto loc_825FE478;
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// addi r10,r11,152
	ctx.r10.s64 = ctx.r11.s64 + 152;
	// lbz r10,152(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 152);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r10,152(r11)
	REX_STORE_U8(ctx.r11.u32 + 152, ctx.r10.u8);
loc_825FE478:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fe490
	if (ctx.cr0.eq) goto loc_825FE490;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// b 0x825fe494
	goto loc_825FE494;
loc_825FE490:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FE494:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825fe4a4
	if (ctx.cr6.eq) goto loc_825FE4A4;
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// stb r27,158(r11)
	REX_STORE_U8(ctx.r11.u32 + 158, r27.u8);
loc_825FE4A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260aa38
	ctx.lr = 0x825FE4B0;
	sub_8260AA38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8260aa38
	ctx.lr = 0x825FE4C4;
	sub_8260AA38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x8260aa38
	ctx.lr = 0x825FE4D8;
	sub_8260AA38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// bl 0x8260aa38
	ctx.lr = 0x825FE4EC;
	sub_8260AA38(ctx, base);
	// stb r3,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r3.u8);
loc_825FE4F0:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,88(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825FE51C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,85(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FE548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FE574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FE5A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r11,-30172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30172);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82610DD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r9,r4,96
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// lbz r10,10(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 10);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,20,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFF;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82610e08
	if (ctx.cr6.eq) goto loc_82610E08;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// rlwinm r9,r9,0,20,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82610E08:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 8);
	// rlwinm r7,r10,20,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82610e28
	if (ctx.cr6.eq) goto loc_82610E28;
	// rlwimi r10,r9,12,18,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFCFFF);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82610E28:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,9(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 9);
	// rlwinm r7,r10,15,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82610e48
	if (ctx.cr6.eq) goto loc_82610E48;
	// rlwimi r10,r9,17,12,14
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xE0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82610E48:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r7,r10,6
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82610e68
	if (ctx.cr6.eq) goto loc_82610E68;
	// rlwimi r10,r9,0,6,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFC000000);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82610E68:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r7,r10,6
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82610e88
	if (ctx.cr6.eq) goto loc_82610E88;
	// rlwimi r10,r9,0,6,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFC000000);
	// stw r8,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82610E88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82615D00) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8261bd38
	sub_8261BD38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82615DF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x8261cfe8
	sub_8261CFE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82617B70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw r7,r10,r4
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lfs f0,3704(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lfs f13,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82617c2c
	if (ctx.cr6.eq) goto loc_82617C2C;
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lfs f12,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// bne cr6,0x82617be8
	if (!ctx.cr6.eq) goto loc_82617BE8;
	// lfs f12,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82617be8
	if (!ctx.cr6.eq) goto loc_82617BE8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,32424(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32424);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// b 0x82617c4c
	goto loc_82617C4C;
loc_82617BE8:
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r8,76(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r8,r8,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// stw r7,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// b 0x82617c4c
	goto loc_82617C4C;
loc_82617C2C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r8,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// lfs f0,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
loc_82617C4C:
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82624630) {
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
	ctx.lr = 0x82624638;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bne cr6,0x82624664
	if (!ctx.cr6.eq) goto loc_82624664;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82624664:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82640b18
	ctx.lr = 0x82624678;
	sub_82640B18(ctx, base);
	// mullw r11,r3,r28
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r28.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r31,32
	ctx.r9.u64 = r31.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// mulld r9,r9,r11
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r11.u64);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// divd r7,r8,r10
	ctx.r7.s64 = (ctx.r10.s64 && !(ctx.r8.s64 == INT64_MIN && ctx.r10.s64 == -1)) ? ctx.r8.s64 / ctx.r10.s64 : 0;
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r6,r10,7
	ctx.r6.s64 = ctx.r10.s64 + 7;
	// rlwinm r9,r6,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// bne cr6,0x82624724
	if (!ctx.cr6.eq) goto loc_82624724;
	// cmplwi cr6,r30,44100
	ctx.cr6.compare<uint32_t>(r30.u32, 44100, ctx.xer);
	// bne cr6,0x82624724
	if (!ctx.cr6.eq) goto loc_82624724;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// bne cr6,0x82624724
	if (!ctx.cr6.eq) goto loc_82624724;
	// cmplwi cr6,r31,32000
	ctx.cr6.compare<uint32_t>(r31.u32, 32000, ctx.xer);
	// bne cr6,0x82624724
	if (!ctx.cr6.eq) goto loc_82624724;
	// lis r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r8,r8,44100
	ctx.r8.u64 = ctx.r8.u64 | 44100;
	// mulld r7,r10,r8
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r8.u64);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// divd r6,r7,r11
	ctx.r6.s64 = (ctx.r11.s64 && !(ctx.r7.s64 == INT64_MIN && ctx.r11.s64 == -1)) ? ctx.r7.s64 / ctx.r11.s64 : 0;
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// addi r5,r7,7
	ctx.r5.s64 = ctx.r7.s64 + 7;
	// rlwinm r4,r5,0,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r4,32000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32000, ctx.xer);
	// blt cr6,0x82624724
	if (ctx.cr6.lt) goto loc_82624724;
loc_826246F4:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// mulld r7,r7,r8
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r8.u64);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// divd r5,r6,r11
	ctx.r5.s64 = (ctx.r11.s64 && !(ctx.r6.s64 == INT64_MIN && ctx.r11.s64 == -1)) ? ctx.r6.s64 / ctx.r11.s64 : 0;
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r4,r7,7
	ctx.r4.s64 = ctx.r7.s64 + 7;
	// rlwinm r3,r4,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r3,32000
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32000, ctx.xer);
	// bge cr6,0x826246f4
	if (!ctx.cr6.lt) goto loc_826246F4;
loc_82624724:
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82628F40) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82628e48
	sub_82628E48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826291F0) {
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-11312
	ctx.r10.s64 = ctx.r10.s64 + -11312;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,6144
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6144, ctx.xer);
	// beq cr6,0x82629290
	if (ctx.cr6.eq) goto loc_82629290;
	// li r9,6144
	ctx.r9.s64 = 6144;
loc_82629218:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
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
	// bne 0x82629218
	if (!ctx.cr0.eq) goto loc_82629218;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82629284
	if (ctx.cr6.eq) goto loc_82629284;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmplwi cr6,r10,6144
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6144, ctx.xer);
	// bne cr6,0x8262925c
	if (!ctx.cr6.eq) goto loc_8262925C;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82629260
	goto loc_82629260;
loc_8262925C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82629260:
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r3,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bgt cr6,0x82629290
	if (ctx.cr6.gt) goto loc_82629290;
	// li r5,6144
	ctx.r5.s64 = 6144;
	// bl 0x826a1e70
	ctx.lr = 0x8262927C;
	sub_826A1E70(ctx, base);
	// lwsync 
	// b 0x82629290
	goto loc_82629290;
loc_82629284:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r10,31748(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31748);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_82629290:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82634658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfd f12,2816(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 2816);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f10,2800(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2800);
	ctx.f10.f64 = double(temp.f32);
	// lfd f11,2808(r8)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 2808);
	// lfs f13,3788(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3788);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x8263476c
	if (ctx.cr6.lt) goto loc_8263476C;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r6,r3,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r3.u64;
	// li r30,-4
	r30.s64 = -4;
	// li r31,4
	r31.s64 = 4;
	// li r7,8
	ctx.r7.s64 = 8;
loc_826346A8:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826346bc
	if (!ctx.cr6.lt) goto loc_826346BC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x826346c8
	goto loc_826346C8;
loc_826346BC:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x826346c8
	if (!ctx.cr6.gt) goto loc_826346C8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_826346C8:
	// fmul f9,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f0.f64 * ctx.f12.f64;
	// lfsx f0,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.f8.u32);
	// bge cr6,0x826346e8
	if (!ctx.cr6.lt) goto loc_826346E8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x826346f4
	goto loc_826346F4;
loc_826346E8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x826346f4
	if (!ctx.cr6.gt) goto loc_826346F4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_826346F4:
	// fmul f9,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f0.f64 * ctx.f12.f64;
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f8.u32);
	// bge cr6,0x82634714
	if (!ctx.cr6.lt) goto loc_82634714;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82634720
	goto loc_82634720;
loc_82634714:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82634720
	if (!ctx.cr6.gt) goto loc_82634720;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82634720:
	// fmul f9,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f0.f64 * ctx.f12.f64;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.f8.u32);
	// bge cr6,0x82634740
	if (!ctx.cr6.lt) goto loc_82634740;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8263474c
	goto loc_8263474C;
loc_82634740:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8263474c
	if (!ctx.cr6.gt) goto loc_8263474C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8263474C:
	// fmul f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.f9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x826346a8
	if (ctx.cr6.lt) goto loc_826346A8;
loc_8263476C:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x826347bc
	if (!ctx.cr6.lt) goto loc_826347BC;
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
loc_82634788:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8263479c
	if (!ctx.cr6.lt) goto loc_8263479C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x826347a8
	goto loc_826347A8;
loc_8263479C:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x826347a8
	if (!ctx.cr6.gt) goto loc_826347A8;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_826347A8:
	// fmul f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f9,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82634788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82634788;
loc_826347BC:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263C458) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// and r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 & ctx.r9.u64;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// srw r11,r5,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8263c4a4
	if (ctx.cr6.eq) goto loc_8263C4A4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_8263C4A4:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r4,r10,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mullw r3,r4,r9
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// divw r11,r3,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826409F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826409F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r3,516
	r31.s64 = ctx.r3.s64 + 516;
	// lwz r11,816(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82640a88
	if (!ctx.cr6.eq) goto loc_82640A88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,224
	ctx.r3.s64 = ctx.r3.s64 + 224;
	// bl 0x82638d80
	ctx.lr = 0x82640A28;
	sub_82638D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82640ae4
	if (ctx.cr6.lt) goto loc_82640AE4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82640a5c
	if (!ctx.cr6.eq) goto loc_82640A5C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r11,-17192
	ctx.r8.s64 = ctx.r11.s64 + -17192;
	// addi r7,r10,-15176
	ctx.r7.s64 = ctx.r10.s64 + -15176;
	// addi r6,r9,-14688
	ctx.r6.s64 = ctx.r9.s64 + -14688;
	// li r5,52
	ctx.r5.s64 = 52;
	// b 0x82640a78
	goto loc_82640A78;
loc_82640A5C:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r11,-16240
	ctx.r8.s64 = ctx.r11.s64 + -16240;
	// addi r7,r10,-14200
	ctx.r7.s64 = ctx.r10.s64 + -14200;
	// addi r6,r9,-13656
	ctx.r6.s64 = ctx.r9.s64 + -13656;
	// li r5,28
	ctx.r5.s64 = 28;
loc_82640A78:
	// stw r8,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r8.u32);
	// stw r7,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r7.u32);
	// stw r6,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r6.u32);
	// sth r5,314(r30)
	REX_STORE_U16(r30.u32 + 314, ctx.r5.u16);
loc_82640A88:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_82640AB8:
	// stw r11,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82640ab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82640AB8;
	// lis r11,-32156
	ctx.r11.s64 = -2107375616;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r10,r11,1128
	ctx.r10.s64 = ctx.r11.s64 + 1128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,484(r28)
	REX_STORE_U32(r28.u32 + 484, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82640AE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82640AE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82642CF8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82642d4c
	if (ctx.cr6.eq) goto loc_82642D4C;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// beq cr6,0x82642d28
	if (ctx.cr6.eq) goto loc_82642D28;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// b 0x82642d30
	goto loc_82642D30;
loc_82642D28:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
loc_82642D30:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
loc_82642D4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82644140) {
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
	ctx.lr = 0x82644148;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82644558
	if (ctx.cr6.eq) goto loc_82644558;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82644558
	if (ctx.cr6.eq) goto loc_82644558;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// clrlwi r15,r7,16
	r15.u64 = ctx.r7.u32 & 0xFFFF;
	// li r18,0
	r18.s64 = 0;
	// li r16,12
	r16.s64 = 12;
	// addi r17,r11,-26936
	r17.s64 = ctx.r11.s64 + -26936;
	// addi r20,r10,-26964
	r20.s64 = ctx.r10.s64 + -26964;
	// addi r19,r9,-26992
	r19.s64 = ctx.r9.s64 + -26992;
loc_82644180:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r15.u32, ctx.xer);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// blt cr6,0x82644190
	if (ctx.cr6.lt) goto loc_82644190;
	// mr r21,r15
	r21.u64 = r15.u64;
loc_82644190:
	// li r10,5
	ctx.r10.s64 = 5;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - r21.u64;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// addi r11,r1,-256
	ctx.r11.s64 = ctx.r1.s64 + -256;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826441A8:
	// cmplw cr6,r8,r21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r21.u32, ctx.xer);
	// bge cr6,0x826441c4
	if (!ctx.cr6.lt) goto loc_826441C4;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x826441c8
	goto loc_826441C8;
loc_826441C4:
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
loc_826441C8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826441a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826441A8;
	// lwz r22,-240(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lwz r24,-244(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// mr r30,r18
	r30.u64 = r18.u64;
	// lwz r26,-248(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r25,-252(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r23,-256(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
loc_826441F0:
	// lwzx r29,r30,r19
	r29.u64 = REX_LOAD_U32(r30.u32 + r19.u32);
	// addi r27,r1,-224
	r27.s64 = ctx.r1.s64 + -224;
	// lwzx r28,r30,r20
	r28.u64 = REX_LOAD_U32(r30.u32 + r20.u32);
	// mullw r11,r25,r29
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// stwx r18,r30,r27
	REX_STORE_U32(r30.u32 + r27.u32, r18.u32);
	// mullw r10,r23,r28
	ctx.r10.s64 = int64_t(r23.s32) * int64_t(r28.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// subf r8,r26,r11
	ctx.r8.u64 = ctx.r11.u64 - r26.u64;
	// bgt cr6,0x82644220
	if (ctx.cr6.gt) goto loc_82644220;
	// subf r8,r11,r26
	ctx.r8.u64 = r26.u64 - ctx.r11.u64;
loc_82644220:
	// mullw r11,r25,r28
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r28.s32);
	// mullw r10,r26,r29
	ctx.r10.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// subf r9,r24,r11
	ctx.r9.u64 = ctx.r11.u64 - r24.u64;
	// bgt cr6,0x82644240
	if (ctx.cr6.gt) goto loc_82644240;
	// subf r9,r11,r24
	ctx.r9.u64 = r24.u64 - ctx.r11.u64;
loc_82644240:
	// mullw r10,r24,r29
	ctx.r10.s64 = int64_t(r24.s32) * int64_t(r29.s32);
	// mullw r11,r26,r28
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// ble cr6,0x82644264
	if (!ctx.cr6.gt) goto loc_82644264;
	// subf r11,r22,r11
	ctx.r11.u64 = ctx.r11.u64 - r22.u64;
	// b 0x82644268
	goto loc_82644268;
loc_82644264:
	// subf r11,r11,r22
	ctx.r11.u64 = r22.u64 - ctx.r11.u64;
loc_82644268:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r8,r11,r16
	ctx.r8.u64 = uint32_t((r16.s32 && !(ctx.r11.s32 == INT32_MIN && r16.s32 == -1)) ? ctx.r11.s32 / r16.s32 : 0);
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x8264427c
	if (!ctx.cr6.lt) goto loc_8264427C;
	// li r8,16
	ctx.r8.s64 = 16;
loc_8264427C:
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(r21.u32, 2, ctx.xer);
	// stwx r8,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// ble cr6,0x82644344
	if (!ctx.cr6.gt) goto loc_82644344;
	// addi r11,r21,-2
	ctx.r11.s64 = r21.s64 + -2;
	// addi r31,r3,-1
	r31.s64 = ctx.r3.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826442A0:
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// mullw r9,r6,r29
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r29.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -128;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// divw r11,r7,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r7.s32 / ctx.r8.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x826442d4
	if (!ctx.cr6.gt) goto loc_826442D4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x826442e0
	goto loc_826442E0;
loc_826442D4:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x826442e0
	if (!ctx.cr6.lt) goto loc_826442E0;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_826442E0:
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x826442f8
	if (!ctx.cr6.gt) goto loc_826442F8;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82644304
	goto loc_82644304;
loc_826442F8:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82644304
	if (!ctx.cr6.lt) goto loc_82644304;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82644304:
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r7,r11,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r17.u32);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x82644320
	if (!ctx.cr6.lt) goto loc_82644320;
	// li r8,16
	ctx.r8.s64 = 16;
loc_82644320:
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwzx r7,r30,r27
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mullw r6,r11,r11
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 7;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r11,r30,r27
	REX_STORE_U32(r30.u32 + r27.u32, ctx.r11.u32);
	// bdnz 0x826442a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826442A0;
loc_82644344:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r30,28
	ctx.cr6.compare<uint32_t>(r30.u32, 28, ctx.xer);
	// blt cr6,0x826441f0
	if (ctx.cr6.lt) goto loc_826441F0;
	// lwz r10,-224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// lwz r9,-220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8264436c
	if (!ctx.cr6.lt) goto loc_8264436C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8264436C:
	// lwz r9,-216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82644380
	if (!ctx.cr6.lt) goto loc_82644380;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82644380:
	// lwz r9,-212(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82644394
	if (!ctx.cr6.lt) goto loc_82644394;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82644394:
	// lwz r9,-208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826443a8
	if (!ctx.cr6.lt) goto loc_826443A8;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_826443A8:
	// lwz r9,-204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826443bc
	if (!ctx.cr6.lt) goto loc_826443BC;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_826443BC:
	// lwz r9,-200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x826443cc
	if (!ctx.cr6.lt) goto loc_826443CC;
	// li r11,6
	ctx.r11.s64 = 6;
loc_826443CC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// addic. r8,r21,-2
	ctx.xer.ca = r21.u32 > 1;
	ctx.r8.s64 = r21.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r31,r25
	r31.u64 = r25.u64;
	// lwzx r30,r10,r19
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r29,r10,r20
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + r20.u32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// sthu r9,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r5.u32 = ea;
	// sthu r25,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r25.u16);
	ctx.r5.u32 = ea;
	// sthu r23,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, r23.u16);
	ctx.r5.u32 = ea;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// beq 0x82644548
	if (ctx.cr0.eq) goto loc_82644548;
loc_82644404:
	// mullw r11,r29,r10
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r10.s32);
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r10,r30,r31
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(r31.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divw r6,r7,r9
	ctx.r6.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// ble cr6,0x82644440
	if (!ctx.cr6.gt) goto loc_82644440;
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x8264444c
	goto loc_8264444C;
loc_82644440:
	// cmpwi cr6,r6,-8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -8, ctx.xer);
	// bge cr6,0x8264444c
	if (!ctx.cr6.lt) goto loc_8264444C;
	// li r6,-8
	ctx.r6.s64 = -8;
loc_8264444C:
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82644464
	if (!ctx.cr6.gt) goto loc_82644464;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82644470
	goto loc_82644470;
loc_82644464:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82644470
	if (!ctx.cr6.lt) goto loc_82644470;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82644470:
	// rlwinm r10,r6,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r7,r10,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r17.u32);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x8264448c
	if (!ctx.cr6.lt) goto loc_8264448C;
	// li r9,16
	ctx.r9.s64 = 16;
loc_8264448C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82644530
	if (ctx.cr6.eq) goto loc_82644530;
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r10,r29,r10
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divw r11,r7,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x826444d8
	if (!ctx.cr6.gt) goto loc_826444D8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x826444e4
	goto loc_826444E4;
loc_826444D8:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x826444e4
	if (!ctx.cr6.lt) goto loc_826444E4;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_826444E4:
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r7,32767
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32767, ctx.xer);
	// ble cr6,0x826444fc
	if (!ctx.cr6.gt) goto loc_826444FC;
	// li r7,32767
	ctx.r7.s64 = 32767;
	// b 0x82644508
	goto loc_82644508;
loc_826444FC:
	// cmpwi cr6,r7,-32768
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -32768, ctx.xer);
	// bge cr6,0x82644508
	if (!ctx.cr6.lt) goto loc_82644508;
	// li r7,-32768
	ctx.r7.s64 = -32768;
loc_82644508:
	// rlwinm r10,r11,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r10,r10,r17
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r17.u32);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x82644524
	if (!ctx.cr6.lt) goto loc_82644524;
	// li r9,16
	ctx.r9.s64 = 16;
loc_82644524:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// b 0x82644534
	goto loc_82644534;
loc_82644530:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82644534:
	// rlwimi r11,r6,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne cr6,0x82644404
	if (!ctx.cr6.eq) goto loc_82644404;
loc_82644548:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82644180
	if (!ctx.cr6.eq) goto loc_82644180;
	// subf r3,r14,r5
	ctx.r3.u64 = ctx.r5.u64 - r14.u64;
	// b 0x826a1cd0
	return;
loc_82644558:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8265EC38) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265ED30) {
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
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x8265ED5C;
	sub_826A2E60(ctx, base);
	// addi r31,r31,344
	r31.s64 = r31.s64 + 344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a5ac8
	ctx.lr = 0x8265ED68;
	sub_826A5AC8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r8,15
	ctx.r8.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x826b3de8
	ctx.lr = 0x8265ED8C;
	sub_826B3DE8(ctx, base);
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

DEFINE_REX_FUNC(sub_82660120) {
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
	ctx.lr = 0x82660128;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// li r19,0
	r19.s64 = 0;
	// li r18,0
	r18.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826601fc
	if (ctx.cr6.eq) goto loc_826601FC;
	// lwz r21,0(r4)
	r21.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82660170
	if (!ctx.cr6.eq) goto loc_82660170;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82660200
	if (ctx.cr6.eq) goto loc_82660200;
loc_82660170:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r4,100(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 8);
	// bl 0x826510d8
	ctx.lr = 0x82660184;
	sub_826510D8(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 16);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x826601ac
	if (ctx.cr6.eq) goto loc_826601AC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x826601c4
	if (!ctx.cr6.eq) goto loc_826601C4;
loc_826601AC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826601bc
	if (ctx.cr6.eq) goto loc_826601BC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826601c4
	if (!ctx.cr6.eq) goto loc_826601C4;
loc_826601BC:
	// addic r9,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r9.s64 = r31.s64 + -1;
	// subfe r19,r9,r31
	temp.u8 = (~ctx.r9.u32 + r31.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	r19.u64 = ~ctx.r9.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_826601C4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x826601d4
	if (ctx.cr6.eq) goto loc_826601D4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82660200
	if (!ctx.cr6.eq) goto loc_82660200;
loc_826601D4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826601e4
	if (ctx.cr6.eq) goto loc_826601E4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82660200
	if (!ctx.cr6.eq) goto loc_82660200;
loc_826601E4:
	// lbz r11,396(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 396);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82660200
	if (ctx.cr0.eq) goto loc_82660200;
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// subfe r18,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	r18.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82660200
	goto loc_82660200;
loc_826601FC:
	// lwz r21,0(r20)
	r21.u64 = REX_LOAD_U32(r20.u32 + 0);
loc_82660200:
	// addi r4,r21,44
	ctx.r4.s64 = r21.s64 + 44;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x826a1e70
	ctx.lr = 0x82660210;
	sub_826A1E70(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x826602dc
	if (ctx.cr6.eq) goto loc_826602DC;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_8266022C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82660274
	if (ctx.cr6.eq) goto loc_82660274;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r6,r10,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82660250
	if (!ctx.cr0.eq) goto loc_82660250;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82660274
	if (ctx.cr6.eq) goto loc_82660274;
loc_82660250:
	// ld r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r5,r25,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r10,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// li r9,1
	ctx.r9.s64 = 1;
	// or r26,r10,r26
	r26.u64 = ctx.r10.u64 | r26.u64;
	// stdx r6,r5,r4
	REX_STORE_U64(ctx.r5.u32 + ctx.r4.u32, ctx.r6.u64);
	// b 0x82660284
	goto loc_82660284;
loc_82660274:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_82660284:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x826602c4
	if (ctx.cr6.eq) goto loc_826602C4;
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r6,r10,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x826602a0
	if (!ctx.cr0.eq) goto loc_826602A0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x826602c4
	if (ctx.cr6.eq) goto loc_826602C4;
loc_826602A0:
	// ld r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r6,r25,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r10,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1;
	// li r9,1
	ctx.r9.s64 = 1;
	// or r26,r10,r26
	r26.u64 = ctx.r10.u64 | r26.u64;
	// stdx r11,r6,r5
	REX_STORE_U64(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u64);
	// b 0x826602d0
	goto loc_826602D0;
loc_826602C4:
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
loc_826602D0:
	// add r25,r9,r25
	r25.u64 = ctx.r9.u64 + r25.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8266022c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8266022C;
loc_826602DC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82660308
	if (ctx.cr6.eq) goto loc_82660308;
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_826602EC:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r10,396(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bdnz 0x826602ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826602EC;
loc_82660308:
	// lwz r31,192(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ld r30,184(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// ld r29,176(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// ld r28,168(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// ld r27,160(r1)
	r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// beq cr6,0x826603c8
	if (ctx.cr6.eq) goto loc_826603C8;
	// lwz r3,12(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// rldicr r8,r31,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266034C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82660410
	if (!ctx.cr0.eq) goto loc_82660410;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82660388
	if (ctx.cr6.eq) goto loc_82660388;
	// addi r11,r17,-4
	ctx.r11.s64 = r17.s64 + -4;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_82660364:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,396(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r9,396(r10)
	REX_STORE_U32(ctx.r10.u32 + 396, ctx.r9.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,396(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r9,r9,0,14,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r9,396(r10)
	REX_STORE_U32(ctx.r10.u32 + 396, ctx.r9.u32);
	// bdnz 0x82660364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82660364;
loc_82660388:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x826603bc
	if (ctx.cr6.eq) goto loc_826603BC;
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_82660398:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,396(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// stw r9,396(r10)
	REX_STORE_U32(ctx.r10.u32 + 396, ctx.r9.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,396(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r9,r9,0,14,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r9,396(r10)
	REX_STORE_U32(ctx.r10.u32 + 396, ctx.r9.u32);
	// bdnz 0x82660398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82660398;
loc_826603BC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826603c8
	if (ctx.cr6.eq) goto loc_826603C8;
	// li r26,1
	r26.s64 = 1;
loc_826603C8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x826604cc
	if (ctx.cr6.eq) goto loc_826604CC;
	// lwz r3,12(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 12);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// rldicr r8,r31,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660408;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82660424
	if (ctx.cr0.eq) goto loc_82660424;
loc_82660410:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82660500
	if (!ctx.cr6.gt) goto loc_82660500;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82660500
	goto loc_82660500;
loc_82660424:
	// addi r9,r21,376
	ctx.r9.s64 = r21.s64 + 376;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,-11012
	ctx.r10.s64 = ctx.r10.s64 + -11012;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
loc_82660438:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82660458
	if (!ctx.cr0.eq) goto loc_82660458;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82660438
	if (!ctx.cr6.eq) goto loc_82660438;
loc_82660458:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82660488
	if (!ctx.cr0.eq) goto loc_82660488;
	// lwz r3,12(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// rldicr r8,r31,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660488;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82660488:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826604fc
	if (ctx.cr6.eq) goto loc_826604FC;
	// rlwinm r9,r19,19,12,12
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 19) & 0x80000;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// rlwinm r8,r18,18,13,13
	ctx.r8.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 18) & 0x40000;
	// addi r11,r17,-4
	ctx.r11.s64 = r17.s64 + -4;
loc_826604A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,396(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r7,r7,0,13,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r7,396(r10)
	REX_STORE_U32(ctx.r10.u32 + 396, ctx.r7.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r7,396(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm r7,r7,0,14,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r7,396(r10)
	REX_STORE_U32(ctx.r10.u32 + 396, ctx.r7.u32);
	// bdnz 0x826604a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826604A0;
loc_826604CC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826604fc
	if (ctx.cr6.eq) goto loc_826604FC;
	// lwz r3,12(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// rldicr r8,r31,32,31
	ctx.r8.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826604FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826604FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82660500:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82678B50) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r3,25
	ctx.r11.u64 = ctx.r3.u32 & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82678b64
	if (ctx.cr6.lt) goto loc_82678B64;
loc_82678B5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82678B64:
	// rlwinm r10,r3,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// stb r9,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x82678b5c
	if (!ctx.cr6.lt) goto loc_82678B5C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82678b9c
	if (!ctx.cr0.eq) goto loc_82678B9C;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82678B9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82679E50) {
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
	ctx.lr = 0x82679E58;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,40
	r26.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x827938a4
	ctx.lr = 0x82679E7C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,536
	ctx.r5.s64 = r31.s64 + 536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,476
	ctx.r3.s64 = r31.s64 + 476;
	// bl 0x826825c0
	ctx.lr = 0x82679E94;
	sub_826825C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82679ed0
	if (!ctx.cr0.eq) goto loc_82679ED0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,676
	ctx.r5.s64 = r31.s64 + 676;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,592
	ctx.r3.s64 = r31.s64 + 592;
	// bl 0x826828d8
	ctx.lr = 0x82679EB4;
	sub_826828D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82679ec8
	if (!ctx.cr0.eq) goto loc_82679EC8;
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4111
	r31.u64 = r31.u64 | 4111;
	// b 0x82679f04
	goto loc_82679F04;
loc_82679EC8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82679ed4
	goto loc_82679ED4;
loc_82679ED0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82679ED4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82679ee4
	if (ctx.cr6.eq) goto loc_82679EE4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_82679EE4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82679ef4
	if (ctx.cr6.eq) goto loc_82679EF4;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_82679EF4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82679f00
	if (ctx.cr6.eq) goto loc_82679F00;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82679F00:
	// li r31,0
	r31.s64 = 0;
loc_82679F04:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827938b4
	ctx.lr = 0x82679F0C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8267DBC8) {
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
	ctx.lr = 0x8267DBD0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,1076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 1076);
	// li r23,0
	r23.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267e138
	if (ctx.cr0.eq) goto loc_8267E138;
	// ld r11,1056(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1056);
	// lhz r9,1084(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 1084);
	// clrlwi r21,r11,16
	r21.u64 = ctx.r11.u32 & 0xFFFF;
	// lhz r10,1080(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1080);
	// lhz r8,1090(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 1090);
	// subf r11,r9,r21
	ctx.r11.u64 = r21.u64 - ctx.r9.u64;
	// extsh r17,r21
	r17.s64 = r21.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r10,r17
	ctx.r10.u64 = r17.u64 - ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8267e138
	if (ctx.cr6.gt) goto loc_8267E138;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82681818
	ctx.lr = 0x8267DC30;
	sub_82681818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8267dc50
	if (!ctx.cr0.lt) goto loc_8267DC50;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82679830
	ctx.lr = 0x8267DC48;
	sub_82679830(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8267e138
	goto loc_8267E138;
loc_8267DC50:
	// addi r20,r31,968
	r20.s64 = r31.s64 + 968;
	// addi r19,r31,896
	r19.s64 = r31.s64 + 896;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8267b598
	ctx.lr = 0x8267DC68;
	sub_8267B598(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfic r11,r11,1264
	ctx.xer.ca = ctx.r11.u32 <= 1264;
	ctx.r11.u64 = static_cast<uint64_t>(1264) - ctx.r11.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x826790a0
	ctx.lr = 0x8267DC7C;
	sub_826790A0(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82679118
	ctx.lr = 0x8267DC8C;
	sub_82679118(ctx, base);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r23,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r23.u32);
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// cmpwi cr6,r30,254
	ctx.cr6.compare<int32_t>(r30.s32, 254, ctx.xer);
	// bge cr6,0x8267dce8
	if (!ctx.cr6.lt) goto loc_8267DCE8;
	// lhz r11,1076(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1076);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8267dce8
	if (!ctx.cr6.gt) goto loc_8267DCE8;
	// lhz r11,1090(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1090);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8267dce8
	if (!ctx.cr6.lt) goto loc_8267DCE8;
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// rlwinm. r9,r11,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8267dcd8
	if (ctx.cr0.eq) goto loc_8267DCD8;
	// lhz r9,1074(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 1074);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8267dce8
	if (ctx.cr6.lt) goto loc_8267DCE8;
loc_8267DCD8:
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267dce8
	if (!ctx.cr0.eq) goto loc_8267DCE8;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267dcf0
	if (ctx.cr0.eq) goto loc_8267DCF0;
loc_8267DCE8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_8267DCF0:
	// lhz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 128);
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r11.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8267dd2c
	if (!ctx.cr6.lt) goto loc_8267DD2C;
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 124);
	// lhz r9,1076(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 1076);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8267dd2c
	if (!ctx.cr6.gt) goto loc_8267DD2C;
	// lhz r11,1090(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1090);
	// lhz r9,126(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 126);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8267dd2c
	if (!ctx.cr6.gt) goto loc_8267DD2C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8267dd34
	if (ctx.cr6.eq) goto loc_8267DD34;
loc_8267DD2C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8267DD34:
	// lhz r11,1006(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1006);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267dd48
	if (ctx.cr0.eq) goto loc_8267DD48;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8267DD48:
	// bl 0x823ef900
	ctx.lr = 0x8267DD4C;
	sub_823EF900(ctx, base);
	// lhz r11,1096(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1096);
	// lwz r10,544(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 544);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267de4c
	if (ctx.cr6.eq) goto loc_8267DE4C;
loc_8267DD78:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8267de44
	if (ctx.cr6.lt) goto loc_8267DE44;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(r24.u32, 32, ctx.xer);
	// bge cr6,0x8267de44
	if (!ctx.cr6.lt) goto loc_8267DE44;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8267de44
	if (ctx.cr6.eq) goto loc_8267DE44;
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// lwz r11,-20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267ddbc
	if (ctx.cr6.eq) goto loc_8267DDBC;
	// clrlwi r7,r26,16
	ctx.r7.u64 = r26.u32 & 0xFFFF;
	// li r11,-32768
	ctx.r11.s64 = -32768;
	// addi r10,r7,32
	ctx.r10.s64 = ctx.r7.s64 + 32;
	// b 0x8267ddc8
	goto loc_8267DDC8;
loc_8267DDBC:
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8267DDC8:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r28,r27,16
	r28.u64 = r27.u32 & 0xFFFF;
	// addi r10,r10,77
	ctx.r10.s64 = ctx.r10.s64 + 77;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | r28.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r26,5,11,26
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0x1FFFE0;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// clrlwi r29,r11,16
	r29.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// sth r29,14(r30)
	REX_STORE_U16(r30.u32 + 14, r29.u16);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// clrlwi r25,r26,16
	r25.u64 = r26.u32 & 0xFFFF;
	// bl 0x82685058
	ctx.lr = 0x8267DE0C;
	sub_82685058(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267de38
	if (ctx.cr6.eq) goto loc_8267DE38;
	// rlwinm. r11,r29,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// beq 0x8267de30
	if (ctx.cr0.eq) goto loc_8267DE30;
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
	// clrlwi r26,r11,16
	r26.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8267de38
	goto loc_8267DE38;
loc_8267DE30:
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// clrlwi r27,r11,16
	r27.u64 = ctx.r11.u32 & 0xFFFF;
loc_8267DE38:
	// lwz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267dd78
	if (!ctx.cr6.eq) goto loc_8267DD78;
loc_8267DE44:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8267de5c
	if (!ctx.cr6.eq) goto loc_8267DE5C;
loc_8267DE4C:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82676d18
	ctx.lr = 0x8267DE54;
	sub_82676D18(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x8267e138
	goto loc_8267E138;
loc_8267DE5C:
	// ld r11,1056(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1056);
	// clrlwi. r27,r27,16
	r27.u64 = r27.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r30,r31,1232
	r30.s64 = r31.s64 + 1232;
	// rotlwi r25,r11,0
	r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rldicr r29,r11,5,58
	r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 5) & 0xFFFFFFFFFFFFFFE0;
	// mr r28,r23
	r28.u64 = r23.u64;
	// beq 0x8267ded8
	if (ctx.cr0.eq) goto loc_8267DED8;
loc_8267DE78:
	// lhz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 14);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267de98
	if (ctx.cr0.eq) goto loc_8267DE98;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267c6a8
	ctx.lr = 0x8267DE98;
	sub_8267C6A8(ctx, base);
loc_8267DE98:
	// cntlzw r11,r24
	ctx.r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82688120
	ctx.lr = 0x8267DEC4;
	sub_82688120(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x8267de78
	if (ctx.cr6.lt) goto loc_8267DE78;
loc_8267DED8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi. r27,r26,16
	r27.u64 = r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r30,r31,1744
	r30.s64 = r31.s64 + 1744;
	// mr r28,r23
	r28.u64 = r23.u64;
	// clrlwi r26,r11,16
	r26.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x8267df54
	if (ctx.cr0.eq) goto loc_8267DF54;
loc_8267DEF4:
	// lhz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 14);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267df14
	if (ctx.cr0.eq) goto loc_8267DF14;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267c6a8
	ctx.lr = 0x8267DF14;
	sub_8267C6A8(ctx, base);
loc_8267DF14:
	// cntlzw r11,r24
	ctx.r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82688120
	ctx.lr = 0x8267DF40;
	sub_82688120(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x8267def4
	if (ctx.cr6.lt) goto loc_8267DEF4;
loc_8267DF54:
	// lhz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r11,1096(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1096);
	// ori r30,r9,65535
	r30.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267dfb8
	if (ctx.cr6.eq) goto loc_8267DFB8;
	// ld r11,808(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 808);
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// lwz r9,420(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 420);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq 0x8267dfa4
	if (ctx.cr0.eq) goto loc_8267DFA4;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8267dfac
	if (ctx.cr6.lt) goto loc_8267DFAC;
loc_8267DFA4:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x826829f0
	ctx.lr = 0x8267DFAC;
	sub_826829F0(ctx, base);
loc_8267DFAC:
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// sth r11,1096(r31)
	REX_STORE_U16(r31.u32 + 1096, ctx.r11.u16);
	// b 0x8267dfdc
	goto loc_8267DFDC;
loc_8267DFB8:
	// lhz r10,1084(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1084);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r10,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x8267dfdc
	if (ctx.cr6.lt) goto loc_8267DFDC;
	// sth r10,1096(r31)
	REX_STORE_U16(r31.u32 + 1096, ctx.r10.u16);
loc_8267DFDC:
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// bl 0x82681be0
	ctx.lr = 0x8267E008;
	sub_82681BE0(ctx, base);
	// lhz r11,38(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267e034
	if (!ctx.cr0.eq) goto loc_8267E034;
	// lhz r11,36(r20)
	ctx.r11.u64 = REX_LOAD_U16(r20.u32 + 36);
	// subf r11,r11,r17
	ctx.r11.u64 = r17.u64 - ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// ble cr6,0x8267e034
	if (!ctx.cr6.gt) goto loc_8267E034;
	// addis r11,r21,1
	ctx.r11.s64 = r21.s64 + 65536;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// sth r11,36(r20)
	REX_STORE_U16(r20.u32 + 36, ctx.r11.u16);
loc_8267E034:
	// ld r11,1056(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 1056);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r11,1056(r31)
	REX_STORE_U64(r31.u32 + 1056, ctx.r11.u64);
	// bne cr6,0x8267e05c
	if (!ctx.cr6.eq) goto loc_8267E05C;
	// lhz r11,330(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267e0bc
	if (ctx.cr0.eq) goto loc_8267E0BC;
loc_8267E05C:
	// addi r9,r31,1024
	ctx.r9.s64 = r31.s64 + 1024;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,1028(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1028);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,1028(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1028);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,1028(r31)
	REX_STORE_U32(r31.u32 + 1028, ctx.r11.u32);
loc_8267E084:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8267e084
	if (!ctx.cr0.eq) goto loc_8267E084;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r10,336(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 336);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// sth r10,336(r11)
	REX_STORE_U16(ctx.r11.u32 + 336, ctx.r10.u16);
	// lhz r11,1076(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1076);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// sth r11,1076(r31)
	REX_STORE_U16(r31.u32 + 1076, ctx.r11.u16);
loc_8267E0BC:
	// lhz r11,1074(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1074);
	// clrlwi r10,r16,16
	ctx.r10.u64 = r16.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// blt cr6,0x8267e0d8
	if (ctx.cr6.lt) goto loc_8267E0D8;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// b 0x8267e0dc
	goto loc_8267E0DC;
loc_8267E0D8:
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
loc_8267E0DC:
	// stw r11,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r11.u32);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r11.u8);
	// bl 0x82682a90
	ctx.lr = 0x8267E0F4;
	sub_82682A90(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8267e10c
	if (ctx.cr6.eq) goto loc_8267E10C;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267aa70
	ctx.lr = 0x8267E10C;
	sub_8267AA70(ctx, base);
loc_8267E10C:
	// lwz r11,1192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1192);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,1208(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 1208);
	// stw r11,1192(r31)
	REX_STORE_U32(r31.u32 + 1192, ctx.r11.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,1208(r31)
	REX_STORE_U64(r31.u32 + 1208, ctx.r11.u64);
loc_8267E138:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_826A10D8) {
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
	ctx.lr = 0x826A10E0;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r7,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826a1144
	if (ctx.cr6.eq) goto loc_826A1144;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826a1144
	if (ctx.cr6.eq) goto loc_826A1144;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x826a1150
	if (!ctx.cr6.eq) goto loc_826A1150;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x826a1134
	if (ctx.cr6.eq) goto loc_826A1134;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826A1134;
	sub_826A2E60(ctx, base);
loc_826A1134:
	// bl 0x826a33d0
	ctx.lr = 0x826A1138;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A1144;
	sub_8269CB20(ctx, base);
loc_826A1144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A1148:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1d00
	return;
loc_826A1150:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269e120
	ctx.lr = 0x826A1158;
	sub_8269E120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a0e40
	ctx.lr = 0x826A1174;
	sub_826A0E40(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x826a11ac
	ctx.lr = 0x826A1184;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826A11AC(ctx, base);
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// b 0x826a1148
	goto loc_826A1148;
}

DEFINE_REX_FUNC(sub_826A3408) {
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
	// bl 0x826a3990
	ctx.lr = 0x826A3418;
	sub_826A3990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826a342c
	if (!ctx.cr0.eq) goto loc_826A342C;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,26348
	ctx.r3.s64 = ctx.r11.s64 + 26348;
	// b 0x826a3430
	goto loc_826A3430;
loc_826A342C:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
loc_826A3430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_83) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AB098) {
	REX_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// addi r11,r11,-1022
	ctx.r11.s64 = ctx.r11.s64 + -1022;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AC0CC) {
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
	// b 0x826ac104
	goto loc_826AC104;
loc_826AC104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b03f0
	ctx.lr = 0x826AC10C;
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

DEFINE_REX_FUNC(sub_826AE494) {
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
	// bl 0x826ae248
	ctx.lr = 0x826AE4A4;
	sub_826AE248(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AF420) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,27400(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 27400);
	// beq 0x826af458
	if (ctx.cr0.eq) goto loc_826AF458;
	// lwz r10,188(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
loc_826AF444:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x826af458
	if (ctx.cr6.eq) goto loc_826AF458;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826af444
	if (!ctx.cr0.eq) goto loc_826AF444;
loc_826AF458:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x826af480
	goto loc_826AF480;
loc_826AF46C:
	// cmpwi cr6,r10,101
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 101, ctx.xer);
	// beq cr6,0x826af488
	if (ctx.cr6.eq) goto loc_826AF488;
	// cmpwi cr6,r10,69
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 69, ctx.xer);
	// beq cr6,0x826af488
	if (ctx.cr6.eq) goto loc_826AF488;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_826AF480:
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826af46c
	if (!ctx.cr0.eq) goto loc_826AF46C;
loc_826AF488:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_826AF48C:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// beq cr6,0x826af48c
	if (ctx.cr6.eq) goto loc_826AF48C;
	// lwz r8,188(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 188);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826af4b8
	if (!ctx.cr6.eq) goto loc_826AF4B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_826AF4B8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_826AF4BC:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bne 0x826af4bc
	if (!ctx.cr0.eq) goto loc_826AF4BC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B5860) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b5898
	if (ctx.cr6.eq) goto loc_826B5898;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B5890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
loc_826B5898:
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

DEFINE_REX_FUNC(sub_826B79D0) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r8,44(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B7A08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B9B38) {
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
	ctx.lr = 0x826B9B40;
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9b78
	if (ctx.cr6.eq) goto loc_826B9B78;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
loc_826B9B78:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9b98
	if (ctx.cr6.eq) goto loc_826B9B98;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9B94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
loc_826B9B98:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9bb8
	if (ctx.cr6.eq) goto loc_826B9BB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9BB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
loc_826B9BB8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826b9bd8
	if (ctx.cr6.eq) goto loc_826B9BD8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9BD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
loc_826B9BD8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826b9bf8
	if (ctx.cr6.eq) goto loc_826B9BF8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9BF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,48(r31)
	REX_STORE_U32(r31.u32 + 48, r28.u32);
loc_826B9BF8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826b9c18
	if (ctx.cr6.eq) goto loc_826B9C18;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9C14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,52(r31)
	REX_STORE_U32(r31.u32 + 52, r27.u32);
loc_826B9C18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826C17A0) {
	REX_FUNC_PROLOGUE();
	// stw r4,444(r3)
	REX_STORE_U32(ctx.r3.u32 + 444, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1808) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1A48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C2550) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C2574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,288(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C258C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,292(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 292);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C25A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,276(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C25BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,280(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C25D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,196(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 196);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826C25E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,200(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 200);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x826C25FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,204(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C2610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,208(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 208);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C2624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826C2638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_826C91E0) {
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
	ctx.lr = 0x826C91E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x826c920c
	if (!ctx.cr6.eq) goto loc_826C920C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826C920C:
	// addi r24,r4,-24
	r24.s64 = ctx.r4.s64 + -24;
	// cmplwi cr6,r24,80
	ctx.cr6.compare<uint32_t>(r24.u32, 80, ctx.xer);
	// bge cr6,0x826c9224
	if (!ctx.cr6.lt) goto loc_826C9224;
loc_826C9218:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826C9224:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U64(r25.u32 + 0);
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C9238;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,80
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 80, ctx.xer);
	// bne cr6,0x826c9218
	if (!ctx.cr6.eq) goto loc_826C9218;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,7(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r4,6(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r3,3(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r10,r8
	r27.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbz r8,7(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r28,2(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,6(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// add r26,r10,r9
	r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r31,1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,5(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r29,r10,8
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rotlwi r3,r8,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r9,r29,r28
	ctx.r9.u64 = r29.u64 + r28.u64;
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// rlwinm r3,r9,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r29,r3,r31
	r29.u64 = ctx.r3.u64 + r31.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,3(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r30,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r7,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r29,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826c9434
	if (!ctx.cr6.eq) goto loc_826C9434;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x826c93cc
	if (!ctx.cr6.eq) goto loc_826C93CC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826c9434
	if (ctx.cr6.eq) goto loc_826C9434;
loc_826C93CC:
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stw r11,20(r25)
	REX_STORE_U32(r25.u32 + 20, ctx.r11.u32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// ld r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U64(r25.u32 + 0);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r7,10000
	ctx.r7.s64 = 10000;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f0,30728(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 30728);
	// clrldi r11,r24,32
	ctx.r11.u64 = r24.u64 & 0xFFFFFFFF;
	// stw r27,28(r25)
	REX_STORE_U32(r25.u32 + 28, r27.u32);
	// divwu r10,r4,r7
	ctx.r10.u64 = uint32_t(ctx.r7.u32 ? ctx.r4.u32 / ctx.r7.u32 : 0);
	// stw r31,36(r25)
	REX_STORE_U32(r25.u32 + 36, r31.u32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,56(r25)
	REX_STORE_U32(r25.u32 + 56, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r6,0(r25)
	REX_STORE_U64(r25.u32 + 0, ctx.r6.u64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fctidz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,32(r25)
	REX_STORE_U32(r25.u32 + 32, ctx.r5.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826C9434:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826DEB30) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826deb98
	if (ctx.cr6.eq) goto loc_826DEB98;
loc_826DEB50:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bgt cr6,0x826deb78
	if (ctx.cr6.gt) goto loc_826DEB78;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x826deb8c
	if (ctx.cr6.lt) goto loc_826DEB8C;
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// blt cr6,0x826deb98
	if (ctx.cr6.lt) goto loc_826DEB98;
loc_826DEB78:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826deb50
	if (!ctx.cr6.eq) goto loc_826DEB50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826DEB8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_826DEB98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826DFF68) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826df8d0
	ctx.lr = 0x826DFF88;
	sub_826DF8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dffd0
	if (ctx.cr6.lt) goto loc_826DFFD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826dfb98
	ctx.lr = 0x826DFF98;
	sub_826DFB98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dffd0
	if (ctx.cr6.lt) goto loc_826DFFD0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x826c68d8
	ctx.lr = 0x826DFFB4;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dffd0
	if (ctx.cr6.lt) goto loc_826DFFD0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x826c68d8
	ctx.lr = 0x826DFFD0;
	sub_826C68D8(ctx, base);
loc_826DFFD0:
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

DEFINE_REX_FUNC(sub_826E22D0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stb r3,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E37D0) {
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
	ctx.lr = 0x826E37D8;
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
	// ble cr6,0x826e38c0
	if (!ctx.cr6.gt) goto loc_826E38C0;
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
loc_826E3838:
	// lwz r11,252(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 252);
	// slw r10,r27,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// divw r31,r11,r10
	r31.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// andc r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmadds f1,f11,f31,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, f30.f64)));
	// bl 0x826a3cb0
	ctx.lr = 0x826E3878;
	sub_826A3CB0(ctx, base);
	// fctiwz f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x826e3890
	if (!ctx.cr6.lt) goto loc_826E3890;
	// li r11,4
	ctx.r11.s64 = 4;
loc_826E3890:
	// srawi r10,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r10.s64 = r31.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e38a4
	if (ctx.cr6.lt) goto loc_826E38A4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826E38A4:
	// lwz r10,352(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 352);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r11,r28,r10
	REX_STORE_U32(r28.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r9,244(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 244);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826e3838
	if (ctx.cr6.lt) goto loc_826E3838;
loc_826E38C0:
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

DEFINE_REX_FUNC(sub_826F1398) {
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
	ctx.lr = 0x826F13A0;
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
	// bge cr6,0x826f159c
	if (!ctx.cr6.lt) goto loc_826F159C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r21,3
	r21.s64 = 3;
	// addi r22,r11,15304
	r22.s64 = ctx.r11.s64 + 15304;
	// addi r24,r10,16904
	r24.s64 = ctx.r10.s64 + 16904;
	// addi r23,r9,16664
	r23.s64 = ctx.r9.s64 + 16664;
loc_826F13E8:
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
	// beq cr6,0x826f1410
	if (ctx.cr6.eq) goto loc_826F1410;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826f1454
	if (ctx.cr6.eq) goto loc_826F1454;
	// b 0x826f1518
	goto loc_826F1518;
loc_826F1410:
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
	ctx.lr = 0x826F142C;
	sub_82641440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f159c
	if (ctx.cr6.lt) goto loc_826F159C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82638ef0
	ctx.lr = 0x826F1440;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f159c
	if (ctx.cr6.lt) goto loc_826F159C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826f14a4
	if (!ctx.cr6.eq) goto loc_826F14A4;
loc_826F1454:
	// stw r21,124(r29)
	REX_STORE_U32(r29.u32 + 124, r21.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826F1468;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f159c
	if (ctx.cr6.lt) goto loc_826F159C;
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
	// b 0x826f1518
	goto loc_826F1518;
loc_826F14A4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826f14cc
	if (!ctx.cr6.eq) goto loc_826F14CC;
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
	// b 0x826f1518
	goto loc_826F1518;
loc_826F14CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82638ef0
	ctx.lr = 0x826F14D8;
	sub_82638EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f159c
	if (ctx.cr6.lt) goto loc_826F159C;
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
loc_826F1518:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f159c
	if (ctx.cr6.lt) goto loc_826F159C;
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
	// bge cr6,0x826f159c
	if (!ctx.cr6.lt) goto loc_826F159C;
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
	// blt cr6,0x826f13e8
	if (ctx.cr6.lt) goto loc_826F13E8;
loc_826F159C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82701BF0) {
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
	ctx.lr = 0x82701BF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,1
	r28.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,22288(r3)
	REX_STORE_U32(ctx.r3.u32 + 22288, r28.u32);
	// bl 0x8271a6a8
	ctx.lr = 0x82701C0C;
	sub_8271A6A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,156(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r29,160(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x827005b0
	ctx.lr = 0x82701C24;
	sub_827005B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82701ce4
	if (!ctx.cr6.eq) goto loc_82701CE4;
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r11,22280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22280);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82701ce0
	if (ctx.cr6.gt) goto loc_82701CE0;
	// lwz r5,160(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r11,22284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22284);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82701ce0
	if (ctx.cr6.gt) goto loc_82701CE0;
	// li r27,0
	r27.s64 = 0;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// bne cr6,0x82701c68
	if (!ctx.cr6.eq) goto loc_82701C68;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r29.s32, ctx.xer);
	// bne cr6,0x82701c68
	if (!ctx.cr6.eq) goto loc_82701C68;
	// stw r27,22112(r31)
	REX_STORE_U32(r31.u32 + 22112, r27.u32);
	// b 0x82701c80
	goto loc_82701C80;
loc_82701C68:
	// addis r10,r31,2
	ctx.r10.s64 = r31.s64 + 131072;
	// stw r28,22112(r31)
	REX_STORE_U32(r31.u32 + 22112, r28.u32);
	// addi r10,r10,-25740
	ctx.r10.s64 = ctx.r10.s64 + -25740;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82701C80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271e178
	ctx.lr = 0x82701C88;
	sub_8271E178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82701cec
	if (!ctx.cr6.eq) goto loc_82701CEC;
	// lwz r11,22216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22216);
	// stw r28,22288(r31)
	REX_STORE_U32(r31.u32 + 22288, r28.u32);
	// stw r28,3696(r31)
	REX_STORE_U32(r31.u32 + 3696, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82701cc4
	if (!ctx.cr6.gt) goto loc_82701CC4;
	// lwz r10,22208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22208);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r27,22216(r31)
	REX_STORE_U32(r31.u32 + 22216, r27.u32);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// stw r27,22208(r31)
	REX_STORE_U32(r31.u32 + 22208, r27.u32);
	// stw r11,22212(r31)
	REX_STORE_U32(r31.u32 + 22212, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82701CC4:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r28,22212(r31)
	REX_STORE_U32(r31.u32 + 22212, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,22216(r31)
	REX_STORE_U32(r31.u32 + 22216, r27.u32);
	// stw r27,22208(r31)
	REX_STORE_U32(r31.u32 + 22208, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82701CE0:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82701CE4:
	// stw r29,160(r31)
	REX_STORE_U32(r31.u32 + 160, r29.u32);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
loc_82701CEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82712B98) {
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
	ctx.lr = 0x82712BA0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// lwz r17,312(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r16,316(r3)
	r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// li r20,1
	r20.s64 = 1;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r24,0(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r19,28(r10)
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r23,r11,1
	r23.s64 = ctx.r11.s64 + 1;
	// lwz r22,32(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r14,24(r10)
	r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r15,4(r10)
	r15.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// beq cr6,0x827133fc
	if (ctx.cr6.eq) goto loc_827133FC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r26,r11,32768
	r26.u64 = ctx.r11.u64 | 32768;
loc_82712C08:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82712cf8
	if (ctx.cr6.lt) goto loc_82712CF8;
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
	// bge cr6,0x82712cf0
	if (!ctx.cr6.lt) goto loc_82712CF0;
loc_82712C58:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82712c84
	if (ctx.cr6.lt) goto loc_82712C84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82712C74;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82712c58
	if (ctx.cr6.eq) goto loc_82712C58;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82712d30
	goto loc_82712D30;
loc_82712C84:
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
loc_82712CF0:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82712d30
	goto loc_82712D30;
loc_82712CF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82712D00;
	sub_82725F80(ctx, base);
loc_82712D00:
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
	ctx.lr = 0x82712D18;
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
	// blt cr6,0x82712d00
	if (ctx.cr6.lt) goto loc_82712D00;
loc_82712D30:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82713430
	if (!ctx.cr6.eq) goto loc_82713430;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(r31.s32, r15.s32, ctx.xer);
	// bgt cr6,0x82713430
	if (ctx.cr6.gt) goto loc_82713430;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// beq cr6,0x82712da8
	if (ctx.cr6.eq) goto loc_82712DA8;
	// subfc r11,r23,r31
	ctx.xer.ca = r31.u32 >= r23.u32;
	ctx.r11.u64 = r31.u64 - r23.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lbzx r28,r31,r22
	r28.u64 = REX_LOAD_U8(r31.u32 + r22.u32);
	// rldicr r7,r10,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subfze r25,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	r25.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82712d88
	if (!ctx.cr0.lt) goto loc_82712D88;
	// bl 0x82725e38
	ctx.lr = 0x82712D88;
	sub_82725E38(ctx, base);
loc_82712D88:
	// lbzx r11,r31,r19
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r19.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82712da0
	if (ctx.cr6.eq) goto loc_82712DA0;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// b 0x82713350
	goto loc_82713350;
loc_82712DA0:
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// b 0x82713350
	goto loc_82713350;
loc_82712DA8:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82712dc8
	if (!ctx.cr0.lt) goto loc_82712DC8;
	// bl 0x82725e38
	ctx.lr = 0x82712DC8;
	sub_82725E38(ctx, base);
loc_82712DC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82712f88
	if (!ctx.cr6.eq) goto loc_82712F88;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82713430
	if (!ctx.cr6.eq) goto loc_82713430;
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82712ecc
	if (ctx.cr6.lt) goto loc_82712ECC;
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
	// bge cr6,0x82712ec4
	if (!ctx.cr6.lt) goto loc_82712EC4;
loc_82712E2C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82712e58
	if (ctx.cr6.lt) goto loc_82712E58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82712E48;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82712e2c
	if (ctx.cr6.eq) goto loc_82712E2C;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82712f04
	goto loc_82712F04;
loc_82712E58:
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
loc_82712EC4:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82712f04
	goto loc_82712F04;
loc_82712ECC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82712ED4;
	sub_82725F80(ctx, base);
loc_82712ED4:
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
	ctx.lr = 0x82712EEC;
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
	// blt cr6,0x82712ed4
	if (ctx.cr6.lt) goto loc_82712ED4;
loc_82712F04:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82713430
	if (!ctx.cr6.eq) goto loc_82713430;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r15.s32, ctx.xer);
	// beq cr6,0x82713430
	if (ctx.cr6.eq) goto loc_82713430;
	// lbzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// lbzx r28,r11,r22
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// blt cr6,0x82712f44
	if (ctx.cr6.lt) goto loc_82712F44;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r25,1
	r25.s64 = 1;
	// b 0x82712f48
	goto loc_82712F48;
loc_82712F44:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82712F48:
	// lbzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// bge 0x82712f78
	if (!ctx.cr0.lt) goto loc_82712F78;
	// bl 0x82725e38
	ctx.lr = 0x82712F78;
	sub_82725E38(ctx, base);
loc_82712F78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82713350
	if (ctx.cr6.eq) goto loc_82713350;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82713350
	goto loc_82713350;
loc_82712F88:
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
	// bge 0x82712fb0
	if (!ctx.cr0.lt) goto loc_82712FB0;
	// bl 0x82725e38
	ctx.lr = 0x82712FB0;
	sub_82725E38(ctx, base);
loc_82712FB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82713170
	if (!ctx.cr6.eq) goto loc_82713170;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82713430
	if (!ctx.cr6.eq) goto loc_82713430;
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srd r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r29.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x827130b4
	if (ctx.cr6.lt) goto loc_827130B4;
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
	// bge cr6,0x827130ac
	if (!ctx.cr6.lt) goto loc_827130AC;
loc_82713014:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82713040
	if (ctx.cr6.lt) goto loc_82713040;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82713030;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82713014
	if (ctx.cr6.eq) goto loc_82713014;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827130ec
	goto loc_827130EC;
loc_82713040:
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
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
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
loc_827130AC:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827130ec
	goto loc_827130EC;
loc_827130B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x827130BC;
	sub_82725F80(ctx, base);
loc_827130BC:
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
	ctx.lr = 0x827130D4;
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
	// blt cr6,0x827130bc
	if (ctx.cr6.lt) goto loc_827130BC;
loc_827130EC:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82713430
	if (!ctx.cr6.eq) goto loc_82713430;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r15.s32, ctx.xer);
	// beq cr6,0x82713430
	if (ctx.cr6.eq) goto loc_82713430;
	// lbzx r10,r11,r19
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// lbzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// blt cr6,0x8271312c
	if (ctx.cr6.lt) goto loc_8271312C;
	// lbzx r10,r31,r14
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + r14.u32);
	// li r25,1
	r25.s64 = 1;
	// b 0x82713134
	goto loc_82713134;
loc_8271312C:
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
loc_82713134:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
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
	// bge 0x82713160
	if (!ctx.cr0.lt) goto loc_82713160;
	// bl 0x82725e38
	ctx.lr = 0x82713160;
	sub_82725E38(ctx, base);
loc_82713160:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82713350
	if (ctx.cr6.eq) goto loc_82713350;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82713350
	goto loc_82713350;
loc_82713170:
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
	// bge 0x82713198
	if (!ctx.cr0.lt) goto loc_82713198;
	// bl 0x82725e38
	ctx.lr = 0x82713198;
	sub_82725E38(ctx, base);
loc_82713198:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r25,r30
	r25.u64 = r30.u64;
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
	// bge cr6,0x82713210
	if (!ctx.cr6.lt) goto loc_82713210;
loc_827131B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82713210
	if (ctx.cr6.eq) goto loc_82713210;
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
	// bge 0x82713200
	if (!ctx.cr0.lt) goto loc_82713200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82713200;
	sub_82725E38(ctx, base);
loc_82713200:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827131b8
	if (ctx.cr6.gt) goto loc_827131B8;
loc_82713210:
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
	// bge 0x82713248
	if (!ctx.cr0.lt) goto loc_82713248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82713248;
	sub_82725E38(ctx, base);
loc_82713248:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r9,r11,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82713270
	if (!ctx.cr0.lt) goto loc_82713270;
	// bl 0x82725e38
	ctx.lr = 0x82713270;
	sub_82725E38(ctx, base);
loc_82713270:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,12
	r30.s64 = 12;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x827132e4
	if (!ctx.cr6.lt) goto loc_827132E4;
loc_8271328C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827132e4
	if (ctx.cr6.eq) goto loc_827132E4;
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
	// bge 0x827132d4
	if (!ctx.cr0.lt) goto loc_827132D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827132D4;
	sub_82725E38(ctx, base);
loc_827132D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8271328c
	if (ctx.cr6.gt) goto loc_8271328C;
loc_827132E4:
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
	// bge 0x8271331c
	if (!ctx.cr0.lt) goto loc_8271331C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8271331C;
	sub_82725E38(ctx, base);
loc_8271331C:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmpwi cr6,r30,2047
	ctx.cr6.compare<int32_t>(r30.s32, 2047, ctx.xer);
	// ble cr6,0x8271332c
	if (!ctx.cr6.gt) goto loc_8271332C;
	// addi r31,r30,-4096
	r31.s64 = r30.s64 + -4096;
loc_8271332C:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r9,r11,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82713350
	if (!ctx.cr0.lt) goto loc_82713350;
	// bl 0x82725e38
	ctx.lr = 0x82713350;
	sub_82725E38(ctx, base);
loc_82713350:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82713430
	if (!ctx.cr6.eq) goto loc_82713430;
	// add r9,r28,r20
	ctx.r9.u64 = r28.u64 + r20.u64;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// bge cr6,0x82713430
	if (!ctx.cr6.lt) goto loc_82713430;
	// lbzx r11,r9,r18
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r18.u32);
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82713394
	if (!ctx.cr6.eq) goto loc_82713394;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r21.u32);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// sthx r8,r11,r21
	REX_STORE_U16(ctx.r11.u32 + r21.u32, ctx.r8.u16);
	// b 0x827133f0
	goto loc_827133F0;
loc_82713394:
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827133c0
	if (!ctx.cr6.eq) goto loc_827133C0;
	// lbzx r11,r9,r18
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r18.u32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r21.u32);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// sthx r7,r11,r21
	REX_STORE_U16(ctx.r11.u32 + r21.u32, ctx.r7.u16);
	// b 0x827133f0
	goto loc_827133F0;
loc_827133C0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x827133e0
	if (!ctx.cr6.gt) goto loc_827133E0;
	// lwz r8,1760(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// mullw r10,r31,r17
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r17.s32);
	// add r6,r10,r16
	ctx.r6.u64 = ctx.r10.u64 + r16.u64;
	// stwx r6,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// b 0x827133f0
	goto loc_827133F0;
loc_827133E0:
	// lwz r10,1760(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// mullw r8,r31,r17
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(r17.s32);
	// subf r6,r16,r8
	ctx.r6.u64 = ctx.r8.u64 - r16.u64;
	// stwx r6,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
loc_827133F0:
	// addi r20,r9,1
	r20.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82712c08
	if (ctx.cr6.eq) goto loc_82712C08;
loc_827133FC:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r8,r21,2
	ctx.r8.s64 = r21.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82713414:
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271343c
	if (!ctx.cr6.eq) goto loc_8271343C;
	// lwz r11,1760(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// b 0x82713460
	goto loc_82713460;
loc_82713430:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_8271343C:
	// lwz r6,1760(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// ble cr6,0x82713454
	if (!ctx.cr6.gt) goto loc_82713454;
	// mullw r11,r11,r17
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// add r5,r11,r16
	ctx.r5.u64 = ctx.r11.u64 + r16.u64;
	// stwx r5,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x82713460
	goto loc_82713460;
loc_82713454:
	// mullw r5,r11,r17
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// subf r4,r16,r5
	ctx.r4.u64 = ctx.r5.u64 - r16.u64;
	// stwx r4,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
loc_82713460:
	// lhz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271347c
	if (!ctx.cr6.eq) goto loc_8271347C;
	// lwz r11,1760(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// stwx r7,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// b 0x827134a0
	goto loc_827134A0;
loc_8271347C:
	// lwz r6,1760(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// ble cr6,0x82713494
	if (!ctx.cr6.gt) goto loc_82713494;
	// mullw r11,r11,r17
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// add r5,r11,r16
	ctx.r5.u64 = ctx.r11.u64 + r16.u64;
	// stwx r5,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x827134a0
	goto loc_827134A0;
loc_82713494:
	// mullw r5,r11,r17
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(r17.s32);
	// subf r4,r16,r5
	ctx.r4.u64 = ctx.r5.u64 - r16.u64;
	// stwx r4,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r4.u32);
loc_827134A0:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bdnz 0x82713414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82713414;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8274EF30) {
	REX_FUNC_PROLOGUE();
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// clrlwi r8,r5,31
	ctx.r8.u64 = ctx.r5.u32 & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8274ef78
	if (!ctx.cr6.eq) goto loc_8274EF78;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8274ef94
	if (ctx.cr6.eq) goto loc_8274EF94;
	// srawi r8,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 1;
	// lwz r7,22192(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 22192);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8274ef94
	if (!ctx.cr6.eq) goto loc_8274EF94;
loc_8274EF78:
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r8,1772(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1772);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// bne cr6,0x8274ef94
	if (!ctx.cr6.eq) goto loc_8274EF94;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8274EF94:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1772(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1772);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82756B90) {
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
	ctx.lr = 0x82756B98;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3756(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3756);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82756bb8
	if (ctx.cr6.eq) goto loc_82756BB8;
	// lwz r26,3780(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// b 0x82756bc4
	goto loc_82756BC4;
loc_82756BB8:
	// lwz r10,3744(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3744);
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82756BC4:
	// lwz r9,3760(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3760);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82756bd4
	if (!ctx.cr6.eq) goto loc_82756BD4;
	// lwz r9,3748(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3748);
loc_82756BD4:
	// lwz r11,3764(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3764);
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x82756bec
	if (!ctx.cr6.eq) goto loc_82756BEC;
	// lwz r11,3752(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3752);
loc_82756BEC:
	// lwz r9,3784(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3784);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82756c04
	if (ctx.cr6.eq) goto loc_82756C04;
	// lwz r24,3796(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 3796);
	// b 0x82756c10
	goto loc_82756C10;
loc_82756C04:
	// lwz r9,3744(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3744);
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// add r24,r9,r11
	r24.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82756C10:
	// lwz r9,3788(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3788);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82756c20
	if (!ctx.cr6.eq) goto loc_82756C20;
	// lwz r9,3748(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3748);
loc_82756C20:
	// lwz r11,3792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3792);
	// add r25,r10,r9
	r25.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82756c34
	if (!ctx.cr6.eq) goto loc_82756C34;
	// lwz r11,3752(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3752);
loc_82756C34:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x827564d8
	ctx.lr = 0x82756C44;
	sub_827564D8(ctx, base);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r8,364(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 364);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r30,2928
	ctx.r7.s64 = r30.s64 + 2928;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r30,2940
	ctx.r5.s64 = r30.s64 + 2940;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// lwz r8,368(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 368);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,372(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// mulli r9,r9,504
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(504));
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// lwz r6,360(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 360);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// lwz r10,252(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 252);
	// lwz r4,248(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 248);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r10,255
	ctx.r3.s64 = ctx.r10.s64 + 255;
	// stb r3,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r3.u8);
	// lwz r9,348(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 348);
	// stb r9,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r9.u8);
	// lwz r6,344(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 344);
	// stb r6,26(r31)
	REX_STORE_U8(r31.u32 + 26, ctx.r6.u8);
	// lwz r3,2400(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 2400);
	// stw r3,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r3.u32);
	// lwz r10,280(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 280);
	// stb r10,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r10.u8);
	// lwz r8,392(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 392);
	// stb r8,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r8.u8);
	// lwz r4,328(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 328);
	// stb r4,29(r31)
	REX_STORE_U8(r31.u32 + 29, ctx.r4.u8);
	// lwz r10,3984(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3984);
	// addi r9,r10,-3
	ctx.r9.s64 = ctx.r10.s64 + -3;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stb r9,30(r31)
	REX_STORE_U8(r31.u32 + 30, ctx.r9.u8);
	// lwz r8,2164(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 2164);
	// stw r8,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r8.u32);
	// lwz r6,2540(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 2540);
	// stw r6,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r6.u32);
	// lwz r4,21192(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 21192);
	// stw r4,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r4.u32);
	// lwz r3,21212(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 21212);
	// stw r3,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r3.u32);
	// sth r11,46(r31)
	REX_STORE_U16(r31.u32 + 46, ctx.r11.u16);
	// sth r11,44(r31)
	REX_STORE_U16(r31.u32 + 44, ctx.r11.u16);
	// lwz r10,416(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 416);
	// sth r10,62(r31)
	REX_STORE_U16(r31.u32 + 62, ctx.r10.u16);
	// lwz r8,420(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 420);
	// sth r8,64(r31)
	REX_STORE_U16(r31.u32 + 64, ctx.r8.u16);
	// lwz r4,424(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 424);
	// sth r4,66(r31)
	REX_STORE_U16(r31.u32 + 66, ctx.r4.u16);
	// lwz r10,428(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 428);
	// sth r10,68(r31)
	REX_STORE_U16(r31.u32 + 68, ctx.r10.u16);
	// lwz r8,408(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 408);
	// sth r8,70(r31)
	REX_STORE_U16(r31.u32 + 70, ctx.r8.u16);
	// lwz r4,412(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 412);
	// sth r4,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r4.u16);
	// lwz r10,14804(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 14804);
	// stb r10,32(r31)
	REX_STORE_U8(r31.u32 + 32, ctx.r10.u8);
	// lwz r8,1792(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1792);
	// stb r8,31(r31)
	REX_STORE_U8(r31.u32 + 31, ctx.r8.u8);
	// lwz r4,336(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 336);
	// stb r4,34(r31)
	REX_STORE_U8(r31.u32 + 34, ctx.r4.u8);
	// lwz r10,6576(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 6576);
	// stw r10,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r10.u32);
	// lwz r9,14784(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 14784);
	// stw r9,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// stw r5,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r5.u32);
	// stw r7,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r7.u32);
	// lwz r8,2904(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 2904);
	// stw r8,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r8.u32);
	// lwz r7,2908(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 2908);
	// stw r7,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r7.u32);
	// lwz r6,2912(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 2912);
	// stw r6,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r6.u32);
	// lwz r5,2916(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 2916);
	// stw r5,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r5.u32);
	// lwz r4,2920(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 2920);
	// stw r4,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r4.u32);
	// lwz r3,2924(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 2924);
	// stw r3,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r3.u32);
	// lwz r10,1940(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1940);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r9,2992(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 2992);
	// stb r9,33(r31)
	REX_STORE_U8(r31.u32 + 33, ctx.r9.u8);
	// lwz r7,1832(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1832);
	// stw r7,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r7.u32);
	// lwz r6,456(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 456);
	// stb r6,48(r31)
	REX_STORE_U8(r31.u32 + 48, ctx.r6.u8);
	// stb r11,49(r31)
	REX_STORE_U8(r31.u32 + 49, ctx.r11.u8);
	// lwz r4,3928(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3928);
	// stb r4,35(r31)
	REX_STORE_U8(r31.u32 + 35, ctx.r4.u8);
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// mulli r9,r10,-6
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(-6));
	// sth r9,368(r31)
	REX_STORE_U16(r31.u32 + 368, ctx.r9.u16);
	// lwz r7,136(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r6,370(r31)
	REX_STORE_U16(r31.u32 + 370, ctx.r6.u16);
	// lwz r4,136(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r3,372(r31)
	REX_STORE_U16(r31.u32 + 372, ctx.r3.u16);
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r8,374(r31)
	REX_STORE_U16(r31.u32 + 374, ctx.r8.u16);
	// lwz r6,136(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 136);
	// neg r5,r6
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// sth r5,364(r31)
	REX_STORE_U16(r31.u32 + 364, ctx.r5.u16);
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 136);
	// sth r3,366(r31)
	REX_STORE_U16(r31.u32 + 366, ctx.r3.u16);
	// stw r28,484(r31)
	REX_STORE_U32(r31.u32 + 484, r28.u32);
	// stw r26,464(r31)
	REX_STORE_U32(r31.u32 + 464, r26.u32);
	// stw r24,468(r31)
	REX_STORE_U32(r31.u32 + 468, r24.u32);
	// stw r27,472(r31)
	REX_STORE_U32(r31.u32 + 472, r27.u32);
	// stw r25,476(r31)
	REX_STORE_U32(r31.u32 + 476, r25.u32);
	// stw r29,480(r31)
	REX_STORE_U32(r31.u32 + 480, r29.u32);
	// lwz r9,22364(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 22364);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82756f24
	if (!ctx.cr6.eq) goto loc_82756F24;
	// lwz r10,15932(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15932);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82756ebc
	if (ctx.cr6.eq) goto loc_82756EBC;
	// lwz r10,15936(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15936);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82756ebc
	if (ctx.cr6.eq) goto loc_82756EBC;
	// lwz r10,15940(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15940);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82756ebc
	if (!ctx.cr6.eq) goto loc_82756EBC;
	// lwz r10,15944(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15944);
	// lwz r9,220(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 220);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r9.u32);
	// lwz r8,15944(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 15944);
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r7.u32);
	// lwz r6,15944(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 15944);
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r5.u32);
loc_82756EBC:
	// lwz r9,3744(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3744);
	// lwz r10,220(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 220);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r10.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r10.u32);
	// lwz r9,204(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,560(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 560);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r7,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r7.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r5.u32);
	// lwz r9,3748(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3748);
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r4.u32);
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r9,3752(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3752);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,580(r31)
	REX_STORE_U32(r31.u32 + 580, ctx.r3.u32);
	// b 0x82757314
	goto loc_82757314;
loc_82756F24:
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r10,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r7.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r5.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r3.u32);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + r27.u64;
	// stw r7,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r7.u32);
	// lwz r6,208(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// lwz r4,20912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + r29.u64;
	// stw r3,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r3.u32);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r9,204(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 204);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r7.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r5.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r3.u32);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + r25.u64;
	// stw r7,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r7.u32);
	// lwz r6,208(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// lwz r4,20912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + r28.u64;
	// stw r3,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r3.u32);
	// lwz r10,21928(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21928);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827570b0
	if (!ctx.cr6.eq) goto loc_827570B0;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r10,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r7.u32);
	// lwz r8,488(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r5.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r3.u32);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + r27.u64;
	// stw r6,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r6.u32);
	// lwz r4,20912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r5,208(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
	// mullw r10,r10,r3
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + r29.u64;
	// stw r9,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r9.u32);
	// b 0x827571f0
	goto loc_827571F0;
loc_827570B0:
	// lwz r10,284(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82757148
	if (!ctx.cr6.eq) goto loc_82757148;
	// lwz r10,20952(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20952);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82757148
	if (ctx.cr6.eq) goto loc_82757148;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r10,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r10.u32);
	// lwz r8,488(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 488);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r9.u32);
	// lwz r7,204(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r6.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r4.u32);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r3,20912(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// xori r8,r3,1
	ctx.r8.u64 = ctx.r3.u64 ^ 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + r27.u64;
	// stw r7,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r7.u32);
	// lwz r4,208(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stw r10,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r10.u32);
	// b 0x827571f0
	goto loc_827571F0;
loc_82757148:
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r10,3744(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3744);
	// lwz r8,220(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 220);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// stw r10,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r6,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r6.u32);
	// lwz r8,488(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lwz r5,204(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r4.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// lwz r10,3748(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3748);
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 224);
	// mullw r8,r7,r6
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r5.u32);
	// lwz r8,3752(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 3752);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r4,20912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// xori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 ^ 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r9,r3
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r8.u32);
loc_827571F0:
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r10,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r7.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r5.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r3.u32);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r6,r10,r25
	ctx.r6.u64 = ctx.r10.u64 + r25.u64;
	// stw r6,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r6.u32);
	// lwz r5,20912(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r3,208(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + r28.u64;
	// stw r9,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r9.u32);
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r8,204(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 204);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// mullw r10,r7,r6
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// lwz r8,3744(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 3744);
	// lwz r9,220(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 220);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// stw r10,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r5,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r5.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,204(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r3.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r9.u32);
	// lwz r8,3748(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 3748);
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r7,208(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r4.u32);
	// lwz r8,3752(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 3752);
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r3,20912(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r7,r3
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,580(r31)
	REX_STORE_U32(r31.u32 + 580, ctx.r6.u32);
loc_82757314:
	// lwz r10,21124(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21124);
	// stw r10,1404(r31)
	REX_STORE_U32(r31.u32 + 1404, ctx.r10.u32);
	// lwz r10,3984(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3984);
	// addi r9,r10,-3
	ctx.r9.s64 = ctx.r10.s64 + -3;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r7,2316(r31)
	REX_STORE_U32(r31.u32 + 2316, ctx.r7.u32);
	// lwz r6,14836(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 14836);
	// stw r6,1824(r31)
	REX_STORE_U32(r31.u32 + 1824, ctx.r6.u32);
	// lwz r5,14812(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 14812);
	// stw r5,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r5.u32);
	// lwz r4,14816(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 14816);
	// stw r4,1832(r31)
	REX_STORE_U32(r31.u32 + 1832, ctx.r4.u32);
	// lwz r3,14808(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 14808);
	// lwz r10,3416(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3416);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// stw r9,1788(r31)
	REX_STORE_U32(r31.u32 + 1788, ctx.r9.u32);
	// lwz r8,15308(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 15308);
	// stw r8,1836(r31)
	REX_STORE_U32(r31.u32 + 1836, ctx.r8.u32);
	// lwz r7,15312(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 15312);
	// stw r7,1840(r31)
	REX_STORE_U32(r31.u32 + 1840, ctx.r7.u32);
	// lwz r6,15316(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 15316);
	// stw r6,1844(r31)
	REX_STORE_U32(r31.u32 + 1844, ctx.r6.u32);
	// lwz r5,15320(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 15320);
	// stw r5,1848(r31)
	REX_STORE_U32(r31.u32 + 1848, ctx.r5.u32);
	// lwz r4,21924(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 21924);
	// stw r4,1396(r31)
	REX_STORE_U32(r31.u32 + 1396, ctx.r4.u32);
	// lwz r3,21920(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 21920);
	// stw r3,1400(r31)
	REX_STORE_U32(r31.u32 + 1400, ctx.r3.u32);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// stw r10,1368(r31)
	REX_STORE_U32(r31.u32 + 1368, ctx.r10.u32);
	// lwz r9,21928(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 21928);
	// stw r9,1372(r31)
	REX_STORE_U32(r31.u32 + 1372, ctx.r9.u32);
	// lwz r8,3988(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 3988);
	// stw r8,1752(r31)
	REX_STORE_U32(r31.u32 + 1752, ctx.r8.u32);
	// lwz r7,20952(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20952);
	// stw r7,1756(r31)
	REX_STORE_U32(r31.u32 + 1756, ctx.r7.u32);
	// lwz r6,20956(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20956);
	// stw r6,1760(r31)
	REX_STORE_U32(r31.u32 + 1760, ctx.r6.u32);
	// lwz r5,20960(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20960);
	// stw r5,1764(r31)
	REX_STORE_U32(r31.u32 + 1764, ctx.r5.u32);
	// lwz r4,20964(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20964);
	// stw r4,1768(r31)
	REX_STORE_U32(r31.u32 + 1768, ctx.r4.u32);
	// lwz r3,20968(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20968);
	// stw r3,1772(r31)
	REX_STORE_U32(r31.u32 + 1772, ctx.r3.u32);
	// lwz r10,20972(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20972);
	// stw r10,1776(r31)
	REX_STORE_U32(r31.u32 + 1776, ctx.r10.u32);
	// lwz r9,22364(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 22364);
	// stw r9,1780(r31)
	REX_STORE_U32(r31.u32 + 1780, ctx.r9.u32);
	// lwz r8,22364(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 22364);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82757460
	if (!ctx.cr6.eq) goto loc_82757460;
	// lwz r10,22040(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 22040);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r9,40248
	ctx.r7.u64 = ctx.r9.u64 | 40248;
	// ori r6,r8,40252
	ctx.r6.u64 = ctx.r8.u64 | 40252;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r10,1456(r31)
	REX_STORE_U32(r31.u32 + 1456, ctx.r10.u32);
	// addis r4,r30,2
	ctx.r4.s64 = r30.s64 + 131072;
	// ori r3,r5,40240
	ctx.r3.u64 = ctx.r5.u64 | 40240;
	// addi r4,r4,-25292
	ctx.r4.s64 = ctx.r4.s64 + -25292;
	// lwz r10,22396(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 22396);
	// stw r10,1460(r31)
	REX_STORE_U32(r31.u32 + 1460, ctx.r10.u32);
	// lwz r9,22068(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 22068);
	// stw r9,1464(r31)
	REX_STORE_U32(r31.u32 + 1464, ctx.r9.u32);
	// lwzx r8,r30,r7
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + ctx.r7.u32);
	// stw r8,1484(r31)
	REX_STORE_U32(r31.u32 + 1484, ctx.r8.u32);
	// lwzx r7,r30,r6
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + ctx.r6.u32);
	// stw r7,1480(r31)
	REX_STORE_U32(r31.u32 + 1480, ctx.r7.u32);
	// lwzx r6,r30,r3
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + ctx.r3.u32);
	// stw r6,1476(r31)
	REX_STORE_U32(r31.u32 + 1476, ctx.r6.u32);
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r5,1468(r31)
	REX_STORE_U32(r31.u32 + 1468, ctx.r5.u32);
	// lwz r3,20912(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r8,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,1472(r31)
	REX_STORE_U32(r31.u32 + 1472, ctx.r6.u32);
loc_82757460:
	// lwz r9,3004(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3004);
	// li r10,7
	ctx.r10.s64 = 7;
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// ori r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 | 32;
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// stw r9,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r9.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// stw r9,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r9.u32);
	// ori r3,r5,64
	ctx.r3.u64 = ctx.r5.u64 | 64;
	// ori r8,r4,8
	ctx.r8.u64 = ctx.r4.u64 | 8;
	// addi r9,r31,1120
	ctx.r9.s64 = r31.s64 + 1120;
	// li r5,1104
	ctx.r5.s64 = 1104;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r29,3012(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 3012);
	// stw r29,596(r31)
	REX_STORE_U32(r31.u32 + 596, r29.u32);
	// stw r29,592(r31)
	REX_STORE_U32(r31.u32 + 592, r29.u32);
	// lwz r29,3016(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 3016);
	// stw r29,600(r31)
	REX_STORE_U32(r31.u32 + 600, r29.u32);
	// lwz r29,3024(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 3024);
	// stw r29,604(r31)
	REX_STORE_U32(r31.u32 + 604, r29.u32);
	// lwz r29,2580(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 2580);
	// stw r29,608(r31)
	REX_STORE_U32(r31.u32 + 608, r29.u32);
	// lwz r29,2500(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 2500);
	// stw r29,612(r31)
	REX_STORE_U32(r31.u32 + 612, r29.u32);
	// lwz r29,15504(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// stw r29,1168(r31)
	REX_STORE_U32(r31.u32 + 1168, r29.u32);
	// lwz r29,15504(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// srawi r28,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	r28.s64 = r29.s32 >> 31;
	// subfc r10,r10,r29
	ctx.xer.ca = r29.u32 >= ctx.r10.u32;
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// adde r10,r7,r28
	temp.u8 = (ctx.r7.u32 + r28.u32 < ctx.r7.u32) | (ctx.r7.u32 + r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r7.u64 + r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,2320(r31)
	REX_STORE_U32(r31.u32 + 2320, ctx.r10.u32);
	// lwz r7,22408(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 22408);
	// stw r7,1172(r31)
	REX_STORE_U32(r31.u32 + 1172, ctx.r7.u32);
	// lwz r10,1852(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1852);
	// stw r10,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r10.u32);
	// lwz r7,1856(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1856);
	// stw r7,624(r31)
	REX_STORE_U32(r31.u32 + 624, ctx.r7.u32);
	// lwz r10,1860(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1860);
	// stw r10,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r10.u32);
	// lbz r7,35(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 35);
	// addis r10,r7,31
	ctx.r10.s64 = ctx.r7.s64 + 2031616;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// stw r10,1136(r31)
	REX_STORE_U32(r31.u32 + 1136, ctx.r10.u32);
	// lbz r7,35(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 35);
	// addis r10,r7,15
	ctx.r10.s64 = ctx.r7.s64 + 983040;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// stw r10,1140(r31)
	REX_STORE_U32(r31.u32 + 1140, ctx.r10.u32);
	// lbz r7,35(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 35);
	// addis r10,r7,7
	ctx.r10.s64 = ctx.r7.s64 + 458752;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// stw r10,1144(r31)
	REX_STORE_U32(r31.u32 + 1144, ctx.r10.u32);
	// lbz r7,35(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 35);
	// addis r10,r7,3
	ctx.r10.s64 = ctx.r7.s64 + 196608;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stw r10,1148(r31)
	REX_STORE_U32(r31.u32 + 1148, ctx.r10.u32);
	// lbz r7,35(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 35);
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// stw r6,1152(r31)
	REX_STORE_U32(r31.u32 + 1152, ctx.r6.u32);
	// lbz r10,35(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 35);
	// subf r7,r10,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r10.u64;
	// stw r7,1156(r31)
	REX_STORE_U32(r31.u32 + 1156, ctx.r7.u32);
	// lbz r6,35(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 35);
	// subf r3,r6,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r6.u64;
	// stw r3,1160(r31)
	REX_STORE_U32(r31.u32 + 1160, ctx.r3.u32);
	// lbz r10,35(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 35);
	// sth r10,1134(r31)
	REX_STORE_U16(r31.u32 + 1134, ctx.r10.u16);
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0x100))));
	// vsubshs v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stvx128 v11,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r4,1176(r31)
	REX_STORE_U16(r31.u32 + 1176, ctx.r4.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,16
	ctx.r10.s64 = 16;
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// sth r6,1178(r31)
	REX_STORE_U16(r31.u32 + 1178, ctx.r6.u16);
	// lwz r8,204(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 204);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r7,r31,1190
	ctx.r7.s64 = r31.s64 + 1190;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r3,6
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 6;
	// sth r8,1180(r31)
	REX_STORE_U16(r31.u32 + 1180, ctx.r8.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// srawi r3,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 6;
	// sth r3,1182(r31)
	REX_STORE_U16(r31.u32 + 1182, ctx.r3.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1184(r31)
	REX_STORE_U16(r31.u32 + 1184, ctx.r5.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// sth r8,1186(r31)
	REX_STORE_U16(r31.u32 + 1186, ctx.r8.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 128;
	// srawi r3,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 6;
	// sth r3,1188(r31)
	REX_STORE_U16(r31.u32 + 1188, ctx.r3.u16);
	// lwz r8,204(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 204);
	// mulli r10,r8,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(28));
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1190(r31)
	REX_STORE_U16(r31.u32 + 1190, ctx.r5.u16);
loc_8275763C:
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r6,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 6;
	// sthu r6,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8275763c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275763C;
	// lwz r10,2116(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2116);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r30,24192
	ctx.r8.s64 = r30.s64 + 24192;
	// addi r7,r30,2140
	ctx.r7.s64 = r30.s64 + 2140;
	// addi r6,r30,24448
	ctx.r6.s64 = r30.s64 + 24448;
	// stw r10,1224(r31)
	REX_STORE_U32(r31.u32 + 1224, ctx.r10.u32);
	// lwz r5,2120(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 2120);
	// stw r5,1228(r31)
	REX_STORE_U32(r31.u32 + 1228, ctx.r5.u32);
	// lwz r4,21936(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 21936);
	// stw r4,1236(r31)
	REX_STORE_U32(r31.u32 + 1236, ctx.r4.u32);
	// lwz r3,21940(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 21940);
	// stw r3,1240(r31)
	REX_STORE_U32(r31.u32 + 1240, ctx.r3.u32);
	// lwz r10,20916(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20916);
	// stw r10,1380(r31)
	REX_STORE_U32(r31.u32 + 1380, ctx.r10.u32);
	// lwz r5,15252(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 15252);
	// stw r5,1384(r31)
	REX_STORE_U32(r31.u32 + 1384, ctx.r5.u32);
	// lwz r10,15504(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// addi r4,r10,-7
	ctx.r4.s64 = ctx.r10.s64 + -7;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r5,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stb r4,1324(r31)
	REX_STORE_U8(r31.u32 + 1324, ctx.r4.u8);
	// lwz r3,20992(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20992);
	// stw r3,1388(r31)
	REX_STORE_U32(r31.u32 + 1388, ctx.r3.u32);
	// lwz r10,3984(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3984);
	// stw r10,1392(r31)
	REX_STORE_U32(r31.u32 + 1392, ctx.r10.u32);
	// lwz r9,248(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 248);
	// stb r9,1244(r31)
	REX_STORE_U8(r31.u32 + 1244, ctx.r9.u8);
	// lwz r4,4004(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4004);
	// stb r4,1245(r31)
	REX_STORE_U8(r31.u32 + 1245, ctx.r4.u8);
	// lwz r10,4012(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4012);
	// stb r10,1246(r31)
	REX_STORE_U8(r31.u32 + 1246, ctx.r10.u8);
	// lwz r5,252(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 252);
	// stb r5,1249(r31)
	REX_STORE_U8(r31.u32 + 1249, ctx.r5.u8);
	// lwz r3,472(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 472);
	// stb r3,1250(r31)
	REX_STORE_U8(r31.u32 + 1250, ctx.r3.u8);
	// lwz r9,22192(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 22192);
	// stw r9,1304(r31)
	REX_STORE_U32(r31.u32 + 1304, ctx.r9.u32);
	// lwz r5,284(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 284);
	// stw r5,1308(r31)
	REX_STORE_U32(r31.u32 + 1308, ctx.r5.u32);
	// lwz r4,1972(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 1972);
	// stb r4,1247(r31)
	REX_STORE_U8(r31.u32 + 1247, ctx.r4.u8);
	// lwz r10,1976(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1976);
	// stb r10,1248(r31)
	REX_STORE_U8(r31.u32 + 1248, ctx.r10.u8);
	// lwz r5,1968(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1968);
	// stb r5,1251(r31)
	REX_STORE_U8(r31.u32 + 1251, ctx.r5.u8);
	// lwz r3,22508(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 22508);
	// stw r3,1312(r31)
	REX_STORE_U32(r31.u32 + 1312, ctx.r3.u32);
	// lwz r10,3940(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3940);
	// stw r10,1316(r31)
	REX_STORE_U32(r31.u32 + 1316, ctx.r10.u32);
	// stw r8,1260(r31)
	REX_STORE_U32(r31.u32 + 1260, ctx.r8.u32);
	// stw r7,1232(r31)
	REX_STORE_U32(r31.u32 + 1232, ctx.r7.u32);
	// lwz r9,20932(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20932);
	// stb r9,1254(r31)
	REX_STORE_U8(r31.u32 + 1254, ctx.r9.u8);
	// lwz r7,21868(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 21868);
	// stb r7,1255(r31)
	REX_STORE_U8(r31.u32 + 1255, ctx.r7.u8);
	// stw r6,1264(r31)
	REX_STORE_U32(r31.u32 + 1264, ctx.r6.u32);
	// lwz r4,20904(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20904);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82757770
	if (ctx.cr6.eq) goto loc_82757770;
	// lwz r10,20908(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82757770
	if (!ctx.cr6.eq) goto loc_82757770;
	// lwz r10,1832(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1832);
	// stw r10,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r10.u32);
	// lwz r9,20976(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20976);
	// stw r9,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r9.u32);
	// lwz r8,20980(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20980);
	// stw r8,1300(r31)
	REX_STORE_U32(r31.u32 + 1300, ctx.r8.u32);
	// b 0x827577f0
	goto loc_827577F0;
loc_82757770:
	// lwz r10,15504(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x827577c0
	if (!ctx.cr6.eq) goto loc_827577C0;
	// lwz r10,1812(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1812);
	// stw r10,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r10.u32);
	// lwz r9,1812(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1812);
	// stw r9,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r9.u32);
	// lwz r8,1820(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r8,1276(r31)
	REX_STORE_U32(r31.u32 + 1276, ctx.r8.u32);
	// lwz r7,1816(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r7,1280(r31)
	REX_STORE_U32(r31.u32 + 1280, ctx.r7.u32);
	// lwz r6,1820(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r6,1284(r31)
	REX_STORE_U32(r31.u32 + 1284, ctx.r6.u32);
	// lwz r5,1816(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r5,1288(r31)
	REX_STORE_U32(r31.u32 + 1288, ctx.r5.u32);
	// lwz r4,1820(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r4,1292(r31)
	REX_STORE_U32(r31.u32 + 1292, ctx.r4.u32);
	// lwz r3,1816(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r3,1296(r31)
	REX_STORE_U32(r31.u32 + 1296, ctx.r3.u32);
	// b 0x827577f0
	goto loc_827577F0;
loc_827577C0:
	// lwz r10,1808(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1808);
	// stw r10,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r10.u32);
	// lwz r9,1820(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r9,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r9.u32);
	// lwz r8,1804(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1804);
	// stw r8,1276(r31)
	REX_STORE_U32(r31.u32 + 1276, ctx.r8.u32);
	// lwz r7,1816(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r7,1280(r31)
	REX_STORE_U32(r31.u32 + 1280, ctx.r7.u32);
	// lwz r6,1800(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 1800);
	// stw r6,1284(r31)
	REX_STORE_U32(r31.u32 + 1284, ctx.r6.u32);
	// lwz r5,1812(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1812);
	// stw r5,1288(r31)
	REX_STORE_U32(r31.u32 + 1288, ctx.r5.u32);
loc_827577F0:
	// sth r11,1256(r31)
	REX_STORE_U16(r31.u32 + 1256, ctx.r11.u16);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r5,r9,-29920
	ctx.r5.s64 = ctx.r9.s64 + -29920;
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// addi r6,r30,24512
	ctx.r6.s64 = r30.s64 + 24512;
	// addi r8,r8,-25684
	ctx.r8.s64 = ctx.r8.s64 + -25684;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r4,r30,24704
	ctx.r4.s64 = r30.s64 + 24704;
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// lwz r3,1796(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1796);
	// stb r3,1252(r31)
	REX_STORE_U8(r31.u32 + 1252, ctx.r3.u8);
	// lwz r9,1936(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1936);
	// stb r9,1253(r31)
	REX_STORE_U8(r31.u32 + 1253, ctx.r9.u8);
	// lwz r10,22508(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 22508);
	// stw r10,1312(r31)
	REX_STORE_U32(r31.u32 + 1312, ctx.r10.u32);
	// lwz r9,3940(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3940);
	// stw r9,1316(r31)
	REX_STORE_U32(r31.u32 + 1316, ctx.r9.u32);
	// lwz r3,3944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 3944);
	// stw r3,1320(r31)
	REX_STORE_U32(r31.u32 + 1320, ctx.r3.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r10.u32);
	// lhz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 52);
	// rlwinm r3,r9,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r9,r3,r8
	ctx.r9.u64 = uint32_t((ctx.r8.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r3.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r9,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r9.u32);
	// stw r6,1356(r31)
	REX_STORE_U32(r31.u32 + 1356, ctx.r6.u32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r4,1360(r31)
	REX_STORE_U32(r31.u32 + 1360, ctx.r4.u32);
	// andc r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r3,1764(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1764);
	// stw r3,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r3.u32);
	// lwz r10,15872(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15872);
	// stw r10,960(r31)
	REX_STORE_U32(r31.u32 + 960, ctx.r10.u32);
	// lwz r10,1356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1356);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,204(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 204);
loc_82757898:
	// lwz r8,-4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,3(r10)
	REX_STORE_U32(ctx.r10.u32 + 3, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827578d8
	if (ctx.cr6.eq) goto loc_827578D8;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// stw r8,7(r10)
	REX_STORE_U32(ctx.r10.u32 + 7, ctx.r8.u32);
loc_827578D8:
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stb r6,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,15(r10)
	REX_STORE_U32(ctx.r10.u32 + 15, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82757918
	if (ctx.cr6.eq) goto loc_82757918;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r3.u8);
	// stw r8,19(r10)
	REX_STORE_U32(ctx.r10.u32 + 19, ctx.r8.u32);
loc_82757918:
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stb r6,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,27(r10)
	REX_STORE_U32(ctx.r10.u32 + 27, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82757958
	if (ctx.cr6.eq) goto loc_82757958;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r3.u8);
	// stw r8,31(r10)
	REX_STORE_U32(ctx.r10.u32 + 31, ctx.r8.u32);
loc_82757958:
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,35(r10)
	REX_STORE_U8(ctx.r10.u32 + 35, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,39(r10)
	REX_STORE_U32(ctx.r10.u32 + 39, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82757998
	if (ctx.cr6.eq) goto loc_82757998;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r3.u8);
	// stw r8,43(r10)
	REX_STORE_U32(ctx.r10.u32 + 43, ctx.r8.u32);
loc_82757998:
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bdnz 0x82757898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757898;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,1360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 208);
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827579BC:
	// lwz r8,-4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r4.u8);
	// stw r3,3(r10)
	REX_STORE_U32(ctx.r10.u32 + 3, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827579fc
	if (ctx.cr6.eq) goto loc_827579FC;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// stw r3,7(r10)
	REX_STORE_U32(ctx.r10.u32 + 7, ctx.r3.u32);
loc_827579FC:
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stb r6,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r4.u8);
	// stw r3,15(r10)
	REX_STORE_U32(ctx.r10.u32 + 15, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82757a3c
	if (ctx.cr6.eq) goto loc_82757A3C;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r4.u8);
	// stw r3,19(r10)
	REX_STORE_U32(ctx.r10.u32 + 19, ctx.r3.u32);
loc_82757A3C:
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stb r6,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r4.u8);
	// stw r3,27(r10)
	REX_STORE_U32(ctx.r10.u32 + 27, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82757a7c
	if (ctx.cr6.eq) goto loc_82757A7C;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r4.u8);
	// stw r3,31(r10)
	REX_STORE_U32(ctx.r10.u32 + 31, ctx.r3.u32);
loc_82757A7C:
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,35(r10)
	REX_STORE_U8(ctx.r10.u32 + 35, ctx.r4.u8);
	// stw r3,39(r10)
	REX_STORE_U32(ctx.r10.u32 + 39, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82757abc
	if (ctx.cr6.eq) goto loc_82757ABC;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r4.u8);
	// stw r3,43(r10)
	REX_STORE_U32(ctx.r10.u32 + 43, ctx.r3.u32);
loc_82757ABC:
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bdnz 0x827579bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827579BC;
	// lwz r10,1792(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1792);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82757d5c
	if (ctx.cr6.eq) goto loc_82757D5C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82757d5c
	if (!ctx.cr6.eq) goto loc_82757D5C;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r9,620(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 620);
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r8,-25508
	ctx.r8.s64 = ctx.r8.s64 + -25508;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r8,1796(r31)
	REX_STORE_U32(r31.u32 + 1796, ctx.r8.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// addi r29,r8,3
	r29.s64 = ctx.r8.s64 + 3;
	// subf r28,r9,r8
	r28.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_82757B18:
	// lbzx r27,r10,r9
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r27,4,26,27
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0x30;
	// rlwinm r27,r27,31,1,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// or r27,r26,r27
	r27.u64 = r26.u64 | r27.u64;
	// rlwinm r27,r27,0,25,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x7E;
	// stbx r27,r28,r8
	REX_STORE_U8(r28.u32 + ctx.r8.u32, r27.u8);
	// lbzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r27,r8,4,26,27
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x30;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r27,r8,4,26,27
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x30;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r8,4,26,27
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x30;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r29,r10
	REX_STORE_U8(r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82757b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757B18;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r9,624(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 624);
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r8,-25476
	ctx.r8.s64 = ctx.r8.s64 + -25476;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r8,1800(r31)
	REX_STORE_U32(r31.u32 + 1800, ctx.r8.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// addi r29,r8,3
	r29.s64 = ctx.r8.s64 + 3;
	// subf r28,r9,r8
	r28.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_82757BBC:
	// lbzx r27,r10,r9
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r27,3,24,28
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xF8;
	// rlwinm r27,r27,30,2,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// or r27,r26,r27
	r27.u64 = r26.u64 | r27.u64;
	// rlwinm r27,r27,0,26,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3E;
	// stbx r27,r28,r8
	REX_STORE_U8(r28.u32 + ctx.r8.u32, r27.u8);
	// lbzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,24,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// stbx r8,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,24,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// stbx r8,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,24,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// stbx r8,r29,r10
	REX_STORE_U8(r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82757bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757BBC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,632(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 632);
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r8,-25444
	ctx.r8.s64 = ctx.r8.s64 + -25444;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r8,1808(r31)
	REX_STORE_U32(r31.u32 + 1808, ctx.r8.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// addi r29,r8,3
	r29.s64 = ctx.r8.s64 + 3;
	// subf r28,r9,r8
	r28.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_82757C60:
	// lbzx r27,r10,r9
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r27,3,27,28
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0x18;
	// rlwinm r27,r27,31,1,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// or r27,r26,r27
	r27.u64 = r26.u64 | r27.u64;
	// rlwinm r27,r27,0,25,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x7E;
	// stbx r27,r28,r8
	REX_STORE_U8(r28.u32 + ctx.r8.u32, r27.u8);
	// lbzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,27,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x18;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,27,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x18;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,27,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x18;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r29,r10
	REX_STORE_U8(r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82757c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757C60;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,444(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 444);
	// addis r9,r30,2
	ctx.r9.s64 = r30.s64 + 131072;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,-25572
	ctx.r9.s64 = ctx.r9.s64 + -25572;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// stw r9,1812(r31)
	REX_STORE_U32(r31.u32 + 1812, ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r31,r10,r9
	r31.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_82757D00:
	// lbzx r30,r11,r10
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r30,30,2,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r30,r30,4,25,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0x70;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stbx r30,r31,r9
	REX_STORE_U8(r31.u32 + ctx.r9.u32, r30.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82757d00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757D00;
loc_82757D5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_827CA200) {
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
	ctx.lr = 0x827CA208;
	// stwu r1,-1808(r1)
	ea = -1808 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r8,1868(r1)
	REX_STORE_U32(ctx.r1.u32 + 1868, ctx.r8.u32);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r23,1312(r4)
	r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// ori r9,r11,39772
	ctx.r9.u64 = ctx.r11.u64 | 39772;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r10,r1,303
	ctx.r10.s64 = ctx.r1.s64 + 303;
	// addi r8,r1,876
	ctx.r8.s64 = ctx.r1.s64 + 876;
	// rlwinm r5,r10,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwzx r4,r3,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// rlwinm r11,r8,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r5,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r5.u32);
	// li r16,0
	r16.s64 = 0;
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r10,3748(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3748);
	// add r22,r10,r11
	r22.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,3744(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lhz r28,50(r31)
	r28.u64 = REX_LOAD_U16(r31.u32 + 50);
	// lhz r27,52(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 52);
	// lwz r8,3752(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// add r19,r8,r11
	r19.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r27,r27,31,1,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// rlwinm r26,r28,31,1,31
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// add r14,r9,r10
	r14.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// stw r26,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r26.u32);
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r14.u32);
	// stw r27,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r27.u32);
	// bne cr6,0x827ca2f0
	if (!ctx.cr6.eq) goto loc_827CA2F0;
	// lwz r11,22492(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22492);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// stw r23,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// mr r21,r16
	r21.u64 = r16.u64;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r16,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r16.u32);
	// stw r16,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r16.u32);
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// lwz r11,22504(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22504);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r24,r8,16
	r24.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// rlwinm r15,r8,16,20,31
	r15.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFF;
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r16.u32);
	// rlwinm r17,r8,4,29,31
	r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x7;
	// stw r16,0(r30)
	REX_STORE_U32(r30.u32 + 0, r16.u32);
	// stw r16,4(r30)
	REX_STORE_U32(r30.u32 + 4, r16.u32);
	// sth r16,16(r30)
	REX_STORE_U16(r30.u32 + 16, r16.u16);
	// b 0x827ca3c4
	goto loc_827CA3C4;
loc_827CA2F0:
	// addi r11,r6,92
	ctx.r11.s64 = ctx.r6.s64 + 92;
	// lhz r8,74(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lhz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rlwinm r4,r26,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r6,r6,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// mullw r11,r26,r7
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(ctx.r7.s32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r10,r4,r7
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// add r23,r9,r23
	r23.u64 = ctx.r9.u64 + r23.u64;
	// addi r9,r30,20
	ctx.r9.s64 = r30.s64 + 20;
	// rotlwi r9,r8,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// stw r23,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// mullw r8,r6,r7
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r6.u32);
	// rotlwi r21,r8,0
	r21.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r4,r7,1,16,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// stw r8,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r8.u32);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r6,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r6.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// sth r4,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r4.u16);
	// sth r16,18(r30)
	REX_STORE_U16(r30.u32 + 18, r16.u16);
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lhz r3,74(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 74);
	// rotlwi r10,r3,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// rotlwi r8,r4,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// add r14,r9,r14
	r14.u64 = ctx.r9.u64 + r14.u64;
	// add r22,r10,r22
	r22.u64 = ctx.r10.u64 + r22.u64;
	// stw r4,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// add r19,r10,r19
	r19.u64 = ctx.r10.u64 + r19.u64;
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r14.u32);
	// clrlwi r24,r6,16
	r24.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// rlwinm r15,r6,16,20,31
	r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFF;
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// rlwinm r17,r6,4,29,31
	r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x7;
loc_827CA3C4:
	// stw r24,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r24.u32);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, ctx.xer);
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// bge cr6,0x827cab38
	if (!ctx.cr6.lt) goto loc_827CAB38;
	// li r20,16384
	r20.s64 = 16384;
	// b 0x827ca3e0
	goto loc_827CA3E0;
loc_827CA3DC:
	// lwz r21,144(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_827CA3E0:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r27,r26
	r27.u64 = r26.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r21,12(r30)
	REX_STORE_U32(r30.u32 + 12, r21.u32);
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r15.u32, ctx.xer);
	// sth r16,18(r30)
	REX_STORE_U16(r30.u32 + 18, r16.u16);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bne cr6,0x827ca618
	if (!ctx.cr6.eq) goto loc_827CA618;
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r25,r16
	r25.u64 = r16.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x827ca618
	if (ctx.cr6.eq) goto loc_827CA618;
loc_827CA414:
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(r25.u32, r24.u32, ctx.xer);
	// bne cr6,0x827caae8
	if (!ctx.cr6.eq) goto loc_827CAAE8;
	// srawi r28,r17,2
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x3) != 0);
	r28.s64 = r17.s32 >> 2;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r10,r17,140
	ctx.r10.s64 = r17.s64 + 140;
	// ld r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U64(r23.u32 + 0);
	// addi r8,r28,2
	ctx.r8.s64 = r28.s64 + 2;
	// lwz r29,40(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// rldicl r5,r9,8,56
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFF;
	// li r4,-128
	ctx.r4.s64 = -128;
	// lwzx r11,r7,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// lwzx r10,r6,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r4,r3
	// dcbzl r0,r29
	ea = (r29.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// srawi r11,r17,2
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x3) != 0);
	ctx.r11.s64 = r17.s32 >> 2;
	// lwz r10,392(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 392);
	// rlwinm r8,r5,6,20,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFC0;
	// addi r6,r11,45
	ctx.r6.s64 = ctx.r11.s64 + 45;
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,29984(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 29984);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lhzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + r31.u32);
	// lwz r6,29980(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 29980);
	// bl 0x8277dbd0
	ctx.lr = 0x827CA494;
	sub_8277DBD0(ctx, base);
	// lbz r5,33(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 33);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827ca5d8
	if (ctx.cr6.eq) goto loc_827CA5D8;
	// clrlwi r10,r17,31
	ctx.r10.u64 = r17.u32 & 0x1;
	// lhz r8,54(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 54);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r17,146
	ctx.r7.s64 = r17.s64 + 146;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,8
	ctx.r11.s64 = 8;
	// sraw r3,r4,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r10,r5,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// rlwinm r9,r3,1,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFF0;
	// clrlwi r7,r28,16
	ctx.r7.u64 = r28.u32 & 0xFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
loc_827CA4E8:
	// lhzu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827ca4e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CA4E8;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r29,14
	ctx.r8.s64 = r29.s64 + 14;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827CA50C:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x827ca50c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CA50C;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r29,30
	ctx.r9.s64 = r29.s64 + 30;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827CA52C:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827ca52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CA52C;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r29,46
	ctx.r9.s64 = r29.s64 + 46;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827CA54C:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827ca54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CA54C;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r29,62
	ctx.r9.s64 = r29.s64 + 62;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827CA56C:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827ca56c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CA56C;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r29,78
	ctx.r9.s64 = r29.s64 + 78;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827CA58C:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827ca58c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CA58C;
	// li r7,8
	ctx.r7.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r29,94
	ctx.r9.s64 = r29.s64 + 94;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827CA5AC:
	// lhzu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827ca5ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CA5AC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r29,110
	ctx.r11.s64 = r29.s64 + 110;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827CA5CC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x827ca5cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CA5CC;
loc_827CA5D8:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stw r8,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// rlwinm r15,r6,16,20,31
	r15.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFF;
	// clrlwi r24,r6,16
	r24.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r17,r6,4,29,31
	r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x7;
	// stw r24,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r24.u32);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r15.u32, ctx.xer);
	// beq cr6,0x827ca414
	if (ctx.cr6.eq) goto loc_827CA414;
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_827CA618:
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// add r9,r7,r26
	ctx.r9.u64 = ctx.r7.u64 + r26.u64;
	// lwz r5,152(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r6,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r6.u16);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// add r23,r10,r5
	r23.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r10,33(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 33);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// lhz r18,76(r31)
	r18.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rotlwi r11,r18,3
	ctx.r11.u64 = __builtin_rotateleft32(r18.u32, 3);
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + r21.u64;
	// lhz r21,74(r31)
	r21.u64 = REX_LOAD_U16(r31.u32 + 74);
	// rotlwi r11,r21,4
	ctx.r11.u64 = __builtin_rotateleft32(r21.u32, 4);
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r23,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// stw r23,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r23.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// beq cr6,0x827ca930
	if (ctx.cr6.eq) goto loc_827CA930;
	// lhz r29,50(r31)
	r29.u64 = REX_LOAD_U16(r31.u32 + 50);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rotlwi r7,r29,1
	ctx.r7.u64 = __builtin_rotateleft32(r29.u32, 1);
	// lwz r6,1304(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1304);
	// neg r5,r11
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// subf r3,r7,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// srawi r23,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r23.s64 = r29.s32 >> 1;
	// srawi r8,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 2;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r11,r10
	r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// or r19,r6,r7
	r19.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rotlwi r26,r29,2
	r26.u64 = __builtin_rotateleft32(r29.u32, 2);
	// rotlwi r25,r29,3
	r25.u64 = __builtin_rotateleft32(r29.u32, 3);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// bne cr6,0x827ca6fc
	if (!ctx.cr6.eq) goto loc_827CA6FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
loc_827CA6FC:
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
	// lwz r11,1328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r14,r27,r7
	r14.u64 = ctx.r7.u64 - r27.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r20,r27,4,0,27
	r20.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + r20.u64;
	// addi r24,r9,-1
	r24.s64 = ctx.r9.s64 + -1;
	// bl 0x82745428
	ctx.lr = 0x827CA73C;
	sub_82745428(ctx, base);
	// add r6,r27,r29
	ctx.r6.u64 = r27.u64 + r29.u64;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,1336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// add r3,r20,r11
	ctx.r3.u64 = r20.u64 + ctx.r11.u64;
	// bl 0x82745428
	ctx.lr = 0x827CA768;
	sub_82745428(ctx, base);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// subf r20,r24,r5
	r20.u64 = ctx.r5.u64 - r24.u64;
	// addi r27,r11,2
	r27.s64 = ctx.r11.s64 + 2;
	// rlwinm r24,r24,4,0,27
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,1340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x82745428
	ctx.lr = 0x827CA7A0;
	sub_82745428(ctx, base);
	// lwz r11,1348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x82745428
	ctx.lr = 0x827CA7C0;
	sub_82745428(ctx, base);
	// li r20,16384
	r20.s64 = 16384;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// rlwinm r24,r29,2,0,29
	r24.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// addic r4,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	ctx.r4.s64 = r19.s64 + -1;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// subf r11,r24,r28
	ctx.r11.u64 = r28.u64 - r24.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r14,132(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lwz r3,1332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// addi r27,r28,2
	r27.s64 = r28.s64 + 2;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r4,1328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// bl 0x82745a30
	ctx.lr = 0x827CA810;
	sub_82745A30(ctx, base);
	// add r9,r24,r28
	ctx.r9.u64 = r24.u64 + r28.u64;
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,1336(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// add r6,r11,r14
	ctx.r6.u64 = ctx.r11.u64 + r14.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,1328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// bl 0x82745a30
	ctx.lr = 0x827CA848;
	sub_82745A30(ctx, base);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// rlwinm r6,r23,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addic r5,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	ctx.r5.s64 = r19.s64 + -1;
	// lwz r4,1340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// subf r11,r6,r22
	ctx.r11.u64 = r22.u64 - ctx.r6.u64;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,1344(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r29,r22,2
	r29.s64 = r22.s64 + 2;
	// lwz r22,124(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// and r28,r10,r9
	r28.u64 = ctx.r10.u64 & ctx.r9.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CA898;
	sub_82745A30(ctx, base);
	// lwz r19,140(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,1348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r3,1352(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CA8CC;
	sub_82745A30(ctx, base);
	// lwz r8,1332(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// lwz r7,1352(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// lwz r4,1344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r6,1336(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,1348(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// lwz r10,1328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// lwz r9,1340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// stw r8,1336(r31)
	REX_STORE_U32(r31.u32 + 1336, ctx.r8.u32);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r24,156(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r23,172(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r7,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, ctx.r7.u32);
	// stw r4,1340(r31)
	REX_STORE_U32(r31.u32 + 1340, ctx.r4.u32);
	// stw r6,1332(r31)
	REX_STORE_U32(r31.u32 + 1332, ctx.r6.u32);
	// stw r5,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, ctx.r5.u32);
	// stw r9,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, ctx.r9.u32);
	// stw r10,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r10.u32);
	// stw r10,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r10.u32);
	// stw r8,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r8.u32);
	// stw r3,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r3.u32);
	// stw r3,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
loc_827CA930:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r8,1304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1304);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lhz r7,74(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 74);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r27,76(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 76);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lbz r4,33(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 33);
	// rotlwi r11,r27,3
	ctx.r11.u64 = __builtin_rotateleft32(r27.u32, 3);
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// lwzx r3,r6,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rotlwi r10,r7,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// add r14,r10,r14
	r14.u64 = ctx.r10.u64 + r14.u64;
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r14.u32);
	// stw r19,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r19.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827caac4
	if (ctx.cr6.eq) goto loc_827CAAC4;
	// lhz r21,50(r31)
	r21.u64 = REX_LOAD_U16(r31.u32 + 50);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// addi r29,r31,1340
	r29.s64 = r31.s64 + 1340;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// rotlwi r8,r21,2
	ctx.r8.u64 = __builtin_rotateleft32(r21.u32, 2);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// srawi r26,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	r26.s64 = r21.s32 >> 1;
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rotlwi r5,r21,3
	ctx.r5.u64 = __builtin_rotateleft32(r21.u32, 3);
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// lwz r25,352(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 352);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,1328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,1332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// subf r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r28,r31,1348
	r28.s64 = r31.s64 + 1348;
	// rotlwi r29,r21,2
	r29.u64 = __builtin_rotateleft32(r21.u32, 2);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CA9FC;
	sub_82745A30(ctx, base);
	// rlwinm r3,r26,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,1340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// subf r11,r3,r25
	ctx.r11.u64 = r25.u64 - ctx.r3.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// addi r25,r11,2
	r25.s64 = ctx.r11.s64 + 2;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r3,1344(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// bl 0x82745a30
	ctx.lr = 0x827CAA38;
	sub_82745A30(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,1348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,1352(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CAA68;
	sub_82745A30(ctx, base);
	// lwz r11,1332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// lwz r10,1344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// lwz r7,1352(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,1336(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r8,1340(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// lwz r6,1348(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// lwz r5,1328(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// stw r11,1336(r31)
	REX_STORE_U32(r31.u32 + 1336, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r10,1340(r31)
	REX_STORE_U32(r31.u32 + 1340, ctx.r10.u32);
	// stw r7,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, ctx.r7.u32);
	// stw r9,1332(r31)
	REX_STORE_U32(r31.u32 + 1332, ctx.r9.u32);
	// stw r8,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, ctx.r8.u32);
	// stw r6,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, ctx.r6.u32);
	// stw r5,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r5.u32);
	// stw r5,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r5.u32);
	// stw r4,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r4.u32);
	// stw r4,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r4.u32);
	// stw r3,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r3.u32);
	// stw r11,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r11.u32);
loc_827CAAC4:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,1868(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1868);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827ca3dc
	if (ctx.cr6.lt) goto loc_827CA3DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1808
	ctx.r1.s64 = ctx.r1.s64 + 1808;
	// b 0x826a1cd0
	return;
loc_827CAAE8:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lhz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 18);
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// stw r5,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// stw r4,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(r25.u32, r26.u32, ctx.xer);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// sth r6,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r6.u16);
	// blt cr6,0x827ca414
	if (ctx.cr6.lt) goto loc_827CA414;
	// b 0x827ca618
	goto loc_827CA618;
loc_827CAB38:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,1808
	ctx.r1.s64 = ctx.r1.s64 + 1808;
	// b 0x826a1cd0
	return;
}

