#include "hydrothunder_funcs.36.h"

DEFINE_REX_FUNC(sub_82121F28) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x826a1e70
	sub_826A1E70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82126978) {
	REX_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82126FF8) {
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
	ctx.lr = 0x82127000;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212702c
	if (ctx.cr6.eq) goto loc_8212702C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-24768
	ctx.r4.s64 = ctx.r11.s64 + -24768;
	// addi r3,r10,-24728
	ctx.r3.s64 = ctx.r10.s64 + -24728;
	// li r5,244
	ctx.r5.s64 = 244;
	// bl 0x821231d0
	ctx.lr = 0x8212702C;
	sub_821231D0(ctx, base);
loc_8212702C:
	// lwz r31,68(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 68);
	// addi r27,r26,68
	r27.s64 = r26.s64 + 68;
	// b 0x8212704c
	goto loc_8212704C;
loc_82127038:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127048
	if (ctx.cr6.eq) goto loc_82127048;
	// bl 0x82127160
	ctx.lr = 0x82127048;
	sub_82127160(ctx, base);
loc_82127048:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8212704C:
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 72);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82127038
	if (!ctx.cr6.eq) goto loc_82127038;
	// addi r3,r26,36
	ctx.r3.s64 = r26.s64 + 36;
	// bl 0x82122a78
	ctx.lr = 0x82127060;
	sub_82122A78(ctx, base);
	// lwz r11,56(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 56);
	// addi r31,r26,52
	r31.s64 = r26.s64 + 52;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lbz r11,61(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 61);
	// b 0x821270b4
	goto loc_821270B4;
loc_82127078:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8212a850
	ctx.lr = 0x82127084;
	sub_8212A850(ctx, base);
	// addi r28,r29,12
	r28.s64 = r29.s64 + 12;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82122800
	ctx.lr = 0x82127094;
	sub_82122800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821270A4;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821270AC;
	sub_8269CE98(ctx, base);
	// lbz r11,61(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 61);
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821270B4:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82127078
	if (ctx.cr0.eq) goto loc_82127078;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
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
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8212710c
	if (ctx.cr6.eq) goto loc_8212710C;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8269cc20
	ctx.lr = 0x82127104;
	sub_8269CC20(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
loc_8212710C:
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 88);
	// addi r31,r26,84
	r31.s64 = r26.s64 + 84;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 88);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 88);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r29,92(r26)
	REX_STORE_U32(r26.u32 + 92, r29.u32);
	// beq cr6,0x8212714c
	if (ctx.cr6.eq) goto loc_8212714C;
loc_82127134:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8212713C;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82127134
	if (!ctx.cr6.eq) goto loc_82127134;
loc_8212714C:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82162298
	ctx.lr = 0x82127158;
	sub_82162298(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82132C58) {
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
	// addi r4,r11,-20596
	ctx.r4.s64 = ctx.r11.s64 + -20596;
	// addi r3,r10,-20552
	ctx.r3.s64 = ctx.r10.s64 + -20552;
	// li r5,135
	ctx.r5.s64 = 135;
	// bl 0x821231d0
	ctx.lr = 0x82132C7C;
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

DEFINE_REX_FUNC(sub_821344A8) {
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
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lbz r8,3(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,2(r5)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r5,1(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// li r6,0
	ctx.r6.s64 = 0;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 | ctx.r5.u64;
	// beq 0x821344f0
	if (ctx.cr0.eq) goto loc_821344F0;
	// li r6,15
	ctx.r6.s64 = 15;
loc_821344F0:
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821344fc
	if (ctx.cr0.eq) goto loc_821344FC;
	// ori r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 16;
loc_821344FC:
	// rlwinm. r11,r4,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82134508
	if (ctx.cr0.eq) goto loc_82134508;
	// ori r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 | 32;
loc_82134508:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d1398
	ctx.lr = 0x8213451C;
	sub_822D1398(ctx, base);
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

DEFINE_REX_FUNC(sub_82139948) {
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
	ctx.lr = 0x82139950;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821399bc
	if (!ctx.cr6.gt) goto loc_821399BC;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bgt cr6,0x82139988
	if (ctx.cr6.gt) goto loc_82139988;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82139988:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821399bc
	if (!ctx.cr6.gt) goto loc_821399BC;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822f6338
	ctx.lr = 0x82139998;
	sub_822F6338(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x821399AC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x821399B4;
	sub_8269CE98(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_821399BC:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x821399e0
	if (ctx.cr6.gt) goto loc_821399E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-21824
	ctx.r4.s64 = ctx.r11.s64 + -21824;
	// addi r3,r10,-21704
	ctx.r3.s64 = ctx.r10.s64 + -21704;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x821231d0
	ctx.lr = 0x821399E0;
	sub_821231D0(ctx, base);
loc_821399E0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82139a00
	if (ctx.cr0.eq) goto loc_82139A00;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82139A00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8213FE80) {
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
	ctx.lr = 0x8213FE88;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r31,r11,-17296
	r31.s64 = ctx.r11.s64 + -17296;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x8213FEA0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8213FEA4;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8217a160
	ctx.lr = 0x8213FEB0;
	sub_8217A160(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x8213FEBC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8213FEC0;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217a1d8
	ctx.lr = 0x8213FECC;
	sub_8217A1D8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-17180
	ctx.r4.s64 = ctx.r11.s64 + -17180;
	// bl 0x82125d00
	ctx.lr = 0x8213FEDC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213ff20
	if (!ctx.cr0.eq) goto loc_8213FF20;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lwz r3,6136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6136);
	// bge cr6,0x8213ff00
	if (!ctx.cr6.lt) goto loc_8213FF00;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8213FF00:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213FF10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213ffe8
	if (ctx.cr0.eq) goto loc_8213FFE8;
	// addi r30,r3,80
	r30.s64 = ctx.r3.s64 + 80;
	// b 0x8213ff68
	goto loc_8213FF68;
loc_8213FF20:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-17168
	ctx.r4.s64 = ctx.r11.s64 + -17168;
	// bl 0x82125d00
	ctx.lr = 0x8213FF30;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213ffe8
	if (!ctx.cr0.eq) goto loc_8213FFE8;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8213ff4c
	if (!ctx.cr6.lt) goto loc_8213FF4C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8213FF4C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6180(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// bl 0x8214f8b8
	ctx.lr = 0x8213FF58;
	sub_8214F8B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// bne 0x8213ff68
	if (!ctx.cr0.eq) goto loc_8213FF68;
	// li r30,0
	r30.s64 = 0;
loc_8213FF68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8213ffe8
	if (ctx.cr6.eq) goto loc_8213FFE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8213ffe8
	if (!ctx.cr0.gt) goto loc_8213FFE8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r26,r10,-17264
	r26.s64 = ctx.r10.s64 + -17264;
loc_8213FF94:
	// lwzx r31,r28,r11
	r31.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8215f338
	ctx.lr = 0x8213FFA8;
	sub_8215F338(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bl 0x8215f2d0
	ctx.lr = 0x8213FFB0;
	sub_8215F2D0(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213FFC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8213ff94
	if (ctx.cr6.lt) goto loc_8213FF94;
loc_8213FFE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8213FFF8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82140008;
	sub_82120AC0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8214C110) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8214c140
	if (ctx.cr6.lt) goto loc_8214C140;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214c158
	if (ctx.cr6.lt) goto loc_8214C158;
loc_8214C140:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// addi r3,r10,-25252
	ctx.r3.s64 = ctx.r10.s64 + -25252;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x8214C158;
	sub_821231D0(ctx, base);
loc_8214C158:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821501A8) {
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
	ctx.lr = 0x821501B0;
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
	// b 0x821501f0
	goto loc_821501F0;
loc_821501CC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821501D8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821501e8
	if (!ctx.cr0.lt) goto loc_821501E8;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821501f0
	goto loc_821501F0;
loc_821501E8:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821501F0:
	// lbz r11,45(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821501cc
	if (ctx.cr0.eq) goto loc_821501CC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82150228
	if (ctx.cr6.eq) goto loc_82150228;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x82150218;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82150228
	if (ctx.cr0.lt) goto loc_82150228;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82150234
	goto loc_82150234;
loc_82150228:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82150234:
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

DEFINE_REX_FUNC(sub_82153F70) {
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
	ctx.lr = 0x82153F78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// addi r28,r11,-10444
	r28.s64 = ctx.r11.s64 + -10444;
	// beq cr6,0x82153fb4
	if (ctx.cr6.eq) goto loc_82153FB4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-9976
	ctx.r3.s64 = ctx.r11.s64 + -9976;
	// li r5,605
	ctx.r5.s64 = 605;
	// bl 0x821231d0
	ctx.lr = 0x82153FB4;
	sub_821231D0(ctx, base);
loc_82153FB4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82153fc8
	if (ctx.cr6.lt) goto loc_82153FC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82153fdc
	if (ctx.cr6.lt) goto loc_82153FDC;
loc_82153FC8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,-9912
	ctx.r3.s64 = ctx.r11.s64 + -9912;
	// li r5,606
	ctx.r5.s64 = 606;
	// bl 0x821231d0
	ctx.lr = 0x82153FDC;
	sub_821231D0(ctx, base);
loc_82153FDC:
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r30,1064
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1064));
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82154028
	if (!ctx.cr6.eq) goto loc_82154028;
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x82154044
	if (ctx.cr6.eq) goto loc_82154044;
loc_82154028:
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82154044:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8215A820) {
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
	ctx.lr = 0x8215A828;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1092
	ctx.r11.s64 = 71565312;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8215a850
	if (!ctx.cr6.gt) goto loc_8215A850;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x8215A850;
	sub_822F6020(ctx, base);
loc_8215A850:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r25,60
	r25.s64 = 60;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r25
	ctx.r11.u64 = uint32_t((r25.s32 && !(ctx.r11.s32 == INT32_MIN && r25.s32 == -1)) ? ctx.r11.s32 / r25.s32 : 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x8215a948
	if (!ctx.cr6.lt) goto loc_8215A948;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8215a888
	if (ctx.cr6.eq) goto loc_8215A888;
	// mulli r3,r26,60
	ctx.r3.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(60));
	// bl 0x822f6280
	ctx.lr = 0x8215A880;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8215a950
	if (ctx.cr0.eq) goto loc_8215A950;
loc_8215A888:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8215a8cc
	goto loc_8215A8CC;
loc_8215A898:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8215a8c4
	if (ctx.cr6.eq) goto loc_8215A8C4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120d70
	ctx.lr = 0x8215A8AC;
	sub_82120D70(ctx, base);
	// addi r11,r29,56
	ctx.r11.s64 = r29.s64 + 56;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// bl 0x82120d70
	ctx.lr = 0x8215A8BC;
	sub_82120D70(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,56(r29)
	REX_STORE_U32(r29.u32 + 56, ctx.r11.u32);
loc_8215A8C4:
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
loc_8215A8CC:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x8215a898
	if (!ctx.cr6.eq) goto loc_8215A898;
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
	// beq cr6,0x8215a92c
	if (ctx.cr6.eq) goto loc_8215A92C;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8215a924
	if (ctx.cr6.eq) goto loc_8215A924;
loc_8215A8F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x82120ac0
	ctx.lr = 0x8215A908;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8215A918;
	sub_82120AC0(ctx, base);
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x8215a8f8
	if (!ctx.cr6.eq) goto loc_8215A8F8;
loc_8215A924:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8215A92C;
	sub_8269CE98(ctx, base);
loc_8215A92C:
	// mulli r11,r26,60
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(60));
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// mulli r10,r27,60
	ctx.r10.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(60));
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8215A948:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8215A950:
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
	ctx.lr = 0x8215A96C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82163E30) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82163e58
	if (ctx.cr6.lt) goto loc_82163E58;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82163e5c
	goto loc_82163E5C;
loc_82163E58:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82163E5C:
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lis r9,-32484
	ctx.r9.s64 = -2128871424;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r9,r9,40389
	ctx.r9.u64 = ctx.r9.u64 | 40389;
	// b 0x82163e8c
	goto loc_82163E8C;
loc_82163E70:
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r8,r8,403
	ctx.r8.u64 = ctx.r8.u64 | 403;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
loc_82163E8C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82163e70
	if (!ctx.cr6.eq) goto loc_82163E70;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// clrlwi r3,r9,1
	ctx.r3.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// ori r4,r4,62237
	ctx.r4.u64 = ctx.r4.u64 | 62237;
	// bl 0x8269d658
	ctx.lr = 0x82163EA4;
	sub_8269D658(ctx, base);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,16807
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(16807));
	// mulli r10,r10,2836
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(2836));
	// subf. r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82163ec8
	if (!ctx.cr0.lt) goto loc_82163EC8;
	// addis r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -2147483648;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82163EC8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82163ee8
	if (ctx.cr6.gt) goto loc_82163EE8;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_82163EE8:
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

DEFINE_REX_FUNC(sub_8216B818) {
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
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8216b858
	if (!ctx.cr6.gt) goto loc_8216B858;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8216b858
	if (!ctx.cr6.eq) goto loc_8216B858;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8216b874
	goto loc_8216B874;
loc_8216B858:
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
	ctx.lr = 0x8216B870;
	sub_821231D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216B874:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216b8a8
	if (ctx.cr0.eq) goto loc_8216B8A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_8216B8A8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216B8C4;
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

DEFINE_REX_FUNC(sub_82171478) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82123288
	ctx.lr = 0x82171498;
	sub_82123288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82171fa0
	ctx.lr = 0x821714A4;
	sub_82171FA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821714B4;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130d70
	ctx.lr = 0x821714BC;
	sub_82130D70(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82171500
	if (ctx.cr6.eq) goto loc_82171500;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821714dc
	if (ctx.cr6.lt) goto loc_821714DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821714e0
	goto loc_821714E0;
loc_821714DC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821714E0:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82171500
	if (ctx.cr6.eq) goto loc_82171500;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-24460
	ctx.r4.s64 = ctx.r11.s64 + -24460;
	// bl 0x82121928
	ctx.lr = 0x82171500;
	sub_82121928(ctx, base);
loc_82171500:
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

DEFINE_REX_FUNC(sub_82176F48) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// rlwinm r5,r10,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r4,r11,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x822c5c60
	ctx.lr = 0x82176F70;
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

DEFINE_REX_FUNC(sub_82178618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82178620;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r31,r3,64
	r31.s64 = ctx.r3.s64 + 64;
	// li r30,0
	r30.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82178674
	if (!ctx.cr0.gt) goto loc_82178674;
	// li r29,0
	r29.s64 = 0;
loc_82178648:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x82178618
	ctx.lr = 0x82178654;
	sub_82178618(ctx, base);
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
	// blt cr6,0x82178648
	if (ctx.cr6.lt) goto loc_82178648;
loc_82178674:
	// lwz r11,96(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 96);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8217869c
	goto loc_8217869C;
loc_82178680:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82178694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 96);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8217869C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82178680
	if (!ctx.cr6.eq) goto loc_82178680;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821786B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8217C1E0) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x8217C200;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217c214
	if (ctx.cr0.eq) goto loc_8217C214;
	// bl 0x8217a6f8
	ctx.lr = 0x8217C20C;
	sub_8217A6F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8217c218
	goto loc_8217C218;
loc_8217C214:
	// li r31,0
	r31.s64 = 0;
loc_8217C218:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217c228
	if (!ctx.cr6.eq) goto loc_8217C228;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217c240
	goto loc_8217C240;
loc_8217C228:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217ab98
	ctx.lr = 0x8217C234;
	sub_8217AB98(ctx, base);
	// lbz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,44(r31)
	REX_STORE_U8(r31.u32 + 44, ctx.r11.u8);
loc_8217C240:
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

DEFINE_REX_FUNC(sub_8217F678) {
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
	ctx.lr = 0x8217F680;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,29744
	r30.s64 = ctx.r11.s64 + 29744;
	// bne cr6,0x8217f6b8
	if (!ctx.cr6.eq) goto loc_8217F6B8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x8217F6B8;
	sub_821231D0(ctx, base);
loc_8217F6B8:
	// cmplwi cr6,r27,7
	ctx.cr6.compare<uint32_t>(r27.u32, 7, ctx.xer);
	// bge cr6,0x8217f6d4
	if (!ctx.cr6.lt) goto loc_8217F6D4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x8217F6D4;
	sub_821231D0(ctx, base);
loc_8217F6D4:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8217f6f4
	if (ctx.cr6.eq) goto loc_8217F6F4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x8217F6F4;
	sub_821231D0(ctx, base);
loc_8217F6F4:
	// lbz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 6);
	// lwz r30,2(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 2);
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 128);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r10,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bgt cr6,0x8217f724
	if (ctx.cr6.gt) goto loc_8217F724;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8217f740
	goto loc_8217F740;
loc_8217F724:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,24480
	ctx.r4.s64 = ctx.r11.s64 + 24480;
	// addi r3,r10,24512
	ctx.r3.s64 = ctx.r10.s64 + 24512;
	// li r5,133
	ctx.r5.s64 = 133;
	// bl 0x821231d0
	ctx.lr = 0x8217F73C;
	sub_821231D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8217F740:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217f75c
	if (ctx.cr0.eq) goto loc_8217F75C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,7
	ctx.r4.s64 = r31.s64 + 7;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8217F758;
	sub_826A1E70(ctx, base);
	// stw r30,128(r29)
	REX_STORE_U32(r29.u32 + 128, r30.u32);
loc_8217F75C:
	// lwz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2);
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82189BD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82189d18
	if (!ctx.cr6.gt) goto loc_82189D18;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r6,r10,16592
	ctx.r6.s64 = ctx.r10.s64 + 16592;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f9,15048(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 15048);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82189C10:
	// lwz r10,100(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// lwz r5,104(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82189cf8
	if (!ctx.cr6.eq) goto loc_82189CF8;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r6,256
	ctx.r10.s64 = ctx.r6.s64 + 256;
	// lfs f12,208(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,212(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,224(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,228(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,256(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,260(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f12,f10,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f13,f8,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f13.f64)));
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fsubs f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
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
	// rlwinm r31,r5,27,29,29
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r5,r31,r5
	ctx.r5.u64 = r31.u64 | ctx.r5.u64;
	// lfsx f12,r10,r5
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f12,f12,f13,f10
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82189cf8
	if (!ctx.cr6.lt) goto loc_82189CF8;
	// lfs f11,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82189cac
	if (!ctx.cr6.gt) goto loc_82189CAC;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
loc_82189CAC:
	// lfs f13,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x82189cc8
	if (!ctx.cr6.gt) goto loc_82189CC8;
	// fsubs f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_82189CC8:
	// lfs f13,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82189CF8:
	// lwz r10,96(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82189c10
	if (ctx.cr6.lt) goto loc_82189C10;
loc_82189D18:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821953D0) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x821953F8;
	sub_8212DD28(ctx, base);
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 8);
	// li r12,-26
	ctx.r12.s64 = -26;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r6,r10,21728
	ctx.r6.s64 = ctx.r10.s64 + 21728;
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,3
	ctx.r12.s64 = 3;
	// rldicr r12,r12,50,13
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFC000000000000;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// bl 0x8212dc68
	ctx.lr = 0x82195444;
	sub_8212DC68(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// addi r6,r11,21824
	ctx.r6.s64 = ctx.r11.s64 + 21824;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8212dc68
	ctx.lr = 0x8219545C;
	sub_8212DC68(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// addi r6,r11,21856
	ctx.r6.s64 = ctx.r11.s64 + 21856;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8212dc68
	ctx.lr = 0x82195474;
	sub_8212DC68(ctx, base);
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r12,-24
	ctx.r12.s64 = -24;
	// addi r6,r11,21824
	ctx.r6.s64 = ctx.r11.s64 + 21824;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// bl 0x8212dc68
	ctx.lr = 0x821954AC;
	sub_8212DC68(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// addi r6,r11,21856
	ctx.r6.s64 = ctx.r11.s64 + 21856;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8212dc68
	ctx.lr = 0x821954C4;
	sub_8212DC68(ctx, base);
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

DEFINE_REX_FUNC(sub_8219BBB0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-29960
	ctx.r11.s64 = ctx.r11.s64 + -29960;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219BED0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15496
	ctx.r3.s64 = ctx.r11.s64 + -15496;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219C818) {
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
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8219c850
	goto loc_8219C850;
loc_8219C838:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219C84C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8219C850:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8219c838
	if (!ctx.cr6.eq) goto loc_8219C838;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r10.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 96, temp.u32);
	// stfs f0,100(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
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

DEFINE_REX_FUNC(sub_8219F990) {
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
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x8219F9A4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219f9b4
	if (ctx.cr0.eq) goto loc_8219F9B4;
	// bl 0x8219fa08
	ctx.lr = 0x8219F9B0;
	sub_8219FA08(ctx, base);
	// b 0x8219f9b8
	goto loc_8219F9B8;
loc_8219F9B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8219F9B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0EF8) {
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
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x822f6280
	ctx.lr = 0x821A0F0C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a0f1c
	if (ctx.cr0.eq) goto loc_821A0F1C;
	// bl 0x821a0fd8
	ctx.lr = 0x821A0F18;
	sub_821A0FD8(ctx, base);
	// b 0x821a0f20
	goto loc_821A0F20;
loc_821A0F1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A0F20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A2AD0) {
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
	ctx.lr = 0x821A2AD8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821a2e9c
	if (!ctx.cr6.eq) goto loc_821A2E9C;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821a2e9c
	if (ctx.cr6.eq) goto loc_821A2E9C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823ed2c0
	ctx.lr = 0x821A2B08;
	sub_823ED2C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r18,2
	r18.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821a2e98
	if (ctx.cr6.lt) goto loc_821A2E98;
	// li r29,0
	r29.s64 = 0;
	// lis r3,4100
	ctx.r3.s64 = 268697600;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r19,r29
	r19.u64 = r29.u64;
	// ori r20,r3,38
	r20.u64 = ctx.r3.u64 | 38;
	// li r28,1
	r28.s64 = 1;
	// addi r21,r4,-27424
	r21.s64 = ctx.r4.s64 + -27424;
	// addi r27,r5,-27460
	r27.s64 = ctx.r5.s64 + -27460;
	// addi r26,r6,-27500
	r26.s64 = ctx.r6.s64 + -27500;
	// addi r25,r7,-27540
	r25.s64 = ctx.r7.s64 + -27540;
	// addi r24,r8,-27580
	r24.s64 = ctx.r8.s64 + -27580;
	// addi r23,r9,-27616
	r23.s64 = ctx.r9.s64 + -27616;
	// addi r22,r10,-27652
	r22.s64 = ctx.r10.s64 + -27652;
	// addi r30,r11,-27916
	r30.s64 = ctx.r11.s64 + -27916;
loc_821A2B6C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// bgt cr6,0x821a2dac
	if (ctx.cr6.gt) goto loc_821A2DAC;
	// beq cr6,0x821a2d70
	if (ctx.cr6.eq) goto loc_821A2D70;
	// addis r10,r10,-4100
	ctx.r10.s64 = ctx.r10.s64 + -268697600;
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821a2d30
	if (ctx.cr0.eq) goto loc_821A2D30;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x821a2ce4
	if (ctx.cr6.eq) goto loc_821A2CE4;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// beq cr6,0x821a2c48
	if (ctx.cr6.eq) goto loc_821A2C48;
	// cmplwi cr6,r10,27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 27, ctx.xer);
	// bne cr6,0x821a2dc8
	if (!ctx.cr6.eq) goto loc_821A2DC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a2c3c
	if (ctx.cr6.eq) goto loc_821A2C3C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x821a2c3c
	if (ctx.cr6.gt) goto loc_821A2C3C;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,16280
	ctx.r12.s64 = ctx.r12.s64 + 16280;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// nop 
	// addi r12,r12,11244
	ctx.r12.s64 = ctx.r12.s64 + 11244;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821A2C3C;
	case 1:
		goto loc_821A2BEC;
	case 2:
		goto loc_821A2BEC;
	case 3:
		goto loc_821A2BF4;
	case 4:
		goto loc_821A2BFC;
	case 5:
		goto loc_821A2C04;
	case 6:
		goto loc_821A2C0C;
	case 7:
		goto loc_821A2C14;
	case 8:
		goto loc_821A2C1C;
	case 9:
		goto loc_821A2C24;
	case 10:
		goto loc_821A2C2C;
	case 11:
		goto loc_821A2C34;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821A2BEC:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// b 0x821a2c40
	goto loc_821A2C40;
loc_821A2BF4:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821a2c40
	goto loc_821A2C40;
loc_821A2BFC:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821a2c40
	goto loc_821A2C40;
loc_821A2C04:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821a2c40
	goto loc_821A2C40;
loc_821A2C0C:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821a2c40
	goto loc_821A2C40;
loc_821A2C14:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821a2c40
	goto loc_821A2C40;
loc_821A2C1C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x821a2c40
	goto loc_821A2C40;
loc_821A2C24:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x821a2c40
	goto loc_821A2C40;
loc_821A2C2C:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x821a2c40
	goto loc_821A2C40;
loc_821A2C34:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x821a2c40
	goto loc_821A2C40;
loc_821A2C3C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821A2C40:
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2C48:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a2cd8
	if (ctx.cr6.eq) goto loc_821A2CD8;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x821a2cd8
	if (ctx.cr6.gt) goto loc_821A2CD8;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,16264
	ctx.r12.s64 = ctx.r12.s64 + 16264;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// nop 
	// addi r12,r12,11400
	ctx.r12.s64 = ctx.r12.s64 + 11400;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821A2CD8;
	case 1:
		goto loc_821A2C88;
	case 2:
		goto loc_821A2C88;
	case 3:
		goto loc_821A2C90;
	case 4:
		goto loc_821A2C98;
	case 5:
		goto loc_821A2CA0;
	case 6:
		goto loc_821A2CA8;
	case 7:
		goto loc_821A2CB0;
	case 8:
		goto loc_821A2CB8;
	case 9:
		goto loc_821A2CC0;
	case 10:
		goto loc_821A2CC8;
	case 11:
		goto loc_821A2CD0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821A2C88:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// b 0x821a2cdc
	goto loc_821A2CDC;
loc_821A2C90:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821a2cdc
	goto loc_821A2CDC;
loc_821A2C98:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821a2cdc
	goto loc_821A2CDC;
loc_821A2CA0:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821a2cdc
	goto loc_821A2CDC;
loc_821A2CA8:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821a2cdc
	goto loc_821A2CDC;
loc_821A2CB0:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821a2cdc
	goto loc_821A2CDC;
loc_821A2CB8:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x821a2cdc
	goto loc_821A2CDC;
loc_821A2CC0:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x821a2cdc
	goto loc_821A2CDC;
loc_821A2CC8:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x821a2cdc
	goto loc_821A2CDC;
loc_821A2CD0:
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x821a2cdc
	goto loc_821A2CDC;
loc_821A2CD8:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821A2CDC:
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2CE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a2d18
	if (ctx.cr6.eq) goto loc_821A2D18;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a2d18
	if (ctx.cr6.lt) goto loc_821A2D18;
	// beq cr6,0x821a2d28
	if (ctx.cr6.eq) goto loc_821A2D28;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821a2d20
	if (ctx.cr6.lt) goto loc_821A2D20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r5,453
	ctx.r5.s64 = 453;
	// bl 0x821231d0
	ctx.lr = 0x821A2D18;
	sub_821231D0(ctx, base);
loc_821A2D18:
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2D20:
	// stw r18,80(r31)
	REX_STORE_U32(r31.u32 + 80, r18.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2D28:
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2D30:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a2d60
	if (ctx.cr6.eq) goto loc_821A2D60;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a2d60
	if (ctx.cr6.eq) goto loc_821A2D60;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821a2d68
	if (ctx.cr6.eq) goto loc_821A2D68;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,582
	ctx.r5.s64 = 582;
	// bl 0x821231d0
	ctx.lr = 0x821A2D60;
	sub_821231D0(ctx, base);
loc_821A2D60:
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2D68:
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2D70:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a2d9c
	if (ctx.cr6.eq) goto loc_821A2D9C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a2d9c
	if (ctx.cr6.lt) goto loc_821A2D9C;
	// beq cr6,0x821a2da4
	if (ctx.cr6.eq) goto loc_821A2DA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r5,478
	ctx.r5.s64 = 478;
	// bl 0x821231d0
	ctx.lr = 0x821A2D9C;
	sub_821231D0(ctx, base);
loc_821A2D9C:
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2DA4:
	// stw r28,100(r31)
	REX_STORE_U32(r31.u32 + 100, r28.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2DAC:
	// addis r10,r10,-4100
	ctx.r10.s64 = ctx.r10.s64 + -268697600;
	// addic. r10,r10,-39
	ctx.xer.ca = ctx.r10.u32 > 38;
	ctx.r10.s64 = ctx.r10.s64 + -39;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821a2e54
	if (ctx.cr0.eq) goto loc_821A2E54;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821a2e18
	if (ctx.cr6.eq) goto loc_821A2E18;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x821a2ddc
	if (ctx.cr6.eq) goto loc_821A2DDC;
loc_821A2DC8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r5,590
	ctx.r5.s64 = 590;
	// bl 0x821231d0
	ctx.lr = 0x821A2DD8;
	sub_821231D0(ctx, base);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2DDC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a2e08
	if (ctx.cr6.eq) goto loc_821A2E08;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a2e08
	if (ctx.cr6.lt) goto loc_821A2E08;
	// beq cr6,0x821a2e10
	if (ctx.cr6.eq) goto loc_821A2E10;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,557
	ctx.r5.s64 = 557;
	// bl 0x821231d0
	ctx.lr = 0x821A2E08;
	sub_821231D0(ctx, base);
loc_821A2E08:
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2E10:
	// stw r28,88(r31)
	REX_STORE_U32(r31.u32 + 88, r28.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2E18:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a2e44
	if (ctx.cr6.eq) goto loc_821A2E44;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a2e44
	if (ctx.cr6.lt) goto loc_821A2E44;
	// beq cr6,0x821a2e4c
	if (ctx.cr6.eq) goto loc_821A2E4C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x821231d0
	ctx.lr = 0x821A2E44;
	sub_821231D0(ctx, base);
loc_821A2E44:
	// stw r29,92(r31)
	REX_STORE_U32(r31.u32 + 92, r29.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2E4C:
	// stw r28,92(r31)
	REX_STORE_U32(r31.u32 + 92, r28.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2E54:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a2e88
	if (ctx.cr6.eq) goto loc_821A2E88;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a2e88
	if (ctx.cr6.lt) goto loc_821A2E88;
	// beq cr6,0x821a2eac
	if (ctx.cr6.eq) goto loc_821A2EAC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821a2ea4
	if (ctx.cr6.lt) goto loc_821A2EA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// li r5,507
	ctx.r5.s64 = 507;
	// bl 0x821231d0
	ctx.lr = 0x821A2E88;
	sub_821231D0(ctx, base);
loc_821A2E88:
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
loc_821A2E8C:
	// addi r19,r19,40
	r19.s64 = r19.s64 + 40;
	// cmplwi cr6,r19,320
	ctx.cr6.compare<uint32_t>(r19.u32, 320, ctx.xer);
	// blt cr6,0x821a2b6c
	if (ctx.cr6.lt) goto loc_821A2B6C;
loc_821A2E98:
	// stw r18,32(r31)
	REX_STORE_U32(r31.u32 + 32, r18.u32);
loc_821A2E9C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
loc_821A2EA4:
	// stw r18,96(r31)
	REX_STORE_U32(r31.u32 + 96, r18.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
loc_821A2EAC:
	// stw r28,96(r31)
	REX_STORE_U32(r31.u32 + 96, r28.u32);
	// b 0x821a2e8c
	goto loc_821A2E8C;
}

DEFINE_REX_FUNC(sub_821BC818) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x821BC834;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BC840;
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
	ctx.lr = 0x821BC868;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821BC878;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
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

DEFINE_REX_FUNC(sub_821BFD20) {
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
	// addi r4,r4,112
	ctx.r4.s64 = ctx.r4.s64 + 112;
	// addi r3,r11,1592
	ctx.r3.s64 = ctx.r11.s64 + 1592;
	// bl 0x8215f5f8
	ctx.lr = 0x821BFD44;
	sub_8215F5F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821bfd68
	if (!ctx.cr6.eq) goto loc_821BFD68;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821bfd70
	if (ctx.cr6.lt) goto loc_821BFD70;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821bfd70
	goto loc_821BFD70;
loc_821BFD68:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-26856
	ctx.r11.s64 = ctx.r11.s64 + -26856;
loc_821BFD70:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_821C35C8) {
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
	ctx.lr = 0x821C35D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17632
	ctx.r11.s64 = ctx.r11.s64 + -17632;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r3,152
	r30.s64 = ctx.r3.s64 + 152;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r29,4
	r29.s64 = 4;
	// lis r28,-32106
	r28.s64 = -2104098816;
loc_821C35F4:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c3614
	if (ctx.cr6.eq) goto loc_821C3614;
	// lwz r3,6040(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3614;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C3614:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x821c35f4
	if (!ctx.cr0.eq) goto loc_821C35F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82120ac0
	ctx.lr = 0x821C3630;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821C3638;
	sub_82178388(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c3648
	if (ctx.cr0.eq) goto loc_821C3648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821C3648;
	sub_8269CE98(ctx, base);
loc_821C3648:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821C7640) {
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
	// lbz r11,736(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 736);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c7680
	if (!ctx.cr0.eq) goto loc_821C7680;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,124(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 124);
	// stb r11,736(r4)
	REX_STORE_U8(ctx.r4.u32 + 736, ctx.r11.u8);
	// bl 0x821914c8
	ctx.lr = 0x821C7678;
	sub_821914C8(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// bl 0x821e4490
	ctx.lr = 0x821C7680;
	sub_821E4490(ctx, base);
loc_821C7680:
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

DEFINE_REX_FUNC(sub_821C9EB0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lbz r9,116(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 116);
	// addi r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 + 116;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,6216(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 6216);
	// addi r10,r11,204
	ctx.r10.s64 = ctx.r11.s64 + 204;
	// stb r9,204(r11)
	REX_STORE_U8(ctx.r11.u32 + 204, ctx.r9.u8);
	// lbz r10,117(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 117);
	// stb r10,205(r11)
	REX_STORE_U8(ctx.r11.u32 + 205, ctx.r10.u8);
	// lbz r10,118(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 118);
	// stb r10,206(r11)
	REX_STORE_U8(ctx.r11.u32 + 206, ctx.r10.u8);
	// lbz r10,119(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 119);
	// stb r10,207(r11)
	REX_STORE_U8(ctx.r11.u32 + 207, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CC830) {
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
	ctx.lr = 0x821CC844;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cc854
	if (ctx.cr0.eq) goto loc_821CC854;
	// bl 0x821cc868
	ctx.lr = 0x821CC850;
	sub_821CC868(ctx, base);
	// b 0x821cc858
	goto loc_821CC858;
loc_821CC854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CC858:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CE020) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x821a1f88
	ctx.lr = 0x821CE048;
	sub_821A1F88(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ce0c8
	if (ctx.cr6.eq) goto loc_821CE0C8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,80(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f0,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822fbfc0
	ctx.lr = 0x821CE0C8;
	sub_822FBFC0(ctx, base);
loc_821CE0C8:
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

DEFINE_REX_FUNC(sub_821D5AA8) {
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
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x821D5ACC;
	sub_8212E8B0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d5ae4
	if (ctx.cr6.eq) goto loc_821D5AE4;
	// bl 0x821357c8
	ctx.lr = 0x821D5AE0;
	sub_821357C8(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_821D5AE4:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d5b0c
	if (ctx.cr6.eq) goto loc_821D5B0C;
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
	ctx.lr = 0x821D5B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_821D5B0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D5B20;
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

DEFINE_REX_FUNC(sub_821DA210) {
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
	ctx.lr = 0x821DA218;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x821613d8
	ctx.lr = 0x821DA234;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821613d8
	ctx.lr = 0x821DA244;
	sub_821613D8(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// lis r26,-32126
	r26.s64 = -2105409536;
	// li r24,1
	r24.s64 = 1;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x821da318
	if (!ctx.cr6.lt) goto loc_821DA318;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821da27c
	if (ctx.cr6.eq) goto loc_821DA27C;
	// rlwinm r3,r29,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822c1a70
	ctx.lr = 0x821DA274;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821da280
	goto loc_821DA280;
loc_821DA27C:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_821DA280:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821da2d4
	if (!ctx.cr6.gt) goto loc_821DA2D4;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_821DA294:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821da2c4
	if (ctx.cr6.eq) goto loc_821DA2C4;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_821DA2C4:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x821da294
	if (!ctx.cr0.eq) goto loc_821DA294;
loc_821DA2D4:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821da30c
	if (ctx.cr6.eq) goto loc_821DA30C;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821da308
	if (ctx.cr0.eq) goto loc_821DA308;
	// lwz r11,112(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 112);
	// lwz r9,-19400(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r27)
	REX_STORE_U32(r27.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821DA308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DA308:
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
loc_821DA30C:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r24,16(r31)
	REX_STORE_U8(r31.u32 + 16, r24.u8);
loc_821DA318:
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x821da434
	if (ctx.cr6.lt) goto loc_821DA434;
	// ble cr6,0x821da3ec
	if (!ctx.cr6.gt) goto loc_821DA3EC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x821da3ec
	if (!ctx.cr6.lt) goto loc_821DA3EC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821da350
	if (ctx.cr6.eq) goto loc_821DA350;
	// rlwinm r3,r29,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822c1a70
	ctx.lr = 0x821DA348;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821da354
	goto loc_821DA354;
loc_821DA350:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_821DA354:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821da3a8
	if (!ctx.cr6.gt) goto loc_821DA3A8;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_821DA368:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821da398
	if (ctx.cr6.eq) goto loc_821DA398;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_821DA398:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x821da368
	if (!ctx.cr0.eq) goto loc_821DA368;
loc_821DA3A8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821da3e0
	if (ctx.cr6.eq) goto loc_821DA3E0;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821da3dc
	if (ctx.cr0.eq) goto loc_821DA3DC;
	// lwz r11,112(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 112);
	// lwz r9,-19400(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r27)
	REX_STORE_U32(r27.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821DA3DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DA3DC:
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
loc_821DA3E0:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r24,16(r31)
	REX_STORE_U8(r31.u32 + 16, r24.u8);
loc_821DA3EC:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// bge cr6,0x821da434
	if (!ctx.cr6.lt) goto loc_821DA434;
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r28,r29
	ctx.r9.u64 = r29.u64 - r28.u64;
loc_821DA3FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821da428
	if (ctx.cr0.eq) goto loc_821DA428;
	// lwz r8,0(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 8);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 12);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_821DA428:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x821da3fc
	if (!ctx.cr0.eq) goto loc_821DA3FC;
loc_821DA434:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x821613d8
	ctx.lr = 0x821DA448;
	sub_821613D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_821E9BE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821E9BF0;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821e9c70
	if (!ctx.cr6.gt) goto loc_821E9C70;
	// li r31,0
	r31.s64 = 0;
loc_821E9C20:
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x821e9c58
	if (ctx.cr6.lt) goto loc_821E9C58;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x821e9c58
	if (!ctx.cr6.lt) goto loc_821E9C58;
	// lwz r3,40(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 40);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E9C58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E9C58:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821e9c20
	if (ctx.cr6.lt) goto loc_821E9C20;
loc_821E9C70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821EE068) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,16060
	ctx.r11.s64 = ctx.r11.s64 + 16060;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821ee0a0
	if (ctx.cr6.eq) goto loc_821EE0A0;
	// bl 0x821357c8
	ctx.lr = 0x821EE0A0;
	sub_821357C8(ctx, base);
loc_821EE0A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82120ac0
	ctx.lr = 0x821EE0B0;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214e4b0
	ctx.lr = 0x821EE0B8;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee0c8
	if (ctx.cr0.eq) goto loc_821EE0C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821EE0C8;
	sub_8269CE98(ctx, base);
loc_821EE0C8:
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

DEFINE_REX_FUNC(sub_821F4CC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F4CD0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// beq cr6,0x821f4d04
	if (ctx.cr6.eq) goto loc_821F4D04;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,216
	ctx.r5.s64 = 216;
	// bl 0x821231d0
	ctx.lr = 0x821F4D04;
	sub_821231D0(ctx, base);
loc_821F4D04:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16680
	ctx.r4.s64 = ctx.r11.s64 + -16680;
	// bl 0x82120600
	ctx.lr = 0x821F4D14;
	sub_82120600(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x821F4D28;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23108
	ctx.r4.s64 = ctx.r11.s64 + 23108;
	// bl 0x8215f338
	ctx.lr = 0x821F4D34;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F4D3C;
	sub_8215F2D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F4D48;
	sub_821F6130(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821F4D5C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F8098) {
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
	// addi r11,r11,24412
	ctx.r11.s64 = ctx.r11.s64 + 24412;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821f80c4
	if (ctx.cr0.eq) goto loc_821F80C4;
	// bl 0x8269ce98
	ctx.lr = 0x821F80C4;
	sub_8269CE98(ctx, base);
loc_821F80C4:
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

DEFINE_REX_FUNC(sub_821FA608) {
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
	ctx.lr = 0x821FA610;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mulli r10,r4,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// addi r11,r11,1640
	ctx.r11.s64 = ctx.r11.s64 + 1640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,24632
	ctx.r4.s64 = ctx.r9.s64 + 24632;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FA644;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FA64C;
	sub_8215F2D0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA650;
	sub_8215F990(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24612
	ctx.r4.s64 = ctx.r11.s64 + 24612;
	// bl 0x8215f338
	ctx.lr = 0x821FA664;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FA66C;
	sub_8215F2D0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA670;
	sub_8215F990(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24592
	ctx.r4.s64 = ctx.r11.s64 + 24592;
	// bl 0x8215f338
	ctx.lr = 0x821FA684;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FA68C;
	sub_8215F2D0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA690;
	sub_8215F990(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821FCBD0) {
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
	ctx.lr = 0x821FCBD8;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r11,25816
	r29.s64 = ctx.r11.s64 + 25816;
	// lwz r3,6036(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6036);
	// addi r30,r10,-25848
	r30.s64 = ctx.r10.s64 + -25848;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCC0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FCC0C:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// beq 0x821fcc30
	if (ctx.cr0.eq) goto loc_821FCC30;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fcc0c
	if (ctx.cr6.eq) goto loc_821FCC0C;
loc_821FCC30:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821fcc40
	if (!ctx.cr0.eq) goto loc_821FCC40;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r11,25848
	r29.s64 = ctx.r11.s64 + 25848;
loc_821FCC40:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lfs f31,220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 220);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCC64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCC7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x821FCC88;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCCA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821FCCB0;
	sub_82120AC0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCCC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-25744
	ctx.r4.s64 = ctx.r11.s64 + -25744;
	// bl 0x82125d00
	ctx.lr = 0x821FCCD4;
	sub_82125D00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCCF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,26000
	r29.s64 = ctx.r11.s64 + 26000;
loc_821FCD00:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCD1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCD38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCD54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120600
	ctx.lr = 0x821FCD60;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FCD7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821FCD8C;
	sub_82120AC0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x821fcd00
	if (ctx.cr6.lt) goto loc_821FCD00;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82207E98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f11,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,44(r3)
	REX_STORE_U8(ctx.r3.u32 + 44, ctx.r8.u8);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// lfsx f10,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f0,f10,f0,f12
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// b 0x82208480
	sub_82208480(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220DDE8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,-31088
	ctx.r4.s64 = ctx.r11.s64 + -31088;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8220DE08;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31064
	ctx.r4.s64 = ctx.r11.s64 + -31064;
	// bl 0x8215f338
	ctx.lr = 0x8220DE14;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220DE18;
	sub_8215FA30(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220de40
	if (ctx.cr6.eq) goto loc_8220DE40;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220DE40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220DE40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211C10) {
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
	ctx.lr = 0x82211C3C;
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
	ctx.lr = 0x82211C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,852(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f13,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82211ca8
	if (!ctx.cr6.gt) goto loc_82211CA8;
	// lfs f0,860(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 860);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,860(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 860, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82211ca8
	if (!ctx.cr6.gt) goto loc_82211CA8;
	// lfs f0,864(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 864);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,288(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,856(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f12,f1,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f1.f64, -ctx.f0.f64)));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,864(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 864, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82211ca8
	if (!ctx.cr6.lt) goto loc_82211CA8;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,864(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 864, temp.u32);
loc_82211CA8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6276(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211CC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ori r11,r11,38527
	ctx.r11.u64 = ctx.r11.u64 | 38527;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82211cd4
	if (!ctx.cr6.lt) goto loc_82211CD4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82211CD4:
	// lwz r9,872(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 872);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82211cf4
	if (ctx.cr6.eq) goto loc_82211CF4;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,872(r31)
	REX_STORE_U32(r31.u32 + 872, ctx.r11.u32);
	// stfs f0,876(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 876, temp.u32);
loc_82211CF4:
	// lfs f0,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 876);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
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
	// lfsx f12,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,876(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 876, temp.u32);
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

DEFINE_REX_FUNC(sub_822249E0) {
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
	ctx.lr = 0x822249E8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,6272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82224ce8
	if (ctx.cr6.eq) goto loc_82224CE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r29,r11,16492
	r29.s64 = ctx.r11.s64 + 16492;
	// addi r27,r10,1624
	r27.s64 = ctx.r10.s64 + 1624;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224A24;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x82224A30;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224A34;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r26,r11,16504
	r26.s64 = ctx.r11.s64 + 16504;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82125d00
	ctx.lr = 0x82224A4C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224c30
	if (!ctx.cr0.eq) goto loc_82224C30;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// bl 0x82125d00
	ctx.lr = 0x82224A64;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82224bd4
	if (ctx.cr0.eq) goto loc_82224BD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x82125d00
	ctx.lr = 0x82224A7C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82224bd4
	if (ctx.cr0.eq) goto loc_82224BD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x82125d00
	ctx.lr = 0x82224A94;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224ce8
	if (!ctx.cr0.eq) goto loc_82224CE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,32436
	ctx.r4.s64 = ctx.r11.s64 + 32436;
	// bl 0x82120600
	ctx.lr = 0x82224AAC;
	sub_82120600(ctx, base);
	// lwz r3,6272(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6272);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r29,1
	r29.s64 = 1;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82224b84
	if (!ctx.cr0.eq) goto loc_82224B84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,32428
	ctx.r4.s64 = ctx.r11.s64 + 32428;
	// bl 0x82120600
	ctx.lr = 0x82224AF8;
	sub_82120600(ctx, base);
	// lwz r3,6272(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6272);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r29,3
	r29.s64 = 3;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224B2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82224b84
	if (!ctx.cr0.eq) goto loc_82224B84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// bl 0x82120600
	ctx.lr = 0x82224B44;
	sub_82120600(ctx, base);
	// lwz r3,6272(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6272);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r29,7
	r29.s64 = 7;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224B78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82224b88
	if (ctx.cr0.eq) goto loc_82224B88;
loc_82224B84:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82224B88:
	// rlwinm. r10,r29,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82224ba8
	if (ctx.cr0.eq) goto loc_82224BA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r29,r29,0,30,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x82224BA8;
	sub_82120AC0(ctx, base);
loc_82224BA8:
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82224bc4
	if (ctx.cr0.eq) goto loc_82224BC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82224BC4;
	sub_82120AC0(ctx, base);
loc_82224BC4:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82224c28
	if (ctx.cr0.eq) goto loc_82224C28;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82224c1c
	goto loc_82224C1C;
loc_82224BD4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,24536
	ctx.r4.s64 = ctx.r11.s64 + 24536;
	// bl 0x82120600
	ctx.lr = 0x82224BE4;
	sub_82120600(ctx, base);
	// lwz r3,6272(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6272);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224C14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_82224C1C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82224C28;
	sub_82120AC0(ctx, base);
loc_82224C28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82224cec
	goto loc_82224CEC;
loc_82224C30:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,20280
	ctx.r4.s64 = ctx.r11.s64 + 20280;
	// bl 0x82125d00
	ctx.lr = 0x82224C40;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224c68
	if (!ctx.cr0.eq) goto loc_82224C68;
	// lwz r3,6272(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6272);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224C64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82224cec
	goto loc_82224CEC;
loc_82224C68:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x82125d00
	ctx.lr = 0x82224C78;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224ce8
	if (!ctx.cr0.eq) goto loc_82224CE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x82125d00
	ctx.lr = 0x82224C90;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224ce8
	if (!ctx.cr0.eq) goto loc_82224CE8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224CA4;
	sub_8215F338(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224CAC;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224CB0;
	sub_8215FA30(ctx, base);
	// lwz r11,6272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6272);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224CE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82224cec
	goto loc_82224CEC;
loc_82224CE8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82224CEC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82236AF0) {
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
	// lwz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82236b68
	if (ctx.cr6.eq) goto loc_82236B68;
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r3,588(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 588);
	// bl 0x821f6c58
	ctx.lr = 0x82236B24;
	sub_821F6C58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82236b68
	if (ctx.cr6.eq) goto loc_82236B68;
	// lfs f13,744(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 744);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// fsel f0,f0,f13,f1
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// stfs f0,744(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 744, temp.u32);
loc_82236B68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223DD38) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8223dd68
	if (ctx.cr6.lt) goto loc_8223DD68;
	// lwz r11,3840(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3840);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8223dd80
	if (ctx.cr6.lt) goto loc_8223DD80;
loc_8223DD68:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-16772
	ctx.r4.s64 = ctx.r11.s64 + -16772;
	// addi r3,r10,-18176
	ctx.r3.s64 = ctx.r10.s64 + -18176;
	// li r5,75
	ctx.r5.s64 = 75;
	// bl 0x821231d0
	ctx.lr = 0x8223DD80;
	sub_821231D0(ctx, base);
loc_8223DD80:
	// lwz r10,3848(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3848);
	// mulli r11,r31,320
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(320));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_822416F8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,3908
	ctx.r3.s64 = ctx.r3.s64 + 3908;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82241700) {
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
	ctx.lr = 0x82241708;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// bl 0x82279e68
	ctx.lr = 0x82241718;
	sub_82279E68(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r26,0
	r26.s64 = 0;
	// li r28,16
	r28.s64 = 16;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224173C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82241878
	if (!ctx.cr0.gt) goto loc_82241878;
loc_82241744:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224175C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224177C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3880(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3880);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x82241798
	if (!ctx.cr6.lt) goto loc_82241798;
	// mr r26,r29
	r26.u64 = r29.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82241798:
	// lwz r3,6284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6284);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822417B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82241744
	if (ctx.cr6.lt) goto loc_82241744;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82241878
	if (!ctx.cr6.eq) goto loc_82241878;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x822417e0
	if (!ctx.cr6.eq) goto loc_822417E0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-16588
	ctx.r4.s64 = ctx.r11.s64 + -16588;
	// addi r3,r10,-16380
	ctx.r3.s64 = ctx.r10.s64 + -16380;
	// li r5,724
	ctx.r5.s64 = 724;
	// bl 0x821231d0
	ctx.lr = 0x822417E0;
	sub_821231D0(ctx, base);
loc_822417E0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r27,3788
	ctx.r4.s64 = r27.s64 + 3788;
	// addi r5,r11,17388
	ctx.r5.s64 = ctx.r11.s64 + 17388;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82121610
	ctx.lr = 0x822417F4;
	sub_82121610(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r26,144
	ctx.r4.s64 = r26.s64 + 144;
	// bl 0x82121dd0
	ctx.lr = 0x82241804;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120670
	ctx.lr = 0x82241810;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82241820;
	sub_82120AC0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x82241850
	if (ctx.cr0.eq) goto loc_82241850;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31468
	ctx.r4.s64 = ctx.r11.s64 + -31468;
	// b 0x82241858
	goto loc_82241858;
loc_82241850:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-23520
	ctx.r4.s64 = ctx.r11.s64 + -23520;
loc_82241858:
	// bl 0x82121928
	ctx.lr = 0x8224185C;
	sub_82121928(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8223db98
	ctx.lr = 0x82241868;
	sub_8223DB98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82241878;
	sub_82120AC0(ctx, base);
loc_82241878:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8224C7C8) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// addi r4,r11,-13276
	ctx.r4.s64 = ctx.r11.s64 + -13276;
	// bl 0x821fd140
	ctx.lr = 0x8224C7EC;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c828
	if (ctx.cr0.eq) goto loc_8224C828;
	// lbz r11,705(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224c808
	if (ctx.cr0.eq) goto loc_8224C808;
loc_8224C800:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224c82c
	goto loc_8224C82C;
loc_8224C808:
	// lbz r11,698(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 698);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224c800
	if (!ctx.cr0.eq) goto loc_8224C800;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8224c82c
	goto loc_8224C82C;
loc_8224C828:
	// lbz r3,656(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 656);
loc_8224C82C:
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

DEFINE_REX_FUNC(sub_822505C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x821d7690
	ctx.lr = 0x822505F8;
	sub_821D7690(ctx, base);
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f12,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_82253998) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822539A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-14776
	ctx.r11.s64 = ctx.r11.s64 + -14776;
	// addi r10,r10,31396
	ctx.r10.s64 = ctx.r10.s64 + 31396;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r8,-10632
	ctx.r11.s64 = ctx.r8.s64 + -10632;
	// addi r9,r9,-10656
	ctx.r9.s64 = ctx.r9.s64 + -10656;
	// addi r10,r7,-10596
	ctx.r10.s64 = ctx.r7.s64 + -10596;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216ba58
	ctx.lr = 0x822539F0;
	sub_8216BA58(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82253A00;
	sub_82120AC0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	r30.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82253A28;
	sub_82120AC0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// addi r11,r9,19424
	ctx.r11.s64 = ctx.r9.s64 + 19424;
	// stb r30,116(r31)
	REX_STORE_U8(r31.u32 + 116, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// addi r5,r8,-28712
	ctx.r5.s64 = ctx.r8.s64 + -28712;
	// stw r10,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// stb r30,132(r31)
	REX_STORE_U8(r31.u32 + 132, r30.u8);
	// stb r30,133(r31)
	REX_STORE_U8(r31.u32 + 133, r30.u8);
	// stb r30,134(r31)
	REX_STORE_U8(r31.u32 + 134, r30.u8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253A84;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,19624
	ctx.r11.s64 = ctx.r11.s64 + 19624;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-23388
	ctx.r5.s64 = ctx.r10.s64 + -23388;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253AAC;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,19648
	ctx.r11.s64 = ctx.r11.s64 + 19648;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-11560
	ctx.r5.s64 = ctx.r10.s64 + -11560;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253AD4;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,19672
	ctx.r11.s64 = ctx.r11.s64 + 19672;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-23368
	ctx.r5.s64 = ctx.r10.s64 + -23368;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253AFC;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,19696
	ctx.r11.s64 = ctx.r11.s64 + 19696;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-26336
	ctx.r5.s64 = ctx.r10.s64 + -26336;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253B24;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,19720
	ctx.r11.s64 = ctx.r11.s64 + 19720;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-26628
	ctx.r5.s64 = ctx.r10.s64 + -26628;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253B4C;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,19744
	ctx.r11.s64 = ctx.r11.s64 + 19744;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-26596
	ctx.r5.s64 = ctx.r10.s64 + -26596;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253B74;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,19856
	ctx.r11.s64 = ctx.r11.s64 + 19856;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-26576
	ctx.r5.s64 = ctx.r10.s64 + -26576;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253B9C;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,19968
	ctx.r11.s64 = ctx.r11.s64 + 19968;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-23288
	ctx.r5.s64 = ctx.r10.s64 + -23288;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253BC4;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,20208
	ctx.r11.s64 = ctx.r11.s64 + 20208;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-23208
	ctx.r5.s64 = ctx.r10.s64 + -23208;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253BEC;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,20248
	ctx.r11.s64 = ctx.r11.s64 + 20248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,19844
	ctx.r5.s64 = ctx.r10.s64 + 19844;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253C14;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,20368
	ctx.r11.s64 = ctx.r11.s64 + 20368;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r5,r10,-23068
	ctx.r5.s64 = ctx.r10.s64 + -23068;
	// bl 0x822568a0
	ctx.lr = 0x82253C3C;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,20688
	ctx.r11.s64 = ctx.r11.s64 + 20688;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-23036
	ctx.r5.s64 = ctx.r10.s64 + -23036;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253C64;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,21080
	ctx.r11.s64 = ctx.r11.s64 + 21080;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-27304
	ctx.r5.s64 = ctx.r10.s64 + -27304;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253C8C;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,21264
	ctx.r11.s64 = ctx.r11.s64 + 21264;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-26364
	ctx.r5.s64 = ctx.r10.s64 + -26364;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253CB4;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,21280
	ctx.r11.s64 = ctx.r11.s64 + 21280;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-27088
	ctx.r5.s64 = ctx.r10.s64 + -27088;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253CDC;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-28736
	ctx.r5.s64 = ctx.r10.s64 + -28736;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253D04;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,22120
	ctx.r11.s64 = ctx.r11.s64 + 22120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r10,-25300
	ctx.r5.s64 = ctx.r10.s64 + -25300;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253D2C;
	sub_822568A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,22144
	ctx.r11.s64 = ctx.r11.s64 + 22144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r10,-22044
	ctx.r5.s64 = ctx.r10.s64 + -22044;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822568a0
	ctx.lr = 0x82253D54;
	sub_822568A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8226C5F0) {
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
	ctx.lr = 0x8226C5F8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,17388
	r30.s64 = ctx.r11.s64 + 17388;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120600
	ctx.lr = 0x8226C618;
	sub_82120600(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6256(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226C63C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8226C650;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c71c
	if (ctx.cr0.eq) goto loc_8226C71C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x8226C664;
	sub_82120600(ctx, base);
	// lwz r3,6256(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6256);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226C688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8226C69C;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c71c
	if (ctx.cr0.eq) goto loc_8226C71C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-16680
	ctx.r4.s64 = ctx.r11.s64 + -16680;
	// bl 0x8215f670
	ctx.lr = 0x8226C6B8;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226C6C0;
	sub_8215F0F0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,88(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8226c714
	if (ctx.cr6.gt) goto loc_8226C714;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-7928
	r30.s64 = ctx.r11.s64 + -7928;
loc_8226C6E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226C6F0;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226C6F4;
	sub_8215F270(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226C6FC;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r27)
	REX_STORE_U32(r27.u32 + 8, r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8226c6e4
	if (!ctx.cr6.gt) goto loc_8226C6E4;
loc_8226C714:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226c720
	goto loc_8226C720;
loc_8226C71C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226C720:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82274488) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82274490;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8224cba8
	ctx.lr = 0x8227449C;
	sub_8224CBA8(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// addi r4,r11,-13180
	ctx.r4.s64 = ctx.r11.s64 + -13180;
	// bl 0x821fd140
	ctx.lr = 0x822744AC;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822744dc
	if (ctx.cr0.eq) goto loc_822744DC;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822744d4
	if (ctx.cr6.eq) goto loc_822744D4;
	// lbz r11,705(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x822744d8
	if (ctx.cr0.eq) goto loc_822744D8;
loc_822744D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822744D8:
	// stb r11,1056(r31)
	REX_STORE_U8(r31.u32 + 1056, ctx.r11.u8);
loc_822744DC:
	// lwz r11,1044(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82274630
	if (!ctx.cr6.eq) goto loc_82274630;
	// lbz r11,1056(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1056);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82274630
	if (ctx.cr0.eq) goto loc_82274630;
	// lwz r3,200(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 200);
	// bl 0x821e9ec0
	ctx.lr = 0x822744FC;
	sub_821E9EC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-20588
	ctx.r4.s64 = ctx.r11.s64 + -20588;
	// bl 0x8215f338
	ctx.lr = 0x82274508;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-3692
	ctx.r4.s64 = ctx.r11.s64 + -3692;
	// bl 0x8215f338
	ctx.lr = 0x82274514;
	sub_8215F338(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8227453c
	if (!ctx.cr6.eq) goto loc_8227453C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82274540
	goto loc_82274540;
loc_8227453C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82274540:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82274630
	if (ctx.cr6.eq) goto loc_82274630;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8227456c
	if (!ctx.cr6.eq) goto loc_8227456C;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82274570
	goto loc_82274570;
loc_8227456C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82274570:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822745dc
	if (!ctx.cr6.gt) goto loc_822745DC;
	// addi r3,r31,1052
	ctx.r3.s64 = r31.s64 + 1052;
loc_8227457C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822745a0
	if (!ctx.cr6.eq) goto loc_822745A0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r30,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	r30.s64 = ctx.r11.s32 >> 4;
	// b 0x822745a4
	goto loc_822745A4;
loc_822745A0:
	// li r30,0
	r30.s64 = 0;
loc_822745A4:
	// bl 0x821a33a0
	ctx.lr = 0x822745A8;
	sub_821A33A0(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lwz r10,1048(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8227457c
	if (ctx.cr6.eq) goto loc_8227457C;
loc_822745DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822745E8;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8227460c
	if (!ctx.cr6.eq) goto loc_8227460C;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82274614
	if (ctx.cr6.lt) goto loc_82274614;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82274614
	goto loc_82274614;
loc_8227460C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
loc_82274614:
	// addi r3,r31,1040
	ctx.r3.s64 = r31.s64 + 1040;
	// bl 0x821ea0e0
	ctx.lr = 0x8227461C;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227462c
	if (ctx.cr0.eq) goto loc_8227462C;
	// lwz r3,1044(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1044);
	// bl 0x822fbe20
	ctx.lr = 0x8227462C;
	sub_822FBE20(ctx, base);
loc_8227462C:
	// stw r30,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, r30.u32);
loc_82274630:
	// lwz r3,1044(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1044);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822746e4
	if (ctx.cr6.eq) goto loc_822746E4;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,320
	ctx.r8.s64 = ctx.r10.s64 + 320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,320(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 320);
	// ld r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 328);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x822fbfc0
	ctx.lr = 0x822746CC;
	sub_822FBFC0(ctx, base);
	// lbz r11,705(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 705);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822746e4
	if (ctx.cr0.eq) goto loc_822746E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1040
	ctx.r3.s64 = r31.s64 + 1040;
	// bl 0x821ea168
	ctx.lr = 0x822746E4;
	sub_821EA168(ctx, base);
loc_822746E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82287490) {
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
	ctx.lr = 0x82287498;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,-608
	r29.s64 = ctx.r11.s64 + -608;
	// bne cr6,0x822874cc
	if (!ctx.cr6.eq) goto loc_822874CC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x822874CC;
	sub_821231D0(ctx, base);
loc_822874CC:
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(r28.u32, 14, ctx.xer);
	// bge cr6,0x822874e8
	if (!ctx.cr6.lt) goto loc_822874E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x822874E8;
	sub_821231D0(ctx, base);
loc_822874E8:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,32781
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32781, ctx.xer);
	// beq cr6,0x82287508
	if (ctx.cr6.eq) goto loc_82287508;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x82287508;
	sub_821231D0(ctx, base);
loc_82287508:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ldx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U64(r30.u32 + ctx.r11.u32);
	// bl 0x8228e020
	ctx.lr = 0x82287520;
	sub_8228E020(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r3,10(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 10);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8228df80
	ctx.lr = 0x82287534;
	sub_8228DF80(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r28,0(r10)
	r28.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r27,0(r30)
	r27.u64 = REX_LOAD_U64(r30.u32 + 0);
	// ld r30,8(r30)
	r30.u64 = REX_LOAD_U64(r30.u32 + 8);
	// std r28,128(r31)
	REX_STORE_U64(r31.u32 + 128, r28.u64);
	// std r10,136(r31)
	REX_STORE_U64(r31.u32 + 136, ctx.r10.u64);
	// ld r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 0);
	// ld r29,8(r29)
	r29.u64 = REX_LOAD_U64(r29.u32 + 8);
	// std r27,80(r31)
	REX_STORE_U64(r31.u32 + 80, r27.u64);
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// std r11,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r11.u64);
	// std r10,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r10.u64);
	// std r29,104(r31)
	REX_STORE_U64(r31.u32 + 104, r29.u64);
	// std r9,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r9.u64);
	// bl 0x8224c2c8
	ctx.lr = 0x822875B4;
	sub_8224C2C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,14
	ctx.r3.s64 = 14;
	// stb r11,152(r31)
	REX_STORE_U8(r31.u32 + 152, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8228CAE8) {
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
	ctx.lr = 0x8228CAF0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r27,r3,r4
	r27.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// srawi r29,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r29.s64 = r27.s32 >> 2;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// ble cr6,0x8228cc48
	if (!ctx.cr6.gt) goto loc_8228CC48;
loc_8228CB18:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8228cba8
	if (!ctx.cr6.gt) goto loc_8228CBA8;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228cc68
	ctx.lr = 0x8228CB34;
	sub_8228CC68(ctx, base);
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r29,r30
	ctx.r11.u64 = r30.u64 - r29.u64;
	// subf r10,r31,r27
	ctx.r10.u64 = r27.u64 - r31.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8228cb84
	if (!ctx.cr6.lt) goto loc_8228CB84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228cae8
	ctx.lr = 0x8228CB7C;
	sub_8228CAE8(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x8228cb94
	goto loc_8228CB94;
loc_8228CB84:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228cae8
	ctx.lr = 0x8228CB90;
	sub_8228CAE8(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8228CB94:
	// subf r27,r31,r30
	r27.u64 = r30.u64 - r31.u64;
	// srawi r29,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r29.s64 = r27.s32 >> 2;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bgt cr6,0x8228cb18
	if (ctx.cr6.gt) goto loc_8228CB18;
loc_8228CBA8:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8228cc48
	if (!ctx.cr6.gt) goto loc_8228CC48;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x8228cc60
	if (!ctx.cr6.gt) goto loc_8228CC60;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// addze. r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x8228cbf8
	if (!ctx.cr0.gt) goto loc_8228CBF8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
loc_8228CBCC:
	// lwzu r11,-4(r28)
	ea = -4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228d078
	ctx.lr = 0x8228CBF0;
	sub_8228D078(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x8228cbcc
	if (ctx.cr6.gt) goto loc_8228CBCC;
loc_8228CBF8:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x8228cc60
	if (!ctx.cr6.gt) goto loc_8228CC60;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
loc_8228CC08:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// srawi r5,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r5.s64 = r30.s32 >> 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8228d078
	ctx.lr = 0x8228CC34;
	sub_8228D078(ctx, base);
	// rlwinm r10,r30,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x8228cc08
	if (ctx.cr6.gt) goto loc_8228CC08;
	// b 0x8228cc60
	goto loc_8228CC60;
loc_8228CC48:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8228cc60
	if (!ctx.cr6.gt) goto loc_8228CC60;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228cf18
	ctx.lr = 0x8228CC60;
	sub_8228CF18(ctx, base);
loc_8228CC60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8229B380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f10,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fsubs f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f7,920(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 920);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// blt cr6,0x8229b3cc
	if (ctx.cr6.lt) goto loc_8229B3CC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8229B3CC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229b3e4
	if (ctx.cr0.eq) goto loc_8229B3E4;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// b 0x8229b46c
	goto loc_8229B46C;
loc_8229B3E4:
	// lfs f7,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f7,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f7,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f7,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f6,f5,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f6.f64)));
	// fmadds f6,f4,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f6.f64)));
	// fdivs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x8229b424
	if (!ctx.cr6.lt) goto loc_8229B424;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// b 0x8229b434
	goto loc_8229B434;
loc_8229B424:
	// lfs f6,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x8229b434
	if (!ctx.cr6.gt) goto loc_8229B434;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
loc_8229B434:
	// fmuls f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,-4(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
loc_8229B46C:
	// std r11,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4B20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,5984
	ctx.r3.s64 = ctx.r11.s64 + 5984;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4BF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,35
	ctx.r10.s64 = 35;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,6032
	ctx.r10.s64 = ctx.r10.s64 + 6032;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// lfs f13,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f11,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsubs f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AA968) {
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
	// bl 0x822aa9b8
	ctx.lr = 0x822AA988;
	sub_822AA9B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aa998
	if (ctx.cr0.eq) goto loc_822AA998;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822AA998;
	sub_8269CE98(ctx, base);
loc_822AA998:
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

DEFINE_REX_FUNC(sub_822ADAF0) {
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
	ctx.lr = 0x822ADAF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,6824
	ctx.r11.s64 = ctx.r11.s64 + 6824;
	// li r27,1
	r27.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r27,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, r27.u8);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r29.u32);
	// stb r29,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r29.u8);
	// stb r27,48(r3)
	REX_STORE_U8(ctx.r3.u32 + 48, r27.u8);
	// stw r29,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, r29.u32);
	// stw r29,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r29.u32);
	// stw r29,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r29.u32);
	// stb r27,68(r3)
	REX_STORE_U8(ctx.r3.u32 + 68, r27.u8);
	// stw r29,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r29.u32);
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r29.u32);
	// stw r29,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r29.u32);
	// stw r29,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r29.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x822adc10
	if (!ctx.cr6.lt) goto loc_822ADC10;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822c1a70
	ctx.lr = 0x822ADB68;
	sub_822C1A70(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822adbc0
	if (!ctx.cr6.gt) goto loc_822ADBC0;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subfic r8,r3,-8
	ctx.xer.ca = ctx.r3.u32 <= 4294967288;
	ctx.r8.u64 = static_cast<uint64_t>(-8) - ctx.r3.u64;
loc_822ADB84:
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822adbb8
	if (ctx.cr0.eq) goto loc_822ADBB8;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822ADBB8:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x822adb84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822ADB84;
loc_822ADBC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822adc00
	if (ctx.cr6.eq) goto loc_822ADC00;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822adbfc
	if (ctx.cr0.eq) goto loc_822ADBFC;
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
	ctx.lr = 0x822ADBFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ADBFC:
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
loc_822ADC00:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stb r27,16(r31)
	REX_STORE_U8(r31.u32 + 16, r27.u8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_822ADC10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822adf60
	ctx.lr = 0x822ADC18;
	sub_822ADF60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822BB930) {
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
	ctx.lr = 0x822BB938;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,7152
	ctx.r4.s64 = ctx.r11.s64 + 7152;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// bl 0x82180150
	ctx.lr = 0x822BB96C;
	sub_82180150(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// lwz r31,284(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lwz r30,276(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BB9AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BB9E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BBA1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x821800b8
	ctx.lr = 0x822BBA20;
	sub_821800B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822C0018) {
	REX_FUNC_PROLOGUE();
	// lwz r3,184(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C01A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C01D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0030
	ctx.lr = 0x822C01E4;
	sub_822C0030(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82298f70
	ctx.lr = 0x822C01F0;
	sub_82298F70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C0204;
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

DEFINE_REX_FUNC(sub_822C1950) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,-19396(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -19396);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// b 0x822c1988
	goto loc_822C1988;
loc_822C1978:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x822c19ec
	if (ctx.cr6.eq) goto loc_822C19EC;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
loc_822C1988:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c1978
	if (!ctx.cr6.eq) goto loc_822C1978;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822f6280
	ctx.lr = 0x822C1998;
	sub_822F6280(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c19d8
	if (ctx.cr0.eq) goto loc_822C19D8;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r31.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// bl 0x822c1a08
	ctx.lr = 0x822C19D4;
	sub_822C1A08(ctx, base);
	// b 0x822c19dc
	goto loc_822C19DC;
loc_822C19D8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822C19DC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
loc_822C19EC:
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

DEFINE_REX_FUNC(sub_822C2C58) {
	REX_FUNC_PROLOGUE();
	// stb r4,10494(r3)
	REX_STORE_U8(ctx.r3.u32 + 10494, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3038) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stfs f0,12072(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12072, temp.u32);
	// lfs f13,144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10602(r3)
	REX_STORE_U16(ctx.r3.u32 + 10602, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4148) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,3180
	ctx.r11.s64 = ctx.r4.s64 + 3180;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c41a8
	if (ctx.cr6.eq) goto loc_822C41A8;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822c417c
	if (ctx.cr6.lt) goto loc_822C417C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822C417C:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,6,22,25
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC3F);
	// rldicr r11,r7,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_822C41A8:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,12152(r11)
	REX_STORE_U8(ctx.r11.u32 + 12152, ctx.r5.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9160) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r4,2551
	ctx.r10.s64 = ctx.r4.s64 + 2551;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_822C9170:
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bne 0x822c9170
	if (!ctx.cr0.eq) goto loc_822C9170;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CBCE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822CBCF0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cbdac
	if (ctx.cr0.eq) goto loc_822CBDAC;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r30,r31,20,28,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 20) & 0xF;
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cbdac
	if (ctx.cr0.eq) goto loc_822CBDAC;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822cbc40
	ctx.lr = 0x822CBD28;
	sub_822CBC40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(r30.u32, 6, ctx.xer);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bgt cr6,0x822cbd70
	if (ctx.cr6.gt) goto loc_822CBD70;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(r30.u32, 5, ctx.xer);
	// bge cr6,0x822cbd68
	if (!ctx.cr6.lt) goto loc_822CBD68;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822cbdac
	if (ctx.cr6.eq) goto loc_822CBDAC;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// ble cr6,0x822cbd68
	if (!ctx.cr6.gt) goto loc_822CBD68;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// beq cr6,0x822cbd94
	if (ctx.cr6.eq) goto loc_822CBD94;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// beq cr6,0x822cbd80
	if (ctx.cr6.eq) goto loc_822CBD80;
	// b 0x822cbdac
	goto loc_822CBDAC;
loc_822CBD68:
	// rlwimi r31,r11,9,22,22
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x200) | (r31.u64 & 0xFFFFFFFFFFFFFDFF);
	// b 0x822cbda8
	goto loc_822CBDA8;
loc_822CBD70:
	// cmplwi cr6,r30,13
	ctx.cr6.compare<uint32_t>(r30.u32, 13, ctx.xer);
	// beq cr6,0x822cbd94
	if (ctx.cr6.eq) goto loc_822CBD94;
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(r30.u32, 14, ctx.xer);
	// bne cr6,0x822cbdac
	if (!ctx.cr6.eq) goto loc_822CBDAC;
loc_822CBD80:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x822cbda4
	goto loc_822CBDA4;
loc_822CBD94:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 & 10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_822CBDA4:
	// rlwimi r31,r11,12,16,19
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF000) | (r31.u64 & 0xFFFFFFFFFFFF0FFF);
loc_822CBDA8:
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
loc_822CBDAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822D2EE8) {
	REX_FUNC_PROLOGUE();
	// b 0x822d20f8
	sub_822D20F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D2FF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822D2FF8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x822d22f8
	ctx.lr = 0x822D3038;
	sub_822D22F8(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x823f02b8
	ctx.lr = 0x822D3044;
	sub_823F02B8(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d3054
	if (!ctx.cr0.eq) goto loc_822D3054;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d309c
	goto loc_822D309C;
loc_822D3054:
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// li r7,17409
	ctx.r7.s64 = 17409;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r29,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xF0000000;
	// clrlwi r11,r11,10
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFF;
	// stw r31,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, r31.u32);
	// rlwimi r9,r7,20,11,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r9.u64 & 0x200000);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// rlwimi r11,r30,22,4,9
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 22) & 0xFC00000) | (ctx.r11.u64 & 0xFFFFFFFFF03FFFFF);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// bl 0x822c5e78
	ctx.lr = 0x822D3098;
	sub_822C5E78(ctx, base);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_822D309C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822D90B8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x822D90C0;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c70
	ctx.lr = 0x822D90C8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// subfe r31,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82793d64
	ctx.lr = 0x822D90E4;
	__imp__VdGetCurrentDisplayGamma(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-11320
	ctx.r10.s64 = ctx.r10.s64 + -11320;
	// addi r9,r9,8640
	ctx.r9.s64 = ctx.r9.s64 + 8640;
	// rlwinm r8,r31,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 11) & 0xFFFFF800;
	// lis r7,-32106
	ctx.r7.s64 = -2104098816;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r7,7172
	ctx.r9.s64 = ctx.r7.s64 + 7172;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822d9128
	if (!ctx.cr6.eq) goto loc_822D9128;
	// lfsx f0,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// beq cr6,0x822d9300
	if (ctx.cr6.eq) goto loc_822D9300;
loc_822D9128:
	// stfsx f2,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r29,r28,-2
	r29.s64 = r28.s64 + -2;
	// lfs f0,1064(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1064);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,848(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 848);
	// lfd f12,792(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 792);
	// lfd f11,192(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 192);
	// lfd f20,1072(r11)
	f20.u64 = REX_LOAD_U64(ctx.r11.u32 + 1072);
	// lfd f29,888(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 888);
	// lfs f28,884(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 884);
	f28.f64 = double(temp.f32);
	// lfs f19,880(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 880);
	f19.f64 = double(temp.f32);
	// lfd f18,872(r11)
	f18.u64 = REX_LOAD_U64(ctx.r11.u32 + 872);
	// lfd f27,864(r11)
	f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 864);
	// lfs f26,860(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 860);
	f26.f64 = double(temp.f32);
	// lfs f31,856(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 856);
	f31.f64 = double(temp.f32);
	// lfs f17,844(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 844);
	f17.f64 = double(temp.f32);
	// lfs f25,840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 840);
	f25.f64 = double(temp.f32);
	// lfd f24,832(r11)
	f24.u64 = REX_LOAD_U64(ctx.r11.u32 + 832);
	// lfd f16,824(r11)
	f16.u64 = REX_LOAD_U64(ctx.r11.u32 + 824);
	// lfd f23,816(r11)
	f23.u64 = REX_LOAD_U64(ctx.r11.u32 + 816);
	// lfs f15,812(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 812);
	f15.f64 = double(temp.f32);
	// lfs f22,808(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 808);
	f22.f64 = double(temp.f32);
	// lfs f30,804(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 804);
	f30.f64 = double(temp.f32);
	// lfs f14,800(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 800);
	f14.f64 = double(temp.f32);
	// lfs f21,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f21.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// stfd f12,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// stfd f11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f11.u64);
	// b 0x822d91b4
	goto loc_822D91B4;
loc_822D91AC:
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822D91B4:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bne cr6,0x822d9208
	if (!ctx.cr6.eq) goto loc_822D9208;
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822d91ec
	if (ctx.cr6.gt) goto loc_822D91EC;
	// fmuls f1,f1,f17
	ctx.f1.f64 = double(float(ctx.f1.f64 * f17.f64));
	// b 0x822d9200
	goto loc_822D9200;
loc_822D91EC:
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f31.f64));
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmuls f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 * f26.f64));
	// bl 0x8269f778
	ctx.lr = 0x822D91FC;
	sub_8269F778(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_822D9200:
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822D9208:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x822d9288
	if (ctx.cr6.eq) goto loc_822D9288;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x822d9238
	if (ctx.cr6.eq) goto loc_822D9238;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x822d9238
	if (!ctx.cr6.eq) goto loc_822D9238;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x822d922c
	if (!ctx.cr6.eq) goto loc_822D922C;
	// fdivs f2,f21,f2
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f21.f64 / ctx.f2.f64));
loc_822D922C:
	// bl 0x8269f778
	ctx.lr = 0x822D9230;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x822d9294
	goto loc_822D9294;
loc_822D9238:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822d9264
	if (ctx.cr6.eq) goto loc_822D9264;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822d9254
	if (!ctx.cr6.lt) goto loc_822D9254;
	// fmuls f0,f1,f14
	ctx.f0.f64 = double(float(ctx.f1.f64 * f14.f64));
	// b 0x822d9294
	goto loc_822D9294;
loc_822D9254:
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// fmr f2,f23
	ctx.f2.f64 = f23.f64;
	// fmuls f1,f0,f22
	ctx.f1.f64 = double(float(ctx.f0.f64 * f22.f64));
	// b 0x822d922c
	goto loc_822D922C;
loc_822D9264:
	// fcmpu cr6,f1,f16
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f16.f64);
	// bge cr6,0x822d9274
	if (!ctx.cr6.lt) goto loc_822D9274;
	// fmuls f0,f1,f15
	ctx.f0.f64 = double(float(ctx.f1.f64 * f15.f64));
	// b 0x822d9294
	goto loc_822D9294;
loc_822D9274:
	// fmr f2,f24
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f24.f64;
	// bl 0x8269f778
	ctx.lr = 0x822D927C;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmsubs f0,f0,f25,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, -f30.f64)));
	// b 0x822d9294
	goto loc_822D9294;
loc_822D9288:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d9018
	ctx.lr = 0x822D9290;
	sub_822D9018(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
loc_822D9294:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822d92c0
	if (ctx.cr6.eq) goto loc_822D92C0;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f18
	ctx.cr6.compare(ctx.f0.f64, f18.f64);
	// bgt cr6,0x822d92b0
	if (ctx.cr6.gt) goto loc_822D92B0;
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * f19.f64));
	// b 0x822d92c0
	goto loc_822D92C0;
loc_822D92B0:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// bl 0x8269f778
	ctx.lr = 0x822D92B8;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmsubs f0,f0,f28,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, -f31.f64)));
loc_822D92C0:
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fmadd f0,f0,f20,f13
	ctx.f0.f64 = std::fma(ctx.f0.f64, f20.f64, ctx.f13.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822d92e4
	if (!ctx.cr6.lt) goto loc_822D92E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822d92f0
	goto loc_822D92F0;
loc_822D92E4:
	// cmpwi cr6,r11,1023
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1023, ctx.xer);
	// ble cr6,0x822d92f0
	if (!ctx.cr6.gt) goto loc_822D92F0;
	// li r11,1023
	ctx.r11.s64 = 1023;
loc_822D92F0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sthu r11,2(r29)
	ea = 2 + r29.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r29.u32 = ea;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(r31.s32, 1024, ctx.xer);
	// blt cr6,0x822d91ac
	if (ctx.cr6.lt) goto loc_822D91AC;
loc_822D9300:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cbc
	ctx.lr = 0x822D9310;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822EADD0) {
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
	// li r3,220
	ctx.r3.s64 = 220;
	// bl 0x822f6280
	ctx.lr = 0x822EADE4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eadf4
	if (ctx.cr0.eq) goto loc_822EADF4;
	// bl 0x822eae08
	ctx.lr = 0x822EADF0;
	sub_822EAE08(ctx, base);
	// b 0x822eadf8
	goto loc_822EADF8;
loc_822EADF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EADF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EC3D8) {
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
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x822f6280
	ctx.lr = 0x822EC3EC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ec3fc
	if (ctx.cr0.eq) goto loc_822EC3FC;
	// bl 0x822ec410
	ctx.lr = 0x822EC3F8;
	sub_822EC410(ctx, base);
	// b 0x822ec400
	goto loc_822EC400;
loc_822EC3FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EC400:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED5C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-28924
	ctx.r4.s64 = ctx.r11.s64 + -28924;
	// b 0x82178c38
	sub_82178C38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EDAF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822EDAF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,14976
	ctx.r11.s64 = ctx.r11.s64 + 14976;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x822e6df0
	ctx.lr = 0x822EDB2C;
	sub_822E6DF0(ctx, base);
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x822EDB40;
	sub_82120AC0(ctx, base);
	// li r11,128
	ctx.r11.s64 = 128;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r10,13916
	ctx.r4.s64 = ctx.r10.s64 + 13916;
	// bl 0x8215f338
	ctx.lr = 0x822EDB58;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822EDB5C;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6fa8
	ctx.lr = 0x822EDB68;
	sub_822E6FA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,23052
	ctx.r4.s64 = ctx.r11.s64 + 23052;
	// bl 0x8215f338
	ctx.lr = 0x822EDB78;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822EDB7C;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120b20
	ctx.lr = 0x822EDB90;
	sub_82120B20(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,14940
	ctx.r4.s64 = ctx.r11.s64 + 14940;
	// bl 0x8215f338
	ctx.lr = 0x822EDBA0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822EDBA4;
	sub_8215FA30(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,14948
	ctx.r4.s64 = ctx.r11.s64 + 14948;
	// bl 0x82125d00
	ctx.lr = 0x822EDBB4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822edc20
	if (ctx.cr0.eq) goto loc_822EDC20;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,14956
	ctx.r4.s64 = ctx.r11.s64 + 14956;
	// bl 0x82125d00
	ctx.lr = 0x822EDBCC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822edbe0
	if (!ctx.cr0.eq) goto loc_822EDBE0;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x822edc28
	goto loc_822EDC28;
loc_822EDBE0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,14964
	ctx.r4.s64 = ctx.r11.s64 + 14964;
	// bl 0x82125d00
	ctx.lr = 0x822EDBF0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822edc2c
	if (!ctx.cr0.eq) goto loc_822EDC2C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822edc20
	if (ctx.cr6.eq) goto loc_822EDC20;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EDC18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822edc2c
	if (!ctx.cr0.eq) goto loc_822EDC2C;
loc_822EDC20:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_822EDC28:
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_822EDC2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822F6020) {
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
	ctx.lr = 0x822F6038;
	sub_822F5F38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,2544
	ctx.r11.s64 = ctx.r11.s64 + 2544;
	// addi r4,r10,21564
	ctx.r4.s64 = ctx.r10.s64 + 21564;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a1d30
	ctx.lr = 0x822F6054;
	sub_826A1D30(ctx, base);
}

DEFINE_REX_FUNC(sub_822F64F8) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x826a2a40
	ctx.lr = 0x822F6514;
	sub_826A2A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120600
	ctx.lr = 0x822F6520;
	sub_82120600(ctx, base);
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

DEFINE_REX_FUNC(sub_822F6EE8) {
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
	// bl 0x826a2b30
	ctx.lr = 0x822F6F00;
	sub_826A2B30(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f6f18
	if (ctx.cr0.eq) goto loc_822F6F18;
	// bl 0x826a14c8
	ctx.lr = 0x822F6F18;
	sub_826A14C8(ctx, base);
loc_822F6F18:
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

DEFINE_REX_FUNC(sub_822F8088) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822f8098
	if (!ctx.cr6.eq) goto loc_822F8098;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822F8098:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r3,312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822FA420) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	f31.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f31,f1
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// beq cr6,0x822fa50c
	if (ctx.cr6.eq) goto loc_822FA50C;
	// bl 0x826a1b88
	ctx.lr = 0x822FA450;
	sub_826A1B88(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,3816(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3816);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r9,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// beq cr6,0x822fa4c8
	if (ctx.cr6.eq) goto loc_822FA4C8;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822fa504
	if (!ctx.cr6.eq) goto loc_822FA504;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,3812(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// lfs f0,3780(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3780);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x822fa4f8
	goto loc_822FA4F8;
loc_822FA4C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,3808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3808);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// lfs f0,3776(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3776);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_822FA4F8:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_822FA504:
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_822FA50C:
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

DEFINE_REX_FUNC(sub_82300258) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82302508) {
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
	ctx.lr = 0x82302510;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,4376
	ctx.r11.s64 = ctx.r11.s64 + 4376;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// lis r10,-32208
	ctx.r10.s64 = -2110783488;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r6,r10,9472
	ctx.r6.s64 = ctx.r10.s64 + 9472;
	// addi r5,r11,9272
	ctx.r5.s64 = ctx.r11.s64 + 9272;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82314f40
	ctx.lr = 0x8230255C;
	sub_82314F40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230257c
	if (ctx.cr0.eq) goto loc_8230257C;
loc_82302564:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82302568:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823151d8
	ctx.lr = 0x82302570;
	sub_823151D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_8230257C:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r28,r31
	r28.u64 = r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// beq cr6,0x8230264c
	if (ctx.cr6.eq) goto loc_8230264C;
loc_8230259C:
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8230263c
	if (ctx.cr6.eq) goto loc_8230263C;
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823025fc
	if (!ctx.cr6.eq) goto loc_823025FC;
	// lhz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823025fc
	if (!ctx.cr6.eq) goto loc_823025FC;
	// lhz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823025fc
	if (!ctx.cr6.eq) goto loc_823025FC;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82331758
	ctx.lr = 0x823025F0;
	sub_82331758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82302600
	if (ctx.cr0.eq) goto loc_82302600;
loc_823025FC:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82302600:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230263c
	if (!ctx.cr0.eq) goto loc_8230263C;
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x823150e0
	ctx.lr = 0x82302618;
	sub_823150E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82302664
	if (!ctx.cr0.eq) goto loc_82302664;
	// lwz r11,168(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 168);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82315050
	ctx.lr = 0x82302634;
	sub_82315050(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82302564
	if (!ctx.cr0.eq) goto loc_82302564;
loc_8230263C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x8230259c
	if (ctx.cr6.lt) goto loc_8230259C;
loc_8230264C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,72(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 72);
	// bl 0x82315240
	ctx.lr = 0x82302658;
	sub_82315240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82302568
	if (ctx.cr0.eq) goto loc_82302568;
	// b 0x82302564
	goto loc_82302564;
loc_82302664:
	// li r31,93
	r31.s64 = 93;
	// b 0x82302568
	goto loc_82302568;
}

DEFINE_REX_FUNC(sub_8230EFE0) {
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
	ctx.lr = 0x8230EFE8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r3,64
	r30.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230f188
	if (!ctx.cr6.eq) goto loc_8230F188;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,5152
	r29.s64 = ctx.r11.s64 + 5152;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230f060
	if (ctx.cr6.eq) goto loc_8230F060;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// bl 0x823315e8
	ctx.lr = 0x8230F020;
	sub_823315E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230f060
	if (!ctx.cr0.eq) goto loc_8230F060;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-10820
	r31.s64 = ctx.r11.s64 + -10820;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230f084
	if (!ctx.cr6.eq) goto loc_8230F084;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8232f950
	ctx.lr = 0x8230F050;
	sub_8232F950(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// b 0x8230f07c
	goto loc_8230F07C;
loc_8230F060:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r31,r11,-10820
	r31.s64 = ctx.r11.s64 + -10820;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f950
	ctx.lr = 0x8230F07C;
	sub_8232F950(ctx, base);
loc_8230F07C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230f18c
	if (!ctx.cr6.eq) goto loc_8230F18C;
loc_8230F084:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f134
	if (ctx.cr6.eq) goto loc_8230F134;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8230f0d4
	if (ctx.cr6.eq) goto loc_8230F0D4;
	// lwz r3,20(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8230f0c0
	if (ctx.cr6.eq) goto loc_8230F0C0;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// bl 0x823315e8
	ctx.lr = 0x8230F0AC;
	sub_823315E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230f0c0
	if (!ctx.cr0.eq) goto loc_8230F0C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// b 0x8230f0c4
	goto loc_8230F0C4;
loc_8230F0C0:
	// lwz r3,64(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 64);
loc_8230F0C4:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82330350
	ctx.lr = 0x8230F0CC;
	sub_82330350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230f18c
	if (!ctx.cr0.eq) goto loc_8230F18C;
loc_8230F0D4:
	// lfs f1,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82330078
	ctx.lr = 0x8230F0E0;
	sub_82330078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230f18c
	if (!ctx.cr0.eq) goto loc_8230F18C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
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
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82330108
	ctx.lr = 0x8230F12C;
	sub_82330108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230f18c
	if (!ctx.cr0.eq) goto loc_8230F18C;
loc_8230F134:
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f188
	if (ctx.cr6.eq) goto loc_8230F188;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8230F144:
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8230f158
	if (!ctx.cr6.eq) goto loc_8230F158;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230F158:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230f188
	if (ctx.cr6.eq) goto loc_8230F188;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x8230f170
	if (!ctx.cr6.eq) goto loc_8230F170;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230F170:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8230efe0
	ctx.lr = 0x8230F178;
	sub_8230EFE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230f18c
	if (!ctx.cr0.eq) goto loc_8230F18C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8230f144
	goto loc_8230F144;
loc_8230F188:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230F18C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8231A578) {
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
	// lwz r3,-10760(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -10760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231a5d0
	if (ctx.cr6.eq) goto loc_8231A5D0;
	// bl 0x8231a2f0
	ctx.lr = 0x8231A59C;
	sub_8231A2F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a5d4
	if (!ctx.cr0.eq) goto loc_8231A5D4;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r4,-10760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -10760);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r6,2660
	ctx.r6.s64 = 2660;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231A5C8;
	sub_82330D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-10760(r31)
	REX_STORE_U32(r31.u32 + -10760, ctx.r11.u32);
loc_8231A5D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231A5D4:
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

DEFINE_REX_FUNC(sub_8231F670) {
	REX_FUNC_PROLOGUE();
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231FA20) {
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
	ctx.lr = 0x8231FA28;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231fa4c
	if (ctx.cr6.eq) goto loc_8231FA4C;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8231fa50
	goto loc_8231FA50;
loc_8231FA4C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8231FA50:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231fa74
	if (ctx.cr6.eq) goto loc_8231FA74;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231fa6c
	if (ctx.cr6.eq) goto loc_8231FA6C;
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8231fa78
	goto loc_8231FA78;
loc_8231FA6C:
	// li r27,0
	r27.s64 = 0;
	// b 0x8231fa78
	goto loc_8231FA78;
loc_8231FA74:
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8231FA78:
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// li r25,0
	r25.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8231fb6c
	if (!ctx.cr6.gt) goto loc_8231FB6C;
	// li r28,0
	r28.s64 = 0;
loc_8231FA90:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r26,r11,r28
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231fb54
	if (ctx.cr0.eq) goto loc_8231FB54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,4(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 4);
	// bl 0x822f78f8
	ctx.lr = 0x8231FAB0;
	sub_822F78F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8231fb54
	if (!ctx.cr0.eq) goto loc_8231FB54;
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// add. r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x8231fb44
	if (!ctx.cr0.gt) goto loc_8231FB44;
loc_8231FADC:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// blt cr6,0x8231faf8
	if (ctx.cr6.lt) goto loc_8231FAF8;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8231fafc
	if (ctx.cr0.eq) goto loc_8231FAFC;
loc_8231FAF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8231FAFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r7,40(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x8230d558
	ctx.lr = 0x8231FB30;
	sub_8230D558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231fb70
	if (!ctx.cr0.eq) goto loc_8231FB70;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x8231fadc
	if (ctx.cr6.lt) goto loc_8231FADC;
loc_8231FB44:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x822f7960
	ctx.lr = 0x8231FB54;
	sub_822F7960(ctx, base);
loc_8231FB54:
	// lwz r11,168(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 168);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231fa90
	if (ctx.cr6.lt) goto loc_8231FA90;
loc_8231FB6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231FB70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8232B2E8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x8232B2F0;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c98
	ctx.lr = 0x8232B2F8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,64(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r29,r3,64
	r29.s64 = ctx.r3.s64 + 64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x8232b610
	if (ctx.cr6.eq) goto loc_8232B610;
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
	// lfs f29,8228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8228);
	f29.f64 = double(temp.f32);
	// lfs f30,8224(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8224);
	f30.f64 = double(temp.f32);
	// lfs f27,7620(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 7620);
	f27.f64 = double(temp.f32);
	// lfs f31,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lfs f28,7624(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 7624);
	f28.f64 = double(temp.f32);
	// lfs f26,3716(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3716);
	f26.f64 = double(temp.f32);
loc_8232B340:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r31,r30,-4
	r31.s64 = r30.s64 + -4;
	// bne cr6,0x8232b350
	if (!ctx.cr6.eq) goto loc_8232B350;
	// li r31,0
	r31.s64 = 0;
loc_8232B350:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232b5b8
	if (ctx.cr6.eq) goto loc_8232B5B8;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232b5b8
	if (ctx.cr0.eq) goto loc_8232B5B8;
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
	ctx.lr = 0x8232B37C;
	sub_8232C708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232b614
	if (!ctx.cr0.eq) goto loc_8232B614;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b3f0
	if (!ctx.cr6.eq) goto loc_8232B3F0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8232b3d8
	if (ctx.cr0.eq) goto loc_8232B3D8;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232b3f0
	if (!ctx.cr0.eq) goto loc_8232B3F0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8232B3AC:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8232fde8
	ctx.lr = 0x8232B3B4;
	sub_8232FDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232b614
	if (!ctx.cr0.eq) goto loc_8232B614;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// beq 0x8232b3e8
	if (ctx.cr0.eq) goto loc_8232B3E8;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x8232b3ec
	goto loc_8232B3EC;
loc_8232B3D8:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232b3f0
	if (ctx.cr0.eq) goto loc_8232B3F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8232b3ac
	goto loc_8232B3AC;
loc_8232B3E8:
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8232B3EC:
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_8232B3F0:
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232b604
	if (ctx.cr0.eq) goto loc_8232B604;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232b604
	if (ctx.cr0.eq) goto loc_8232B604;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8232ff18
	ctx.lr = 0x8232B418;
	sub_8232FF18(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x8232b444
	if (!ctx.cr6.eq) goto loc_8232B444;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x8232b444
	if (!ctx.cr6.gt) goto loc_8232B444;
loc_8232B434:
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 36);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r11,36(r31)
	REX_STORE_U16(r31.u32 + 36, ctx.r11.u16);
	// b 0x8232b604
	goto loc_8232B604;
loc_8232B444:
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
	ctx.lr = 0x8232B46C;
	sub_8232FEA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232b614
	if (!ctx.cr0.eq) goto loc_8232B614;
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
	// bne cr6,0x8232b580
	if (!ctx.cr6.eq) goto loc_8232B580;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8232b4e0
	if (!ctx.cr6.eq) goto loc_8232B4E0;
loc_8232B498:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8232B4A0:
	// bne cr6,0x8232b580
	if (!ctx.cr6.eq) goto loc_8232B580;
loc_8232B4A4:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a16a0
	ctx.lr = 0x8232B4AC;
	sub_826A16A0(ctx, base);
	// frsp f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = double(float(ctx.f1.f64));
	// lfs f1,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a16a0
	ctx.lr = 0x8232B4B8;
	sub_826A16A0(ctx, base);
	// frsp f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(ctx.f1.f64));
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a16a0
	ctx.lr = 0x8232B4C4;
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
	ctx.lr = 0x8232B4D8;
	sub_826A03B0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x8232b57c
	goto loc_8232B57C;
loc_8232B4E0:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8232b498
	if (ctx.cr6.eq) goto loc_8232B498;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8232b498
	if (ctx.cr6.eq) goto loc_8232B498;
	// cmpwi cr6,r10,19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 19, ctx.xer);
	// beq cr6,0x8232b498
	if (ctx.cr6.eq) goto loc_8232B498;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x8232b498
	if (ctx.cr6.eq) goto loc_8232B498;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x8232b51c
	if (!ctx.cr6.eq) goto loc_8232B51C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8232b4a4
	if (ctx.cr6.eq) goto loc_8232B4A4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// b 0x8232b4a0
	goto loc_8232B4A0;
loc_8232B51C:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8232b550
	if (ctx.cr0.eq) goto loc_8232B550;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232b580
	if (!ctx.cr6.eq) goto loc_8232B580;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * f28.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8232B540;
	sub_826A03B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fmuls f1,f0,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * f27.f64));
	// b 0x8232b57c
	goto loc_8232B57C;
loc_8232B550:
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8232b580
	if (ctx.cr0.eq) goto loc_8232B580;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232b580
	if (!ctx.cr6.eq) goto loc_8232B580;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8232B570;
	sub_826A03B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * f29.f64));
loc_8232B57C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8232B580:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232b59c
	if (!ctx.cr0.eq) goto loc_8232B59C;
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
loc_8232B59C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8232fe48
	ctx.lr = 0x8232B5AC;
	sub_8232FE48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232b614
	if (!ctx.cr0.eq) goto loc_8232B614;
	// b 0x8232b434
	goto loc_8232B434;
loc_8232B5B8:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8232b604
	if (!ctx.cr0.eq) goto loc_8232B604;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232b604
	if (ctx.cr0.eq) goto loc_8232B604;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232c708
	ctx.lr = 0x8232B5E0;
	sub_8232C708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232b614
	if (!ctx.cr0.eq) goto loc_8232B614;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x826a03b0
	ctx.lr = 0x8232B5F4;
	sub_826A03B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f0,84(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 84, temp.u32);
loc_8232B604:
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8232b340
	if (!ctx.cr6.eq) goto loc_8232B340;
loc_8232B610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232B614:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ce4
	ctx.lr = 0x8232B620;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8234D160) {
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
	ctx.lr = 0x8234D168;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234d188
	if (!ctx.cr6.eq) goto loc_8234D188;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8234D188:
	// li r27,0
	r27.s64 = 0;
	// addi r25,r31,76
	r25.s64 = r31.s64 + 76;
	// stb r27,0(r28)
	REX_STORE_U8(r28.u32 + 0, r27.u8);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d1ac
	if (!ctx.cr6.eq) goto loc_8234D1AC;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8234D1AC:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234d1cc
	if (ctx.cr6.eq) goto loc_8234D1CC;
	// stb r27,0(r28)
	REX_STORE_U8(r28.u32 + 0, r27.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8234D1CC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r26,1
	r26.s64 = 1;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234d230
	if (!ctx.cr6.gt) goto loc_8234D230;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_8234D1E4:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234D200;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234d340
	if (!ctx.cr6.eq) goto loc_8234D340;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234d22c
	if (!ctx.cr6.eq) goto loc_8234D22C;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234d1e4
	if (ctx.cr6.lt) goto loc_8234D1E4;
	// b 0x8234d230
	goto loc_8234D230;
loc_8234D22C:
	// stb r26,0(r28)
	REX_STORE_U8(r28.u32 + 0, r26.u8);
loc_8234D230:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d33c
	if (!ctx.cr6.eq) goto loc_8234D33C;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234d264
	if (ctx.cr6.eq) goto loc_8234D264;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stb r26,0(r28)
	REX_STORE_U8(r28.u32 + 0, r26.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8234D264:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d33c
	if (!ctx.cr6.eq) goto loc_8234D33C;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234d2d0
	if (ctx.cr6.eq) goto loc_8234D2D0;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r7,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r9,r9,1160
	ctx.r9.s64 = ctx.r9.s64 + 1160;
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r31,32(r31)
	REX_STORE_U32(r31.u32 + 32, r31.u32);
loc_8234D2D0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234d33c
	if (ctx.cr6.eq) goto loc_8234D33C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234d33c
	if (ctx.cr6.eq) goto loc_8234D33C;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r11,r31,40
	ctx.r11.s64 = r31.s64 + 40;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,40(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r5,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// lwz r10,224(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r4,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r4.u32);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,48(r31)
	REX_STORE_U32(r31.u32 + 48, r31.u32);
loc_8234D33C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234D340:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823581B8) {
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
	// bl 0x8233e2b0
	ctx.lr = 0x823581D0;
	sub_8233E2B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82359D38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82359D40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82359d60
	if (!ctx.cr6.eq) goto loc_82359D60;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82359D60:
	// lwz r3,92(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 92);
	// bl 0x8233e7e0
	ctx.lr = 0x82359D68;
	sub_8233E7E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r3,92(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 92);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r7.u32);
	// bl 0x8233e820
	ctx.lr = 0x82359DA4;
	sub_8233E820(ctx, base);
	// lwz r11,336(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359dd4
	if (ctx.cr6.eq) goto loc_82359DD4;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r9,r10,-25864
	ctx.r9.s64 = ctx.r10.s64 + -25864;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// stw r9,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82359DCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82359e84
	if (!ctx.cr6.eq) goto loc_82359E84;
loc_82359DD4:
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// addi r30,r11,10492
	r30.s64 = ctx.r11.s64 + 10492;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82359e0c
	if (ctx.cr6.eq) goto loc_82359E0C;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,596
	ctx.r6.s64 = 596;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82359E04;
	sub_82330D00(ctx, base);
	// stw r28,76(r31)
	REX_STORE_U32(r31.u32 + 76, r28.u32);
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
loc_82359E0C:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359e64
	if (ctx.cr6.eq) goto loc_82359E64;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82359e44
	if (ctx.cr6.eq) goto loc_82359E44;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,605
	ctx.r6.s64 = 605;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82359E3C;
	sub_82330D00(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r28,344(r11)
	REX_STORE_U32(ctx.r11.u32 + 344, r28.u32);
loc_82359E44:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r6,609
	ctx.r6.s64 = 609;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82359E60;
	sub_82330D00(ctx, base);
	// stw r28,72(r31)
	REX_STORE_U32(r31.u32 + 72, r28.u32);
loc_82359E64:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,613
	ctx.r6.s64 = 613;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82359E80;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82359E84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82362498) {
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
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823624b8
	if (!ctx.cr6.eq) goto loc_823624B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823624B8:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r31,r11,312
	r31.s64 = ctx.r11.s64 + 312;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1212(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1212);
	// bl 0x823bae40
	ctx.lr = 0x823624CC;
	sub_823BAE40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823624ec
	if (ctx.cr6.eq) goto loc_823624EC;
	// li r3,44
	ctx.r3.s64 = 44;
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
loc_823624EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bc498
	ctx.lr = 0x823624F4;
	sub_823BC498(ctx, base);
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

DEFINE_REX_FUNC(sub_82364F88) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82364f98
	if (!ctx.cr6.eq) goto loc_82364F98;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82364F98:
	// b 0x82364ba8
	sub_82364BA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82365C20) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82365c30
	if (!ctx.cr6.eq) goto loc_82365C30;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82365C30:
	// b 0x823650b0
	sub_823650B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823669C0) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2c7c
	ctx.lr = 0x823669D0;
	// lfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lfs f13,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addis r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 65536;
	// lfs f7,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f3,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// lfs f10,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,0
	ctx.r10.s64 = ctx.r11.s64 + 0;
	// lfs f9,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f5,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fsubs f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f9,f5
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f5,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fadds f31,f5,f10
	f31.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// lfs f30,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	f30.f64 = double(temp.f32);
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfs f28,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	f28.f64 = double(temp.f32);
	// fadds f29,f30,f13
	f29.f64 = double(float(f30.f64 + ctx.f13.f64));
	// lfs f5,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fadds f30,f28,f5
	f30.f64 = double(float(f28.f64 + ctx.f5.f64));
	// addi r7,r7,16428
	ctx.r7.s64 = ctx.r7.s64 + 16428;
	// fsubs f5,f28,f5
	ctx.f5.f64 = double(float(f28.f64 - ctx.f5.f64));
	// li r8,16
	ctx.r8.s64 = 16;
	// fsubs f28,f11,f1
	f28.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fadds f27,f2,f8
	f27.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fadds f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fsubs f11,f2,f8
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fadds f8,f7,f3
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f7,f12,f6
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f3,f29,f9
	ctx.f3.f64 = double(float(f29.f64 + ctx.f9.f64));
	// stfs f3,0(r4)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f2,f9,f29
	ctx.f2.f64 = double(float(ctx.f9.f64 - f29.f64));
	// stfs f2,16(r4)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fadds f9,f30,f31
	ctx.f9.f64 = double(float(f30.f64 + f31.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fsubs f3,f31,f30
	ctx.f3.f64 = double(float(f31.f64 - f30.f64));
	// stfs f3,20(r4)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// fadds f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,12(r4)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fsubs f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f3,28(r4)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// fsubs f2,f28,f27
	ctx.f2.f64 = double(float(f28.f64 - f27.f64));
	// fsubs f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fadds f13,f27,f28
	ctx.f13.f64 = double(float(f27.f64 + f28.f64));
	// fadds f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f5,24(r4)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f8,f4
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// stfs f7,32(r4)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// fsubs f7,f6,f12
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fadds f6,f8,f4
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfs f7,52(r4)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// stfs f6,36(r4)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stfs f5,48(r4)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f4,40(r4)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f3,44(r4)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f2,56(r4)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f1,60(r4)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// ble cr6,0x82366ce4
	if (!ctx.cr6.gt) goto loc_82366CE4;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 + 60;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f0,3804(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
loc_82366B2C:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f4,f11,f9
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f2,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f9,f2,f7
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// lfs f3,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f12,f7,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// lfs f11,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfs f13,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f2,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f2,f3
	f31.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// lfs f30,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	f30.f64 = double(temp.f32);
	// lfs f29,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	f29.f64 = double(temp.f32);
	// fsubs f27,f8,f4
	f27.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// lfs f28,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	f28.f64 = double(temp.f32);
	// fadds f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f24,f6,f9
	f24.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// lfs f8,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// lfs f26,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	f26.f64 = double(temp.f32);
	// fmsubs f4,f1,f0,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f2.f64)));
	// lfs f1,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lfs f23,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	f23.f64 = double(temp.f32);
	// fadds f25,f28,f30
	f25.f64 = double(float(f28.f64 + f30.f64));
	// fsubs f22,f12,f7
	f22.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f21,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	f21.f64 = double(temp.f32);
	// fadds f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fnmsubs f31,f31,f0,f5
	f31.f64 = double(float(-std::fma(f31.f64, ctx.f0.f64, -ctx.f5.f64)));
	// fmuls f10,f3,f27
	ctx.f10.f64 = double(float(ctx.f3.f64 * f27.f64));
	// fmuls f20,f2,f24
	f20.f64 = double(float(ctx.f2.f64 * f24.f64));
	// fmuls f24,f5,f24
	f24.f64 = double(float(ctx.f5.f64 * f24.f64));
	// fmuls f18,f4,f6
	f18.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fadds f7,f1,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// fmuls f19,f3,f22
	f19.f64 = double(float(ctx.f3.f64 * f22.f64));
	// fmuls f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fsubs f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// fadds f12,f26,f29
	ctx.f12.f64 = double(float(f26.f64 + f29.f64));
	// fadds f17,f23,f21
	f17.f64 = double(float(f23.f64 + f21.f64));
	// fmadds f10,f11,f22,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, ctx.f10.f64)));
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmsubs f5,f5,f13,f20
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, -f20.f64)));
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f13,f2,f13,f24
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, f24.f64)));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmsubs f9,f31,f9,f18
	ctx.f9.f64 = double(float(std::fma(f31.f64, ctx.f9.f64, -f18.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fadds f10,f7,f25
	ctx.f10.f64 = double(float(ctx.f7.f64 + f25.f64));
	// fmsubs f1,f11,f27,f19
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, f27.f64, -f19.f64)));
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmadds f6,f31,f6,f4
	ctx.f6.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, ctx.f4.f64)));
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f1,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f29,f29,f26
	f29.f64 = double(float(f29.f64 - f26.f64));
	// lfs f4,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f10,36(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fadds f5,f17,f12
	ctx.f5.f64 = double(float(f17.f64 + ctx.f12.f64));
	// stfs f5,40(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fsubs f10,f30,f28
	ctx.f10.f64 = double(float(f30.f64 - f28.f64));
	// fsubs f9,f21,f23
	ctx.f9.f64 = double(float(f21.f64 - f23.f64));
	// fsubs f7,f25,f7
	ctx.f7.f64 = double(float(f25.f64 - ctx.f7.f64));
	// fnmsubs f5,f2,f0,f1
	ctx.f5.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f0.f64, -ctx.f1.f64)));
	// fmsubs f6,f13,f0,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f4.f64)));
	// fsubs f2,f12,f17
	ctx.f2.f64 = double(float(ctx.f12.f64 - f17.f64));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// fadds f13,f8,f29
	ctx.f13.f64 = double(float(ctx.f8.f64 + f29.f64));
	// fsubs f12,f29,f8
	ctx.f12.f64 = double(float(f29.f64 - ctx.f8.f64));
	// fmuls f8,f3,f7
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fadds f31,f9,f10
	f31.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmuls f30,f6,f12
	f30.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * f31.f64));
	// fmsubs f9,f11,f7,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, -ctx.f9.f64)));
	// stfs f9,56(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// fmsubs f7,f1,f10,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, -ctx.f3.f64)));
	// stfs f7,44(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fmadds f4,f4,f10,f13
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f13.f64)));
	// stfs f4,48(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fnmsubs f3,f11,f2,f8
	ctx.f3.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f2.f64, -ctx.f8.f64)));
	// stfs f3,52(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// fmsubs f2,f5,f31,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, f31.f64, -f30.f64)));
	// stfs f2,60(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// fmadds f1,f5,f12,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfsu f1,64(r11)
	ea = 64 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82366b2c
	if (ctx.cr6.lt) goto loc_82366B2C;
loc_82366CE4:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cc8
	ctx.lr = 0x82366CEC;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82393CA0) {
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
	// bl 0x82340ff0
	ctx.lr = 0x82393CB4;
	sub_82340FF0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823946A8) {
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
	ctx.lr = 0x823946B0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r24,-32129
	r24.s64 = -2105606144;
	// li r22,0
	r22.s64 = 0;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,1012(r24)
	REX_STORE_U32(r24.u32 + 1012, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r22,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, r22.u32);
	// stw r22,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r22.u32);
	// stw r22,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r22.u32);
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x823946F0;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82394830
	if (!ctx.cr6.eq) goto loc_82394830;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x82394710;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82394830
	if (!ctx.cr6.eq) goto loc_82394830;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,18148
	ctx.r4.s64 = ctx.r11.s64 + 18148;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331620
	ctx.lr = 0x8239472C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239482c
	if (!ctx.cr6.eq) goto loc_8239482C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x8239474C;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82394830
	if (!ctx.cr6.eq) goto loc_82394830;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,18140
	ctx.r4.s64 = ctx.r11.s64 + 18140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x82394768;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239482c
	if (!ctx.cr6.eq) goto loc_8239482C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r23,r10,20208
	r23.s64 = ctx.r10.s64 + 20208;
	// li r6,169
	ctx.r6.s64 = 169;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82394794;
	sub_82330E40(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823947ac
	if (!ctx.cr6.eq) goto loc_823947AC;
loc_823947A0:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_823947AC:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r22,308(r31)
	REX_STORE_U32(r31.u32 + 308, r22.u32);
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// stw r22,304(r31)
	REX_STORE_U32(r31.u32 + 304, r22.u32);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// bl 0x823c7d90
	ctx.lr = 0x823947EC;
	sub_823C7D90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82394830
	if (!ctx.cr6.eq) goto loc_82394830;
	// lwz r4,356(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 356);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239482c
	if (ctx.cr6.eq) goto loc_8239482C;
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82394838
	if (!ctx.cr6.eq) goto loc_82394838;
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,203
	ctx.r6.s64 = 203;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82394824;
	sub_82330D00(ctx, base);
	// stw r22,356(r31)
	REX_STORE_U32(r31.u32 + 356, r22.u32);
	// stw r22,188(r31)
	REX_STORE_U32(r31.u32 + 188, r22.u32);
loc_8239482C:
	// li r3,25
	ctx.r3.s64 = 25;
loc_82394830:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_82394838:
	// addi r28,r31,264
	r28.s64 = r31.s64 + 264;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8239484C;
	sub_823EF5F0(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// sth r26,264(r31)
	REX_STORE_U16(r31.u32 + 264, r26.u16);
	// lwz r29,356(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lhz r30,0(r29)
	r30.u64 = REX_LOAD_U16(r29.u32 + 0);
	// cmpwi cr6,r30,80
	ctx.cr6.compare<int32_t>(r30.s32, 80, ctx.xer);
	// beq cr6,0x8239482c
	if (ctx.cr6.eq) goto loc_8239482C;
	// cmpwi cr6,r30,85
	ctx.cr6.compare<int32_t>(r30.s32, 85, ctx.xer);
	// beq cr6,0x8239482c
	if (ctx.cr6.eq) goto loc_8239482C;
	// li r25,2
	r25.s64 = 2;
	// cmplwi cr6,r30,65534
	ctx.cr6.compare<uint32_t>(r30.u32, 65534, ctx.xer);
	// bne cr6,0x823949c8
	if (!ctx.cr6.eq) goto loc_823949C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r29,24
	ctx.r9.s64 = r29.s64 + 24;
	// addi r30,r11,20176
	r30.s64 = ctx.r11.s64 + 20176;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
loc_82394890:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823948b0
	if (!ctx.cr0.eq) goto loc_823948B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82394890
	if (!ctx.cr6.eq) goto loc_82394890;
loc_823948B0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823948ec
	if (ctx.cr6.eq) goto loc_823948EC;
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
loc_823948C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823948e4
	if (!ctx.cr0.eq) goto loc_823948E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823948c4
	if (!ctx.cr6.eq) goto loc_823948C4;
loc_823948E4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8239482c
	if (!ctx.cr6.eq) goto loc_8239482C;
loc_823948EC:
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x823948FC;
	sub_823EF2F8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r9,278(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 278);
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// lhz r8,266(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 266);
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// lwz r7,268(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// rldicr r6,r7,3,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 3) & 0xFFFFFFFFFFFFFFFF;
	// divdu r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 ? ctx.r6.u64 / ctx.r9.u64 : 0;
	// divdu r4,r5,r8
	ctx.r4.u64 = ctx.r8.u64 ? ctx.r5.u64 / ctx.r8.u64 : 0;
	// stw r4,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r4.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// stw r11,292(r9)
	REX_STORE_U32(ctx.r9.u32 + 292, ctx.r11.u32);
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82394940:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82394960
	if (!ctx.cr0.eq) goto loc_82394960;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82394940
	if (!ctx.cr6.eq) goto loc_82394940;
loc_82394960:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823949a4
	if (ctx.cr6.eq) goto loc_823949A4;
	// lhz r11,278(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 278);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bgt cr6,0x82394b10
	if (ctx.cr6.gt) goto loc_82394B10;
	// beq cr6,0x8239499c
	if (ctx.cr6.eq) goto loc_8239499C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82394994
	if (ctx.cr6.eq) goto loc_82394994;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8239482c
	if (!ctx.cr6.eq) goto loc_8239482C;
	// stw r25,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, r25.u32);
	// b 0x82394b20
	goto loc_82394B20;
loc_82394994:
	// stw r26,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, r26.u32);
	// b 0x82394b20
	goto loc_82394B20;
loc_8239499C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82394b1c
	goto loc_82394B1C;
loc_823949A4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// lhz r9,278(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 278);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// beq cr6,0x82394b20
	if (ctx.cr6.eq) goto loc_82394B20;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_823949C8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x82394aa4
	if (ctx.cr6.eq) goto loc_82394AA4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// beq cr6,0x82394aa4
	if (ctx.cr6.eq) goto loc_82394AA4;
	// cmpwi cr6,r30,17
	ctx.cr6.compare<int32_t>(r30.s32, 17, ctx.xer);
	// beq cr6,0x823949e8
	if (ctx.cr6.eq) goto loc_823949E8;
	// cmpwi cr6,r30,105
	ctx.cr6.compare<int32_t>(r30.s32, 105, ctx.xer);
	// bne cr6,0x8239482c
	if (!ctx.cr6.eq) goto loc_8239482C;
loc_823949E8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r5,18
	ctx.r5.s64 = 18;
	// lhz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r9,18(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 18);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r8,268(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// divwu r7,r8,r10
	ctx.r7.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// stw r6,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r6.u32);
	// lwz r4,356(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 356);
	// bl 0x823ef2f8
	ctx.lr = 0x82394A18;
	sub_823EF2F8(ctx, base);
	// rlwinm r11,r27,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x200;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82394a34
	if (ctx.cr6.eq) goto loc_82394A34;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r9,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, ctx.r9.u32);
	// b 0x82394a38
	goto loc_82394A38;
loc_82394A34:
	// stw r25,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, r25.u32);
loc_82394A38:
	// lhz r10,266(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 266);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r7,268(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rotlwi r8,r10,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// sth r9,278(r31)
	REX_STORE_U16(r31.u32 + 278, ctx.r9.u16);
	// sth r26,0(r28)
	REX_STORE_U16(r28.u32 + 0, r26.u16);
	// srawi r6,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 3;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// mullw r3,r7,r4
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// sth r4,276(r31)
	REX_STORE_U16(r31.u32 + 276, ctx.r4.u16);
	// stw r3,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// lhz r11,18(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 18);
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// beq cr6,0x82394a88
	if (ctx.cr6.eq) goto loc_82394A88;
	// stw r22,232(r31)
	REX_STORE_U32(r31.u32 + 232, r22.u32);
	// stw r22,216(r31)
	REX_STORE_U32(r31.u32 + 216, r22.u32);
	// b 0x82394b20
	goto loc_82394B20;
loc_82394A88:
	// rlwinm r11,r11,1,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFFFFE;
	// lwz r9,356(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 356);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r8,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r8.u32);
	// lhz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// stw r7,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r7.u32);
	// b 0x82394b20
	goto loc_82394B20;
loc_82394AA4:
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82394AB4;
	sub_823EF2F8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r10,278(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 278);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// lhz r9,266(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 266);
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// lwz r8,268(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// rldicr r7,r8,3,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 3) & 0xFFFFFFFFFFFFFFFF;
	// divdu r6,r7,r10
	ctx.r6.u64 = ctx.r10.u64 ? ctx.r7.u64 / ctx.r10.u64 : 0;
	// divdu r5,r6,r9
	ctx.r5.u64 = ctx.r9.u64 ? ctx.r6.u64 / ctx.r9.u64 : 0;
	// stw r5,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r5.u32);
	// beq cr6,0x823949a4
	if (ctx.cr6.eq) goto loc_823949A4;
	// lhz r11,278(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 278);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bgt cr6,0x82394b10
	if (ctx.cr6.gt) goto loc_82394B10;
	// beq cr6,0x8239499c
	if (ctx.cr6.eq) goto loc_8239499C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82394994
	if (ctx.cr6.eq) goto loc_82394994;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x8239482c
	if (!ctx.cr6.eq) goto loc_8239482C;
	// stw r25,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, r25.u32);
	// b 0x82394b20
	goto loc_82394B20;
loc_82394B10:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x8239482c
	if (!ctx.cr6.eq) goto loc_8239482C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82394B1C:
	// stw r11,256(r10)
	REX_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
loc_82394B20:
	// lwz r4,216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82394b50
	if (ctx.cr6.eq) goto loc_82394B50;
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,410
	ctx.r6.s64 = 410;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82394B44;
	sub_82330E40(ctx, base);
	// stw r3,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823947a0
	if (ctx.cr6.eq) goto loc_823947A0;
loc_82394B50:
	// lwz r4,232(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82394b84
	if (ctx.cr6.eq) goto loc_82394B84;
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,430
	ctx.r6.s64 = 430;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82394B74;
	sub_82330E40(ctx, base);
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823947a0
	if (ctx.cr6.eq) goto loc_823947A0;
	// stw r3,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r3.u32);
loc_82394B84:
	// lwz r11,356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stw r9,260(r10)
	REX_STORE_U32(ctx.r10.u32 + 260, ctx.r9.u32);
	// lwz r8,356(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r6,264(r7)
	REX_STORE_U32(ctx.r7.u32 + 264, ctx.r6.u32);
	// lwz r5,356(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r3,12(r5)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + 12);
	// stw r3,276(r4)
	REX_STORE_U32(ctx.r4.u32 + 276, ctx.r3.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stw r10,280(r11)
	REX_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,196(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 196);
	// stw r8,284(r9)
	REX_STORE_U32(ctx.r9.u32 + 284, ctx.r8.u32);
	// lwz r7,196(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r6,192(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82394be4
	if (!ctx.cr6.gt) goto loc_82394BE4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r25,288(r11)
	REX_STORE_U32(ctx.r11.u32 + 288, r25.u32);
loc_82394BE4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82394d30
	if (!ctx.cr6.eq) goto loc_82394D30;
	// lwz r11,260(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82394c0c
	if (!ctx.cr6.gt) goto loc_82394C0C;
	// li r3,79
	ctx.r3.s64 = 79;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
loc_82394C0C:
	// lwz r10,356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// stw r9,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r9.u32);
	// lwz r8,23728(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 23728);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82394cac
	if (!ctx.cr6.eq) goto loc_82394CAC;
	// lwz r6,21648(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21648);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82394c38
	if (!ctx.cr6.eq) goto loc_82394C38;
	// li r6,32
	ctx.r6.s64 = 32;
loc_82394C38:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,23720
	ctx.r3.s64 = ctx.r11.s64 + 23720;
	// bl 0x82355128
	ctx.lr = 0x82394C48;
	sub_82355128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82394830
	if (!ctx.cr6.eq) goto loc_82394830;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// lwz r10,23728(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23728);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82394cac
	if (!ctx.cr6.gt) goto loc_82394CAC;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// li r7,17
	ctx.r7.s64 = 17;
loc_82394C6C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,23732(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 23732);
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,1216(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1216);
	// addi r8,r11,316
	ctx.r8.s64 = ctx.r11.s64 + 316;
	// stw r8,356(r11)
	REX_STORE_U32(ctx.r11.u32 + 356, ctx.r8.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r4,23992(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 23992);
	// stw r4,212(r11)
	REX_STORE_U32(ctx.r11.u32 + 212, ctx.r4.u32);
	// sth r7,316(r11)
	REX_STORE_U16(ctx.r11.u32 + 316, ctx.r7.u16);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,23728(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 23728);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82394c6c
	if (ctx.cr6.lt) goto loc_82394C6C;
loc_82394CAC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r28,r22
	r28.u64 = r22.u64;
	// lwz r10,23728(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23728);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82394d30
	if (!ctx.cr6.gt) goto loc_82394D30;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82394CC4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,23732(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23732);
	// lwzx r9,r10,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lwz r30,1216(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 1216);
	// lwz r8,224(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 224);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82394d18
	if (!ctx.cr6.eq) goto loc_82394D18;
	// lhz r10,278(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 278);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 228);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// li r6,497
	ctx.r6.s64 = 497;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r8,30,2,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFE;
	// bl 0x82330e40
	ctx.lr = 0x82394D08;
	sub_82330E40(ctx, base);
	// stw r3,224(r30)
	REX_STORE_U32(r30.u32 + 224, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823947a0
	if (ctx.cr6.eq) goto loc_823947A0;
	// stw r3,220(r30)
	REX_STORE_U32(r30.u32 + 220, ctx.r3.u32);
loc_82394D18:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,23728(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 23728);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82394cc4
	if (ctx.cr6.lt) goto loc_82394CC4;
loc_82394D30:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r22,28(r31)
	REX_STORE_U32(r31.u32 + 28, r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823CBBE8) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x823CBBF0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// slw r16,r11,r6
	r16.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r11,1136(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1136);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// srw r26,r11,r6
	r26.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// bne cr6,0x823cbc2c
	if (!ctx.cr6.eq) goto loc_823CBC2C;
	// subf r26,r5,r11
	r26.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_823CBC2C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823cbc48
	if (ctx.cr6.eq) goto loc_823CBC48;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r15,-4224(r9)
	r15.u64 = REX_LOAD_U32(ctx.r9.u32 + -4224);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r17,-4212(r9)
	r17.u64 = REX_LOAD_U32(ctx.r9.u32 + -4212);
	// b 0x823cbc58
	goto loc_823CBC58;
loc_823CBC48:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r15,-4228(r9)
	r15.u64 = REX_LOAD_U32(ctx.r9.u32 + -4228);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r17,-4216(r9)
	r17.u64 = REX_LOAD_U32(ctx.r9.u32 + -4216);
loc_823CBC58:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x823cbca8
	if (!ctx.cr6.eq) goto loc_823CBCA8;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// bge cr6,0x823cbcb8
	if (!ctx.cr6.lt) goto loc_823CBCB8;
loc_823CBC68:
	// lwz r11,3624(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cbc90
	if (!ctx.cr6.eq) goto loc_823CBC90;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,52(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823CBC90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CBC90:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823CBC9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
loc_823CBCA8:
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(r26.u32, r18.u32, ctx.xer);
	// blt cr6,0x823cbc68
	if (ctx.cr6.lt) goto loc_823CBC68;
	// cmplwi cr6,r24,6
	ctx.cr6.compare<uint32_t>(r24.u32, 6, ctx.xer);
	// bge cr6,0x823cbcc0
	if (!ctx.cr6.lt) goto loc_823CBCC0;
loc_823CBCB8:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823cbcc4
	goto loc_823CBCC4;
loc_823CBCC0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_823CBCC4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823dc788
	ctx.lr = 0x823CBCCC;
	sub_823DC788(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cbce8
	if (!ctx.cr6.eq) goto loc_823CBCE8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
loc_823CBCE8:
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// mr r29,r20
	r29.u64 = r20.u64;
	// mr r23,r20
	r23.u64 = r20.u64;
	// beq cr6,0x823cbc9c
	if (ctx.cr6.eq) goto loc_823CBC9C;
	// mr r27,r20
	r27.u64 = r20.u64;
	// lis r19,-32255
	r19.s64 = -2113863680;
loc_823CBD04:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CBD1C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cbe40
	if (ctx.cr6.eq) goto loc_823CBE40;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r17.u32, ctx.xer);
	// bge cr6,0x823cbd94
	if (!ctx.cr6.lt) goto loc_823CBD94;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stwx r20,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, r20.u32);
	// beq cr6,0x823cbd58
	if (ctx.cr6.eq) goto loc_823CBD58;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// subf r31,r18,r26
	r31.u64 = r26.u64 - r18.u64;
	// beq cr6,0x823cbd5c
	if (ctx.cr6.eq) goto loc_823CBD5C;
loc_823CBD58:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_823CBD5C:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r11,r21
	ctx.r5.u64 = ctx.r11.u64 + r21.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823CBD84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cbe40
	if (ctx.cr6.eq) goto loc_823CBE40;
	// add r29,r31,r29
	r29.u64 = r31.u64 + r29.u64;
	// b 0x823cbe24
	goto loc_823CBE24;
loc_823CBD94:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r6,-4220(r19)
	ctx.r6.u64 = REX_LOAD_U32(r19.u32 + -4220);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CBDAC;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cbe40
	if (ctx.cr6.eq) goto loc_823CBE40;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r10.u32);
	// beq cr6,0x823cbdd4
	if (ctx.cr6.eq) goto loc_823CBDD4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// mr r31,r18
	r31.u64 = r18.u64;
	// beq cr6,0x823cbdd8
	if (ctx.cr6.eq) goto loc_823CBDD8;
loc_823CBDD4:
	// mr r31,r20
	r31.u64 = r20.u64;
loc_823CBDD8:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// bge cr6,0x823cbe24
	if (!ctx.cr6.lt) goto loc_823CBE24;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_823CBDEC:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dce68
	ctx.lr = 0x823CBE04;
	sub_823DCE68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cbe40
	if (ctx.cr6.eq) goto loc_823CBE40;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(r31.u32, r26.u32, ctx.xer);
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// blt cr6,0x823cbdec
	if (ctx.cr6.lt) goto loc_823CBDEC;
loc_823CBE24:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r23,r16
	ctx.cr6.compare<uint32_t>(r23.u32, r16.u32, ctx.xer);
	// blt cr6,0x823cbd04
	if (ctx.cr6.lt) goto loc_823CBD04;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
loc_823CBE40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_823D6EB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
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
loc_823D6ECC:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823d6ecc
	if (ctx.cr6.lt) goto loc_823D6ECC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D9358) {
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
	ctx.lr = 0x823D9360;
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// neg r5,r8
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// rlwinm r12,r5,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x823D9388;
	sub_826A2D14(ctx, base);
	// lwz r4,0(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// neg r11,r8
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stwux r4,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826a2d14
	ctx.lr = 0x823D93A0;
	sub_826A2D14(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r20,0
	r20.s64 = 0;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r23,r20
	r23.u64 = r20.u64;
	// addi r25,r11,-1
	r25.s64 = ctx.r11.s64 + -1;
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(r25.s32, 1, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x823d944c
	if (ctx.cr6.eq) goto loc_823D944C;
	// rlwinm r21,r19,4,0,27
	r21.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 4) & 0xFFFFFFF0;
loc_823D93C8:
	// add r11,r25,r23
	ctx.r11.u64 = r25.u64 + r23.u64;
	// mr r26,r20
	r26.u64 = r20.u64;
	// srawi r24,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r24.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823d942c
	if (!ctx.cr6.gt) goto loc_823D942C;
	// mullw r8,r24,r10
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(ctx.r10.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r30,r8,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r4,r22
	r27.u64 = r22.u64 - ctx.r4.u64;
loc_823D93F0:
	// lwz r8,48(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r29,r27,r11
	r29.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// lhzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + ctx.r8.u32);
	// extsh r28,r8
	r28.s64 = ctx.r8.s16;
	// add r8,r28,r29
	ctx.r8.u64 = r28.u64 + r29.u64;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x823d9418
	if (!ctx.cr6.lt) goto loc_823D9418;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
loc_823D9418:
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r26,r29,r26
	r26.u64 = r29.u64 + r26.u64;
	// bdnz 0x823d93f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D93F0;
loc_823D942C:
	// cmpw cr6,r26,r21
	ctx.cr6.compare<int32_t>(r26.s32, r21.s32, ctx.xer);
	// ble cr6,0x823d943c
	if (!ctx.cr6.gt) goto loc_823D943C;
	// mr r25,r24
	r25.u64 = r24.u64;
	// b 0x823d9440
	goto loc_823D9440;
loc_823D943C:
	// mr r23,r24
	r23.u64 = r24.u64;
loc_823D9440:
	// subf r11,r23,r25
	ctx.r11.u64 = r25.u64 - r23.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823d93c8
	if (!ctx.cr6.eq) goto loc_823D93C8;
loc_823D944C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823d94d4
	if (!ctx.cr6.gt) goto loc_823D94D4;
	// mullw r8,r25,r10
	ctx.r8.s64 = int64_t(r25.s32) * int64_t(ctx.r10.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mullw r30,r23,r10
	r30.s64 = int64_t(r23.s32) * int64_t(ctx.r10.s32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r25,r8,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r30,1,0,30
	r26.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r4,r22
	r28.u64 = r22.u64 - ctx.r4.u64;
	// subf r27,r4,r5
	r27.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_823D9474:
	// lwz r8,48(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r29,r11,r28
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lhzx r8,r26,r8
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + ctx.r8.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,48(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r29,r11,r28
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lhzx r8,r25,r8
	ctx.r8.u64 = REX_LOAD_U16(r25.u32 + ctx.r8.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// stwx r8,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x823d94b4
	if (!ctx.cr6.lt) goto loc_823D94B4;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
loc_823D94B4:
	// lwzx r8,r27,r11
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x823d94c4
	if (!ctx.cr6.lt) goto loc_823D94C4;
	// stwx r20,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, r20.u32);
loc_823D94C4:
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d9474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9474;
loc_823D94D4:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// bl 0x823d9018
	ctx.lr = 0x823D94E4;
	sub_823D9018(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_823E2BA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x823e2c28
	if (!ctx.cr6.gt) goto loc_823E2C28;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823e2c28
	if (!ctx.cr6.lt) goto loc_823E2C28;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e2c18
	if (ctx.cr6.eq) goto loc_823E2C18;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e2c10
	if (!ctx.cr6.gt) goto loc_823E2C10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E2BE0:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r5,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823e2be0
	if (ctx.cr6.lt) goto loc_823E2BE0;
loc_823E2C10:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_823E2C18:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
loc_823E2C28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E5E20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,4496
	ctx.r3.s64 = ctx.r11.s64 + 4496;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E5F18) {
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
	ctx.lr = 0x823E5F20;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ca8
	ctx.lr = 0x823E5F28;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e5f74
	if (ctx.cr6.eq) goto loc_823E5F74;
	// bl 0x8269dfa8
	ctx.lr = 0x823E5F48;
	sub_8269DFA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-31628
	ctx.r4.s64 = ctx.r11.s64 + -31628;
	// addi r5,r10,7584
	ctx.r5.s64 = ctx.r10.s64 + 7584;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x8269f3c0
	ctx.lr = 0x823E5F60;
	sub_8269F3C0(ctx, base);
loc_823E5F60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cf4
	ctx.lr = 0x823E5F70;
	// b 0x826a1d04
	return;
loc_823E5F74:
	// srawi r29,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r29.s64 = ctx.r3.s32 >> 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// bl 0x823e7f30
	ctx.lr = 0x823E5F94;
	sub_823E7F30(ctx, base);
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x823e5fc4
	if (!ctx.cr6.eq) goto loc_823E5FC4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,-31680
	ctx.r4.s64 = ctx.r11.s64 + -31680;
	// bl 0x82331180
	ctx.lr = 0x823E5FBC;
	sub_82331180(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x823e5fd8
	goto loc_823E5FD8;
loc_823E5FC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823e5fd4
	if (ctx.cr6.lt) goto loc_823E5FD4;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_823E5FD4:
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_823E5FD8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823e5f60
	if (ctx.cr6.eq) goto loc_823E5F60;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x823e7f30
	ctx.lr = 0x823E6000;
	sub_823E7F30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfd f29,32424(r10)
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// fmul f13,f0,f29
	ctx.f13.f64 = ctx.f0.f64 * f29.f64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// ble cr6,0x823e609c
	if (!ctx.cr6.gt) goto loc_823E609C;
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// li r29,0
	r29.s64 = 0;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f30,f0
	f30.f64 = double(ctx.f0.s64);
	// lfd f31,7576(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 7576);
loc_823E6044:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fdiv f12,f13,f30
	ctx.f12.f64 = ctx.f13.f64 / f30.f64;
	// fadd f11,f12,f29
	ctx.f11.f64 = ctx.f12.f64 + f29.f64;
	// fmul f28,f11,f31
	f28.f64 = ctx.f11.f64 * f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x826a15c0
	ctx.lr = 0x823E6068;
	sub_826A15C0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// stfsx f10,r10,r29
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + r29.u32, temp.u32);
	// bl 0x826a14e0
	ctx.lr = 0x823E607C;
	sub_826A14E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// blt cr6,0x823e6044
	if (ctx.cr6.lt) goto loc_823E6044;
loc_823E609C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cf4
	ctx.lr = 0x823E60AC;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823EC810) {
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
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x82793904
	ctx.lr = 0x823EC834;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ec9d4
	if (ctx.cr0.eq) goto loc_823EC9D4;
	// bl 0x82793674
	ctx.lr = 0x823EC840;
	__imp__XGetAVPack(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x823ec9d4
	if (ctx.cr6.eq) goto loc_823EC9D4;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x823ec9d4
	if (ctx.cr6.eq) goto loc_823EC9D4;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x823ec9d4
	if (ctx.cr6.eq) goto loc_823EC9D4;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x823ec9d4
	if (ctx.cr6.eq) goto loc_823EC9D4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x827938f4
	ctx.lr = 0x823EC878;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ec9d4
	if (!ctx.cr0.eq) goto loc_823EC9D4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x823ec9d4
	if (!ctx.cr6.eq) goto loc_823EC9D4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x827938f4
	ctx.lr = 0x823EC8A8;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ec9d4
	if (!ctx.cr0.eq) goto loc_823EC9D4;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823ec8c4
	if (!ctx.cr0.eq) goto loc_823EC8C4;
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ec9d4
	if (!ctx.cr0.eq) goto loc_823EC9D4;
loc_823EC8C4:
	// bl 0x82793664
	ctx.lr = 0x823EC8C8;
	__imp__XGetLanguage(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,256(r1)
	REX_STORE_U16(ctx.r1.u32 + 256, r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,258
	ctx.r3.s64 = ctx.r1.s64 + 258;
	// bl 0x826a2e60
	ctx.lr = 0x823EC8E0;
	sub_826A2E60(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,192(r1)
	REX_STORE_U16(ctx.r1.u32 + 192, r30.u16);
	// addi r3,r1,194
	ctx.r3.s64 = ctx.r1.s64 + 194;
	// bl 0x826a2e60
	ctx.lr = 0x823EC8F4;
	sub_826A2E60(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,17
	ctx.r8.s64 = 17;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(r31.u32, 10, ctx.xer);
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r7,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// blt cr6,0x823ec994
	if (ctx.cr6.lt) goto loc_823EC994;
	// li r31,1
	r31.s64 = 1;
loc_823EC994:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bl 0x823ec790
	ctx.lr = 0x823EC9AC;
	sub_823EC790(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bl 0x823ec790
	ctx.lr = 0x823EC9C0;
	sub_823EC790(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823ec6d8
	ctx.lr = 0x823EC9D0;
	sub_823EC6D8(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_823EC9D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
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

DEFINE_REX_FUNC(sub_823F5168) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823f5090
	ctx.lr = 0x823F5190;
	sub_823F5090(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f59f0
	ctx.lr = 0x823F51AC;
	sub_823F59F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_823F7098) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2444(r3)
	REX_STORE_U32(ctx.r3.u32 + 2444, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F7758) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lhzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// bgt cr6,0x823f77a8
	if (ctx.cr6.gt) goto loc_823F77A8;
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// blr 
	return;
loc_823F77A8:
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x823f77c0
	if (ctx.cr6.gt) goto loc_823F77C0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
loc_823F77C0:
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x823f77d8
	if (ctx.cr6.gt) goto loc_823F77D8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stwx r8,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u32);
loc_823F77D8:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823f780c
	if (!ctx.cr6.gt) goto loc_823F780C;
	// subfc r11,r9,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x823f77d8
	goto loc_823F77D8;
loc_823F780C:
	// subfc r11,r10,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x823f77d8
	goto loc_823F77D8;
}

DEFINE_REX_FUNC(sub_823FCDB0) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82130e88
	ctx.lr = 0x823FCDCC;
	sub_82130E88(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823fcddc
	if (!ctx.cr6.eq) goto loc_823FCDDC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823fcdf8
	goto loc_823FCDF8;
loc_823FCDDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r10,-449
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -449, ctx.xer);
	// bne cr6,0x823fcdf4
	if (!ctx.cr6.eq) goto loc_823FCDF4;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
loc_823FCDF4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_823FCDF8:
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

DEFINE_REX_FUNC(sub_823FFEB8) {
	REX_FUNC_PROLOGUE();
	// b 0x823ffdd0
	sub_823FFDD0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823FFF70) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823ffec0
	ctx.lr = 0x823FFF98;
	sub_823FFEC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823fffb8
	if (ctx.cr0.lt) goto loc_823FFFB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stbx r30,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, r30.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_823FFFB8:
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

DEFINE_REX_FUNC(sub_82400A50) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,2(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 2);
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
	// stw r11,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// lhz r11,6(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 6);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// lhz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 8);
	// rlwinm r10,r11,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// lwz r11,10(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 10);
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
	// stw r11,10(r3)
	REX_STORE_U32(ctx.r3.u32 + 10, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82408EF8) {
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
	ctx.lr = 0x82408F00;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,20188
	ctx.r11.s64 = ctx.r11.s64 + 20188;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r28,r3,60
	r28.s64 = ctx.r3.s64 + 60;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82408F58;
	sub_826A1E70(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// beq cr6,0x82408f74
	if (ctx.cr6.eq) goto loc_82408F74;
	// addi r11,r11,-29080
	ctx.r11.s64 = ctx.r11.s64 + -29080;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// b 0x82408f78
	goto loc_82408F78;
loc_82408F74:
	// addi r10,r11,-29080
	ctx.r10.s64 = ctx.r11.s64 + -29080;
loc_82408F78:
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// rlwinm r10,r29,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
	// addic r9,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r9.s64 = r29.s64 + -1;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// subfe r10,r9,r29
	temp.u8 = (~ctx.r9.u32 + r29.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x8240904c
	if (ctx.cr6.eq) goto loc_8240904C;
	// lwz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 76);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r6,r10,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// rlwinm r10,r10,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,20328(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20328);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
loc_8240904C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82409074
	if (!ctx.cr6.eq) goto loc_82409074;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r8,10784
	ctx.r8.s64 = 706740224;
	// ori r8,r8,2565
	ctx.r8.u64 = ctx.r8.u64 | 2565;
	// rlwinm r9,r9,0,26,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82409074
	if (ctx.cr6.eq) goto loc_82409074;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82409074:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82409080
	if (!ctx.cr6.eq) goto loc_82409080;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82409080:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r9,120(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 120);
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mullw r3,r9,r8
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r8,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r8.u32);
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// subf r8,r6,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// stw r8,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r7,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r7.u32);
	// beq cr6,0x82409114
	if (ctx.cr6.eq) goto loc_82409114;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// lwz r29,112(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// mullw r9,r5,r4
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_82409114:
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82409158
	if (ctx.cr6.eq) goto loc_82409158;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x82409134;
	sub_823F02B8(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8240915c
	if (ctx.cr0.eq) goto loc_8240915C;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a2e60
	ctx.lr = 0x82409154;
	sub_826A2E60(ctx, base);
	// b 0x8240915c
	goto loc_8240915C;
loc_82409158:
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
loc_8240915C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82412330) {
	REX_FUNC_PROLOGUE();
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
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2ca8
	ctx.lr = 0x82412344;
	// lwz r10,160(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82412644
	if (ctx.cr6.eq) goto loc_82412644;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82412644
	if (ctx.cr6.eq) goto loc_82412644;
	// lwz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r6,136(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// ori r4,r9,75
	ctx.r4.u64 = ctx.r9.u64 | 75;
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mullw r7,r10,r8
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r9,132(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mullw r8,r6,r3
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r31,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// blt cr6,0x8241263c
	if (ctx.cr6.lt) goto loc_8241263C;
	// lis r6,6184
	ctx.r6.s64 = 405274624;
	// ori r6,r6,76
	ctx.r6.u64 = ctx.r6.u64 | 76;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82412584
	if (!ctx.cr6.gt) goto loc_82412584;
	// lis r6,6688
	ctx.r6.s64 = 438304768;
	// ori r6,r6,74
	ctx.r6.u64 = ctx.r6.u64 | 74;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8241263c
	if (!ctx.cr6.gt) goto loc_8241263C;
	// lis r6,6688
	ctx.r6.s64 = 438304768;
	// ori r6,r6,76
	ctx.r6.u64 = ctx.r6.u64 | 76;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x8241263c
	if (ctx.cr6.gt) goto loc_8241263C;
	// lwz r8,140(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8241263c
	if (!ctx.cr6.lt) goto loc_8241263C;
	// addi r4,r7,-2
	ctx.r4.s64 = ctx.r7.s64 + -2;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f6,20324(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20324);
	ctx.f6.f64 = double(temp.f32);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lfs f7,20320(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20320);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f8,20316(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20316);
	ctx.f8.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f9,20312(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20312);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20308(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20308);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,3720(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,20304(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20304);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20300(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20300);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20296(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20296);
	ctx.f13.f64 = double(temp.f32);
loc_82412438:
	// lfs f5,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// lfs f2,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// lfs f31,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	f31.f64 = double(temp.f32);
	// lfs f30,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	f30.f64 = double(temp.f32);
	// fmuls f29,f31,f12
	f29.f64 = double(float(f31.f64 * ctx.f12.f64));
	// lfs f28,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f28.f64 = double(temp.f32);
	// fmadds f5,f2,f12,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f5.f64)));
	// fmsubs f3,f31,f10,f3
	ctx.f3.f64 = double(float(std::fma(f31.f64, ctx.f10.f64, -ctx.f3.f64)));
	// fmadds f2,f31,f7,f1
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f7.f64, ctx.f1.f64)));
	// fmadds f1,f28,f13,f29
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f13.f64, f29.f64)));
	// fmadds f5,f30,f13,f5
	ctx.f5.f64 = double(float(std::fma(f30.f64, ctx.f13.f64, ctx.f5.f64)));
	// fnmsubs f3,f28,f8,f3
	ctx.f3.f64 = double(float(-std::fma(f28.f64, ctx.f8.f64, -ctx.f3.f64)));
	// fmsubs f2,f28,f10,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f10.f64, -ctx.f2.f64)));
	// fmadds f4,f4,f11,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f1.f64)));
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fadds f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f5.u64);
	// fctiwz f5,f3
	ctx.f5.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// fctiwz f3,f2
	ctx.f3.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f5,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f5.u64);
	// stfd f3,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f3.u64);
	// lwz r7,-52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r8,-60(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// fctiwz f5,f4
	ctx.f5.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f5,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f5.u64);
	// lwz r6,-52(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// addic. r6,r6,16
	ctx.xer.ca = ctx.r6.u32 > 4294967279;
	ctx.r6.s64 = ctx.r6.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r9,r7,128
	ctx.r9.s64 = ctx.r7.s64 + 128;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// bge 0x824124dc
	if (!ctx.cr0.lt) goto loc_824124DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x824124e8
	goto loc_824124E8;
loc_824124DC:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// ble cr6,0x824124e8
	if (!ctx.cr6.gt) goto loc_824124E8;
	// li r6,255
	ctx.r6.s64 = 255;
loc_824124E8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x824124f8
	if (!ctx.cr6.lt) goto loc_824124F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82412504
	goto loc_82412504;
loc_824124F8:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// ble cr6,0x82412504
	if (!ctx.cr6.gt) goto loc_82412504;
	// li r5,255
	ctx.r5.s64 = 255;
loc_82412504:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82412514
	if (!ctx.cr6.lt) goto loc_82412514;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82412520
	goto loc_82412520;
loc_82412514:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// ble cr6,0x82412520
	if (!ctx.cr6.gt) goto loc_82412520;
	// li r8,255
	ctx.r8.s64 = 255;
loc_82412520:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82412530
	if (!ctx.cr6.lt) goto loc_82412530;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8241253c
	goto loc_8241253C;
loc_82412530:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8241253c
	if (!ctx.cr6.gt) goto loc_8241253C;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8241253C:
	// lwz r7,168(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lwz r31,172(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// slw r8,r8,r31
	ctx.r8.u64 = r31.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r31.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r8,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r8.u16);
	// lwz r7,168(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r8,172(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// slw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// sthu r9,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r4.u32 = ea;
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82412438
	if (ctx.cr6.lt) goto loc_82412438;
	// b 0x8241263c
	goto loc_8241263C;
loc_82412584:
	// lwz r6,140(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8241263c
	if (!ctx.cr6.lt) goto loc_8241263C;
	// addi r9,r7,-2
	ctx.r9.s64 = ctx.r7.s64 + -2;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// lfs f13,20204(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3720(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
loc_824125AC:
	// lfs f12,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,172(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lfs f11,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// lwz r6,168(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// fctiwz f12,f11
	ctx.f12.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r4,-52(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// slw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// sth r7,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r7.u16);
	// lwz r7,168(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r6,172(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f12,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f11,f11,f13,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f11.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f12.u64);
	// lwz r5,-52(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// slw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sthu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// lwz r7,140(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824125ac
	if (ctx.cr6.lt) goto loc_824125AC;
loc_8241263C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
loc_82412644:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2cf4
	ctx.lr = 0x82412650;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243AF68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8243AF70;
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
	// b 0x8243af94
	goto loc_8243AF94;
loc_8243AF88:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243afb8
	if (ctx.cr6.eq) goto loc_8243AFB8;
loc_8243AF94:
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
	// bl 0x82439140
	ctx.lr = 0x8243AFAC;
	sub_82439140(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243af88
	if (!ctx.cr0.lt) goto loc_8243AF88;
	// b 0x8243afbc
	goto loc_8243AFBC;
loc_8243AFB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243AFBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8243C698) {
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
	// beq cr6,0x8243c6d4
	if (ctx.cr6.eq) goto loc_8243C6D4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x824bf440
	ctx.lr = 0x8243C6B8;
	sub_824BF440(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8243c6d0
	if (ctx.cr0.eq) goto loc_8243C6D0;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8243C6D0;
	sub_826A2E60(ctx, base);
loc_8243C6D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8243C6D4:
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

DEFINE_REX_FUNC(sub_8243F568) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stb r5,44(r4)
	REX_STORE_U8(ctx.r4.u32 + 44, ctx.r5.u8);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824401E0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824401fc
	if (ctx.cr6.eq) goto loc_824401FC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824401fc
	if (ctx.cr6.eq) goto loc_824401FC;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// and r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 & ctx.r5.u64;
	// blr 
	return;
loc_824401FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440408) {
	REX_FUNC_PROLOGUE();
	// lbz r11,1559(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1559);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r10,1560(r3)
	REX_STORE_U8(ctx.r3.u32 + 1560, ctx.r10.u8);
	// stw r11,1376(r3)
	REX_STORE_U32(ctx.r3.u32 + 1376, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82440508) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm. r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lbz r10,9(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82440584
	if (!ctx.cr6.eq) goto loc_82440584;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82440554
	if (!ctx.cr6.eq) goto loc_82440554;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_8244053C:
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stbu r9,3(r11)
	ea = 3 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8244053c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244053C;
	// blr 
	return;
loc_82440554:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
loc_8244056C:
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stbu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8244056c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244056C;
	// blr 
	return;
loc_82440584:
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x824405cc
	if (!ctx.cr6.eq) goto loc_824405CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824405A4:
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r9,5(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r11,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r11.u8);
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r8,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// stbu r7,6(r10)
	ea = 6 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x824405a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824405A4;
	// blr 
	return;
loc_824405CC:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824405E4:
	// lbz r11,3(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r9,7(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// lbz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// stb r11,7(r10)
	REX_STORE_U8(ctx.r10.u32 + 7, ctx.r11.u8);
	// stb r9,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// stb r8,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r8.u8);
	// stbu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x824405e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824405E4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824458D0) {
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
	ctx.lr = 0x824458EC;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82444608
	ctx.lr = 0x824458FC;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445944
	if (ctx.cr0.eq) goto loc_82445944;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r10,r10,-8020
	ctx.r10.s64 = ctx.r10.s64 + -8020;
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
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x82445948
	goto loc_82445948;
loc_82445944:
	// li r31,0
	r31.s64 = 0;
loc_82445948:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82445958
	if (!ctx.cr6.eq) goto loc_82445958;
loc_82445950:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824459f8
	goto loc_824459F8;
loc_82445958:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244599c
	if (ctx.cr6.eq) goto loc_8244599C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445950
	if (ctx.cr0.eq) goto loc_82445950;
loc_8244599C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824459c8
	if (ctx.cr6.eq) goto loc_824459C8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824459BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445950
	if (ctx.cr0.eq) goto loc_82445950;
loc_824459C8:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824459f4
	if (ctx.cr6.eq) goto loc_824459F4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824459E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82445950
	if (ctx.cr0.eq) goto loc_82445950;
loc_824459F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824459F8:
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

DEFINE_REX_FUNC(sub_8244A740) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8244a774
	if (ctx.cr6.eq) goto loc_8244A774;
loc_8244A754:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8244a76c
	if (ctx.cr0.eq) goto loc_8244A76C;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8244a754
	if (!ctx.cr0.eq) goto loc_8244A754;
loc_8244A76C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8244a780
	if (!ctx.cr6.eq) goto loc_8244A780;
loc_8244A774:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_8244A780:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r11,r4,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244E138) {
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
	ctx.lr = 0x8244E140;
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r14,284
	r14.s64 = 284;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// beq cr6,0x8244e1a4
	if (ctx.cr6.eq) goto loc_8244E1A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4352
	ctx.r5.s64 = ctx.r11.s64 + 4352;
loc_8244E184:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r10,2940
	ctx.r4.s64 = ctx.r10.s64 + 2940;
	// bl 0x8244beb0
	ctx.lr = 0x8244E194;
	sub_8244BEB0(ctx, base);
loc_8244E194:
	// li r14,-1
	r14.s64 = -1;
loc_8244E198:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x826a1cd0
	return;
loc_8244E1A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r24,0
	r24.s64 = 0;
	// stw r11,92(r23)
	REX_STORE_U32(r23.u32 + 92, ctx.r11.u32);
	// lwz r3,128(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244e1d0
	if (ctx.cr6.eq) goto loc_8244E1D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244E1CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,128(r23)
	REX_STORE_U32(r23.u32 + 128, r24.u32);
loc_8244E1D0:
	// li r5,1084
	ctx.r5.s64 = 1084;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x826a2e60
	ctx.lr = 0x8244E1E0;
	sub_826A2E60(ctx, base);
	// mr r31,r24
	r31.u64 = r24.u64;
	// b 0x8244e210
	goto loc_8244E210;
loc_8244E1E8:
	// cmpwi cr6,r3,280
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 280, ctx.xer);
	// beq cr6,0x8244e230
	if (ctx.cr6.eq) goto loc_8244E230;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8244b9e8
	ctx.lr = 0x8244E204;
	sub_8244B9E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8244e194
	if (ctx.cr6.eq) goto loc_8244E194;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8244E210:
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8244d5c0
	ctx.lr = 0x8244E224;
	sub_8244D5C0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8244e1e8
	if (!ctx.cr6.eq) goto loc_8244E1E8;
	// b 0x8244e194
	goto loc_8244E194;
loc_8244E230:
	// lwz r30,360(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8244e268
	if (ctx.cr6.eq) goto loc_8244E268;
	// addi r28,r1,364
	r28.s64 = ctx.r1.s64 + 364;
loc_8244E244:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8244cea8
	ctx.lr = 0x8244E250;
	sub_8244CEA8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8244e194
	if (ctx.cr6.eq) goto loc_8244E194;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// blt cr6,0x8244e244
	if (ctx.cr6.lt) goto loc_8244E244;
loc_8244E268:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mulli r4,r30,20
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(20));
	// bl 0x82444608
	ctx.lr = 0x8244E278;
	sub_82444608(ctx, base);
	// mulli r19,r31,66
	r19.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(66));
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r19,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r29,r24
	r29.u64 = r24.u64;
	// bl 0x82444608
	ctx.lr = 0x8244E294;
	sub_82444608(ctx, base);
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x82444608
	ctx.lr = 0x8244E2AC;
	sub_82444608(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// mr r22,r24
	r22.u64 = r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8244e2e0
	if (ctx.cr6.eq) goto loc_8244E2E0;
	// addi r10,r1,360
	ctx.r10.s64 = ctx.r1.s64 + 360;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8244E2C8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// bdnz 0x8244e2c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244E2C8;
loc_8244E2E0:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82444608
	ctx.lr = 0x8244E2F0;
	sub_82444608(ctx, base);
	// rlwinm r27,r31,7,0,24
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r20,r24
	r20.u64 = r24.u64;
	// bl 0x82444608
	ctx.lr = 0x8244E30C;
	sub_82444608(ctx, base);
	// stw r24,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r24.u32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8244e3d4
	if (ctx.cr6.eq) goto loc_8244E3D4;
	// addi r28,r1,364
	r28.s64 = ctx.r1.s64 + 364;
	// addi r31,r21,-8
	r31.s64 = r21.s64 + -8;
	// mr r26,r30
	r26.u64 = r30.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8244E32C:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8244b780
	ctx.lr = 0x8244E344;
	sub_8244B780(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// sth r11,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r11.u16);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// sth r11,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r11.u16);
	// sth r24,18(r31)
	REX_STORE_U16(r31.u32 + 18, r24.u16);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e398
	if (ctx.cr6.eq) goto loc_8244E398;
	// stw r20,24(r31)
	REX_STORE_U32(r31.u32 + 24, r20.u32);
	// add r3,r20,r15
	ctx.r3.u64 = r20.u64 + r15.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mullw r25,r10,r11
	r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8244E390;
	sub_826A1E70(ctx, base);
	// add r20,r25,r20
	r20.u64 = r25.u64 + r20.u64;
	// b 0x8244e3a0
	goto loc_8244E3A0;
loc_8244E398:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_8244E3A0:
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8244bcb8
	ctx.lr = 0x8244E3C4;
	sub_8244BCB8(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stwu r3,20(r31)
	ea = 20 + r31.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r31.u32 = ea;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x8244e32c
	if (!ctx.cr0.eq) goto loc_8244E32C;
loc_8244E3D4:
	// cmplw cr6,r20,r22
	ctx.cr6.compare<uint32_t>(r20.u32, r22.u32, ctx.xer);
	// beq cr6,0x8244e3e8
	if (ctx.cr6.eq) goto loc_8244E3E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4320
	ctx.r5.s64 = ctx.r11.s64 + 4320;
	// b 0x8244e184
	goto loc_8244E184;
loc_8244E3E8:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// ble cr6,0x8244e400
	if (!ctx.cr6.gt) goto loc_8244E400;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4268
	ctx.r5.s64 = ctx.r11.s64 + 4268;
	// b 0x8244e184
	goto loc_8244E184;
loc_8244E400:
	// mulli r30,r29,20
	r30.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(20));
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r30,28
	r28.s64 = r30.s64 + 28;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r11,r28
	r26.u64 = ctx.r11.u64 + r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r25,r10,r26
	r25.u64 = ctx.r10.u64 + r26.u64;
	// add r27,r25,r20
	r27.u64 = r25.u64 + r20.u64;
	// add r22,r27,r9
	r22.u64 = r27.u64 + ctx.r9.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82444608
	ctx.lr = 0x8244E438;
	sub_82444608(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r24,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r24,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r24.u32);
	// stw r24,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r24,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8244E470;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8244e4b8
	if (ctx.cr6.eq) goto loc_8244E4B8;
	// addi r11,r30,-20
	ctx.r11.s64 = r30.s64 + -20;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8244E480:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8244e498
	if (ctx.cr6.eq) goto loc_8244E498;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// b 0x8244e49c
	goto loc_8244E49C;
loc_8244E498:
	// stw r24,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r24.u32);
loc_8244E49C:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stwu r9,20(r11)
	ea = 20 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8244e480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244E480;
loc_8244E4B8:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r30,r31,r28
	r30.u64 = r31.u64 + r28.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8244E4D0;
	sub_826A1E70(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e510
	if (ctx.cr6.eq) goto loc_8244E510;
	// addi r11,r30,12
	ctx.r11.s64 = r30.s64 + 12;
loc_8244E4E4:
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8244e4fc
	if (ctx.cr0.eq) goto loc_8244E4FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8244E4FC:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8244e4e4
	if (ctx.cr6.lt) goto loc_8244E4E4;
loc_8244E510:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r30,r31,r26
	r30.u64 = r31.u64 + r26.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8244E528;
	sub_826A1E70(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e564
	if (ctx.cr6.eq) goto loc_8244E564;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
loc_8244E53C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stwu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8244e53c
	if (ctx.cr6.lt) goto loc_8244E53C;
loc_8244E564:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// add r3,r31,r25
	ctx.r3.u64 = r31.u64 + r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8244E574;
	sub_826A1E70(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// add r3,r31,r27
	ctx.r3.u64 = r31.u64 + r27.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x826a1e70
	ctx.lr = 0x8244E584;
	sub_826A1E70(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823f02b8
	ctx.lr = 0x8244E590;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8244e5a4
	if (ctx.cr0.eq) goto loc_8244E5A4;
	// bl 0x8243b9c0
	ctx.lr = 0x8244E59C;
	sub_8243B9C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8244e5a8
	goto loc_8244E5A8;
loc_8244E5A4:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8244E5A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243b9f0
	ctx.lr = 0x8244E5BC;
	sub_8243B9F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8244e5d0
	if (!ctx.cr0.lt) goto loc_8244E5D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,4228
	ctx.r5.s64 = ctx.r11.s64 + 4228;
	// b 0x8244e184
	goto loc_8244E184;
loc_8244E5D0:
	// lwz r11,324(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 324);
	// stw r30,128(r23)
	REX_STORE_U32(r23.u32 + 128, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8244e5f0
	if (ctx.cr6.eq) goto loc_8244E5F0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r3,316(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 316);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824da028
	ctx.lr = 0x8244E5F0;
	sub_824DA028(ctx, base);
loc_8244E5F0:
	// stw r24,124(r23)
	REX_STORE_U32(r23.u32 + 124, r24.u32);
	// b 0x8244e198
	goto loc_8244E198;
}

DEFINE_REX_FUNC(sub_82472228) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82472230;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,260(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r28,r11,12
	r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x82477448
	ctx.lr = 0x82472254;
	sub_82477448(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82477448
	ctx.lr = 0x82472264;
	sub_82477448(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477448
	ctx.lr = 0x82472274;
	sub_82477448(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x82477448
	ctx.lr = 0x82472284;
	sub_82477448(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// beq cr6,0x824725d8
	if (ctx.cr6.eq) goto loc_824725D8;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824725d8
	if (ctx.cr6.eq) goto loc_824725D8;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824725d8
	if (ctx.cr6.eq) goto loc_824725D8;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824725d8
	if (ctx.cr6.eq) goto loc_824725D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824722D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824715b8
	ctx.lr = 0x824722E0;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,320(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82472318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82472344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247236C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x824723A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824723D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824723F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82472430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247245C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82472484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x824724BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824724E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82472510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82472548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82472574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247259C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824725B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x824725C8;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824725e0
	if (ctx.cr0.lt) goto loc_824725E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824725e0
	goto loc_824725E0;
loc_824725D8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824725E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82493318) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// beq cr6,0x82493344
	if (ctx.cr6.eq) goto loc_82493344;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82493344:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82492cb8
	ctx.lr = 0x8249334C;
	sub_82492CB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249335c
	if (ctx.cr0.eq) goto loc_8249335C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82493378
	if (ctx.cr6.lt) goto loc_82493378;
loc_8249335C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824930e8
	ctx.lr = 0x82493364;
	sub_824930E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82493374
	if (ctx.cr0.eq) goto loc_82493374;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82493378
	if (ctx.cr6.lt) goto loc_82493378;
loc_82493374:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82493378:
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

DEFINE_REX_FUNC(sub_82494458) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824944bc
	if (ctx.cr6.lt) goto loc_824944BC;
	// beq cr6,0x824944b4
	if (ctx.cr6.eq) goto loc_824944B4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824944b4
	if (ctx.cr6.lt) goto loc_824944B4;
	// beq cr6,0x82494480
	if (ctx.cr6.eq) goto loc_82494480;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82494480:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,8(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// lfd f13,-3744(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfd f13,-23680(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -23680);
	// blt cr6,0x824944a4
	if (ctx.cr6.lt) goto loc_824944A4;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// b 0x824944a8
	goto loc_824944A8;
loc_824944A4:
	// fsub f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
loc_824944A8:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r4
	REX_STORE_U32(ctx.r4.u32, ctx.f0.u32);
	// b 0x824944cc
	goto loc_824944CC;
loc_824944B4:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x824944c8
	goto loc_824944C8;
loc_824944BC:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_824944C8:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_824944CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82495798) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_824957B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8249584c
	if (ctx.cr6.eq) goto loc_8249584C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824957e4
	if (!ctx.cr6.eq) goto loc_824957E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82495798
	ctx.lr = 0x824957D4;
	sub_82495798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82495844
	if (ctx.cr0.eq) goto loc_82495844;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x824957b4
	goto loc_824957B4;
loc_824957E4:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82495814
	if (ctx.cr6.eq) goto loc_82495814;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8249580c
	if (ctx.cr6.eq) goto loc_8249580C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82495838
	if (ctx.cr6.eq) goto loc_82495838;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8249581c
	if (!ctx.cr6.eq) goto loc_8249581C;
	// lwz r31,48(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x824957b4
	goto loc_824957B4;
loc_8249580C:
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
	// b 0x824957b4
	goto loc_824957B4;
loc_82495814:
	// lwz r31,24(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 24);
	// b 0x824957b4
	goto loc_824957B4;
loc_8249581C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-23188
	ctx.r6.s64 = ctx.r11.s64 + -23188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82494e30
	ctx.lr = 0x82495834;
	sub_82494E30(ctx, base);
	// b 0x82495844
	goto loc_82495844;
loc_82495838:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8249584c
	if (ctx.cr6.lt) goto loc_8249584C;
loc_82495844:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82495850
	goto loc_82495850;
loc_8249584C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82495850:
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

DEFINE_REX_FUNC(sub_8249B4F0) {
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
	ctx.lr = 0x8249B4F8;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8249b52c
	if (ctx.cr6.eq) goto loc_8249B52C;
	// stw r19,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r19.u32);
loc_8249B52C:
	// lwz r24,628(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8249b53c
	if (ctx.cr6.eq) goto loc_8249B53C;
	// stw r19,0(r24)
	REX_STORE_U32(r24.u32 + 0, r19.u32);
loc_8249B53C:
	// lwz r8,8(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8249B544:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8249b544
	if (!ctx.cr6.eq) goto loc_8249B544;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm. r10,r23,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq 0x8249b6c0
	if (ctx.cr0.eq) goto loc_8249B6C0;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x8249b6ac
	if (ctx.cr6.lt) goto loc_8249B6AC;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-24588
	ctx.r10.s64 = ctx.r10.s64 + -24588;
	// addi r7,r8,3
	ctx.r7.s64 = ctx.r8.s64 + 3;
loc_8249B580:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8249b5a0
	if (!ctx.cr0.eq) goto loc_8249B5A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8249b580
	if (!ctx.cr6.eq) goto loc_8249B580;
loc_8249B5A0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8249b6ac
	if (!ctx.cr0.eq) goto loc_8249B6AC;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// addi r31,r8,3
	r31.s64 = ctx.r8.s64 + 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8249b62c
	if (!ctx.cr6.eq) goto loc_8249B62C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8249b6ac
	if (ctx.cr6.lt) goto loc_8249B6AC;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bge cr6,0x8249b6ac
	if (!ctx.cr6.lt) goto loc_8249B6AC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249B5E0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b610
	if (ctx.cr0.eq) goto loc_8249B610;
	// li r5,9
	ctx.r5.s64 = 9;
loc_8249B5EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r8,r11,-48
	ctx.r8.s64 = ctx.r11.s64 + -48;
loc_8249B5F8:
	// li r4,1
	ctx.r4.s64 = 1;
loc_8249B5FC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8249B600:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824461c0
	ctx.lr = 0x8249B60C;
	sub_824461C0(ctx, base);
	// b 0x8249b614
	goto loc_8249B614;
loc_8249B610:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_8249B614:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r3.u32);
	// bne cr6,0x8249baf0
	if (!ctx.cr6.eq) goto loc_8249BAF0;
loc_8249B620:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8249bf70
	goto loc_8249BF70;
loc_8249B62C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8249b6ac
	if (!ctx.cr6.eq) goto loc_8249B6AC;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8249b6ac
	if (ctx.cr6.lt) goto loc_8249B6AC;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bge cr6,0x8249b6ac
	if (!ctx.cr6.lt) goto loc_8249B6AC;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x8249b6ac
	if (!ctx.cr6.eq) goto loc_8249B6AC;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8249b6ac
	if (ctx.cr6.lt) goto loc_8249B6AC;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bge cr6,0x8249b6ac
	if (!ctx.cr6.lt) goto loc_8249B6AC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249B680;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b610
	if (ctx.cr0.eq) goto loc_8249B610;
	// li r5,9
	ctx.r5.s64 = 9;
loc_8249B68C:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r7,r10,-48
	ctx.r7.s64 = ctx.r10.s64 + -48;
	// addi r8,r11,-48
	ctx.r8.s64 = ctx.r11.s64 + -48;
loc_8249B6A4:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8249b600
	goto loc_8249B600;
loc_8249B6AC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r6,r11,-10848
	ctx.r6.s64 = ctx.r11.s64 + -10848;
	// li r5,3085
	ctx.r5.s64 = 3085;
	// b 0x8249bf60
	goto loc_8249BF60;
loc_8249B6C0:
	// rlwinm. r11,r23,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8249b7f4
	if (ctx.cr0.eq) goto loc_8249B7F4;
	// cmplwi cr6,r6,5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 5, ctx.xer);
	// blt cr6,0x8249b7c4
	if (ctx.cr6.lt) goto loc_8249B7C4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-7144
	ctx.r10.s64 = ctx.r10.s64 + -7144;
	// addi r7,r8,5
	ctx.r7.s64 = ctx.r8.s64 + 5;
loc_8249B6E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8249b700
	if (!ctx.cr0.eq) goto loc_8249B700;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8249b6e0
	if (!ctx.cr6.eq) goto loc_8249B6E0;
loc_8249B700:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8249b7c4
	if (!ctx.cr0.eq) goto loc_8249B7C4;
	// addi r11,r6,-5
	ctx.r11.s64 = ctx.r6.s64 + -5;
	// addi r31,r8,5
	r31.s64 = ctx.r8.s64 + 5;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8249b758
	if (!ctx.cr6.eq) goto loc_8249B758;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8249b7c4
	if (ctx.cr6.lt) goto loc_8249B7C4;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bge cr6,0x8249b7c4
	if (!ctx.cr6.lt) goto loc_8249B7C4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249B740;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b610
	if (ctx.cr0.eq) goto loc_8249B610;
	// not r10,r23
	ctx.r10.u64 = ~r23.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwimi r5,r10,27,29,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFB);
	// b 0x8249b5ec
	goto loc_8249B5EC;
loc_8249B758:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8249b7c4
	if (!ctx.cr6.eq) goto loc_8249B7C4;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8249b7c4
	if (ctx.cr6.lt) goto loc_8249B7C4;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bge cr6,0x8249b7c4
	if (!ctx.cr6.lt) goto loc_8249B7C4;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x8249b7c4
	if (!ctx.cr6.eq) goto loc_8249B7C4;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8249b7c4
	if (ctx.cr6.lt) goto loc_8249B7C4;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bge cr6,0x8249b7c4
	if (!ctx.cr6.lt) goto loc_8249B7C4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249B7AC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b610
	if (ctx.cr0.eq) goto loc_8249B610;
	// not r9,r23
	ctx.r9.u64 = ~r23.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// rlwimi r5,r9,27,29,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFB);
	// b 0x8249b68c
	goto loc_8249B68C;
loc_8249B7C4:
	// rlwinm r11,r23,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// addi r6,r10,-10884
	ctx.r6.s64 = ctx.r10.s64 + -10884;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,3085
	ctx.r5.s64 = 3085;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r7,r11,117
	ctx.r7.s64 = ctx.r11.s64 + 117;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249B7F0;
	sub_82494D48(ctx, base);
	// b 0x8249bf6c
	goto loc_8249BF6C;
loc_8249B7F4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r19,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r19.u32);
	// mr r25,r19
	r25.u64 = r19.u64;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8249b838
	if (ctx.cr0.eq) goto loc_8249B838;
loc_8249B814:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,58
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 58, ctx.xer);
	// beq cr6,0x8249b834
	if (ctx.cr6.eq) goto loc_8249B834;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8249b814
	if (!ctx.cr6.eq) goto loc_8249B814;
	// b 0x8249b838
	goto loc_8249B838;
loc_8249B834:
	// li r25,1
	r25.s64 = 1;
loc_8249B838:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8249baf8
	if (ctx.cr6.eq) goto loc_8249BAF8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-26856
	r30.s64 = ctx.r11.s64 + -26856;
loc_8249B848:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249b938
	if (ctx.cr6.eq) goto loc_8249B938;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x8249b8d4
	if (!ctx.cr6.eq) goto loc_8249B8D4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82493608
	ctx.lr = 0x8249B86C;
	sub_82493608(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8249b92c
	if (ctx.cr0.eq) goto loc_8249B92C;
loc_8249B874:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249b92c
	if (ctx.cr6.eq) goto loc_8249B92C;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8249b0c8
	ctx.lr = 0x8249B8BC;
	sub_8249B0C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249ba04
	if (ctx.cr0.lt) goto loc_8249BA04;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8249b874
	if (!ctx.cr6.eq) goto loc_8249B874;
	// b 0x8249b92c
	goto loc_8249B92C;
loc_8249B8D4:
	// lwz r4,24(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8249b92c
	if (ctx.cr6.eq) goto loc_8249B92C;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249b92c
	if (!ctx.cr6.eq) goto loc_8249B92C;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8249b2e0
	ctx.lr = 0x8249B924;
	sub_8249B2E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249ba04
	if (ctx.cr0.lt) goto loc_8249BA04;
loc_8249B92C:
	// lwz r29,32(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8249b848
	if (!ctx.cr6.eq) goto loc_8249B848;
loc_8249B938:
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8249baf8
	if (ctx.cr6.eq) goto loc_8249BAF8;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// beq 0x8249b9e8
	if (ctx.cr0.eq) goto loc_8249B9E8;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,1
	r29.s64 = 1;
	// lwz r31,24(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8249b9e8
	if (!ctx.cr6.gt) goto loc_8249B9E8;
	// addi r30,r1,180
	r30.s64 = ctx.r1.s64 + 180;
loc_8249B968:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,40(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// bl 0x824937e8
	ctx.lr = 0x8249B980;
	sub_824937E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249b9bc
	if (ctx.cr0.eq) goto loc_8249B9BC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,44(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82494060
	ctx.lr = 0x8249B9A0;
	sub_82494060(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8249b9bc
	if (ctx.cr6.eq) goto loc_8249B9BC;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8249b968
	if (ctx.cr6.lt) goto loc_8249B968;
loc_8249B9BC:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8249b9e4
	if (!ctx.cr6.lt) goto loc_8249B9E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// li r5,3067
	ctx.r5.s64 = 3067;
	// addi r6,r11,-10916
	ctx.r6.s64 = ctx.r11.s64 + -10916;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249B9E4;
	sub_82494D48(ctx, base);
loc_8249B9E4:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
loc_8249B9E8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249ba30
	if (ctx.cr6.eq) goto loc_8249BA30;
	// rlwinm. r10,r23,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8249ba14
	if (ctx.cr0.eq) goto loc_8249BA14;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
	// b 0x8249ba30
	goto loc_8249BA30;
loc_8249BA04:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249bf70
	if (ctx.cr6.eq) goto loc_8249BF70;
	// stw r19,0(r20)
	REX_STORE_U32(r20.u32 + 0, r19.u32);
	// b 0x8249bf70
	goto loc_8249BF70;
loc_8249BA14:
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249ba30
	if (ctx.cr6.eq) goto loc_8249BA30;
	// bl 0x82444890
	ctx.lr = 0x8249BA24;
	sub_82444890(ctx, base);
	// stw r3,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b620
	if (ctx.cr0.eq) goto loc_8249B620;
loc_8249BA30:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r31,r1,168
	r31.s64 = ctx.r1.s64 + 168;
	// stw r19,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249bae8
	if (ctx.cr6.eq) goto loc_8249BAE8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r1,176
	r30.s64 = ctx.r1.s64 + 176;
	// addi r28,r11,-11708
	r28.s64 = ctx.r11.s64 + -11708;
loc_8249BA5C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x8249BA64;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249ba80
	if (ctx.cr0.eq) goto loc_8249BA80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x8249BA7C;
	sub_82444918(ctx, base);
	// b 0x8249ba84
	goto loc_8249BA84;
loc_8249BA80:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_8249BA84:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8249b620
	if (ctx.cr6.eq) goto loc_8249B620;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x8249BA98;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249bab8
	if (ctx.cr0.eq) goto loc_8249BAB8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x82447910
	ctx.lr = 0x8249BAB4;
	sub_82447910(ctx, base);
	// b 0x8249babc
	goto loc_8249BABC;
loc_8249BAB8:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_8249BABC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq cr6,0x8249b620
	if (ctx.cr6.eq) goto loc_8249B620;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r11,12
	r31.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8249ba5c
	if (ctx.cr6.lt) goto loc_8249BA5C;
loc_8249BAE8:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
loc_8249BAF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249bf70
	goto loc_8249BF70;
loc_8249BAF8:
	// rlwinm. r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8249bf48
	if (!ctx.cr0.eq) goto loc_8249BF48;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8249bf48
	if (!ctx.cr6.eq) goto loc_8249BF48;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8249bf48
	if (!ctx.cr6.eq) goto loc_8249BF48;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,8(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r4,r11,-10924
	ctx.r4.s64 = ctx.r11.s64 + -10924;
	// bl 0x826a4a90
	ctx.lr = 0x8249BB20;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249bb30
	if (!ctx.cr0.eq) goto loc_8249BB30;
	// li r31,9
	r31.s64 = 9;
	// b 0x8249bb50
	goto loc_8249BB50;
loc_8249BB30:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,8(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r31,r11,-7144
	r31.s64 = ctx.r11.s64 + -7144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a4a90
	ctx.lr = 0x8249BB44;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249bb78
	if (!ctx.cr0.eq) goto loc_8249BB78;
	// li r31,12
	r31.s64 = 12;
loc_8249BB50:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249BB60;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b610
	if (ctx.cr0.eq) goto loc_8249B610;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8249b5fc
	goto loc_8249B5FC;
loc_8249BB78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,8(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r4,r11,-7084
	ctx.r4.s64 = ctx.r11.s64 + -7084;
	// bl 0x826a4a90
	ctx.lr = 0x8249BB88;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249bbb4
	if (!ctx.cr0.eq) goto loc_8249BBB4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249BBA0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b610
	if (ctx.cr0.eq) goto loc_8249B610;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x8249b5f8
	goto loc_8249B5F8;
loc_8249BBB4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,8(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r4,r11,-10932
	ctx.r4.s64 = ctx.r11.s64 + -10932;
	// bl 0x826a4a90
	ctx.lr = 0x8249BBC4;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249bbf4
	if (!ctx.cr0.eq) goto loc_8249BBF4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249BBDC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b610
	if (ctx.cr0.eq) goto loc_8249B610;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x8249b6a4
	goto loc_8249B6A4;
loc_8249BBF4:
	// lwz r11,84(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8249bca8
	if (ctx.cr6.eq) goto loc_8249BCA8;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8249bca8
	if (!ctx.cr0.eq) goto loc_8249BCA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,8(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r4,r11,-7268
	ctx.r4.s64 = ctx.r11.s64 + -7268;
	// bl 0x826a4a90
	ctx.lr = 0x8249BC1C;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249bc2c
	if (!ctx.cr0.eq) goto loc_8249BC2C;
	// li r31,42
	r31.s64 = 42;
	// b 0x8249bc80
	goto loc_8249BC80;
loc_8249BC2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,8(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r4,r11,-7284
	ctx.r4.s64 = ctx.r11.s64 + -7284;
	// bl 0x826a4a90
	ctx.lr = 0x8249BC3C;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249bc4c
	if (!ctx.cr0.eq) goto loc_8249BC4C;
	// li r31,43
	r31.s64 = 43;
	// b 0x8249bc80
	goto loc_8249BC80;
loc_8249BC4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,8(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r4,r11,-7160
	ctx.r4.s64 = ctx.r11.s64 + -7160;
	// bl 0x826a4a90
	ctx.lr = 0x8249BC5C;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8249bc7c
	if (ctx.cr0.eq) goto loc_8249BC7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,8(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r4,r11,-7152
	ctx.r4.s64 = ctx.r11.s64 + -7152;
	// bl 0x826a4a90
	ctx.lr = 0x8249BC74;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8249bca8
	if (!ctx.cr0.eq) goto loc_8249BCA8;
loc_8249BC7C:
	// li r31,24
	r31.s64 = 24;
loc_8249BC80:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249BC90;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b610
	if (ctx.cr0.eq) goto loc_8249B610;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8249b5fc
	goto loc_8249B5FC;
loc_8249BCA8:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8249BCB0:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8249bcb0
	if (!ctx.cr6.eq) goto loc_8249BCB0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x8249bd1c
	if (ctx.cr6.lt) goto loc_8249BD1C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-7044
	ctx.r9.s64 = ctx.r9.s64 + -7044;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8249BCE4:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249bd04
	if (!ctx.cr0.eq) goto loc_8249BD04;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8249bce4
	if (!ctx.cr6.eq) goto loc_8249BCE4;
loc_8249BD04:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249bd1c
	if (!ctx.cr0.eq) goto loc_8249BD1C;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_8249BD10:
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// b 0x8249be8c
	goto loc_8249BE8C;
loc_8249BD1C:
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x8249bd6c
	if (ctx.cr6.lt) goto loc_8249BD6C;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-24588
	ctx.r9.s64 = ctx.r9.s64 + -24588;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
loc_8249BD34:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249bd54
	if (!ctx.cr0.eq) goto loc_8249BD54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8249bd34
	if (!ctx.cr6.eq) goto loc_8249BD34;
loc_8249BD54:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249bd6c
	if (!ctx.cr0.eq) goto loc_8249BD6C;
	// addi r31,r11,3
	r31.s64 = ctx.r11.s64 + 3;
	// li r30,5
	r30.s64 = 5;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// b 0x8249be8c
	goto loc_8249BE8C;
loc_8249BD6C:
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x8249bdf4
	if (ctx.cr6.lt) goto loc_8249BDF4;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-11800
	ctx.r9.s64 = ctx.r9.s64 + -11800;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8249BD84:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249bda4
	if (!ctx.cr0.eq) goto loc_8249BDA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8249bd84
	if (!ctx.cr6.eq) goto loc_8249BD84;
loc_8249BDA4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249bdb4
	if (!ctx.cr0.eq) goto loc_8249BDB4;
	// li r30,9
	r30.s64 = 9;
	// b 0x8249bd10
	goto loc_8249BD10;
loc_8249BDB4:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-11808
	ctx.r9.s64 = ctx.r9.s64 + -11808;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8249BDC4:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249bde4
	if (!ctx.cr0.eq) goto loc_8249BDE4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8249bdc4
	if (!ctx.cr6.eq) goto loc_8249BDC4;
loc_8249BDE4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249bdf4
	if (!ctx.cr0.eq) goto loc_8249BDF4;
	// li r30,11
	r30.s64 = 11;
	// b 0x8249bd10
	goto loc_8249BD10;
loc_8249BDF4:
	// cmplwi cr6,r6,5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 5, ctx.xer);
	// blt cr6,0x8249be40
	if (ctx.cr6.lt) goto loc_8249BE40;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
loc_8249BE08:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249be28
	if (!ctx.cr0.eq) goto loc_8249BE28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8249be08
	if (!ctx.cr6.eq) goto loc_8249BE08;
loc_8249BE28:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249be40
	if (!ctx.cr0.eq) goto loc_8249BE40;
	// addi r31,r11,5
	r31.s64 = ctx.r11.s64 + 5;
	// li r30,12
	r30.s64 = 12;
	// addi r11,r6,-5
	ctx.r11.s64 = ctx.r6.s64 + -5;
	// b 0x8249be8c
	goto loc_8249BE8C;
loc_8249BE40:
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// blt cr6,0x8249bf48
	if (ctx.cr6.lt) goto loc_8249BF48;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-11816
	ctx.r9.s64 = ctx.r9.s64 + -11816;
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
loc_8249BE58:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249be78
	if (!ctx.cr0.eq) goto loc_8249BE78;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8249be58
	if (!ctx.cr6.eq) goto loc_8249BE58;
loc_8249BE78:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8249bf48
	if (!ctx.cr0.eq) goto loc_8249BF48;
	// addi r31,r11,6
	r31.s64 = ctx.r11.s64 + 6;
	// li r30,13
	r30.s64 = 13;
	// addi r11,r6,-6
	ctx.r11.s64 = ctx.r6.s64 + -6;
loc_8249BE8C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8249becc
	if (!ctx.cr6.eq) goto loc_8249BECC;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8249bf48
	if (ctx.cr6.lt) goto loc_8249BF48;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bge cr6,0x8249bf48
	if (!ctx.cr6.lt) goto loc_8249BF48;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249BEBC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b610
	if (ctx.cr0.eq) goto loc_8249B610;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x8249b5ec
	goto loc_8249B5EC;
loc_8249BECC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8249bf48
	if (!ctx.cr6.eq) goto loc_8249BF48;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8249bf48
	if (ctx.cr6.lt) goto loc_8249BF48;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bge cr6,0x8249bf48
	if (!ctx.cr6.lt) goto loc_8249BF48;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x8249bf48
	if (!ctx.cr6.eq) goto loc_8249BF48;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x8249bf48
	if (ctx.cr6.lt) goto loc_8249BF48;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bge cr6,0x8249bf48
	if (!ctx.cr6.lt) goto loc_8249BF48;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8249baf0
	if (ctx.cr6.eq) goto loc_8249BAF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x8249BF20;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249b610
	if (ctx.cr0.eq) goto loc_8249B610;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r8,r10,-48
	ctx.r8.s64 = ctx.r10.s64 + -48;
	// addi r7,r11,-48
	ctx.r7.s64 = ctx.r11.s64 + -48;
	// b 0x8249b6a4
	goto loc_8249B6A4;
loc_8249BF48:
	// clrlwi. r11,r23,31
	ctx.r11.u64 = r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8249bf6c
	if (ctx.cr0.eq) goto loc_8249BF6C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// li r5,3004
	ctx.r5.s64 = 3004;
	// addi r6,r11,-10960
	ctx.r6.s64 = ctx.r11.s64 + -10960;
loc_8249BF60:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82494d48
	ctx.lr = 0x8249BF6C;
	sub_82494D48(ctx, base);
loc_8249BF6C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8249BF70:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_824DBB48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r3,144
	ctx.r5.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824dbc6c
	if (ctx.cr6.lt) goto loc_824DBC6C;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lhz r11,158(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 158);
	// mulli r9,r9,476
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(476));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824dbbb8
	if (ctx.cr0.eq) goto loc_824DBBB8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824dbba4
	if (ctx.cr6.lt) goto loc_824DBBA4;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// mulli r11,r11,476
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(476));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x824dbbbc
	goto loc_824DBBBC;
loc_824DBBA4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,16389
	ctx.r3.u64 = ctx.r11.u64 | 16389;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// b 0x824dbc6c
	goto loc_824DBC6C;
loc_824DBBB8:
	// addi r11,r10,-476
	ctx.r11.s64 = ctx.r10.s64 + -476;
loc_824DBBBC:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x824dbc48
	if (ctx.cr6.lt) goto loc_824DBC48;
	// beq cr6,0x824dbc14
	if (ctx.cr6.eq) goto loc_824DBC14;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x824dbbe8
	if (ctx.cr6.lt) goto loc_824DBBE8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,22440
	ctx.r3.s64 = ctx.r11.s64 + 22440;
	// bl 0x826a2f48
	ctx.lr = 0x824DBBDC;
	sub_826A2F48(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824dbc6c
	goto loc_824DBC6C;
loc_824DBBE8:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// bl 0x824daa58
	ctx.lr = 0x824DBC10;
	sub_824DAA58(ctx, base);
	// b 0x824dbc68
	goto loc_824DBC68;
loc_824DBC14:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stb r6,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,420
	ctx.r3.s64 = ctx.r11.s64 + 420;
	// lfs f11,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x824daae0
	ctx.lr = 0x824DBC44;
	sub_824DAAE0(ctx, base);
	// b 0x824dbc68
	goto loc_824DBC68;
loc_824DBC48:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// addi r3,r11,396
	ctx.r3.s64 = ctx.r11.s64 + 396;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x824da9e0
	ctx.lr = 0x824DBC68;
	sub_824DA9E0(ctx, base);
loc_824DBC68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824DBC6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E26A8) {
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
	ctx.lr = 0x824E26B0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x824e26d4
	if (!ctx.cr6.lt) goto loc_824E26D4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x824e2d74
	goto loc_824E2D74;
loc_824E26D4:
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e2d70
	if (ctx.cr6.eq) goto loc_824E2D70;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// add r25,r11,r19
	r25.u64 = ctx.r11.u64 + r19.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,26300
	ctx.r9.s64 = ctx.r9.s64 + 26300;
	// clrlwi. r20,r10,24
	r20.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r17,20(r25)
	r17.u64 = REX_LOAD_U32(r25.u32 + 20);
	// lwz r26,8(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 8);
	// add r16,r11,r25
	r16.u64 = ctx.r11.u64 + r25.u64;
	// lwz r24,12(r25)
	r24.u64 = REX_LOAD_U32(r25.u32 + 12);
	// rlwinm r10,r17,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 15) & 0x1;
	// bne 0x824e2724
	if (!ctx.cr0.eq) goto loc_824E2724;
	// rlwinm r10,r17,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 14) & 0x1;
loc_824E2724:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-6700
	r30.s64 = ctx.r11.s64 + -6700;
	// clrlwi r28,r10,24
	r28.u64 = ctx.r10.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r29,r27,25,31,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0x1;
	// bl 0x824e21f8
	ctx.lr = 0x824E2740;
	sub_824E21F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,26276
	ctx.r4.s64 = ctx.r11.s64 + 26276;
	// bl 0x824df9f0
	ctx.lr = 0x824E2750;
	sub_824DF9F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r14,r11,19072
	r14.s64 = ctx.r11.s64 + 19072;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r14.u32);
	// bl 0x824e0480
	ctx.lr = 0x824E2768;
	sub_824E0480(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r22,r11,-19772
	r22.s64 = ctx.r11.s64 + -19772;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// bl 0x824df9f0
	ctx.lr = 0x824E2780;
	sub_824DF9F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e21f8
	ctx.lr = 0x824E278C;
	sub_824E21F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,26256
	ctx.r4.s64 = ctx.r11.s64 + 26256;
	// bl 0x824df9f0
	ctx.lr = 0x824E279C;
	sub_824DF9F0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E27A8;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E27B4;
	sub_824DF9F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r15,1
	r15.s64 = 1;
	// addi r23,r11,19324
	r23.s64 = ctx.r11.s64 + 19324;
	// stb r15,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r15.u8);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r21,r10,19332
	r21.s64 = ctx.r10.s64 + 19332;
	// bne 0x824e27dc
	if (!ctx.cr0.eq) goto loc_824E27DC;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e2824
	if (ctx.cr0.eq) goto loc_824E2824;
loc_824E27DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e21f8
	ctx.lr = 0x824E27E8;
	sub_824E21F8(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// bne 0x824e27f8
	if (!ctx.cr0.eq) goto loc_824E27F8;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
loc_824E27F8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,26228
	ctx.r4.s64 = ctx.r11.s64 + 26228;
	// bl 0x824df9f0
	ctx.lr = 0x824E2808;
	sub_824DF9F0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2814;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2820;
	sub_824DF9F0(ctx, base);
	// stb r15,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r15.u8);
loc_824E2824:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e2260
	ctx.lr = 0x824E2844;
	sub_824E2260(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824e2868
	if (ctx.cr0.eq) goto loc_824E2868;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E285C;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2868;
	sub_824DF9F0(ctx, base);
loc_824E2868:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r18,r11,19212
	r18.s64 = ctx.r11.s64 + 19212;
	// rlwinm. r9,r27,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r18,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r18.u32);
	// addi r27,r10,19228
	r27.s64 = ctx.r10.s64 + 19228;
	// beq 0x824e2a00
	if (ctx.cr0.eq) goto loc_824E2A00;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2890;
	sub_824E0480(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824e28a4
	if (!ctx.cr6.eq) goto loc_824E28A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e28d4
	if (ctx.cr6.eq) goto loc_824E28D4;
loc_824E28A4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r6,r11,16,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// addi r4,r10,26168
	ctx.r4.s64 = ctx.r10.s64 + 26168;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E28BC;
	sub_824DF9F0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E28C8;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E28D4;
	sub_824DF9F0(ctx, base);
loc_824E28D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824e28e4
	if (!ctx.cr6.eq) goto loc_824E28E4;
	// clrlwi. r30,r17,27
	r30.u64 = r17.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824e291c
	if (ctx.cr0.eq) goto loc_824E291C;
loc_824E28E4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi r30,r17,27
	r30.u64 = r17.u32 & 0x1F;
	// rlwinm r7,r17,22,25,31
	ctx.r7.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 22) & 0x7F;
	// addi r4,r11,26112
	ctx.r4.s64 = ctx.r11.s64 + 26112;
	// rlwinm r6,r17,27,27,31
	ctx.r6.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 27) & 0x1F;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2904;
	sub_824DF9F0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2910;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E291C;
	sub_824DF9F0(ctx, base);
loc_824E291C:
	// rlwinm r29,r17,27,27,31
	r29.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 27) & 0x1F;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// ble cr6,0x824e2950
	if (!ctx.cr6.gt) goto loc_824E2950;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,26072
	ctx.r4.s64 = ctx.r11.s64 + 26072;
	// bl 0x824df9f0
	ctx.lr = 0x824E2938;
	sub_824DF9F0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2944;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2950;
	sub_824DF9F0(ctx, base);
loc_824E2950:
	// rlwinm r28,r17,22,25,31
	r28.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 22) & 0x7F;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// bge cr6,0x824e2984
	if (!ctx.cr6.lt) goto loc_824E2984;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,26032
	ctx.r4.s64 = ctx.r11.s64 + 26032;
	// bl 0x824df9f0
	ctx.lr = 0x824E296C;
	sub_824DF9F0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2978;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2984;
	sub_824DF9F0(ctx, base);
loc_824E2984:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824e29b8
	if (!ctx.cr6.gt) goto loc_824E29B8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,25988
	ctx.r4.s64 = ctx.r11.s64 + 25988;
	// bl 0x824df9f0
	ctx.lr = 0x824E29A0;
	sub_824DF9F0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E29AC;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E29B8;
	sub_824DF9F0(ctx, base);
loc_824E29B8:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824e29cc
	if (!ctx.cr0.eq) goto loc_824E29CC;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
loc_824E29CC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,25964
	ctx.r4.s64 = ctx.r11.s64 + 25964;
	// bl 0x824df9f0
	ctx.lr = 0x824E29DC;
	sub_824DF9F0(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E29E8;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E29F4;
	sub_824DF9F0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2A00;
	sub_824E0480(ctx, base);
loc_824E2A00:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2A0C;
	sub_824E0480(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824e2b78
	if (ctx.cr6.eq) goto loc_824E2B78;
	// lhz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 24);
	// rlwinm. r15,r17,27,27,31
	r15.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// lhz r10,26(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 26);
	// mr r29,r16
	r29.u64 = r16.u64;
	// not r17,r11
	r17.u64 = ~ctx.r11.u64;
	// not r16,r10
	r16.u64 = ~ctx.r10.u64;
	// li r23,0
	r23.s64 = 0;
	// beq 0x824e2d44
	if (ctx.cr0.eq) goto loc_824E2D44;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// addi r25,r11,19188
	r25.s64 = ctx.r11.s64 + 19188;
	// addi r21,r10,25960
	r21.s64 = ctx.r10.s64 + 25960;
	// addi r22,r9,25952
	r22.s64 = ctx.r9.s64 + 25952;
	// addi r19,r8,25932
	r19.s64 = ctx.r8.s64 + 25932;
	// addi r18,r7,25920
	r18.s64 = ctx.r7.s64 + 25920;
	// addi r20,r6,28480
	r20.s64 = ctx.r6.s64 + 28480;
	// addi r24,r5,25912
	r24.s64 = ctx.r5.s64 + 25912;
	// addi r28,r4,-22352
	r28.s64 = ctx.r4.s64 + -22352;
loc_824E2A80:
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r14,3(r29)
	r14.u64 = REX_LOAD_U8(r29.u32 + 3);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// slw r11,r11,r23
	ctx.r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r23.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r30,r14,28
	r30.u64 = r14.u32 & 0xF;
	// and r27,r11,r17
	r27.u64 = ctx.r11.u64 & r17.u64;
	// and r26,r11,r16
	r26.u64 = ctx.r11.u64 & r16.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2AA4;
	sub_824E0480(ctx, base);
	// rlwinm r11,r14,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// bl 0x824df9f0
	ctx.lr = 0x824E2AB8;
	sub_824DF9F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824e2ad0
	if (ctx.cr6.eq) goto loc_824E2AD0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2AD0;
	sub_824DF9F0(ctx, base);
loc_824E2AD0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824e2ae0
	if (ctx.cr6.eq) goto loc_824E2AE0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// b 0x824e2aec
	goto loc_824E2AEC;
loc_824E2AE0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824e2af4
	if (ctx.cr6.eq) goto loc_824E2AF4;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_824E2AEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2AF4;
	sub_824DF9F0(ctx, base);
loc_824E2AF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824e0480
	ctx.lr = 0x824E2B00;
	sub_824E0480(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// bl 0x824df9f0
	ctx.lr = 0x824E2B14;
	sub_824DF9F0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x824e2b3c
	if (ctx.cr6.eq) goto loc_824E2B3C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,64
	ctx.r10.s64 = r28.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824df9f0
	ctx.lr = 0x824E2B3C;
	sub_824DF9F0(ctx, base);
loc_824E2B3C:
	// lwz r14,92(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2B4C;
	sub_824E0480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x824df9f0
	ctx.lr = 0x824E2B58;
	sub_824DF9F0(ctx, base);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r23,r15
	ctx.cr6.compare<uint32_t>(r23.u32, r15.u32, ctx.xer);
	// blt cr6,0x824e2a80
	if (ctx.cr6.lt) goto loc_824E2A80;
	// lbz r19,80(r1)
	r19.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r22,84(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r18,88(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x824e2d44
	goto loc_824E2D44;
loc_824E2B78:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32128
	ctx.r6.s64 = -2105540608;
	// mr r30,r16
	r30.u64 = r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r24,r10,19188
	r24.s64 = ctx.r10.s64 + 19188;
	// addi r21,r9,25960
	r21.s64 = ctx.r9.s64 + 25960;
	// addi r20,r8,28480
	r20.s64 = ctx.r8.s64 + 28480;
	// addi r23,r7,25912
	r23.s64 = ctx.r7.s64 + 25912;
	// addi r26,r6,-22352
	r26.s64 = ctx.r6.s64 + -22352;
	// beq cr6,0x824e2c6c
	if (ctx.cr6.eq) goto loc_824E2C6C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r19,r15
	r19.u64 = r15.u64;
	// addi r27,r11,25952
	r27.s64 = ctx.r11.s64 + 25952;
loc_824E2BC0:
	// lbz r15,3(r30)
	r15.u64 = REX_LOAD_U8(r30.u32 + 3);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r29,r15,28
	r29.u64 = r15.u32 & 0xF;
	// bl 0x824e0480
	ctx.lr = 0x824E2BD4;
	sub_824E0480(ctx, base);
	// rlwinm r11,r15,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// bl 0x824df9f0
	ctx.lr = 0x824E2BE8;
	sub_824DF9F0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824e2c00
	if (ctx.cr6.eq) goto loc_824E2C00;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2C00;
	sub_824DF9F0(ctx, base);
loc_824E2C00:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2C0C;
	sub_824E0480(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r11,24,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bl 0x824df9f0
	ctx.lr = 0x824E2C20;
	sub_824DF9F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,23,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x824e2c48
	if (ctx.cr6.eq) goto loc_824E2C48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,64
	ctx.r10.s64 = r26.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824df9f0
	ctx.lr = 0x824E2C48;
	sub_824DF9F0(ctx, base);
loc_824E2C48:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2C54;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2C60;
	sub_824DF9F0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x824e2bc0
	if (!ctx.cr0.eq) goto loc_824E2BC0;
loc_824E2C6C:
	// lwz r10,28(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 28);
	// rlwinm. r11,r17,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,24(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r16
	r30.u64 = ctx.r10.u64 + r16.u64;
	// beq 0x824e2d44
	if (ctx.cr0.eq) goto loc_824E2D44;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r19,1
	r19.s64 = 1;
	// addi r27,r11,25904
	r27.s64 = ctx.r11.s64 + 25904;
loc_824E2C98:
	// lbz r25,3(r30)
	r25.u64 = REX_LOAD_U8(r30.u32 + 3);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r29,r25,28
	r29.u64 = r25.u32 & 0xF;
	// bl 0x824e0480
	ctx.lr = 0x824E2CAC;
	sub_824E0480(ctx, base);
	// rlwinm r11,r25,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// bl 0x824df9f0
	ctx.lr = 0x824E2CC0;
	sub_824DF9F0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824e2cd8
	if (ctx.cr6.eq) goto loc_824E2CD8;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2CD8;
	sub_824DF9F0(ctx, base);
loc_824E2CD8:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2CE4;
	sub_824E0480(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// bl 0x824df9f0
	ctx.lr = 0x824E2CF8;
	sub_824DF9F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x824e2d20
	if (ctx.cr6.eq) goto loc_824E2D20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,64
	ctx.r10.s64 = r26.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824df9f0
	ctx.lr = 0x824E2D20;
	sub_824DF9F0(ctx, base);
loc_824E2D20:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2D2C;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2D38;
	sub_824DF9F0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x824e2c98
	if (!ctx.cr0.eq) goto loc_824E2C98;
loc_824E2D44:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2D50;
	sub_824E0480(ctx, base);
	// clrlwi. r11,r19,24
	ctx.r11.u64 = r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e2d70
	if (ctx.cr0.eq) goto loc_824E2D70;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2D64;
	sub_824E0480(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2D70;
	sub_824DF9F0(ctx, base);
loc_824E2D70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824E2D74:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8251E368) {
	REX_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sld r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x8251e3ac
	if (!ctx.cr6.lt) goto loc_8251E3AC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8251E388:
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8251e3b4
	if (!ctx.cr6.eq) goto loc_8251E3B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8251e388
	if (ctx.cr6.lt) goto loc_8251E388;
loc_8251E3AC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8251E3B4:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzd r10,r10
	ctx.r10.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8251F1B0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r10,r4,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 23) & 0x7FFFFF;
	// rlwinm r11,r4,28,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwzx r7,r10,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// and r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r5,r4,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// and. r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8251f200
	if (ctx.cr0.eq) goto loc_8251F200;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_8251F200:
	// lwzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825236B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825236B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825230e0
	ctx.lr = 0x825236D4;
	sub_825230E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82502168
	ctx.lr = 0x825236E0;
	sub_82502168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82502168
	ctx.lr = 0x825236EC;
	sub_82502168(ctx, base);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82528E18) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,27,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x6;
	// rlwinm r9,r4,29,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x6;
	// rlwinm r8,r11,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r7,r4,31,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x6;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r7,r4,1,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x6;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8252F1C0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x8252F1C8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,12(r5)
	r22.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// clrlwi r24,r11,27
	r24.u64 = ctx.r11.u32 & 0x1F;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8252f208
	if (ctx.cr6.eq) goto loc_8252F208;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8252f20c
	if (!ctx.cr6.eq) goto loc_8252F20C;
loc_8252F208:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252F20C:
	// lwz r27,16(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 16);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r20,12(r25)
	r20.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// clrlwi r18,r11,24
	r18.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x825290b8
	ctx.lr = 0x8252F228;
	sub_825290B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f548
	if (ctx.cr0.eq) goto loc_8252F548;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm. r23,r24,0,27,28
	r23.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// beq 0x8252f250
	if (ctx.cr0.eq) goto loc_8252F250;
	// rlwinm. r11,r10,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f250
	if (ctx.cr0.eq) goto loc_8252F250;
loc_8252F248:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8252f278
	goto loc_8252F278;
loc_8252F250:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f260
	if (ctx.cr0.eq) goto loc_8252F260;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252f248
	if (!ctx.cr0.eq) goto loc_8252F248;
loc_8252F260:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f274
	if (ctx.cr0.eq) goto loc_8252F274;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8252f278
	if (!ctx.cr0.eq) goto loc_8252F278;
loc_8252F274:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252F278:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f548
	if (ctx.cr0.eq) goto loc_8252F548;
	// rlwinm. r9,r24,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// beq 0x8252f298
	if (ctx.cr0.eq) goto loc_8252F298;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252f298
	if (ctx.cr0.eq) goto loc_8252F298;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
loc_8252F298:
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252f2ac
	if (ctx.cr0.eq) goto loc_8252F2AC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8252F2AC:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252f2c0
	if (ctx.cr0.eq) goto loc_8252F2C0;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252f2c0
	if (ctx.cr0.eq) goto loc_8252F2C0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8252F2C0:
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82528eb8
	ctx.lr = 0x8252F2D0;
	sub_82528EB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f548
	if (ctx.cr0.eq) goto loc_8252F548;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// li r19,0
	r19.s64 = 0;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8252f2f8
	if (ctx.cr6.lt) goto loc_8252F2F8;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8252f2fc
	if (!ctx.cr6.gt) goto loc_8252F2FC;
loc_8252F2F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252F2FC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252f550
	if (ctx.cr0.eq) goto loc_8252F550;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r29,-1
	r29.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r11,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// addi r8,r27,44
	ctx.r8.s64 = r27.s64 + 44;
loc_8252F320:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8252f398
	if (!ctx.cr6.lt) goto loc_8252F398;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x8252f33c
	if (!ctx.cr6.eq) goto loc_8252F33C;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// b 0x8252f38c
	goto loc_8252F38C;
loc_8252F33C:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r9,r9,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r9,125
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 125, ctx.xer);
	// beq cr6,0x8252f35c
	if (ctx.cr6.eq) goto loc_8252F35C;
	// cmplwi cr6,r9,124
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 124, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x8252f360
	if (!ctx.cr6.eq) goto loc_8252F360;
loc_8252F35C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8252F360:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252f380
	if (ctx.cr0.eq) goto loc_8252F380;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252f378
	if (ctx.cr6.eq) goto loc_8252F378;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x8252f380
	goto loc_8252F380;
loc_8252F378:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_8252F380:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// or r19,r11,r19
	r19.u64 = ctx.r11.u64 | r19.u64;
loc_8252F38C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x8252f320
	goto loc_8252F320;
loc_8252F398:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// bne cr6,0x8252f3ac
	if (!ctx.cr6.eq) goto loc_8252F3AC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252F3AC;
	sub_824E4368(ctx, base);
loc_8252F3AC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8252f3e8
	if (ctx.cr6.eq) goto loc_8252F3E8;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8252f3e8
	if (ctx.cr6.eq) goto loc_8252F3E8;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(r23.u32, r19.u32, ctx.xer);
	// bne cr6,0x8252f548
	if (!ctx.cr6.eq) goto loc_8252F548;
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f3e8
	if (ctx.cr0.eq) goto loc_8252F3E8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8250a678
	ctx.lr = 0x8252F3D4;
	sub_8250A678(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250a678
	ctx.lr = 0x8252F3E0;
	sub_8250A678(ctx, base);
	// cmplw cr6,r25,r3
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8252f548
	if (!ctx.cr6.eq) goto loc_8252F548;
loc_8252F3E8:
	// clrlwi. r10,r18,24
	ctx.r10.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252f42c
	if (ctx.cr0.eq) goto loc_8252F42C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8252f42c
	if (ctx.cr6.eq) goto loc_8252F42C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8252f408
	if (ctx.cr6.eq) goto loc_8252F408;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x8252f41c
	goto loc_8252F41C;
loc_8252F408:
	// addi r11,r30,11
	ctx.r11.s64 = r30.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
loc_8252F41C:
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252f548
	if (!ctx.cr0.eq) goto loc_8252F548;
loc_8252F42C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252f550
	if (ctx.cr6.eq) goto loc_8252F550;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8252f550
	if (ctx.cr6.eq) goto loc_8252F550;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// xor r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 ^ r26.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f550
	if (ctx.cr0.eq) goto loc_8252F550;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8252dea8
	ctx.lr = 0x8252F46C;
	sub_8252DEA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8252dea8
	ctx.lr = 0x8252F490;
	sub_8252DEA8(ctx, base);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | r30.u64;
	// andi. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 5;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8252f548
	if (ctx.cr6.eq) goto loc_8252F548;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x8252f548
	if (!ctx.cr6.eq) goto loc_8252F548;
	// rlwinm. r9,r26,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// beq 0x8252f4bc
	if (ctx.cr0.eq) goto loc_8252F4BC;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
loc_8252F4BC:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252f4d0
	if (ctx.cr0.eq) goto loc_8252F4D0;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252f4d0
	if (ctx.cr0.eq) goto loc_8252F4D0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8252F4D0:
	// lwz r9,8(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 8);
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r9,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8252f550
	if (!ctx.cr6.eq) goto loc_8252F550;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rlwinm r6,r11,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r5,r11,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8252dea8
	ctx.lr = 0x8252F504;
	sub_8252DEA8(ctx, base);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm. r10,r10,9,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1C;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8252f540
	if (ctx.cr0.eq) goto loc_8252F540;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8252F520:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8252f540
	if (!ctx.cr0.eq) goto loc_8252F540;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8252f520
	if (!ctx.cr6.eq) goto loc_8252F520;
loc_8252F540:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8252f550
	if (ctx.cr0.eq) goto loc_8252F550;
loc_8252F548:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8252f55c
	goto loc_8252F55C;
loc_8252F550:
	// stw r19,0(r15)
	REX_STORE_U32(r15.u32 + 0, r19.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,0(r16)
	REX_STORE_U32(r16.u32 + 0, r26.u32);
loc_8252F55C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82555138) {
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
	ctx.lr = 0x82555140;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,13
	ctx.r6.s64 = 13;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82555174;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x82555198
	if (ctx.cr6.eq) goto loc_82555198;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82555194;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82555198:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825551A0;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x825551c4
	if (ctx.cr6.eq) goto loc_825551C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825551C0;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825551C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825551CC;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825551DC;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825551E8;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x824ffc30
	ctx.lr = 0x82555218;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82561160) {
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
	ctx.lr = 0x82561168;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r17,0
	r17.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r17.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r31,r17
	r31.u64 = r17.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r29,r17
	r29.u64 = r17.u64;
	// b 0x825611bc
	goto loc_825611BC;
loc_825611B8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_825611BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825611d8
	if (ctx.cr6.eq) goto loc_825611D8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne cr6,0x825611dc
	if (!ctx.cr6.eq) goto loc_825611DC;
loc_825611D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825611DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82561228
	if (!ctx.cr0.eq) goto loc_82561228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825537d0
	ctx.lr = 0x825611EC;
	sub_825537D0(ctx, base);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U64(r20.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82559c70
	ctx.lr = 0x82561204;
	sub_82559C70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825611b8
	if (ctx.cr0.eq) goto loc_825611B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82559bb8
	ctx.lr = 0x82561214;
	sub_82559BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561220
	if (ctx.cr0.eq) goto loc_82561220;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82561220:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x825611b8
	goto loc_825611B8;
loc_82561228:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82561234
	if (ctx.cr6.eq) goto loc_82561234;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82561234:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// bgt cr6,0x82561248
	if (ctx.cr6.gt) goto loc_82561248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82561240:
	// stw r17,0(r18)
	REX_STORE_U32(r18.u32 + 0, r17.u32);
	// b 0x8256156c
	goto loc_8256156C;
loc_82561248:
	// li r5,57
	ctx.r5.s64 = 57;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824f7678
	ctx.lr = 0x82561258;
	sub_824F7678(ctx, base);
	// addi r21,r3,4
	r21.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r17.u32);
	// ori r10,r21,1
	ctx.r10.u64 = r21.u64 | 1;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f30,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f30.f64 = double(temp.f32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f31,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_825612A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825612bc
	if (ctx.cr6.eq) goto loc_825612BC;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne cr6,0x825612c0
	if (!ctx.cr6.eq) goto loc_825612C0;
loc_825612BC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825612C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82561514
	if (!ctx.cr0.eq) goto loc_82561514;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825537d0
	ctx.lr = 0x825612D0;
	sub_825537D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r24,0(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824f7678
	ctx.lr = 0x825612E8;
	sub_824F7678(ctx, base);
	// addi r27,r3,4
	r27.s64 = ctx.r3.s64 + 4;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r17.u32);
	// ori r10,r27,1
	ctx.r10.u64 = r27.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r26,r17
	r26.u64 = r17.u64;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82561324:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82561340
	if (ctx.cr6.eq) goto loc_82561340;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne cr6,0x82561344
	if (!ctx.cr6.eq) goto loc_82561344;
loc_82561340:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82561344:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825614b8
	if (!ctx.cr0.eq) goto loc_825614B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553778
	ctx.lr = 0x82561354;
	sub_82553778(ctx, base);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne 0x82561444
	if (!ctx.cr0.eq) goto loc_82561444;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82561398
	if (!ctx.cr6.eq) goto loc_82561398;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82561398
	if (!ctx.cr6.eq) goto loc_82561398;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 8);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8256139c
	if (ctx.cr0.eq) goto loc_8256139C;
loc_82561398:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_8256139C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561444
	if (ctx.cr0.eq) goto loc_82561444;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82559bb8
	ctx.lr = 0x825613AC;
	sub_82559BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561438
	if (ctx.cr0.eq) goto loc_82561438;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825613e4
	if (!ctx.cr0.eq) goto loc_825613E4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825613e4
	if (ctx.cr0.eq) goto loc_825613E4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825613f4
	if (!ctx.cr6.gt) goto loc_825613F4;
loc_825613E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82584838
	ctx.lr = 0x825613F0;
	sub_82584838(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825613F4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// bl 0x825c1a18
	ctx.lr = 0x82561428;
	sub_825C1A18(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82561438:
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r26,1
	r26.s64 = 1;
	// b 0x82561324
	goto loc_82561324;
loc_82561444:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bne 0x82561480
	if (!ctx.cr0.eq) goto loc_82561480;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82561480
	if (ctx.cr0.eq) goto loc_82561480;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8256148c
	if (!ctx.cr6.gt) goto loc_8256148C;
loc_82561480:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82584838
	ctx.lr = 0x8256148C;
	sub_82584838(ctx, base);
loc_8256148C:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// stw r29,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r29.u32);
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// b 0x82561324
	goto loc_82561324;
loc_825614B8:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825614e8
	if (!ctx.cr0.eq) goto loc_825614E8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825614e8
	if (ctx.cr0.eq) goto loc_825614E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825614f4
	if (!ctx.cr6.gt) goto loc_825614F4;
loc_825614E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825614F4;
	sub_8251FE00(ctx, base);
loc_825614F4:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stwx r28,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r28.u32);
	// b 0x825612a0
	goto loc_825612A0;
loc_82561514:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825609b8
	ctx.lr = 0x82561524;
	sub_825609B8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8255d5f0
	ctx.lr = 0x82561530;
	sub_8255D5F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8255d5f0
	ctx.lr = 0x82561540;
	sub_8255D5F0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x82561564
	if (ctx.cr6.lt) goto loc_82561564;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r5,652(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 652);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82560648
	ctx.lr = 0x8256155C;
	sub_82560648(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// b 0x82561240
	goto loc_82561240;
loc_82561564:
	// stw r25,0(r18)
	REX_STORE_U32(r18.u32 + 0, r25.u32);
	// subf r3,r3,r31
	ctx.r3.u64 = r31.u64 - ctx.r3.u64;
loc_8256156C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_825859A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825859B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825859D8;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x825859E8;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825859F4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x82585a18
	if (ctx.cr6.eq) goto loc_82585A18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82585A14;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82585A18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82585A20;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8258A018) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne 0x8258a060
	if (!ctx.cr0.eq) goto loc_8258A060;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258a060
	if (ctx.cr0.eq) goto loc_8258A060;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8258a06c
	if (!ctx.cr6.gt) goto loc_8258A06C;
loc_8258A060:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82531a20
	ctx.lr = 0x8258A068;
	sub_82531A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8258A06C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8259D5A0) {
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
	ctx.lr = 0x8259D5A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r28,32(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r6,32(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r27,r10,r6
	r27.u64 = ctx.r10.u64 + ctx.r6.u64;
	// b 0x8259d68c
	goto loc_8259D68C;
loc_8259D5CC:
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8259d670
	if (!ctx.cr6.lt) goto loc_8259D670;
	// subf r10,r6,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r28,-2
	ctx.r7.s64 = r28.s64 + -2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8259D608:
	// lhz r26,6(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r25,6(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// andi. r4,r26,63519
	ctx.r4.u64 = r26.u64 & 63519;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// andi. r29,r9,63519
	r29.u64 = ctx.r9.u64 & 63519;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// andi. r31,r25,63519
	r31.u64 = r25.u64 & 63519;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// andi. r30,r8,63519
	r30.u64 = ctx.r8.u64 & 63519;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r5,r8,0,21,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E0;
	// rlwinm r9,r9,0,21,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E0;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// rlwinm r5,r25,0,21,26
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x7E0;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r5,r26,0,21,26
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x7E0;
	// addi r8,r8,4098
	ctx.r8.s64 = ctx.r8.s64 + 4098;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r8,r8,30,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFFFF;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// rlwinm r8,r8,0,27,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF81F;
	// rlwinm r9,r9,30,21,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7E0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x8259d608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259D608;
loc_8259D670:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_8259D68C:
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// blt cr6,0x8259d5cc
	if (ctx.cr6.lt) goto loc_8259D5CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825A3618) {
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
	ctx.lr = 0x825A3620;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,22852
	r31.s64 = ctx.r11.s64 + 22852;
	// addi r30,r10,-11144
	r30.s64 = ctx.r10.s64 + -11144;
	// bne cr6,0x825a366c
	if (!ctx.cr6.eq) goto loc_825A366C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-11152
	ctx.r5.s64 = ctx.r11.s64 + -11152;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,394
	ctx.r7.s64 = 394;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A366C;
	sub_824EA978(ctx, base);
loc_825A366C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825a3690
	if (!ctx.cr6.eq) goto loc_825A3690;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-10844
	ctx.r5.s64 = ctx.r11.s64 + -10844;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,395
	ctx.r7.s64 = 395;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3690;
	sub_824EA978(ctx, base);
loc_825A3690:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x825a36b4
	if (!ctx.cr6.eq) goto loc_825A36B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-10856
	ctx.r5.s64 = ctx.r11.s64 + -10856;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,396
	ctx.r7.s64 = 396;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A36B4;
	sub_824EA978(ctx, base);
loc_825A36B4:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825a36dc
	if (!ctx.cr6.eq) goto loc_825A36DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-10888
	ctx.r5.s64 = ctx.r11.s64 + -10888;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,397
	ctx.r7.s64 = 397;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A36DC;
	sub_824EA978(ctx, base);
loc_825A36DC:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// beq cr6,0x825a36ec
	if (ctx.cr6.eq) goto loc_825A36EC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x825a3708
	if (!ctx.cr6.eq) goto loc_825A3708;
loc_825A36EC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-10968
	ctx.r5.s64 = ctx.r11.s64 + -10968;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,400
	ctx.r7.s64 = 400;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3708;
	sub_824EA978(ctx, base);
loc_825A3708:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a375c
	if (!ctx.cr6.eq) goto loc_825A375C;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x825a374c
	if (!ctx.cr6.eq) goto loc_825A374C;
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(r27.u32, 96, ctx.xer);
	// blt cr6,0x825a372c
	if (ctx.cr6.lt) goto loc_825A372C;
loc_825A3724:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a37bc
	goto loc_825A37BC;
loc_825A372C:
	// subfic r11,r27,95
	ctx.xer.ca = r27.u32 <= 95;
	ctx.r11.u64 = static_cast<uint64_t>(95) - r27.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// b 0x825a37b4
	goto loc_825A37B4;
loc_825A374C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x825a37a4
	if (ctx.cr6.eq) goto loc_825A37A4;
	// li r7,419
	ctx.r7.s64 = 419;
	// b 0x825a378c
	goto loc_825A378C;
loc_825A375C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825a3780
	if (ctx.cr6.eq) goto loc_825A3780;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-11004
	ctx.r5.s64 = ctx.r11.s64 + -11004;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,431
	ctx.r7.s64 = 431;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3780;
	sub_824EA978(ctx, base);
loc_825A3780:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x825a37a4
	if (ctx.cr6.eq) goto loc_825A37A4;
	// li r7,432
	ctx.r7.s64 = 432;
loc_825A378C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-11036
	ctx.r5.s64 = ctx.r11.s64 + -11036;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A37A4;
	sub_824EA978(ctx, base);
loc_825A37A4:
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(r27.u32, 32, ctx.xer);
	// bge cr6,0x825a3724
	if (!ctx.cr6.lt) goto loc_825A3724;
	// stw r27,0(r26)
	REX_STORE_U32(r26.u32 + 0, r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A37B4:
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A37BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825AF418) {
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
	ctx.lr = 0x825AF420;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-8552
	r29.s64 = ctx.r10.s64 + -8552;
	// bne cr6,0x825af470
	if (!ctx.cr6.eq) goto loc_825AF470;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26440
	ctx.r5.s64 = ctx.r11.s64 + -26440;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,16163
	ctx.r7.s64 = 16163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF470;
	sub_824EA978(ctx, base);
loc_825AF470:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825af494
	if (!ctx.cr6.eq) goto loc_825AF494;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26452
	ctx.r5.s64 = ctx.r11.s64 + -26452;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,16164
	ctx.r7.s64 = 16164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF494;
	sub_824EA978(ctx, base);
loc_825AF494:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x825af4b8
	if (!ctx.cr6.eq) goto loc_825AF4B8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-6704
	ctx.r5.s64 = ctx.r11.s64 + -6704;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,16165
	ctx.r7.s64 = 16165;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF4B8;
	sub_824EA978(ctx, base);
loc_825AF4B8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x825af4dc
	if (!ctx.cr6.eq) goto loc_825AF4DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-6716
	ctx.r5.s64 = ctx.r11.s64 + -6716;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,16166
	ctx.r7.s64 = 16166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF4DC;
	sub_824EA978(ctx, base);
loc_825AF4DC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x825af500
	if (!ctx.cr6.eq) goto loc_825AF500;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-6728
	ctx.r5.s64 = ctx.r11.s64 + -6728;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,16167
	ctx.r7.s64 = 16167;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF500;
	sub_824EA978(ctx, base);
loc_825AF500:
	// li r4,24
	ctx.r4.s64 = 24;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x825AF510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825af534
	if (!ctx.cr0.eq) goto loc_825AF534;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-6744
	ctx.r5.s64 = ctx.r11.s64 + -6744;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,16174
	ctx.r7.s64 = 16174;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AF534;
	sub_824EA978(ctx, base);
loc_825AF534:
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// stw r25,20(r31)
	REX_STORE_U32(r31.u32 + 20, r25.u32);
	// stw r23,12(r31)
	REX_STORE_U32(r31.u32 + 12, r23.u32);
	// stw r24,16(r31)
	REX_STORE_U32(r31.u32 + 16, r24.u32);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825B3C20) {
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
	ctx.lr = 0x825B3C28;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,1488(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1488);
	// std r6,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bne cr6,0x825b3c64
	if (!ctx.cr6.eq) goto loc_825B3C64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3C60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825b3cac
	goto loc_825B3CAC;
loc_825B3C64:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lha r28,222(r1)
	r28.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 222));
	// lha r27,220(r1)
	r27.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 220));
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3C80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29256
	ctx.r11.s64 = ctx.r11.s64 + -29256;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r4,r9,-4200
	ctx.r4.s64 = ctx.r9.s64 + -4200;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x825B3CAC;
	sub_82130E88(ctx, base);
loc_825B3CAC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825B6A50) {
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
	// bne cr6,0x825b6a8c
	if (!ctx.cr6.eq) goto loc_825B6A8C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-2432
	ctx.r6.s64 = ctx.r11.s64 + -2432;
	// addi r5,r10,-9704
	ctx.r5.s64 = ctx.r10.s64 + -9704;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,539
	ctx.r7.s64 = 539;
	// bl 0x824ea978
	ctx.lr = 0x825B6A8C;
	sub_824EA978(ctx, base);
loc_825B6A8C:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
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

DEFINE_REX_FUNC(sub_825B7558) {
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
	ctx.lr = 0x825B7560;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-2432
	r29.s64 = ctx.r10.s64 + -2432;
	// bne cr6,0x825b75ac
	if (!ctx.cr6.eq) goto loc_825B75AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,890
	ctx.r7.s64 = 890;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B75AC;
	sub_824EA978(ctx, base);
loc_825B75AC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x825b75d0
	if (!ctx.cr6.eq) goto loc_825B75D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-10296
	ctx.r5.s64 = ctx.r11.s64 + -10296;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,891
	ctx.r7.s64 = 891;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B75D0;
	sub_824EA978(ctx, base);
loc_825B75D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f0330
	ctx.lr = 0x825B75DC;
	sub_824F0330(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825b7604
	if (ctx.cr6.eq) goto loc_825B7604;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-25788
	ctx.r5.s64 = ctx.r11.s64 + -25788;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,896
	ctx.r7.s64 = 896;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B7604;
	sub_824EA978(ctx, base);
loc_825B7604:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x824effc8
	ctx.lr = 0x825B760C;
	sub_824EFFC8(ctx, base);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r28,48(r31)
	REX_STORE_U32(r31.u32 + 48, r28.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825b762c
	if (ctx.cr6.eq) goto loc_825B762C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B762C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B762C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f08f8
	ctx.lr = 0x825B7634;
	sub_824F08F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b74a8
	ctx.lr = 0x825B7640;
	sub_825B74A8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b6da8
	ctx.lr = 0x825B7650;
	sub_825B6DA8(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825BAD90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825badc4
	if (ctx.cr0.eq) goto loc_825BADC4;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825badb8
	if (ctx.cr0.eq) goto loc_825BADB8;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// b 0x825badcc
	goto loc_825BADCC;
loc_825BADB8:
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// b 0x825badcc
	goto loc_825BADCC;
loc_825BADC4:
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
loc_825BADCC:
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
	// b 0x825bae64
	goto loc_825BAE64;
loc_825BADE0:
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lis r8,8191
	ctx.r8.s64 = 536805376;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// rlwimi r9,r7,3,0,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFFF00000007);
	// oris r6,r6,16384
	ctx.r6.u64 = ctx.r6.u64 | 1073741824;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// bge cr6,0x825bae0c
	if (!ctx.cr6.lt) goto loc_825BAE0C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_825BAE0C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825bae24
	if (!ctx.cr0.eq) goto loc_825BAE24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825bade0
	if (!ctx.cr6.eq) goto loc_825BADE0;
loc_825BAE24:
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r9,r4,24
	ctx.r9.s64 = ctx.r4.s64 + 24;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825bae54
	if (ctx.cr6.eq) goto loc_825BAE54;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825bae54
	if (!ctx.cr0.eq) goto loc_825BAE54;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x825bae5c
	goto loc_825BAE5C;
loc_825BAE54:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_825BAE5C:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_825BAE64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825bade0
	if (!ctx.cr6.eq) goto loc_825BADE0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825C1D90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825C1D98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825C1DB4;
	sub_8250AC70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c0b40
	ctx.lr = 0x825C1DCC;
	sub_825C0B40(ctx, base);
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x825c1de4
	goto loc_825C1DE4;
loc_825C1DDC:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825C1DE4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x825c1ddc
	if (!ctx.cr6.eq) goto loc_825C1DDC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x824f7a20
	ctx.lr = 0x825C1E08;
	sub_824F7A20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825C5730) {
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
	ctx.lr = 0x825C5738;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r30,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 25) & 0x7F;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// bne cr6,0x825c57a4
	if (!ctx.cr6.eq) goto loc_825C57A4;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0x7;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x824f71b8
	ctx.lr = 0x825C576C;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c578c
	if (ctx.cr0.eq) goto loc_825C578C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825c5794
	goto loc_825C5794;
loc_825C578C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_825C5794:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x825C579C;
	sub_8250B3D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825c57c8
	goto loc_825C57C8;
loc_825C57A4:
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// bne cr6,0x825c57c8
	if (!ctx.cr6.eq) goto loc_825C57C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825C57C0;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = r31.s64 + -20;
	// lwzx r29,r3,r11
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
loc_825C57C8:
	// oris r11,r30,1024
	ctx.r11.u64 = r30.u64 | 67108864;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x825c58ac
	if (ctx.cr6.eq) goto loc_825C58AC;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5808
	if (!ctx.cr0.eq) goto loc_825C5808;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c5808
	if (ctx.cr0.eq) goto loc_825C5808;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c5814
	if (!ctx.cr6.gt) goto loc_825C5814;
loc_825C5808:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C5814;
	sub_8251FE00(ctx, base);
loc_825C5814:
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
loc_825C582C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825c58a4
	if (ctx.cr6.eq) goto loc_825C58A4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c58a4
	if (!ctx.cr0.eq) goto loc_825C58A4;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// beq cr6,0x825c58d0
	if (ctx.cr6.eq) goto loc_825C58D0;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c5880
	if (!ctx.cr0.eq) goto loc_825C5880;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c5880
	if (ctx.cr0.eq) goto loc_825C5880;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c588c
	if (!ctx.cr6.gt) goto loc_825C588C;
loc_825C5880:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C588C;
	sub_8251FE00(ctx, base);
loc_825C588C:
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
	// stwx r29,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r29.u32);
loc_825C58A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_825C58AC:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_825C58B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c582c
	if (ctx.cr6.eq) goto loc_825C582C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c4c28
	ctx.lr = 0x825C58C8;
	sub_825C4C28(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x825c58b0
	goto loc_825C58B0;
loc_825C58D0:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_825C58D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c58a4
	if (ctx.cr6.eq) goto loc_825C58A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825c4c28
	ctx.lr = 0x825C58EC;
	sub_825C4C28(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x825c58d4
	goto loc_825C58D4;
}

DEFINE_REX_FUNC(sub_825CEBF0) {
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
	// bge cr6,0x825cecf0
	if (!ctx.cr6.lt) goto loc_825CECF0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19656(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19656);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,20328(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20328);
	ctx.f12.f64 = double(temp.f32);
loc_825CEC5C:
	// lwz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
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
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
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
	// bdnz 0x825cec5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CEC5C;
loc_825CECF0:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ced0c
	if (ctx.cr6.eq) goto loc_825CED0C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CED0C;
	sub_825C73B8(ctx, base);
loc_825CED0C:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ced28
	if (ctx.cr6.eq) goto loc_825CED28;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CED28;
	sub_825C7788(ctx, base);
loc_825CED28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D3B20) {
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
	ctx.lr = 0x825D3B28;
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
	// bne cr6,0x825d3b68
	if (!ctx.cr6.eq) goto loc_825D3B68;
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
	// li r7,2371
	ctx.r7.s64 = 2371;
	// bl 0x824ea978
	ctx.lr = 0x825D3B68;
	sub_824EA978(ctx, base);
loc_825D3B68:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D3B78;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d3be0
	if (!ctx.cr6.eq) goto loc_825D3BE0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d3b9c
	if (ctx.cr6.eq) goto loc_825D3B9C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D3B9C;
	sub_824F0950(ctx, base);
loc_825D3B9C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d3bd8
	if (ctx.cr6.eq) goto loc_825D3BD8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d3bd8
	if (ctx.cr6.eq) goto loc_825D3BD8;
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
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// bctrl 
	ctx.lr = 0x825D3BD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3BD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d3c3c
	goto loc_825D3C3C;
loc_825D3BE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d3bfc
	if (ctx.cr6.eq) goto loc_825D3BFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D3BFC;
	sub_824F0950(ctx, base);
loc_825D3BFC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d3c38
	if (ctx.cr6.eq) goto loc_825D3C38;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d3c38
	if (ctx.cr6.eq) goto loc_825D3C38;
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
	// li r6,58
	ctx.r6.s64 = 58;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,232(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// bctrl 
	ctx.lr = 0x825D3C38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3C38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D3C3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D7388) {
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
	ctx.lr = 0x825D7390;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x825d73e4
	if (ctx.cr6.eq) goto loc_825D73E4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x824f05f0
	ctx.lr = 0x825D73B4;
	sub_824F05F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D73C8;
	sub_824F05F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D73DC;
	sub_824F05F0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x825d7408
	goto loc_825D7408;
loc_825D73E4:
	// li r4,960
	ctx.r4.s64 = 960;
	// bl 0x824f02c0
	ctx.lr = 0x825D73EC;
	sub_824F02C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,961
	ctx.r4.s64 = 961;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D73FC;
	sub_824F02C0(ctx, base);
	// lis r24,770
	r24.s64 = 50462720;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r24,r24,256
	r24.u64 = r24.u64 | 256;
loc_825D7408:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,7552
	r26.s64 = ctx.r10.s64 + 7552;
	// beq cr6,0x825d7428
	if (ctx.cr6.eq) goto loc_825D7428;
	// cmplwi cr6,r30,17
	ctx.cr6.compare<uint32_t>(r30.u32, 17, ctx.xer);
	// blt cr6,0x825d7444
	if (ctx.cr6.lt) goto loc_825D7444;
loc_825D7428:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,9616
	ctx.r5.s64 = ctx.r11.s64 + 9616;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,321
	ctx.r7.s64 = 321;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7444;
	sub_824EA978(ctx, base);
loc_825D7444:
	// clrlwi r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(r29.u32, 64, ctx.xer);
	// mulli r30,r30,12
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// addi r31,r11,6456
	r31.s64 = ctx.r11.s64 + 6456;
	// bne cr6,0x825d74a0
	if (!ctx.cr6.eq) goto loc_825D74A0;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// bne cr6,0x825d748c
	if (!ctx.cr6.eq) goto loc_825D748C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,9588
	ctx.r5.s64 = ctx.r11.s64 + 9588;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,331
	ctx.r7.s64 = 331;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D748C;
	sub_824EA978(ctx, base);
loc_825D748C:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x825d74bc
	if (!ctx.cr6.eq) goto loc_825D74BC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// b 0x825d74b8
	goto loc_825D74B8;
loc_825D74A0:
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// bne cr6,0x825d74bc
	if (!ctx.cr6.eq) goto loc_825D74BC;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
loc_825D74B8:
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
loc_825D74BC:
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// lwzx r30,r30,r11
	r30.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x825d74f4
	if (ctx.cr6.lt) goto loc_825D74F4;
	// rlwinm r11,r28,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825d74f4
	if (ctx.cr6.eq) goto loc_825D74F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,9472
	ctx.r5.s64 = ctx.r11.s64 + 9472;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,369
	ctx.r7.s64 = 369;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D74F4;
	sub_824EA978(ctx, base);
loc_825D74F4:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x825d7524
	if (ctx.cr6.lt) goto loc_825D7524;
	// rlwinm r11,r28,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825d7524
	if (ctx.cr6.eq) goto loc_825D7524;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,9352
	ctx.r5.s64 = ctx.r11.s64 + 9352;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,372
	ctx.r7.s64 = 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7524;
	sub_824EA978(ctx, base);
loc_825D7524:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x825d7554
	if (ctx.cr6.lt) goto loc_825D7554;
	// rlwinm r11,r28,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825d7554
	if (ctx.cr6.eq) goto loc_825D7554;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,9232
	ctx.r5.s64 = ctx.r11.s64 + 9232;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,375
	ctx.r7.s64 = 375;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7554;
	sub_824EA978(ctx, base);
loc_825D7554:
	// cmplwi cr6,r29,34
	ctx.cr6.compare<uint32_t>(r29.u32, 34, ctx.xer);
	// bne cr6,0x825d7578
	if (!ctx.cr6.eq) goto loc_825D7578;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,9152
	ctx.r5.s64 = ctx.r11.s64 + 9152;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,383
	ctx.r7.s64 = 383;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7578;
	sub_824EA978(ctx, base);
loc_825D7578:
	// cmplwi cr6,r29,35
	ctx.cr6.compare<uint32_t>(r29.u32, 35, ctx.xer);
	// bne cr6,0x825d759c
	if (!ctx.cr6.eq) goto loc_825D759C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,9072
	ctx.r5.s64 = ctx.r11.s64 + 9072;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D759C;
	sub_824EA978(ctx, base);
loc_825D759C:
	// cmplwi cr6,r29,17
	ctx.cr6.compare<uint32_t>(r29.u32, 17, ctx.xer);
	// bne cr6,0x825d75c0
	if (!ctx.cr6.eq) goto loc_825D75C0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,8992
	ctx.r5.s64 = ctx.r11.s64 + 8992;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,387
	ctx.r7.s64 = 387;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D75C0;
	sub_824EA978(ctx, base);
loc_825D75C0:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// bne cr6,0x825d75e4
	if (!ctx.cr6.eq) goto loc_825D75E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,8904
	ctx.r5.s64 = ctx.r11.s64 + 8904;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,389
	ctx.r7.s64 = 389;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D75E4;
	sub_824EA978(ctx, base);
loc_825D75E4:
	// cmplwi cr6,r29,18
	ctx.cr6.compare<uint32_t>(r29.u32, 18, ctx.xer);
	// bne cr6,0x825d7608
	if (!ctx.cr6.eq) goto loc_825D7608;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,8816
	ctx.r5.s64 = ctx.r11.s64 + 8816;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,391
	ctx.r7.s64 = 391;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7608;
	sub_824EA978(ctx, base);
loc_825D7608:
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// blt cr6,0x825d7660
	if (ctx.cr6.lt) goto loc_825D7660;
	// beq cr6,0x825d7658
	if (ctx.cr6.eq) goto loc_825D7658;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// beq cr6,0x825d7650
	if (ctx.cr6.eq) goto loc_825D7650;
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(r29.u32, 32, ctx.xer);
	// beq cr6,0x825d7648
	if (ctx.cr6.eq) goto loc_825D7648;
	// cmplwi cr6,r29,33
	ctx.cr6.compare<uint32_t>(r29.u32, 33, ctx.xer);
	// beq cr6,0x825d7640
	if (ctx.cr6.eq) goto loc_825D7640;
	// cmplwi cr6,r29,64
	ctx.cr6.compare<uint32_t>(r29.u32, 64, ctx.xer);
	// bne cr6,0x825d7660
	if (!ctx.cr6.eq) goto loc_825D7660;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x825d7664
	goto loc_825D7664;
loc_825D7640:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x825d7664
	goto loc_825D7664;
loc_825D7648:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825d7664
	goto loc_825D7664;
loc_825D7650:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x825d7664
	goto loc_825D7664;
loc_825D7658:
	// stw r31,8(r25)
	REX_STORE_U32(r25.u32 + 8, r31.u32);
	// b 0x825d7668
	goto loc_825D7668;
loc_825D7660:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825D7664:
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
loc_825D7668:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d771c
	if (!ctx.cr0.eq) goto loc_825D771C;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x825d76b0
	if (ctx.cr6.lt) goto loc_825D76B0;
	// rlwinm r11,r24,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825d76b0
	if (ctx.cr6.eq) goto loc_825D76B0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825d76b0
	if (ctx.cr6.eq) goto loc_825D76B0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x825d76b0
	if (ctx.cr6.eq) goto loc_825D76B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,8560
	ctx.r5.s64 = ctx.r11.s64 + 8560;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D76B0;
	sub_824EA978(ctx, base);
loc_825D76B0:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x825d76f0
	if (ctx.cr6.lt) goto loc_825D76F0;
	// rlwinm r11,r24,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825d76f0
	if (ctx.cr6.eq) goto loc_825D76F0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825d76f0
	if (ctx.cr6.eq) goto loc_825D76F0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x825d76f0
	if (ctx.cr6.eq) goto loc_825D76F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,8304
	ctx.r5.s64 = ctx.r11.s64 + 8304;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,454
	ctx.r7.s64 = 454;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D76F0;
	sub_824EA978(ctx, base);
loc_825D76F0:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x825d77fc
	if (ctx.cr6.lt) goto loc_825D77FC;
	// rlwinm r11,r24,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825d77fc
	if (ctx.cr6.eq) goto loc_825D77FC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825d77fc
	if (ctx.cr6.eq) goto loc_825D77FC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x825d77fc
	if (ctx.cr6.eq) goto loc_825D77FC;
	// li r7,458
	ctx.r7.s64 = 458;
	// b 0x825d77e4
	goto loc_825D77E4;
loc_825D771C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825d7740
	if (ctx.cr6.eq) goto loc_825D7740;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,8224
	ctx.r5.s64 = ctx.r11.s64 + 8224;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,466
	ctx.r7.s64 = 466;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7740;
	sub_824EA978(ctx, base);
loc_825D7740:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x825d7780
	if (ctx.cr6.lt) goto loc_825D7780;
	// rlwinm r11,r24,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825d7780
	if (ctx.cr6.eq) goto loc_825D7780;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825d7780
	if (ctx.cr6.eq) goto loc_825D7780;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x825d7780
	if (ctx.cr6.eq) goto loc_825D7780;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,8560
	ctx.r5.s64 = ctx.r11.s64 + 8560;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,472
	ctx.r7.s64 = 472;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7780;
	sub_824EA978(ctx, base);
loc_825D7780:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x825d77bc
	if (ctx.cr6.lt) goto loc_825D77BC;
	// rlwinm. r11,r24,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d77bc
	if (ctx.cr0.eq) goto loc_825D77BC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825d77bc
	if (ctx.cr6.eq) goto loc_825D77BC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x825d77bc
	if (ctx.cr6.eq) goto loc_825D77BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,7968
	ctx.r5.s64 = ctx.r11.s64 + 7968;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,476
	ctx.r7.s64 = 476;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D77BC;
	sub_824EA978(ctx, base);
loc_825D77BC:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x825d77fc
	if (ctx.cr6.lt) goto loc_825D77FC;
	// rlwinm r11,r24,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825d77fc
	if (ctx.cr6.eq) goto loc_825D77FC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825d77fc
	if (ctx.cr6.eq) goto loc_825D77FC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x825d77fc
	if (ctx.cr6.eq) goto loc_825D77FC;
	// li r7,480
	ctx.r7.s64 = 480;
loc_825D77E4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,7712
	ctx.r5.s64 = ctx.r11.s64 + 7712;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D77FC;
	sub_824EA978(ctx, base);
loc_825D77FC:
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825F7D60) {
	REX_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// b 0x825f7ca8
	sub_825F7CA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825F80B8) {
	REX_FUNC_PROLOGUE();
	// stb r4,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F80C0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825F80E8;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825F9230) {
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
	ctx.lr = 0x825F9238;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x825f8a50
	ctx.lr = 0x825F9248;
	sub_825F8A50(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,28700
	ctx.r11.s64 = ctx.r11.s64 + 28700;
	// addi r10,r10,28936
	ctx.r10.s64 = ctx.r10.s64 + 28936;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r5,160(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 160);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// lwz r29,2736(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 2736);
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r29
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f92f0
	if (!ctx.cr6.eq) goto loc_825F92F0;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825F9284;
	sub_825E7538(ctx, base);
	// lwz r28,1452(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F9298;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x825f92bc
	if (ctx.cr0.eq) goto loc_825F92BC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fb008
	ctx.lr = 0x825F92B4;
	sub_825FB008(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x825f92c0
	goto loc_825F92C0;
loc_825F92BC:
	// li r28,0
	r28.s64 = 0;
loc_825F92C0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,164(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 164);
	// bl 0x825fcb60
	ctx.lr = 0x825F92CC;
	sub_825FCB60(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F92DC;
	sub_825F9F38(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F92E8;
	sub_825F80C0(ctx, base);
	// stwx r28,r26,r29
	REX_STORE_U32(r26.u32 + r29.u32, r28.u32);
	// b 0x825f92f4
	goto loc_825F92F4;
loc_825F92F0:
	// lwz r27,28(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_825F92F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x825fb9b8
	ctx.lr = 0x825F9300;
	sub_825FB9B8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F9310;
	sub_825F9F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825f9f38
	ctx.lr = 0x825F9320;
	sub_825F9F38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F932C;
	sub_825F80C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825F9338;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825FC098) {
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
	ctx.lr = 0x825FC0A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,1452(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FC0C4;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// beq 0x825fc0ec
	if (ctx.cr0.eq) goto loc_825FC0EC;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fb3a8
	ctx.lr = 0x825FC0E8;
	sub_825FB3A8(ctx, base);
	// b 0x825fc0f0
	goto loc_825FC0F0;
loc_825FC0EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FC0F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825FE0D8) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x825fe0fc
	if (ctx.cr6.lt) goto loc_825FE0FC;
	// cmpwi cr6,r3,136
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 136, ctx.xer);
	// blt cr6,0x825fe120
	if (ctx.cr6.lt) goto loc_825FE120;
loc_825FE0FC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-20400
	ctx.r6.s64 = ctx.r11.s64 + -20400;
	// addi r5,r10,-20456
	ctx.r5.s64 = ctx.r10.s64 + -20456;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,5363
	ctx.r7.s64 = 5363;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FE120;
	sub_824EA978(ctx, base);
loc_825FE120:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mulli r10,r31,36
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(36));
	// addi r11,r11,-26376
	ctx.r11.s64 = ctx.r11.s64 + -26376;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82608880) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x82608888;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r15,1
	r15.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// bgt cr6,0x826088a8
	if (ctx.cr6.gt) goto loc_826088A8;
	// mr r26,r15
	r26.u64 = r15.u64;
loc_826088A8:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x826088BC;
	sub_825B33A0(ctx, base);
	// li r18,0
	r18.s64 = 0;
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x826088e4
	if (ctx.cr0.eq) goto loc_826088E4;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x826088DC;
	sub_825D7A48(ctx, base);
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x826088e8
	goto loc_826088E8;
loc_826088E4:
	// mr r27,r18
	r27.u64 = r18.u64;
loc_826088E8:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x826088FC;
	sub_825B33A0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82608920
	if (ctx.cr0.eq) goto loc_82608920;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x82608918;
	sub_825D7A48(ctx, base);
	// mr r19,r31
	r19.u64 = r31.u64;
	// b 0x82608924
	goto loc_82608924;
loc_82608920:
	// mr r19,r18
	r19.u64 = r18.u64;
loc_82608924:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r28,r18
	r28.u64 = r18.u64;
	// lwz r10,16(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 16);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825b33a0
	ctx.lr = 0x8260893C;
	sub_825B33A0(ctx, base);
	// lis r17,-32120
	r17.s64 = -2105016320;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// stw r3,20552(r17)
	REX_STORE_U32(r17.u32 + 20552, ctx.r3.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8260898c
	if (!ctx.cr6.gt) goto loc_8260898C;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// b 0x82608960
	goto loc_82608960;
loc_8260895C:
	// lwz r3,20552(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 20552);
loc_82608960:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x82608974
	if (ctx.cr6.lt) goto loc_82608974;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82608974:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8260895c
	if (ctx.cr6.lt) goto loc_8260895C;
loc_8260898C:
	// lwz r31,12(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 12);
	// lis r16,-32120
	r16.s64 = -2105016320;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82608aa8
	if (!ctx.cr6.lt) goto loc_82608AA8;
	// rlwinm r29,r31,2,0,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_826089A0:
	// lwz r11,20556(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 20556);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82608a94
	if (!ctx.cr6.eq) goto loc_82608A94;
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826089d0
	if (!ctx.cr6.lt) goto loc_826089D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// b 0x826089dc
	goto loc_826089DC;
loc_826089D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x826089D8;
	sub_825F7718(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826089DC:
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826089f8
	if (!ctx.cr6.lt) goto loc_826089F8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x82608a00
	goto loc_82608A00;
loc_826089F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608A00;
	sub_825F7718(ctx, base);
loc_82608A00:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82608a2c
	if (!ctx.cr6.lt) goto loc_82608A2C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x82608a34
	goto loc_82608A34;
loc_82608A2C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608A34;
	sub_825F7718(ctx, base);
loc_82608A34:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82608a50
	if (!ctx.cr6.eq) goto loc_82608A50;
	// lwz r4,4(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 4);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// b 0x82608a8c
	goto loc_82608A8C;
loc_82608A50:
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82608a6c
	if (!ctx.cr6.lt) goto loc_82608A6C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x82608a74
	goto loc_82608A74;
loc_82608A6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608A74;
	sub_825F7718(ctx, base);
loc_82608A74:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bge cr6,0x82608a94
	if (!ctx.cr6.lt) goto loc_82608A94;
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82608A8C:
	// bl 0x825f7718
	ctx.lr = 0x82608A90;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82608A94:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826089a0
	if (ctx.cr6.lt) goto loc_826089A0;
loc_82608AA8:
	// mr r20,r18
	r20.u64 = r18.u64;
	// b 0x82608bb4
	goto loc_82608BB4;
loc_82608AB0:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// b 0x82608b18
	goto loc_82608B18;
loc_82608AB8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825e9278
	ctx.lr = 0x82608AC0;
	sub_825E9278(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,4(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x82608AD0;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82608af4
	if (!ctx.cr6.lt) goto loc_82608AF4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82608afc
	goto loc_82608AFC;
loc_82608AF4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608AFC;
	sub_825F7718(ctx, base);
loc_82608AFC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r18,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r18.u32);
	// bl 0x826086c8
	ctx.lr = 0x82608B18;
	sub_826086C8(ctx, base);
loc_82608B18:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82608ab8
	if (!ctx.cr6.eq) goto loc_82608AB8;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// beq cr6,0x82608bc0
	if (ctx.cr6.eq) goto loc_82608BC0;
	// lwz r31,12(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82608bb4
	if (!ctx.cr6.lt) goto loc_82608BB4;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82608B48:
	// lwz r11,20556(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 20556);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82608ba0
	if (!ctx.cr6.eq) goto loc_82608BA0;
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82608b74
	if (!ctx.cr6.lt) goto loc_82608B74;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// b 0x82608b7c
	goto loc_82608B7C;
loc_82608B74:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608B7C;
	sub_825F7718(ctx, base);
loc_82608B7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r26,-1
	ctx.r10.s64 = r26.s64 + -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82608ba0
	if (!ctx.cr6.eq) goto loc_82608BA0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x82608B9C;
	sub_825F7718(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82608BA0:
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82608b48
	if (ctx.cr6.lt) goto loc_82608B48;
loc_82608BB4:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bne cr6,0x82608ab0
	if (!ctx.cr6.eq) goto loc_82608AB0;
loc_82608BC0:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r22,r18
	r22.u64 = r18.u64;
	// lwz r10,1360(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// lwz r23,2736(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r21,4(r10)
	r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825d8668
	ctx.lr = 0x82608BE0;
	sub_825D8668(ctx, base);
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82608e50
	if (ctx.cr6.eq) goto loc_82608E50;
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82608BF4:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82608c1c
	if (!ctx.cr6.gt) goto loc_82608C1C;
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
loc_82608C08:
	// stwu r18,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r18.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82608c08
	if (ctx.cr6.lt) goto loc_82608C08;
loc_82608C1C:
	// mr r31,r18
	r31.u64 = r18.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x82608c68
	if (!ctx.cr6.gt) goto loc_82608C68;
loc_82608C28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825e9308
	ctx.lr = 0x82608C34;
	sub_825E9308(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82608c5c
	if (!ctx.cr0.eq) goto loc_82608C5C;
	// rlwinm r11,r31,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// slw r10,r15,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, ctx.r10.u32);
loc_82608C5C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r21
	ctx.cr6.compare<int32_t>(r31.s32, r21.s32, ctx.xer);
	// blt cr6,0x82608c28
	if (ctx.cr6.lt) goto loc_82608C28;
loc_82608C68:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825e9278
	ctx.lr = 0x82608C70;
	sub_825E9278(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82608c94
	if (!ctx.cr6.lt) goto loc_82608C94;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82608ca0
	goto loc_82608CA0;
loc_82608C94:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608CA0;
	sub_825F7718(ctx, base);
loc_82608CA0:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82608d1c
	if (!ctx.cr6.gt) goto loc_82608D1C;
loc_82608CBC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82608cd0
	if (!ctx.cr6.eq) goto loc_82608CD0;
	// lwz r7,28(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_82608CD0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20552(r17)
	ctx.r8.u64 = REX_LOAD_U32(r17.u32 + 20552);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82608d0c
	if (ctx.cr6.lt) goto loc_82608D0C;
	// rlwinm r8,r11,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// slw r5,r15,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwx r8,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, ctx.r8.u32);
loc_82608D0C:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82608cbc
	if (ctx.cr6.lt) goto loc_82608CBC;
loc_82608D1C:
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r27,r18
	r27.u64 = r18.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82608d40
	if (!ctx.cr6.lt) goto loc_82608D40;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82608d48
	goto loc_82608D48;
loc_82608D40:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608D48;
	sub_825F7718(ctx, base);
loc_82608D48:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r18
	r31.u64 = r18.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82608e10
	if (!ctx.cr6.gt) goto loc_82608E10;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_82608D64:
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82608d84
	if (!ctx.cr6.lt) goto loc_82608D84;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82608d8c
	goto loc_82608D8C;
loc_82608D84:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608D8C;
	sub_825F7718(ctx, base);
loc_82608D8C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82608dac
	if (!ctx.cr6.lt) goto loc_82608DAC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x82608db4
	goto loc_82608DB4;
loc_82608DAC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x82608DB4;
	sub_825F7718(ctx, base);
loc_82608DB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20552(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 20552);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82608df0
	if (ctx.cr6.lt) goto loc_82608DF0;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82608e04
	if (ctx.cr0.eq) goto loc_82608E04;
loc_82608DF0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x82608d64
	if (ctx.cr6.lt) goto loc_82608D64;
	// b 0x82608e10
	goto loc_82608E10;
loc_82608E04:
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// mr r27,r15
	r27.u64 = r15.u64;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
loc_82608E10:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82608e2c
	if (!ctx.cr0.eq) goto loc_82608E2C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825ecb10
	ctx.lr = 0x82608E20;
	sub_825ECB10(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82608f04
	if (ctx.cr6.eq) goto loc_82608F04;
loc_82608E2C:
	// lwz r11,20552(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 20552);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stwx r24,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r24.u32);
	// bl 0x825e9338
	ctx.lr = 0x82608E44;
	sub_825E9338(ctx, base);
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82608bf4
	if (!ctx.cr6.eq) goto loc_82608BF4;
loc_82608E50:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82608e64
	if (ctx.cr6.eq) goto loc_82608E64;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// lwz r3,-4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x82608E64;
	sub_825B3528(ctx, base);
loc_82608E64:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825e9488
	ctx.lr = 0x82608E6C;
	sub_825E9488(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,12(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12);
	// addi r4,r11,-16912
	ctx.r4.s64 = ctx.r11.s64 + -16912;
	// lwz r3,8(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r11,2080(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 2080);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82130e88
	ctx.lr = 0x82608E8C;
	sub_82130E88(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82608ea8
	if (!ctx.cr6.gt) goto loc_82608EA8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,8(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r11,-16980
	ctx.r4.s64 = ctx.r11.s64 + -16980;
	// bl 0x82130e88
	ctx.lr = 0x82608EA8;
	sub_82130E88(ctx, base);
loc_82608EA8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,8(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r11,-17048
	ctx.r4.s64 = ctx.r11.s64 + -17048;
	// bl 0x82130e88
	ctx.lr = 0x82608EBC;
	sub_82130E88(ctx, base);
	// lwz r10,12(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 12);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82608efc
	if (!ctx.cr6.lt) goto loc_82608EFC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82608ED0:
	// lwz r8,20556(r16)
	ctx.r8.u64 = REX_LOAD_U32(r16.u32 + 20556);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,20552(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 20552);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82608ed0
	if (ctx.cr6.lt) goto loc_82608ED0;
loc_82608EFC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
loc_82608F04:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r10,22
	ctx.r10.s64 = 22;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	REX_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x826a4440
	ctx.lr = 0x82608F1C;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
}

DEFINE_REX_FUNC(sub_82638640) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82638710
	if (!ctx.cr6.eq) goto loc_82638710;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x82638710
	if (ctx.cr6.gt) goto loc_82638710;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82638770
	if (!ctx.cr6.gt) goto loc_82638770;
loc_82638688:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x82638770
	if (ctx.cr6.gt) goto loc_82638770;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826386B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subfic r6,r30,8
	ctx.xer.ca = r30.u32 <= 8;
	ctx.r6.u64 = static_cast<uint64_t>(8) - r30.u64;
	// slw r5,r8,r30
	ctx.r5.u64 = r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r30.u8 & 0x3F));
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// clrlwi r3,r30,24
	ctx.r3.u64 = r30.u32 & 0xFF;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// slw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// subf r10,r30,r4
	ctx.r10.u64 = ctx.r4.u64 - r30.u64;
	// srw r7,r9,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r3.u8 & 0x3F));
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// stw r6,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r5,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r4,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bgt cr6,0x82638688
	if (ctx.cr6.gt) goto loc_82638688;
	// b 0x82638770
	goto loc_82638770;
loc_82638710:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8263872C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 44);
	// slw r5,r8,r30
	ctx.r5.u64 = r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r30.u8 & 0x3F));
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// subfic r6,r30,8
	ctx.xer.ca = r30.u32 <= 8;
	ctx.r6.u64 = static_cast<uint64_t>(8) - r30.u64;
	// srw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// slw r9,r7,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// subf r11,r30,r4
	ctx.r11.u64 = ctx.r4.u64 - r30.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r7,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r7.u32);
	// stw r6,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r6.u32);
	// stw r5,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r5.u32);
loc_82638770:
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

DEFINE_REX_FUNC(sub_82640D08) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// beq cr6,0x82640d28
	if (ctx.cr6.eq) goto loc_82640D28;
	// cmplwi cr6,r11,358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 358, ctx.xer);
	// beq cr6,0x82640d28
	if (ctx.cr6.eq) goto loc_82640D28;
	// cmplwi cr6,r11,359
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 359, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82640D28:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82641C30) {
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
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82641c74
	if (!ctx.cr6.eq) goto loc_82641C74;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82641C68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
loc_82641C74:
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

DEFINE_REX_FUNC(sub_826422B8) {
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
	ctx.lr = 0x826422C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// lwz r27,48(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r26,88(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r30,r11,65535
	r30.u64 = ctx.r11.u64 | 65535;
	// li r25,0
	r25.s64 = 0;
	// li r29,-1
	r29.s64 = -1;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// rlwinm r4,r27,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x826422f0
	if (!ctx.cr6.gt) goto loc_826422F0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_826422F0:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r31,r11,20576
	r31.s64 = ctx.r11.s64 + 20576;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x8264230C;
	sub_8260B5B8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne 0x82642320
	if (!ctx.cr0.eq) goto loc_82642320;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8264235c
	goto loc_8264235C;
loc_82642320:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// rlwinm r4,r26,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82642330
	if (!ctx.cr6.gt) goto loc_82642330;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82642330:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x8260b5b8
	ctx.lr = 0x82642344;
	sub_8260B5B8(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8264235C:
	// lwz r8,40(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826423c0
	if (ctx.cr6.eq) goto loc_826423C0;
	// addi r9,r24,-4
	ctx.r9.s64 = r24.s64 + -4;
loc_82642370:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x826423c0
	if (ctx.cr6.lt) goto loc_826423C0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82642390
	if (ctx.cr6.eq) goto loc_82642390;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82642394
	goto loc_82642394;
loc_82642390:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82642394:
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lhz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// divwu r11,r11,r7
	ctx.r11.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// stwu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x82642370
	if (ctx.cr6.lt) goto loc_82642370;
loc_826423C0:
	// lwz r8,80(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82642424
	if (ctx.cr6.eq) goto loc_82642424;
	// addi r9,r25,-4
	ctx.r9.s64 = r25.s64 + -4;
loc_826423D4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82642454
	if (ctx.cr6.lt) goto loc_82642454;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826423f4
	if (ctx.cr6.eq) goto loc_826423F4;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826423f8
	goto loc_826423F8;
loc_826423F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826423F8:
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lhz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 12);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// divwu r11,r11,r7
	ctx.r11.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// stwu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x826423d4
	if (ctx.cr6.lt) goto loc_826423D4;
loc_82642424:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82642454
	if (ctx.cr6.lt) goto loc_82642454;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82642450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82642454:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82642464
	if (ctx.cr6.eq) goto loc_82642464;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82642464;
	sub_8264C3D0(ctx, base);
loc_82642464:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82642474
	if (ctx.cr6.eq) goto loc_82642474;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82642474;
	sub_8264C3D0(ctx, base);
loc_82642474:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8264CF10) {
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
	// b 0x827940e4
	__imp__NetDll_WSAGetOverlappedResult(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264D5F8) {
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
	ctx.lr = 0x8264D600;
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r3,820(r1)
	REX_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// stw r5,836(r1)
	REX_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8264ca58
	ctx.lr = 0x8264D634;
	sub_8264CA58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d82c
	if (ctx.cr0.lt) goto loc_8264D82C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8264cae0
	ctx.lr = 0x8264D65C;
	sub_8264CAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d82c
	if (ctx.cr0.lt) goto loc_8264D82C;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3586
	ctx.r3.s64 = 3586;
	// addi r30,r11,48
	r30.s64 = ctx.r11.s64 + 48;
	// bl 0x8264ca58
	ctx.lr = 0x8264D678;
	sub_8264CA58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d82c
	if (ctx.cr0.lt) goto loc_8264D82C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8264cae0
	ctx.lr = 0x8264D6A0;
	sub_8264CAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d82c
	if (ctx.cr0.lt) goto loc_8264D82C;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3603
	ctx.r3.s64 = 3603;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8264ca58
	ctx.lr = 0x8264D6BC;
	sub_8264CA58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d82c
	if (ctx.cr0.lt) goto loc_8264D82C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8264cae0
	ctx.lr = 0x8264D6E4;
	sub_8264CAE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d82c
	if (ctx.cr0.lt) goto loc_8264D82C;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82794034
	ctx.lr = 0x8264D6FC;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d82c
	if (ctx.cr0.lt) goto loc_8264D82C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a5ac8
	ctx.lr = 0x8264D70C;
	sub_826A5AC8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r26,r1,144
	r26.s64 = ctx.r1.s64 + 144;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r25,r1,152
	r25.s64 = ctx.r1.s64 + 152;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r27,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r3,3603
	ctx.r3.s64 = 3603;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// bl 0x8264cbb8
	ctx.lr = 0x8264D75C;
	sub_8264CBB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d82c
	if (ctx.cr0.lt) goto loc_8264D82C;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D770;
	sub_8264D058(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D77C;
	sub_8264D058(ctx, base);
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D788;
	sub_8264D058(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D794;
	sub_8264D058(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D7A0;
	sub_8264D058(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8264d058
	ctx.lr = 0x8264D7AC;
	sub_8264D058(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8264ccb0
	ctx.lr = 0x8264D7D0;
	sub_8264CCB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264d82c
	if (ctx.cr0.lt) goto loc_8264D82C;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r31.u64);
	// std r31,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r31.u64);
	// std r31,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r31.u64);
	// std r31,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, r31.u64);
	// std r31,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x827937c4
	ctx.lr = 0x8264D824;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264d858
	if (!ctx.cr0.lt) goto loc_8264D858;
loc_8264D82C:
	// li r31,1627
	r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8264d840
	if (ctx.cr6.eq) goto loc_8264D840;
	// stw r3,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// b 0x8264d844
	goto loc_8264D844;
loc_8264D840:
	// bl 0x823f0008
	ctx.lr = 0x8264D844;
	sub_823F0008(ctx, base);
loc_8264D844:
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8264d87c
	if (ctx.cr6.eq) goto loc_8264D87C;
	// bl 0x82794024
	ctx.lr = 0x8264D854;
	__imp__XamFree(ctx, base);
	// b 0x8264d87c
	goto loc_8264D87C;
loc_8264D858:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8264d868
	if (ctx.cr6.eq) goto loc_8264D868;
	// li r31,997
	r31.s64 = 997;
	// b 0x8264d87c
	goto loc_8264D87C;
loc_8264D868:
	// bl 0x823f0058
	ctx.lr = 0x8264D86C;
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
loc_8264D87C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8265C348) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8265C350;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265c38c
	if (ctx.cr6.eq) goto loc_8265C38C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82793624
	ctx.lr = 0x8265C374;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8265c38c
	if (ctx.cr0.eq) goto loc_8265C38C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8265a6a0
	ctx.lr = 0x8265C38C;
	sub_8265A6A0(ctx, base);
loc_8265C38C:
	// lwz r3,432(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 432);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x8265c3e4
	if (!ctx.cr6.lt) goto loc_8265C3E4;
	// bl 0x823ee6a8
	ctx.lr = 0x8265C39C;
	sub_823EE6A8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8265c3e4
	if (!ctx.cr6.eq) goto loc_8265C3E4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265c3c0
	if (ctx.cr6.eq) goto loc_8265C3C0;
	// ld r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 48);
	// ld r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 456);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8265c3dc
	if (ctx.cr6.eq) goto loc_8265C3DC;
loc_8265C3C0:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r31,436
	ctx.r5.s64 = r31.s64 + 436;
	// lwz r4,432(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 432);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265C3DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265C3DC:
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r11,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r11.u32);
loc_8265C3E4:
	// lwz r30,196(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8265c438
	if (ctx.cr6.eq) goto loc_8265C438;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8265c438
	if (ctx.cr6.eq) goto loc_8265C438;
	// bl 0x823ede70
	ctx.lr = 0x8265C404;
	sub_823EDE70(ctx, base);
	// rlwinm. r11,r3,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265c420
	if (!ctx.cr0.eq) goto loc_8265C420;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265c420
	if (!ctx.cr6.gt) goto loc_8265C420;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r4,r11,32775
	ctx.r4.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8265c424
	goto loc_8265C424;
loc_8265C420:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8265C424:
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8265C438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265C438:
	// lwz r30,412(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 412);
	// addi r29,r31,412
	r29.s64 = r31.s64 + 412;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x8265c474
	if (ctx.cr6.eq) goto loc_8265C474;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8265c474
	if (ctx.cr0.eq) goto loc_8265C474;
loc_8265C450:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
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
	// bl 0x8265e9b0
	ctx.lr = 0x8265C46C;
	sub_8265E9B0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8265c450
	if (!ctx.cr6.eq) goto loc_8265C450;
loc_8265C474:
	// lwz r3,420(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265c48c
	if (ctx.cr6.eq) goto loc_8265C48C;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm r4,r11,9,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// bl 0x8265ff48
	ctx.lr = 0x8265C48C;
	sub_8265FF48(ctx, base);
loc_8265C48C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654bc0
	ctx.lr = 0x8265C494;
	sub_82654BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c138
	ctx.lr = 0x8265C49C;
	sub_8265C138(ctx, base);
	// lwz r3,408(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265c4c4
	if (ctx.cr6.eq) goto loc_8265C4C4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82660ed0
	ctx.lr = 0x8265C4B4;
	sub_82660ED0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x8265c4c4
	if (!ctx.cr0.lt) goto loc_8265C4C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654f40
	ctx.lr = 0x8265C4C4;
	sub_82654F40(ctx, base);
loc_8265C4C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659d88
	ctx.lr = 0x8265C4CC;
	sub_82659D88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826628E8) {
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
	// lwz r3,56(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r3,56(r5)
	REX_STORE_U32(ctx.r5.u32 + 56, ctx.r3.u32);
	// stw r11,56(r4)
	REX_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// lbz r10,60(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 60);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8266295c
	if (!ctx.cr6.eq) goto loc_8266295C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266295c
	if (ctx.cr6.eq) goto loc_8266295C;
	// lwz r10,168(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8266295c
	if (!ctx.cr6.eq) goto loc_8266295C;
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
loc_82662938:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82662938
	if (!ctx.cr0.eq) goto loc_82662938;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826708d8
	ctx.lr = 0x8266295C;
	sub_826708D8(ctx, base);
loc_8266295C:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r30,12
	ctx.r11.s64 = r30.s64 + 12;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826629e0
	if (ctx.cr6.eq) goto loc_826629E0;
loc_8266296C:
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
	// bne 0x8266296c
	if (!ctx.cr0.eq) goto loc_8266296C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
loc_826629C4:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826629c4
	if (!ctx.cr0.eq) goto loc_826629C4;
loc_826629E0:
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

DEFINE_REX_FUNC(sub_8266D258) {
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
	ctx.lr = 0x8266D260;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x8266d2f0
	goto loc_8266D2F0;
loc_8266D270:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,28(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266d2ac
	if (ctx.cr0.eq) goto loc_8266D2AC;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8266cf30
	ctx.lr = 0x8266D2A4;
	sub_8266CF30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266d304
	if (!ctx.cr0.eq) goto loc_8266D304;
loc_8266D2AC:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266d2e0
	if (ctx.cr0.eq) goto loc_8266D2E0;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8266cf30
	ctx.lr = 0x8266D2D8;
	sub_8266CF30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266d304
	if (!ctx.cr0.eq) goto loc_8266D304;
loc_8266D2E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82672140
	ctx.lr = 0x8266D2E8;
	sub_82672140(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826719f8
	ctx.lr = 0x8266D2F0;
	sub_826719F8(ctx, base);
loc_8266D2F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826719f8
	ctx.lr = 0x8266D2F8;
	sub_826719F8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8266d270
	if (!ctx.cr0.eq) goto loc_8266D270;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266D304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826715F0) {
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
	ctx.lr = 0x826715F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,240(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 240);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82671638
	if (ctx.cr6.eq) goto loc_82671638;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826718c0
	ctx.lr = 0x8267162C;
	sub_826718C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82671804
	if (!ctx.cr0.eq) goto loc_82671804;
	// b 0x826717f8
	goto loc_826717F8;
loc_82671638:
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x826716d0
	if (!ctx.cr6.eq) goto loc_826716D0;
	// lwz r30,236(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 236);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82671654
	if (!ctx.cr6.eq) goto loc_82671654;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82671654:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r6,176(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 176);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 180);
	// bne cr6,0x8267169c
	if (!ctx.cr6.eq) goto loc_8267169C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267169c
	if (!ctx.cr6.eq) goto loc_8267169C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82671804
	goto loc_82671804;
loc_8267169C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// bl 0x826761c0
	ctx.lr = 0x826716B4;
	sub_826761C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r11,r10,25,21,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x600) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF9FF);
	// rlwimi r11,r10,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_826716D0:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// bne cr6,0x826716fc
	if (!ctx.cr6.eq) goto loc_826716FC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x826717f0
	goto loc_826717F0;
loc_826716FC:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// bne cr6,0x8267174c
	if (!ctx.cr6.eq) goto loc_8267174C;
	// lwz r9,196(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 196);
	// li r29,0
	r29.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8267174c
	if (ctx.cr0.eq) goto loc_8267174C;
	// lwz r7,188(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 188);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82671720:
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r6,236(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 236);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8267173c
	if (ctx.cr6.eq) goto loc_8267173C;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// beq cr6,0x8267174c
	if (ctx.cr6.eq) goto loc_8267174C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8267173C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82671720
	if (ctx.cr6.lt) goto loc_82671720;
loc_8267174C:
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267178c
	if (ctx.cr0.eq) goto loc_8267178C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_8267178C:
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r11,r6,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826717ac
	if (ctx.cr0.eq) goto loc_826717AC;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826717ac
	if (!ctx.cr0.eq) goto loc_826717AC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_826717AC:
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826717c8
	if (ctx.cr0.eq) goto loc_826717C8;
	// rlwinm. r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826717c8
	if (!ctx.cr0.eq) goto loc_826717C8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_826717C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x826717e8
	if (!ctx.cr6.eq) goto loc_826717E8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826718c0
	ctx.lr = 0x826717E0;
	sub_826718C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82671804
	if (!ctx.cr0.eq) goto loc_82671804;
loc_826717E8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_826717F0:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826717F8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82671804:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8267B208) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8267B210;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,668(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 668);
	// addi r29,r3,592
	r29.s64 = ctx.r3.s64 + 592;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r5,96(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826827a0
	ctx.lr = 0x8267B23C;
	sub_826827A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8267b2c0
	if (ctx.cr0.lt) goto loc_8267B2C0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82683298
	ctx.lr = 0x8267B25C;
	sub_82683298(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8267b2c0
	if (ctx.cr0.lt) goto loc_8267B2C0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,624
	ctx.r9.s64 = r31.s64 + 624;
	// addi r8,r30,338
	ctx.r8.s64 = r30.s64 + 338;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,628(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 628);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,628(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 628);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,628(r31)
	REX_STORE_U32(r31.u32 + 628, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r9,2,6,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3FFFFFC;
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r11.u32);
	// lhzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r11,r10,r31
	REX_STORE_U16(ctx.r10.u32 + r31.u32, ctx.r11.u16);
loc_8267B2C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82680B88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82680B90;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ori r11,r5,252
	ctx.r11.u64 = ctx.r5.u64 | 252;
	// rlwinm r5,r7,24,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x3;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// rlwimi r5,r11,5,24,26
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xE0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF1F);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// andi. r11,r5,227
	ctx.r11.u64 = ctx.r5.u64 & 227;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stb r11,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// clrlwi r9,r7,22
	ctx.r9.u64 = ctx.r7.u32 & 0x3FF;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82680bc8
	if (ctx.cr6.eq) goto loc_82680BC8;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
loc_82680BC8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lhz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + 4);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82680be8
	if (ctx.cr6.eq) goto loc_82680BE8;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r11.u8);
loc_82680BE8:
	// lhz r11,38(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 38);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82680c00
	if (ctx.cr0.eq) goto loc_82680C00;
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r11.u8);
loc_82680C00:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stb r9,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r9.u8);
	// addi r30,r31,6
	r30.s64 = r31.s64 + 6;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// lbz r6,2(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 2);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// rlwinm. r6,r6,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwimi r9,r8,2,24,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF03);
	// stb r9,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r9.u8);
	// beq 0x82680c48
	if (ctx.cr0.eq) goto loc_82680C48;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82686c90
	ctx.lr = 0x82680C44;
	sub_82686C90(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_82680C48:
	// lbz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82680c68
	if (ctx.cr0.eq) goto loc_82680C68;
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826867c0
	ctx.lr = 0x82680C64;
	sub_826867C0(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_82680C68:
	// subf r3,r31,r30
	ctx.r3.u64 = r30.u64 - r31.u64;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82685058) {
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
	ctx.lr = 0x82685060;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82685108
	if (ctx.cr6.eq) goto loc_82685108;
	// lhz r10,76(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 76);
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82685108
	if (!ctx.cr0.eq) goto loc_82685108;
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82685108
	if (ctx.cr0.eq) goto loc_82685108;
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r4,r4,4118
	ctx.r4.u64 = ctx.r4.u64 | 4118;
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// bl 0x82687870
	ctx.lr = 0x826850F8;
	sub_82687870(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x82685248
	goto loc_82685248;
loc_82685108:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r26,r28,4
	r26.s64 = r28.s64 + 4;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82685218
	if (!ctx.cr6.gt) goto loc_82685218;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8268513c
	if (ctx.cr0.eq) goto loc_8268513C;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x82685140
	goto loc_82685140;
loc_8268513C:
	// lwz r10,192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 192);
loc_82685140:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r27,r31,172
	r27.s64 = r31.s64 + 172;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82685204
	goto loc_82685204;
loc_82685154:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82685200
	if (!ctx.cr6.eq) goto loc_82685200;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8268518c
	if (!ctx.cr0.eq) goto loc_8268518C;
	// lhz r10,14(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 14);
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
	// sth r10,14(r28)
	REX_STORE_U16(r28.u32 + 14, ctx.r10.u16);
loc_8268518C:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 152);
	// rlwinm. r8,r10,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r9,8
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFFFF;
	// beq 0x826851ac
	if (ctx.cr0.eq) goto loc_826851AC;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82685200
	if (ctx.cr6.eq) goto loc_82685200;
loc_826851AC:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x826877b8
	ctx.lr = 0x826851C8;
	sub_826877B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826851e8
	if (!ctx.cr6.eq) goto loc_826851E8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82685200
	if (ctx.cr6.eq) goto loc_82685200;
loc_826851E8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826877b8
	ctx.lr = 0x826851F4;
	sub_826877B8(ctx, base);
	// lhz r11,14(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 14);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// sth r11,14(r28)
	REX_STORE_U16(r28.u32 + 14, ctx.r11.u16);
loc_82685200:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82685204:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x82685218
	if (ctx.cr6.eq) goto loc_82685218;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bne 0x82685154
	if (!ctx.cr0.eq) goto loc_82685154;
loc_82685218:
	// lbz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82685230
	if (!ctx.cr6.eq) goto loc_82685230;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8267c618
	ctx.lr = 0x82685230;
	sub_8267C618(ctx, base);
loc_82685230:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82687d38
	ctx.lr = 0x82685248;
	sub_82687D38(ctx, base);
loc_82685248:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82694950) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// blt 0x82694984
	if (ctx.cr0.lt) goto loc_82694984;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82694978:
	// lfsu f12,-4(r9)
	ctx.fpscr.disableFlushMode();
	ea = -4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// bdnz 0x82694978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82694978;
loc_82694984:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f12,8516(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8516);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// blt cr6,0x826949c0
	if (ctx.cr6.lt) goto loc_826949C0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_826949A4:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826949c0
	if (!ctx.cr6.lt) goto loc_826949C0;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bge 0x826949a4
	if (!ctx.cr0.lt) goto loc_826949A4;
loc_826949C0:
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// cmpwi cr6,r3,76
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 76, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,76
	ctx.r3.s64 = 76;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82699428) {
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
	ctx.lr = 0x82699430;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ca8
	ctx.lr = 0x82699438;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826956a8
	ctx.lr = 0x82699458;
	sub_826956A8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lfs f31,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82699470:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fnmsubs f0,f0,f0,f31
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f0.f64, -f31.f64)));
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// bdnz 0x82699470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82699470;
	// bl 0x82695b58
	ctx.lr = 0x82699484;
	sub_82695B58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f29,f13,f13,f31
	f29.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, f31.f64)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// lfs f31,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	f31.f64 = double(temp.f32);
	// li r30,5
	r30.s64 = 5;
	// lfs f0,11200(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 11200);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f30,f1,f31,f30
	f30.f64 = double(float(-std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// fmuls f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lis r28,-32127
	r28.s64 = -2105475072;
loc_826994B8:
	// lwz r11,24720(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24720);
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// fmadds f1,f0,f28,f29
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, f29.f64)));
	// bl 0x82695b58
	ctx.lr = 0x826994CC;
	sub_82695B58(ctx, base);
	// fnmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, f31.f64, -f30.f64)));
	// stfsu f0,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x826994b8
	if (!ctx.cr0.eq) goto loc_826994B8;
	// li r9,63
	ctx.r9.s64 = 63;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r9,9032
	ctx.r8.s64 = ctx.r9.s64 + 9032;
	// lfs f12,9032(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9032);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
loc_82699500:
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// lfsx f9,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f0,f8,f0,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f9.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82699550
	if (!ctx.cr6.gt) goto loc_82699550;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82699550:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x8269955c
	if (ctx.cr6.gt) goto loc_8269955C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8269955C:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82699580
	if (!ctx.cr6.lt) goto loc_82699580;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f9,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
loc_82699580:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82699500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82699500;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826956a8
	ctx.lr = 0x826995A4;
	sub_826956A8(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826995BC:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826995bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826995BC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cf4
	ctx.lr = 0x826995D8;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(__restgprlr_24) {
	REX_FUNC_PROLOGUE();
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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

DEFINE_REX_FUNC(__savefpr_25) {
	REX_FUNC_PROLOGUE();
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -56, f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, f27.u64);
	// stfd f28,-32(r12)
	REX_STORE_U64(ctx.r12.u32 + -32, f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A3240) {
	REX_FUNC_PROLOGUE();
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,31264
	ctx.r9.s64 = ctx.r10.s64 + 31264;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// cmpwi cr6,r4,16384
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16384, ctx.xer);
	// mulli r10,r11,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// beq cr6,0x826a3288
	if (ctx.cr6.eq) goto loc_826A3288;
	// cmplwi cr6,r4,32768
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32768, ctx.xer);
	// bne cr6,0x826a32b0
	if (!ctx.cr6.eq) goto loc_826A32B0;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x826a32b0
	goto loc_826A32B0;
loc_826A3288:
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// li r5,-128
	ctx.r5.s64 = -128;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// stb r9,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r9.u8);
loc_826A32B0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x826a32c4
	if (!ctx.cr6.eq) goto loc_826A32C4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// blr 
	return;
loc_826A32C4:
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_123) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_69) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826B8690) {
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
	// addi r10,r11,27632
	ctx.r10.s64 = ctx.r11.s64 + 27632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826b7b68
	ctx.lr = 0x826B86BC;
	sub_826B7B68(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x826bf4d0
	ctx.lr = 0x826B86C4;
	sub_826BF4D0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x826b61f0
	ctx.lr = 0x826B86CC;
	sub_826B61F0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x826bc358
	ctx.lr = 0x826B86D4;
	sub_826BC358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc158
	ctx.lr = 0x826B86DC;
	sub_826BC158(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826b86fc
	if (ctx.cr6.eq) goto loc_826B86FC;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x823f0350
	ctx.lr = 0x826B86F8;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826B86FC:
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

DEFINE_REX_FUNC(sub_826BB498) {
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
	ctx.lr = 0x826BB4A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826bb58c
	if (ctx.cr6.eq) goto loc_826BB58C;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r31,132(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826bb58c
	if (!ctx.cr6.gt) goto loc_826BB58C;
loc_826BB4D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BB4E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826bb560
	if (!ctx.cr6.eq) goto loc_826BB560;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BB500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x823ee288
	ctx.lr = 0x826BB514;
	sub_823EE288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826bb548
	if (!ctx.cr6.eq) goto loc_826BB548;
	// bl 0x823ee280
	ctx.lr = 0x826BB520;
	sub_823EE280(ctx, base);
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x826bb548
	if (ctx.cr6.eq) goto loc_826BB548;
	// cmplwi cr6,r3,995
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 995, ctx.xer);
	// beq cr6,0x826bb548
	if (ctx.cr6.eq) goto loc_826BB548;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BB544;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_826BB548:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BB560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826BB560:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BB578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 108);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// blt cr6,0x826bb4d0
	if (ctx.cr6.lt) goto loc_826BB4D0;
loc_826BB58C:
	// stw r28,112(r30)
	REX_STORE_U32(r30.u32 + 112, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,128(r30)
	REX_STORE_U32(r30.u32 + 128, r28.u32);
	// std r28,80(r30)
	REX_STORE_U64(r30.u32 + 80, r28.u64);
	// std r28,72(r30)
	REX_STORE_U64(r30.u32 + 72, r28.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826C3548) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x82793e24
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C37B8) {
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
	ctx.lr = 0x826C37E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// andc r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 & ~r30.u64;
	// stw r7,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C3804;
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

DEFINE_REX_FUNC(sub_826C7890) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826C7898;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C78C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7a40
	if (ctx.cr6.lt) goto loc_826C7A40;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C78E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7a40
	if (ctx.cr6.lt) goto loc_826C7A40;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x826c6d18
	ctx.lr = 0x826C7900;
	sub_826C6D18(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r29,r11,22
	r29.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x826c7a24
	if (ctx.cr6.eq) goto loc_826C7A24;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7a40
	if (ctx.cr6.lt) goto loc_826C7A40;
	// li r28,1
	r28.s64 = 1;
loc_826C791C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7a40
	if (ctx.cr6.lt) goto loc_826C7A40;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x826c79dc
	if (ctx.cr6.eq) goto loc_826C79DC;
loc_826C7938:
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826c7954
	if (ctx.cr6.eq) goto loc_826C7954;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r31,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r31.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826C7954:
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826c79a0
	if (ctx.cr6.eq) goto loc_826C79A0;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x826c68d8
	ctx.lr = 0x826C797C;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7a40
	if (ctx.cr6.lt) goto loc_826C7A40;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 + 44;
	// bl 0x826c68d8
	ctx.lr = 0x826C7998;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7a40
	if (ctx.cr6.lt) goto loc_826C7A40;
loc_826C79A0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x826c68d8
	ctx.lr = 0x826C79B0;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7a40
	if (ctx.cr6.lt) goto loc_826C7A40;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x826c7938
	if (!ctx.cr6.eq) goto loc_826C7938;
loc_826C79DC:
	// stw r31,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r31.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, r31.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r28,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, r28.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r31.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, r31.u32);
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x826c6d80
	ctx.lr = 0x826C7A1C;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x826c791c
	if (!ctx.cr6.eq) goto loc_826C791C;
loc_826C7A24:
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// bl 0x826c6de8
	ctx.lr = 0x826C7A30;
	sub_826C6DE8(ctx, base);
	// std r31,32(r30)
	REX_STORE_U64(r30.u32 + 32, r31.u64);
	// stw r31,48(r30)
	REX_STORE_U32(r30.u32 + 48, r31.u32);
	// std r31,56(r30)
	REX_STORE_U64(r30.u32 + 56, r31.u64);
	// stb r31,96(r30)
	REX_STORE_U8(r30.u32 + 96, r31.u8);
loc_826C7A40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826D9810) {
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
	ctx.lr = 0x826D9818;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826d984c
	if (!ctx.cr6.eq) goto loc_826D984C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826D984C:
	// lwz r29,28(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 28);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,148(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 148);
	// bl 0x826c6cf0
	ctx.lr = 0x826D9860;
	sub_826C6CF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9924
	if (ctx.cr6.lt) goto loc_826D9924;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826d98d4
	if (!ctx.cr6.eq) goto loc_826D98D4;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826d98d4
	if (ctx.cr6.eq) goto loc_826D98D4;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r31.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, r31.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, r31.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, r31.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,32(r6)
	REX_STORE_U8(ctx.r6.u32 + 32, r31.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, r31.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, r31.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D98D4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x826d9998
	if (ctx.cr6.gt) goto loc_826D9998;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826d9904
	if (ctx.cr6.eq) goto loc_826D9904;
	// bdz 0x826d9904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826D9904;
	// bdnz 0x826d9930
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D9930;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,161
	ctx.r3.u64 = ctx.r3.u64 | 161;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826D9904:
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r31.u32);
loc_826D9910:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826d9480
	ctx.lr = 0x826D9924;
	sub_826D9480(ctx, base);
loc_826D9924:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826D9930:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// lwz r3,148(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 148);
	// bl 0x826c6cf0
	ctx.lr = 0x826D9940;
	sub_826C6CF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d9924
	if (ctx.cr6.lt) goto loc_826D9924;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x826d9910
	if (!ctx.cr6.eq) goto loc_826D9910;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r31.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r8)
	REX_STORE_U8(ctx.r8.u32 + 32, r31.u8);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, r31.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, r31.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,32(r5)
	REX_STORE_U8(ctx.r5.u32 + 32, r31.u8);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, r31.u32);
	// b 0x826d9910
	goto loc_826D9910;
loc_826D9998:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826E02A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826E02A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrldi r29,r4,32
	r29.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826E02C0:
	// lwz r9,44(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826e02ec
	if (ctx.cr6.eq) goto loc_826E02EC;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_826E02EC:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// cmpld cr6,r30,r11
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x826e0358
	if (!ctx.cr6.lt) goto loc_826E0358;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826E031C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0358
	if (ctx.cr6.lt) goto loc_826E0358;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826dfde0
	ctx.lr = 0x826E0330;
	sub_826DFDE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0358
	if (ctx.cr6.lt) goto loc_826E0358;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// cmpld cr6,r30,r9
	ctx.cr6.compare<uint64_t>(r30.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x826e02c0
	if (ctx.cr6.lt) goto loc_826E02C0;
loc_826E0358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826E5110) {
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
	ctx.lr = 0x826E5118;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r26,0(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r24,48(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r25,40(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r29,36(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// lwz r4,32(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r27,24(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 24);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lhz r9,30(r28)
	ctx.r9.u64 = REX_LOAD_U16(r28.u32 + 30);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r26,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// stw r24,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// stw r29,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r27,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r27.u32);
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// sth r9,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// ble cr6,0x826e55c0
	if (!ctx.cr6.gt) goto loc_826E55C0;
	// rlwinm r21,r11,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r23,r5,-4
	r23.s64 = ctx.r5.s64 + -4;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// stw r23,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, r23.u32);
loc_826E5190:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// blt cr6,0x826e53a0
	if (ctx.cr6.lt) goto loc_826E53A0;
loc_826E51C8:
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r7,28(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lwz r5,24(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lhz r3,30(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// lwz r7,60(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r6,56(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r31,20(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r28,52(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r27,16(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r25,12(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r24,8(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r23,40(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lhz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lwz r22,4(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r4,48(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r21,36(r10)
	r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// lwz r5,44(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r20,0(r10)
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r19,32(r10)
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r30,26(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 26);
	// lhz r29,8(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r26,24(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r3,r3,r7
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r18,6(r11)
	r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lhz r17,22(r11)
	r17.u64 = REX_LOAD_U16(ctx.r11.u32 + 22);
	// lhz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// sth r7,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// lhz r16,20(r11)
	r16.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// lhz r15,2(r11)
	r15.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r14,18(r11)
	r14.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// std r11,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r8,r30
	ctx.r8.s64 = r30.s16;
	// mullw r7,r9,r31
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// lwz r30,120(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r31,124(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// extsh r6,r29
	ctx.r6.s64 = r29.s16;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r7,r6,r27
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(r27.s32);
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// extsh r6,r26
	ctx.r6.s64 = r26.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r4
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// extsh r31,r18
	r31.s64 = r18.s16;
	// extsh r4,r17
	ctx.r4.s64 = r17.s16;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r7,r31,r25
	ctx.r7.s64 = int64_t(r31.s32) * int64_t(r25.s32);
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r6,r16
	ctx.r6.s64 = r16.s16;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r7,r3,r24
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(r24.s32);
	// lhz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r6,r23
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(r23.s32);
	// extsh r5,r15
	ctx.r5.s64 = r15.s16;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// extsh r4,r14
	ctx.r4.s64 = r14.s16;
	// mullw r7,r5,r22
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(r22.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mullw r8,r4,r21
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r21.s32);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,104(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,128(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// ld r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r7,r6,r20
	ctx.r7.s64 = int64_t(ctx.r6.s32) * int64_t(r20.s32);
	// mullw r8,r5,r19
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(r19.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r9,r31,2
	ctx.r9.s64 = r31.s64 + 2;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r10,r29,64
	ctx.r10.s64 = r29.s64 + 64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r8,r30,-1
	ctx.r8.s64 = r30.s64 + -1;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826e51c8
	if (ctx.cr6.lt) goto loc_826E51C8;
	// lwz r23,372(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r24,136(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r25,140(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r26,148(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r27,152(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,156(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r21,108(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r22,112(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_826E53A0:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r30.s32, ctx.xer);
	// bge cr6,0x826e545c
	if (!ctx.cr6.lt) goto loc_826E545C;
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lhz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lhz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r19,6(r11)
	r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r18,4(r11)
	r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r17,2(r11)
	r17.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r16,0(r11)
	r16.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r21,4(r10)
	r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,24(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r20,20(r10)
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r15,16(r10)
	r15.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// stw r21,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r21.u32);
	// lwz r14,12(r10)
	r14.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r21,108(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r10,r5,r20
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(r20.s32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r15
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r15.s32);
	// extsh r8,r19
	ctx.r8.s64 = r19.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r8,r14
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r14.s32);
	// extsh r5,r18
	ctx.r5.s64 = r18.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r5,r3
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// extsh r9,r17
	ctx.r9.s64 = r17.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// extsh r3,r16
	ctx.r3.s64 = r16.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r10,r3,r31
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
loc_826E545C:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + r25.u64;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// sraw r10,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826e54b4
	if (!ctx.cr6.gt) goto loc_826E54B4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x826e54e4
	if (!ctx.cr6.gt) goto loc_826E54E4;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r8,r24,r9
	ctx.r8.u64 = ctx.r9.u64 - r24.u64;
loc_826E5498:
	// lhzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r7,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x826e5498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E5498;
	// b 0x826e54e4
	goto loc_826E54E4;
loc_826E54B4:
	// bge cr6,0x826e54e4
	if (!ctx.cr6.lt) goto loc_826E54E4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x826e54e4
	if (!ctx.cr6.gt) goto loc_826E54E4;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r24,r9
	ctx.r10.u64 = ctx.r9.u64 - r24.u64;
loc_826E54CC:
	// lhzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// subf r5,r7,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r7.u64;
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x826e54cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E54CC;
loc_826E54E4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x826e5518
	if (!ctx.cr6.eq) goto loc_826E5518;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826E5500;
	sub_826A1E70(ctx, base);
	// rlwinm r5,r26,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r5,r25
	ctx.r3.u64 = ctx.r5.u64 + r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826E5510;
	sub_826A1E70(ctx, base);
	// addi r4,r26,-1
	ctx.r4.s64 = r26.s64 + -1;
	// b 0x826e551c
	goto loc_826E551C;
loc_826E5518:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_826E551C:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// stwx r31,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, r31.u32);
	// ble cr6,0x826e5558
	if (!ctx.cr6.gt) goto loc_826E5558;
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lis r7,127
	ctx.r7.s64 = 8323072;
	// ori r9,r7,65535
	ctx.r9.u64 = ctx.r7.u64 | 65535;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// ble cr6,0x826e5588
	if (!ctx.cr6.gt) goto loc_826E5588;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// b 0x826e5588
	goto loc_826E5588;
loc_826E5558:
	// bge cr6,0x826e5580
	if (!ctx.cr6.lt) goto loc_826E5580;
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// bge cr6,0x826e5588
	if (!ctx.cr6.lt) goto loc_826E5588;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// b 0x826e5588
	goto loc_826E5588;
loc_826E5580:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_826E5588:
	// lhzx r9,r21,r11
	ctx.r9.u64 = REX_LOAD_U16(r21.u32 + ctx.r11.u32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// sthx r7,r21,r11
	REX_STORE_U16(r21.u32 + ctx.r11.u32, ctx.r7.u16);
	// lhzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// sthx r3,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u16);
	// stwu r31,4(r23)
	ea = 4 + r23.u32;
	REX_STORE_U32(ea, r31.u32);
	r23.u32 = ea;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// stw r23,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, r23.u32);
	// bne 0x826e5190
	if (!ctx.cr0.eq) goto loc_826E5190;
loc_826E55C0:
	// stw r4,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r4.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8271A700) {
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
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,21884(r3)
	REX_STORE_U32(ctx.r3.u32 + 21884, r30.u32);
	// stw r30,3452(r3)
	REX_STORE_U32(ctx.r3.u32 + 3452, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,3464(r3)
	REX_STORE_U32(ctx.r3.u32 + 3464, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,3460(r3)
	REX_STORE_U32(ctx.r3.u32 + 3460, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,21768(r3)
	REX_STORE_U32(ctx.r3.u32 + 21768, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,22092(r3)
	REX_STORE_U32(ctx.r3.u32 + 22092, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,21900(r3)
	REX_STORE_U32(ctx.r3.u32 + 21900, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,3472(r3)
	REX_STORE_U32(ctx.r3.u32 + 3472, r30.u32);
	// stw r10,21800(r3)
	REX_STORE_U32(ctx.r3.u32 + 21800, ctx.r10.u32);
	// stw r30,404(r3)
	REX_STORE_U32(ctx.r3.u32 + 404, r30.u32);
	// stw r30,21888(r3)
	REX_STORE_U32(ctx.r3.u32 + 21888, r30.u32);
	// stw r30,21896(r3)
	REX_STORE_U32(ctx.r3.u32 + 21896, r30.u32);
	// stw r30,21892(r3)
	REX_STORE_U32(ctx.r3.u32 + 21892, r30.u32);
	// stw r30,3988(r3)
	REX_STORE_U32(ctx.r3.u32 + 3988, r30.u32);
	// stw r30,22008(r3)
	REX_STORE_U32(ctx.r3.u32 + 22008, r30.u32);
	// stw r30,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, r30.u32);
	// stw r30,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, r30.u32);
	// stw r30,3696(r3)
	REX_STORE_U32(ctx.r3.u32 + 3696, r30.u32);
	// stw r30,3692(r3)
	REX_STORE_U32(ctx.r3.u32 + 3692, r30.u32);
	// bl 0x82708030
	ctx.lr = 0x8271A788;
	sub_82708030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a7d4
	if (!ctx.cr6.eq) goto loc_8271A7D4;
	// lwz r10,22284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22284);
	// lwz r11,22280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22280);
	// lwz r9,22104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22104);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r30,3700(r31)
	REX_STORE_U32(r31.u32 + 3700, r30.u32);
	// stw r30,22164(r31)
	REX_STORE_U32(r31.u32 + 22164, r30.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8271a7d0
	if (ctx.cr6.gt) goto loc_8271A7D0;
	// lwz r9,22120(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22120);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8271a7d0
	if (ctx.cr6.gt) goto loc_8271A7D0;
	// lwz r11,22124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22124);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8271a7d0
	if (ctx.cr6.gt) goto loc_8271A7D0;
	// stw r30,22108(r31)
	REX_STORE_U32(r31.u32 + 22108, r30.u32);
	// b 0x8271a7d4
	goto loc_8271A7D4;
loc_8271A7D0:
	// li r3,14
	ctx.r3.s64 = 14;
loc_8271A7D4:
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

DEFINE_REX_FUNC(sub_827214C8) {
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
	ctx.lr = 0x827214D0;
	// rlwinm r31,r7,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r4,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r7,r31
	r29.u64 = ctx.r7.u64 + r31.u64;
	// add r30,r8,r9
	r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r24,r6,-2
	r24.s64 = ctx.r6.s64 + -2;
	// mulli r30,r30,14
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(14));
	// lbzx r31,r11,r4
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r29,r29,r4
	r29.u64 = REX_LOAD_U8(r29.u32 + ctx.r4.u32);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// add r30,r29,r9
	r30.u64 = r29.u64 + ctx.r9.u64;
	// add r9,r31,r8
	ctx.r9.u64 = r31.u64 + ctx.r8.u64;
	// mulli r31,r30,11
	r31.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(11));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - r31.u64;
	// addi r8,r9,63
	ctx.r8.s64 = ctx.r9.s64 + 63;
	// srawi r9,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 7;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ble cr6,0x827215b4
	if (!ctx.cr6.gt) goto loc_827215B4;
	// addi r9,r24,-3
	ctx.r9.s64 = r24.s64 + -3;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r31,r7,r8
	r31.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r31
	r30.u64 = r31.u64 - ctx.r11.u64;
	// subf r31,r11,r9
	r31.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r30,r30,r4
	r30.u64 = r30.u64 + ctx.r4.u64;
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
loc_82721560:
	// lbzx r8,r10,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// lbz r28,0(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r25,r9,r7
	r25.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// add r27,r8,r28
	r27.u64 = ctx.r8.u64 + r28.u64;
	// lbzux r8,r31,r11
	ea = r31.u32 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// lbzux r28,r30,r11
	ea = r30.u32 + ctx.r11.u32;
	r28.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// mulli r26,r27,14
	r26.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(14));
	// lbz r27,0(r9)
	r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r26,r26,r25
	r26.u64 = r26.u64 + r25.u64;
	// add r27,r28,r27
	r27.u64 = r28.u64 + r27.u64;
	// add r8,r26,r8
	ctx.r8.u64 = r26.u64 + ctx.r8.u64;
	// mulli r27,r27,11
	r27.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(11));
	// rlwinm r28,r8,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// subf r8,r27,r8
	ctx.r8.u64 = ctx.r8.u64 - r27.u64;
	// addi r8,r8,63
	ctx.r8.s64 = ctx.r8.s64 + 63;
	// srawi r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// stwu r8,8(r29)
	ea = 8 + r29.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r29.u32 = ea;
	// bdnz 0x82721560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82721560;
loc_827215B4:
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// mullw r9,r24,r7
	ctx.r9.s64 = int64_t(r24.s32) * int64_t(ctx.r7.s32);
	// lbzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// mullw r8,r10,r7
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// lbzx r10,r8,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// addi r8,r6,-3
	ctx.r8.s64 = ctx.r6.s64 + -3;
	// addi r31,r6,-4
	r31.s64 = ctx.r6.s64 + -4;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lbzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// mullw r31,r31,r7
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// lbzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + ctx.r4.u32);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mulli r31,r30,14
	r31.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(14));
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mulli r8,r4,11
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(11));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r9,r10,63
	ctx.r9.s64 = ctx.r10.s64 + 63;
	// srawi r8,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 7;
	// stwx r8,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r8.u32);
	// ble cr6,0x82721664
	if (!ctx.cr6.gt) goto loc_82721664;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82721638:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// ble cr6,0x82721650
	if (!ctx.cr6.gt) goto loc_82721650;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
loc_82721650:
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stbx r8,r10,r7
	REX_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x82721638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82721638;
loc_82721664:
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8272B6B8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8272b6cc
	if (!ctx.cr6.eq) goto loc_8272B6CC;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8272B6CC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8272b6d8
	if (!ctx.cr6.lt) goto loc_8272B6D8;
	// neg r4,r4
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r4.u64);
loc_8272B6D8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8272b6e4
	if (!ctx.cr6.lt) goto loc_8272B6E4;
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
loc_8272B6E4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x8272b6f0
	if (!ctx.cr6.lt) goto loc_8272B6F0;
	// neg r6,r6
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r6.u64);
loc_8272B6F0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8272b6fc
	if (!ctx.cr6.lt) goto loc_8272B6FC;
	// neg r7,r7
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r7.u64);
loc_8272B6FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// stw r5,15356(r11)
	REX_STORE_U32(ctx.r11.u32 + 15356, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,15360(r11)
	REX_STORE_U32(ctx.r11.u32 + 15360, ctx.r6.u32);
	// stw r7,15364(r11)
	REX_STORE_U32(ctx.r11.u32 + 15364, ctx.r7.u32);
	// stw r10,15368(r11)
	REX_STORE_U32(ctx.r11.u32 + 15368, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8272DD60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8272DD68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x8272e2a4
	if (!ctx.cr6.gt) goto loc_8272E2A4;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x8272e2a4
	if (!ctx.cr6.gt) goto loc_8272E2A4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r8.u64);
	// lfd f13,-64(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfs f0,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f0,3824(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fadds f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fsubs f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// bgt cr6,0x8272ddcc
	if (ctx.cr6.gt) goto loc_8272DDCC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8272DDCC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfd f0,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f0.u64);
	// lwz r5,-60(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfd f0,32424(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// lfs f9,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f9.f64 = double(temp.f32);
	// blt cr6,0x8272de4c
	if (ctx.cr6.lt) goto loc_8272DE4C;
	// fadds f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f7.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
loc_8272DE10:
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r9,-4(r7)
	REX_STORE_U32(ctx.r7.u32 + -4, ctx.r9.u32);
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// blt cr6,0x8272de10
	if (ctx.cr6.lt) goto loc_8272DE10;
loc_8272DE4C:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8272de88
	if (!ctx.cr6.lt) goto loc_8272DE88;
	// fadds f12,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f7.u64);
	// lwz r9,-60(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
loc_8272DE78:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272de78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272DE78;
loc_8272DE88:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
	// lfd f12,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bgt cr6,0x8272deac
	if (ctx.cr6.gt) goto loc_8272DEAC;
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
loc_8272DEAC:
	// fsubs f8,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// li r4,4
	ctx.r4.s64 = 4;
	// fsubs f7,f2,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// li r5,-4
	ctx.r5.s64 = -4;
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f12.u64);
	// lwz r31,-60(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// fdivs f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// bge cr6,0x8272e010
	if (!ctx.cr6.lt) goto loc_8272E010;
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8272dfc4
	if (ctx.cr6.lt) goto loc_8272DFC4;
	// addi r6,r31,-3
	ctx.r6.s64 = r31.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8272DEEC:
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r29,r10
	r29.s64 = ctx.r10.s32;
	// std r8,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// lfd f6,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// std r8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r30.u64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r29,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, r29.u64);
	// lfd f3,-48(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f8,-64(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f8,-40(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fcfid f7,f3
	ctx.f7.f64 = double(ctx.f3.s64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fsubs f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fsubs f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fsubs f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fadd f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fmadds f7,f5,f12,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f8,f6,f12,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f6,f4,f12,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f1.f64)));
	// fctiwz f5,f3
	ctx.f5.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f5,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f5.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// fadd f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 + ctx.f0.f64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fadd f3,f7,f0
	ctx.f3.f64 = ctx.f7.f64 + ctx.f0.f64;
	// fadd f8,f6,f0
	ctx.f8.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f7,f4
	ctx.f7.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f7,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f7.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// fctiwz f6,f3
	ctx.f6.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f6,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.f6.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f5,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f5.u32);
	// blt cr6,0x8272deec
	if (ctx.cr6.lt) goto loc_8272DEEC;
loc_8272DFC4:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272e010
	if (!ctx.cr6.lt) goto loc_8272E010;
	// subf r9,r11,r31
	ctx.r9.u64 = r31.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272DFD8:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f8,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmadds f4,f5,f12,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f1.f64)));
	// fadd f3,f4,f0
	ctx.f3.f64 = ctx.f4.f64 + ctx.f0.f64;
	// fctiwz f8,f3
	ctx.f8.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfiwx f8,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272dfd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272DFD8;
loc_8272E010:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f13,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x8272e034
	if (ctx.cr6.gt) goto loc_8272E034;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
loc_8272E034:
	// fctiwz f8,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f8.u64);
	// fsubs f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsubs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fdivs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// lwz r31,-36(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272e190
	if (!ctx.cr6.lt) goto loc_8272E190;
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8272e144
	if (ctx.cr6.lt) goto loc_8272E144;
	// addi r6,r31,-3
	ctx.r6.s64 = r31.s64 + -3;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8272E06C:
	// extsw r30,r11
	r30.s64 = ctx.r11.s32;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// std r30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r30.u64);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// std r8,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// std r30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, r30.u64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lfd f6,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f12,-40(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lfd f10,-48(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f8,-56(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f12,f10
	ctx.f12.f64 = double(ctx.f10.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// frsp f10,f5
	ctx.f10.f64 = double(float(ctx.f5.f64));
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fsubs f4,f8,f2
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fsubs f5,f10,f2
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fsubs f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmadds f8,f4,f13,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f10,f5,f13,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f6,f12,f13,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f3,f7,f13,f11
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f11.f64)));
	// fadd f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 + ctx.f0.f64;
	// fadd f5,f10,f0
	ctx.f5.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fadd f12,f6,f0
	ctx.f12.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fadd f7,f3,f0
	ctx.f7.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fctiwz f8,f4
	ctx.f8.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f8,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f8.u32);
	// fctiwz f10,f5
	ctx.f10.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// fctiwz f3,f7
	ctx.f3.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// fctiwz f7,f12
	ctx.f7.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfiwx f10,r7,r4
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.f10.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stfiwx f3,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.f3.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stfiwx f7,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f7.u32);
	// blt cr6,0x8272e06c
	if (ctx.cr6.lt) goto loc_8272E06C;
loc_8272E144:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x8272e190
	if (!ctx.cr6.lt) goto loc_8272E190;
	// subf r9,r11,r31
	ctx.r9.u64 = r31.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272E158:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r9,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r9.u64);
	// lfd f12,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fsubs f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fmadds f6,f7,f13,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f11.f64)));
	// fadd f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 + ctx.f0.f64;
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.f4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8272e158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272E158;
loc_8272E190:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8272e1d0
	if (!ctx.cr6.lt) goto loc_8272E1D0;
	// fadds f13,f1,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f11.u64);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
loc_8272E1B4:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272e1b4
	if (ctx.cr6.lt) goto loc_8272E1B4;
loc_8272E1D0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8272e20c
	if (!ctx.cr6.gt) goto loc_8272E20C;
	// fadd f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 + ctx.f0.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f12.u64);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
loc_8272E1F0:
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8272e1f0
	if (ctx.cr6.lt) goto loc_8272E1F0;
loc_8272E20C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8272e334
	if (!ctx.cr6.gt) goto loc_8272E334;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,3804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3804);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
loc_8272E228:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r6.u64);
	// lfd f12,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fadd f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 + ctx.f0.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.f7.u32);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f6,-48(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fadd f2,f3,f0
	ctx.f2.f64 = ctx.f3.f64 + ctx.f0.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8272e228
	if (ctx.cr6.lt) goto loc_8272E228;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d0c
	return;
loc_8272E2A4:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8272e334
	if (!ctx.cr6.gt) goto loc_8272E334;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,3704(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfd f0,32424(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32424);
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + ctx.f0.f64;
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadd f8,f11,f0
	ctx.f8.f64 = ctx.f11.f64 + ctx.f0.f64;
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f9.u64);
	// fadd f7,f10,f0
	ctx.f7.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f6.u64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f5.u64);
	// lwz r8,-36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// lwz r9,-52(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r7,-44(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
loc_8272E300:
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stwx r8,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,4(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8272e300
	if (ctx.cr6.lt) goto loc_8272E300;
loc_8272E334:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82757EC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82757ED8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82757ed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757ED8;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82757EFC:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x82757efc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757EFC;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82757F20:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x82757f20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757F20;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82757F44:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x82757f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757F44;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82757F68:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x82757f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757F68;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82757F8C:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x82757f8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757F8C;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82757FB0:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x82757fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757FB0;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82757FD4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82757fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82757FD4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8275D810) {
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
	ctx.lr = 0x8275D818;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r27,r10,0,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8275d844
	if (ctx.cr6.eq) goto loc_8275D844;
	// lwz r10,15652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15652);
	// bl 0x8275bd40
	ctx.lr = 0x8275D83C;
	sub_8275BD40(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826a1d04
	return;
loc_8275D844:
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8275bd40
	ctx.lr = 0x8275D854;
	sub_8275BD40(ctx, base);
	// lwz r30,724(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 724);
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8275d88c
	if (!ctx.cr6.gt) goto loc_8275D88C;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_8275D868:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8275D878;
	sub_826A1E70(ctx, base);
	// lwz r11,15652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bne 0x8275d868
	if (!ctx.cr0.eq) goto loc_8275D868;
loc_8275D88C:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82760FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82760FD8;
	// rlwinm r30,r6,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r29,r7,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r6,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// srawi r10,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	ctx.r10.s64 = r31.s32 >> 2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r7,140(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x8276102c
	if (ctx.cr6.eq) goto loc_8276102C;
	// li r10,-17
	ctx.r10.s64 = -17;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82761030
	goto loc_82761030;
loc_8276102C:
	// li r10,-18
	ctx.r10.s64 = -18;
loc_82761030:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82761040
	if (!ctx.cr6.lt) goto loc_82761040;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// b 0x8276104c
	goto loc_8276104C;
loc_82761040:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82761050
	if (!ctx.cr6.gt) goto loc_82761050;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8276104C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82761050:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82761064
	if (!ctx.cr6.lt) goto loc_82761064;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82761080
	goto loc_82761080;
loc_82761064:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82761078
	if (!ctx.cr6.gt) goto loc_82761078;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82761080
	goto loc_82761080;
loc_82761078:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827610a8
	if (ctx.cr6.eq) goto loc_827610A8;
loc_82761080:
	// subf r11,r30,r8
	ctx.r11.u64 = ctx.r8.u64 - r30.u64;
	// subf r10,r29,r9
	ctx.r10.u64 = ctx.r9.u64 - r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r31,30
	ctx.r8.u64 = r31.u32 & 0x3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r6,30
	ctx.r10.u64 = ctx.r6.u32 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_827610A8:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82767740) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82767748;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827677a4
	if (ctx.cr6.eq) goto loc_827677A4;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82767778
	if (ctx.cr6.eq) goto loc_82767778;
loc_82767764:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8271b1a0
	ctx.lr = 0x8276776C;
	sub_8271B1A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82767764
	if (!ctx.cr6.eq) goto loc_82767764;
loc_82767778:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827677a0
	if (ctx.cr6.eq) goto loc_827677A0;
loc_8276778C:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8271b1a0
	ctx.lr = 0x82767794;
	sub_8271B1A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8276778c
	if (!ctx.cr6.eq) goto loc_8276778C;
loc_827677A0:
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_827677A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82769A60) {
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
	ctx.lr = 0x82769A68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82769ab0
	if (!ctx.cr6.gt) goto loc_82769AB0;
	// addi r9,r6,4
	ctx.r9.s64 = ctx.r6.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82769A94:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82769aa8
	if (!ctx.cr6.lt) goto loc_82769AA8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82769AA8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82769a94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82769A94;
loc_82769AB0:
	// clrlwi r31,r10,24
	r31.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82769ac4
	if (!ctx.cr6.gt) goto loc_82769AC4;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
loc_82769AC4:
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x82769ad4
	if (ctx.cr6.lt) goto loc_82769AD4;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
loc_82769AD4:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r5,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r5.u32);
	// stb r31,8(r27)
	REX_STORE_U8(r27.u32 + 8, r31.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82769af4
	if (ctx.cr6.eq) goto loc_82769AF4;
	// bl 0x8271b1a0
	ctx.lr = 0x82769AEC;
	sub_8271B1A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82769AF4:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// clrlwi r31,r31,24
	r31.u64 = r31.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82769b30
	if (ctx.cr6.eq) goto loc_82769B30;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r10,r10,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFE;
	// slw r9,r9,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r31.u8 & 0x3F));
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r7.u32);
	// b 0x82769b54
	goto loc_82769B54;
loc_82769B30:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r11,r11,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
	// slw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8271b190
	ctx.lr = 0x82769B50;
	sub_8271B190(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82769B54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82769b80
	if (ctx.cr6.eq) goto loc_82769B80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82769898
	ctx.lr = 0x82769B70;
	sub_82769898(ctx, base);
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82769B80:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8276F0D8) {
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
	ctx.lr = 0x8276F0E0;
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
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8276f12c
	if (!ctx.cr6.gt) goto loc_8276F12C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8276f11c
	if (!ctx.cr6.eq) goto loc_8276F11C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8276f12c
	if (ctx.cr6.eq) goto loc_8276F12C;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x8276f12c
	if (ctx.cr6.eq) goto loc_8276F12C;
loc_8276F11C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276eae0
	ctx.lr = 0x8276F12C;
	sub_8276EAE0(ctx, base);
loc_8276F12C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8276f15c
	if (!ctx.cr6.gt) goto loc_8276F15C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8276f14c
	if (!ctx.cr6.eq) goto loc_8276F14C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8276f15c
	if (ctx.cr6.eq) goto loc_8276F15C;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(r28.s32, 8, ctx.xer);
	// beq cr6,0x8276f15c
	if (ctx.cr6.eq) goto loc_8276F15C;
loc_8276F14C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276ee28
	ctx.lr = 0x8276F15C;
	sub_8276EE28(ctx, base);
loc_8276F15C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_827702E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x827702E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82770340
	if (!ctx.cr6.eq) goto loc_82770340;
	// bl 0x8276fb88
	ctx.lr = 0x82770314;
	sub_8276FB88(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8277032c
	if (ctx.cr6.eq) goto loc_8277032C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8277032C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82770340:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82770440
	if (ctx.cr6.lt) goto loc_82770440;
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
	// bge cr6,0x82770430
	if (!ctx.cr6.lt) goto loc_82770430;
loc_82770390:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827703c4
	if (ctx.cr6.lt) goto loc_827703C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x827703AC;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82770390
	if (ctx.cr6.eq) goto loc_82770390;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_827703C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r4,r10,8,55
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
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
loc_82770430:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82770440:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82770448;
	sub_82725F80(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_82770450:
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
	ctx.lr = 0x82770468;
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
	// blt cr6,0x82770450
	if (ctx.cr6.lt) goto loc_82770450;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827828D0) {
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
	ctx.lr = 0x827828D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,-29640
	ctx.r11.s64 = ctx.r11.s64 + -29640;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r7,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r20,r30,r10
	r20.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// add r28,r9,r11
	r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r23,r31,r11
	r23.u64 = r31.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82782928
	if (!ctx.cr6.eq) goto loc_82782928;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r27,4
	r27.s64 = 4;
	// beq cr6,0x82782918
	if (ctx.cr6.eq) goto loc_82782918;
	// li r27,6
	r27.s64 = 6;
loc_82782918:
	// li r25,0
	r25.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// addi r21,r20,1
	r21.s64 = r20.s64 + 1;
	// b 0x82782990
	goto loc_82782990;
loc_82782928:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8278295c
	if (!ctx.cr6.eq) goto loc_8278295C;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// li r25,4
	r25.s64 = 4;
	// beq cr6,0x82782944
	if (ctx.cr6.eq) goto loc_82782944;
	// li r25,6
	r25.s64 = 6;
loc_82782944:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// li r26,0
	r26.s64 = 0;
	// slw r9,r30,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// subf r24,r10,r9
	r24.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r21,r20,3
	r21.s64 = r20.s64 + 3;
	// b 0x827829a0
	goto loc_827829A0;
loc_8278295C:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x8278296c
	if (ctx.cr6.eq) goto loc_8278296C;
	// li r9,6
	ctx.r9.s64 = 6;
loc_8278296C:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x8278297c
	if (ctx.cr6.eq) goto loc_8278297C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_8278297C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r25,7
	r25.s64 = 7;
	// addi r27,r11,-7
	r27.s64 = ctx.r11.s64 + -7;
	// subfic r24,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	r24.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// addi r21,r20,3
	r21.s64 = r20.s64 + 3;
loc_82782990:
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r26,r11,-1
	r26.s64 = ctx.r11.s64 + -1;
loc_827829A0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82782adc
	if (!ctx.cr6.gt) goto loc_82782ADC;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mr r19,r20
	r19.u64 = r20.u64;
	// addi r22,r11,-1
	r22.s64 = ctx.r11.s64 + -1;
loc_827829B4:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x82782a34
	if (!ctx.cr6.gt) goto loc_82782A34;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,6(r23)
	ctx.r9.u64 = REX_LOAD_U16(r23.u32 + 6);
	// lhz r8,4(r23)
	ctx.r8.u64 = REX_LOAD_U16(r23.u32 + 4);
	// addi r10,r1,-210
	ctx.r10.s64 = ctx.r1.s64 + -210;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 0);
	// lhz r30,2(r23)
	r30.u64 = REX_LOAD_U16(r23.u32 + 2);
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r31,r8
	r31.s64 = ctx.r8.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_827829F4:
	// lbzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// lbzx r18,r11,r4
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r17,0(r11)
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r18,r30
	ctx.r8.s64 = int64_t(r18.s32) * int64_t(r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r17,r29
	ctx.r8.s64 = int64_t(r17.s32) * int64_t(r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// sraw r8,r9,r27
	temp.u32 = r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x827829f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827829F4;
loc_82782A34:
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// addi r11,r1,-204
	ctx.r11.s64 = ctx.r1.s64 + -204;
loc_82782A40:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r7,6(r28)
	ctx.r7.u64 = REX_LOAD_U16(r28.u32 + 6);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lhz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U16(r28.u32 + 4);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// lhz r7,-2(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r31,2(r28)
	r31.u64 = REX_LOAD_U16(r28.u32 + 2);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lhz r30,-4(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r29,0(r28)
	r29.u64 = REX_LOAD_U16(r28.u32 + 0);
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r6,r31
	ctx.r6.s64 = r31.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r7,r6
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// extsh r3,r30
	ctx.r3.s64 = r30.s16;
	// extsh r7,r29
	ctx.r7.s64 = r29.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r3,r7
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + r24.u64;
	// sraw. r10,r6,r25
	temp.u32 = r25.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82782ab0
	if (!ctx.cr0.lt) goto loc_82782AB0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82782abc
	goto loc_82782ABC;
loc_82782AB0:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82782abc
	if (!ctx.cr6.gt) goto loc_82782ABC;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82782ABC:
	// stbx r10,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82782a40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82782A40;
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r22,r22,r4
	r22.u64 = r22.u64 + ctx.r4.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// bne 0x827829b4
	if (!ctx.cr0.eq) goto loc_827829B4;
loc_82782ADC:
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_8278AFF8) {
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
	ctx.lr = 0x8278B000;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r5,r11,13392
	ctx.r5.u64 = ctx.r11.u64 | 13392;
	// lis r8,21849
	ctx.r8.s64 = 1431896064;
	// lis r7,22870
	ctx.r7.s64 = 1498808320;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lis r4,12593
	ctx.r4.s64 = 825294848;
	// lis r31,22101
	r31.s64 = 1448411136;
	// lis r30,12338
	r30.s64 = 808583168;
	// ori r9,r10,21849
	ctx.r9.u64 = ctx.r10.u64 | 21849;
	// ori r8,r8,22105
	ctx.r8.u64 = ctx.r8.u64 | 22105;
	// ori r10,r7,22869
	ctx.r10.u64 = ctx.r7.u64 | 22869;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r27,r4,13392
	r27.u64 = ctx.r4.u64 | 13392;
	// ori r31,r31,22857
	r31.u64 = r31.u64 | 22857;
	// li r29,1
	r29.s64 = 1;
	// ori r30,r30,13385
	r30.u64 = r30.u64 | 13385;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x8278b088
	if (ctx.cr6.gt) goto loc_8278B088;
	// beq cr6,0x8278b080
	if (ctx.cr6.eq) goto loc_8278B080;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x8278b078
	if (ctx.cr6.gt) goto loc_8278B078;
	// beq cr6,0x8278b080
	if (ctx.cr6.eq) goto loc_8278B080;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278b0b0
	if (ctx.cr6.eq) goto loc_8278B0B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8278b0b0
	if (ctx.cr6.eq) goto loc_8278B0B0;
	// b 0x8278b0b4
	goto loc_8278B0B4;
loc_8278B078:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x8278b0b4
	if (!ctx.cr6.eq) goto loc_8278B0B4;
loc_8278B080:
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// b 0x8278b0b4
	goto loc_8278B0B4;
loc_8278B088:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bgt cr6,0x8278b0a8
	if (ctx.cr6.gt) goto loc_8278B0A8;
	// beq cr6,0x8278b080
	if (ctx.cr6.eq) goto loc_8278B080;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8278b0b0
	if (ctx.cr6.eq) goto loc_8278B0B0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8278b0b0
	if (ctx.cr6.eq) goto loc_8278B0B0;
	// b 0x8278b0b4
	goto loc_8278B0B4;
loc_8278B0A8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8278b0b4
	if (!ctx.cr6.eq) goto loc_8278B0B4;
loc_8278B0B0:
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
loc_8278B0B4:
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r7,r11,22105
	ctx.r7.u64 = ctx.r11.u64 | 22105;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x8278b108
	if (ctx.cr6.gt) goto loc_8278B108;
	// beq cr6,0x8278b100
	if (ctx.cr6.eq) goto loc_8278B100;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x8278b0f0
	if (ctx.cr6.gt) goto loc_8278B0F0;
	// beq cr6,0x8278b100
	if (ctx.cr6.eq) goto loc_8278B100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278b130
	if (ctx.cr6.eq) goto loc_8278B130;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8278b130
	if (ctx.cr6.eq) goto loc_8278B130;
	// b 0x8278b134
	goto loc_8278B134;
loc_8278B0F0:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x8278b100
	if (ctx.cr6.eq) goto loc_8278B100;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8278b134
	if (!ctx.cr6.eq) goto loc_8278B134;
loc_8278B100:
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// b 0x8278b134
	goto loc_8278B134;
loc_8278B108:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bgt cr6,0x8278b128
	if (ctx.cr6.gt) goto loc_8278B128;
	// beq cr6,0x8278b100
	if (ctx.cr6.eq) goto loc_8278B100;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8278b130
	if (ctx.cr6.eq) goto loc_8278B130;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8278b130
	if (ctx.cr6.eq) goto loc_8278B130;
	// b 0x8278b134
	goto loc_8278B134;
loc_8278B128:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8278b134
	if (!ctx.cr6.eq) goto loc_8278B134;
loc_8278B130:
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
loc_8278B134:
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278b154
	if (ctx.cr6.eq) goto loc_8278B154;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8278b154
	if (ctx.cr6.eq) goto loc_8278B154;
	// stw r29,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, r29.u32);
	// b 0x8278b16c
	goto loc_8278B16C;
loc_8278B154:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x8278b168
	if (ctx.cr6.gt) goto loc_8278B168;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8278B168:
	// stw r11,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r11.u32);
loc_8278B16C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,14516(r3)
	REX_STORE_U32(ctx.r3.u32 + 14516, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r6,14520(r3)
	REX_STORE_U32(ctx.r3.u32 + 14520, ctx.r6.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8278b1b4
	if (ctx.cr6.gt) goto loc_8278B1B4;
	// beq cr6,0x8278b1c4
	if (ctx.cr6.eq) goto loc_8278B1C4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8278b1c4
	if (ctx.cr6.eq) goto loc_8278B1C4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x8278b1d4
	if (!ctx.cr6.eq) goto loc_8278B1D4;
	// lwz r11,14516(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// b 0x8278b1cc
	goto loc_8278B1CC;
loc_8278B1B4:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8278b1c4
	if (ctx.cr6.eq) goto loc_8278B1C4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8278b1d4
	if (!ctx.cr6.eq) goto loc_8278B1D4;
loc_8278B1C4:
	// lwz r11,14516(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
loc_8278B1CC:
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14524(r3)
	REX_STORE_U32(ctx.r3.u32 + 14524, ctx.r9.u32);
loc_8278B1D4:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8278b1f0
	if (ctx.cr6.eq) goto loc_8278B1F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8278b1f0
	if (ctx.cr6.eq) goto loc_8278B1F0;
	// stw r29,14476(r3)
	REX_STORE_U32(ctx.r3.u32 + 14476, r29.u32);
	// b 0x8278b208
	goto loc_8278B208;
loc_8278B1F0:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x8278b204
	if (ctx.cr6.gt) goto loc_8278B204;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8278B204:
	// stw r11,14476(r3)
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r11.u32);
loc_8278B208:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,14480(r3)
	REX_STORE_U32(ctx.r3.u32 + 14480, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r6,14484(r3)
	REX_STORE_U32(ctx.r3.u32 + 14484, ctx.r6.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8278b250
	if (ctx.cr6.gt) goto loc_8278B250;
	// beq cr6,0x8278b260
	if (ctx.cr6.eq) goto loc_8278B260;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8278b260
	if (ctx.cr6.eq) goto loc_8278B260;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x8278b270
	if (!ctx.cr6.eq) goto loc_8278B270;
	// lwz r11,14480(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14480);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// b 0x8278b268
	goto loc_8278B268;
loc_8278B250:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8278b260
	if (ctx.cr6.eq) goto loc_8278B260;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8278b270
	if (!ctx.cr6.eq) goto loc_8278B270;
loc_8278B260:
	// lwz r11,14480(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14480);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
loc_8278B268:
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14488(r3)
	REX_STORE_U32(ctx.r3.u32 + 14488, ctx.r9.u32);
loc_8278B270:
	// lwz r11,14600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x8278b284
	if (!ctx.cr6.eq) goto loc_8278B284;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_8278B284:
	// lwz r11,14596(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne cr6,0x8278b298
	if (!ctx.cr6.eq) goto loc_8278B298;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_8278B298:
	// lwz r11,14592(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8278b2a8
	if (!ctx.cr6.eq) goto loc_8278B2A8;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
loc_8278B2A8:
	// lwz r4,14588(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 14588);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8278b2b8
	if (!ctx.cr6.eq) goto loc_8278B2B8;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_8278B2B8:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82789d60
	ctx.lr = 0x8278B2C0;
	sub_82789D60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827AEC08) {
	REX_FUNC_PROLOGUE();
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
	PPCVRegister v69{};
	uint32_t ea{};
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx v5,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,16
	ctx.r6.s64 = 16;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,48
	ctx.r8.s64 = 48;
	// vspltish v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v31,3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x3)));
	// vor128 v16,v69,v69
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_load_si128((simde__m128i*)v69.u8));
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// li r10,64
	ctx.r10.s64 = 64;
	// lvx v7,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltish v13,5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x5)));
	// vaddshs v28,v5,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx v6,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v8,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v29,v5,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vaddshs v30,v6,v8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_set1_epi16(short(0x1)));
	// vslh v3,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v26,2
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v1,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v27,3
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_set1_epi16(short(0x3)));
	// vslh v2,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v17,8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v9,v30,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v21,6
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_set1_epi16(short(0x6)));
	// vslh v30,v30,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v24,0
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_set1_epi16(short(0x0)));
	// vaddshs v1,v1,v28
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// li r11,80
	ctx.r11.s64 = 80;
	// vslh v28,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r12,96
	ctx.r12.s64 = 96;
	// vaddshs v2,v2,v29
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// li r5,112
	ctx.r5.s64 = 112;
	// vaddshs v9,v9,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vslh v4,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v3,v3,v28
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v1,v1,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v2,v2,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubuhm v4,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v3,v9,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v11,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v10,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v13,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubuhm v12,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v11,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v13,v13,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v28,v10,v11
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglh v29,v10,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghh v30,v12,v13
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglh v31,v12,v13
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrghw v1,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrglw v3,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vmrghw v2,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vslh v29,v17,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglw v4,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vsldoi v5,v1,v1,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 8));
	// vslh v18,v1,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v6,v3,v3,8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 8));
	// vslh v1,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v7,v2,v2,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 8));
	// vslh v2,v2,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v28,4
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_set1_epi16(short(0x4)));
	// vsldoi v8,v4,v4,8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 8));
	// vaddshs v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vslh v10,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vslh v9,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v6,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v6,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubuhm v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v18,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v5,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v11,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v5,v5,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v11,v11,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vaddshs v5,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v18,v7,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v17,v18
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vslh v19,v8,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v6,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v9,v17
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v9,v12,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v17,v7,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v20,v8,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v17,v17,v7
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v19,v8,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v7,v3,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v23,v12,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v17,v9,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubuhm v19,v9,v19
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v2,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v5,v5,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vaddshs v7,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v17,v4,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v2,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v22,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v5,v5,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubuhm v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsubuhm v2,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v10,v10,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vaddshs v6,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsubuhm v2,v2,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vaddshs v6,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsubuhm v2,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v11,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v24,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v7,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vperm v24,v24,v24,v16
	simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v25,v7,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubuhm v30,v7,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v25,v25,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v31,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v28,v28,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vperm v25,v25,v25,v16
	simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vsrah v30,v30,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm v31,v31,v31,v16
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vsrah v29,v29,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm v27,v27,v27,v16
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vperm v28,v28,v28,v16
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vperm v30,v30,v30,v16
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vperm v26,v26,v26,v16
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vperm v29,v29,v29,v16
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx v25,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v25,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827CAB48) {
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
	ctx.lr = 0x827CAB50;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,22492(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22492);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r6,136(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// ori r7,r11,39772
	ctx.r7.u64 = ctx.r11.u64 | 39772;
	// lhz r9,52(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lhz r5,50(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rlwinm r14,r6,4,0,27
	r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r3,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r27,r5,31,1,31
	r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,28(r25)
	REX_STORE_U32(r25.u32 + 28, ctx.r10.u32);
	// rlwinm r26,r9,31,1,31
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,22504(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 22504);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r11,32(r25)
	REX_STORE_U32(r25.u32 + 32, ctx.r11.u32);
	// srawi r4,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	ctx.r4.s64 = r14.s32 >> 1;
	// lwz r7,3752(r22)
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + 3752);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lwz r8,3744(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 3744);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r5,33(r28)
	ctx.r5.u64 = REX_LOAD_U8(r28.u32 + 33);
	// lwz r10,224(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 224);
	// lwz r9,3748(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 3748);
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,220(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 220);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r23,268(r22)
	r23.u64 = REX_LOAD_U32(r22.u32 + 268);
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r14.u32);
	// rlwinm r9,r11,16,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r5,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// ble cr6,0x827cb330
	if (!ctx.cr6.gt) goto loc_827CB330;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lis r18,-32106
	r18.s64 = -2104098816;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r17,-32106
	r17.s64 = -2104098816;
	// li r20,255
	r20.s64 = 255;
loc_827CAC18:
	// li r15,0
	r15.s64 = 0;
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,100(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r16,r15
	r16.u64 = r15.u64;
	// ble cr6,0x827cb2f0
	if (!ctx.cr6.gt) goto loc_827CB2F0;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r15,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r15.u32);
	// subf r19,r24,r11
	r19.u64 = ctx.r11.u64 - r24.u64;
loc_827CAC3C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827cb2bc
	if (!ctx.cr6.eq) goto loc_827CB2BC;
	// cmplw cr6,r16,r7
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x827cb2bc
	if (!ctx.cr6.eq) goto loc_827CB2BC;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r28,556
	r29.s64 = r28.s64 + 556;
loc_827CAC5C:
	// srawi r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	// lwz r9,28(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwzu r10,4(r29)
	ea = 4 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// li r8,-128
	ctx.r8.s64 = -128;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addi r3,r9,-128
	ctx.r3.s64 = ctx.r9.s64 + -128;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r25.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// dcbt r8,r3
	// stw r3,28(r25)
	REX_STORE_U32(r25.u32 + 28, ctx.r3.u32);
	// addi r5,r11,45
	ctx.r5.s64 = ctx.r11.s64 + 45;
	// lwz r11,392(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 392);
	// lwz r4,1384(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 1384);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,29980(r18)
	ctx.r6.u64 = REX_LOAD_U32(r18.u32 + 29980);
	// lwz r9,29984(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 29984);
	// lbz r5,4(r23)
	ctx.r5.u64 = REX_LOAD_U8(r23.u32 + 4);
	// rotlwi r10,r5,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 6);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r8,r8,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + r28.u32);
	// add r4,r31,r4
	ctx.r4.u64 = r31.u64 + ctx.r4.u64;
	// bl 0x8277e208
	ctx.lr = 0x827CACB8;
	sub_8277E208(ctx, base);
	// addi r31,r31,128
	r31.s64 = r31.s64 + 128;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r31,768
	ctx.cr6.compare<int32_t>(r31.s32, 768, ctx.xer);
	// blt cr6,0x827cac5c
	if (ctx.cr6.lt) goto loc_827CAC5C;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cb264
	if (ctx.cr6.eq) goto loc_827CB264;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r10,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cb264
	if (ctx.cr6.eq) goto loc_827CB264;
	// rlwinm r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,20920(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 20920);
	// lwz r10,20924(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 20924);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r9,20928(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 20928);
	// add r29,r11,r7
	r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r27,r10,r15
	r27.u64 = ctx.r10.u64 + r15.u64;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r26,r9,r15
	r26.u64 = ctx.r9.u64 + r15.u64;
	// lwz r3,1384(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1384);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bne cr6,0x827cad2c
	if (!ctx.cr6.eq) goto loc_827CAD2C;
	// bl 0x827cea20
	ctx.lr = 0x827CAD28;
	sub_827CEA20(ctx, base);
	// b 0x827cad30
	goto loc_827CAD30;
loc_827CAD2C:
	// bl 0x827cea70
	ctx.lr = 0x827CAD30;
	sub_827CEA70(ctx, base);
loc_827CAD30:
	// lhz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 50);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// rotlwi r30,r11,3
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// beq cr6,0x827cae1c
	if (ctx.cr6.eq) goto loc_827CAE1C;
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cae1c
	if (ctx.cr6.eq) goto loc_827CAE1C;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827CAD64:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r7,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r14,r6,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// subf r5,r7,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r7.u64;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// subf r4,r6,r14
	ctx.r4.u64 = r14.u64 - ctx.r6.u64;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r14,r8,r5
	r14.u64 = ctx.r5.u64 - ctx.r8.u64;
	// subf r5,r9,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r4,r8,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// subf r3,r10,r14
	ctx.r3.u64 = r14.u64 - ctx.r10.u64;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// lwz r14,120(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r4,r9,r14
	ctx.r4.u64 = r14.u64 - ctx.r9.u64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r6,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 3;
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// srawi r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// sth r6,-4(r11)
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r6.u16);
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// sth r4,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r4.u16);
	// sth r3,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x827cad64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CAD64;
	// lwz r14,108(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_827CAE1C:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r29,16
	ctx.r11.s64 = r29.s64 + 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827CAE30:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r7,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subf r4,r7,r30
	ctx.r4.u64 = r30.u64 - ctx.r7.u64;
	// subf r30,r10,r5
	r30.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r5,r9,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r9.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r3,r8,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// subf r4,r8,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r8.u64;
	// subf r3,r8,r30
	ctx.r3.u64 = r30.u64 - ctx.r8.u64;
	// lwz r30,120(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// subf r30,r9,r30
	r30.u64 = r30.u64 - ctx.r9.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// subf r3,r10,r30
	ctx.r3.u64 = r30.u64 - ctx.r10.u64;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// addi r3,r7,3
	ctx.r3.s64 = ctx.r7.s64 + 3;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// sth r8,-4(r11)
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r8.u16);
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// sth r6,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r6.u16);
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r4,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// bdnz 0x827cae30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CAE30;
	// lhz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 50);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// rotlwi r30,r11,2
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// beq cr6,0x827cb098
	if (ctx.cr6.eq) goto loc_827CB098;
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cafc8
	if (ctx.cr6.eq) goto loc_827CAFC8;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827CAF18:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// rlwinm r14,r7,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// subf r4,r7,r14
	ctx.r4.u64 = r14.u64 - ctx.r7.u64;
	// subf r14,r9,r5
	r14.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r8,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r4,r10,r14
	ctx.r4.u64 = r14.u64 - ctx.r10.u64;
	// rlwinm r14,r8,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r3,r8,r14
	ctx.r3.u64 = r14.u64 - ctx.r8.u64;
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r6,r10,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// addi r3,r8,3
	ctx.r3.s64 = ctx.r8.s64 + 3;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// sth r8,-4(r11)
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r8.u16);
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// sth r6,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r6.u16);
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r4,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// bdnz 0x827caf18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CAF18;
	// lwz r14,108(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_827CAFC8:
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cb098
	if (ctx.cr6.eq) goto loc_827CB098;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r31,r30,1,0,30
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827CAFEC:
	// lhz r9,-2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lhz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// rlwinm r30,r7,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r6,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r6.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// subf r4,r7,r30
	ctx.r4.u64 = r30.u64 - ctx.r7.u64;
	// subf r30,r9,r5
	r30.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r8,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r8.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r4,r10,r30
	ctx.r4.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r30,r8,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r3,r8,r30
	ctx.r3.u64 = r30.u64 - ctx.r8.u64;
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r6,r10,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r4,r7,4
	ctx.r4.s64 = ctx.r7.s64 + 4;
	// addi r3,r8,3
	ctx.r3.s64 = ctx.r8.s64 + 3;
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// sth r8,-4(r11)
	REX_STORE_U16(ctx.r11.u32 + -4, ctx.r8.u16);
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// srawi r4,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 3;
	// sth r6,-2(r11)
	REX_STORE_U16(ctx.r11.u32 + -2, ctx.r6.u16);
	// sth r5,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// sth r4,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// bdnz 0x827cafec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CAFEC;
loc_827CB098:
	// lhz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 50);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// rotlwi r6,r11,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// beq cr6,0x827cb0c0
	if (ctx.cr6.eq) goto loc_827CB0C0;
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cb0c0
	if (ctx.cr6.eq) goto loc_827CB0C0;
	// li r7,-2
	ctx.r7.s64 = -2;
loc_827CB0C0:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_827CB0C8:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x827cb11c
	if (!ctx.cr6.lt) goto loc_827CB11C;
	// subfic r10,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827CB0DC:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r29
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + r29.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ble cr6,0x827cb100
	if (!ctx.cr6.gt) goto loc_827CB100;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r10,r5,r20
	ctx.r10.u64 = ctx.r5.u64 & r20.u64;
loc_827CB100:
	// lhz r5,74(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 74);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r4,r3,r21
	REX_STORE_U8(ctx.r3.u32 + r21.u32, ctx.r4.u8);
	// bdnz 0x827cb0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB0DC;
loc_827CB11C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// blt cr6,0x827cb0c8
	if (ctx.cr6.lt) goto loc_827CB0C8;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x827cb14c
	if (ctx.cr6.eq) goto loc_827CB14C;
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cb14c
	if (ctx.cr6.eq) goto loc_827CB14C;
	// li r7,-2
	ctx.r7.s64 = -2;
loc_827CB14C:
	// lhz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 50);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
loc_827CB15C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bge cr6,0x827cb1b0
	if (!ctx.cr6.lt) goto loc_827CB1B0;
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827CB170:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + r27.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ble cr6,0x827cb194
	if (!ctx.cr6.gt) goto loc_827CB194;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r10,r5,r20
	ctx.r10.u64 = ctx.r5.u64 & r20.u64;
loc_827CB194:
	// lhz r5,76(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 76);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r4,r3,r24
	REX_STORE_U8(ctx.r3.u32 + r24.u32, ctx.r4.u8);
	// bdnz 0x827cb170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB170;
loc_827CB1B0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x827cb15c
	if (ctx.cr6.lt) goto loc_827CB15C;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x827cb1e0
	if (ctx.cr6.eq) goto loc_827CB1E0;
	// lwz r11,-24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + -24);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cb1e0
	if (ctx.cr6.eq) goto loc_827CB1E0;
	// li r7,-2
	ctx.r7.s64 = -2;
loc_827CB1E0:
	// lhz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 50);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
loc_827CB1F0:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bge cr6,0x827cb248
	if (!ctx.cr6.lt) goto loc_827CB248;
	// subfic r10,r7,8
	ctx.xer.ca = ctx.r7.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827CB204:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r5,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + r26.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ble cr6,0x827cb228
	if (!ctx.cr6.gt) goto loc_827CB228;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// and r10,r5,r20
	ctx.r10.u64 = ctx.r5.u64 & r20.u64;
loc_827CB228:
	// lhz r5,76(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 76);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r4,r3,r24
	REX_STORE_U8(ctx.r3.u32 + r24.u32, ctx.r4.u8);
	// bdnz 0x827cb204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827CB204;
loc_827CB248:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// blt cr6,0x827cb1f0
	if (ctx.cr6.lt) goto loc_827CB1F0;
	// lwz r27,124(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r26,128(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x827cb298
	goto loc_827CB298;
loc_827CB264:
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 0);
	// add r6,r19,r24
	ctx.r6.u64 = r19.u64 + r24.u64;
	// lhz r8,76(r28)
	ctx.r8.u64 = REX_LOAD_U16(r28.u32 + 76);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lhz r7,74(r28)
	ctx.r7.u64 = REX_LOAD_U16(r28.u32 + 74);
	// lwz r3,1384(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1384);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827cb294
	if (!ctx.cr6.eq) goto loc_827CB294;
	// bl 0x827ceac0
	ctx.lr = 0x827CB290;
	sub_827CEAC0(ctx, base);
	// b 0x827cb298
	goto loc_827CB298;
loc_827CB294:
	// bl 0x827ceb10
	ctx.lr = 0x827CB298;
	sub_827CEB10(ctx, base);
loc_827CB298:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r9,r11,16,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// ble 0x827cb2e8
	if (!ctx.cr0.gt) goto loc_827CB2E8;
loc_827CB2BC:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r21,r21,16
	r21.s64 = r21.s64 + 16;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// addi r23,r23,24
	r23.s64 = r23.s64 + 24;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r15,r15,16
	r15.s64 = r15.s64 + 16;
	// cmpw cr6,r16,r27
	ctx.cr6.compare<int32_t>(r16.s32, r27.s32, ctx.xer);
	// blt cr6,0x827cac3c
	if (ctx.cr6.lt) goto loc_827CAC3C;
	// b 0x827cb2f0
	goto loc_827CB2F0;
loc_827CB2E8:
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_827CB2F0:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,232(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 232);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r10,228(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 228);
	// cmpw cr6,r8,r26
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r26.s32, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// blt cr6,0x827cac18
	if (ctx.cr6.lt) goto loc_827CAC18;
loc_827CB330:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cd0
	return;
}

