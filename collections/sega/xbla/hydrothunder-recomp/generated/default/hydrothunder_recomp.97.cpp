#include "hydrothunder_funcs.97.h"

DEFINE_REX_FUNC(sub_82125A60) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125A88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82125b54
	if (ctx.cr0.eq) goto loc_82125B54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-25736
	ctx.r4.s64 = ctx.r11.s64 + -25736;
	// bl 0x82125d00
	ctx.lr = 0x82125AB0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82125b54
	if (!ctx.cr0.eq) goto loc_82125B54;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecf40
	ctx.lr = 0x82125AC0;
	sub_823ECF40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125AD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25388
	ctx.r4.s64 = ctx.r11.s64 + -25388;
	// rlwinm r5,r10,12,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25364
	ctx.r4.s64 = ctx.r11.s64 + -25364;
	// rlwinm r5,r10,12,20,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125B1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,100
	ctx.r10.s64 = 100;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r9,-25340
	ctx.r4.s64 = ctx.r9.s64 + -25340;
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divwu r5,r11,r10
	ctx.r5.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82125B54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82125B54:
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

DEFINE_REX_FUNC(sub_8212EAE0) {
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
	ctx.lr = 0x8212EAE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212ebbc
	if (ctx.cr6.eq) goto loc_8212EBBC;
	// lwz r11,2040(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 2040);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2040(r4)
	REX_STORE_U32(ctx.r4.u32 + 2040, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212ebbc
	if (!ctx.cr6.eq) goto loc_8212EBBC;
	// bl 0x8212e8b0
	ctx.lr = 0x8212EB1C;
	sub_8212E8B0(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x8212fd70
	ctx.lr = 0x8212EB28;
	sub_8212FD70(ctx, base);
	// lwz r11,1892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1892);
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
	ctx.lr = 0x8212EB48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1896);
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
	ctx.lr = 0x8212EB68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1880(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1880);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212eba8
	if (!ctx.cr6.gt) goto loc_8212EBA8;
	// addi r28,r31,1896
	r28.s64 = r31.s64 + 1896;
	// lis r27,-32106
	r27.s64 = -2104098816;
loc_8212EB80:
	// lwz r3,6040(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6040);
	// lwzu r4,4(r28)
	ea = 4 + r28.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212EB98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1880(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1880);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212eb80
	if (ctx.cr6.lt) goto loc_8212EB80;
loc_8212EBA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212EBB0;
	sub_8269CE98(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
loc_8212EBBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821355C0) {
	REX_FUNC_PROLOGUE();
	// clrlwi r9,r5,26
	ctx.r9.u64 = ctx.r5.u32 & 0x3F;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x821355dc
	if (ctx.cr6.lt) goto loc_821355DC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
loc_821355DC:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x821355e8
	if (!ctx.cr6.eq) goto loc_821355E8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_821355E8:
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// li r7,80
	ctx.r7.s64 = 80;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// divwu r7,r11,r7
	ctx.r7.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// mulli r10,r7,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(80));
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// beq cr6,0x82135618
	if (ctx.cr6.eq) goto loc_82135618;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x82135618
	if (ctx.cr6.eq) goto loc_82135618;
	// cmpwi cr6,r9,37
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 37, ctx.xer);
	// bne cr6,0x8213561c
	if (!ctx.cr6.eq) goto loc_8213561C;
loc_82135618:
	// li r8,8
	ctx.r8.s64 = 8;
loc_8213561C:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// divwu r3,r11,r10
	ctx.r3.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213A558) {
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
	ctx.lr = 0x8213A57C;
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
	ctx.lr = 0x8213A594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6104(r10)
	REX_STORE_U32(ctx.r10.u32 + 6104, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8213BB98) {
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
	ctx.lr = 0x8213BBA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// b 0x8213bc00
	goto loc_8213BC00;
loc_8213BBC4:
	// mulli r11,r31,88
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// addi r4,r3,-88
	ctx.r4.s64 = ctx.r3.s64 + -88;
	// bctrl 
	ctx.lr = 0x8213BBD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213bbe4
	if (ctx.cr0.eq) goto loc_8213BBE4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8213BBE4:
	// mulli r10,r31,88
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// mulli r11,r30,88
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x8213baa8
	ctx.lr = 0x8213BBF8;
	sub_8213BAA8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8213BC00:
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x8213bbc4
	if (ctx.cr6.lt) goto loc_8213BBC4;
	// bne cr6,0x8213bc2c
	if (!ctx.cr6.eq) goto loc_8213BC2C;
	// mulli r11,r28,88
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(88));
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// mulli r11,r30,88
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// addi r4,r10,-88
	ctx.r4.s64 = ctx.r10.s64 + -88;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x8213baa8
	ctx.lr = 0x8213BC28;
	sub_8213BAA8(ctx, base);
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
loc_8213BC2C:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// b 0x8213bc6c
	goto loc_8213BC6C;
loc_8213BC34:
	// mulli r11,r31,88
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x8213BC4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213bc7c
	if (ctx.cr0.eq) goto loc_8213BC7C;
	// mulli r11,r30,88
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x8213baa8
	ctx.lr = 0x8213BC64;
	sub_8213BAA8(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8213BC6C:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(r26.s32, r30.s32, ctx.xer);
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r31.s64 = temp.s64;
	// blt cr6,0x8213bc34
	if (ctx.cr6.lt) goto loc_8213BC34;
loc_8213BC7C:
	// mulli r11,r30,88
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x8213baa8
	ctx.lr = 0x8213BC8C;
	sub_8213BAA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82146E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-16132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16132);
	ctx.f0.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82147EB8) {
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
	// lbz r11,9(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82147f00
	if (ctx.cr0.eq) goto loc_82147F00;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
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
	ctx.lr = 0x82147EF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,9(r31)
	REX_STORE_U8(r31.u32 + 9, ctx.r11.u8);
loc_82147F00:
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

DEFINE_REX_FUNC(sub_8214A3A0) {
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
	ctx.lr = 0x8214A3A8;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4304(r1)
	ea = -4304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r31,92(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r9,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// bne cr6,0x8214a4b0
	if (!ctx.cr6.eq) goto loc_8214A4B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214a578
	if (!ctx.cr6.gt) goto loc_8214A578;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r29,0
	r29.s64 = 0;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f30,1040(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1040);
	f30.f64 = double(temp.f32);
loc_8214A40C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f30,32(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// std r9,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r9.u64);
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r10.u32);
	// ble cr6,0x8214a490
	if (!ctx.cr6.gt) goto loc_8214A490;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_8214A450:
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82148bb8
	ctx.lr = 0x8214A464;
	sub_82148BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214a480
	if (!ctx.cr0.eq) goto loc_8214A480;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(r26.s32, r24.s32, ctx.xer);
	// blt cr6,0x8214a450
	if (ctx.cr6.lt) goto loc_8214A450;
	// b 0x8214a490
	goto loc_8214A490;
loc_8214A480:
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// stwx r28,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r28.u32);
	// lfs f0,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
loc_8214A490:
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8214a40c
	if (ctx.cr6.lt) goto loc_8214A40C;
	// b 0x8214a578
	goto loc_8214A578;
loc_8214A4B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214a578
	if (!ctx.cr6.gt) goto loc_8214A578;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f30,1040(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1040);
	f30.f64 = double(temp.f32);
loc_8214A4D8:
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r11,12(r31)
	REX_STORE_U64(r31.u32 + 12, ctx.r11.u64);
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f30,8(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r10.u32);
	// ble cr6,0x8214a55c
	if (!ctx.cr6.gt) goto loc_8214A55C;
	// mr r26,r23
	r26.u64 = r23.u64;
loc_8214A51C:
	// lwz r27,0(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82148bb8
	ctx.lr = 0x8214A530;
	sub_82148BB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8214a54c
	if (!ctx.cr0.eq) goto loc_8214A54C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(r28.s32, r24.s32, ctx.xer);
	// blt cr6,0x8214a51c
	if (ctx.cr6.lt) goto loc_8214A51C;
	// b 0x8214a55c
	goto loc_8214A55C;
loc_8214A54C:
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// stwx r27,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r27.u32);
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_8214A55C:
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8214a4d8
	if (ctx.cr6.lt) goto loc_8214A4D8;
loc_8214A578:
	// addi r1,r1,4304
	ctx.r1.s64 = ctx.r1.s64 + 4304;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82159F50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82159F58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x82159f90
	goto loc_82159F90;
loc_82159F6C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82159f80
	if (ctx.cr6.lt) goto loc_82159F80;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82159f84
	goto loc_82159F84;
loc_82159F80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82159F84:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823edd68
	ctx.lr = 0x82159F8C;
	sub_823EDD68(ctx, base);
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
loc_82159F90:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82159f6c
	if (!ctx.cr6.eq) goto loc_82159F6C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215a760
	ctx.lr = 0x82159FA4;
	sub_8215A760(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159FC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	ctx.lr = 0x82159FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82159FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215E000) {
	REX_FUNC_PROLOGUE();
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r8,r4,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r4.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8215e030
	if (!ctx.cr6.lt) goto loc_8215E030;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// b 0x822f6020
	sub_822F6020(ctx, base);
	return;
loc_8215E030:
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8215e060
	if (ctx.cr6.lt) goto loc_8215E060;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8215E060:
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8215e06c
	if (!ctx.cr6.lt) goto loc_8215E06C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_8215E06C:
	// b 0x8215e078
	sub_8215E078(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82160C70) {
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
	ctx.lr = 0x82160C78;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bne cr6,0x82160cb0
	if (!ctx.cr6.eq) goto loc_82160CB0;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82160cb4
	if (ctx.cr6.eq) goto loc_82160CB4;
loc_82160CB0:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82160CB4:
	// lbz r9,1(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r30,1
	r30.s64 = 1;
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160d3c
	if (ctx.cr0.eq) goto loc_82160D3C;
loc_82160CC8:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82160cd8
	if (ctx.cr6.lt) goto loc_82160CD8;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82160d28
	if (!ctx.cr6.gt) goto loc_82160D28;
loc_82160CD8:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x82160d28
	if (ctx.cr6.eq) goto loc_82160D28;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x82160d28
	if (ctx.cr6.eq) goto loc_82160D28;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x82160d28
	if (ctx.cr6.eq) goto loc_82160D28;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82160d28
	if (ctx.cr6.eq) goto loc_82160D28;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82160d28
	if (ctx.cr6.eq) goto loc_82160D28;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82160d28
	if (ctx.cr6.eq) goto loc_82160D28;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82160d18
	if (ctx.cr6.lt) goto loc_82160D18;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// ble cr6,0x82160d28
	if (!ctx.cr6.gt) goto loc_82160D28;
loc_82160D18:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x82160d3c
	if (ctx.cr6.lt) goto loc_82160D3C;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// bgt cr6,0x82160d3c
	if (ctx.cr6.gt) goto loc_82160D3C;
loc_82160D28:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82160cc8
	if (!ctx.cr0.eq) goto loc_82160CC8;
loc_82160D3C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82160d74
	if (!ctx.cr0.eq) goto loc_82160D74;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// ble cr6,0x82160d74
	if (!ctx.cr6.gt) goto loc_82160D74;
loc_82160D50:
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,48
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 48, ctx.xer);
	// blt cr6,0x82160da4
	if (ctx.cr6.lt) goto loc_82160DA4;
	// cmpwi cr6,r9,57
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 57, ctx.xer);
	// bgt cr6,0x82160da4
	if (ctx.cr6.gt) goto loc_82160DA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x82160d50
	if (ctx.cr6.lt) goto loc_82160D50;
loc_82160D74:
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// addi r9,r8,-45
	ctx.r9.s64 = ctx.r8.s64 + -45;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82160e14
	if (ctx.cr6.eq) goto loc_82160E14;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82160e20
	goto loc_82160E20;
loc_82160DA4:
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(r30.u32, 256, ctx.xer);
	// blt cr6,0x82160dc4
	if (ctx.cr6.lt) goto loc_82160DC4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_82160DB0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,19296
	ctx.r4.s64 = ctx.r11.s64 + 19296;
	// bl 0x82160698
	ctx.lr = 0x82160DC0;
	sub_82160698(ctx, base);
	// b 0x82160eec
	goto loc_82160EEC;
loc_82160DC4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826a1e70
	ctx.lr = 0x82160DD0;
	sub_826A1E70(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,19320
	ctx.r4.s64 = ctx.r10.s64 + 19320;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stbx r31,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r31.u8);
	// bl 0x8269d898
	ctx.lr = 0x82160DEC;
	sub_8269D898(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82160dfc
	if (ctx.cr6.eq) goto loc_82160DFC;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82160db0
	goto loc_82160DB0;
loc_82160DFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f31.f64 = double(temp.f32);
	// bl 0x8215f0f0
	ctx.lr = 0x82160E08;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82160ed8
	goto loc_82160ED8;
loc_82160E14:
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82160e20
	if (ctx.cr0.eq) goto loc_82160E20;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82160E20:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x82160e90
	if (!ctx.cr6.lt) goto loc_82160E90;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82160E38:
	// lbzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82160e58
	if (ctx.cr6.lt) goto loc_82160E58;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bgt cr6,0x82160e58
	if (ctx.cr6.gt) goto loc_82160E58;
	// addi r11,r11,-97
	ctx.r11.s64 = ctx.r11.s64 + -97;
	// b 0x82160e6c
	goto loc_82160E6C;
loc_82160E58:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x82160e78
	if (ctx.cr6.lt) goto loc_82160E78;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// bgt cr6,0x82160e78
	if (ctx.cr6.gt) goto loc_82160E78;
	// addi r11,r11,-65
	ctx.r11.s64 = ctx.r11.s64 + -65;
loc_82160E6C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// b 0x82160e80
	goto loc_82160E80;
loc_82160E78:
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
loc_82160E80:
	// mulld r10,r9,r31
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * r31.u64);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82160e38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82160E38;
loc_82160E90:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160e9c
	if (ctx.cr0.eq) goto loc_82160E9C;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
loc_82160E9C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(r31.s64, ctx.r11.s64, ctx.xer);
	// blt cr6,0x82160ed0
	if (ctx.cr6.lt) goto loc_82160ED0;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(r31.s64, ctx.r11.s64, ctx.xer);
	// bgt cr6,0x82160ed0
	if (ctx.cr6.gt) goto loc_82160ED0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82160EC0;
	sub_8215F0F0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,8(r28)
	REX_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x82160edc
	goto loc_82160EDC;
loc_82160ED0:
	// li r11,7
	ctx.r11.s64 = 7;
	// std r31,8(r28)
	REX_STORE_U64(r28.u32 + 8, r31.u64);
loc_82160ED8:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82160EDC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82160EEC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821788C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821788D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82178900
	goto loc_82178900;
loc_821788E4:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821788F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82178900:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821788e4
	if (!ctx.cr6.eq) goto loc_821788E4;
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// li r29,0
	r29.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82178954
	if (!ctx.cr0.gt) goto loc_82178954;
	// li r28,0
	r28.s64 = 0;
loc_82178928:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x821788c8
	ctx.lr = 0x82178934;
	sub_821788C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82178928
	if (ctx.cr6.lt) goto loc_82178928;
loc_82178954:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82178968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82178990
	if (!ctx.cr0.eq) goto loc_82178990;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6136);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82178990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82178990:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8217F038) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217F040;
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
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8217f0c8
	if (!ctx.cr0.gt) goto loc_8217F0C8;
loc_8217F06C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217f0a8
	if (ctx.cr0.eq) goto loc_8217F0A8;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// beq cr6,0x8217f0d4
	if (ctx.cr6.eq) goto loc_8217F0D4;
loc_8217F0A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F0C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8217f06c
	if (ctx.cr6.lt) goto loc_8217F06C;
loc_8217F0C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217F0CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8217F0D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F0EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8217f0cc
	goto loc_8217F0CC;
}

DEFINE_REX_FUNC(sub_82186078) {
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
	ctx.lr = 0x82186080;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821860a8
	if (!ctx.cr6.eq) goto loc_821860A8;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r11,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// b 0x8218627c
	goto loc_8218627C;
loc_821860A8:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82186158
	if (ctx.cr6.eq) goto loc_82186158;
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
loc_821860D0:
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lfs f10,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x82186140
	if (ctx.cr6.lt) goto loc_82186140;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82186140:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r29
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821860d0
	if (!ctx.cr6.eq) goto loc_821860D0;
loc_82186158:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r28,16(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82186174
	if (!ctx.cr6.eq) goto loc_82186174;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82185ed8
	ctx.lr = 0x82186174;
	sub_82185ED8(ctx, base);
loc_82186174:
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// stw r10,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// bl 0x82185978
	ctx.lr = 0x821861B8;
	sub_82185978(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82186268
	if (ctx.cr6.eq) goto loc_82186268;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, r31.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r31,16(r29)
	REX_STORE_U32(r29.u32 + 16, r31.u32);
	// stw r27,24(r31)
	REX_STORE_U32(r31.u32 + 24, r27.u32);
	// stw r31,16(r27)
	REX_STORE_U32(r27.u32 + 16, r31.u32);
loc_821861F4:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82186238
	if (ctx.cr6.gt) goto loc_82186238;
	// lfs f0,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82186238
	if (ctx.cr6.gt) goto loc_82186238;
	// lfs f0,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82186238
	if (ctx.cr6.lt) goto loc_82186238;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8218623c
	if (!ctx.cr6.lt) goto loc_8218623C;
loc_82186238:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8218623C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8218627c
	if (!ctx.cr0.eq) goto loc_8218627C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,24(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 24);
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 20);
	// bl 0x82185978
	ctx.lr = 0x82186254;
	sub_82185978(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// lwz r28,16(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x821861f4
	if (!ctx.cr6.eq) goto loc_821861F4;
	// b 0x8218627c
	goto loc_8218627C;
loc_82186268:
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r31,16(r29)
	REX_STORE_U32(r29.u32 + 16, r31.u32);
	// stw r27,24(r31)
	REX_STORE_U32(r31.u32 + 24, r27.u32);
	// stw r31,16(r27)
	REX_STORE_U32(r27.u32 + 16, r31.u32);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
loc_8218627C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82195540) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82195B08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x821957b0
	ctx.lr = 0x82195B40;
	sub_821957B0(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * f31.f64));
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f6,f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f9,f8,f8,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f9.f64)));
	// fmadds f9,f7,f7,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f9.f64)));
	// fdivs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fcmpu cr6,f10,f6
	ctx.cr6.compare(ctx.f10.f64, ctx.f6.f64);
	// bge cr6,0x82195b98
	if (!ctx.cr6.lt) goto loc_82195B98;
loc_82195B90:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82195c3c
	goto loc_82195C3C;
loc_82195B98:
	// lfs f10,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f8,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f9.f64)));
	// fmadds f9,f7,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f9.f64)));
	// fadds f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x82195b90
	if (!ctx.cr6.gt) goto loc_82195B90;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r10,r30,272
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(272));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82195c34
	if (!ctx.cr6.gt) goto loc_82195C34;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_82195BF4:
	// lfs f10,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// lfsu f10,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f10.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f9,f8,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f10,f10,f11,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f9.f64)));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r7,r7,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// blt cr6,0x82195bf4
	if (ctx.cr6.lt) goto loc_82195BF4;
loc_82195C34:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82195C3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_821A0D40) {
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
	ctx.lr = 0x821A0D48;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// bl 0x8214f4f0
	ctx.lr = 0x821A0D60;
	sub_8214F4F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r9,r9,-28348
	ctx.r9.s64 = ctx.r9.s64 + -28348;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,72
	r29.s64 = r31.s64 + 72;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// addi r27,r31,76
	r27.s64 = r31.s64 + 76;
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821A0D98;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821a0dcc
	if (ctx.cr0.eq) goto loc_821A0DCC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-31284
	ctx.r4.s64 = ctx.r11.s64 + -31284;
	// bl 0x82120600
	ctx.lr = 0x821A0DB0;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821A0DC4;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a0dd0
	goto loc_821A0DD0;
loc_821A0DCC:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
loc_821A0DD0:
	// addi r28,r31,28
	r28.s64 = r31.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821A0DE0;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a0dfc
	if (ctx.cr0.eq) goto loc_821A0DFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821A0DFC;
	sub_82120AC0(ctx, base);
loc_821A0DFC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821A0E04;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a0e38
	if (ctx.cr0.eq) goto loc_821A0E38;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-28584
	ctx.r4.s64 = ctx.r11.s64 + -28584;
	// bl 0x82120600
	ctx.lr = 0x821A0E1C;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821A0E30;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821a0e3c
	goto loc_821A0E3C;
loc_821A0E38:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
loc_821A0E3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821A0E48;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a0e60
	if (ctx.cr0.eq) goto loc_821A0E60;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821A0E60;
	sub_82120AC0(ctx, base);
loc_821A0E60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821A7838) {
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
	ctx.lr = 0x821A784C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a785c
	if (ctx.cr0.eq) goto loc_821A785C;
	// bl 0x821a7870
	ctx.lr = 0x821A7858;
	sub_821A7870(ctx, base);
	// b 0x821a7860
	goto loc_821A7860;
loc_821A785C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A7860:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A92D8) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821A92F0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821a931c
	if (ctx.cr0.eq) goto loc_821A931C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125dc8
	ctx.lr = 0x821A9300;
	sub_82125DC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-24984
	ctx.r11.s64 = ctx.r11.s64 + -24984;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821a9320
	goto loc_821A9320;
loc_821A931C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A9320:
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

DEFINE_REX_FUNC(sub_821AB488) {
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
	ctx.lr = 0x821AB490;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x822f6280
	ctx.lr = 0x821AB4A4;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// beq 0x821ab538
	if (ctx.cr0.eq) goto loc_821AB538;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,172(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,596(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r8,r8,11692
	ctx.r8.s64 = ctx.r8.s64 + 11692;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// std r6,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
	// std r9,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r9.u64);
	// std r5,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r5.u64);
	// std r4,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r4.u64);
	// stb r11,64(r3)
	REX_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// b 0x821ab53c
	goto loc_821AB53C;
loc_821AB538:
	// li r31,0
	r31.s64 = 0;
loc_821AB53C:
	// stw r31,96(r30)
	REX_STORE_U32(r30.u32 + 96, r31.u32);
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AB554;
	sub_821613D8(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AB568;
	sub_821613D8(ctx, base);
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r11,48
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// ble cr6,0x821ab58c
	if (!ctx.cr6.gt) goto loc_821AB58C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821AB58C:
	// bl 0x822f6338
	ctx.lr = 0x821AB590;
	sub_822F6338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mulli r5,r11,48
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// bl 0x821613d8
	ctx.lr = 0x821AB5B4;
	sub_821613D8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AB5C4;
	sub_821613D8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821613d8
	ctx.lr = 0x821AB5D4;
	sub_821613D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,176(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821B6EC0) {
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
	ctx.lr = 0x821B6EC8;
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
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
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
	// addi r28,r10,27808
	r28.s64 = ctx.r10.s64 + 27808;
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
	// beq cr6,0x821b6fb0
	if (ctx.cr6.eq) goto loc_821B6FB0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821B6F8C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b6fac
	if (ctx.cr0.eq) goto loc_821B6FAC;
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
loc_821B6FAC:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_821B6FB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821BEDE0) {
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
	ctx.lr = 0x821BEDF4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bee04
	if (ctx.cr0.eq) goto loc_821BEE04;
	// bl 0x821beb70
	ctx.lr = 0x821BEE00;
	sub_821BEB70(ctx, base);
	// b 0x821bee08
	goto loc_821BEE08;
loc_821BEE04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BEE08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BFE28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,116(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 116);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C0368) {
	REX_FUNC_PROLOGUE();
	// lwz r10,136(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 136);
	// addi r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 + 116;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821c037c
	if (ctx.cr6.lt) goto loc_821C037C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821C037C:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C1B40) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r7,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r6,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,24(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// std r10,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r10.u64);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ld r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// std r10,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// ld r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// ld r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r6,8(r5)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// ld r30,0(r4)
	r30.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// ld r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// ld r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r7,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// std r4,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// std r5,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r30,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r30.u64);
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lwz r4,124(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f10,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// lfs f6,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// lbz r10,26(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 26);
	// lfs f8,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 8);
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// ld r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 24);
	// std r11,32(r4)
	REX_STORE_U64(ctx.r4.u32 + 32, ctx.r11.u64);
	// std r9,40(r4)
	REX_STORE_U64(ctx.r4.u32 + 40, ctx.r9.u64);
	// std r10,48(r4)
	REX_STORE_U64(ctx.r4.u32 + 48, ctx.r10.u64);
	// std r8,56(r4)
	REX_STORE_U64(ctx.r4.u32 + 56, ctx.r8.u64);
	// beq 0x821c1cb8
	if (ctx.cr0.eq) goto loc_821C1CB8;
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
	ctx.lr = 0x821C1CB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C1CB8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_821CF5A0) {
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
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x822f6280
	ctx.lr = 0x821CF5B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cf5c4
	if (ctx.cr0.eq) goto loc_821CF5C4;
	// bl 0x821cf5d8
	ctx.lr = 0x821CF5C0;
	sub_821CF5D8(ctx, base);
	// b 0x821cf5c8
	goto loc_821CF5C8;
loc_821CF5C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CF5C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1840) {
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
	// lwz r11,1616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d18c0
	if (!ctx.cr6.eq) goto loc_821D18C0;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822f6338
	ctx.lr = 0x821D1868;
	sub_822F6338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,1616(r31)
	REX_STORE_U32(r31.u32 + 1616, ctx.r3.u32);
	// addi r8,r11,15064
	ctx.r8.s64 = ctx.r11.s64 + 15064;
	// b 0x821d1880
	goto loc_821D1880;
loc_821D187C:
	// lwz r3,1616(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1616);
loc_821D1880:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r9,r3,r10
	REX_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
loc_821D188C:
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821d18ac
	if (ctx.cr6.eq) goto loc_821D18AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x821d188c
	if (ctx.cr6.lt) goto loc_821D188C;
	// b 0x821d18b4
	goto loc_821D18B4;
loc_821D18AC:
	// lwz r9,1616(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1616);
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_821D18B4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x821d187c
	if (ctx.cr6.lt) goto loc_821D187C;
loc_821D18C0:
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

DEFINE_REX_FUNC(sub_821D64B8) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
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
	ctx.lr = 0x821D6504;
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
	ctx.lr = 0x821D6524;
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
	ctx.lr = 0x821D653C;
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
	ctx.lr = 0x821D6568;
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
	ctx.lr = 0x821D6580;
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
	ctx.lr = 0x821D6598;
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

DEFINE_REX_FUNC(sub_821DC540) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14580
	ctx.r3.s64 = ctx.r11.s64 + -14580;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DC800) {
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
	ctx.lr = 0x821DC808;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,19512
	ctx.r4.s64 = ctx.r11.s64 + 19512;
	// bl 0x8215f338
	ctx.lr = 0x821DC824;
	sub_8215F338(ctx, base);
	// addi r4,r24,84
	ctx.r4.s64 = r24.s64 + 84;
	// bl 0x8215fb00
	ctx.lr = 0x821DC82C;
	sub_8215FB00(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,10560
	ctx.r4.s64 = ctx.r11.s64 + 10560;
	// bl 0x8215f338
	ctx.lr = 0x821DC83C;
	sub_8215F338(ctx, base);
	// addi r4,r24,88
	ctx.r4.s64 = r24.s64 + 88;
	// bl 0x82166df8
	ctx.lr = 0x821DC844;
	sub_82166DF8(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// addi r29,r24,16
	r29.s64 = r24.s64 + 16;
	// li r28,0
	r28.s64 = 0;
	// lwz r31,16(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 16);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821dc8c0
	if (!ctx.cr0.gt) goto loc_821DC8C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r11,11928
	r26.s64 = ctx.r11.s64 + 11928;
	// addi r25,r10,12164
	r25.s64 = ctx.r10.s64 + 12164;
loc_821DC874:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DC880;
	sub_8215F338(ctx, base);
	// lwzx r31,r30,r31
	r31.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bl 0x8215f2d0
	ctx.lr = 0x821DC88C;
	sub_8215F2D0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DC894;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbfe8
	ctx.lr = 0x821DC8A0;
	sub_821DBFE8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dc874
	if (ctx.cr6.lt) goto loc_821DC874;
loc_821DC8C0:
	// lwz r31,32(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 32);
	// addi r29,r24,32
	r29.s64 = r24.s64 + 32;
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 36);
	// li r28,0
	r28.s64 = 0;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821dc920
	if (!ctx.cr0.gt) goto loc_821DC920;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r11,12172
	r26.s64 = ctx.r11.s64 + 12172;
loc_821DC8E8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DC8F4;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x821dd4b0
	ctx.lr = 0x821DC900;
	sub_821DD4B0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dc8e8
	if (ctx.cr6.lt) goto loc_821DC8E8;
loc_821DC920:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,12180
	ctx.r4.s64 = ctx.r11.s64 + 12180;
	// bl 0x8215f338
	ctx.lr = 0x821DC930;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821dd150
	ctx.lr = 0x821DC93C;
	sub_821DD150(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821E4CA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821E4CA8;
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
	// addi r30,r11,-15304
	r30.s64 = ctx.r11.s64 + -15304;
	// lwz r4,-15304(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15304);
	// bl 0x82120600
	ctx.lr = 0x821E4CC8;
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
	ctx.lr = 0x821E4CE4;
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
	ctx.lr = 0x821E4CF8;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821e4d2c
	if (ctx.cr6.eq) goto loc_821E4D2C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121ec8
	ctx.lr = 0x821E4D0C;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e4d2c
	if (!ctx.cr0.eq) goto loc_821E4D2C;
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
	ctx.lr = 0x821E4D2C;
	sub_821231D0(ctx, base);
loc_821E4D2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E97E8) {
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
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r7,15456
	ctx.r7.s64 = ctx.r7.s64 + 15456;
	// lfs f13,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r10,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6040(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6040);
	// bl 0x821d03f0
	ctx.lr = 0x821E9850;
	sub_821D03F0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821ED068) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821ED070;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,15872
	ctx.r11.s64 = ctx.r11.s64 + 15872;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821ed0a4
	if (ctx.cr6.eq) goto loc_821ED0A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ED0A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821ED0A4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821ed0c0
	goto loc_821ED0C0;
loc_821ED0B0:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x821357c8
	ctx.lr = 0x821ED0B8;
	sub_821357C8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_821ED0C0:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ed0b0
	if (!ctx.cr6.eq) goto loc_821ED0B0;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ed0e0
	if (ctx.cr6.eq) goto loc_821ED0E0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212ee20
	ctx.lr = 0x821ED0E0;
	sub_8212EE20(ctx, base);
loc_821ED0E0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// beq cr6,0x821ed120
	if (ctx.cr6.eq) goto loc_821ED120;
loc_821ED108:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x821ED110;
	sub_8269CE98(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ed108
	if (!ctx.cr6.eq) goto loc_821ED108;
loc_821ED120:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x8269ce98
	ctx.lr = 0x821ED128;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x821ED138;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214e4b0
	ctx.lr = 0x821ED140;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ed150
	if (ctx.cr0.eq) goto loc_821ED150;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821ED150;
	sub_8269CE98(ctx, base);
loc_821ED150:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F6A00) {
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
	// addi r11,r11,24044
	ctx.r11.s64 = ctx.r11.s64 + 24044;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821f6a2c
	if (ctx.cr0.eq) goto loc_821F6A2C;
	// bl 0x8269ce98
	ctx.lr = 0x821F6A2C;
	sub_8269CE98(ctx, base);
loc_821F6A2C:
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

DEFINE_REX_FUNC(sub_821F9228) {
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
	ctx.lr = 0x821F924C;
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
	ctx.lr = 0x821F9264;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6268(r10)
	REX_STORE_U32(ctx.r10.u32 + 6268, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821FAF90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821FAF98;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fafcc
	if (ctx.cr6.eq) goto loc_821FAFCC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,135
	ctx.r5.s64 = 135;
	// bl 0x821231d0
	ctx.lr = 0x821FAFCC;
	sub_821231D0(ctx, base);
loc_821FAFCC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821FAFE0;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,25364
	ctx.r4.s64 = ctx.r11.s64 + 25364;
	// bl 0x8215f338
	ctx.lr = 0x821FAFEC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,20280
	ctx.r4.s64 = ctx.r11.s64 + 20280;
	// bl 0x8215f338
	ctx.lr = 0x821FAFF8;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FB000;
	sub_8215F2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FB008;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FB00C;
	sub_8215F990(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821FE4B0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE4E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821fe540
	if (!ctx.cr0.gt) goto loc_821FE540;
loc_821FE4EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE504;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,464(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 464);
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// lfs f3,440(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 440);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,436(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,432(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8216ad88
	ctx.lr = 0x821FE520;
	sub_8216AD88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821fe4ec
	if (ctx.cr6.lt) goto loc_821FE4EC;
loc_821FE540:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_82203C00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82203C08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82203c40
	if (!ctx.cr0.eq) goto loc_82203C40;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82203c40
	if (ctx.cr6.gt) goto loc_82203C40;
	// bl 0x82203d60
	ctx.lr = 0x82203C40;
	sub_82203D60(ctx, base);
loc_82203C40:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r29,r11,r9
	r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r29,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82203c60
	if (ctx.cr6.gt) goto loc_82203C60;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82203C60:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82203c8c
	if (!ctx.cr6.eq) goto loc_82203C8C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x82203C7C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82203cbc
	if (ctx.cr0.eq) goto loc_82203CBC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
loc_82203C8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r29,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82203ca8
	if (ctx.cr0.eq) goto loc_82203CA8;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82203CA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82203CBC:
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
	ctx.lr = 0x82203CD8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82208568) {
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
	// ble cr6,0x822085a0
	if (!ctx.cr6.gt) goto loc_822085A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822085bc
	if (ctx.cr6.eq) goto loc_822085BC;
loc_822085A0:
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
	ctx.lr = 0x822085B8;
	sub_821231D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_822085BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822085f0
	if (ctx.cr0.eq) goto loc_822085F0;
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
loc_822085F0:
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

DEFINE_REX_FUNC(sub_8220CCA8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,260
	ctx.r3.s64 = ctx.r3.s64 + 260;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220D108) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8220D110;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r4,292(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r4,288(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 288);
	// stw r31,292(r30)
	REX_STORE_U32(r30.u32 + 292, r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,288(r30)
	REX_STORE_U32(r30.u32 + 288, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8220F998) {
	REX_FUNC_PROLOGUE();
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220f9ac
	if (ctx.cr6.eq) goto loc_8220F9AC;
	// lwz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// blr 
	return;
loc_8220F9AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210BB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14108
	ctx.r3.s64 = ctx.r11.s64 + -14108;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211AD8) {
	REX_FUNC_PROLOGUE();
	// lwz r9,844(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 844);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,824
	ctx.r11.s64 = ctx.r3.s64 + 824;
	// stw r10,840(r3)
	REX_STORE_U32(ctx.r3.u32 + 840, ctx.r10.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82211af4
	if (ctx.cr6.lt) goto loc_82211AF4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82211AF4:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212AE8) {
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
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x822f6280
	ctx.lr = 0x82212B00;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82212b3c
	if (ctx.cr0.eq) goto loc_82212B3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7348
	ctx.lr = 0x82212B10;
	sub_822E7348(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-14776
	ctx.r11.s64 = ctx.r11.s64 + -14776;
	// addi r10,r10,-28684
	ctx.r10.s64 = ctx.r10.s64 + -28684;
	// addi r9,r9,-28636
	ctx.r9.s64 = ctx.r9.s64 + -28636;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r9.u32);
	// b 0x82212b40
	goto loc_82212B40;
loc_82212B3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82212B40:
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

DEFINE_REX_FUNC(sub_82216E50) {
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
	ctx.lr = 0x82216E58;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// bl 0x82178268
	ctx.lr = 0x82216E78;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r7,r11,15048
	ctx.r7.s64 = ctx.r11.s64 + 15048;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r11,r9,-26552
	ctx.r11.s64 = ctx.r9.s64 + -26552;
	// addi r10,r10,31396
	ctx.r10.s64 = ctx.r10.s64 + 31396;
	// addi r9,r8,-26504
	ctx.r9.s64 = ctx.r8.s64 + -26504;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// lfs f0,-22312(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// li r10,200
	ctx.r10.s64 = 200;
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r18,r31,160
	r18.s64 = r31.s64 + 160;
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stb r11,143(r31)
	REX_STORE_U8(r31.u32 + 143, ctx.r11.u8);
	// stb r10,142(r31)
	REX_STORE_U8(r31.u32 + 142, ctx.r10.u8);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// stb r22,141(r31)
	REX_STORE_U8(r31.u32 + 141, r22.u8);
	// addi r21,r31,128
	r21.s64 = r31.s64 + 128;
	// stb r11,140(r31)
	REX_STORE_U8(r31.u32 + 140, ctx.r11.u8);
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// addi r19,r31,136
	r19.s64 = r31.s64 + 136;
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// addi r28,r31,140
	r28.s64 = r31.s64 + 140;
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// addi r27,r31,144
	r27.s64 = r31.s64 + 144;
	// bl 0x822e6df0
	ctx.lr = 0x82216F08;
	sub_822E6DF0(ctx, base);
	// stfs f31,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// stfs f31,256(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// addi r17,r31,268
	r17.s64 = r31.s64 + 268;
	// stfs f31,260(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// addi r26,r31,252
	r26.s64 = r31.s64 + 252;
	// stfs f31,264(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822e6df0
	ctx.lr = 0x82216F28;
	sub_822E6DF0(ctx, base);
	// stfs f31,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 360, temp.u32);
	// stfs f31,364(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 364, temp.u32);
	// addi r16,r31,376
	r16.s64 = r31.s64 + 376;
	// stfs f31,368(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 368, temp.u32);
	// addi r25,r31,360
	r25.s64 = r31.s64 + 360;
	// stfs f31,372(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 372, temp.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822e6df0
	ctx.lr = 0x82216F48;
	sub_822E6DF0(ctx, base);
	// stfs f31,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
	// stfs f31,472(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// addi r15,r31,484
	r15.s64 = r31.s64 + 484;
	// stfs f31,476(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
	// addi r24,r31,468
	r24.s64 = r31.s64 + 468;
	// stfs f31,480(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 480, temp.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822e6df0
	ctx.lr = 0x82216F68;
	sub_822E6DF0(ctx, base);
	// stfs f31,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 576, temp.u32);
	// stfs f31,580(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 580, temp.u32);
	// addi r14,r31,592
	r14.s64 = r31.s64 + 592;
	// stfs f31,584(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 584, temp.u32);
	// addi r23,r31,576
	r23.s64 = r31.s64 + 576;
	// stfs f31,588(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 588, temp.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x822e6df0
	ctx.lr = 0x82216F88;
	sub_822E6DF0(ctx, base);
	// addi r3,r31,684
	ctx.r3.s64 = r31.s64 + 684;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// bl 0x8226b010
	ctx.lr = 0x82216F98;
	sub_8226B010(ctx, base);
	// stw r22,908(r31)
	REX_STORE_U32(r31.u32 + 908, r22.u32);
	// stw r22,912(r31)
	REX_STORE_U32(r31.u32 + 912, r22.u32);
	// stw r22,916(r31)
	REX_STORE_U32(r31.u32 + 916, r22.u32);
	// stw r22,924(r31)
	REX_STORE_U32(r31.u32 + 924, r22.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x82216FB0;
	sub_822F6280(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x82216fe0
	if (ctx.cr0.eq) goto loc_82216FE0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x82216FC8;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x821d13f8
	ctx.lr = 0x82216FDC;
	sub_821D13F8(ctx, base);
	// b 0x82216fe4
	goto loc_82216FE4;
loc_82216FE0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82216FE4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82216FF8;
	sub_82145710(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217014
	if (ctx.cr0.eq) goto loc_82217014;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r29,r29,0,0,30
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82217014;
	sub_82120AC0(ctx, base);
loc_82217014:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8221701C;
	sub_822F6280(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x8221704c
	if (ctx.cr0.eq) goto loc_8221704C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x82120600
	ctx.lr = 0x82217034;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// ori r29,r29,2
	r29.u64 = r29.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x82217048;
	sub_82196BA8(ctx, base);
	// b 0x82217050
	goto loc_82217050;
loc_8221704C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82217050:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82217060;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221707c
	if (ctx.cr0.eq) goto loc_8221707C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8221707C;
	sub_82120AC0(ctx, base);
loc_8221707C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82217084;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x822170b4
	if (ctx.cr0.eq) goto loc_822170B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// bl 0x82120600
	ctx.lr = 0x8221709C;
	sub_82120600(ctx, base);
	// addi r5,r31,132
	ctx.r5.s64 = r31.s64 + 132;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x822170B0;
	sub_82196BA8(ctx, base);
	// b 0x822170b8
	goto loc_822170B8;
loc_822170B4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822170B8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x822170C8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822170e4
	if (ctx.cr0.eq) goto loc_822170E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rlwinm r29,r29,0,30,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x822170E4;
	sub_82120AC0(ctx, base);
loc_822170E4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822170EC;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x8221711c
	if (ctx.cr0.eq) goto loc_8221711C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-28492
	ctx.r4.s64 = ctx.r11.s64 + -28492;
	// bl 0x82120600
	ctx.lr = 0x82217104;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r29,r29,8
	r29.u64 = r29.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x82217118;
	sub_82196BA8(ctx, base);
	// b 0x82217120
	goto loc_82217120;
loc_8221711C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82217120:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82217130;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221714c
	if (ctx.cr0.eq) goto loc_8221714C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r29,r29,0,29,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x8221714C;
	sub_82120AC0(ctx, base);
loc_8221714C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82217154;
	sub_822F6280(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x82217184
	if (ctx.cr0.eq) goto loc_82217184;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,-27220
	ctx.r4.s64 = ctx.r11.s64 + -27220;
	// bl 0x82120600
	ctx.lr = 0x8221716C;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r29,r29,16
	r29.u64 = r29.u64 | 16;
	// bl 0x8219d708
	ctx.lr = 0x82217180;
	sub_8219D708(ctx, base);
	// b 0x82217188
	goto loc_82217188;
loc_82217184:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82217188:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82217198;
	sub_82145710(ctx, base);
	// rlwinm. r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822171b0
	if (ctx.cr0.eq) goto loc_822171B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82120ac0
	ctx.lr = 0x822171B0;
	sub_82120AC0(ctx, base);
loc_822171B0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-27196
	ctx.r4.s64 = ctx.r11.s64 + -27196;
	// bl 0x82120600
	ctx.lr = 0x822171C0;
	sub_82120600(ctx, base);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x822171D0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82120ac0
	ctx.lr = 0x822171E0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-27184
	ctx.r4.s64 = ctx.r11.s64 + -27184;
	// bl 0x82120600
	ctx.lr = 0x822171F0;
	sub_82120600(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82217200;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82120ac0
	ctx.lr = 0x82217210;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27172
	ctx.r4.s64 = ctx.r11.s64 + -27172;
	// bl 0x82120600
	ctx.lr = 0x82217220;
	sub_82120600(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82217230;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82217240;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,-27160
	ctx.r4.s64 = ctx.r11.s64 + -27160;
	// bl 0x82120600
	ctx.lr = 0x82217250;
	sub_82120600(ctx, base);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82217260;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82120ac0
	ctx.lr = 0x82217270;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-28484
	ctx.r4.s64 = ctx.r11.s64 + -28484;
	// bl 0x82120600
	ctx.lr = 0x82217280;
	sub_82120600(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82217290;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x822172A0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-28472
	ctx.r4.s64 = ctx.r11.s64 + -28472;
	// bl 0x82120600
	ctx.lr = 0x822172B0;
	sub_82120600(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822e7f20
	ctx.lr = 0x822172C0;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x822172D0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-27148
	ctx.r4.s64 = ctx.r11.s64 + -27148;
	// bl 0x82120600
	ctx.lr = 0x822172E0;
	sub_82120600(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x822172F0;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x82217300;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,-27136
	ctx.r4.s64 = ctx.r11.s64 + -27136;
	// bl 0x82120600
	ctx.lr = 0x82217310;
	sub_82120600(ctx, base);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82217320;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120ac0
	ctx.lr = 0x82217330;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-27124
	ctx.r4.s64 = ctx.r11.s64 + -27124;
	// bl 0x82120600
	ctx.lr = 0x82217340;
	sub_82120600(ctx, base);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x82217350;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82120ac0
	ctx.lr = 0x82217360;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,-27112
	ctx.r4.s64 = ctx.r11.s64 + -27112;
	// bl 0x82120600
	ctx.lr = 0x82217370;
	sub_82120600(ctx, base);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x822e7f20
	ctx.lr = 0x82217380;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82120ac0
	ctx.lr = 0x82217390;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x822173A0;
	sub_82120600(ctx, base);
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8226b670
	ctx.lr = 0x822173B4;
	sub_8226B670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82120ac0
	ctx.lr = 0x822173C4;
	sub_82120AC0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x822173CC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82217440
	if (ctx.cr0.eq) goto loc_82217440;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r22,8(r30)
	REX_STORE_U32(r30.u32 + 8, r22.u32);
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r10,32152
	ctx.r11.s64 = ctx.r10.s64 + 32152;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82217408;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82217430
	if (ctx.cr0.eq) goto loc_82217430;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-12728
	ctx.r9.s64 = ctx.r9.s64 + -12728;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x82217434
	goto loc_82217434;
loc_82217430:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82217434:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82217444
	goto loc_82217444;
loc_82217440:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_82217444:
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x82217450;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x82217458;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822174d8
	if (ctx.cr0.eq) goto loc_822174D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfs f31,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r11,r11,32576
	ctx.r11.s64 = ctx.r11.s64 + 32576;
	// stw r22,8(r30)
	REX_STORE_U32(r30.u32 + 8, r22.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r10,32744
	ctx.r11.s64 = ctx.r10.s64 + 32744;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82217498;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822174c0
	if (ctx.cr0.eq) goto loc_822174C0;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-13900
	ctx.r9.s64 = ctx.r9.s64 + -13900;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x822174c4
	goto loc_822174C4;
loc_822174C0:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822174C4:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e7a50
	ctx.lr = 0x822174D0;
	sub_822E7A50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x822174dc
	goto loc_822174DC;
loc_822174D8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822174DC:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x822174E8;
	sub_821D3988(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82217500;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-12728
	r29.s64 = ctx.r11.s64 + -12728;
	// beq 0x82217528
	if (ctx.cr0.eq) goto loc_82217528;
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
	// b 0x8221752c
	goto loc_8221752C;
loc_82217528:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8221752C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// addi r5,r11,-28924
	ctx.r5.s64 = ctx.r11.s64 + -28924;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216be80
	ctx.lr = 0x82217540;
	sub_8216BE80(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r11,r11,31296
	ctx.r11.s64 = ctx.r11.s64 + 31296;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82217558;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82217578
	if (ctx.cr0.eq) goto loc_82217578;
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
	// b 0x8221757c
	goto loc_8221757C;
loc_82217578:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_8221757C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,-27100
	ctx.r5.s64 = ctx.r11.s64 + -27100;
	// bl 0x8216be80
	ctx.lr = 0x8221758C;
	sub_8216BE80(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r11,r11,31928
	ctx.r11.s64 = ctx.r11.s64 + 31928;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822175A4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822175c4
	if (ctx.cr0.eq) goto loc_822175C4;
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
	// b 0x822175c8
	goto loc_822175C8;
loc_822175C4:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_822175C8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,-27088
	ctx.r5.s64 = ctx.r11.s64 + -27088;
	// bl 0x8216be80
	ctx.lr = 0x822175D8;
	sub_8216BE80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// bl 0x82120600
	ctx.lr = 0x822175E8;
	sub_82120600(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x822175F8;
	sub_82180E18(ctx, base);
	// stw r3,900(r31)
	REX_STORE_U32(r31.u32 + 900, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82120ac0
	ctx.lr = 0x8221760C;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,-27060
	ctx.r4.s64 = ctx.r11.s64 + -27060;
	// bl 0x82120600
	ctx.lr = 0x8221761C;
	sub_82120600(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82217628;
	sub_82180E18(ctx, base);
	// stw r3,904(r31)
	REX_STORE_U32(r31.u32 + 904, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82120ac0
	ctx.lr = 0x8221763C;
	sub_82120AC0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82213de8
	ctx.lr = 0x82217648;
	sub_82213DE8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,860(r31)
	REX_STORE_U32(r31.u32 + 860, ctx.r11.u32);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82251758) {
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
	ctx.lr = 0x82251760;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82251798
	if (!ctx.cr6.eq) goto loc_82251798;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-12412
	ctx.r4.s64 = ctx.r11.s64 + -12412;
	// addi r3,r10,-12100
	ctx.r3.s64 = ctx.r10.s64 + -12100;
	// li r5,379
	ctx.r5.s64 = 379;
	// bl 0x821231d0
	ctx.lr = 0x82251798;
	sub_821231D0(ctx, base);
loc_82251798:
	// ld r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 160);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 168);
	// addi r8,r31,160
	ctx.r8.s64 = r31.s64 + 160;
	// lwz r8,212(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// beq cr6,0x822517d0
	if (ctx.cr6.eq) goto loc_822517D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82250250
	ctx.lr = 0x822517C8;
	sub_82250250(ctx, base);
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
	// b 0x822517d4
	goto loc_822517D4;
loc_822517D0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822517D4:
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// addi r31,r8,16592
	r31.s64 = ctx.r8.s64 + 16592;
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f30,15048(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	f30.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f31,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	f31.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f9.f64)));
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fdivs f9,f31,f9
	ctx.f9.f64 = double(float(f31.f64 / ctx.f9.f64));
	// fmadds f8,f11,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f8.f64)));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fsqrts f9,f8
	ctx.f9.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f9,f31,f9
	ctx.f9.f64 = double(float(f31.f64 / ctx.f9.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
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
	// lfsx f13,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
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
	// fsel f1,f13,f10,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// bl 0x82186c18
	ctx.lr = 0x822518A4;
	sub_82186C18(ctx, base);
	// lfs f0,976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 976);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f11,92(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,972(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,980(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 980);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r10,r31,256
	ctx.r10.s64 = r31.s64 + 256;
	// addi r9,r31,256
	ctx.r9.s64 = r31.s64 + 256;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, f30.f64);
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
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - f31.f64));
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lfsx f10,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f0,f10,f11,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
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
	// rlwinm r8,r11,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lfsx f12,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f12,f31,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
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
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// fsubs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfsx f11,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f30,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? f30.f64 : ctx.f13.f64;
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8226CD70) {
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
	ctx.lr = 0x8226CD78;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// li r19,0
	r19.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8226cdd8
	if (ctx.cr6.eq) goto loc_8226CDD8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8226cdc0
	if (!ctx.cr6.eq) goto loc_8226CDC0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-5432
	ctx.r4.s64 = ctx.r11.s64 + -5432;
	// addi r3,r10,-5376
	ctx.r3.s64 = ctx.r10.s64 + -5376;
	// li r5,302
	ctx.r5.s64 = 302;
	// bl 0x821231d0
	ctx.lr = 0x8226CDC0;
	sub_821231D0(ctx, base);
loc_8226CDC0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x8226cdd8
	if (!ctx.cr6.gt) goto loc_8226CDD8;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8226cdd8
	if (!ctx.cr6.eq) goto loc_8226CDD8;
loc_8226CDD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226d1d8
	goto loc_8226D1D8;
loc_8226CDD8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// bl 0x82120600
	ctx.lr = 0x8226CDE8;
	sub_82120600(ctx, base);
	// lis r20,-32106
	r20.s64 = -2104098816;
	// li r31,1
	r31.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,6256(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CE14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r21,7
	r21.s64 = 7;
	// beq 0x8226cef0
	if (ctx.cr0.eq) goto loc_8226CEF0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-24748
	ctx.r4.s64 = ctx.r11.s64 + -24748;
	// bl 0x82120600
	ctx.lr = 0x8226CE30;
	sub_82120600(ctx, base);
	// lwz r3,6256(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r30,3
	r30.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CE50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226cef0
	if (ctx.cr0.eq) goto loc_8226CEF0;
	// lwz r3,6256(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CE74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226cef0
	if (ctx.cr0.eq) goto loc_8226CEF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-25384
	ctx.r4.s64 = ctx.r11.s64 + -25384;
	// bl 0x82120600
	ctx.lr = 0x8226CE8C;
	sub_82120600(ctx, base);
	// lwz r3,6256(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r30,r21
	r30.u64 = r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CEAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226cef0
	if (ctx.cr0.eq) goto loc_8226CEF0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-5296
	ctx.r4.s64 = ctx.r11.s64 + -5296;
	// bl 0x82120600
	ctx.lr = 0x8226CEC4;
	sub_82120600(ctx, base);
	// lwz r3,6256(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r30,15
	r30.s64 = 15;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226CEE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// bne 0x8226cef4
	if (!ctx.cr0.eq) goto loc_8226CEF4;
loc_8226CEF0:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8226CEF4:
	// rlwinm. r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r29,r11,24
	r29.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8226cf14
	if (ctx.cr0.eq) goto loc_8226CF14;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x8226CF14;
	sub_82120AC0(ctx, base);
loc_8226CF14:
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226cf30
	if (ctx.cr0.eq) goto loc_8226CF30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8226CF30;
	sub_82120AC0(ctx, base);
loc_8226CF30:
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226cf4c
	if (ctx.cr0.eq) goto loc_8226CF4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8226CF4C;
	sub_82120AC0(ctx, base);
loc_8226CF4C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226cf64
	if (ctx.cr0.eq) goto loc_8226CF64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x8226CF64;
	sub_82120AC0(ctx, base);
loc_8226CF64:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226cdd0
	if (!ctx.cr0.eq) goto loc_8226CDD0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-7936
	ctx.r4.s64 = ctx.r11.s64 + -7936;
	// bl 0x8215f670
	ctx.lr = 0x8226CF7C;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226CF80;
	sub_8215F270(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,-16680
	r29.s64 = ctx.r11.s64 + -16680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CF98;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CFA0;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r11,-17264
	r28.s64 = ctx.r11.s64 + -17264;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CFBC;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215fc78
	ctx.lr = 0x8226CFC4;
	sub_8215FC78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x8226CFD0;
	sub_8215DC10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CFDC;
	sub_8215F670(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215f200
	ctx.lr = 0x8226CFE4;
	sub_8215F200(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226CFF4;
	sub_8215F670(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226CFFC;
	sub_8215F0F0(ctx, base);
	// stw r27,8(r23)
	REX_STORE_U32(r23.u32 + 8, r27.u32);
	// stw r31,0(r23)
	REX_STORE_U32(r23.u32 + 0, r31.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r27,r11,-17344
	r27.s64 = ctx.r11.s64 + -17344;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D018;
	sub_8215F670(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226D020;
	sub_8215F0F0(ctx, base);
	// li r23,2
	r23.s64 = 2;
	// stw r31,0(r22)
	REX_STORE_U32(r22.u32 + 0, r31.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r23,8(r22)
	REX_STORE_U32(r22.u32 + 8, r23.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r26,r11,-17164
	r26.s64 = ctx.r11.s64 + -17164;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D040;
	sub_8215F670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r21.u32);
	// std r25,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r25.u64);
	// bl 0x8215f670
	ctx.lr = 0x8226D058;
	sub_8215F670(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8215f200
	ctx.lr = 0x8226D060;
	sub_8215F200(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r17,100(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D070;
	sub_8215F670(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226D078;
	sub_8215F0F0(ctx, base);
	// stw r17,8(r16)
	REX_STORE_U32(r16.u32 + 8, r17.u32);
	// stw r31,0(r16)
	REX_STORE_U32(r16.u32 + 0, r31.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D08C;
	sub_8215F670(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226D094;
	sub_8215F0F0(ctx, base);
	// stw r31,0(r17)
	REX_STORE_U32(r17.u32 + 0, r31.u32);
	// stw r23,8(r17)
	REX_STORE_U32(r17.u32 + 8, r23.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D0A8;
	sub_8215F670(ctx, base);
	// neg r11,r25
	ctx.r11.s64 = static_cast<int64_t>(-r25.u64);
	// mr r25,r19
	r25.u64 = r19.u64;
	// addi r22,r24,-8
	r22.s64 = r24.s64 + -8;
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
loc_8226D0B8:
	// stw r21,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r21.u32);
	// cmpwi cr6,r18,16
	ctx.cr6.compare<int32_t>(r18.s32, 16, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// blt cr6,0x8226d0cc
	if (ctx.cr6.lt) goto loc_8226D0CC;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8226D0CC:
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226d168
	if (!ctx.cr6.lt) goto loc_8226D168;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D0E0;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226D0E4;
	sub_8215F270(ctx, base);
	// lwz r11,6256(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 6256);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,140(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226D108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226d168
	if (ctx.cr0.eq) goto loc_8226D168;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r17,96(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D120;
	sub_8215F670(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226D128;
	sub_8215F0F0(ctx, base);
	// stw r17,8(r16)
	REX_STORE_U32(r16.u32 + 8, r17.u32);
	// stw r31,0(r16)
	REX_STORE_U32(r16.u32 + 0, r31.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D13C;
	sub_8215F670(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226D144;
	sub_8215F0F0(ctx, base);
	// stw r31,0(r17)
	REX_STORE_U32(r17.u32 + 0, r31.u32);
	// stw r23,8(r17)
	REX_STORE_U32(r17.u32 + 8, r23.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// ldu r24,8(r22)
	ea = 8 + r22.u32;
	r24.u64 = REX_LOAD_U64(ea);
	r22.u32 = ea;
	// bl 0x8215f670
	ctx.lr = 0x8226D15C;
	sub_8215F670(ctx, base);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// std r24,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r24.u64);
	// b 0x8226d0b8
	goto loc_8226D0B8;
loc_8226D168:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D174;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x8226D178;
	sub_8215F270(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D188;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226D190;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x8226D1A4;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226D1AC;
	sub_8215F0F0(ctx, base);
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r19,8(r29)
	REX_STORE_U32(r29.u32 + 8, r19.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8215f670
	ctx.lr = 0x8226D1C4;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8226D1CC;
	sub_8215F0F0(ctx, base);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_8226D1D8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_8228A348) {
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
	// bl 0x821bf1e8
	ctx.lr = 0x8228A370;
	sub_821BF1E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228baf8
	ctx.lr = 0x8228A380;
	sub_8228BAF8(ctx, base);
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

DEFINE_REX_FUNC(sub_8228B028) {
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
	ctx.lr = 0x8228B030;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x8228b0c8
	if (ctx.cr6.eq) goto loc_8228B0C8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8228b0c8
	if (!ctx.cr6.gt) goto loc_8228B0C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r28.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228B080;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r5,r11,-27404
	ctx.r5.s64 = ctx.r11.s64 + -27404;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228B098;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r11,3268
	ctx.r5.s64 = ctx.r11.s64 + 3268;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228B0B0;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x8228B0C0;
	sub_8216BC98(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,116(r29)
	REX_STORE_U32(r29.u32 + 116, ctx.r11.u32);
loc_8228B0C8:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r3,6212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B0E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8228b19c
	if (ctx.cr6.eq) goto loc_8228B19C;
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x8228b10c
	if (!ctx.cr6.eq) goto loc_8228B10C;
	// stw r28,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r28.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r11,-26364
	ctx.r3.s64 = ctx.r11.s64 + -26364;
	// bl 0x8216bc98
	ctx.lr = 0x8228B10C;
	sub_8216BC98(ctx, base);
loc_8228B10C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8228b188
	if (ctx.cr6.eq) goto loc_8228B188;
	// lwz r3,6212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B13C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8228b17c
	if (!ctx.cr6.eq) goto loc_8228B17C;
	// lis r30,-32106
	r30.s64 = -2104098816;
loc_8228B148:
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228B174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8228b148
	if (ctx.cr6.eq) goto loc_8228B148;
loc_8228B17C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228b1b0
	ctx.lr = 0x8228B184;
	sub_8228B1B0(ctx, base);
	// b 0x8228b19c
	goto loc_8228B19C;
loc_8228B188:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r10.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 124, temp.u32);
loc_8228B19C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822947A0) {
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
	ctx.lr = 0x822947A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5156
	ctx.r11.s64 = ctx.r11.s64 + 5156;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82294848
	if (!ctx.cr6.gt) goto loc_82294848;
	// li r28,0
	r28.s64 = 0;
loc_822947D0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r29,r11,r28
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r30,200(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 200);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82294834
	if (ctx.cr6.eq) goto loc_82294834;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822947F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294810;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229482C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,200(r29)
	REX_STORE_U32(r29.u32 + 200, ctx.r11.u32);
loc_82294834:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822947d0
	if (ctx.cr6.lt) goto loc_822947D0;
loc_82294848:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x821eced8
	ctx.lr = 0x82294850;
	sub_821ECED8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8229DF88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8229DF90;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8229dfcc
	if (!ctx.cr6.lt) goto loc_8229DFCC;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
loc_8229DFCC:
	// lfs f10,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x8229dfdc
	if (!ctx.cr6.lt) goto loc_8229DFDC;
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
loc_8229DFDC:
	// lfs f11,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8229dfec
	if (!ctx.cr6.lt) goto loc_8229DFEC;
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
loc_8229DFEC:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8229dff8
	if (!ctx.cr6.gt) goto loc_8229DFF8;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
loc_8229DFF8:
	// fcmpu cr6,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x8229e004
	if (!ctx.cr6.gt) goto loc_8229E004;
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
loc_8229E004:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x8229e010
	if (!ctx.cr6.gt) goto loc_8229E010;
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
loc_8229E010:
	// lfs f13,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x8229e024
	if (!ctx.cr6.lt) goto loc_8229E024;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
loc_8229E024:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bge cr6,0x8229e038
	if (!ctx.cr6.lt) goto loc_8229E038;
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
loc_8229E038:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bge cr6,0x8229e04c
	if (!ctx.cr6.lt) goto loc_8229E04C;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
loc_8229E04C:
	// fcmpu cr6,f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x8229e058
	if (!ctx.cr6.lt) goto loc_8229E058;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_8229E058:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x8229e068
	if (!ctx.cr6.lt) goto loc_8229E068;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
loc_8229E068:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x8229e078
	if (!ctx.cr6.lt) goto loc_8229E078;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_8229E078:
	// lfs f13,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x8229e08c
	if (!ctx.cr6.lt) goto loc_8229E08C;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
loc_8229E08C:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bge cr6,0x8229e0a0
	if (!ctx.cr6.lt) goto loc_8229E0A0;
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
loc_8229E0A0:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bge cr6,0x8229e0b4
	if (!ctx.cr6.lt) goto loc_8229E0B4;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
loc_8229E0B4:
	// fcmpu cr6,f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x8229e0c0
	if (!ctx.cr6.lt) goto loc_8229E0C0;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_8229E0C0:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x8229e0d0
	if (!ctx.cr6.lt) goto loc_8229E0D0;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
loc_8229E0D0:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x8229e0e0
	if (!ctx.cr6.lt) goto loc_8229E0E0;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_8229E0E0:
	// fsubs f12,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f13,1104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8229e0fc
	if (!ctx.cr6.lt) goto loc_8229E0FC;
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
loc_8229E0FC:
	// fsubs f12,f5,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8229e110
	if (!ctx.cr6.lt) goto loc_8229E110;
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fsubs f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
loc_8229E110:
	// fsubs f12,f7,f6
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8229e124
	if (!ctx.cr6.lt) goto loc_8229E124;
	// fadds f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fsubs f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
loc_8229E124:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r5,21,0,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0xFFE00000;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lfs f13,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lfs f12,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f11,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f5,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// lfs f10,48(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f9,52(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// lfs f7,56(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f2,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// fsubs f9,f6,f2
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fmuls f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f7,f3,f5
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fctidz f10,f8
	ctx.f10.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// fctidz f10,f7
	ctx.f10.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lhz r8,94(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// fctidz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// lhz r7,94(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// fctidz f0,f11
	ctx.f0.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r6,86(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r5,102(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r4,94(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,114(r1)
	REX_STORE_U16(ctx.r1.u32 + 114, ctx.r8.u16);
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// sth r9,112(r1)
	REX_STORE_U16(ctx.r1.u32 + 112, ctx.r9.u16);
	// ori r8,r6,1
	ctx.r8.u64 = ctx.r6.u64 | 1;
	// ori r9,r5,1
	ctx.r9.u64 = ctx.r5.u64 | 1;
	// sth r7,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, ctx.r7.u16);
	// rlwinm r4,r4,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r8,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r8.u16);
	// sth r9,122(r1)
	REX_STORE_U16(ctx.r1.u32 + 122, ctx.r9.u16);
	// sth r4,116(r1)
	REX_STORE_U16(ctx.r1.u32 + 116, ctx.r4.u16);
	// bne cr6,0x8229e2fc
	if (!ctx.cr6.eq) goto loc_8229E2FC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8229e240
	if (!ctx.cr0.eq) goto loc_8229E240;
	// li r29,1
	r29.s64 = 1;
loc_8229E240:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x8229e2fc
	if (!ctx.cr6.lt) goto loc_8229E2FC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8229e260
	if (ctx.cr6.eq) goto loc_8229E260;
	// rlwinm r3,r29,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822c1a70
	ctx.lr = 0x8229E258;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8229e264
	goto loc_8229E264;
loc_8229E260:
	// li r30,0
	r30.s64 = 0;
loc_8229E264:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8229e2a8
	if (!ctx.cr6.gt) goto loc_8229E2A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8229E278:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e298
	if (ctx.cr6.eq) goto loc_8229E298;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ldx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
loc_8229E298:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x8229e278
	if (!ctx.cr0.eq) goto loc_8229E278;
loc_8229E2A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e2ec
	if (ctx.cr6.eq) goto loc_8229E2EC;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8229e2e4
	if (ctx.cr0.eq) goto loc_8229E2E4;
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
	ctx.lr = 0x8229E2E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229E2E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_8229E2EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_8229E2FC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229e324
	if (ctx.cr0.eq) goto loc_8229E324;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_8229E324:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822C0838) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f2,36(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// bge cr6,0x822c086c
	if (!ctx.cr6.lt) goto loc_822C086C;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// b 0x822c087c
	goto loc_822C087C;
loc_822C086C:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// bgt cr6,0x822c087c
	if (ctx.cr6.gt) goto loc_822C087C;
	// addi r11,r1,28
	ctx.r11.s64 = ctx.r1.s64 + 28;
loc_822C087C:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f12,464(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// bge cr6,0x822c089c
	if (!ctx.cr6.lt) goto loc_822C089C;
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// b 0x822c08ac
	goto loc_822C08AC;
loc_822C089C:
	// fcmpu cr6,f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// bgt cr6,0x822c08ac
	if (ctx.cr6.gt) goto loc_822C08AC;
	// addi r11,r1,36
	ctx.r11.s64 = ctx.r1.s64 + 36;
loc_822C08AC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,468(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2398) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12024(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwimi r10,r4,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12024(r3)
	REX_STORE_U32(ctx.r3.u32 + 12024, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// bne 0x822c23dc
	if (!ctx.cr0.eq) goto loc_822C23DC;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_822C23DC:
	// stw r11,10552(r3)
	REX_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	REX_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	REX_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	REX_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3388) {
	REX_FUNC_PROLOGUE();
	// lhz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3438) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3938) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10696(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10696);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3A80) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10562(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10562);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lbz r9,12178(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12178);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	r30.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFF) | (r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	r30.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FF00000) | (r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,12178
	ctx.r9.s64 = ctx.r11.s64 + 12178;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,12178(r11)
	REX_STORE_U8(ctx.r11.u32 + 12178, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CA1B0) {
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
	// li r30,0
	r30.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stb r30,124(r31)
	REX_STORE_U8(r31.u32 + 124, r30.u8);
	// bl 0x826a2e60
	ctx.lr = 0x822CA1EC;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x826a2e60
	ctx.lr = 0x822CA1FC;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x826a2e60
	ctx.lr = 0x822CA20C;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826a2e60
	ctx.lr = 0x822CA21C;
	sub_826A2E60(ctx, base);
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r30,260(r31)
	REX_STORE_U32(r31.u32 + 260, r30.u32);
	// stw r30,264(r31)
	REX_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,316(r31)
	REX_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,324(r31)
	REX_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,340(r31)
	REX_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r30,344(r31)
	REX_STORE_U32(r31.u32 + 344, r30.u32);
	// stw r30,348(r31)
	REX_STORE_U32(r31.u32 + 348, r30.u32);
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

DEFINE_REX_FUNC(sub_822CDEB8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CE338) {
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
	ctx.lr = 0x822CE340;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,19900(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 19900);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ce504
	if (ctx.cr6.lt) goto loc_822CE504;
	// lwz r11,19904(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 19904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ce370
	if (!ctx.cr6.eq) goto loc_822CE370;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822ce504
	goto loc_822CE504;
loc_822CE370:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,19892(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 19892);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r25,24(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 24);
	// rlwinm r8,r9,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// lis r7,4138
	ctx.r7.s64 = 271187968;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ori r7,r7,4352
	ctx.r7.u64 = ctx.r7.u64 | 4352;
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// std r11,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// rlwimi r7,r9,31,26,26
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x20) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFDF);
	// std r11,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r31,r27,20
	r31.s64 = r27.s64 + 20;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// andi. r10,r10,222
	ctx.r10.u64 = ctx.r10.u64 & 222;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x822c9c30
	ctx.lr = 0x822CE3D4;
	sub_822C9C30(ctx, base);
	// lwz r11,19924(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 19924);
	// rlwinm. r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822ce3f8
	if (ctx.cr0.eq) goto loc_822CE3F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,19920(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 19920);
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x822c9c30
	ctx.lr = 0x822CE3F8;
	sub_822C9C30(ctx, base);
loc_822CE3F8:
	// lwz r11,19912(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 19912);
	// rlwinm. r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822ce434
	if (ctx.cr0.eq) goto loc_822CE434;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - r25.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x822c9c30
	ctx.lr = 0x822CE424;
	sub_822C9C30(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,19908(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 19908);
	// bl 0x822c9c30
	ctx.lr = 0x822CE434;
	sub_822C9C30(ctx, base);
loc_822CE434:
	// addi r28,r1,116
	r28.s64 = ctx.r1.s64 + 116;
	// addi r29,r30,368
	r29.s64 = r30.s64 + 368;
	// li r26,2
	r26.s64 = 2;
loc_822CE440:
	// lwz r11,9564(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 9564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ce46c
	if (!ctx.cr6.eq) goto loc_822CE46C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// bl 0x822c9d38
	ctx.lr = 0x822CE460;
	sub_822C9D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822ce46c
	if (!ctx.cr0.lt) goto loc_822CE46C;
	// stw r3,19900(r30)
	REX_STORE_U32(r30.u32 + 19900, ctx.r3.u32);
loc_822CE46C:
	// lwz r11,-240(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ce498
	if (ctx.cr6.eq) goto loc_822CE498;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,-352
	ctx.r3.s64 = r29.s64 + -352;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// bl 0x822cab98
	ctx.lr = 0x822CE48C;
	sub_822CAB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822ce498
	if (!ctx.cr0.lt) goto loc_822CE498;
	// stw r3,19900(r30)
	REX_STORE_U32(r30.u32 + 19900, ctx.r3.u32);
loc_822CE498:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r29,r29,9936
	r29.s64 = r29.s64 + 9936;
	// bne 0x822ce440
	if (!ctx.cr0.eq) goto loc_822CE440;
	// lwz r11,19952(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 19952);
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,12(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r25,4(r31)
	REX_STORE_U32(r31.u32 + 4, r25.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x822c9c30
	ctx.lr = 0x822CE4E0;
	sub_822C9C30(ctx, base);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822ce4fc
	if (ctx.cr6.lt) goto loc_822CE4FC;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822ce500
	if (!ctx.cr6.lt) goto loc_822CE500;
loc_822CE4FC:
	// stw r11,19900(r30)
	REX_STORE_U32(r30.u32 + 19900, ctx.r11.u32);
loc_822CE500:
	// lwz r3,19900(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 19900);
loc_822CE504:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822DE098) {
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
	ctx.lr = 0x822DE0A0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x823ed118
	ctx.lr = 0x822DE0B4;
	sub_823ED118(ctx, base);
	// lis r24,-32256
	r24.s64 = -2113929216;
	// lis r23,-32256
	r23.s64 = -2113929216;
loc_822DE0BC:
	// lis r11,-5
	ctx.r11.s64 = -327680;
	// lwz r25,0(r28)
	r25.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,27680
	ctx.r11.u64 = ctx.r11.u64 | 27680;
	// lwz r8,88(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 88);
	// lwz r7,84(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 84);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,376(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 376);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r11,r9
	r26.u64 = ctx.r11.u64 & ctx.r9.u64;
	// bne cr6,0x822de204
	if (!ctx.cr6.eq) goto loc_822DE204;
	// addi r31,r25,44
	r31.s64 = r25.s64 + 44;
loc_822DE0FC:
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
	// bne 0x822de0fc
	if (!ctx.cr0.eq) goto loc_822DE0FC;
	// addi r27,r28,60
	r27.s64 = r28.s64 + 60;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82793e64
	ctx.lr = 0x822DE134;
	__imp__KeWaitForSingleObject(ctx, base);
loc_822DE134:
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
	// bne 0x822de134
	if (!ctx.cr0.eq) goto loc_822DE134;
	// b 0x822de1fc
	goto loc_822DE1FC;
loc_822DE154:
	// bl 0x82793a84
	ctx.lr = 0x822DE158;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822de168
	if (!ctx.cr6.eq) goto loc_822DE168;
	// lwz r11,2064(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 2064);
	// b 0x822de16c
	goto loc_822DE16C;
loc_822DE168:
	// lwz r11,2068(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 2068);
loc_822DE16C:
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r30,15156
	r29.s64 = r30.s64 + 15156;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x822DE17C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,10942(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 10942);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822de1a4
	if (ctx.cr0.eq) goto loc_822DE1A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cf418
	ctx.lr = 0x822DE194;
	sub_822CF418(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,15056
	ctx.r4.s64 = r30.s64 + 15056;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cf950
	ctx.lr = 0x822DE1A4;
	sub_822CF950(ctx, base);
loc_822DE1A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x822DE1AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_822DE1AC:
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
	// bne 0x822de1ac
	if (!ctx.cr0.eq) goto loc_822DE1AC;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82793e64
	ctx.lr = 0x822DE1E0;
	__imp__KeWaitForSingleObject(ctx, base);
loc_822DE1E0:
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
	// bne 0x822de1e0
	if (!ctx.cr0.eq) goto loc_822DE1E0;
loc_822DE1FC:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x822de154
	if (ctx.cr6.eq) goto loc_822DE154;
loc_822DE204:
	// addi r3,r28,60
	ctx.r3.s64 = r28.s64 + 60;
	// bl 0x82793e14
	ctx.lr = 0x822DE20C;
	__imp__KeResetEvent(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822de224
	if (ctx.cr6.eq) goto loc_822DE224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822dddd8
	ctx.lr = 0x822DE220;
	sub_822DDDD8(ctx, base);
	// b 0x822de0bc
	goto loc_822DE0BC;
loc_822DE224:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822EAC30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stw r11,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// stw r11,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// beq cr6,0x822eacbc
	if (ctx.cr6.eq) goto loc_822EACBC;
	// lwz r11,96(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822eacbc
	if (ctx.cr6.eq) goto loc_822EACBC;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822eac94
	if (!ctx.cr6.eq) goto loc_822EAC94;
	// lwa r11,12(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 12));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_822EAC94:
	// lfs f13,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822eacbc
	if (!ctx.cr6.eq) goto loc_822EACBC;
	// lwz r11,96(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// lwa r11,16(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 16));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
loc_822EACBC:
	// lfs f0,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,124
	ctx.r11.s64 = ctx.r3.s64 + 124;
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F0960) {
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
	ctx.lr = 0x822F0968;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
loc_822F0978:
	// add r11,r5,r29
	ctx.r11.u64 = ctx.r5.u64 + r29.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_822F0998:
	// lwz r9,784(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 784);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r7,216(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
loc_822F09A8:
	// lwzx r11,r8,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwz r10,784(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 784);
	// lwz r10,216(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 216);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x822f09c4
	if (!ctx.cr6.lt) goto loc_822F09C4;
	// lwz r11,788(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 788);
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
loc_822F09C4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x822f09d4
	if (ctx.cr6.lt) goto loc_822F09D4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x822f09dc
	goto loc_822F09DC;
loc_822F09D4:
	// lwz r11,788(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
loc_822F09DC:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822f09f0
	if (!ctx.cr6.lt) goto loc_822F09F0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x822f09a8
	goto loc_822F09A8;
loc_822F09F0:
	// lwz r7,216(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 216);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_822F09F8:
	// lwzx r10,r9,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x822f0a0c
	if (ctx.cr6.lt) goto loc_822F0A0C;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x822f0a14
	goto loc_822F0A14;
loc_822F0A0C:
	// lwz r11,788(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// lwz r8,216(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
loc_822F0A14:
	// lwz r11,784(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 784);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822f0a2c
	if (!ctx.cr6.lt) goto loc_822F0A2C;
	// lwz r11,788(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 788);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
loc_822F0A2C:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822f0a40
	if (!ctx.cr6.lt) goto loc_822F0A40;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// b 0x822f09f8
	goto loc_822F09F8;
loc_822F0A40:
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x822f0a78
	if (ctx.cr6.gt) goto loc_822F0A78;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r6.s32, ctx.xer);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// ble cr6,0x822f0998
	if (!ctx.cr6.gt) goto loc_822F0998;
loc_822F0A78:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x822f0a8c
	if (!ctx.cr6.lt) goto loc_822F0A8C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f0960
	ctx.lr = 0x822F0A8C;
	sub_822F0960(ctx, base);
loc_822F0A8C:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// bge cr6,0x822f0a9c
	if (!ctx.cr6.lt) goto loc_822F0A9C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x822f0978
	goto loc_822F0978;
loc_822F0A9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822F8978) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x822F8980;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// beq 0x822f8ae8
	if (ctx.cr0.eq) goto loc_822F8AE8;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f89b4
	if (ctx.cr6.eq) goto loc_822F89B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f89b8
	goto loc_822F89B8;
loc_822F89B4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F89B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f89d4
	if (ctx.cr6.eq) goto loc_822F89D4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f89d0
	if (ctx.cr6.eq) goto loc_822F89D0;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f89d4
	goto loc_822F89D4;
loc_822F89D0:
	// li r28,0
	r28.s64 = 0;
loc_822F89D4:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f89e8
	if (!ctx.cr0.eq) goto loc_822F89E8;
	// stfs f30,212(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r28.u32 + 212, temp.u32);
	// stfs f31,216(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 216, temp.u32);
loc_822F89E8:
	// lhz r11,100(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 100);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f8a7c
	if (ctx.cr0.eq) goto loc_822F8A7C;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822f8b5c
	if (!ctx.cr6.gt) goto loc_822F8B5C;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822F8A18:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8a68
	if (ctx.cr6.eq) goto loc_822F8A68;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8a38
	if (ctx.cr6.eq) goto loc_822F8A38;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f8a3c
	goto loc_822F8A3C;
loc_822F8A38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F8A3C:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x822f8a68
	if (!ctx.cr6.eq) goto loc_822F8A68;
	// lhz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f8a68
	if (ctx.cr0.eq) goto loc_822F8A68;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822f8978
	ctx.lr = 0x822F8A60;
	sub_822F8978(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f8b60
	if (!ctx.cr0.eq) goto loc_822F8B60;
loc_822F8A68:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x822f8a18
	if (ctx.cr6.lt) goto loc_822F8A18;
	// b 0x822f8b5c
	goto loc_822F8B5C;
loc_822F8A7C:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822f8b5c
	if (!ctx.cr6.gt) goto loc_822F8B5C;
	// li r31,0
	r31.s64 = 0;
loc_822F8A94:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f8acc
	if (ctx.cr6.eq) goto loc_822F8ACC;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f8acc
	if (ctx.cr6.eq) goto loc_822F8ACC;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x822f8978
	ctx.lr = 0x822F8AC4;
	sub_822F8978(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f8b60
	if (!ctx.cr0.eq) goto loc_822F8B60;
loc_822F8ACC:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f8a94
	if (ctx.cr6.lt) goto loc_822F8A94;
	// b 0x822f8b5c
	goto loc_822F8B5C;
loc_822F8AE8:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f8b38
	if (ctx.cr0.eq) goto loc_822F8B38;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8b08
	if (ctx.cr6.eq) goto loc_822F8B08;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f8b0c
	goto loc_822F8B0C;
loc_822F8B08:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F8B0C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f8b38
	if (ctx.cr6.eq) goto loc_822F8B38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8b24
	if (ctx.cr6.eq) goto loc_822F8B24;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f8b28
	goto loc_822F8B28;
loc_822F8B24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F8B28:
	// lfs f0,216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// b 0x822f8b40
	goto loc_822F8B40;
loc_822F8B38:
	// stfs f30,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// stfs f31,216(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
loc_822F8B40:
	// lwz r3,312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F8B54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f8b60
	if (!ctx.cr0.eq) goto loc_822F8B60;
loc_822F8B5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F8B60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82306660) {
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
	ctx.lr = 0x82306668;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	r16.s64 = 0;
	// lwz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r6,956(r1)
	REX_STORE_U32(ctx.r1.u32 + 956, ctx.r6.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r16,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// stw r16,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// mr r14,r16
	r14.u64 = r16.u64;
	// stw r16,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r16.u32);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// stw r16,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r16.u32);
	// mr r15,r16
	r15.u64 = r16.u64;
	// stw r16,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r16.u32);
	// mr r19,r16
	r19.u64 = r16.u64;
	// stw r16,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r16.u32);
	// mr r26,r16
	r26.u64 = r16.u64;
	// mr r25,r16
	r25.u64 = r16.u64;
	// mr r27,r16
	r27.u64 = r16.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823066d4
	if (!ctx.cr6.eq) goto loc_823066D4;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x823081c0
	goto loc_823081C0;
loc_823066D4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82306708
	if (ctx.cr6.eq) goto loc_82306708;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82306708
	if (ctx.cr6.lt) goto loc_82306708;
	// lwz r11,12(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 12);
	// lis r10,800
	ctx.r10.s64 = 52428800;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82306700
	if (!ctx.cr6.gt) goto loc_82306700;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x823081c0
	goto loc_823081C0;
loc_82306700:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82306708:
	// clrlwi. r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r17,-32129
	r17.s64 = -2105606144;
	// addi r18,r11,4384
	r18.s64 = ctx.r11.s64 + 4384;
	// beq 0x82306780
	if (ctx.cr0.eq) goto loc_82306780;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,20(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82334f20
	ctx.lr = 0x8230672C;
	sub_82334F20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823081c0
	if (!ctx.cr0.eq) goto loc_823081C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,12(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8233fed0
	ctx.lr = 0x8230674C;
	sub_8233FED0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823069e4
	if (ctx.cr0.eq) goto loc_823069E4;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1661
	ctx.r6.s64 = 1661;
	// addi r5,r10,4384
	ctx.r5.s64 = ctx.r10.s64 + 4384;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
loc_82306768:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8230676C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82306778;
	sub_82330D00(ctx, base);
loc_82306778:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823081c0
	goto loc_823081C0;
loc_82306780:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331458
	ctx.lr = 0x82306788;
	sub_82331458(ctx, base);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// lwz r3,32(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823067e8
	if (ctx.cr6.eq) goto loc_823067E8;
	// bl 0x82331458
	ctx.lr = 0x8230679C;
	sub_82331458(ctx, base);
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + r31.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1677
	ctx.r6.s64 = 1677;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823067BC;
	sub_82330E40(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x823067cc
	if (!ctx.cr0.eq) goto loc_823067CC;
loc_823067C4:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x823081c0
	goto loc_823081C0;
loc_823067CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 32);
	// bl 0x82331480
	ctx.lr = 0x823067D8;
	sub_82331480(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823314c8
	ctx.lr = 0x823067E4;
	sub_823314C8(ctx, base);
	// b 0x82306818
	goto loc_82306818;
loc_823067E8:
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1688
	ctx.r6.s64 = 1688;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82306804;
	sub_82330E40(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x823067c4
	if (ctx.cr0.eq) goto loc_823067C4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331480
	ctx.lr = 0x82306818;
	sub_82331480(ctx, base);
loc_82306818:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331458
	ctx.lr = 0x82306820;
	sub_82331458(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82306848
	if (ctx.cr0.eq) goto loc_82306848;
loc_82306828:
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r29.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82306848
	if (ctx.cr6.eq) goto loc_82306848;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x82306848
	if (ctx.cr6.eq) goto loc_82306848;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82306828
	if (!ctx.cr0.eq) goto loc_82306828;
loc_82306848:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82306908
	if (ctx.cr6.eq) goto loc_82306908;
	// lwz r3,32(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 32);
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823068cc
	if (ctx.cr6.eq) goto loc_823068CC;
	// bl 0x82331458
	ctx.lr = 0x82306864;
	sub_82331458(ctx, base);
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + r31.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1714
	ctx.r6.s64 = 1714;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82306884;
	sub_82330E40(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne 0x823068ac
	if (!ctx.cr0.eq) goto loc_823068AC;
	// li r6,1717
	ctx.r6.s64 = 1717;
loc_82306890:
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823068A8;
	sub_82330D00(ctx, base);
	// b 0x823067c4
	goto loc_823067C4;
loc_823068AC:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r4,32(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 32);
	// bl 0x823314c8
	ctx.lr = 0x823068B8;
	sub_823314C8(ctx, base);
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82331500
	ctx.lr = 0x823068C8;
	sub_82331500(ctx, base);
	// b 0x82306908
	goto loc_82306908;
loc_823068CC:
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1725
	ctx.r6.s64 = 1725;
	// addi r4,r31,2
	ctx.r4.s64 = r31.s64 + 2;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823068E8;
	sub_82330E40(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne 0x823068f8
	if (!ctx.cr0.eq) goto loc_823068F8;
	// li r6,1728
	ctx.r6.s64 = 1728;
	// b 0x82306890
	goto loc_82306890;
loc_823068F8:
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823314a0
	ctx.lr = 0x82306908;
	sub_823314A0(ctx, base);
loc_82306908:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82334f20
	ctx.lr = 0x82306918;
	sub_82334F20(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82306958
	if (ctx.cr0.eq) goto loc_82306958;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82306944
	if (ctx.cr6.eq) goto loc_82306944;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1740
	ctx.r6.s64 = 1740;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82306944;
	sub_82330D00(ctx, base);
loc_82306944:
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r6,1742
	ctx.r6.s64 = 1742;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8230676c
	goto loc_8230676C;
loc_82306958:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8233fed0
	ctx.lr = 0x82306970;
	sub_8233FED0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x823069c8
	if (ctx.cr0.eq) goto loc_823069C8;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x8230699c
	if (ctx.cr6.eq) goto loc_8230699C;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1753
	ctx.r6.s64 = 1753;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230699C;
	sub_82330D00(ctx, base);
loc_8230699C:
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1755
	ctx.r6.s64 = 1755;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823069B8;
	sub_82330D00(ctx, base);
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r6,1756
	ctx.r6.s64 = 1756;
	// b 0x82306768
	goto loc_82306768;
loc_823069C8:
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1759
	ctx.r6.s64 = 1759;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823069E4;
	sub_82330D00(ctx, base);
loc_823069E4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82340718
	ctx.lr = 0x823069FC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080dc
	if (!ctx.cr0.eq) goto loc_823080DC;
	// lis r11,12630
	ctx.r11.s64 = 827719680;
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// ori r11,r11,17734
	ctx.r11.u64 = ctx.r11.u64 | 17734;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82306a20
	if (ctx.cr6.eq) goto loc_82306A20;
	// li r31,25
	r31.s64 = 25;
	// b 0x823080dc
	goto loc_823080DC;
loc_82306A20:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82340718
	ctx.lr = 0x82306A38;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080dc
	if (!ctx.cr0.eq) goto loc_823080DC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82306a58
	if (!ctx.cr6.lt) goto loc_82306A58;
loc_82306A50:
	// li r31,84
	r31.s64 = 84;
	// b 0x823080dc
	goto loc_823080DC;
loc_82306A58:
	// lis r10,63
	ctx.r10.s64 = 4128768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82306a50
	if (ctx.cr6.gt) goto loc_82306A50;
	// lis r22,46
	r22.s64 = 3014656;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// blt cr6,0x82306a94
	if (ctx.cr6.lt) goto loc_82306A94;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// bl 0x82340718
	ctx.lr = 0x82306A88;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080dc
	if (!ctx.cr0.eq) goto loc_823080DC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82306A94:
	// lis r10,50
	ctx.r10.s64 = 3276800;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82306ab8
	if (ctx.cr6.lt) goto loc_82306AB8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82340e38
	ctx.lr = 0x82306AB0;
	sub_82340E38(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080dc
	if (!ctx.cr0.eq) goto loc_823080DC;
loc_82306AB8:
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1818
	ctx.r6.s64 = 1818;
	// li r4,124
	ctx.r4.s64 = 124;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82306AD8;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306aec
	if (ctx.cr0.eq) goto loc_82306AEC;
	// bl 0x8231ef20
	ctx.lr = 0x82306AE4;
	sub_8231EF20(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82306af0
	goto loc_82306AF0;
loc_82306AEC:
	// mr r23,r16
	r23.u64 = r16.u64;
loc_82306AF0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x82306b00
	if (!ctx.cr6.eq) goto loc_82306B00;
	// li r31,44
	r31.s64 = 44;
	// b 0x823080dc
	goto loc_823080DC;
loc_82306B00:
	// stw r20,100(r23)
	REX_STORE_U32(r23.u32 + 100, r20.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823043d0
	ctx.lr = 0x82306B10;
	sub_823043D0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// stw r11,120(r23)
	REX_STORE_U32(r23.u32 + 120, ctx.r11.u32);
	// stw r16,176(r20)
	REX_STORE_U32(r20.u32 + 176, r16.u32);
	// beq cr6,0x82306b54
	if (ctx.cr6.eq) goto loc_82306B54;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x82306b54
	if (ctx.cr6.lt) goto loc_82306B54;
	// lwz r4,20(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82306b54
	if (ctx.cr6.eq) goto loc_82306B54;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8231e268
	ctx.lr = 0x82306B4C;
	sub_8231E268(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823081c0
	if (!ctx.cr0.eq) goto loc_823081C0;
loc_82306B54:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82306bd4
	if (ctx.cr6.lt) goto loc_82306BD4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x82306B7C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,1849
	ctx.r6.s64 = 1849;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82306BA0;
	sub_82330E40(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,20(r23)
	REX_STORE_U32(r23.u32 + 20, ctx.r4.u32);
	// bne 0x82306bb4
	if (!ctx.cr0.eq) goto loc_82306BB4;
loc_82306BAC:
	// li r31,44
	r31.s64 = 44;
	// b 0x823080c0
	goto loc_823080C0;
loc_82306BB4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82340718
	ctx.lr = 0x82306BC8;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// b 0x82306cb0
	goto loc_82306CB0;
loc_82306BD4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82306c10
	if (ctx.cr6.eq) goto loc_82306C10;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1865
	ctx.r6.s64 = 1865;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82306BFC;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r23)
	REX_STORE_U32(r23.u32 + 20, ctx.r3.u32);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// stb r16,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, r16.u8);
	// b 0x82306cb0
	goto loc_82306CB0;
loc_82306C10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82331458
	ctx.lr = 0x82306C18;
	sub_82331458(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306c40
	if (ctx.cr0.eq) goto loc_82306C40;
loc_82306C20:
	// lbzx r11,r3,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + r29.u32);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82306c34
	if (ctx.cr6.eq) goto loc_82306C34;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82306c20
	if (!ctx.cr0.eq) goto loc_82306C20;
loc_82306C34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306c40
	if (ctx.cr6.eq) goto loc_82306C40;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82306C40:
	// add r31,r3,r29
	r31.u64 = ctx.r3.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331458
	ctx.lr = 0x82306C4C;
	sub_82331458(ctx, base);
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r6,1882
	ctx.r6.s64 = 1882;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82306C68;
	sub_82330E40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r23)
	REX_STORE_U32(r23.u32 + 20, ctx.r3.u32);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82331480
	ctx.lr = 0x82306C7C;
	sub_82331480(ctx, base);
	// lwz r3,20(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 20);
	// bl 0x82331458
	ctx.lr = 0x82306C84;
	sub_82331458(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306cb0
	if (ctx.cr0.eq) goto loc_82306CB0;
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
loc_82306C90:
	// lbzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x82306ca4
	if (ctx.cr6.eq) goto loc_82306CA4;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82306c90
	if (!ctx.cr0.eq) goto loc_82306C90;
loc_82306CA4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306cb0
	if (ctx.cr6.eq) goto loc_82306CB0;
	// stbx r16,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r16.u8);
loc_82306CB0:
	// lwz r31,124(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 124);
	// addi r30,r20,124
	r30.s64 = r20.s64 + 124;
	// b 0x82306ce4
	goto loc_82306CE4;
loc_82306CBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x82306ccc
	if (!ctx.cr6.eq) goto loc_82306CCC;
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
loc_82306CCC:
	// lwz r4,20(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 20);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x823315e8
	ctx.lr = 0x82306CD8;
	sub_823315E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82306e24
	if (ctx.cr0.eq) goto loc_82306E24;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82306CE4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82306cbc
	if (!ctx.cr6.eq) goto loc_82306CBC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x82340718
	ctx.lr = 0x82306D04;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82306d54
	if (ctx.cr6.eq) goto loc_82306D54;
	// lwz r10,1012(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1931
	ctx.r6.s64 = 1931;
	// mulli r4,r11,104
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82306D38;
	sub_82330A38(ctx, base);
	// stw r3,68(r23)
	REX_STORE_U32(r23.u32 + 68, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mulli r11,r11,104
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(104));
	// stw r11,72(r23)
	REX_STORE_U32(r23.u32 + 72, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_82306D54:
	// lwz r29,68(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 68);
	// mr r27,r16
	r27.u64 = r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82306efc
	if (ctx.cr6.eq) goto loc_82306EFC;
	// addi r28,r20,76
	r28.s64 = r20.s64 + 76;
loc_82306D68:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82306d7c
	if (ctx.cr6.eq) goto loc_82306D7C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8230cd18
	ctx.lr = 0x82306D7C;
	sub_8230CD18(ctx, base);
loc_82306D7C:
	// stw r23,88(r30)
	REX_STORE_U32(r30.u32 + 88, r23.u32);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// addi r29,r29,104
	r29.s64 = r29.s64 + 104;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
	// stw r10,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82306dd0
	if (ctx.cr6.eq) goto loc_82306DD0;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82306dd0
	if (ctx.cr6.lt) goto loc_82306DD0;
	// lwz r3,4(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306dd0
	if (ctx.cr6.eq) goto loc_82306DD0;
	// bl 0x823317f0
	ctx.lr = 0x82306DC4;
	sub_823317F0(ctx, base);
	// stw r3,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
loc_82306DD0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,24
	ctx.r4.s64 = r30.s64 + 24;
	// bl 0x82340718
	ctx.lr = 0x82306DE8;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,20
	ctx.r10.s64 = 1310720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82306e2c
	if (ctx.cr6.lt) goto loc_82306E2C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x82306E18;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// b 0x82306e34
	goto loc_82306E34;
loc_82306E24:
	// li r31,94
	r31.s64 = 94;
	// b 0x823080c0
	goto loc_823080C0;
loc_82306E2C:
	// lwz r11,172(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 172);
	// stw r11,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r11.u32);
loc_82306E34:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,61
	ctx.r10.s64 = 3997696;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82306e68
	if (ctx.cr6.lt) goto loc_82306E68;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x82306E5C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// b 0x82306e6c
	goto loc_82306E6C;
loc_82306E68:
	// std r16,96(r30)
	REX_STORE_U64(r30.u32 + 96, r16.u64);
loc_82306E6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x82306E84;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,2010
	ctx.r6.s64 = 2010;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82306EA8;
	sub_82330E40(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r4.u32);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82340718
	ctx.lr = 0x82306EC8;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,32(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 32);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230cd98
	ctx.lr = 0x82306EE4;
	sub_8230CD98(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82306d68
	if (ctx.cr6.lt) goto loc_82306D68;
loc_82306EFC:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,148(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 148);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82310228
	ctx.lr = 0x82306F18;
	sub_82310228(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,60(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x82340718
	ctx.lr = 0x82306F40;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82306f90
	if (ctx.cr6.eq) goto loc_82306F90;
	// lwz r10,1012(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2057
	ctx.r6.s64 = 2057;
	// mulli r4,r11,100
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82306F74;
	sub_82330A38(ctx, base);
	// stw r3,76(r23)
	REX_STORE_U32(r23.u32 + 76, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// stw r11,80(r23)
	REX_STORE_U32(r23.u32 + 80, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82306F90:
	// lwz r29,76(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 76);
	// mr r28,r16
	r28.u64 = r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82307044
	if (ctx.cr6.eq) goto loc_82307044;
	// addi r30,r23,32
	r30.s64 = r23.s64 + 32;
loc_82306FA4:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82306fb8
	if (ctx.cr6.eq) goto loc_82306FB8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82309848
	ctx.lr = 0x82306FB8;
	sub_82309848(ctx, base);
loc_82306FB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r29,100
	r29.s64 = r29.s64 + 100;
	// bl 0x82308248
	ctx.lr = 0x82306FC4;
	sub_82308248(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82306ff4
	goto loc_82306FF4;
loc_82306FEC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82306FF4:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82306fec
	if (!ctx.cr6.eq) goto loc_82306FEC;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r23,48(r31)
	REX_STORE_U32(r31.u32 + 48, r23.u32);
	// addi r7,r1,184
	ctx.r7.s64 = ctx.r1.s64 + 184;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r23)
	REX_STORE_U32(r23.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8230aaa0
	ctx.lr = 0x8230702C;
	sub_8230AAA0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82306fa4
	if (ctx.cr6.lt) goto loc_82306FA4;
loc_82307044:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823070a4
	if (ctx.cr6.eq) goto loc_823070A4;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2095
	ctx.r6.s64 = 2095;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82307070;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82307080
	if (ctx.cr0.eq) goto loc_82307080;
	// bl 0x823dc718
	ctx.lr = 0x8230707C;
	sub_823DC718(ctx, base);
	// b 0x82307084
	goto loc_82307084;
loc_82307080:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_82307084:
	// stw r3,64(r23)
	REX_STORE_U32(r23.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306bac
	if (ctx.cr6.eq) goto loc_82306BAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8230ed30
	ctx.lr = 0x8230709C;
	sub_8230ED30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
loc_823070A4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// blt cr6,0x8230716c
	if (ctx.cr6.lt) goto loc_8230716C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82340718
	ctx.lr = 0x823070C8;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82307110
	if (ctx.cr6.eq) goto loc_82307110;
	// mulli r4,r11,60
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// stw r4,96(r23)
	REX_STORE_U32(r23.u32 + 96, ctx.r4.u32);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2121
	ctx.r6.s64 = 2121;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82307100;
	sub_82330A38(ctx, base);
	// stw r3,92(r23)
	REX_STORE_U32(r23.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82307110:
	// lwz r30,92(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 92);
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230716c
	if (ctx.cr6.eq) goto loc_8230716C;
loc_82307120:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82307130
	if (ctx.cr6.eq) goto loc_82307130;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82311408
	ctx.lr = 0x82307130;
	sub_82311408(ctx, base);
loc_82307130:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// lwz r11,240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82307154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82307120
	if (ctx.cr6.lt) goto loc_82307120;
loc_8230716C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x82340718
	ctx.lr = 0x82307184;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823071cc
	if (ctx.cr6.eq) goto loc_823071CC;
	// mulli r4,r11,44
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(44));
	// stw r4,88(r23)
	REX_STORE_U32(r23.u32 + 88, ctx.r4.u32);
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2155
	ctx.r6.s64 = 2155;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x823071BC;
	sub_82330A38(ctx, base);
	// stw r3,84(r23)
	REX_STORE_U32(r23.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_823071CC:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// bge cr6,0x82307214
	if (!ctx.cr6.lt) goto loc_82307214;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82307214
	if (ctx.cr6.eq) goto loc_82307214;
	// lwz r10,1012(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2170
	ctx.r6.s64 = 2170;
	// mulli r4,r11,60
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82307204;
	sub_82330A38(ctx, base);
	// stw r3,92(r23)
	REX_STORE_U32(r23.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_82307214:
	// lwz r25,84(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 84);
	// mr r26,r16
	r26.u64 = r16.u64;
	// lwz r27,92(r23)
	r27.u64 = REX_LOAD_U32(r23.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82307740
	if (ctx.cr6.eq) goto loc_82307740;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r24,100
	r24.s64 = 100;
	// lfs f29,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f29.f64 = double(temp.f32);
	// lfs f30,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f30.f64 = double(temp.f32);
	// lfs f31,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_82307244:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82307258
	if (ctx.cr6.eq) goto loc_82307258;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823110a0
	ctx.lr = 0x82307258;
	sub_823110A0(ctx, base);
loc_82307258:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r25,r25,44
	r25.s64 = r25.s64 + 44;
	// bl 0x82340718
	ctx.lr = 0x82307274;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,2194
	ctx.r6.s64 = 2194;
	// lwz r3,64(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 64);
	// bl 0x8230eda8
	ctx.lr = 0x82307290;
	sub_8230EDA8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r4.u32);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82340718
	ctx.lr = 0x823072B0;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// blt cr6,0x823072fc
	if (ctx.cr6.lt) goto loc_823072FC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// bl 0x82340718
	ctx.lr = 0x823072DC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,92(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 92);
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// b 0x82307340
	goto loc_82307340;
loc_823072FC:
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82307310
	if (ctx.cr6.eq) goto loc_82307310;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82311408
	ctx.lr = 0x82307310;
	sub_82311408(ctx, base);
loc_82307310:
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// addi r27,r27,60
	r27.s64 = r27.s64 + 60;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82307338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
loc_82307340:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82340718
	ctx.lr = 0x82307358;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// beq cr6,0x823073d0
	if (ctx.cr6.eq) goto loc_823073D0;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x823073d0
	if (ctx.cr6.lt) goto loc_823073D0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823073d0
	if (ctx.cr6.eq) goto loc_823073D0;
	// lfs f0,8(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x823073d0
	if (!ctx.cr6.gt) goto loc_823073D0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x823073d0
	if (!ctx.cr6.lt) goto loc_823073D0;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r11.u64);
	// lfd f13,200(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f0,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f29.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.f0.u64);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// bne cr6,0x823073d0
	if (!ctx.cr6.eq) goto loc_823073D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
loc_823073D0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82307400
	if (ctx.cr6.eq) goto loc_82307400;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// lwz r3,64(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 64);
	// li r6,2244
	ctx.r6.s64 = 2244;
	// mulli r4,r11,24
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// bl 0x8230ee20
	ctx.lr = 0x823073F0;
	sub_8230EE20(ctx, base);
	// stw r3,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82307400:
	// mr r28,r16
	r28.u64 = r16.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82307684
	if (!ctx.cr6.gt) goto loc_82307684;
	// mr r29,r16
	r29.u64 = r16.u64;
loc_82307410:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82310690
	ctx.lr = 0x82307418;
	sub_82310690(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x82340718
	ctx.lr = 0x82307430;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,14
	ctx.r10.s64 = 917504;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8230746c
	if (ctx.cr6.lt) goto loc_8230746C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82340718
	ctx.lr = 0x82307460;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// b 0x82307470
	goto loc_82307470;
loc_8230746C:
	// stw r24,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r24.u32);
loc_82307470:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823075c8
	if (!ctx.cr6.eq) goto loc_823075C8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82310690
	ctx.lr = 0x82307484;
	sub_82310690(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,17
	ctx.r11.s64 = 1114112;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823074a0
	if (ctx.cr6.lt) goto loc_823074A0;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// b 0x823074a4
	goto loc_823074A4;
loc_823074A0:
	// stw r24,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r24.u32);
loc_823074A4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x823074BC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82340718
	ctx.lr = 0x823074DC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x823074FC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x82340718
	ctx.lr = 0x8230751C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// bl 0x82340718
	ctx.lr = 0x8230753C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82307578
	if (ctx.cr6.lt) goto loc_82307578;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82340718
	ctx.lr = 0x8230756C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// b 0x8230757c
	goto loc_8230757C;
loc_82307578:
	// stw r16,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r16.u32);
loc_8230757C:
	// lwz r11,164(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 164);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82307590
	if (!ctx.cr0.eq) goto loc_82307590;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230759c
	if (ctx.cr0.eq) goto loc_8230759C;
loc_82307590:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823317f0
	ctx.lr = 0x82307598;
	sub_823317F0(ctx, base);
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
loc_8230759C:
	// lwz r11,164(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 164);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82307650
	if (!ctx.cr0.eq) goto loc_82307650;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823075C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82307618
	goto loc_82307618;
loc_823075C8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82307624
	if (!ctx.cr6.eq) goto loc_82307624;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823106b8
	ctx.lr = 0x823075D8;
	sub_823106B8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x82340718
	ctx.lr = 0x823075F8;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// bl 0x82340718
	ctx.lr = 0x82307618;
	sub_82340718(ctx, base);
loc_82307618:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// b 0x82307650
	goto loc_82307650;
loc_82307624:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82307638
	if (!ctx.cr6.eq) goto loc_82307638;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823106e0
	ctx.lr = 0x82307634;
	sub_823106E0(ctx, base);
	// b 0x82307648
	goto loc_82307648;
loc_82307638:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82307650
	if (!ctx.cr6.eq) goto loc_82307650;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823106f8
	ctx.lr = 0x82307648;
	sub_823106F8(ctx, base);
loc_82307648:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_82307650:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82307670
	if (!ctx.cr6.lt) goto loc_82307670;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82307670;
	sub_823EF2F8(ctx, base);
loc_82307670:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82307410
	if (ctx.cr6.lt) goto loc_82307410;
loc_82307684:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x82307690
	if (!ctx.cr6.eq) goto loc_82307690;
	// mr r19,r30
	r19.u64 = r30.u64;
loc_82307690:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82310878
	ctx.lr = 0x82307698;
	sub_82310878(ctx, base);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x8230770c
	if (!ctx.cr6.eq) goto loc_8230770C;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8230770c
	if (!ctx.cr6.gt) goto loc_8230770C;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2366
	ctx.r6.s64 = 2366;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823076C8;
	sub_82330E40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r11,r16
	ctx.r11.u64 = r16.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82307704
	if (!ctx.cr6.gt) goto loc_82307704;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
loc_823076E8:
	// lwz r9,36(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823076e8
	if (ctx.cr6.lt) goto loc_823076E8;
loc_82307704:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
loc_8230770C:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r20,88
	ctx.r11.s64 = r20.s64 + 88;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r23,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, r23.u32);
	// lwz r10,92(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 92);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r30,92(r20)
	REX_STORE_U32(r20.u32 + 92, r30.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82307244
	if (ctx.cr6.lt) goto loc_82307244;
loc_82307740:
	// lwz r30,32(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 32);
	// addi r26,r23,32
	r26.s64 = r23.s64 + 32;
	// b 0x82307784
	goto loc_82307784;
loc_8230774C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// bne cr6,0x8230775c
	if (!ctx.cr6.eq) goto loc_8230775C;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_8230775C:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82307778;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82307784:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bne cr6,0x8230774c
	if (!ctx.cr6.eq) goto loc_8230774C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82307cac
	if (ctx.cr6.lt) goto loc_82307CAC;
	// stw r16,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r16.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82340718
	ctx.lr = 0x823077B8;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r27,r16
	r27.u64 = r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82307cac
	if (!ctx.cr6.gt) goto loc_82307CAC;
loc_823077D0:
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2416
	ctx.r6.s64 = 2416;
	// li r4,152
	ctx.r4.s64 = 152;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x823077F0;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82307804
	if (ctx.cr0.eq) goto loc_82307804;
	// bl 0x8231d4f0
	ctx.lr = 0x823077FC;
	sub_8231D4F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82307808
	goto loc_82307808;
loc_82307804:
	// mr r30,r16
	r30.u64 = r16.u64;
loc_82307808:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82306bac
	if (ctx.cr6.eq) goto loc_82306BAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x82307828;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,2431
	ctx.r6.s64 = 2431;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8230784C;
	sub_82330E40(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r4.u32);
	// beq 0x82307dd4
	if (ctx.cr0.eq) goto loc_82307DD4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82340718
	ctx.lr = 0x8230786C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// bl 0x82340718
	ctx.lr = 0x8230788C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// bl 0x82340718
	ctx.lr = 0x823078AC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,132
	ctx.r4.s64 = r30.s64 + 132;
	// bl 0x82340718
	ctx.lr = 0x823078CC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,52
	ctx.r4.s64 = r30.s64 + 52;
	// bl 0x82340718
	ctx.lr = 0x823078EC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// bl 0x82340718
	ctx.lr = 0x8230790C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// bl 0x82340718
	ctx.lr = 0x8230792C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,68
	ctx.r4.s64 = r30.s64 + 68;
	// bl 0x82340718
	ctx.lr = 0x8230794C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,84
	ctx.r4.s64 = r30.s64 + 84;
	// bl 0x82340718
	ctx.lr = 0x8230796C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,88
	ctx.r4.s64 = r30.s64 + 88;
	// bl 0x82340718
	ctx.lr = 0x8230798C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,136
	ctx.r4.s64 = r30.s64 + 136;
	// bl 0x82340718
	ctx.lr = 0x823079AC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,140
	ctx.r4.s64 = r30.s64 + 140;
	// bl 0x82340718
	ctx.lr = 0x823079CC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,124
	ctx.r4.s64 = r30.s64 + 124;
	// bl 0x82340718
	ctx.lr = 0x823079EC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,28
	ctx.r10.s64 = 1835008;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82307a44
	if (ctx.cr6.lt) goto loc_82307A44;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// bl 0x82340718
	ctx.lr = 0x82307A1C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,128
	ctx.r4.s64 = r30.s64 + 128;
	// bl 0x82340718
	ctx.lr = 0x82307A3C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
loc_82307A44:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,24
	ctx.r4.s64 = r30.s64 + 24;
	// bl 0x82340718
	ctx.lr = 0x82307A5C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// bl 0x82340718
	ctx.lr = 0x82307A7C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x82340718
	ctx.lr = 0x82307A9C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// bl 0x82340718
	ctx.lr = 0x82307ABC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// bl 0x82340718
	ctx.lr = 0x82307ADC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,60
	ctx.r4.s64 = r30.s64 + 60;
	// bl 0x82340718
	ctx.lr = 0x82307AFC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// mr r28,r16
	r28.u64 = r16.u64;
	// addi r29,r30,72
	r29.s64 = r30.s64 + 72;
loc_82307B0C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x82307B24;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// blt cr6,0x82307b0c
	if (ctx.cr6.lt) goto loc_82307B0C;
	// mr r28,r16
	r28.u64 = r16.u64;
	// addi r29,r30,92
	r29.s64 = r30.s64 + 92;
loc_82307B44:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x82307B5C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// blt cr6,0x82307b44
	if (ctx.cr6.lt) goto loc_82307B44;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,104
	ctx.r4.s64 = r30.s64 + 104;
	// bl 0x82340718
	ctx.lr = 0x82307B8C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// bl 0x82340718
	ctx.lr = 0x82307BAC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,112
	ctx.r4.s64 = r30.s64 + 112;
	// bl 0x82340718
	ctx.lr = 0x82307BCC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,116
	ctx.r4.s64 = r30.s64 + 116;
	// bl 0x82340718
	ctx.lr = 0x82307BEC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,120
	ctx.r4.s64 = r30.s64 + 120;
	// bl 0x82340718
	ctx.lr = 0x82307C0C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,128
	ctx.r4.s64 = r30.s64 + 128;
	// bl 0x82340718
	ctx.lr = 0x82307C2C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,144
	ctx.r4.s64 = r30.s64 + 144;
	// bl 0x82340718
	ctx.lr = 0x82307C4C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82307dd8
	if (!ctx.cr0.eq) goto loc_82307DD8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82301478
	ctx.lr = 0x82307C68;
	sub_82301478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82307c78
	if (!ctx.cr0.eq) goto loc_82307C78;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8231d158
	ctx.lr = 0x82307C78;
	sub_8231D158(ctx, base);
loc_82307C78:
	// lwz r9,104(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 104);
	// addi r10,r20,100
	ctx.r10.s64 = r20.s64 + 100;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r11,104(r20)
	REX_STORE_U32(r20.u32 + 104, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r23,148(r30)
	REX_STORE_U32(r30.u32 + 148, r23.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823077d0
	if (ctx.cr6.lt) goto loc_823077D0;
loc_82307CAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,176(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 176);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8231e110
	ctx.lr = 0x82307CBC;
	sub_8231E110(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,47
	ctx.r10.s64 = 3080192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82307f5c
	if (ctx.cr6.lt) goto loc_82307F5C;
	// lis r11,28781
	ctx.r11.s64 = 1886191616;
	// lis r10,29549
	ctx.r10.s64 = 1936523264;
	// ori r29,r11,28515
	r29.u64 = ctx.r11.u64 | 28515;
	// ori r30,r10,26740
	r30.u64 = ctx.r10.u64 | 26740;
loc_82307CE4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82340718
	ctx.lr = 0x82307CFC;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82340718
	ctx.lr = 0x82307D1C;
	sub_82340718(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,48
	ctx.r11.s64 = 3145728;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bge cr6,0x82307d58
	if (!ctx.cr6.lt) goto loc_82307D58;
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
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82307D58:
	// lbz r9,28(r20)
	ctx.r9.u64 = REX_LOAD_U8(r20.u32 + 28);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82307d88
	if (ctx.cr0.eq) goto loc_82307D88;
	// addic. r9,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r9.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82307d88
	if (ctx.cr0.eq) goto loc_82307D88;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82307d88
	if (ctx.cr6.eq) goto loc_82307D88;
	// lis r9,29812
	ctx.r9.s64 = 1953759232;
	// ori r9,r9,25971
	ctx.r9.u64 = ctx.r9.u64 | 25971;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82307f88
	if (!ctx.cr6.eq) goto loc_82307F88;
loc_82307D88:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x82307e84
	if (ctx.cr6.gt) goto loc_82307E84;
	// beq cr6,0x82307e7c
	if (ctx.cr6.eq) goto loc_82307E7C;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82307df4
	if (ctx.cr6.eq) goto loc_82307DF4;
	// lis r9,29541
	ctx.r9.s64 = 1935998976;
	// ori r9,r9,30051
	ctx.r9.u64 = ctx.r9.u64 | 30051;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82307dec
	if (ctx.cr6.eq) goto loc_82307DEC;
	// lis r9,29547
	ctx.r9.s64 = 1936392192;
	// ori r9,r9,28268
	ctx.r9.u64 = ctx.r9.u64 | 28268;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82307de4
	if (ctx.cr6.eq) goto loc_82307DE4;
	// lis r9,29549
	ctx.r9.s64 = 1936523264;
	// ori r9,r9,26483
	ctx.r9.u64 = ctx.r9.u64 | 26483;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82307eb0
	if (!ctx.cr6.eq) goto loc_82307EB0;
	// bl 0x8231a0e8
	ctx.lr = 0x82307DD0;
	sub_8231A0E8(ctx, base);
	// b 0x82307ef4
	goto loc_82307EF4;
loc_82307DD4:
	// li r31,44
	r31.s64 = 44;
loc_82307DD8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8231d158
	ctx.lr = 0x82307DE0;
	sub_8231D158(ctx, base);
	// b 0x823080c0
	goto loc_823080C0;
loc_82307DE4:
	// bl 0x8231a4c8
	ctx.lr = 0x82307DE8;
	sub_8231A4C8(ctx, base);
	// b 0x82307ef4
	goto loc_82307EF4;
loc_82307DEC:
	// bl 0x8231b258
	ctx.lr = 0x82307DF0;
	sub_8231B258(ctx, base);
	// b 0x82307ef4
	goto loc_82307EF4;
loc_82307DF4:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82340ff0
	ctx.lr = 0x82307E00;
	sub_82340FF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addic. r9,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r9.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq 0x82307f24
	if (ctx.cr0.eq) goto loc_82307F24;
	// bl 0x8231a4c8
	ctx.lr = 0x82307E28;
	sub_8231A4C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// bl 0x8231b258
	ctx.lr = 0x82307E34;
	sub_8231B258(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// bl 0x82318d78
	ctx.lr = 0x82307E40;
	sub_82318D78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// bl 0x82319008
	ctx.lr = 0x82307E4C;
	sub_82319008(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// bl 0x82319308
	ctx.lr = 0x82307E58;
	sub_82319308(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// bl 0x823198d0
	ctx.lr = 0x82307E64;
	sub_823198D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// bl 0x8231a0e8
	ctx.lr = 0x82307E70;
	sub_8231A0E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306bac
	if (ctx.cr0.eq) goto loc_82306BAC;
	// b 0x82307f24
	goto loc_82307F24;
loc_82307E7C:
	// bl 0x82319308
	ctx.lr = 0x82307E80;
	sub_82319308(ctx, base);
	// b 0x82307ef4
	goto loc_82307EF4;
loc_82307E84:
	// addis r11,r11,-29549
	ctx.r11.s64 = ctx.r11.s64 + -1936523264;
	// addic. r11,r11,-29296
	ctx.xer.ca = ctx.r11.u32 > 29295;
	ctx.r11.s64 = ctx.r11.s64 + -29296;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82307ef0
	if (ctx.cr0.eq) goto loc_82307EF0;
	// cmplwi cr6,r11,61699
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61699, ctx.xer);
	// beq cr6,0x82307ee8
	if (ctx.cr6.eq) goto loc_82307EE8;
	// cmplwi cr6,r11,64004
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64004, ctx.xer);
	// beq cr6,0x82307ee0
	if (ctx.cr6.eq) goto loc_82307EE0;
	// lis r9,262
	ctx.r9.s64 = 17170432;
	// ori r9,r9,62211
	ctx.r9.u64 = ctx.r9.u64 | 62211;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82307ec4
	if (ctx.cr6.eq) goto loc_82307EC4;
loc_82307EB0:
	// addi r4,r10,-8
	ctx.r4.s64 = ctx.r10.s64 + -8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82340e38
	ctx.lr = 0x82307EC0;
	sub_82340E38(ctx, base);
	// b 0x82307f18
	goto loc_82307F18;
loc_82307EC4:
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8231a8e0
	ctx.lr = 0x82307ED4;
	sub_8231A8E0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// b 0x82307f18
	goto loc_82307F18;
loc_82307EE0:
	// bl 0x823198d0
	ctx.lr = 0x82307EE4;
	sub_823198D0(ctx, base);
	// b 0x82307ef4
	goto loc_82307EF4;
loc_82307EE8:
	// bl 0x82319008
	ctx.lr = 0x82307EEC;
	sub_82319008(ctx, base);
	// b 0x82307ef4
	goto loc_82307EF4;
loc_82307EF0:
	// bl 0x82318d78
	ctx.lr = 0x82307EF4;
	sub_82318D78(ctx, base);
loc_82307EF4:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82307F14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r15,1
	r15.s64 = 1;
loc_82307F18:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823080c0
	if (!ctx.cr6.eq) goto loc_823080C0;
loc_82307F24:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82340ff0
	ctx.lr = 0x82307F30;
	sub_82340FF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82307ce4
	if (ctx.cr6.lt) goto loc_82307CE4;
	// lbz r11,28(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 28);
	// clrlwi r10,r15,24
	ctx.r10.u64 = r15.u32 & 0xFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,28(r20)
	REX_STORE_U8(r20.u32 + 28, ctx.r11.u8);
	// stb r15,24(r23)
	REX_STORE_U8(r23.u32 + 24, r15.u8);
loc_82307F5C:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82307f80
	if (ctx.cr6.eq) goto loc_82307F80;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2756
	ctx.r6.s64 = 2756;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82307F80;
	sub_82330D00(ctx, base);
loc_82307F80:
	// lwz r30,0(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x82307fb0
	goto loc_82307FB0;
loc_82307F88:
	// li r31,82
	r31.s64 = 82;
	// b 0x823080c0
	goto loc_823080C0;
loc_82307F90:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r3,r30,-4
	ctx.r3.s64 = r30.s64 + -4;
	// bne cr6,0x82307fa0
	if (!ctx.cr6.eq) goto loc_82307FA0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_82307FA0:
	// bl 0x82308610
	ctx.lr = 0x82307FA4;
	sub_82308610(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82307FB0:
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bne cr6,0x82307f90
	if (!ctx.cr6.eq) goto loc_82307F90;
	// lwz r3,24(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 24);
	// bl 0x82314360
	ctx.lr = 0x82307FC0;
	sub_82314360(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82308068
	if (!ctx.cr0.eq) goto loc_82308068;
	// clrlwi. r11,r15,24
	ctx.r11.u64 = r15.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82308068
	if (ctx.cr0.eq) goto loc_82308068;
	// bl 0x82316640
	ctx.lr = 0x82307FD4;
	sub_82316640(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82308024
	if (!ctx.cr0.eq) goto loc_82308024;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2782
	ctx.r6.s64 = 2782;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82307FFC;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82308014
	if (ctx.cr0.eq) goto loc_82308014;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,4748
	ctx.r11.s64 = ctx.r11.s64 + 4748;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82308018
	goto loc_82308018;
loc_82308014:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_82308018:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82306bac
	if (ctx.cr6.eq) goto loc_82306BAC;
	// bl 0x82316630
	ctx.lr = 0x82308024;
	sub_82316630(ctx, base);
loc_82308024:
	// lwz r3,152(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 152);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230803C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,24(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 24);
	// bl 0x82314de0
	ctx.lr = 0x82308054;
	sub_82314DE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x823080c0
	if (!ctx.cr0.eq) goto loc_823080C0;
	// lwz r11,24(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 24);
	// stw r16,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r16.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
loc_82308068:
	// lwz r9,64(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 64);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// lwz r10,176(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 176);
	// addi r11,r23,4
	ctx.r11.s64 = r23.s64 + 4;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,64(r20)
	REX_STORE_U32(r20.u32 + 64, ctx.r5.u32);
	// lwz r10,-10820(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -10820);
	// addi r9,r10,124
	ctx.r9.s64 = ctx.r10.s64 + 124;
	// lwz r8,128(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// stw r8,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r8.u32);
	// stw r9,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r9.u32);
	// stw r11,128(r10)
	REX_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823080B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82308160
	if (ctx.cr0.eq) goto loc_82308160;
loc_823080C0:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823080D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r27,128(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r25,148(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_823080DC:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82308100
	if (ctx.cr6.eq) goto loc_82308100;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2845
	ctx.r6.s64 = 2845;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82308100;
	sub_82330D00(ctx, base);
loc_82308100:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823412b0
	ctx.lr = 0x82308108;
	sub_823412B0(ctx, base);
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,2848
	ctx.r6.s64 = 2848;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82308124;
	sub_82330D00(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8230814c
	if (ctx.cr6.eq) goto loc_8230814C;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4440
	ctx.r5.s64 = ctx.r10.s64 + 4440;
	// li r6,160
	ctx.r6.s64 = 160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8230814C;
	sub_82330D00(ctx, base);
loc_8230814C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82306778
	if (ctx.cr6.eq) goto loc_82306778;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82314268
	ctx.lr = 0x8230815C;
	sub_82314268(ctx, base);
	// b 0x82306778
	goto loc_82306778;
loc_82308160:
	// lwz r11,956(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 956);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308170
	if (ctx.cr6.eq) goto loc_82308170;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_82308170:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823412b0
	ctx.lr = 0x82308178;
	sub_823412B0(ctx, base);
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,2828
	ctx.r6.s64 = 2828;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82308194;
	sub_82330D00(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823081bc
	if (ctx.cr6.eq) goto loc_823081BC;
	// lwz r11,1012(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 1012);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,4440
	ctx.r5.s64 = ctx.r10.s64 + 4440;
	// li r6,160
	ctx.r6.s64 = 160;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823081BC;
	sub_82330D00(ctx, base);
loc_823081BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823081C0:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
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

DEFINE_REX_FUNC(sub_823D6E20) {
	REX_FUNC_PROLOGUE();
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D6E70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D7B70) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x823D7B78;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// srawi r28,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r28.s64 = ctx.r4.s32 >> 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r3,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r3.s64 = r30.s32 >> 2;
	// bl 0x823e7f30
	ctx.lr = 0x823D7BA8;
	sub_823E7F30(ctx, base);
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823d7c40
	if (ctx.cr6.eq) goto loc_823D7C40;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r11,-31680
	ctx.r4.s64 = ctx.r11.s64 + -31680;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82331180
	ctx.lr = 0x823D7BC8;
	sub_82331180(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// beq cr6,0x823d7c40
	if (ctx.cr6.eq) goto loc_823D7C40;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x823d7c40
	if (!ctx.cr6.gt) goto loc_823D7C40;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// fcfid f29,f0
	f29.f64 = double(ctx.f0.s64);
	// lfd f30,-5512(r11)
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -5512);
	// lfd f31,11216(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 11216);
loc_823D7C04:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fadd f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 + f31.f64;
	// fmul f11,f12,f30
	ctx.f11.f64 = ctx.f12.f64 * f30.f64;
	// fdiv f1,f11,f29
	ctx.f1.f64 = ctx.f11.f64 / f29.f64;
	// bl 0x826a15c0
	ctx.lr = 0x823D7C24;
	sub_826A15C0(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// stfsx f10,r30,r10
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + ctx.r10.u32, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// blt cr6,0x823d7c04
	if (ctx.cr6.lt) goto loc_823D7C04;
loc_823D7C40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823DCC18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823DCC20;
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823dcc50
	if (!ctx.cr6.eq) goto loc_823DCC50;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823DCC50:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// bge cr6,0x823dccbc
	if (!ctx.cr6.lt) goto loc_823DCCBC;
loc_823DCC7C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823dc8c8
	ctx.lr = 0x823DCC88;
	sub_823DC8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dcd20
	if (ctx.cr6.eq) goto loc_823DCD20;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// blt cr6,0x823dcc7c
	if (ctx.cr6.lt) goto loc_823DCC7C;
loc_823DCCBC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bge cr6,0x823dcdf0
	if (!ctx.cr6.lt) goto loc_823DCDF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823dcd9c
	if (ctx.cr6.eq) goto loc_823DCD9C;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// lwzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// bge cr6,0x823dcd2c
	if (!ctx.cr6.lt) goto loc_823DCD2C;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r8,r30,r11
	ctx.r8.u64 = ctx.r11.u64 - r30.u64;
	// and r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 & ctx.r4.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// srw r5,r6,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r5,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// stw r4,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823DCD20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823DCD2C:
	// srw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// and r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 & ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// bl 0x823dc810
	ctx.lr = 0x823DCD44;
	sub_823DC810(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stw r5,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// beq cr6,0x823dce5c
	if (ctx.cr6.eq) goto loc_823DCE5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// subfic r10,r30,32
	ctx.xer.ca = r30.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - r30.u64;
	// slw r9,r11,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// srw r4,r5,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// or r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 | ctx.r9.u64;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823DCD9C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bge cr6,0x823dcdcc
	if (!ctx.cr6.lt) goto loc_823DCDCC;
	// subfic r11,r30,32
	ctx.xer.ca = r30.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// srw r10,r4,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823DCDCC:
	// stw r4,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc810
	ctx.lr = 0x823DCDD8;
	sub_823DC810(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823DCDF0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823dce38
	if (ctx.cr6.eq) goto loc_823DCE38;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,-1
	ctx.r7.s64 = -1;
	// subfic r6,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// srw r5,r7,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// lwzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// subf r11,r30,r6
	ctx.r11.u64 = ctx.r6.u64 - r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// and r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 & ctx.r5.u64;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + r30.u64;
	// stw r8,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823DCE38:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r30,32
	ctx.xer.ca = r30.u32 <= 32;
	ctx.r8.u64 = static_cast<uint64_t>(32) - r30.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r6,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r6.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// stw r5,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r5.u32);
loc_823DCE5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823EA0E0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ea138
	if (ctx.cr6.eq) goto loc_823EA138;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ea114
	if (ctx.cr6.eq) goto loc_823EA114;
	// bl 0x82393bf0
	ctx.lr = 0x823EA114;
	sub_82393BF0(ctx, base);
loc_823EA114:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823ea128
	if (ctx.cr6.eq) goto loc_823EA128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823EA128;
	sub_82393BF0(ctx, base);
loc_823EA128:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823EA138;
	sub_823EF5F0(ctx, base);
loc_823EA138:
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

DEFINE_REX_FUNC(sub_823EB6A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823eb6fc
	if (!ctx.cr6.gt) goto loc_823EB6FC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r8,r6,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r6.u64;
loc_823EB6C4:
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823eb6dc
	if (ctx.cr6.eq) goto loc_823EB6DC;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
loc_823EB6DC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823eb6c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EB6C4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823eb6fc
	if (ctx.cr6.eq) goto loc_823EB6FC;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r8,r11,17352
	ctx.r8.s64 = ctx.r11.s64 + 17352;
	// b 0x823eb420
	sub_823EB420(ctx, base);
	return;
loc_823EB6FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ECCA8) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823efeb8
	sub_823EFEB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ECFC0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,2288(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 2288);
	// bl 0x82793994
	ctx.lr = 0x823ECFE4;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ed024
	if (ctx.cr0.lt) goto loc_823ED024;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(r31.s32, 15, ctx.xer);
	// bne cr6,0x823ed000
	if (!ctx.cr6.eq) goto loc_823ED000;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823ed00c
	goto loc_823ED00C;
loc_823ED000:
	// cmpwi cr6,r31,-15
	ctx.cr6.compare<int32_t>(r31.s32, -15, ctx.xer);
	// bne cr6,0x823ed00c
	if (!ctx.cr6.eq) goto loc_823ED00C;
	// li r4,-16
	ctx.r4.s64 = -16;
loc_823ED00C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82793984
	ctx.lr = 0x823ED014;
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82793974
	ctx.lr = 0x823ED01C;
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ed02c
	goto loc_823ED02C;
loc_823ED024:
	// bl 0x823eff48
	ctx.lr = 0x823ED028;
	sub_823EFF48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ED02C:
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

DEFINE_REX_FUNC(sub_823EE330) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823EE338;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823ee360
	if (ctx.cr6.eq) goto loc_823EE360;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_823EE360:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x823ee3d8
	if (ctx.cr6.eq) goto loc_823EE3D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r7,259
	ctx.r7.s64 = 259;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 & r31.u64;
	// bl 0x82793a54
	ctx.lr = 0x823EE3A8;
	__imp__NtWriteFile(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823ee444
	if (ctx.cr6.eq) goto loc_823EE444;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x823ee444
	if (ctx.cr6.eq) goto loc_823EE444;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823ee3d0
	if (ctx.cr6.eq) goto loc_823EE3D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_823EE3D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ee44c
	goto loc_823EE44C;
loc_823EE3D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82793a54
	ctx.lr = 0x823EE3EC;
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x823ee414
	if (!ctx.cr6.eq) goto loc_823EE414;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793a94
	ctx.lr = 0x823EE408;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ee42c
	if (ctx.cr0.lt) goto loc_823EE42C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823EE414:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ee42c
	if (ctx.cr6.lt) goto loc_823EE42C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x823ee44c
	goto loc_823EE44C;
loc_823EE42C:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823ee444
	if (!ctx.cr6.eq) goto loc_823EE444;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_823EE444:
	// bl 0x823f0020
	ctx.lr = 0x823EE448;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EE44C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823F5630) {
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
	// stw r6,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x823f5090
	ctx.lr = 0x823F565C;
	sub_823F5090(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f5fe8
	ctx.lr = 0x823F5674;
	sub_823F5FE8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// beq 0x823f568c
	if (ctx.cr0.eq) goto loc_823F568C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f5258
	ctx.lr = 0x823F568C;
	sub_823F5258(ctx, base);
loc_823F568C:
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

DEFINE_REX_FUNC(sub_823F7E50) {
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
	ctx.lr = 0x823F7E58;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bgt cr6,0x823f7e80
	if (ctx.cr6.gt) goto loc_823F7E80;
	// lwz r11,11968(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11968);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,11968(r3)
	REX_STORE_U32(ctx.r3.u32 + 11968, ctx.r11.u32);
	// b 0x823f7fdc
	goto loc_823F7FDC;
loc_823F7E80:
	// add r27,r31,r30
	r27.u64 = r31.u64 + r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r29,r27,-6
	r29.s64 = r27.s64 + -6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x823F7E98;
	sub_826A1E70(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,232
	ctx.r4.s64 = 232;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823F7EA8;
	sub_826A2E60(ctx, base);
	// lwz r11,11968(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 11968);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r7,r11,-10
	ctx.r7.s64 = ctx.r11.s64 + -10;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,12576
	ctx.r6.s64 = ctx.r11.s64 + 12576;
loc_823F7EBC:
	// addi r11,r31,15
	ctx.r11.s64 = r31.s64 + 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823f7ef0
	if (!ctx.cr6.lt) goto loc_823F7EF0;
loc_823F7ED4:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,232
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 232, ctx.xer);
	// beq cr6,0x823f7ef0
	if (ctx.cr6.eq) goto loc_823F7EF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823f7ed4
	if (ctx.cr6.lt) goto loc_823F7ED4;
loc_823F7EF0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f7f14
	if (!ctx.cr6.eq) goto loc_823F7F14;
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823f7f08
	goto loc_823F7F08;
loc_823F7F00:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_823F7F08:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpequb. v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_cmpeq_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 0xFFFF);
	// beq cr6,0x823f7f00
	if (ctx.cr6.eq) goto loc_823F7F00;
loc_823F7F14:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x823f7f24
	goto loc_823F7F24;
loc_823F7F1C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823F7F24:
	// cmplwi cr6,r9,232
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 232, ctx.xer);
	// bne cr6,0x823f7f1c
	if (!ctx.cr6.eq) goto loc_823F7F1C;
	// lwz r9,11968(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 11968);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,11968(r28)
	REX_STORE_U32(r28.u32 + 11968, ctx.r10.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823f7fc4
	if (!ctx.cr6.lt) goto loc_823F7FC4;
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lwz r8,11964(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 11964);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823f7f88
	if (!ctx.cr6.lt) goto loc_823F7F88;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// b 0x823f7f9c
	goto loc_823F7F9C;
loc_823F7F88:
	// neg r5,r9
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823f7fb4
	if (ctx.cr6.gt) goto loc_823F7FB4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_823F7F9C:
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r9,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// stb r5,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// stb r4,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// stb r9,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
loc_823F7FB4:
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// stw r10,11968(r28)
	REX_STORE_U32(r28.u32 + 11968, ctx.r10.u32);
	// b 0x823f7ebc
	goto loc_823F7EBC;
loc_823F7FC4:
	// addi r11,r7,10
	ctx.r11.s64 = ctx.r7.s64 + 10;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r11,11968(r28)
	REX_STORE_U32(r28.u32 + 11968, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,-6
	ctx.r3.s64 = r27.s64 + -6;
	// bl 0x826a1e70
	ctx.lr = 0x823F7FDC;
	sub_826A1E70(ctx, base);
loc_823F7FDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82401B38) {
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
	ctx.lr = 0x82401B40;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bge cr6,0x82401b64
	if (!ctx.cr6.lt) goto loc_82401B64;
loc_82401B58:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824026e4
	goto loc_824026E4;
loc_82401B64:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r31,r1,176
	r31.s64 = ctx.r1.s64 + 176;
	// bl 0x826a1e70
	ctx.lr = 0x82401B78;
	sub_826A1E70(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82400ad8
	ctx.lr = 0x82401B84;
	sub_82400AD8(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82401b58
	if (ctx.cr6.lt) goto loc_82401B58;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82401be4
	if (!ctx.cr6.eq) goto loc_82401BE4;
	// lha r11,180(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 180));
	// li r10,12
	ctx.r10.s64 = 12;
	// lha r9,182(r1)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 182));
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// lhz r8,184(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 184);
	// lhz r7,186(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 186);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// sth r8,140(r1)
	REX_STORE_U16(ctx.r1.u32 + 140, ctx.r8.u16);
	// sth r7,142(r1)
	REX_STORE_U16(ctx.r1.u32 + 142, ctx.r7.u16);
	// stw r5,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r5,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r5,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r5,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// b 0x82401bec
	goto loc_82401BEC;
loc_82401BE4:
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// blt cr6,0x82401b58
	if (ctx.cr6.lt) goto loc_82401B58;
loc_82401BEC:
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r15,8(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// mr r22,r15
	r22.u64 = r15.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bgt cr6,0x82401c08
	if (ctx.cr6.gt) goto loc_82401C08;
	// neg r22,r15
	r22.s64 = static_cast<int64_t>(-r15.u64);
loc_82401C08:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r14,1
	r14.s64 = 1;
	// lhz r6,14(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 14);
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// bgt cr6,0x82401c44
	if (ctx.cr6.gt) goto loc_82401C44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82401c44
	if (!ctx.cr6.eq) goto loc_82401C44;
	// slw r11,r14,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r6.u8 & 0x3F));
loc_82401C44:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bgt cr6,0x82401b58
	if (ctx.cr6.gt) goto loc_82401B58;
	// lhz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82401b58
	if (!ctx.cr6.eq) goto loc_82401B58;
	// lwz r16,16(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(r16.u32, 3, ctx.xer);
	// blt cr6,0x82401f14
	if (ctx.cr6.lt) goto loc_82401F14;
	// bne cr6,0x82401b58
	if (!ctx.cr6.eq) goto loc_82401B58;
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// blt cr6,0x82401b58
	if (ctx.cr6.lt) goto loc_82401B58;
	// lwz r17,48(r31)
	r17.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r10,56
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 56, ctx.xer);
	// lwz r18,44(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r19,40(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 40);
	// blt cr6,0x82401c94
	if (ctx.cr6.lt) goto loc_82401C94;
	// lwz r21,52(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 52);
	// b 0x82401c98
	goto loc_82401C98;
loc_82401C94:
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
loc_82401C98:
	// lis r26,6690
	r26.s64 = 438435840;
	// cmplwi cr6,r6,16
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16, ctx.xer);
	// ori r26,r26,43686
	r26.u64 = r26.u64 | 43686;
	// beq cr6,0x82401e2c
	if (ctx.cr6.eq) goto loc_82401E2C;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// beq cr6,0x82401dfc
	if (ctx.cr6.eq) goto loc_82401DFC;
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// bne cr6,0x82401b58
	if (!ctx.cr6.eq) goto loc_82401B58;
	// cmplwi cr6,r17,255
	ctx.cr6.compare<uint32_t>(r17.u32, 255, ctx.xer);
	// bne cr6,0x82401cf0
	if (!ctx.cr6.eq) goto loc_82401CF0;
	// cmplwi cr6,r18,65280
	ctx.cr6.compare<uint32_t>(r18.u32, 65280, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82401e20
	if (ctx.cr6.eq) goto loc_82401E20;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r26,6184
	r26.s64 = 405274624;
	// b 0x82401e24
	goto loc_82401E24;
loc_82401CF0:
	// lis r10,16368
	ctx.r10.s64 = 1072693248;
	// cmplw cr6,r17,r10
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82401d28
	if (!ctx.cr6.eq) goto loc_82401D28;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,64512
	ctx.r11.u64 = ctx.r11.u64 | 64512;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r19,1023
	ctx.cr6.compare<uint32_t>(r19.u32, 1023, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r26,6688
	r26.s64 = 438304768;
	// b 0x82401dc8
	goto loc_82401DC8;
loc_82401D28:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401d68
	if (!ctx.cr6.eq) goto loc_82401D68;
	// cmplwi cr6,r18,65280
	ctx.cr6.compare<uint32_t>(r18.u32, 65280, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r19,255
	ctx.cr6.compare<uint32_t>(r19.u32, 255, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401d58
	if (!ctx.cr6.eq) goto loc_82401D58;
	// lis r26,6688
	r26.s64 = 438304768;
	// b 0x82401e24
	goto loc_82401E24;
loc_82401D58:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r26,10784
	r26.s64 = 706740224;
	// b 0x82401e24
	goto loc_82401E24;
loc_82401D68:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x82401d98
	if (!ctx.cr6.eq) goto loc_82401D98;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r19,65535
	ctx.cr6.compare<uint32_t>(r19.u32, 65535, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r26,11552
	r26.s64 = 757071872;
	// ori r26,r26,153
	r26.u64 = r26.u64 | 153;
	// b 0x82401f60
	goto loc_82401F60;
loc_82401D98:
	// cmplwi cr6,r17,1023
	ctx.cr6.compare<uint32_t>(r17.u32, 1023, ctx.xer);
	// bne cr6,0x82401dd0
	if (!ctx.cr6.eq) goto loc_82401DD0;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ori r11,r11,64512
	ctx.r11.u64 = ctx.r11.u64 | 64512;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r26,6184
	r26.s64 = 405274624;
loc_82401DC8:
	// ori r26,r26,182
	r26.u64 = r26.u64 | 182;
	// b 0x82401f60
	goto loc_82401F60;
loc_82401DD0:
	// cmplwi cr6,r17,65280
	ctx.cr6.compare<uint32_t>(r17.u32, 65280, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82401e20
	goto loc_82401E20;
loc_82401DFC:
	// cmplwi cr6,r17,255
	ctx.cr6.compare<uint32_t>(r17.u32, 255, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r18,65280
	ctx.cr6.compare<uint32_t>(r18.u32, 65280, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
loc_82401E20:
	// lis r26,10280
	r26.s64 = 673710080;
loc_82401E24:
	// ori r26,r26,134
	r26.u64 = r26.u64 | 134;
	// b 0x82401f60
	goto loc_82401F60;
loc_82401E2C:
	// cmplwi cr6,r17,255
	ctx.cr6.compare<uint32_t>(r17.u32, 255, ctx.xer);
	// bne cr6,0x82401e58
	if (!ctx.cr6.eq) goto loc_82401E58;
	// cmplwi cr6,r18,255
	ctx.cr6.compare<uint32_t>(r18.u32, 255, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r19,255
	ctx.cr6.compare<uint32_t>(r19.u32, 255, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r21,65280
	ctx.cr6.compare<uint32_t>(r21.u32, 65280, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r26,2048
	r26.s64 = 134217728;
	// ori r26,r26,74
	r26.u64 = r26.u64 | 74;
	// b 0x82401f60
	goto loc_82401F60;
loc_82401E58:
	// cmplwi cr6,r17,31
	ctx.cr6.compare<uint32_t>(r17.u32, 31, ctx.xer);
	// bne cr6,0x82401eac
	if (!ctx.cr6.eq) goto loc_82401EAC;
	// cmplwi cr6,r18,2016
	ctx.cr6.compare<uint32_t>(r18.u32, 2016, ctx.xer);
	// bne cr6,0x82401e84
	if (!ctx.cr6.eq) goto loc_82401E84;
	// cmplwi cr6,r19,63488
	ctx.cr6.compare<uint32_t>(r19.u32, 63488, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r26,10280
	r26.s64 = 673710080;
	// ori r26,r26,68
	r26.u64 = r26.u64 | 68;
	// b 0x82401f60
	goto loc_82401F60;
loc_82401E84:
	// cmplwi cr6,r18,992
	ctx.cr6.compare<uint32_t>(r18.u32, 992, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r19,31744
	ctx.cr6.compare<uint32_t>(r19.u32, 31744, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82401f58
	if (ctx.cr6.eq) goto loc_82401F58;
	// cmplwi cr6,r21,32768
	ctx.cr6.compare<uint32_t>(r21.u32, 32768, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r26,6184
	r26.s64 = 405274624;
	// b 0x82401f5c
	goto loc_82401F5C;
loc_82401EAC:
	// cmplwi cr6,r17,15
	ctx.cr6.compare<uint32_t>(r17.u32, 15, ctx.xer);
	// bne cr6,0x82401ee8
	if (!ctx.cr6.eq) goto loc_82401EE8;
	// cmplwi cr6,r18,240
	ctx.cr6.compare<uint32_t>(r18.u32, 240, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r19,3840
	ctx.cr6.compare<uint32_t>(r19.u32, 3840, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r21,61440
	ctx.cr6.compare<uint32_t>(r21.u32, 61440, ctx.xer);
	// bne cr6,0x82401ed4
	if (!ctx.cr6.eq) goto loc_82401ED4;
	// lis r26,6184
	r26.s64 = 405274624;
	// b 0x82401ee0
	goto loc_82401EE0;
loc_82401ED4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r26,10280
	r26.s64 = 673710080;
loc_82401EE0:
	// ori r26,r26,79
	r26.u64 = r26.u64 | 79;
	// b 0x82401f60
	goto loc_82401F60;
loc_82401EE8:
	// cmplwi cr6,r17,65535
	ctx.cr6.compare<uint32_t>(r17.u32, 65535, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r18,65535
	ctx.cr6.compare<uint32_t>(r18.u32, 65535, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r19,65535
	ctx.cr6.compare<uint32_t>(r19.u32, 65535, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82401f60
	if (!ctx.cr6.eq) goto loc_82401F60;
	// lis r26,10240
	r26.s64 = 671088640;
	// ori r26,r26,88
	r26.u64 = r26.u64 | 88;
	// b 0x82401f60
	goto loc_82401F60;
loc_82401F14:
	// cmplwi cr6,r6,16
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16, ctx.xer);
	// beq cr6,0x82401f48
	if (ctx.cr6.eq) goto loc_82401F48;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// beq cr6,0x82401f2c
	if (ctx.cr6.eq) goto loc_82401F2C;
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// bne cr6,0x82401b58
	if (!ctx.cr6.eq) goto loc_82401B58;
loc_82401F2C:
	// lis r26,10280
	r26.s64 = 673710080;
	// lwz r17,80(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,80(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r19,80(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ori r26,r26,134
	r26.u64 = r26.u64 | 134;
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82401f60
	goto loc_82401F60;
loc_82401F48:
	// lwz r17,80(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,80(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r19,80(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82401F58:
	// lis r26,10280
	r26.s64 = 673710080;
loc_82401F5C:
	// ori r26,r26,67
	r26.u64 = r26.u64 | 67;
loc_82401F60:
	// rlwinm r9,r26,0,26,22
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r9,-449
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -449, ctx.xer);
	// beq cr6,0x82401b58
	if (ctx.cr6.eq) goto loc_82401B58;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x82401fac
	if (ctx.cr6.eq) goto loc_82401FAC;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x82401fa0
	if (ctx.cr6.eq) goto loc_82401FA0;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// beq cr6,0x82401f94
	if (ctx.cr6.eq) goto loc_82401F94;
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r29,r11,r7
	r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x82401fb8
	goto loc_82401FB8;
loc_82401F94:
	// rlwinm r29,r7,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r7,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3));
	// b 0x82401fb8
	goto loc_82401FB8;
loc_82401FA0:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x82401fb4
	goto loc_82401FB4;
loc_82401FAC:
	// addi r11,r7,7
	ctx.r11.s64 = ctx.r7.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82401FB4:
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_82401FB8:
	// lis r10,6690
	ctx.r10.s64 = 438435840;
	// ori r28,r10,43558
	r28.u64 = ctx.r10.u64 | 43558;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bne cr6,0x82401fcc
	if (!ctx.cr6.eq) goto loc_82401FCC;
	// rlwinm r29,r7,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
loc_82401FCC:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// rlwinm r24,r10,0,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x82401fe4
	if (ctx.cr6.eq) goto loc_82401FE4;
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(r16.u32, 3, ctx.xer);
	// bne cr6,0x82401ffc
	if (!ctx.cr6.eq) goto loc_82401FFC;
loc_82401FE4:
	// addi r10,r22,-1
	ctx.r10.s64 = r22.s64 + -1;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x82401b58
	if (ctx.cr6.gt) goto loc_82401B58;
loc_82401FFC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x82402074
	if (!ctx.cr6.eq) goto loc_82402074;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82402074
	if (!ctx.cr6.eq) goto loc_82402074;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82402074
	if (ctx.cr6.eq) goto loc_82402074;
	// add r9,r30,r20
	ctx.r9.u64 = r30.u64 + r20.u64;
loc_82402024:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82402064
	if (ctx.cr6.eq) goto loc_82402064;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82402034:
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r4,r4,0,0,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82402054
	if (!ctx.cr0.eq) goto loc_82402054;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82402034
	if (ctx.cr6.lt) goto loc_82402034;
	// b 0x8240205c
	goto loc_8240205C;
loc_82402054:
	// lis r26,6184
	r26.s64 = 405274624;
	// ori r26,r26,134
	r26.u64 = r26.u64 | 134;
loc_8240205C:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82402074
	if (ctx.cr6.lt) goto loc_82402074;
loc_82402064:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + r24.u64;
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r22.u32, ctx.xer);
	// blt cr6,0x82402024
	if (ctx.cr6.lt) goto loc_82402024;
loc_82402074:
	// addi r11,r29,3
	ctx.r11.s64 = r29.s64 + 3;
	// lwz r10,64(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 64);
	// stw r26,0(r27)
	REX_STORE_U32(r27.u32 + 0, r26.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r7,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r7.u32);
	// stw r22,16(r27)
	REX_STORE_U32(r27.u32 + 16, r22.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,52(r27)
	REX_STORE_U32(r27.u32 + 52, ctx.r5.u32);
	// stw r11,48(r27)
	REX_STORE_U32(r27.u32 + 48, ctx.r11.u32);
	// stw r14,20(r27)
	REX_STORE_U32(r27.u32 + 20, r14.u32);
	// beq cr6,0x824026e0
	if (ctx.cr6.eq) goto loc_824026E0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x824020b0
	if (ctx.cr6.eq) goto loc_824020B0;
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(r16.u32, 3, ctx.xer);
	// bne cr6,0x824020e4
	if (!ctx.cr6.eq) goto loc_824020E4;
loc_824020B0:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bge cr6,0x824020e4
	if (!ctx.cr6.lt) goto loc_824020E4;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// blt cr6,0x824020e4
	if (ctx.cr6.lt) goto loc_824020E4;
	// cmplwi cr6,r6,24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 24, ctx.xer);
	// beq cr6,0x824020e4
	if (ctx.cr6.eq) goto loc_824020E4;
	// rlwinm r10,r26,0,26,22
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r28.s32, ctx.xer);
	// beq cr6,0x824020e4
	if (ctx.cr6.eq) goto loc_824020E4;
	// add r11,r30,r20
	ctx.r11.u64 = r30.u64 + r20.u64;
	// stw r5,56(r27)
	REX_STORE_U32(r27.u32 + 56, ctx.r5.u32);
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// b 0x824026e0
	goto loc_824026E0;
loc_824020E4:
	// stw r14,56(r27)
	REX_STORE_U32(r27.u32 + 56, r14.u32);
	// mullw r3,r11,r22
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f02b8
	ctx.lr = 0x824020F4;
	sub_823F02B8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r23,4(r27)
	REX_STORE_U32(r27.u32 + 4, r23.u32);
	// bne 0x8240210c
	if (!ctx.cr0.eq) goto loc_8240210C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824026e4
	goto loc_824026E4;
loc_8240210C:
	// add r30,r30,r20
	r30.u64 = r30.u64 + r20.u64;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// add r25,r20,r25
	r25.u64 = r20.u64 + r25.u64;
	// mr r20,r30
	r20.u64 = r30.u64;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bge cr6,0x82402130
	if (!ctx.cr6.lt) goto loc_82402130;
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r15,r11
	r15.u64 = ctx.r11.u64;
	// b 0x82402140
	goto loc_82402140;
loc_82402130:
	// addi r10,r22,-1
	ctx.r10.s64 = r22.s64 + -1;
	// neg r15,r11
	r15.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r31,r10,r23
	r31.u64 = ctx.r10.u64 + r23.u64;
loc_82402140:
	// mullw r11,r11,r22
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// add r22,r11,r23
	r22.u64 = ctx.r11.u64 + r23.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// cmplwi cr6,r16,2
	ctx.cr6.compare<uint32_t>(r16.u32, 2, ctx.xer);
	// bne cr6,0x824022c8
	if (!ctx.cr6.eq) goto loc_824022C8;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x824026e0
	if (ctx.cr6.lt) goto loc_824026E0;
loc_8240215C:
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(r27.u32, r22.u32, ctx.xer);
	// bge cr6,0x824026e0
	if (!ctx.cr6.lt) goto loc_824026E0;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(r30.u32, r20.u32, ctx.xer);
	// blt cr6,0x82401b58
	if (ctx.cr6.lt) goto loc_82401B58;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// bge cr6,0x82401b58
	if (!ctx.cr6.lt) goto loc_82401B58;
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82402268
	if (!ctx.cr0.eq) goto loc_82402268;
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8240225c
	if (ctx.cr6.lt) goto loc_8240225C;
	// beq cr6,0x82402254
	if (ctx.cr6.eq) goto loc_82402254;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8240222c
	if (ctx.cr6.lt) goto loc_8240222C;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x82401b58
	if (ctx.cr6.lt) goto loc_82401B58;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bgt cr6,0x82401b58
	if (ctx.cr6.gt) goto loc_82401B58;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824021d0
	if (ctx.cr6.eq) goto loc_824021D0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x82401b58
	if (!ctx.cr6.lt) goto loc_82401B58;
loc_824021D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82402210
	if (!ctx.cr6.gt) goto loc_82402210;
loc_824021DC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// beq 0x824021f8
	if (ctx.cr0.eq) goto loc_824021F8;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// b 0x824021fc
	goto loc_824021FC;
loc_824021F8:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_824021FC:
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824021dc
	if (ctx.cr6.lt) goto loc_824021DC;
loc_82402210:
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// b 0x824022b8
	goto loc_824022B8;
loc_8240222C:
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x82401b58
	if (!ctx.cr6.lt) goto loc_82401B58;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r15.s32);
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// b 0x824022b8
	goto loc_824022B8;
loc_82402254:
	// mr r27,r22
	r27.u64 = r22.u64;
	// b 0x824022b8
	goto loc_824022B8;
loc_8240225C:
	// add r27,r27,r15
	r27.u64 = r27.u64 + r15.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x824022b8
	goto loc_824022B8;
loc_82402268:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x82401b58
	if (ctx.cr6.lt) goto loc_82401B58;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bgt cr6,0x82401b58
	if (ctx.cr6.gt) goto loc_82401B58;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824022b4
	if (!ctx.cr6.gt) goto loc_824022B4;
loc_82402288:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// beq 0x8240229c
	if (ctx.cr0.eq) goto loc_8240229C;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// b 0x824022a0
	goto loc_824022A0;
loc_8240229C:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_824022A0:
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82402288
	if (ctx.cr6.lt) goto loc_82402288;
loc_824022B4:
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
loc_824022B8:
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// bge cr6,0x8240215c
	if (!ctx.cr6.lt) goto loc_8240215C;
	// b 0x824026e0
	goto loc_824026E0;
loc_824022C8:
	// cmplwi cr6,r16,1
	ctx.cr6.compare<uint32_t>(r16.u32, 1, ctx.xer);
	// bne cr6,0x824023d0
	if (!ctx.cr6.eq) goto loc_824023D0;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x824026e0
	if (ctx.cr6.lt) goto loc_824026E0;
loc_824022D8:
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(r27.u32, r22.u32, ctx.xer);
	// bge cr6,0x824026e0
	if (!ctx.cr6.lt) goto loc_824026E0;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(r30.u32, r20.u32, ctx.xer);
	// blt cr6,0x82401b58
	if (ctx.cr6.lt) goto loc_82401B58;
	// addi r29,r30,1
	r29.s64 = r30.s64 + 1;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bge cr6,0x82401b58
	if (!ctx.cr6.lt) goto loc_82401B58;
	// lbz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82402398
	if (!ctx.cr0.eq) goto loc_82402398;
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8240238c
	if (ctx.cr6.lt) goto loc_8240238C;
	// beq cr6,0x82402384
	if (ctx.cr6.eq) goto loc_82402384;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x82402360
	if (ctx.cr6.lt) goto loc_82402360;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x82401b58
	if (ctx.cr6.lt) goto loc_82401B58;
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + r31.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bgt cr6,0x82401b58
	if (ctx.cr6.gt) goto loc_82401B58;
	// add r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 + r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x82401b58
	if (ctx.cr6.gt) goto loc_82401B58;
	// addi r4,r30,2
	ctx.r4.s64 = r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82402348;
	sub_826A1E70(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// b 0x824023c0
	goto loc_824023C0;
loc_82402360:
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x82401b58
	if (!ctx.cr6.lt) goto loc_82401B58;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r15.s32);
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x824023bc
	goto loc_824023BC;
loc_82402384:
	// mr r27,r22
	r27.u64 = r22.u64;
	// b 0x824023c0
	goto loc_824023C0;
loc_8240238C:
	// add r27,r27,r15
	r27.u64 = r27.u64 + r15.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x824023c0
	goto loc_824023C0;
loc_82402398:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x82401b58
	if (ctx.cr6.lt) goto loc_82401B58;
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + r31.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bgt cr6,0x82401b58
	if (ctx.cr6.gt) goto loc_82401B58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U8(r29.u32 + 0);
	// bl 0x826a2e60
	ctx.lr = 0x824023B8;
	sub_826A2E60(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
loc_824023BC:
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_824023C0:
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(r27.u32, r23.u32, ctx.xer);
	// bge cr6,0x824022d8
	if (!ctx.cr6.lt) goto loc_824022D8;
	// b 0x824026e0
	goto loc_824026E0;
loc_824023D0:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8240243c
	if (!ctx.cr6.eq) goto loc_8240243C;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x824026e0
	if (ctx.cr6.lt) goto loc_824026E0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824023E8:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// bge cr6,0x824026e0
	if (!ctx.cr6.lt) goto loc_824026E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82402428
	if (ctx.cr6.eq) goto loc_82402428;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82402400:
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	// subfic r8,r8,7
	ctx.xer.ca = ctx.r8.u32 <= 7;
	ctx.r8.u64 = static_cast<uint64_t>(7) - ctx.r8.u64;
	// lbzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + r30.u32);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stbx r9,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82402400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82402400;
loc_82402428:
	// add r31,r31,r15
	r31.u64 = r31.u64 + r15.u64;
	// add r30,r30,r24
	r30.u64 = r30.u64 + r24.u64;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bge cr6,0x824023e8
	if (!ctx.cr6.lt) goto loc_824023E8;
	// b 0x824026e0
	goto loc_824026E0;
loc_8240243C:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x824024a4
	if (!ctx.cr6.eq) goto loc_824024A4;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x824026e0
	if (ctx.cr6.lt) goto loc_824026E0;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82402450:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// bge cr6,0x824026e0
	if (!ctx.cr6.lt) goto loc_824026E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82402490
	if (ctx.cr6.eq) goto loc_82402490;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82402468:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// beq 0x82402480
	if (ctx.cr0.eq) goto loc_82402480;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// b 0x82402484
	goto loc_82402484;
loc_82402480:
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
loc_82402484:
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82402468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82402468;
loc_82402490:
	// add r31,r31,r15
	r31.u64 = r31.u64 + r15.u64;
	// add r30,r30,r24
	r30.u64 = r30.u64 + r24.u64;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bge cr6,0x82402450
	if (!ctx.cr6.lt) goto loc_82402450;
	// b 0x824026e0
	goto loc_824026E0;
loc_824024A4:
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// bne cr6,0x82402518
	if (!ctx.cr6.eq) goto loc_82402518;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x824026e0
	if (ctx.cr6.lt) goto loc_824026E0;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824024B8:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// bge cr6,0x824026e0
	if (!ctx.cr6.lt) goto loc_824026E0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82402504
	if (ctx.cr6.eq) goto loc_82402504;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_824024D4:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// li r6,255
	ctx.r6.s64 = 255;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x824024d4
	if (!ctx.cr0.eq) goto loc_824024D4;
loc_82402504:
	// add r31,r31,r15
	r31.u64 = r31.u64 + r15.u64;
	// add r30,r30,r24
	r30.u64 = r30.u64 + r24.u64;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bge cr6,0x824024b8
	if (!ctx.cr6.lt) goto loc_824024B8;
	// b 0x824026e0
	goto loc_824026E0;
loc_82402518:
	// rlwinm r11,r26,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bne cr6,0x82402654
	if (!ctx.cr6.eq) goto loc_82402654;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r19,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r17.u32);
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// lfs f13,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_82402540:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824025a8
	if (ctx.cr6.eq) goto loc_824025A8;
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82402588
	if (!ctx.cr0.eq) goto loc_82402588;
loc_82402564:
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r7,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82402564
	if (ctx.cr0.eq) goto loc_82402564;
loc_82402588:
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_824025A8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82402540
	if (ctx.cr6.lt) goto loc_82402540;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x824025ec
	if (!ctx.cr6.eq) goto loc_824025EC;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// bne cr6,0x824025ec
	if (!ctx.cr6.eq) goto loc_824025EC;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x824025ec
	if (!ctx.cr6.eq) goto loc_824025EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r14,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r14.u32);
	// stw r14,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r14.u32);
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_824025EC:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x824026e0
	if (ctx.cr6.lt) goto loc_824026E0;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824025FC:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// bge cr6,0x824026e0
	if (!ctx.cr6.lt) goto loc_824026E0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824026d0
	if (ctx.cr6.eq) goto loc_824026D0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r9,r30,-2
	ctx.r9.s64 = r30.s64 + -2;
loc_82402618:
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// beq cr6,0x82402660
	if (ctx.cr6.eq) goto loc_82402660;
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// bne cr6,0x82402664
	if (!ctx.cr6.eq) goto loc_82402664;
	// lwz r6,2(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 2);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82402664
	goto loc_82402664;
loc_82402634:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(r31.u32, r22.u32, ctx.xer);
	// bge cr6,0x824026e0
	if (!ctx.cr6.lt) goto loc_824026E0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8240264C;
	sub_826A1E70(ctx, base);
	// add r31,r31,r15
	r31.u64 = r31.u64 + r15.u64;
	// add r30,r30,r24
	r30.u64 = r30.u64 + r24.u64;
loc_82402654:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bge cr6,0x82402634
	if (!ctx.cr6.lt) goto loc_82402634;
	// b 0x824026e0
	goto loc_824026E0;
loc_82402660:
	// lhzu r6,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
loc_82402664:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82402670:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824026b4
	if (ctx.cr6.eq) goto loc_824026B4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// srw r3,r6,r3
	ctx.r3.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r3.u8 & 0x3F));
	// and r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ctx.r10.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x824026b8
	goto loc_824026B8;
loc_824026B4:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_824026B8:
	// stfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82402670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82402670;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bne 0x82402618
	if (!ctx.cr0.eq) goto loc_82402618;
loc_824026D0:
	// add r31,r31,r15
	r31.u64 = r31.u64 + r15.u64;
	// add r30,r30,r24
	r30.u64 = r30.u64 + r24.u64;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bge cr6,0x824025fc
	if (!ctx.cr6.lt) goto loc_824025FC;
loc_824026E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824026E4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8245AC08) {
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
	// lwz r11,1544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1544);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r3)
	REX_STORE_U32(ctx.r3.u32 + 1544, ctx.r11.u32);
	// bl 0x82455688
	ctx.lr = 0x8245AC2C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245ac4c
	if (ctx.cr0.lt) goto loc_8245AC4C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14336
	ctx.r4.s64 = ctx.r11.s64 + 14336;
	// bl 0x824555b8
	ctx.lr = 0x8245AC44;
	sub_824555B8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8245AC4C:
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

DEFINE_REX_FUNC(sub_8245E790) {
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
	// addi r5,r11,18568
	ctx.r5.s64 = ctx.r11.s64 + 18568;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E7BC;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473498
	ctx.lr = 0x8245E7C4;
	sub_82473498(ctx, base);
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

DEFINE_REX_FUNC(sub_8245FA98) {
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
	ctx.lr = 0x8245FAA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8245fb0c
	if (ctx.cr6.eq) goto loc_8245FB0C;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// stw r6,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8245fb0c
	if (!ctx.cr6.gt) goto loc_8245FB0C;
	// li r29,0
	r29.s64 = 0;
loc_8245FAD8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// bl 0x8245fa98
	ctx.lr = 0x8245FAF8;
	sub_8245FA98(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245fad8
	if (ctx.cr6.lt) goto loc_8245FAD8;
loc_8245FB0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82466170) {
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
	ctx.lr = 0x82466178;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824664c0
	if (!ctx.cr6.eq) goto loc_824664C0;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824661b8
	if (ctx.cr0.eq) goto loc_824661B8;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_824661B8:
	// or r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 | r24.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r5,r11,64
	ctx.r5.u64 = ctx.r11.u64 | 64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824786b8
	ctx.lr = 0x824661D0;
	sub_824786B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x824661e8
	if (!ctx.cr6.eq) goto loc_824661E8;
loc_824661DC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824664cc
	goto loc_824664CC;
loc_824661E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82466260
	if (ctx.cr0.eq) goto loc_82466260;
	// lwz r10,60(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 60);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82466208
	if (ctx.cr0.eq) goto loc_82466208;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82466208:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f0,32(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r25.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,100(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 100);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x82478758
	ctx.lr = 0x82466234;
	sub_82478758(ctx, base);
	// stw r3,48(r25)
	REX_STORE_U32(r25.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824661dc
	if (ctx.cr6.eq) goto loc_824661DC;
	// stw r3,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824781d0
	ctx.lr = 0x8246625C;
	sub_824781D0(ctx, base);
	// b 0x824664c8
	goto loc_824664C8;
loc_82466260:
	// lwz r22,8(r28)
	r22.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r26,0
	r26.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82466324
	if (ctx.cr6.eq) goto loc_82466324;
	// li r30,0
	r30.s64 = 0;
loc_82466278:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwzx r31,r30,r11
	r31.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824662b4
	if (!ctx.cr6.eq) goto loc_824662B4;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r10,96(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824662b4
	if (!ctx.cr6.eq) goto loc_824662B4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824662b4
	if (ctx.cr6.eq) goto loc_824662B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824662bc
	if (ctx.cr6.eq) goto loc_824662BC;
loc_824662B4:
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(r25.u32, r31.u32, ctx.xer);
	// bne cr6,0x82466314
	if (!ctx.cr6.eq) goto loc_82466314;
loc_824662BC:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82478758
	ctx.lr = 0x824662D4;
	sub_82478758(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824661dc
	if (ctx.cr6.eq) goto loc_824661DC;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r23,r10,r11
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824781d0
	ctx.lr = 0x824662F8;
	sub_824781D0(ctx, base);
	// lwz r11,100(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 100);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,112(r23)
	REX_STORE_U32(r23.u32 + 112, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82466314
	if (ctx.cr6.eq) goto loc_82466314;
	// li r26,1
	r26.s64 = 1;
loc_82466314:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// blt cr6,0x82466278
	if (ctx.cr6.lt) goto loc_82466278;
loc_82466324:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824664c0
	if (ctx.cr6.eq) goto loc_824664C0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x824664c0
	if (ctx.cr6.eq) goto loc_824664C0;
	// rlwinm. r10,r24,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82466348
	if (ctx.cr0.eq) goto loc_82466348;
	// lwz r23,180(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x8246634c
	goto loc_8246634C;
loc_82466348:
	// lwz r23,184(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
loc_8246634C:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// beq cr6,0x824661dc
	if (ctx.cr6.eq) goto loc_824661DC;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824664c0
	if (ctx.cr6.eq) goto loc_824664C0;
	// li r26,0
	r26.s64 = 0;
loc_82466364:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwzx r29,r26,r11
	r29.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824663a0
	if (!ctx.cr6.eq) goto loc_824663A0;
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// lwz r10,96(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 96);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824663a0
	if (!ctx.cr6.eq) goto loc_824663A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824663a0
	if (ctx.cr6.eq) goto loc_824663A0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824663a8
	if (ctx.cr6.eq) goto loc_824663A8;
loc_824663A0:
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(r25.u32, r29.u32, ctx.xer);
	// bne cr6,0x824664b0
	if (!ctx.cr6.eq) goto loc_824664B0;
loc_824663A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f1,32(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r29.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,100(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 100);
	// lwz r3,228(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 228);
	// bl 0x82478758
	ctx.lr = 0x824663C0;
	sub_82478758(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824661dc
	if (ctx.cr6.eq) goto loc_824661DC;
	// lwz r7,68(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 68);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x824664b0
	if (ctx.cr6.eq) goto loc_824664B0;
	// lwz r3,228(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824664b0
	if (ctx.cr6.eq) goto loc_824664B0;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824664b0
	if (!ctx.cr6.eq) goto loc_824664B0;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82466448
	if (ctx.cr6.eq) goto loc_82466448;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8246642C:
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82466448
	if (ctx.cr6.eq) goto loc_82466448;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8246642c
	if (ctx.cr6.lt) goto loc_8246642C;
loc_82466448:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824787f8
	ctx.lr = 0x82466468;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824661dc
	if (ctx.cr6.eq) goto loc_824661DC;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477420
	ctx.lr = 0x8246648C;
	sub_82477420(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 48);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r27,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r27.u32);
loc_824664B0:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(r24.u32, r22.u32, ctx.xer);
	// blt cr6,0x82466364
	if (ctx.cr6.lt) goto loc_82466364;
loc_824664C0:
	// lwz r11,48(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 48);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
loc_824664C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824664CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_824793B0) {
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
	ctx.lr = 0x824793B8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x82479558
	if (!ctx.cr6.gt) goto loc_82479558;
	// rlwinm. r28,r5,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82479498
	if (ctx.cr0.eq) goto loc_82479498;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r11,r4
	r21.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r24,r10,1
	r24.s64 = ctx.r10.s64 + 1;
loc_824793EC:
	// addi r24,r24,-2
	r24.s64 = r24.s64 + -2;
	// lwzu r22,-4(r21)
	ea = -4 + r21.u32;
	r22.u64 = REX_LOAD_U32(ea);
	r21.u32 = ea;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// mr r31,r24
	r31.u64 = r24.u64;
	// mr r23,r28
	r23.u64 = r28.u64;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(r24.u32, r25.u32, ctx.xer);
	// bge cr6,0x82479488
	if (!ctx.cr6.lt) goto loc_82479488;
loc_82479408:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r31,1
	r26.s64 = r31.s64 + 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bge cr6,0x82479448
	if (!ctx.cr6.lt) goto loc_82479448;
	// lwz r27,4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x82479438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82479448
	if (!ctx.cr0.gt) goto loc_82479448;
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82479448:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x8247945C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82479488
	if (!ctx.cr0.gt) goto loc_82479488;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r23,r31
	r23.u64 = r31.u64;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r10,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// stwx r11,r9,r29
	REX_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r11.u32);
	// blt cr6,0x82479408
	if (ctx.cr6.lt) goto loc_82479408;
loc_82479488:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stwx r22,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r22.u32);
	// bne cr6,0x824793ec
	if (!ctx.cr6.eq) goto loc_824793EC;
loc_82479498:
	// addic. r30,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r30.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82479558
	if (ctx.cr0.eq) goto loc_82479558;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r29
	r25.u64 = ctx.r11.u64 + r29.u64;
loc_824794A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// lwz r23,0(r25)
	r23.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82479544
	if (!ctx.cr6.gt) goto loc_82479544;
loc_824794C4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r31,1
	r26.s64 = r31.s64 + 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bge cr6,0x82479504
	if (!ctx.cr6.lt) goto loc_82479504;
	// lwz r27,4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x824794F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82479504
	if (!ctx.cr0.gt) goto loc_82479504;
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82479504:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x82479518;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82479544
	if (!ctx.cr0.gt) goto loc_82479544;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r31
	r24.u64 = r31.u64;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r10,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// stwx r11,r9,r29
	REX_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r11.u32);
	// blt cr6,0x824794c4
	if (ctx.cr6.lt) goto loc_824794C4;
loc_82479544:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r25,r25,-4
	r25.s64 = r25.s64 + -4;
	// stwx r23,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r23.u32);
	// bne 0x824794a8
	if (!ctx.cr0.eq) goto loc_824794A8;
loc_82479558:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82493588) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// bne cr6,0x824935d0
	if (!ctx.cr6.eq) goto loc_824935D0;
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// beq cr6,0x824935c8
	if (ctx.cr6.eq) goto loc_824935C8;
	// cmpwi cr6,r4,25
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 25, ctx.xer);
	// beq cr6,0x824935c8
	if (ctx.cr6.eq) goto loc_824935C8;
	// cmpwi cr6,r4,27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 27, ctx.xer);
	// beq cr6,0x824935c8
	if (ctx.cr6.eq) goto loc_824935C8;
	// cmpwi cr6,r4,29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 29, ctx.xer);
	// beq cr6,0x824935c8
	if (ctx.cr6.eq) goto loc_824935C8;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// beq cr6,0x824935c8
	if (ctx.cr6.eq) goto loc_824935C8;
	// cmpwi cr6,r4,26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 26, ctx.xer);
	// beq cr6,0x824935c8
	if (ctx.cr6.eq) goto loc_824935C8;
	// cmpwi cr6,r4,28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 28, ctx.xer);
loc_824935C4:
	// bne cr6,0x82493600
	if (!ctx.cr6.eq) goto loc_82493600;
loc_824935C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_824935D0:
	// cmpwi cr6,r3,33
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 33, ctx.xer);
	// bne cr6,0x82493600
	if (!ctx.cr6.eq) goto loc_82493600;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// beq cr6,0x824935c8
	if (ctx.cr6.eq) goto loc_824935C8;
	// cmpwi cr6,r4,34
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 34, ctx.xer);
	// beq cr6,0x824935c8
	if (ctx.cr6.eq) goto loc_824935C8;
	// cmpwi cr6,r4,35
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 35, ctx.xer);
	// beq cr6,0x824935c8
	if (ctx.cr6.eq) goto loc_824935C8;
	// cmpwi cr6,r4,36
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 36, ctx.xer);
	// beq cr6,0x824935c8
	if (ctx.cr6.eq) goto loc_824935C8;
	// cmpwi cr6,r4,37
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 37, ctx.xer);
	// b 0x824935c4
	goto loc_824935C4;
loc_82493600:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82494A40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82494A48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// bl 0x82444750
	ctx.lr = 0x82494A6C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82494a80
	if (ctx.cr0.eq) goto loc_82494A80;
	// bl 0x82446f70
	ctx.lr = 0x82494A78;
	sub_82446F70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82494a84
	goto loc_82494A84;
loc_82494A80:
	// li r30,0
	r30.s64 = 0;
loc_82494A84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82494b2c
	if (ctx.cr6.eq) goto loc_82494B2C;
	// li r11,13
	ctx.r11.s64 = 13;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
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
	// beq cr6,0x82494ad0
	if (ctx.cr6.eq) goto loc_82494AD0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82494AC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82494b2c
	if (ctx.cr0.eq) goto loc_82494B2C;
loc_82494AD0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82494af8
	if (ctx.cr6.eq) goto loc_82494AF8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82494AEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82494b2c
	if (ctx.cr0.eq) goto loc_82494B2C;
loc_82494AF8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x82494B00;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82494b20
	if (ctx.cr0.eq) goto loc_82494B20;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-12700
	ctx.r6.s64 = ctx.r11.s64 + -12700;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82444918
	ctx.lr = 0x82494B1C;
	sub_82444918(ctx, base);
	// b 0x82494b24
	goto loc_82494B24;
loc_82494B20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82494B24:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82494b30
	if (!ctx.cr6.eq) goto loc_82494B30;
loc_82494B2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82494B30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82499848) {
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
	ctx.lr = 0x82499850;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82499974
	if (ctx.cr6.eq) goto loc_82499974;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82499974
	if (!ctx.cr6.eq) goto loc_82499974;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82499974
	if (ctx.cr6.eq) goto loc_82499974;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82499974
	if (!ctx.cr6.eq) goto loc_82499974;
	// li r3,80
	ctx.r3.s64 = 80;
	// lwz r21,16(r4)
	r21.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// addi r17,r5,16
	r17.s64 = ctx.r5.s64 + 16;
	// bl 0x82444750
	ctx.lr = 0x82499894;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824998c0
	if (ctx.cr0.eq) goto loc_824998C0;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,29
	ctx.r5.s64 = 29;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824474c0
	ctx.lr = 0x824998B8;
	sub_824474C0(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// b 0x824998c4
	goto loc_824998C4;
loc_824998C0:
	// li r16,0
	r16.s64 = 0;
loc_824998C4:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x82499974
	if (ctx.cr6.eq) goto loc_82499974;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82499958
	if (ctx.cr6.eq) goto loc_82499958;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824999dc
	if (!ctx.cr6.eq) goto loc_824999DC;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_824998E8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249994c
	if (ctx.cr6.eq) goto loc_8249994C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8249994c
	if (!ctx.cr6.eq) goto loc_8249994C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_82499910:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82499934
	if (ctx.cr0.eq) goto loc_82499934;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82499910
	if (ctx.cr6.eq) goto loc_82499910;
loc_82499934:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82499980
	if (ctx.cr0.eq) goto loc_82499980;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r4,48(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// bl 0x82495868
	ctx.lr = 0x82499948;
	sub_82495868(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_8249994C:
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824998e8
	if (!ctx.cr6.eq) goto loc_824998E8;
loc_82499958:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r17)
	ctx.r7.u64 = REX_LOAD_U32(r17.u32 + 8);
	// li r5,3018
	ctx.r5.s64 = 3018;
	// addi r6,r11,-11376
	ctx.r6.s64 = ctx.r11.s64 + -11376;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82494d48
	ctx.lr = 0x82499974;
	sub_82494D48(ctx, base);
loc_82499974:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82499978:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
loc_82499980:
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824999ac
	if (ctx.cr6.eq) goto loc_824999AC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824999A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r16)
	REX_STORE_U32(r16.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499974
	if (ctx.cr0.eq) goto loc_82499974;
loc_824999AC:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x824999B4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824999d0
	if (ctx.cr0.eq) goto loc_824999D0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82447910
	ctx.lr = 0x824999CC;
	sub_82447910(ctx, base);
	// b 0x824999d4
	goto loc_824999D4;
loc_824999D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824999D4:
	// stw r3,36(r16)
	REX_STORE_U32(r16.u32 + 36, ctx.r3.u32);
	// b 0x82499d90
	goto loc_82499D90;
loc_824999DC:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82499958
	if (!ctx.cr6.eq) goto loc_82499958;
	// lwz r31,8(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 8);
	// lwz r10,36(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 36);
	// lwz r19,28(r21)
	r19.u64 = REX_LOAD_U32(r21.u32 + 28);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r20,32(r21)
	r20.u64 = REX_LOAD_U32(r21.u32 + 32);
	// rlwinm r18,r10,0,22,22
	r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
loc_824999FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824999fc
	if (!ctx.cr6.eq) goto loc_824999FC;
	// subf r10,r31,r11
	ctx.r10.u64 = ctx.r11.u64 - r31.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r25,r10,r31
	r25.u64 = ctx.r10.u64 + r31.u64;
	// beq cr6,0x82499a90
	if (ctx.cr6.eq) goto loc_82499A90;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// ble cr6,0x82499958
	if (!ctx.cr6.gt) goto loc_82499958;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// ble cr6,0x82499a74
	if (!ctx.cr6.gt) goto loc_82499A74;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// beq cr6,0x82499a74
	if (ctx.cr6.eq) goto loc_82499A74;
	// cmplwi cr6,r11,114
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// beq cr6,0x82499a74
	if (ctx.cr6.eq) goto loc_82499A74;
	// cmplwi cr6,r11,118
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 118, ctx.xer);
	// ble cr6,0x82499958
	if (!ctx.cr6.gt) goto loc_82499958;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x82499958
	if (ctx.cr6.gt) goto loc_82499958;
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82499a6c
	if (ctx.cr6.eq) goto loc_82499A6C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82499958
	if (!ctx.cr6.eq) goto loc_82499958;
loc_82499A6C:
	// li r24,0
	r24.s64 = 0;
	// b 0x82499abc
	goto loc_82499ABC;
loc_82499A74:
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82499a88
	if (ctx.cr6.eq) goto loc_82499A88;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82499958
	if (!ctx.cr6.eq) goto loc_82499958;
loc_82499A88:
	// li r24,1
	r24.s64 = 1;
	// b 0x82499abc
	goto loc_82499ABC;
loc_82499A90:
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82499958
	if (!ctx.cr6.eq) goto loc_82499958;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x82499ab8
	if (!ctx.cr6.lt) goto loc_82499AB8;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// li r24,3
	r24.s64 = 3;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x82499abc
	if (ctx.cr6.eq) goto loc_82499ABC;
loc_82499AB8:
	// li r24,2
	r24.s64 = 2;
loc_82499ABC:
	// addi r22,r16,36
	r22.s64 = r16.s64 + 36;
	// li r26,0
	r26.s64 = 0;
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// bge cr6,0x82499ce8
	if (!ctx.cr6.lt) goto loc_82499CE8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r31,2
	r29.s64 = r31.s64 + 2;
	// addi r28,r31,3
	r28.s64 = r31.s64 + 3;
	// addi r23,r11,-11384
	r23.s64 = ctx.r11.s64 + -11384;
loc_82499AE0:
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// bge cr6,0x82499cd8
	if (!ctx.cr6.lt) goto loc_82499CD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// blt cr6,0x82499bf8
	if (ctx.cr6.lt) goto loc_82499BF8;
	// beq cr6,0x82499bcc
	if (ctx.cr6.eq) goto loc_82499BCC;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(r24.u32, 3, ctx.xer);
	// blt cr6,0x82499b70
	if (ctx.cr6.lt) goto loc_82499B70;
	// bne cr6,0x82499c40
	if (!ctx.cr6.eq) goto loc_82499C40;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// bge cr6,0x82499958
	if (!ctx.cr6.lt) goto loc_82499958;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82499958
	if (!ctx.cr6.eq) goto loc_82499958;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// bne cr6,0x82499958
	if (!ctx.cr6.eq) goto loc_82499958;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82499958
	if (ctx.cr6.lt) goto loc_82499958;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82499958
	if (ctx.cr6.gt) goto loc_82499958;
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x82499958
	if (ctx.cr6.lt) goto loc_82499958;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x82499958
	if (ctx.cr6.gt) goto loc_82499958;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x82499c40
	goto loc_82499C40;
loc_82499B70:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bge cr6,0x82499958
	if (!ctx.cr6.lt) goto loc_82499958;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82499958
	if (!ctx.cr6.eq) goto loc_82499958;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// blt cr6,0x82499958
	if (ctx.cr6.lt) goto loc_82499958;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82499958
	if (ctx.cr6.gt) goto loc_82499958;
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,49
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 49, ctx.xer);
	// blt cr6,0x82499958
	if (ctx.cr6.lt) goto loc_82499958;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x82499958
	if (ctx.cr6.gt) goto loc_82499958;
	// addi r11,r11,-49
	ctx.r11.s64 = ctx.r11.s64 + -49;
	// addi r10,r10,-49
	ctx.r10.s64 = ctx.r10.s64 + -49;
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// addi r29,r29,3
	r29.s64 = r29.s64 + 3;
	// b 0x82499c40
	goto loc_82499C40;
loc_82499BCC:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x82499c2c
	if (ctx.cr6.eq) goto loc_82499C2C;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// beq cr6,0x82499c1c
	if (ctx.cr6.eq) goto loc_82499C1C;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// beq cr6,0x82499c24
	if (ctx.cr6.eq) goto loc_82499C24;
	// cmplwi cr6,r11,114
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// bne cr6,0x82499958
	if (!ctx.cr6.eq) goto loc_82499958;
loc_82499BF0:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82499c30
	goto loc_82499C30;
loc_82499BF8:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,119
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// beq cr6,0x82499c2c
	if (ctx.cr6.eq) goto loc_82499C2C;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x82499bf0
	if (ctx.cr6.eq) goto loc_82499BF0;
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// beq cr6,0x82499c24
	if (ctx.cr6.eq) goto loc_82499C24;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bne cr6,0x82499958
	if (!ctx.cr6.eq) goto loc_82499958;
loc_82499C1C:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82499c30
	goto loc_82499C30;
loc_82499C24:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82499c30
	goto loc_82499C30;
loc_82499C2C:
	// li r10,3
	ctx.r10.s64 = 3;
loc_82499C30:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82499C40:
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bge cr6,0x82499958
	if (!ctx.cr6.lt) goto loc_82499958;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// bge cr6,0x82499958
	if (!ctx.cr6.lt) goto loc_82499958;
	// mullw r11,r11,r20
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r20.s32);
	// li r3,20
	ctx.r3.s64 = 20;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82444750
	ctx.lr = 0x82499C60;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499c7c
	if (ctx.cr0.eq) goto loc_82499C7C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x82499C78;
	sub_82444918(ctx, base);
	// b 0x82499c80
	goto loc_82499C80;
loc_82499C7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82499C80:
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82499974
	if (ctx.cr6.eq) goto loc_82499974;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x82499C94;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499cb0
	if (ctx.cr0.eq) goto loc_82499CB0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82447910
	ctx.lr = 0x82499CAC;
	sub_82447910(ctx, base);
	// b 0x82499cb4
	goto loc_82499CB4;
loc_82499CB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82499CB4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82499974
	if (ctx.cr6.eq) goto loc_82499974;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// addi r27,r11,12
	r27.s64 = ctx.r11.s64 + 12;
	// blt cr6,0x82499ae0
	if (ctx.cr6.lt) goto loc_82499AE0;
loc_82499CD8:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// blt cr6,0x82499958
	if (ctx.cr6.lt) goto loc_82499958;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// bgt cr6,0x82499958
	if (ctx.cr6.gt) goto loc_82499958;
loc_82499CE8:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82499d44
	if (ctx.cr6.eq) goto loc_82499D44;
loc_82499CF4:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82499d44
	if (!ctx.cr6.eq) goto loc_82499D44;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82499d38
	if (ctx.cr0.eq) goto loc_82499D38;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_82499D14:
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82499d34
	if (ctx.cr6.eq) goto loc_82499D34;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82499d14
	if (!ctx.cr6.eq) goto loc_82499D14;
	// b 0x82499d38
	goto loc_82499D38;
loc_82499D34:
	// li r18,1
	r18.s64 = 1;
loc_82499D38:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82499cf4
	if (!ctx.cr0.eq) goto loc_82499CF4;
loc_82499D44:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x82499D4C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499d88
	if (ctx.cr0.eq) goto loc_82499D88;
	// subfic r11,r18,0
	ctx.xer.ca = r18.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r18.u64;
	// lwz r5,20(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 20);
	// addi r11,r26,-1
	ctx.r11.s64 = r26.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// li r9,512
	ctx.r9.s64 = 512;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// and r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// subfe r4,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x824461c0
	ctx.lr = 0x82499D84;
	sub_824461C0(ctx, base);
	// b 0x82499d8c
	goto loc_82499D8C;
loc_82499D88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82499D8C:
	// stw r3,16(r16)
	REX_STORE_U32(r16.u32 + 16, ctx.r3.u32);
loc_82499D90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82499974
	if (ctx.cr6.eq) goto loc_82499974;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82499DAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r16)
	REX_STORE_U32(r16.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499958
	if (ctx.cr0.eq) goto loc_82499958;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824974b0
	ctx.lr = 0x82499DC4;
	sub_824974B0(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// b 0x82499978
	goto loc_82499978;
}

DEFINE_REX_FUNC(sub_824C1C58) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r5,r5,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x826a1e70
	sub_826A1E70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C2100) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824C2108;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bge cr6,0x824c2130
	if (!ctx.cr6.lt) goto loc_824C2130;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_824C2130:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x824c2150
	if (ctx.cr6.gt) goto loc_824C2150;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c1ef8
	ctx.lr = 0x824C2144;
	sub_824C1EF8(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c2240
	if (ctx.cr6.eq) goto loc_824C2240;
loc_824C2150:
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824c2180
	if (ctx.cr6.eq) goto loc_824C2180;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824c21d4
	if (ctx.cr6.lt) goto loc_824C21D4;
loc_824C2180:
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// blt cr6,0x824c21a0
	if (ctx.cr6.lt) goto loc_824C21A0;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824c21a4
	goto loc_824C21A4;
loc_824C21A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824C21A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r11,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ce068
	ctx.lr = 0x824C21B4;
	sub_824CE068(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x824c1c80
	ctx.lr = 0x824C21C4;
	sub_824C1C80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c2234
	if (ctx.cr6.eq) goto loc_824C2234;
loc_824C21D4:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// subf r5,r11,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r10,r10,-262
	ctx.r10.s64 = ctx.r10.s64 + -262;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824c2130
	if (ctx.cr6.lt) goto loc_824C2130;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824c2204
	if (ctx.cr6.lt) goto loc_824C2204;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824c2208
	goto loc_824C2208;
loc_824C2204:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824C2208:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ce068
	ctx.lr = 0x824C2214;
	sub_824CE068(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x824c1c80
	ctx.lr = 0x824C2224;
	sub_824C1C80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c2130
	if (!ctx.cr6.eq) goto loc_824C2130;
loc_824C2234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824C2238:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824C2240:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x824c2234
	if (ctx.cr6.eq) goto loc_824C2234;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824c2260
	if (ctx.cr6.lt) goto loc_824C2260;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824c2264
	goto loc_824C2264;
loc_824C2260:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824C2264:
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r5,r11,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x824ce068
	ctx.lr = 0x824C2280;
	sub_824CE068(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x824c1c80
	ctx.lr = 0x824C2290;
	sub_824C1C80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c22b8
	if (!ctx.cr6.eq) goto loc_824C22B8;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x824c2238
	goto loc_824C2238;
loc_824C22B8:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x824c2238
	if (ctx.cr6.eq) goto loc_824C2238;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824c2238
	goto loc_824C2238;
}

DEFINE_REX_FUNC(sub_824CAA90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824CAA98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,436(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824caac4
	if (!ctx.cr6.gt) goto loc_824CAAC4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_824CAAC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,12(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CAAE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824CAB10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824CDEE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x824cdf50
	if (!ctx.cr6.gt) goto loc_824CDF50;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x824cdf60
	goto loc_824CDF60;
loc_824CDF50:
	// slw r9,r6,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_824CDF60:
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x824cdf9c
	if (!ctx.cr6.gt) goto loc_824CDF9C;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// b 0x824cdfb4
	goto loc_824CDFB4;
loc_824CDF9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824cdfc0
	if (!ctx.cr6.gt) goto loc_824CDFC0;
	// lhz r11,5808(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_824CDFB4:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_824CDFC0:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,8
	ctx.r8.s64 = 8;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// rlwinm r6,r5,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r8,5804(r3)
	REX_STORE_U32(ctx.r3.u32 + 5804, ctx.r8.u32);
	// not r8,r5
	ctx.r8.u64 = ~ctx.r5.u64;
	// stbx r5,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r8,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
loc_824CE048:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bdnz 0x824ce048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CE048;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D7A78) {
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
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x824d7aa8
	if (ctx.cr6.eq) goto loc_824D7AA8;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r4,r10,21228
	ctx.r4.s64 = ctx.r10.s64 + 21228;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D7AA4;
	sub_824EAC90(ctx, base);
	// b 0x824d7af4
	goto loc_824D7AF4;
loc_824D7AA8:
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,8388(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8388);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r10,21240
	ctx.r4.s64 = ctx.r10.s64 + 21240;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x824eac90
	ctx.lr = 0x824D7AF4;
	sub_824EAC90(ctx, base);
loc_824D7AF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D8D50) {
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
	ctx.lr = 0x824D8D58;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D8D6C;
	sub_824D7948(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r23,r10,21480
	r23.s64 = ctx.r10.s64 + 21480;
	// addi r27,r11,28488
	r27.s64 = ctx.r11.s64 + 28488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8D8C;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D8D94;
	sub_824D8700(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824d8e48
	if (!ctx.cr6.lt) goto loc_824D8E48;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r8,21228
	r28.s64 = ctx.r8.s64 + 21228;
	// addi r26,r9,21468
	r26.s64 = ctx.r9.s64 + 21468;
	// addi r25,r10,21316
	r25.s64 = ctx.r10.s64 + 21316;
	// addi r24,r11,21360
	r24.s64 = ctx.r11.s64 + 21360;
loc_824D8DD0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824d8e2c
	if (ctx.cr0.eq) goto loc_824D8E2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D8DE4;
	sub_824D7948(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8DF4;
	sub_824EAC90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// bl 0x824eac90
	ctx.lr = 0x824D8E10;
	sub_824EAC90(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8E24;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d86b0
	ctx.lr = 0x824D8E2C;
	sub_824D86B0(ctx, base);
loc_824D8E2C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d8dd0
	if (ctx.cr6.lt) goto loc_824D8DD0;
loc_824D8E48:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D8E54;
	sub_824D79A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824DDD58) {
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
	ctx.lr = 0x824DDD60;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824dddfc
	if (ctx.cr6.eq) goto loc_824DDDFC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DDD84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824dddfc
	if (ctx.cr0.eq) goto loc_824DDDFC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824dddfc
	if (ctx.cr6.eq) goto loc_824DDDFC;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r30,r10,r31
	r30.u64 = ctx.r10.u64 + r31.u64;
	// beq cr6,0x824dddfc
	if (ctx.cr6.eq) goto loc_824DDDFC;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_824DDDAC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824dddf0
	if (!ctx.cr6.eq) goto loc_824DDDF0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824ddce8
	ctx.lr = 0x824DDDD8;
	sub_824DDCE8(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824ddab0
	ctx.lr = 0x824DDDF0;
	sub_824DDAB0(ctx, base);
loc_824DDDF0:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// bne 0x824dddac
	if (!ctx.cr0.eq) goto loc_824DDDAC;
loc_824DDDFC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824E2EB8) {
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
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824e2ef0
	if (!ctx.cr6.eq) goto loc_824E2EF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824e2f4c
	goto loc_824E2F4C;
loc_824E2EF0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// lis r9,-32178
	ctx.r9.s64 = -2108817408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,11648
	ctx.r5.s64 = ctx.r9.s64 + 11648;
	// std r30,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r30.u64);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x822cee40
	ctx.lr = 0x824E2F20;
	sub_822CEE40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824e2f4c
	if (ctx.cr0.lt) goto loc_824E2F4C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19072
	ctx.r4.s64 = ctx.r11.s64 + 19072;
	// bl 0x824e0480
	ctx.lr = 0x824E2F38;
	sub_824E0480(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
	// bl 0x824df9f0
	ctx.lr = 0x824E2F48;
	sub_824DF9F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824E2F4C:
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

DEFINE_REX_FUNC(sub_824E65B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824E65B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,0(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwimi r11,r3,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// clrlwi r4,r3,21
	ctx.r4.u64 = ctx.r3.u32 & 0x7FF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// bl 0x824e5c68
	ctx.lr = 0x824E65E4;
	sub_824E5C68(ctx, base);
	// li r11,71
	ctx.r11.s64 = 71;
	// rlwinm r10,r28,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF0000;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824e6658
	if (ctx.cr6.eq) goto loc_824E6658;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r6,r10,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x824e662c
	if (ctx.cr0.eq) goto loc_824E662C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_824E662C:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824e6638
	if (ctx.cr0.eq) goto loc_824E6638;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_824E6638:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824e6644
	if (ctx.cr0.eq) goto loc_824E6644;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_824E6644:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e6650
	if (ctx.cr0.eq) goto loc_824E6650;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_824E6650:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x824e6668
	goto loc_824E6668;
loc_824E6658:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824E6668:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r30,r10,18,0,15
	r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824EDAB0) {
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
	ctx.lr = 0x824EDAB8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// bl 0x824eda58
	ctx.lr = 0x824EDACC;
	sub_824EDA58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824edadc
	if (!ctx.cr0.eq) goto loc_824EDADC;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x824edcd0
	goto loc_824EDCD0;
loc_824EDADC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228f208
	ctx.lr = 0x824EDAE4;
	sub_8228F208(ctx, base);
	// bl 0x824f19a8
	ctx.lr = 0x824EDAE8;
	sub_824F19A8(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228f208
	ctx.lr = 0x824EDAF4;
	sub_8228F208(ctx, base);
	// bl 0x821a9338
	ctx.lr = 0x824EDAF8;
	sub_821A9338(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228f208
	ctx.lr = 0x824EDB04;
	sub_8228F208(ctx, base);
	// bl 0x824f19b0
	ctx.lr = 0x824EDB08;
	sub_824F19B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228f208
	ctx.lr = 0x824EDB14;
	sub_8228F208(ctx, base);
	// bl 0x82270f08
	ctx.lr = 0x824EDB18;
	sub_82270F08(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228f208
	ctx.lr = 0x824EDB24;
	sub_8228F208(ctx, base);
	// bl 0x824f19b8
	ctx.lr = 0x824EDB28;
	sub_824F19B8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228f208
	ctx.lr = 0x824EDB34;
	sub_8228F208(ctx, base);
	// bl 0x826b8540
	ctx.lr = 0x824EDB38;
	sub_826B8540(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228f208
	ctx.lr = 0x824EDB44;
	sub_8228F208(ctx, base);
	// bl 0x826c6130
	ctx.lr = 0x824EDB48;
	sub_826C6130(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228f208
	ctx.lr = 0x824EDB54;
	sub_8228F208(ctx, base);
	// bl 0x82130e88
	ctx.lr = 0x824EDB58;
	sub_82130E88(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825a1088
	ctx.lr = 0x824EDB68;
	sub_825A1088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824edb78
	if (!ctx.cr0.eq) goto loc_824EDB78;
loc_824EDB70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824edcd0
	goto loc_824EDCD0;
loc_824EDB78:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825a1088
	ctx.lr = 0x824EDB84;
	sub_825A1088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824edb70
	if (!ctx.cr0.eq) goto loc_824EDB70;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824f2cc0
	ctx.lr = 0x824EDB98;
	sub_824F2CC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824ef7f8
	ctx.lr = 0x824EDBA0;
	sub_824EF7F8(ctx, base);
	// b 0x824edbc8
	goto loc_824EDBC8;
loc_824EDBA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824efba8
	ctx.lr = 0x824EDBAC;
	sub_824EFBA8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x824f0b18
	ctx.lr = 0x824EDBB4;
	sub_824F0B18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824edb70
	if (!ctx.cr0.eq) goto loc_824EDB70;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824efaf8
	ctx.lr = 0x824EDBC8;
	sub_824EFAF8(ctx, base);
loc_824EDBC8:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824edba4
	if (!ctx.cr0.eq) goto loc_824EDBA4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a0e48
	ctx.lr = 0x824EDBDC;
	sub_825A0E48(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r10,22852
	r29.s64 = ctx.r10.s64 + 22852;
	// addi r25,r9,-26848
	r25.s64 = ctx.r9.s64 + -26848;
	// addi r26,r11,-26952
	r26.s64 = ctx.r11.s64 + -26952;
	// beq 0x824edc14
	if (ctx.cr0.eq) goto loc_824EDC14;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,520
	ctx.r7.s64 = 520;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EDC14;
	sub_824EA978(ctx, base);
loc_824EDC14:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,24(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 24);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 20);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x824efdf0
	ctx.lr = 0x824EDC38;
	sub_824EFDF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824edc64
	if (!ctx.cr0.eq) goto loc_824EDC64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26852
	ctx.r5.s64 = ctx.r11.s64 + -26852;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,531
	ctx.r7.s64 = 531;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EDC5C;
	sub_824EA978(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824edcd0
	goto loc_824EDCD0;
loc_824EDC64:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f0358
	ctx.lr = 0x824EDC70;
	sub_824F0358(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824f3748
	ctx.lr = 0x824EDC84;
	sub_824F3748(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824edc9c
	if (ctx.cr0.eq) goto loc_824EDC9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824effc8
	ctx.lr = 0x824EDC94;
	sub_824EFFC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824edcd0
	goto loc_824EDCD0;
loc_824EDC9C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824f2be0
	ctx.lr = 0x824EDCAC;
	sub_824F2BE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824edccc
	if (ctx.cr0.eq) goto loc_824EDCCC;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,580
	ctx.r7.s64 = 580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EDCCC;
	sub_824EA978(ctx, base);
loc_824EDCCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824EDCD0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_824FC808) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824FC810;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824fc83c
	if (ctx.cr6.lt) goto loc_824FC83C;
loc_824FC830:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824fc910
	goto loc_824FC910;
loc_824FC83C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,12
	r31.s64 = ctx.r11.s64 + 12;
	// bge cr6,0x824fc830
	if (!ctx.cr6.lt) goto loc_824FC830;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x824fc830
	if (ctx.cr6.gt) goto loc_824FC830;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bgt cr6,0x824fc830
	if (ctx.cr6.gt) goto loc_824FC830;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,19,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF80000;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r6,r5,3,26,28
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x38) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC7);
	// clrlwi r8,r11,19
	ctx.r8.u64 = ctx.r11.u32 & 0x1FFF;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r30,r10,r8
	r30.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r29,r11,r3
	r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwimi r30,r6,13,13,18
	r30.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x7E000) | (r30.u64 & 0xFFFFFFFFFFF81FFF);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// beq cr6,0x824fc830
	if (ctx.cr6.eq) goto loc_824FC830;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824FC8A0;
	sub_826A1E70(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwimi r30,r11,0,19,19
	r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000) | (r30.u64 & 0xFFFFFFFFFFFFEFFF);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwimi r11,r10,0,21,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r11.u64 & 0x800);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwimi r11,r10,0,22,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF) | (ctx.r11.u64 & 0x400);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwimi r11,r10,0,23,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF) | (ctx.r11.u64 & 0x200);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwimi r11,r10,0,24,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r11.u64 & 0x100);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwimi r11,r10,0,25,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r11.u64 & 0x80);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r10,0,26,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF) | (ctx.r11.u64 & 0x40);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824FC910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82504600) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250463c
	if (ctx.cr0.eq) goto loc_8250463C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x82504634;
	sub_824E4308(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8250463C:
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

DEFINE_REX_FUNC(sub_82508D80) {
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
	ctx.lr = 0x82508D88;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508e44
	if (!ctx.cr0.eq) goto loc_82508E44;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82508e44
	if (ctx.cr0.eq) goto loc_82508E44;
loc_82508DA8:
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508dc0
	if (ctx.cr0.eq) goto loc_82508DC0;
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// b 0x82508dc8
	goto loc_82508DC8;
loc_82508DC0:
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// addi r9,r8,16
	ctx.r9.s64 = ctx.r8.s64 + 16;
loc_82508DC8:
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82508e28
	if (ctx.cr6.eq) goto loc_82508E28;
loc_82508DE0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,40(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508e04
	if (!ctx.cr0.eq) goto loc_82508E04;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82508de0
	if (!ctx.cr6.eq) goto loc_82508DE0;
loc_82508E04:
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82508e28
	if (ctx.cr6.eq) goto loc_82508E28;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508e28
	if (!ctx.cr0.eq) goto loc_82508E28;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82508de0
	if (!ctx.cr0.eq) goto loc_82508DE0;
loc_82508E28:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508e44
	if (!ctx.cr0.eq) goto loc_82508E44;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82508da8
	if (!ctx.cr6.eq) goto loc_82508DA8;
loc_82508E44:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82509244
	if (!ctx.cr0.eq) goto loc_82509244;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82509244
	if (ctx.cr0.eq) goto loc_82509244;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r22,r11,-22012
	r22.s64 = ctx.r11.s64 + -22012;
loc_82508E64:
	// lwz r11,68(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 68);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509228
	if (ctx.cr0.eq) goto loc_82509228;
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508f00
	if (!ctx.cr0.eq) goto loc_82508F00;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82508f00
	if (ctx.cr0.eq) goto loc_82508F00;
loc_82508E84:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82508ec8
	if (ctx.cr0.eq) goto loc_82508EC8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82508E94:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82508ebc
	if (ctx.cr6.eq) goto loc_82508EBC;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r9,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82508eb0
	if (!ctx.cr0.eq) goto loc_82508EB0;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82508e94
	goto loc_82508E94;
loc_82508EB0:
	// rlwinm. r10,r9,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x82508ec0
	if (!ctx.cr0.eq) goto loc_82508EC0;
loc_82508EBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82508EC0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250924c
	if (ctx.cr0.eq) goto loc_8250924C;
loc_82508EC8:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82508ee8
	if (!ctx.cr0.eq) goto loc_82508EE8;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// ori r9,r9,8191
	ctx.r9.u64 = ctx.r9.u64 | 8191;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
loc_82508EE8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82508f00
	if (!ctx.cr0.eq) goto loc_82508F00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82508e84
	if (!ctx.cr6.eq) goto loc_82508E84;
loc_82508F00:
	// li r30,0
	r30.s64 = 0;
loc_82508F04:
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f7678
	ctx.lr = 0x82508F14;
	sub_824F7678(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82505908
	ctx.lr = 0x82508F20;
	sub_82505908(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82506fd8
	ctx.lr = 0x82508F30;
	sub_82506FD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82508f70
	if (ctx.cr0.eq) goto loc_82508F70;
	// lwz r11,796(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 796);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82508f58
	if (!ctx.cr6.eq) goto loc_82508F58;
	// lwz r11,792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82508f58
	if (!ctx.cr6.eq) goto loc_82508F58;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82508F58:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82508f70
	if (ctx.cr6.lt) goto loc_82508F70;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(r30.u32, 100, ctx.xer);
	// blt cr6,0x82508f04
	if (ctx.cr6.lt) goto loc_82508F04;
loc_82508F70:
	// cmplwi cr6,r30,100
	ctx.cr6.compare<uint32_t>(r30.u32, 100, ctx.xer);
	// beq cr6,0x82509258
	if (ctx.cr6.eq) goto loc_82509258;
	// lwz r10,792(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 792);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x82508f90
	if (!ctx.cr6.eq) goto loc_82508F90;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82508F90:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82509278
	if (!ctx.cr6.lt) goto loc_82509278;
	// lwz r5,796(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 796);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82508fac
	if (ctx.cr6.eq) goto loc_82508FAC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82508fbc
	goto loc_82508FBC;
loc_82508FAC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x82508fbc
	if (!ctx.cr6.eq) goto loc_82508FBC;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82508FBC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82508fec
	if (ctx.cr6.lt) goto loc_82508FEC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82508fdc
	if (!ctx.cr6.eq) goto loc_82508FDC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bne cr6,0x82508fdc
	if (!ctx.cr6.eq) goto loc_82508FDC;
	// li r5,32
	ctx.r5.s64 = 32;
loc_82508FDC:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// li r4,3604
	ctx.r4.s64 = 3604;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4270
	ctx.lr = 0x82508FEC;
	sub_824E4270(ctx, base);
loc_82508FEC:
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// addi r26,r23,24
	r26.s64 = r23.s64 + 24;
	// li r25,0
	r25.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82509228
	if (!ctx.cr0.eq) goto loc_82509228;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82509228
	if (ctx.cr0.eq) goto loc_82509228;
loc_82509010:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r30,r11,0,6,4
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x824f7708
	ctx.lr = 0x82509024;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250904c
	if (ctx.cr0.eq) goto loc_8250904C;
	// rlwinm. r11,r30,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// beq 0x82509294
	if (ctx.cr0.eq) goto loc_82509294;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825c2288
	ctx.lr = 0x82509048;
	sub_825C2288(ctx, base);
	// b 0x8250918c
	goto loc_8250918C;
loc_8250904C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,19,13,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7FFFF;
	// clrlwi. r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250918c
	if (ctx.cr0.eq) goto loc_8250918C;
	// rlwinm r10,r30,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F80;
	// clrlwi r27,r11,20
	r27.u64 = ctx.r11.u32 & 0xFFF;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x82509168
	if (!ctx.cr6.eq) goto loc_82509168;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_82509074:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82509108
	if (ctx.cr6.eq) goto loc_82509108;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825090a0
	if (!ctx.cr0.eq) goto loc_825090A0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250b470
	ctx.lr = 0x8250909C;
	sub_8250B470(ctx, base);
	// b 0x825090f4
	goto loc_825090F4;
loc_825090A0:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825090f4
	if (ctx.cr0.eq) goto loc_825090F4;
	// lwz r21,12(r30)
	r21.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825092a0
	ctx.lr = 0x825090CC;
	sub_825092A0(ctx, base);
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,20(r21)
	REX_STORE_U32(r21.u32 + 20, ctx.r11.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825b93f8
	ctx.lr = 0x825090EC;
	sub_825B93F8(ctx, base);
	// clrlwi r11,r20,28
	ctx.r11.u64 = r20.u32 & 0xF;
	// or r29,r11,r29
	r29.u64 = ctx.r11.u64 | r29.u64;
loc_825090F4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82509074
	if (!ctx.cr6.eq) goto loc_82509074;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// b 0x82509074
	goto loc_82509074;
loc_82509108:
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
loc_8250910C:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82509168
	if (ctx.cr6.eq) goto loc_82509168;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82509154
	if (ctx.cr6.eq) goto loc_82509154;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250913c
	if (!ctx.cr0.eq) goto loc_8250913C;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82509140
	if (ctx.cr0.eq) goto loc_82509140;
loc_8250913C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82509140:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82509154
	if (ctx.cr0.eq) goto loc_82509154;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250b470
	ctx.lr = 0x82509154;
	sub_8250B470(ctx, base);
loc_82509154:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8250910c
	if (!ctx.cr6.eq) goto loc_8250910C;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// b 0x8250910c
	goto loc_8250910C;
loc_82509168:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r11,r27,28
	ctx.r11.u64 = r27.u32 & 0xF;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r10,r10,0,19,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,-1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x825b93f8
	ctx.lr = 0x8250918C;
	sub_825B93F8(ctx, base);
loc_8250918C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825091e4
	if (ctx.cr6.eq) goto loc_825091E4;
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825091ac
	if (ctx.cr0.eq) goto loc_825091AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825091b4
	goto loc_825091B4;
loc_825091AC:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_825091B4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825091d4
	if (!ctx.cr6.eq) goto loc_825091D4;
loc_825091BC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r25,r31
	r25.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82509228
	if (!ctx.cr0.eq) goto loc_82509228;
	// b 0x82509218
	goto loc_82509218;
loc_825091D4:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82509228
	if (!ctx.cr0.eq) goto loc_82509228;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8250921c
	goto loc_8250921C;
loc_825091E4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825091f8
	if (ctx.cr0.eq) goto loc_825091F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82509204
	goto loc_82509204;
loc_825091F8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_82509204:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825091bc
	if (ctx.cr6.eq) goto loc_825091BC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82509228
	if (!ctx.cr6.eq) goto loc_82509228;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_82509218:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8250921C:
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82509010
	if (!ctx.cr6.eq) goto loc_82509010;
loc_82509228:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82509244
	if (!ctx.cr0.eq) goto loc_82509244;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82508e64
	if (!ctx.cr6.eq) goto loc_82508E64;
loc_82509244:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_8250924C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x82509258;
	sub_824E4368(ctx, base);
loc_82509258:
	// lwz r11,792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 792);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82509270
	if (ctx.cr6.eq) goto loc_82509270;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x824e4368
	ctx.lr = 0x82509270;
	sub_824E4368(ctx, base);
loc_82509270:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x824e4368
	ctx.lr = 0x82509278;
	sub_824E4368(ctx, base);
loc_82509278:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// beq cr6,0x8250928c
	if (ctx.cr6.eq) goto loc_8250928C;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x824e4368
	ctx.lr = 0x8250928C;
	sub_824E4368(ctx, base);
loc_8250928C:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x824e4368
	ctx.lr = 0x82509294;
	sub_824E4368(ctx, base);
loc_82509294:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8250929C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8254FA20) {
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
	// rlwinm r10,r3,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,148(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8254fa54
	if (!ctx.cr0.eq) goto loc_8254FA54;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8254fa68
	goto loc_8254FA68;
loc_8254FA54:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xFF;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
loc_8254FA68:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8254fab8
	if (ctx.cr6.lt) goto loc_8254FAB8;
	// beq cr6,0x8254fa9c
	if (ctx.cr6.eq) goto loc_8254FA9C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8254fa84
	if (ctx.cr6.lt) goto loc_8254FA84;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8254FA84;
	sub_824E4368(ctx, base);
loc_8254FA84:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x8254fab0
	goto loc_8254FAB0;
loc_8254FA9C:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwax r11,r10,r11
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_8254FAB0:
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(ctx.f0.s64);
	// b 0x8254fac4
	goto loc_8254FAC4;
loc_8254FAB8:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
loc_8254FAC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82552180) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
loc_82552188:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255222c
	if (!ctx.cr0.eq) goto loc_8255222C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8255222c
	if (ctx.cr0.eq) goto loc_8255222C;
loc_825521A4:
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552210
	if (ctx.cr0.eq) goto loc_82552210;
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
loc_825521B4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82552210
	if (ctx.cr6.eq) goto loc_82552210;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,48(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552208
	if (!ctx.cr0.eq) goto loc_82552208;
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825521fc
	if (ctx.cr0.eq) goto loc_825521FC;
	// rlwinm r10,r11,27,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3FFF;
	// lwz r5,40(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// clrlwi r31,r11,27
	r31.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r30,1
	r30.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r31,r30,r31
	r31.u64 = r31.u8 & 0x20 ? 0 : (r30.u32 << (r31.u8 & 0x3F));
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// and. r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552208
	if (!ctx.cr0.eq) goto loc_82552208;
loc_825521FC:
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
loc_82552208:
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x825521b4
	goto loc_825521B4;
loc_82552210:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8255222c
	if (!ctx.cr0.eq) goto loc_8255222C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825521a4
	if (!ctx.cr6.eq) goto loc_825521A4;
loc_8255222C:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552188
	if (!ctx.cr0.eq) goto loc_82552188;
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82555228) {
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
	ctx.lr = 0x82555230;
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
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82555264;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x82555288
	if (ctx.cr6.eq) goto loc_82555288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82555284;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82555288:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82555290;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x825552b4
	if (ctx.cr6.eq) goto loc_825552B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825552B0;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825552B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825552BC;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825552CC;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825552D8;
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
	ctx.lr = 0x82555308;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82561580) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82561588;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r8,r7,25,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x7F;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x825615b4
	if (ctx.cr6.lt) goto loc_825615B4;
	// cmplwi cr6,r8,18
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 18, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825615b8
	if (!ctx.cr6.gt) goto loc_825615B8;
loc_825615B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825615B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825615d4
	if (!ctx.cr0.eq) goto loc_825615D4;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x825615d4
	if (ctx.cr6.eq) goto loc_825615D4;
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825615d8
	if (!ctx.cr6.eq) goto loc_825615D8;
loc_825615D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825615D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825616d4
	if (ctx.cr0.eq) goto loc_825616D4;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x825616d4
	if (!ctx.cr6.eq) goto loc_825616D4;
	// rlwinm r11,r7,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x380000;
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// li r31,0
	r31.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82561608
	if (!ctx.cr6.gt) goto loc_82561608;
	// lwz r31,52(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 52);
loc_82561608:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_8256160C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82561640
	if (ctx.cr6.eq) goto loc_82561640;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82561638
	if (ctx.cr6.eq) goto loc_82561638;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r6,r10,0,4,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82561638
	if (ctx.cr0.eq) goto loc_82561638;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x825616d4
	if (!ctx.cr6.eq) goto loc_825616D4;
loc_82561638:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8256160c
	goto loc_8256160C;
loc_82561640:
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8256165c
	if (!ctx.cr6.eq) goto loc_8256165C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8256165C:
	// bl 0x8250a620
	ctx.lr = 0x82561660;
	sub_8250A620(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82561674
	if (ctx.cr6.eq) goto loc_82561674;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250a620
	ctx.lr = 0x82561674;
	sub_8250A620(ctx, base);
loc_82561674:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_82561678:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825616a8
	if (ctx.cr6.eq) goto loc_825616A8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825616a0
	if (ctx.cr6.eq) goto loc_825616A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825616a0
	if (ctx.cr0.eq) goto loc_825616A0;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825616A0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82561678
	goto loc_82561678;
loc_825616A8:
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_825616AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82561830
	if (ctx.cr6.eq) goto loc_82561830;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825616cc
	if (ctx.cr6.eq) goto loc_825616CC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8255e698
	ctx.lr = 0x825616CC;
	sub_8255E698(ctx, base);
loc_825616CC:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x825616ac
	goto loc_825616AC;
loc_825616D4:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x825616e8
	if (ctx.cr6.eq) goto loc_825616E8;
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825616ec
	if (!ctx.cr6.eq) goto loc_825616EC;
loc_825616E8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825616EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561870
	if (ctx.cr0.eq) goto loc_82561870;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x82561870
	if (!ctx.cr6.eq) goto loc_82561870;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x82561710
	if (ctx.cr6.lt) goto loc_82561710;
	// cmplwi cr6,r8,18
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 18, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82561714
	if (!ctx.cr6.gt) goto loc_82561714;
loc_82561710:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82561714:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561724
	if (ctx.cr0.eq) goto loc_82561724;
	// cmplwi cr6,r8,18
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 18, ctx.xer);
	// bne cr6,0x82561870
	if (!ctx.cr6.eq) goto loc_82561870;
loc_82561724:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_82561728:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8256175c
	if (ctx.cr6.eq) goto loc_8256175C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82561754
	if (ctx.cr6.eq) goto loc_82561754;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82561754
	if (ctx.cr0.eq) goto loc_82561754;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82561870
	if (!ctx.cr6.eq) goto loc_82561870;
loc_82561754:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82561728
	goto loc_82561728;
loc_8256175C:
	// rlwinm r11,r7,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x7;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,10
	ctx.r10.s64 = ctx.r11.s64 + 10;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r31,r9,r30
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	// beq 0x82561870
	if (ctx.cr0.eq) goto loc_82561870;
	// addi r9,r30,44
	ctx.r9.s64 = r30.s64 + 44;
loc_82561780:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825617a0
	if (ctx.cr6.eq) goto loc_825617A0;
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r7,r7,0,18,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r7,16000
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16000, ctx.xer);
	// beq cr6,0x825617a4
	if (ctx.cr6.eq) goto loc_825617A4;
loc_825617A0:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_825617A4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82561780
	if (ctx.cr6.lt) goto loc_82561780;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82561870
	if (ctx.cr6.eq) goto loc_82561870;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8250a620
	ctx.lr = 0x825617C4;
	sub_8250A620(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250a620
	ctx.lr = 0x825617D0;
	sub_8250A620(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_825617D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82561804
	if (ctx.cr6.eq) goto loc_82561804;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825617fc
	if (ctx.cr6.eq) goto loc_825617FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825617fc
	if (ctx.cr0.eq) goto loc_825617FC;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825617FC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825617d4
	goto loc_825617D4;
loc_82561804:
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_82561808:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82561830
	if (ctx.cr6.eq) goto loc_82561830;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82561828
	if (ctx.cr6.eq) goto loc_82561828;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8255e698
	ctx.lr = 0x82561828;
	sub_8255E698(ctx, base);
loc_82561828:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82561808
	goto loc_82561808;
loc_82561830:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// andi. r11,r10,52428
	ctx.r11.u64 = ctx.r10.u64 & 52428;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8256184c
	if (!ctx.cr6.eq) goto loc_8256184C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82561858
	goto loc_82561858;
loc_8256184C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,14(r30)
	REX_STORE_U16(r30.u32 + 14, ctx.r10.u16);
loc_82561858:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561870
	if (ctx.cr0.eq) goto loc_82561870;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8255e698
	ctx.lr = 0x82561870;
	sub_8255E698(ctx, base);
loc_82561870:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82581A40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82581A48;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82581A6C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82581a90
	if (ctx.cr6.eq) goto loc_82581A90;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82581A8C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581A90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581A98;
	sub_8250AD28(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwimi r10,r9,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r10,-36
	ctx.r8.s64 = ctx.r10.s64 + -36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82583690) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82583698;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82580b20
	ctx.lr = 0x825836B4;
	sub_82580B20(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r11,23664
	ctx.r5.s64 = ctx.r11.s64 + 23664;
	// extsb r6,r30
	ctx.r6.s64 = r30.s8;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826a1a58
	ctx.lr = 0x825836D0;
	sub_826A1A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x824ff930
	ctx.lr = 0x825836E0;
	sub_824FF930(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82447ed0
	ctx.lr = 0x825836EC;
	sub_82447ED0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,18
	ctx.r11.s64 = 18;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x8257fb48
	ctx.lr = 0x82583708;
	sub_8257FB48(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825858C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825858D0;
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
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825858F8;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82585908;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82585914;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x82585938
	if (ctx.cr6.eq) goto loc_82585938;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82585934;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82585938:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82585940;
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

DEFINE_REX_FUNC(sub_82589F98) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne 0x82589fe0
	if (!ctx.cr0.eq) goto loc_82589FE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82589fe0
	if (ctx.cr0.eq) goto loc_82589FE0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82589fec
	if (!ctx.cr6.gt) goto loc_82589FEC;
loc_82589FE0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82531a20
	ctx.lr = 0x82589FE8;
	sub_82531A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82589FEC:
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

DEFINE_REX_FUNC(sub_8259D558) {
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
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r31,-32128
	r31.s64 = -2105540608;
	// addi r11,r11,19040
	ctx.r11.s64 = ctx.r11.s64 + 19040;
	// addi r10,r10,19288
	ctx.r10.s64 = ctx.r10.s64 + 19288;
	// stw r11,-17076(r9)
	REX_STORE_U32(ctx.r9.u32 + -17076, ctx.r11.u32);
	// stw r10,-17072(r31)
	REX_STORE_U32(r31.u32 + -17072, ctx.r10.u32);
	// bl 0x82404b58
	ctx.lr = 0x8259D58C;
	sub_82404B58(ctx, base);
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

DEFINE_REX_FUNC(sub_8259E6C8) {
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
	// bl 0x826a1c8c
	ctx.lr = 0x8259E6D0;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2c9c
	ctx.lr = 0x8259E6D8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8259e704
	if (ctx.cr6.eq) goto loc_8259E704;
loc_8259E6EC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8259E6F4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x826a2ce8
	ctx.lr = 0x8259E700;
	// b 0x826a1cdc
	return;
loc_8259E704:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r7,104(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8259e730
	if (ctx.cr6.eq) goto loc_8259E730;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8259e6ec
	if (!ctx.cr6.eq) goto loc_8259E6EC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8259e6ec
	if (!ctx.cr6.eq) goto loc_8259E6EC;
loc_8259E730:
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8259e754
	if (ctx.cr6.eq) goto loc_8259E754;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8259e6ec
	if (!ctx.cr6.eq) goto loc_8259E6EC;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8259e6ec
	if (!ctx.cr6.eq) goto loc_8259E6EC;
loc_8259E754:
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8259e6ec
	if (!ctx.cr6.eq) goto loc_8259E6EC;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x8259e798
	if (!ctx.cr6.gt) goto loc_8259E798;
	// clrlwi. r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8259e798
	if (ctx.cr0.eq) goto loc_8259E798;
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_8259E798:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8259e7b4
	if (!ctx.cr6.gt) goto loc_8259E7B4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
loc_8259E7B4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8259e7d0
	if (!ctx.cr6.gt) goto loc_8259E7D0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_8259E7D0:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// li r30,-1
	r30.s64 = -1;
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259e7f4
	if (!ctx.cr6.gt) goto loc_8259E7F4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8259E7F4:
	// bl 0x822f6280
	ctx.lr = 0x8259E7F8;
	sub_822F6280(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8259e810
	if (!ctx.cr6.eq) goto loc_8259E810;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8259e6f4
	goto loc_8259E6F4;
loc_8259E810:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8259e85c
	if (!ctx.cr6.eq) goto loc_8259E85C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259e838
	if (!ctx.cr6.gt) goto loc_8259E838;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8259E838:
	// bl 0x822f6280
	ctx.lr = 0x8259E83C;
	sub_822F6280(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r3
	r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// b 0x8259e898
	goto loc_8259E898;
loc_8259E85C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259e870
	if (!ctx.cr6.gt) goto loc_8259E870;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8259E870:
	// bl 0x822f6280
	ctx.lr = 0x8259E874;
	sub_822F6280(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r8,r8,48
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(48));
	// add r30,r10,r3
	r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r28,r9,r3
	r28.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r27,r8,r3
	r27.u64 = ctx.r8.u64 + ctx.r3.u64;
loc_8259E898:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8259e8bc
	if (!ctx.cr6.eq) goto loc_8259E8BC;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
loc_8259E8AC:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259E8B4;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8259e6f4
	goto loc_8259E6F4;
loc_8259E8BC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8259e8dc
	if (!ctx.cr6.eq) goto loc_8259E8DC;
	// mr r25,r29
	r25.u64 = r29.u64;
	// mr r24,r30
	r24.u64 = r30.u64;
	// mr r23,r28
	r23.u64 = r28.u64;
	// mr r22,r27
	r22.u64 = r27.u64;
	// b 0x8259e8ec
	goto loc_8259E8EC;
loc_8259E8DC:
	// addi r25,r29,16
	r25.s64 = r29.s64 + 16;
	// addi r24,r30,16
	r24.s64 = r30.s64 + 16;
	// addi r23,r28,16
	r23.s64 = r28.s64 + 16;
	// addi r22,r27,16
	r22.s64 = r27.s64 + 16;
loc_8259E8EC:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r19,0
	r19.s64 = 0;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8259eb8c
	if (!ctx.cr6.gt) goto loc_8259EB8C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f31,16236(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16236);
	f31.f64 = double(temp.f32);
loc_8259E908:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm r20,r19,1,0,30
	r20.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8259eb7c
	if (!ctx.cr6.gt) goto loc_8259EB7C;
loc_8259E91C:
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r31,r21,1,0,30
	r31.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x8259e968
	if (ctx.cr6.eq) goto loc_8259E968;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r20,1
	ctx.r5.s64 = r20.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259E968:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// beq cr6,0x8259e990
	if (ctx.cr6.eq) goto loc_8259E990;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259E990:
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// beq cr6,0x8259e9c0
	if (ctx.cr6.eq) goto loc_8259E9C0;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// beq cr6,0x8259e9c0
	if (ctx.cr6.eq) goto loc_8259E9C0;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r20,1
	ctx.r5.s64 = r20.s64 + 1;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E9C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259E9C0:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8259eb48
	if (!ctx.cr6.gt) goto loc_8259EB48;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_8259E9D8:
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r17,r1,80
	r17.s64 = ctx.r1.s64 + 80;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + r25.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + r29.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// lfsx f13,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + r24.u64;
	// lfsx f0,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + r23.u64;
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f11,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + r22.u64;
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfsx f10,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
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
	// lfsx f10,r11,r24
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// lfs f5,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// lfsx f9,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f7,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r11,r23
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f10,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	f30.f64 = double(temp.f32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// lfsx f29,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f28.f64 = double(temp.f32);
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// lfs f6,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// lfsx f4,r11,r22
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f27,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f26,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	f26.f64 = double(temp.f32);
	// lfs f25,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	f25.f64 = double(temp.f32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 + ctx.f11.f64));
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// fadds f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 + ctx.f12.f64));
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fadds f12,f27,f12
	ctx.f12.f64 = double(float(f27.f64 + ctx.f12.f64));
	// fadds f13,f26,f13
	ctx.f13.f64 = double(float(f26.f64 + ctx.f13.f64));
	// fadds f11,f25,f11
	ctx.f11.f64 = double(float(f25.f64 + ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// lwz r8,4(r17)
	ctx.r8.u64 = REX_LOAD_U32(r17.u32 + 4);
	// lwz r7,8(r17)
	ctx.r7.u64 = REX_LOAD_U32(r17.u32 + 8);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,12(r17)
	ctx.r6.u64 = REX_LOAD_U32(r17.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8259e9d8
	if (ctx.cr6.lt) goto loc_8259E9D8;
loc_8259EB48:
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259EB68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259e91c
	if (ctx.cr6.lt) goto loc_8259E91C;
loc_8259EB7C:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259e908
	if (ctx.cr6.lt) goto loc_8259E908;
loc_8259EB8C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8259EB94;
	sub_8269CE98(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8259e8ac
	goto loc_8259E8AC;
}

DEFINE_REX_FUNC(sub_825BC4A0) {
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
	ctx.lr = 0x825BC4A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,16(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r25,r27,1
	r25.s64 = r27.s64 + 1;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mulli r4,r25,40
	ctx.r4.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(40));
	// addi r30,r3,812
	r30.s64 = ctx.r3.s64 + 812;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x825bc4e0
	if (!ctx.cr6.gt) goto loc_825BC4E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7c98
	ctx.lr = 0x825BC4D8;
	sub_824F7C98(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x825bc54c
	goto loc_825BC54C;
loc_825BC4E0:
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,4096
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x825bc504
	if (ctx.cr6.lt) goto loc_825BC504;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r10.u32);
	// b 0x825bc548
	goto loc_825BC548;
loc_825BC504:
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825bc53c
	if (ctx.cr6.eq) goto loc_825BC53C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// bl 0x826a2e60
	ctx.lr = 0x825BC534;
	sub_826A2E60(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x825bc548
	goto loc_825BC548;
loc_825BC53C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7378
	ctx.lr = 0x825BC544;
	sub_824F7378(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825BC548:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_825BC54C:
	// mulli r5,r27,40
	ctx.r5.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(40));
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r31,r5,r28
	r31.u64 = ctx.r5.u64 + r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x825BC560;
	sub_826A1E70(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x825BC570;
	sub_826A1E70(ctx, base);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// cmplwi cr6,r10,132
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 132, ctx.xer);
	// ble cr6,0x825bc5b8
	if (!ctx.cr6.gt) goto loc_825BC5B8;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
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
	ctx.lr = 0x825BC5B4;
	sub_823F0350(ctx, base);
	// b 0x825bc5d0
	goto loc_825BC5D0;
loc_825BC5B8:
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
loc_825BC5D0:
	// stw r25,16(r29)
	REX_STORE_U32(r29.u32 + 16, r25.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,12(r29)
	REX_STORE_U32(r29.u32 + 12, r28.u32);
	// stw r25,20(r29)
	REX_STORE_U32(r29.u32 + 20, r25.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r10,r24,4,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x825bc618
	if (ctx.cr6.eq) goto loc_825BC618;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// li r11,40
	ctx.r11.s64 = 40;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// divw r4,r10,r11
	ctx.r4.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// bl 0x82520608
	ctx.lr = 0x825BC618;
	sub_82520608(ctx, base);
loc_825BC618:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825C6C90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825C6CB0:
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,-1
	ctx.r8.s64 = -1;
	// clrlwi r7,r11,13
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,30,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1E;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r9,r6,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// srw. r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c6d10
	if (ctx.cr0.eq) goto loc_825C6D10;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825c6d10
	if (ctx.cr6.eq) goto loc_825C6D10;
	// lwz r4,64(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825c6cb0
	if (!ctx.cr6.eq) goto loc_825C6CB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825C6D10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825CBA20) {
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
	ctx.lr = 0x825CBA28;
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
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
	// beq cr6,0x825cba5c
	if (ctx.cr6.eq) goto loc_825CBA5C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825CBA58;
	sub_82408848(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_825CBA5C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cba78
	if (ctx.cr6.eq) goto loc_825CBA78;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CBA74;
	sub_825C7448(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_825CBA78:
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
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
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
	// bne 0x825cbae0
	if (!ctx.cr0.eq) goto loc_825CBAE0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825cbae8
	goto loc_825CBAE8;
loc_825CBAE0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825CBAE8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cbb00
	if (ctx.cr6.eq) goto loc_825CBB00;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825CBB00;
	sub_82409A88(ctx, base);
loc_825CBB00:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825cbd04
	if (!ctx.cr6.gt) goto loc_825CBD04;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r27,r30,1,0,30
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r30,r27,r28
	r30.u64 = r28.u64 - r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfd f8,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lfs f9,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20208(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,19656(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 19656);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,19032(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 19032);
	ctx.f7.f64 = double(temp.f32);
loc_825CBB60:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// rlwinm r9,r4,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
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
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x825cbc88
	if (ctx.cr6.eq) goto loc_825CBC88;
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r29,r9
	r29.s64 = ctx.r9.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
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
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
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
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
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
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
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
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
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
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// frsp f30,f5
	f30.f64 = double(float(ctx.f5.f64));
loc_825CBC88:
	// cmpwi cr6,r9,127
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 127, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x825cbc98
	if (ctx.cr6.lt) goto loc_825CBC98;
	// li r11,127
	ctx.r11.s64 = 127;
loc_825CBC98:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x825cbcb0
	if (!ctx.cr6.gt) goto loc_825CBCB0;
	// cmpwi cr6,r9,127
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 127, ctx.xer);
	// blt cr6,0x825cbcb4
	if (ctx.cr6.lt) goto loc_825CBCB4;
	// li r9,127
	ctx.r9.s64 = 127;
	// b 0x825cbcb4
	goto loc_825CBCB4;
loc_825CBCB0:
	// li r9,-127
	ctx.r9.s64 = -127;
loc_825CBCB4:
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x825cbcc4
	if (ctx.cr6.lt) goto loc_825CBCC4;
	// li r11,127
	ctx.r11.s64 = 127;
loc_825CBCC4:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x825cbcdc
	if (!ctx.cr6.gt) goto loc_825CBCDC;
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// blt cr6,0x825cbce0
	if (ctx.cr6.lt) goto loc_825CBCE0;
	// li r5,127
	ctx.r5.s64 = 127;
	// b 0x825cbce0
	goto loc_825CBCE0;
loc_825CBCDC:
	// li r5,-127
	ctx.r5.s64 = -127;
loc_825CBCE0:
	// rlwimi r9,r5,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// sthux r9,r30,r27
	ea = r30.u32 + r27.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	r30.u32 = ea;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825cbb60
	if (ctx.cr6.lt) goto loc_825CBB60;
loc_825CBD04:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825D7A40) {
	REX_FUNC_PROLOGUE();
	// lbz r3,2073(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 2073);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D7BD0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825d7c18
	if (!ctx.cr6.eq) goto loc_825D7C18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,9976
	ctx.r6.s64 = ctx.r11.s64 + 9976;
	// addi r5,r10,10068
	ctx.r5.s64 = ctx.r10.s64 + 10068;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1919
	ctx.r7.s64 = 1919;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7C18;
	sub_824EA978(ctx, base);
loc_825D7C18:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm. r10,r10,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// beq 0x825d7c54
	if (ctx.cr0.eq) goto loc_825D7C54;
	// addi r10,r11,57
	ctx.r10.s64 = ctx.r11.s64 + 57;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,57
	ctx.r11.s64 = ctx.r11.s64 + 57;
	// b 0x825d7c58
	goto loc_825D7C58;
loc_825D7C54:
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
loc_825D7C58:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
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

DEFINE_REX_FUNC(sub_825DE9A0) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825DE9A8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x825de9f0
	if (ctx.cr6.eq) goto loc_825DE9F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x825de9a8
	if (ctx.cr6.lt) goto loc_825DE9A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,10912
	ctx.r6.s64 = ctx.r11.s64 + 10912;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,214
	ctx.r7.s64 = 214;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ea978
	sub_824EA978(ctx, base);
	return;
loc_825DE9F0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E0C20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825E0C28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825e0ca8
	if (ctx.cr6.eq) goto loc_825E0CA8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825e0ca8
	if (!ctx.cr6.gt) goto loc_825E0CA8;
	// li r30,0
	r30.s64 = 0;
loc_825E0C54:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825e0c6c
	if (!ctx.cr6.lt) goto loc_825E0C6C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// b 0x825e0c74
	goto loc_825E0C74;
loc_825E0C6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x825E0C74;
	sub_825F7718(ctx, base);
loc_825E0C74:
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E0C90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 92);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825e0c54
	if (ctx.cr6.lt) goto loc_825E0C54;
loc_825E0CA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825E69D0) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6AC8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r5.u32);
	// stw r6,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// stw r4,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825E6AF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x825e6b18
	if (!ctx.cr6.lt) goto loc_825E6B18;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x825e6af8
	if (ctx.cr6.lt) goto loc_825E6AF8;
loc_825E6B18:
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x825b33a0
	ctx.lr = 0x825E6B28;
	sub_825B33A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x825E6B3C;
	sub_826A2E60(ctx, base);
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

DEFINE_REX_FUNC(sub_825ED210) {
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
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ed25c
	if (ctx.cr6.eq) goto loc_825ED25C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,15448
	ctx.r6.s64 = ctx.r11.s64 + 15448;
	// addi r5,r10,15920
	ctx.r5.s64 = ctx.r10.s64 + 15920;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1388
	ctx.r7.s64 = 1388;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825ED25C;
	sub_824EA978(ctx, base);
loc_825ED25C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825ed274
	if (!ctx.cr6.gt) goto loc_825ED274;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825ed340
	goto loc_825ED340;
loc_825ED274:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ed33c
	if (!ctx.cr0.eq) goto loc_825ED33C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ed33c
	if (!ctx.cr6.gt) goto loc_825ED33C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825ed33c
	if (ctx.cr6.gt) goto loc_825ED33C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x825ed2c8
	if (!ctx.cr6.gt) goto loc_825ED2C8;
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x825ed2d8
	goto loc_825ED2D8;
loc_825ED2C8:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
loc_825ED2D8:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 108);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x825ed320
	if (!ctx.cr6.gt) goto loc_825ED320;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x825ed300
	if (!ctx.cr6.gt) goto loc_825ED300;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x825ed310
	goto loc_825ED310;
loc_825ED300:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
loc_825ED310:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x825ed328
	goto loc_825ED328;
loc_825ED320:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_825ED328:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,2728(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 2728);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825ed340
	if (ctx.cr6.gt) goto loc_825ED340;
loc_825ED33C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825ED340:
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

DEFINE_REX_FUNC(sub_825F6580) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,20244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20244);
	ctx.f0.f64 = double(temp.f32);
loc_825F659C:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x825f659c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F659C;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r9,r3,124
	ctx.r9.s64 = ctx.r3.s64 + 124;
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825F65D4:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x825f65d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F65D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F7D78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mulli r10,r4,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,-17760
	ctx.r11.s64 = ctx.r11.s64 + -17760;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_825F8110) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x825f8158
	if (!ctx.cr6.gt) goto loc_825F8158;
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
loc_825F813C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// beq cr6,0x825f8174
	if (ctx.cr6.eq) goto loc_825F8174;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x825f813c
	if (ctx.cr6.lt) goto loc_825F813C;
loc_825F8158:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825F8164;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_825F8174:
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

DEFINE_REX_FUNC(sub_825F9940) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F9948;
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
loc_825F9958:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F9974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825f99a0
	if (ctx.cr6.eq) goto loc_825F99A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F9998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825f99b8
	if (!ctx.cr6.eq) goto loc_825F99B8;
loc_825F99A0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x825f9958
	if (ctx.cr6.lt) goto loc_825F9958;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825F99B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_825F99B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825f99b0
	goto loc_825F99B0;
}

DEFINE_REX_FUNC(sub_825FB078) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB098;
	sub_825FA990(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,31776
	ctx.r11.s64 = ctx.r11.s64 + 31776;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825FC028) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FC030;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1452(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FC04C;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825fc088
	if (ctx.cr0.eq) goto loc_825FC088;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FC068;
	sub_825FA990(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,17296
	ctx.r11.s64 = ctx.r11.s64 + 17296;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825fc08c
	goto loc_825FC08C;
loc_825FC088:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FC08C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FEA08) {
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
	ctx.lr = 0x825FEA10;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca4
	ctx.lr = 0x825FEA18;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// stw r5,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stb r8,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, ctx.r8.u8);
	// li r20,0
	r20.s64 = 0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// extsh r26,r7
	r26.s64 = ctx.r7.s16;
	// addi r9,r9,-30264
	ctx.r9.s64 = ctx.r9.s64 + -30264;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// clrlwi. r23,r8,24
	r23.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// mr r21,r20
	r21.u64 = r20.u64;
	// rlwinm r27,r7,16,26,31
	r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x3F;
	// mr r18,r20
	r18.u64 = r20.u64;
	// mr r16,r26
	r16.u64 = r26.u64;
	// addi r15,r11,22852
	r15.s64 = ctx.r11.s64 + 22852;
	// addi r14,r10,-20568
	r14.s64 = ctx.r10.s64 + -20568;
	// beq 0x825fefd4
	if (ctx.cr0.eq) goto loc_825FEFD4;
	// clrlwi r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm. r10,r11,16,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r24,r11,15,29,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// clrlwi r25,r11,16
	r25.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x825fede0
	if (ctx.cr0.eq) goto loc_825FEDE0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825feacc
	if (!ctx.cr6.eq) goto loc_825FEACC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-19416
	ctx.r5.s64 = ctx.r11.s64 + -19416;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FEACC;
	sub_824EA978(ctx, base);
loc_825FEACC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x825feaf0
	if (ctx.cr6.eq) goto loc_825FEAF0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-19444
	ctx.r5.s64 = ctx.r11.s64 + -19444;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FEAF0;
	sub_824EA978(ctx, base);
loc_825FEAF0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x825feb14
	if (ctx.cr6.eq) goto loc_825FEB14;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-19460
	ctx.r5.s64 = ctx.r11.s64 + -19460;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,391
	ctx.r7.s64 = 391;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FEB14;
	sub_824EA978(ctx, base);
loc_825FEB14:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825feb34
	if (!ctx.cr6.lt) goto loc_825FEB34;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x825feb38
	goto loc_825FEB38;
loc_825FEB34:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_825FEB38:
	// lwz r24,0(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r25,136(r24)
	r25.u64 = REX_LOAD_U32(r24.u32 + 136);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x825e7538
	ctx.lr = 0x825FEB50;
	sub_825E7538(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x825fec10
	if (!ctx.cr6.eq) goto loc_825FEC10;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x825e7538
	ctx.lr = 0x825FEB6C;
	sub_825E7538(ctx, base);
	// lbz r11,29(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 29);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825fec08
	if (!ctx.cr0.eq) goto loc_825FEC08;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FEB90;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825febb4
	if (ctx.cr0.eq) goto loc_825FEBB4;
	// li r4,126
	ctx.r4.s64 = 126;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fb268
	ctx.lr = 0x825FEBAC;
	sub_825FB268(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825febb8
	goto loc_825FEBB8;
loc_825FEBB4:
	// mr r30,r20
	r30.u64 = r20.u64;
loc_825FEBB8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825FEBC8;
	sub_825F9F38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825FEBD8;
	sub_825F9F38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825FEBE4;
	sub_825FCB18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825FEBF0;
	sub_825F80C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r11,29(r29)
	REX_STORE_U8(r29.u32 + 29, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f8110
	ctx.lr = 0x825FEC08;
	sub_825F8110(ctx, base);
loc_825FEC08:
	// li r27,30
	r27.s64 = 30;
	// b 0x825fefcc
	goto loc_825FEFCC;
loc_825FEC10:
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(r27.s32, 5, ctx.xer);
	// beq cr6,0x825fec4c
	if (ctx.cr6.eq) goto loc_825FEC4C;
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(r27.s32, 15, ctx.xer);
	// beq cr6,0x825fec4c
	if (ctx.cr6.eq) goto loc_825FEC4C;
	// cmpwi cr6,r27,17
	ctx.cr6.compare<int32_t>(r27.s32, 17, ctx.xer);
	// beq cr6,0x825fec4c
	if (ctx.cr6.eq) goto loc_825FEC4C;
	// cmpwi cr6,r27,12
	ctx.cr6.compare<int32_t>(r27.s32, 12, ctx.xer);
	// beq cr6,0x825fec4c
	if (ctx.cr6.eq) goto loc_825FEC4C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-19608
	ctx.r5.s64 = ctx.r11.s64 + -19608;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,418
	ctx.r7.s64 = 418;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FEC4C;
	sub_824EA978(ctx, base);
loc_825FEC4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d79a0
	ctx.lr = 0x825FEC54;
	sub_825D79A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fec8c
	if (ctx.cr0.eq) goto loc_825FEC8C;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(r27.s32, 5, ctx.xer);
	// beq cr6,0x825fec80
	if (ctx.cr6.eq) goto loc_825FEC80;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-19644
	ctx.r5.s64 = ctx.r11.s64 + -19644;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,422
	ctx.r7.s64 = 422;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FEC80;
	sub_824EA978(ctx, base);
loc_825FEC80:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2100(r31)
	REX_STORE_U8(r31.u32 + 2100, ctx.r11.u8);
	// b 0x825fed24
	goto loc_825FED24;
loc_825FEC8C:
	// lbz r11,2116(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825fecd4
	if (ctx.cr0.eq) goto loc_825FECD4;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,2120(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2120);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825fed24
	if (ctx.cr6.eq) goto loc_825FED24;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-19696
	ctx.r5.s64 = ctx.r11.s64 + -19696;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,426
	ctx.r7.s64 = 426;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FECD0;
	sub_824EA978(ctx, base);
	// b 0x825fed24
	goto loc_825FED24;
loc_825FECD4:
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(r27.s32, 15, ctx.xer);
	// beq cr6,0x825fed08
	if (ctx.cr6.eq) goto loc_825FED08;
	// cmpwi cr6,r27,17
	ctx.cr6.compare<int32_t>(r27.s32, 17, ctx.xer);
	// beq cr6,0x825fed08
	if (ctx.cr6.eq) goto loc_825FED08;
	// cmpwi cr6,r27,12
	ctx.cr6.compare<int32_t>(r27.s32, 12, ctx.xer);
	// beq cr6,0x825fed08
	if (ctx.cr6.eq) goto loc_825FED08;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-19808
	ctx.r5.s64 = ctx.r11.s64 + -19808;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,430
	ctx.r7.s64 = 430;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FED08;
	sub_824EA978(ctx, base);
loc_825FED08:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r9,2116(r31)
	REX_STORE_U8(r31.u32 + 2116, ctx.r9.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,2120(r31)
	REX_STORE_U32(r31.u32 + 2120, ctx.r11.u32);
loc_825FED24:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r4,252(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// bl 0x825e7538
	ctx.lr = 0x825FED38;
	sub_825E7538(ctx, base);
	// lbz r11,29(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 29);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825fedd4
	if (!ctx.cr0.eq) goto loc_825FEDD4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FED5C;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825fed80
	if (ctx.cr0.eq) goto loc_825FED80;
	// li r4,126
	ctx.r4.s64 = 126;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fb268
	ctx.lr = 0x825FED78;
	sub_825FB268(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825fed84
	goto loc_825FED84;
loc_825FED80:
	// mr r30,r20
	r30.u64 = r20.u64;
loc_825FED84:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825FED94;
	sub_825F9F38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825FEDA4;
	sub_825F9F38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825FEDB0;
	sub_825FCB18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825FEDBC;
	sub_825F80C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r11,29(r29)
	REX_STORE_U8(r29.u32 + 29, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f8110
	ctx.lr = 0x825FEDD4;
	sub_825F8110(ctx, base);
loc_825FEDD4:
	// mr r18,r26
	r18.u64 = r26.u64;
	// li r27,31
	r27.s64 = 31;
	// b 0x825fefd0
	goto loc_825FEFD0;
loc_825FEDE0:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// beq cr6,0x825fee04
	if (ctx.cr6.eq) goto loc_825FEE04;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-19848
	ctx.r5.s64 = ctx.r11.s64 + -19848;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,454
	ctx.r7.s64 = 454;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FEE04;
	sub_824EA978(ctx, base);
loc_825FEE04:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x825fee14
	if (ctx.cr6.lt) goto loc_825FEE14;
	// cmpwi cr6,r24,6
	ctx.cr6.compare<int32_t>(r24.s32, 6, ctx.xer);
	// blt cr6,0x825fee30
	if (ctx.cr6.lt) goto loc_825FEE30;
loc_825FEE14:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-19908
	ctx.r5.s64 = ctx.r11.s64 + -19908;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,455
	ctx.r7.s64 = 455;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FEE30;
	sub_824EA978(ctx, base);
loc_825FEE30:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x825fee54
	if (ctx.cr6.eq) goto loc_825FEE54;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-19460
	ctx.r5.s64 = ctx.r11.s64 + -19460;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,462
	ctx.r7.s64 = 462;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FEE54;
	sub_824EA978(ctx, base);
loc_825FEE54:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FEE68;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825fee8c
	if (ctx.cr0.eq) goto loc_825FEE8C;
	// li r4,99
	ctx.r4.s64 = 99;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825facb0
	ctx.lr = 0x825FEE84;
	sub_825FACB0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x825fee90
	goto loc_825FEE90;
loc_825FEE8C:
	// mr r28,r20
	r28.u64 = r20.u64;
loc_825FEE90:
	// li r26,31
	r26.s64 = 31;
	// stw r25,60(r28)
	REX_STORE_U32(r28.u32 + 60, r25.u32);
	// li r29,34
	r29.s64 = 34;
	// li r27,1
	r27.s64 = 1;
	// stw r26,80(r28)
	REX_STORE_U32(r28.u32 + 80, r26.u32);
	// stw r29,84(r28)
	REX_STORE_U32(r28.u32 + 84, r29.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r27,56(r28)
	REX_STORE_U32(r28.u32 + 56, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825fa680
	ctx.lr = 0x825FEEB8;
	sub_825FA680(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FEECC;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825feef0
	if (ctx.cr0.eq) goto loc_825FEEF0;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fb0e8
	ctx.lr = 0x825FEEE8;
	sub_825FB0E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825feef4
	goto loc_825FEEF4;
loc_825FEEF0:
	// mr r30,r20
	r30.u64 = r20.u64;
loc_825FEEF4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,56(r30)
	REX_STORE_U32(r30.u32 + 56, r25.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stw r29,80(r30)
	REX_STORE_U32(r30.u32 + 80, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FEF28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,60(r30)
	REX_STORE_U32(r30.u32 + 60, r27.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// stw r26,84(r30)
	REX_STORE_U32(r30.u32 + 84, r26.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r29,1452(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FEF44;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825fef68
	if (ctx.cr0.eq) goto loc_825FEF68;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fb0e8
	ctx.lr = 0x825FEF60;
	sub_825FB0E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825fef6c
	goto loc_825FEF6C;
loc_825FEF68:
	// mr r29,r20
	r29.u64 = r20.u64;
loc_825FEF6C:
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,9416
	ctx.r10.s64 = ctx.r10.s64 + 9416;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwzx r27,r9,r10
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r25,56(r29)
	REX_STORE_U32(r29.u32 + 56, r25.u32);
	// stw r8,60(r29)
	REX_STORE_U32(r29.u32 + 60, ctx.r8.u32);
	// stw r26,84(r29)
	REX_STORE_U32(r29.u32 + 84, r26.u32);
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// stw r30,172(r28)
	REX_STORE_U32(r28.u32 + 172, r30.u32);
	// stw r29,176(r28)
	REX_STORE_U32(r28.u32 + 176, r29.u32);
	// bl 0x825f74e0
	ctx.lr = 0x825FEFB4;
	sub_825F74E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825f74e0
	ctx.lr = 0x825FEFC0;
	sub_825F74E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825f74e0
	ctx.lr = 0x825FEFCC;
	sub_825F74E0(ctx, base);
loc_825FEFCC:
	// mr r18,r16
	r18.u64 = r16.u64;
loc_825FEFD0:
	// mr r26,r25
	r26.u64 = r25.u64;
loc_825FEFD4:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffbe0
	if (ctx.cr0.eq) goto loc_825FFBE0;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff004
	if (ctx.cr0.eq) goto loc_825FF004;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// andi. r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 & 17476;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825ff004
	if (ctx.cr0.eq) goto loc_825FF004;
	// li r24,1
	r24.s64 = 1;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x825ff00c
	goto loc_825FF00C;
loc_825FF004:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// li r24,1
	r24.s64 = 1;
loc_825FF00C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f30.f64 = double(temp.f32);
	// beq 0x825ff1fc
	if (ctx.cr0.eq) goto loc_825FF1FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8260aa38
	ctx.lr = 0x825FF028;
	sub_8260AA38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8260aa38
	ctx.lr = 0x825FF038;
	sub_8260AA38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8260aa38
	ctx.lr = 0x825FF048;
	sub_8260AA38(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8260aa38
	ctx.lr = 0x825FF058;
	sub_8260AA38(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r11.u32);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FF07C;
	sub_825F9AD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x825ff0a4
	if (ctx.cr6.eq) goto loc_825FF0A4;
	// stw r18,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, r18.u32);
	// mr r23,r20
	r23.u64 = r20.u64;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r20,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, r20.u8);
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// b 0x825ff0a8
	goto loc_825FF0A8;
loc_825FF0A4:
	// lbz r23,351(r1)
	r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 351);
loc_825FF0A8:
	// stw r20,80(r4)
	REX_STORE_U32(ctx.r4.u32 + 80, r20.u32);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r22,88(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r21,56(r4)
	REX_STORE_U32(ctx.r4.u32 + 56, r21.u32);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// lwz r11,92(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 92);
	// lfs f31,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f31.f64 = double(temp.f32);
	// fmr f27,f31
	f27.f64 = f31.f64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r4)
	REX_STORE_U32(ctx.r4.u32 + 60, r26.u32);
	// stw r11,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, ctx.r11.u32);
	// beq cr6,0x825ff0f4
	if (ctx.cr6.eq) goto loc_825FF0F4;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(r30.s32, 5, ctx.xer);
	// bne cr6,0x825ff0fc
	if (!ctx.cr6.eq) goto loc_825FF0FC;
	// fmr f27,f30
	f27.f64 = f30.f64;
loc_825FF0F4:
	// stb r20,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r20.u8);
	// b 0x825ff104
	goto loc_825FF104;
loc_825FF0FC:
	// stb r24,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r24.u8);
	// stb r30,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r30.u8);
loc_825FF104:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	f28.f64 = f31.f64;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// beq cr6,0x825ff11c
	if (ctx.cr6.eq) goto loc_825FF11C;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(r29.s32, 5, ctx.xer);
	// bne cr6,0x825ff124
	if (!ctx.cr6.eq) goto loc_825FF124;
	// fmr f28,f30
	f28.f64 = f30.f64;
loc_825FF11C:
	// stb r20,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, r20.u8);
	// b 0x825ff12c
	goto loc_825FF12C;
loc_825FF124:
	// stb r24,85(r1)
	REX_STORE_U8(ctx.r1.u32 + 85, r24.u8);
	// stb r29,93(r1)
	REX_STORE_U8(ctx.r1.u32 + 93, r29.u8);
loc_825FF12C:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = f31.f64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// beq cr6,0x825ff144
	if (ctx.cr6.eq) goto loc_825FF144;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(r28.s32, 5, ctx.xer);
	// bne cr6,0x825ff14c
	if (!ctx.cr6.eq) goto loc_825FF14C;
	// fmr f29,f30
	f29.f64 = f30.f64;
loc_825FF144:
	// stb r20,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, r20.u8);
	// b 0x825ff154
	goto loc_825FF154;
loc_825FF14C:
	// stb r24,86(r1)
	REX_STORE_U8(ctx.r1.u32 + 86, r24.u8);
	// stb r28,94(r1)
	REX_STORE_U8(ctx.r1.u32 + 94, r28.u8);
loc_825FF154:
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// beq cr6,0x825ff168
	if (ctx.cr6.eq) goto loc_825FF168;
	// cmpwi cr6,r25,5
	ctx.cr6.compare<int32_t>(r25.s32, 5, ctx.xer);
	// bne cr6,0x825ff170
	if (!ctx.cr6.eq) goto loc_825FF170;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
loc_825FF168:
	// stb r20,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r20.u8);
	// b 0x825ff178
	goto loc_825FF178;
loc_825FF170:
	// stb r24,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r24.u8);
	// stb r25,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r25.u8);
loc_825FF178:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r11,132(r4)
	REX_STORE_U32(ctx.r4.u32 + 132, ctx.r11.u32);
	// bl 0x825f74e0
	ctx.lr = 0x825FF188;
	sub_825F74E0(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FF194;
	sub_825F9AD0(ctx, base);
	// stw r21,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r21.u32);
	// stw r20,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r20.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x825faab8
	ctx.lr = 0x825FF1BC;
	sub_825FAAB8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
	// bl 0x825f74e0
	ctx.lr = 0x825FF1D0;
	sub_825F74E0(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff1f0
	if (ctx.cr0.eq) goto loc_825FF1F0;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// li r12,-17768
	ctx.r12.s64 = -17768;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r11,r11,12816
	ctx.r11.u64 = ctx.r11.u64 | 12816;
	// stw r11,4(r19)
	REX_STORE_U32(r19.u32 + 4, ctx.r11.u32);
loc_825FF1F0:
	// mr r26,r21
	r26.u64 = r21.u64;
	// li r27,4
	r27.s64 = 4;
	// b 0x825ff204
	goto loc_825FF204;
loc_825FF1FC:
	// lwz r22,88(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r23,351(r1)
	r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 351);
loc_825FF204:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ff224
	if (ctx.cr0.eq) goto loc_825FF224;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// and. r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// bne 0x825ff228
	if (!ctx.cr0.eq) goto loc_825FF228;
loc_825FF224:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_825FF228:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffbe0
	if (ctx.cr0.eq) goto loc_825FFBE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ff244
	if (ctx.cr6.eq) goto loc_825FF244;
	// lhz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U16(r19.u32 + 4);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x825ff248
	goto loc_825FF248;
loc_825FF244:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825FF248:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ff308
	if (!ctx.cr6.gt) goto loc_825FF308;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x825ff26c
	if (!ctx.cr6.eq) goto loc_825FF26C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r11.u32);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
loc_825FF26C:
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FF278;
	sub_825F9AD0(ctx, base);
	// stw r20,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r20.u32);
	// stw r21,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r21.u32);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r16,r26
	ctx.cr6.compare<int32_t>(r16.s32, r26.s32, ctx.xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r26.u32);
	// stb r24,153(r3)
	REX_STORE_U8(ctx.r3.u32 + 153, r24.u8);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// bne cr6,0x825ff2d4
	if (!ctx.cr6.eq) goto loc_825FF2D4;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff2c8
	if (ctx.cr0.eq) goto loc_825FF2C8;
	// stw r18,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, r18.u32);
	// mr r23,r20
	r23.u64 = r20.u64;
	// stb r20,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, r20.u8);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_825FF2C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825fe328
	ctx.lr = 0x825FF2D4;
	sub_825FE328(ctx, base);
loc_825FF2D4:
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x825faab8
	ctx.lr = 0x825FF2F4;
	sub_825FAAB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825f74e0
	ctx.lr = 0x825FF300;
	sub_825F74E0(ctx, base);
	// mr r26,r21
	r26.u64 = r21.u64;
	// li r27,4
	r27.s64 = 4;
loc_825FF308:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff320
	if (ctx.cr0.eq) goto loc_825FF320;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// b 0x825ff324
	goto loc_825FF324;
loc_825FF320:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825FF324:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ff3e8
	if (!ctx.cr6.gt) goto loc_825FF3E8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x825ff348
	if (!ctx.cr6.eq) goto loc_825FF348;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r11.u32);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
loc_825FF348:
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FF354;
	sub_825F9AD0(ctx, base);
	// stw r21,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r21.u32);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r20,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r20.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r16,r26
	ctx.cr6.compare<int32_t>(r16.s32, r26.s32, ctx.xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r26.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// bne cr6,0x825ff3ac
	if (!ctx.cr6.eq) goto loc_825FF3AC;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff3a0
	if (ctx.cr0.eq) goto loc_825FF3A0;
	// stw r18,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, r18.u32);
	// mr r23,r20
	r23.u64 = r20.u64;
	// stb r20,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, r20.u8);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_825FF3A0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825fe328
	ctx.lr = 0x825FF3AC;
	sub_825FE328(ctx, base);
loc_825FF3AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f4,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825FF3D0;
	sub_825FAAB8(ctx, base);
	// stb r24,154(r30)
	REX_STORE_U8(r30.u32 + 154, r24.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825f74e0
	ctx.lr = 0x825FF3E0;
	sub_825F74E0(ctx, base);
	// mr r26,r21
	r26.u64 = r21.u64;
	// li r27,4
	r27.s64 = 4;
loc_825FF3E8:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff400
	if (ctx.cr0.eq) goto loc_825FF400;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// b 0x825ff404
	goto loc_825FF404;
loc_825FF400:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825FF404:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ff4c4
	if (!ctx.cr6.gt) goto loc_825FF4C4;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x825ff428
	if (!ctx.cr6.eq) goto loc_825FF428;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r11.u32);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
loc_825FF428:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FF434;
	sub_825F9AD0(ctx, base);
	// stw r21,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r21.u32);
	// stw r20,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r20.u32);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r16,r26
	ctx.cr6.compare<int32_t>(r16.s32, r26.s32, ctx.xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r26.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// bne cr6,0x825ff48c
	if (!ctx.cr6.eq) goto loc_825FF48C;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff480
	if (ctx.cr0.eq) goto loc_825FF480;
	// stw r18,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, r18.u32);
	// mr r23,r20
	r23.u64 = r20.u64;
	// stb r20,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, r20.u8);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_825FF480:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825fe328
	ctx.lr = 0x825FF48C;
	sub_825FE328(ctx, base);
loc_825FF48C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f4,3804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825FF4B0;
	sub_825FAAB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825f74e0
	ctx.lr = 0x825FF4BC;
	sub_825F74E0(ctx, base);
	// mr r26,r21
	r26.u64 = r21.u64;
	// li r27,4
	r27.s64 = 4;
loc_825FF4C4:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff4dc
	if (ctx.cr0.eq) goto loc_825FF4DC;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// b 0x825ff4e0
	goto loc_825FF4E0;
loc_825FF4DC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825FF4E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ff60c
	if (!ctx.cr6.gt) goto loc_825FF60C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// stw r29,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, r29.u32);
	// mr r21,r29
	r21.u64 = r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FF508;
	sub_825F9AD0(ctx, base);
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r29.u32);
	// rlwinm r29,r27,3,0,28
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r20,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r20.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r26,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r26.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x825faab8
	ctx.lr = 0x825FF548;
	sub_825FAAB8(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpw cr6,r16,r26
	ctx.cr6.compare<int32_t>(r16.s32, r26.s32, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,68(r30)
	REX_STORE_U32(r30.u32 + 68, r26.u32);
	// stw r11,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r11.u32);
	// bne cr6,0x825ff5a4
	if (!ctx.cr6.eq) goto loc_825FF5A4;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff570
	if (ctx.cr0.eq) goto loc_825FF570;
	// stw r18,212(r30)
	REX_STORE_U32(r30.u32 + 212, r18.u32);
loc_825FF570:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ff590
	if (ctx.cr6.eq) goto loc_825FF590;
	// stw r18,204(r30)
	REX_STORE_U32(r30.u32 + 204, r18.u32);
	// mr r23,r20
	r23.u64 = r20.u64;
	// stb r20,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, r20.u8);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_825FF590:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825fe328
	ctx.lr = 0x825FF59C;
	sub_825FE328(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// stw r11,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r11.u32);
loc_825FF5A4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825f74e0
	ctx.lr = 0x825FF5B0;
	sub_825F74E0(ctx, base);
	// li r3,37
	ctx.r3.s64 = 37;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FF5BC;
	sub_825F9AD0(ctx, base);
	// stw r21,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r21.u32);
	// stw r20,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r20.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r21,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r21.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r20,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r20.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r21,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r21.u32);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// stw r20,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r20.u32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x825faab8
	ctx.lr = 0x825FF5F4;
	sub_825FAAB8(ctx, base);
	// stb r24,155(r30)
	REX_STORE_U8(r30.u32 + 155, r24.u8);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f74e0
	ctx.lr = 0x825FF604;
	sub_825F74E0(ctx, base);
	// mr r26,r21
	r26.u64 = r21.u64;
	// li r27,4
	r27.s64 = 4;
loc_825FF60C:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff624
	if (ctx.cr0.eq) goto loc_825FF624;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm r30,r11,11,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// b 0x825ff628
	goto loc_825FF628;
loc_825FF624:
	// li r30,-1
	r30.s64 = -1;
loc_825FF628:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x825ff9d0
	if (!ctx.cr6.gt) goto loc_825FF9D0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// ble cr6,0x825ff658
	if (!ctx.cr6.gt) goto loc_825FF658;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20064
	ctx.r5.s64 = ctx.r11.s64 + -20064;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,674
	ctx.r7.s64 = 674;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FF654;
	sub_824EA978(ctx, base);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
loc_825FF658:
	// bne cr6,0x825ff7dc
	if (!ctx.cr6.eq) goto loc_825FF7DC;
	// lwz r30,324(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// li r10,100
	ctx.r10.s64 = 100;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r10,r10,r11
	ctx.r10.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r10,93
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 93, ctx.xer);
	// beq cr6,0x825ff708
	if (ctx.cr6.eq) goto loc_825FF708;
	// li r10,100
	ctx.r10.s64 = 100;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r10,r10,r11
	ctx.r10.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r10,94
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 94, ctx.xer);
	// beq cr6,0x825ff708
	if (ctx.cr6.eq) goto loc_825FF708;
	// li r10,100
	ctx.r10.s64 = 100;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r10,r10,r11
	ctx.r10.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// beq cr6,0x825ff708
	if (ctx.cr6.eq) goto loc_825FF708;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r11,-20240
	ctx.r5.s64 = ctx.r11.s64 + -20240;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r7,680
	ctx.r7.s64 = 680;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FF708;
	sub_824EA978(ctx, base);
loc_825FF708:
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lbz r28,1(r30)
	r28.u64 = REX_LOAD_U8(r30.u32 + 1);
	// lwz r3,1488(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1488);
	// lwz r30,1536(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 1536);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FF728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// bl 0x825d2c90
	ctx.lr = 0x825FF744;
	sub_825D2C90(ctx, base);
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r3,1488(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1488);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r25,1536(r29)
	r25.u64 = REX_LOAD_U32(r29.u32 + 1536);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FF76C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// bl 0x825d2db8
	ctx.lr = 0x825FF788;
	sub_825D2DB8(ctx, base);
	// lwz r25,12(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r3,1488(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 1488);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r15,1536(r25)
	r15.u64 = REX_LOAD_U32(r25.u32 + 1536);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FF7B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// bl 0x825d2ee0
	ctx.lr = 0x825FF7CC;
	sub_825D2EE0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x825ff800
	goto loc_825FF800;
loc_825FF7DC:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// addi r10,r30,-2
	ctx.r10.s64 = r30.s64 + -2;
	// addi r9,r30,-3
	ctx.r9.s64 = r30.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r29,r10,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_825FF800:
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ff818
	if (!ctx.cr0.eq) goto loc_825FF818;
	// clrlwi. r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825ff818
	if (!ctx.cr0.eq) goto loc_825FF818;
	// clrlwi. r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ff9d0
	if (ctx.cr0.eq) goto loc_825FF9D0;
loc_825FF818:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ff834
	if (ctx.cr6.eq) goto loc_825FF834;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,1
	r24.s64 = 1;
	// lwz r23,0(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r22,12(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x825ff878
	goto loc_825FF878;
loc_825FF834:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ff850
	if (ctx.cr0.eq) goto loc_825FF850;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,2
	r24.s64 = 2;
	// lwz r23,4(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r22,16(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x825ff878
	goto loc_825FF878;
loc_825FF850:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ff86c
	if (ctx.cr0.eq) goto loc_825FF86C;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,3
	r24.s64 = 3;
	// lwz r23,8(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r22,20(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x825ff878
	goto loc_825FF878;
loc_825FF86C:
	// lbz r24,80(r1)
	r24.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r23,92(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r22,92(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_825FF878:
	// li r3,62
	ctx.r3.s64 = 62;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FF884;
	sub_825F9AD0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r25,r27,3,0,28
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
	// stw r27,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, r27.u32);
	// mr r21,r27
	r21.u64 = r27.u64;
	// stw r27,56(r28)
	REX_STORE_U32(r28.u32 + 56, r27.u32);
	// stw r20,80(r28)
	REX_STORE_U32(r28.u32 + 80, r20.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,84(r28)
	REX_STORE_U32(r28.u32 + 84, ctx.r11.u32);
	// stw r26,60(r28)
	REX_STORE_U32(r28.u32 + 60, r26.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FF8C8;
	sub_825F9AD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r27.u32);
	// li r3,49
	ctx.r3.s64 = 49;
	// stw r20,80(r30)
	REX_STORE_U32(r30.u32 + 80, r20.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r11.u32);
	// stw r26,60(r30)
	REX_STORE_U32(r30.u32 + 60, r26.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FF8F4;
	sub_825F9AD0(ctx, base);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r27.u32);
	// stw r20,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r20.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r16,r26
	ctx.cr6.compare<int32_t>(r16.s32, r26.s32, ctx.xer);
	// stw r26,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r26.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// bne cr6,0x825ff960
	if (!ctx.cr6.eq) goto loc_825FF960;
	// lbz r11,351(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 351);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825ff930
	if (ctx.cr0.eq) goto loc_825FF930;
	// stw r18,204(r30)
	REX_STORE_U32(r30.u32 + 204, r18.u32);
	// stw r18,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, r18.u32);
loc_825FF930:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825ff94c
	if (ctx.cr6.eq) goto loc_825FF94C;
	// stw r18,204(r28)
	REX_STORE_U32(r28.u32 + 204, r18.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stb r20,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, r20.u8);
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_825FF94C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825fe328
	ctx.lr = 0x825FF958;
	sub_825FE328(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// stw r11,132(r29)
	REX_STORE_U32(r29.u32 + 132, ctx.r11.u32);
loc_825FF960:
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 132);
	// clrlwi r10,r24,24
	ctx.r10.u64 = r24.u32 & 0xFF;
	// stw r21,64(r30)
	REX_STORE_U32(r30.u32 + 64, r21.u32);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stw r20,88(r30)
	REX_STORE_U32(r30.u32 + 88, r20.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r11,132(r28)
	REX_STORE_U32(r28.u32 + 132, ctx.r11.u32);
	// stw r23,128(r30)
	REX_STORE_U32(r30.u32 + 128, r23.u32);
	// stw r22,128(r29)
	REX_STORE_U32(r29.u32 + 128, r22.u32);
	// bl 0x825f74e0
	ctx.lr = 0x825FF9A4;
	sub_825F74E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825f74e0
	ctx.lr = 0x825FF9B0;
	sub_825F74E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825f74e0
	ctx.lr = 0x825FF9BC;
	sub_825F74E0(ctx, base);
	// lwz r22,88(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r23,351(r1)
	r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 351);
	// mr r26,r21
	r26.u64 = r21.u64;
	// li r27,4
	r27.s64 = 4;
	// li r24,1
	r24.s64 = 1;
loc_825FF9D0:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffa08
	if (ctx.cr0.eq) goto loc_825FFA08;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ffa00
	if (!ctx.cr0.eq) goto loc_825FFA00;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ffa00
	if (!ctx.cr0.eq) goto loc_825FFA00;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825ffa00
	if (!ctx.cr0.eq) goto loc_825FFA00;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffa08
	if (ctx.cr0.eq) goto loc_825FFA08;
loc_825FFA00:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x825ffa0c
	goto loc_825FFA0C;
loc_825FFA08:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_825FFA0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffbe0
	if (ctx.cr0.eq) goto loc_825FFBE0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8260aad0
	ctx.lr = 0x825FFA1C;
	sub_8260AAD0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x825ffbe0
	if (ctx.cr0.eq) goto loc_825FFBE0;
	// cmplwi cr6,r28,34952
	ctx.cr6.compare<uint32_t>(r28.u32, 34952, ctx.xer);
	// beq cr6,0x825ffbe0
	if (ctx.cr6.eq) goto loc_825FFBE0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x825ffa48
	if (!ctx.cr6.eq) goto loc_825FFA48;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r11.u32);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
loc_825FFA48:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825FFA54;
	sub_825F9AD0(ctx, base);
	// stw r20,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r20.u32);
	// stw r21,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r21.u32);
	// rlwinm r29,r27,3,0,28
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r16,r26
	ctx.cr6.compare<int32_t>(r16.s32, r26.s32, ctx.xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r26.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// bne cr6,0x825ffaa4
	if (!ctx.cr6.eq) goto loc_825FFAA4;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffa98
	if (ctx.cr0.eq) goto loc_825FFA98;
	// stw r18,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, r18.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_825FFA98:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825fe328
	ctx.lr = 0x825FFAA4;
	sub_825FE328(ctx, base);
loc_825FFAA4:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffabc
	if (ctx.cr0.eq) goto loc_825FFABC;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// b 0x825ffac0
	goto loc_825FFAC0;
loc_825FFABC:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_825FFAC0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ffacc
	if (ctx.cr6.eq) goto loc_825FFACC;
	// stb r24,159(r30)
	REX_STORE_U8(r30.u32 + 159, r24.u8);
loc_825FFACC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825f74e0
	ctx.lr = 0x825FFAD8;
	sub_825F74E0(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r30,132(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 132);
	// bl 0x825f9ad0
	ctx.lr = 0x825FFAE8;
	sub_825F9AD0(ctx, base);
	// stw r21,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r21.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r20,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r20.u32);
	// cmpw cr6,r16,r26
	ctx.cr6.compare<int32_t>(r16.s32, r26.s32, ctx.xer);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r26,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r26.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// bne cr6,0x825ffb2c
	if (!ctx.cr6.eq) goto loc_825FFB2C;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffb28
	if (ctx.cr0.eq) goto loc_825FFB28;
	// stw r18,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, r18.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_825FFB28:
	// stw r30,132(r4)
	REX_STORE_U32(ctx.r4.u32 + 132, r30.u32);
loc_825FFB2C:
	// stb r24,153(r4)
	REX_STORE_U8(ctx.r4.u32 + 153, r24.u8);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffb48
	if (ctx.cr0.eq) goto loc_825FFB48;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// b 0x825ffb4c
	goto loc_825FFB4C;
loc_825FFB48:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_825FFB4C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ffb70
	if (ctx.cr6.eq) goto loc_825FFB70;
	// stb r24,159(r4)
	REX_STORE_U8(ctx.r4.u32 + 159, r24.u8);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffb70
	if (ctx.cr0.eq) goto loc_825FFB70;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,4(r19)
	REX_STORE_U32(r19.u32 + 4, ctx.r11.u32);
loc_825FFB70:
	// lwz r11,100(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 100);
	// not r10,r28
	ctx.r10.u64 = ~r28.u64;
	// not r8,r28
	ctx.r8.u64 = ~r28.u64;
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// rlwinm r8,r8,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1;
	// not r9,r28
	ctx.r9.u64 = ~r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// not r11,r28
	ctx.r11.u64 = ~r28.u64;
	// stb r10,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r10.u8);
	// rlwinm r9,r9,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// rlwinm r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// stb r8,94(r1)
	REX_STORE_U8(ctx.r1.u32 + 94, ctx.r8.u8);
	// stb r9,93(r1)
	REX_STORE_U8(ctx.r1.u32 + 93, ctx.r9.u8);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,128(r4)
	REX_STORE_U32(ctx.r4.u32 + 128, ctx.r11.u32);
	// bl 0x825f74e0
	ctx.lr = 0x825FFBB8;
	sub_825F74E0(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ffbd8
	if (ctx.cr0.eq) goto loc_825FFBD8;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// ori r12,r12,30583
	ctx.r12.u64 = ctx.r12.u64 | 30583;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r11,4(r19)
	REX_STORE_U32(r19.u32 + 4, ctx.r11.u32);
loc_825FFBD8:
	// mr r26,r21
	r26.u64 = r21.u64;
	// li r27,4
	r27.s64 = 4;
loc_825FFBE0:
	// sth r26,2(r19)
	REX_STORE_U16(r19.u32 + 2, r26.u16);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwimi r11,r27,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf0
	ctx.lr = 0x825FFBFC;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82676050) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82676058;
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
	// bl 0x82671a98
	ctx.lr = 0x82676070;
	sub_82671A98(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-10652
	ctx.r11.s64 = ctx.r11.s64 + -10652;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8267607C:
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
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
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
	// bne 0x8267607c
	if (!ctx.cr0.eq) goto loc_8267607C;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82678388) {
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
	ctx.lr = 0x82678390;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// cmplwi cr6,r5,1200
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1200, ctx.xer);
	// ble cr6,0x826783c0
	if (!ctx.cr6.gt) goto loc_826783C0;
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4102
	r30.u64 = r30.u64 | 4102;
	// b 0x826784bc
	goto loc_826784BC;
loc_826783C0:
	// addi r30,r31,172
	r30.s64 = r31.s64 + 172;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x826783CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// sth r11,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// lwz r5,44(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r4,40(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// bl 0x82681130
	ctx.lr = 0x826783F4;
	sub_82681130(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,11(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 11);
	// bl 0x827938b4
	ctx.lr = 0x82678404;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82681770
	ctx.lr = 0x8267840C;
	sub_82681770(ctx, base);
	// addi r27,r31,244
	r27.s64 = r31.s64 + 244;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267841C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x82678430
	if (!ctx.cr6.lt) goto loc_82678430;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267842C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x826784bc
	goto loc_826784BC;
loc_82678430:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82678458
	if (ctx.cr0.eq) goto loc_82678458;
	// bl 0x82676d18
	ctx.lr = 0x82678444;
	sub_82676D18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267844C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4099
	r30.u64 = r30.u64 | 4099;
	// b 0x826784bc
	goto loc_826784BC;
loc_82678458:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x826819e8
	ctx.lr = 0x8267846C;
	sub_826819E8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r31,300
	ctx.r10.s64 = r31.s64 + 300;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826784b0
	if (!ctx.cr6.eq) goto loc_826784B0;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826784b0
	if (!ctx.cr0.eq) goto loc_826784B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826777a0
	ctx.lr = 0x826784B0;
	sub_826777A0(ctx, base);
loc_826784B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938b4
	ctx.lr = 0x826784B8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r30,r25
	r30.u64 = r25.u64;
loc_826784BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8267F100) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8267F108;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,40
	r29.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267F11C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x823ef900
	ctx.lr = 0x8267F120;
	sub_823EF900(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267f188
	if (!ctx.cr6.eq) goto loc_8267F188;
	// lbz r10,1184(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267f188
	if (ctx.cr0.eq) goto loc_8267F188;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82678eb8
	ctx.lr = 0x8267F148;
	sub_82678EB8(ctx, base);
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r3.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r11.u8);
	// beq 0x8267f27c
	if (ctx.cr0.eq) goto loc_8267F27C;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8264c860
	ctx.lr = 0x8267F168;
	sub_8264C860(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8267f27c
	if (!ctx.cr6.eq) goto loc_8267F27C;
	// lwz r10,1048(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// stw r30,440(r31)
	REX_STORE_U32(r31.u32 + 440, r30.u32);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// b 0x8267f27c
	goto loc_8267F27C;
loc_8267F188:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8267f250
	if (!ctx.cr6.eq) goto loc_8267F250;
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267f1b0
	if (ctx.cr0.eq) goto loc_8267F1B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267b868
	ctx.lr = 0x8267F1A4;
	sub_8267B868(ctx, base);
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8267f274
	goto loc_8267F274;
loc_8267F1B0:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267f1d4
	if (ctx.cr0.eq) goto loc_8267F1D4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267bb58
	ctx.lr = 0x8267F1C8;
	sub_8267BB58(ctx, base);
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// andi. r11,r11,223
	ctx.r11.u64 = ctx.r11.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8267f274
	goto loc_8267F274;
loc_8267F1D4:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267f1f4
	if (ctx.cr0.eq) goto loc_8267F1F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267b940
	ctx.lr = 0x8267F1E8;
	sub_8267B940(ctx, base);
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// b 0x8267f274
	goto loc_8267F274;
loc_8267F1F4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267f210
	if (ctx.cr0.eq) goto loc_8267F210;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267dbc8
	ctx.lr = 0x8267F204;
	sub_8267DBC8(ctx, base);
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8267f274
	goto loc_8267F274;
loc_8267F210:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267f234
	if (ctx.cr0.eq) goto loc_8267F234;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267bb58
	ctx.lr = 0x8267F228;
	sub_8267BB58(ctx, base);
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8267f274
	goto loc_8267F274;
loc_8267F234:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267f27c
	if (ctx.cr0.eq) goto loc_8267F27C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267bc58
	ctx.lr = 0x8267F244;
	sub_8267BC58(ctx, base);
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8267f274
	goto loc_8267F274;
loc_8267F250:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8267f27c
	if (!ctx.cr6.eq) goto loc_8267F27C;
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267f27c
	if (ctx.cr0.eq) goto loc_8267F27C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267b8d8
	ctx.lr = 0x8267F26C;
	sub_8267B8D8(ctx, base);
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// andi. r11,r11,251
	ctx.r11.u64 = ctx.r11.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8267F274:
	// stw r3,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r3.u32);
	// stb r11,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r11.u8);
loc_8267F27C:
	// lwz r11,1048(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267f2ac
	if (!ctx.cr6.eq) goto loc_8267F2AC;
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r11,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r11.u32);
	// bl 0x8267cae0
	ctx.lr = 0x8267F29C;
	sub_8267CAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676d18
	ctx.lr = 0x8267F2A4;
	sub_82676D18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8267f304
	goto loc_8267F304;
loc_8267F2AC:
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8267f2c4
	if (!ctx.cr6.eq) goto loc_8267F2C4;
	// stw r30,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r30.u32);
loc_8267F2C4:
	// stw r30,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,1048(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82683f78
	ctx.lr = 0x8267F2E4;
	sub_82683F78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267f2f8
	if (ctx.cr0.eq) goto loc_8267F2F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267cae0
	ctx.lr = 0x8267F2F4;
	sub_8267CAE0(ctx, base);
	// b 0x8267f300
	goto loc_8267F300;
loc_8267F2F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267F300;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8267F300:
	// lwz r3,1048(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1048);
loc_8267F304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8268B610) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268b648
	if (!ctx.cr6.eq) goto loc_8268B648;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8268b648
	if (!ctx.cr6.eq) goto loc_8268B648;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x8268fc80
	ctx.lr = 0x8268B648;
	sub_8268FC80(ctx, base);
loc_8268B648:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268e910
	ctx.lr = 0x8268B650;
	sub_8268E910(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8268b660
	if (!ctx.cr0.lt) goto loc_8268B660;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268b0f8
	ctx.lr = 0x8268B660;
	sub_8268B0F8(ctx, base);
loc_8268B660:
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

DEFINE_REX_FUNC(sub_8268E538) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8268E540;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// stw r30,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268e598
	if (!ctx.cr6.gt) goto loc_8268E598;
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
loc_8268E564:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8268e584
	if (!ctx.cr6.eq) goto loc_8268E584;
	// stw r28,52(r31)
	REX_STORE_U32(r31.u32 + 52, r28.u32);
loc_8268E584:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268e564
	if (ctx.cr6.lt) goto loc_8268E564;
loc_8268E598:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8268e5b0
	if (ctx.cr6.eq) goto loc_8268E5B0;
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// b 0x8268e5e4
	goto loc_8268E5E4;
loc_8268E5B0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8268e5e4
	if (!ctx.cr6.gt) goto loc_8268E5E4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268e5e0
	if (ctx.cr6.eq) goto loc_8268E5E0;
	// bl 0x823ef900
	ctx.lr = 0x8268E5CC;
	sub_823EF900(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_8268E5E0:
	// stw r28,52(r31)
	REX_STORE_U32(r31.u32 + 52, r28.u32);
loc_8268E5E4:
	// bl 0x823ef900
	ctx.lr = 0x8268E5E8;
	sub_823EF900(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82695418) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82695420;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r31.s64 = temp.s64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826985c8
	ctx.lr = 0x8269543C;
	sub_826985C8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826988a0
	ctx.lr = 0x8269544C;
	sub_826988A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82696980) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fadds f0,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f0,f0,f13,f2
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f2.f64)));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x826969bc
	if (ctx.cr6.eq) goto loc_826969BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3804(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_826969BC:
	// fmadds f0,f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f0,f0,f1,f2
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f2.f64)));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82699AF8) {
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
	ctx.lr = 0x82699B00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,20480
	ctx.r11.s64 = 1342177280;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82699b48
	if (ctx.cr6.eq) goto loc_82699B48;
	// lis r11,24576
	ctx.r11.s64 = 1610612736;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82699bd0
	if (!ctx.cr6.eq) goto loc_82699BD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r4,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r4.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x827942a4
	ctx.lr = 0x82699B40;
	__imp__MicDeviceRequest(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82699b60
	goto loc_82699B60;
loc_82699B48:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r31,90(r1)
	REX_STORE_U16(ctx.r1.u32 + 90, r31.u16);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// bl 0x82794294
	ctx.lr = 0x82699B5C;
	__imp__RmcDeviceRequest(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82699B60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82699b70
	if (!ctx.cr6.lt) goto loc_82699B70;
	// bl 0x82793b74
	ctx.lr = 0x82699B6C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x82699bd4
	goto loc_82699BD4;
loc_82699B70:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82699bd0
	if (!ctx.cr6.gt) goto loc_82699BD0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82699bb8
	if (!ctx.cr6.gt) goto loc_82699BB8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82699bd0
	if (!ctx.cr6.eq) goto loc_82699BD0;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82699b98
	if (!ctx.cr0.eq) goto loc_82699B98;
	// li r3,4319
	ctx.r3.s64 = 4319;
	// b 0x82699bd4
	goto loc_82699BD4;
loc_82699B98:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826999d0
	ctx.lr = 0x82699BA8;
	sub_826999D0(ctx, base);
	// lbz r11,30(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 30);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// b 0x82699bc0
	goto loc_82699BC0;
loc_82699BB8:
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82699BC0:
	// li r10,4319
	ctx.r10.s64 = 4319;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82699bd4
	goto loc_82699BD4;
loc_82699BD0:
	// li r3,1167
	ctx.r3.s64 = 1167;
loc_82699BD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8269D0C0) {
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
	ctx.lr = 0x8269D0C8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8269D0F8;
	sub_826A2E60(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8269d118
	if (!ctx.cr6.eq) goto loc_8269D118;
loc_8269D100:
	// bl 0x826a33d0
	ctx.lr = 0x8269D104;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269D110;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8269d19c
	goto loc_8269D19C;
loc_8269D118:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8269d128
	if (ctx.cr6.eq) goto loc_8269D128;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8269d100
	if (ctx.cr6.eq) goto loc_8269D100;
loc_8269D128:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x8269d140
	if (ctx.cr6.gt) goto loc_8269D140;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
loc_8269D140:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a5ff8
	ctx.lr = 0x8269D164;
	sub_826A5FF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8269d198
	if (ctx.cr6.eq) goto loc_8269D198;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x8269d18c
	if (ctx.cr0.lt) goto loc_8269D18C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r26,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r26.u8);
	// b 0x8269d198
	goto loc_8269D198;
loc_8269D18C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826a5cb8
	ctx.lr = 0x8269D198;
	sub_826A5CB8(ctx, base);
loc_8269D198:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8269D19C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(__savegprlr_17) {
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
	// std r17,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, r17.u64);
	// std r18,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, r18.u64);
	// std r19,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, r19.u64);
	// std r20,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, r20.u64);
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, r21.u64);
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, r22.u64);
	// std r23,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, r23.u64);
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_16) {
	REX_FUNC_PROLOGUE();
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
	// stfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -128, f16.u64);
	// stfd f17,-120(r12)
	REX_STORE_U64(ctx.r12.u32 + -120, f17.u64);
	// stfd f18,-112(r12)
	REX_STORE_U64(ctx.r12.u32 + -112, f18.u64);
	// stfd f19,-104(r12)
	REX_STORE_U64(ctx.r12.u32 + -104, f19.u64);
	// stfd f20,-96(r12)
	REX_STORE_U64(ctx.r12.u32 + -96, f20.u64);
	// stfd f21,-88(r12)
	REX_STORE_U64(ctx.r12.u32 + -88, f21.u64);
	// stfd f22,-80(r12)
	REX_STORE_U64(ctx.r12.u32 + -80, f22.u64);
	// stfd f23,-72(r12)
	REX_STORE_U64(ctx.r12.u32 + -72, f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, f24.u64);
	// stfd f25,-56(r12)
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

DEFINE_REX_FUNC(__savevmx_21) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_67) {
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
	// lvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826B9690) {
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
	ctx.lr = 0x826B9698;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r5,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r5.u32);
	// li r25,0
	r25.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// stw r25,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r25.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r30,124
	r28.s64 = r30.s64 + 124;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82147138
	ctx.lr = 0x826B96D4;
	sub_82147138(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b63c0
	ctx.lr = 0x826B96E0;
	sub_826B63C0(ctx, base);
	// rlwinm r11,r3,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// divwu r9,r27,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? r27.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x826b9704
	if (!ctx.cr6.lt) goto loc_826B9704;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
loc_826B9704:
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x826b97e0
	if (ctx.cr6.lt) goto loc_826B97E0;
	// lwz r11,676(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x826b9738
	if (!ctx.cr6.gt) goto loc_826B9738;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9220
	ctx.lr = 0x826B9730;
	sub_826B9220(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_826B9738:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x826b97e0
	if (ctx.cr6.lt) goto loc_826B97E0;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b97e0
	if (!ctx.cr6.eq) goto loc_826B97E0;
loc_826B974C:
	// addi r4,r30,676
	ctx.r4.s64 = r30.s64 + 676;
	// lwz r3,672(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 672);
	// bl 0x826c13d8
	ctx.lr = 0x826B9758;
	sub_826C13D8(ctx, base);
	// lwz r11,676(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b976c
	if (!ctx.cr6.eq) goto loc_826B976C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826b974c
	if (ctx.cr6.eq) goto loc_826B974C;
loc_826B976C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b97a0
	if (!ctx.cr6.eq) goto loc_826B97A0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x826b9798
	if (ctx.cr6.lt) goto loc_826B9798;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b9220
	ctx.lr = 0x826B9790;
	sub_826B9220(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_826B9798:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b9738
	goto loc_826B9738;
loc_826B97A0:
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x826b97d8
	if (ctx.cr6.eq) goto loc_826B97D8;
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x826b97d8
	if (ctx.cr6.eq) goto loc_826B97D8;
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// ble cr6,0x826b97cc
	if (!ctx.cr6.gt) goto loc_826B97CC;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bgt cr6,0x826b97cc
	if (ctx.cr6.gt) goto loc_826B97CC;
	// lis r29,-16371
	r29.s64 = -1072889856;
	// ori r29,r29,10416
	r29.u64 = r29.u64 | 10416;
	// b 0x826b97dc
	goto loc_826B97DC;
loc_826B97CC:
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
	// b 0x826b97dc
	goto loc_826B97DC;
loc_826B97D8:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_826B97DC:
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
loc_826B97E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b9804
	goto loc_826B9804;
loc_826B9804:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x826b9850
	if (ctx.cr6.lt) goto loc_826B9850;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b9850
	if (ctx.cr6.eq) goto loc_826B9850;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,116(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B9834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,72(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 72);
	// lwz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 0);
	// add r4,r3,r7
	ctx.r4.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B984C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826B9850:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826C6718) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826C6720;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x826c677c
	if (ctx.cr6.eq) goto loc_826C677C;
loc_826C673C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c677c
	if (ctx.cr6.eq) goto loc_826C677C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x826C6754;
	sub_826A14C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a14c8
	ctx.lr = 0x826C6760;
	sub_826A14C8(ctx, base);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r28.s32, ctx.xer);
	// bne cr6,0x826c677c
	if (!ctx.cr6.eq) goto loc_826C677C;
	// lbzu r11,1(r29)
	ea = 1 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r29.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x826c673c
	if (!ctx.cr6.eq) goto loc_826C673C;
loc_826C677C:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x826c67a4
	if (!ctx.cr6.eq) goto loc_826C67A4;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826c67a4
	if (!ctx.cr6.eq) goto loc_826C67A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826C67A4:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a14c8
	ctx.lr = 0x826C67B0;
	sub_826A14C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a14c8
	ctx.lr = 0x826C67BC;
	sub_826A14C8(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x826c67cc
	if (ctx.cr6.lt) goto loc_826C67CC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826C67CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826CE2F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826CE300;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826ce320
	if (ctx.cr6.gt) goto loc_826CE320;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_826CE320:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ce384
	if (!ctx.cr6.gt) goto loc_826CE384;
	// li r30,0
	r30.s64 = 0;
loc_826CE334:
	// lwz r11,576(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 576);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826ce370
	if (!ctx.cr6.eq) goto loc_826CE370;
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r8,560(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwz r7,148(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,140(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x826e4530
	ctx.lr = 0x826CE368;
	sub_826E4530(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ce384
	if (ctx.cr6.lt) goto loc_826CE384;
loc_826CE370:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,152
	r30.s64 = r30.s64 + 152;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ce334
	if (ctx.cr6.lt) goto loc_826CE334;
loc_826CE384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826D4080) {
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
	ctx.lr = 0x826D4088;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,28(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r29,0
	r29.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r29
	r25.u64 = r29.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x826d40d4
	if (ctx.cr6.eq) goto loc_826D40D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826d40d4
	if (ctx.cr6.eq) goto loc_826D40D4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826d40d4
	if (ctx.cr6.eq) goto loc_826D40D4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826d40d4
	if (ctx.cr6.eq) goto loc_826D40D4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826d40e4
	if (!ctx.cr6.eq) goto loc_826D40E4;
loc_826D40D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_826D40E4:
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// sth r29,4(r30)
	REX_STORE_U16(r30.u32 + 4, r29.u16);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// sth r29,6(r30)
	REX_STORE_U16(r30.u32 + 6, r29.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stb r29,8(r30)
	REX_STORE_U8(r30.u32 + 8, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,9(r30)
	REX_STORE_U8(r30.u32 + 9, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r29,10(r30)
	REX_STORE_U8(r30.u32 + 10, r29.u8);
	// addi r24,r30,4
	r24.s64 = r30.s64 + 4;
	// stb r29,11(r30)
	REX_STORE_U8(r30.u32 + 11, r29.u8);
	// addi r23,r30,6
	r23.s64 = r30.s64 + 6;
	// stb r29,12(r30)
	REX_STORE_U8(r30.u32 + 12, r29.u8);
	// stb r29,13(r30)
	REX_STORE_U8(r30.u32 + 13, r29.u8);
	// stb r29,14(r30)
	REX_STORE_U8(r30.u32 + 14, r29.u8);
	// stb r29,15(r30)
	REX_STORE_U8(r30.u32 + 15, r29.u8);
	// bl 0x826d3d18
	ctx.lr = 0x826D4130;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4224
	if (ctx.cr6.lt) goto loc_826D4224;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D4150;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4224
	if (ctx.cr6.lt) goto loc_826D4224;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D4170;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4224
	if (ctx.cr6.lt) goto loc_826D4224;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_826D417C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d41d8
	if (!ctx.cr6.eq) goto loc_826D41D8;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D41AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d4224
	if (ctx.cr6.lt) goto loc_826D4224;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r25,r29
	r25.u64 = r29.u64;
	// ld r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U64(r22.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r22)
	REX_STORE_U64(r22.u32 + 8, ctx.r11.u64);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r8.u32);
loc_826D41D8:
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// extsb r10,r25
	ctx.r10.s64 = r25.s8;
	// extsb r11,r26
	ctx.r11.s64 = r26.s8;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lbzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// extsb r25,r8
	r25.s64 = ctx.r8.s8;
	// extsb r26,r6
	r26.s64 = ctx.r6.s8;
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(r26.s32, 8, ctx.xer);
	// stb r5,8(r7)
	REX_STORE_U8(ctx.r7.u32 + 8, ctx.r5.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// blt cr6,0x826d417c
	if (ctx.cr6.lt) goto loc_826D417C;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// extsb r11,r25
	ctx.r11.s64 = r25.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_826D4224:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826DE310) {
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
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826de35c
	if (ctx.cr6.eq) goto loc_826DE35C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826de35c
	if (ctx.cr6.eq) goto loc_826DE35C;
loc_826DE344:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826de374
	if (ctx.cr6.eq) goto loc_826DE374;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x826de344
	if (!ctx.cr6.eq) goto loc_826DE344;
loc_826DE35C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826DE374:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826de38c
	if (!ctx.cr6.eq) goto loc_826DE38C;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826DE38C:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826de3b0
	if (!ctx.cr6.eq) goto loc_826DE3B0;
	// lwz r11,36(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x826de3e4
	if (ctx.cr6.eq) goto loc_826DE3E4;
	// stw r8,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// b 0x826de3e4
	goto loc_826DE3E4;
loc_826DE3B0:
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826de3cc
	if (ctx.cr6.eq) goto loc_826DE3CC;
	// lwz r7,36(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r7,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826DE3CC:
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826de3e4
	if (ctx.cr6.eq) goto loc_826DE3E4;
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r7,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r7.u32);
loc_826DE3E4:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bne 0x826de3fc
	if (!ctx.cr0.eq) goto loc_826DE3FC;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_826DE3FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x826c68d8
	ctx.lr = 0x826DE40C;
	sub_826C68D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E23F8) {
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
	// li r3,824
	ctx.r3.s64 = 824;
	// bl 0x826e07e0
	ctx.lr = 0x826E2410;
	sub_826E07E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826e2430
	if (!ctx.cr6.eq) goto loc_826E2430;
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
loc_826E2430:
	// li r5,824
	ctx.r5.s64 = 824;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826E2440;
	sub_826A2E60(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,511
	ctx.r5.s64 = 511;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f13,10592(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 10592);
	ctx.f13.f64 = double(temp.f32);
	// li r3,61
	ctx.r3.s64 = 61;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 300, temp.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// sth r11,28(r31)
	REX_STORE_U16(r31.u32 + 28, ctx.r11.u16);
	// sth r11,30(r31)
	REX_STORE_U16(r31.u32 + 30, ctx.r11.u16);
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r6,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r6.u32);
	// stw r5,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r5.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// sth r11,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r11.u16);
	// stw r4,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// sth r9,110(r31)
	REX_STORE_U16(r31.u32 + 110, ctx.r9.u16);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// sth r8,108(r31)
	REX_STORE_U16(r31.u32 + 108, ctx.r8.u16);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stw r10,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// stw r11,656(r31)
	REX_STORE_U32(r31.u32 + 656, ctx.r11.u32);
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// stb r11,200(r31)
	REX_STORE_U8(r31.u32 + 200, ctx.r11.u8);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// sth r11,210(r31)
	REX_STORE_U16(r31.u32 + 210, ctx.r11.u16);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stw r10,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r10.u32);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r11.u32);
	// stw r7,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r7.u32);
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 396, temp.u32);
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
	// lis r6,-32145
	ctx.r6.s64 = -2106654720;
	// stw r11,784(r31)
	REX_STORE_U32(r31.u32 + 784, ctx.r11.u32);
	// lis r5,-32146
	ctx.r5.s64 = -2106720256;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// addi r4,r6,22888
	ctx.r4.s64 = ctx.r6.s64 + 22888;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// lis r3,-32145
	ctx.r3.s64 = -2106654720;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// addi r9,r5,8504
	ctx.r9.s64 = ctx.r5.s64 + 8504;
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// lis r8,-32145
	ctx.r8.s64 = -2106654720;
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// addi r7,r3,29360
	ctx.r7.s64 = ctx.r3.s64 + 29360;
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// addi r6,r8,28168
	ctx.r6.s64 = ctx.r8.s64 + 28168;
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
	// stw r11,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// stw r11,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// stw r11,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r11.u32);
	// stw r11,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r11.u32);
	// stw r10,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r10.u32);
	// stw r11,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r11.u32);
	// stw r11,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r11.u32);
	// stw r11,440(r31)
	REX_STORE_U32(r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// stw r11,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r11.u32);
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// stw r11,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r11.u32);
	// stw r4,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r4.u32);
	// stw r11,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r11.u32);
	// stw r11,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r11.u32);
	// stw r9,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r9.u32);
	// stw r11,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r11.u32);
	// stw r7,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r7.u32);
	// stw r6,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r6.u32);
	// stw r11,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r11.u32);
	// stw r11,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r11.u32);
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r11.u32);
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
	// stw r11,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r11.u32);
	// stw r11,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r11.u32);
	// stw r11,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r11.u32);
	// stw r11,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r11.u32);
	// stb r11,201(r31)
	REX_STORE_U8(r31.u32 + 201, ctx.r11.u8);
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r11.u32);
	// sth r11,580(r31)
	REX_STORE_U16(r31.u32 + 580, ctx.r11.u16);
	// stw r11,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r11.u32);
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
	// stw r11,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r11.u32);
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// stw r11,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r11.u32);
	// stw r11,624(r31)
	REX_STORE_U32(r31.u32 + 624, ctx.r11.u32);
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826FC640) {
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
	ctx.lr = 0x826FC648;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fc664
	if (!ctx.cr6.eq) goto loc_826FC664;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cf0
	return;
loc_826FC664:
	// lwz r10,22260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22260);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826fc680
	if (!ctx.cr6.eq) goto loc_826FC680;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cf0
	return;
loc_826FC680:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r8,22112(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 22112);
	// lwz r9,14804(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 14804);
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r6,r10,39848
	ctx.r6.u64 = ctx.r10.u64 | 39848;
	// lwz r5,22256(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 22256);
	// addic r30,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	r30.s64 = ctx.r8.s64 + -1;
	// lwz r10,22136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22136);
	// neg r3,r9
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lwz r31,156(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// subfe r8,r30,r8
	temp.u8 = (~r30.u32 + ctx.r8.u32 < ~r30.u32) | (~r30.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~r30.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r29,160(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r28,22292(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 22292);
	// andc r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r9.u64;
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,22296(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 22296);
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r27,22300(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 22300);
	// lwz r26,22304(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 22304);
	// lwz r25,22140(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 22140);
	// lwz r24,22148(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 22148);
	// lwz r23,22144(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 22144);
	// lwz r22,22152(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 22152);
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// stw r25,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r25.u32);
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r24.u32);
	// stw r23,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r23.u32);
	// stw r22,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r22.u32);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x82716ae0
	ctx.lr = 0x826FC72C;
	sub_82716AE0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8270BE30) {
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
	ctx.lr = 0x8270BE38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r30,1
	r30.s64 = 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270beb8
	if (!ctx.cr6.lt) goto loc_8270BEB8;
loc_8270BE60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270beb8
	if (ctx.cr6.eq) goto loc_8270BEB8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8270bea8
	if (!ctx.cr0.lt) goto loc_8270BEA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270BEA8;
	sub_82725E38(ctx, base);
loc_8270BEA8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270be60
	if (ctx.cr6.gt) goto loc_8270BE60;
loc_8270BEB8:
	// subfic r11,r29,64
	ctx.xer.ca = r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r29.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8270bef0
	if (!ctx.cr0.lt) goto loc_8270BEF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270BEF0;
	sub_82725E38(ctx, base);
loc_8270BEF0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8270bf04
	if (!ctx.cr6.eq) goto loc_8270BF04;
	// stw r30,284(r27)
	REX_STORE_U32(r27.u32 + 284, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8270BF04:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270bf78
	if (!ctx.cr6.lt) goto loc_8270BF78;
loc_8270BF20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270bf78
	if (ctx.cr6.eq) goto loc_8270BF78;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8270bf68
	if (!ctx.cr0.lt) goto loc_8270BF68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270BF68;
	sub_82725E38(ctx, base);
loc_8270BF68:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270bf20
	if (ctx.cr6.gt) goto loc_8270BF20;
loc_8270BF78:
	// subfic r11,r29,64
	ctx.xer.ca = r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r29.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8270bfb0
	if (!ctx.cr0.lt) goto loc_8270BFB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270BFB0;
	sub_82725E38(ctx, base);
loc_8270BFB0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8270bfc8
	if (!ctx.cr6.eq) goto loc_8270BFC8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,284(r27)
	REX_STORE_U32(r27.u32 + 284, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8270BFC8:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270c03c
	if (!ctx.cr6.lt) goto loc_8270C03C;
loc_8270BFE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c03c
	if (ctx.cr6.eq) goto loc_8270C03C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8270c02c
	if (!ctx.cr0.lt) goto loc_8270C02C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C02C;
	sub_82725E38(ctx, base);
loc_8270C02C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270bfe4
	if (ctx.cr6.gt) goto loc_8270BFE4;
loc_8270C03C:
	// subfic r11,r29,64
	ctx.xer.ca = r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r29.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x8270c074
	if (!ctx.cr0.lt) goto loc_8270C074;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C074;
	sub_82725E38(ctx, base);
loc_8270C074:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8270c090
	if (!ctx.cr6.eq) goto loc_8270C090;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,22516(r27)
	REX_STORE_U32(r27.u32 + 22516, r30.u32);
	// stw r11,284(r27)
	REX_STORE_U32(r27.u32 + 284, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8270C090:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8270c100
	if (!ctx.cr6.lt) goto loc_8270C100;
loc_8270C0A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270c100
	if (ctx.cr6.eq) goto loc_8270C100;
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
	// bge 0x8270c0f0
	if (!ctx.cr0.lt) goto loc_8270C0F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C0F0;
	sub_82725E38(ctx, base);
loc_8270C0F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8270c0a8
	if (ctx.cr6.gt) goto loc_8270C0A8;
loc_8270C100:
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
	// bge 0x8270c138
	if (!ctx.cr0.lt) goto loc_8270C138;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270C138;
	sub_82725E38(ctx, base);
loc_8270C138:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x8270c148
	if (ctx.cr6.eq) goto loc_8270C148;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8270C148:
	// stw r11,284(r27)
	REX_STORE_U32(r27.u32 + 284, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82725E38) {
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
loc_82725E4C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82725f00
	if (ctx.cr6.lt) goto loc_82725F00;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82725eac
	if (ctx.cr6.gt) goto loc_82725EAC;
loc_82725E68:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r6,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r6.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82725e68
	if (!ctx.cr6.gt) goto loc_82725E68;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82725f6c
	if (!ctx.cr6.lt) goto loc_82725F6C;
loc_82725EAC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82725ec4
	if (!ctx.cr6.eq) goto loc_82725EC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725a90
	ctx.lr = 0x82725EC0;
	sub_82725A90(ctx, base);
	// b 0x82725e4c
	goto loc_82725E4C;
loc_82725EC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,-16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -16, ctx.xer);
	// bge cr6,0x82725f6c
	if (!ctx.cr6.lt) goto loc_82725F6C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82725ee4
	if (!ctx.cr6.eq) goto loc_82725EE4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_82725EE4:
	// li r11,127
	ctx.r11.s64 = 127;
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
loc_82725F00:
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
loc_82725F6C:
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

DEFINE_REX_FUNC(sub_82734070) {
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
	ctx.lr = 0x82734078;
	// lhz r11,50(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r5,1316(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 1316);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r28,r11,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r31,1312(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 1312);
	// rlwinm r9,r11,1,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// mullw r10,r28,r6
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(ctx.r6.s32);
	// stw r7,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// stw r28,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, r28.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r30,r9,r6
	r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r17,r31,r3
	r17.u64 = r31.u64 + ctx.r3.u64;
	// add r18,r5,r8
	r18.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// beq cr6,0x827340dc
	if (ctx.cr6.eq) goto loc_827340DC;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// rlwinm r8,r28,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r29,r9,r8
	r29.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_827340DC:
	// stw r10,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r10.u32);
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// stw r6,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r6.u32);
	// bge cr6,0x82734660
	if (!ctx.cr6.lt) goto loc_82734660;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r14,r30,2,0,29
	r14.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-31320
	ctx.r11.s64 = ctx.r11.s64 + -31320;
	// b 0x82734110
	goto loc_82734110;
loc_82734108:
	// lwz r9,-204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r14,-208(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
loc_82734110:
	// lwz r7,-196(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r6,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r7,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r7.u32);
	// beq cr6,0x82734624
	if (ctx.cr6.eq) goto loc_82734624;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// lwz r6,-220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// and r3,r5,r28
	ctx.r3.u64 = ctx.r5.u64 & r28.u64;
	// stw r9,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r9.u32);
	// add r5,r10,r14
	ctx.r5.u64 = ctx.r10.u64 + r14.u64;
	// stw r8,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r8.u32);
	// stw r3,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r3.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r5.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r3.u32);
	// stw r6,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r6.u32);
	// li r15,0
	r15.s64 = 0;
	// stw r10,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r10.u32);
	// b 0x82734174
	goto loc_82734174;
loc_82734170:
	// lwz r31,-224(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
loc_82734174:
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U64(r17.u32 + 0);
	// addi r9,r11,272
	ctx.r9.s64 = ctx.r11.s64 + 272;
	// lwz r6,-192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// addi r8,r11,272
	ctx.r8.s64 = ctx.r11.s64 + 272;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// addi r27,r11,272
	r27.s64 = ctx.r11.s64 + 272;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// addi r23,r11,272
	r23.s64 = ctx.r11.s64 + 272;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// addi r24,r11,272
	r24.s64 = ctx.r11.s64 + 272;
	// and r29,r10,r12
	r29.u64 = ctx.r10.u64 & ctx.r12.u64;
	// srawi r10,r15,31
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r15.s32 >> 31;
	// clrldi r26,r29,56
	r26.u64 = r29.u64 & 0xFF;
	// rldicl r25,r29,56,56
	r25.u64 = __builtin_rotateleft64(r29.u64, 56) & 0xFF;
	// rldicl r30,r29,48,56
	r30.u64 = __builtin_rotateleft64(r29.u64, 48) & 0xFF;
	// rldicl r5,r29,32,56
	ctx.r5.u64 = __builtin_rotateleft64(r29.u64, 32) & 0xFF;
	// rldicl r3,r29,40,56
	ctx.r3.u64 = __builtin_rotateleft64(r29.u64, 40) & 0xFF;
	// lbzx r9,r26,r9
	ctx.r9.u64 = REX_LOAD_U8(r26.u32 + ctx.r9.u32);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lbzx r8,r25,r8
	ctx.r8.u64 = REX_LOAD_U8(r25.u32 + ctx.r8.u32);
	// rlwinm r22,r10,3,28,28
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbzx r27,r30,r27
	r27.u64 = REX_LOAD_U8(r30.u32 + r27.u32);
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lbzx r9,r3,r24
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + r24.u32);
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r8,r8,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// subf r22,r22,r17
	r22.u64 = r17.u64 - r22.u64;
	// or r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 | r27.u64;
	// lbzx r27,r5,r23
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// rldicr r23,r8,8,55
	r23.u64 = __builtin_rotateleft64(ctx.r8.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// or r9,r23,r9
	ctx.r9.u64 = r23.u64 | ctx.r9.u64;
	// addi r24,r10,1
	r24.s64 = ctx.r10.s64 + 1;
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 | r27.u64;
	// ld r27,0(r22)
	r27.u64 = REX_LOAD_U64(r22.u32 + 0);
	// rldicl r8,r29,24,56
	ctx.r8.u64 = __builtin_rotateleft64(r29.u64, 24) & 0xFF;
	// and r19,r27,r12
	r19.u64 = r27.u64 & ctx.r12.u64;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// addi r23,r11,272
	r23.s64 = ctx.r11.s64 + 272;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// addi r21,r11,352
	r21.s64 = ctx.r11.s64 + 352;
	// subf r6,r6,r17
	ctx.r6.u64 = r17.u64 - ctx.r6.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r23,r8,r23
	r23.u64 = REX_LOAD_U8(ctx.r8.u32 + r23.u32);
	// rldicr r9,r9,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r29,r29,16,48
	r29.u64 = __builtin_rotateleft64(r29.u64, 16) & 0xFFFF;
	// oris r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 2139029504;
	// ld r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// or r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 | r23.u64;
	// ldx r10,r10,r21
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + r21.u32);
	// rlwinm r29,r29,0,25,25
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40;
	// ori r12,r12,32639
	ctx.r12.u64 = ctx.r12.u64 | 32639;
	// and r16,r9,r10
	r16.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r27,r6,r12
	r27.u64 = ctx.r6.u64 & ctx.r12.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x827342bc
	if (ctx.cr6.eq) goto loc_827342BC;
	// lwz r10,348(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 348);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x827342bc
	if (!ctx.cr6.eq) goto loc_827342BC;
	// rldicl r10,r16,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r16.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r16,0(r18)
	REX_STORE_U8(r18.u32 + 0, r16.u8);
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r10,1(r18)
	REX_STORE_U8(r18.u32 + 1, ctx.r10.u8);
	// rldicl r5,r8,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r8,2(r18)
	REX_STORE_U8(r18.u32 + 2, ctx.r8.u8);
	// rldicl r10,r5,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r5,3(r18)
	REX_STORE_U8(r18.u32 + 3, ctx.r5.u8);
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r10,4(r18)
	REX_STORE_U8(r18.u32 + 4, ctx.r10.u8);
	// stb r8,5(r18)
	REX_STORE_U8(r18.u32 + 5, ctx.r8.u8);
	// b 0x827345d4
	goto loc_827345D4;
loc_827342BC:
	// lwz r9,348(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 348);
	// li r20,255
	r20.s64 = 255;
	// li r21,255
	r21.s64 = 255;
	// add r10,r14,r9
	ctx.r10.u64 = r14.u64 + ctx.r9.u64;
	// li r22,255
	r22.s64 = 255;
	// li r23,255
	r23.s64 = 255;
	// lwzx r6,r14,r9
	ctx.r6.u64 = REX_LOAD_U32(r14.u32 + ctx.r9.u32);
	// li r29,255
	r29.s64 = 255;
	// li r28,255
	r28.s64 = 255;
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// beq cr6,0x82734380
	if (ctx.cr6.eq) goto loc_82734380;
	// lwzx r31,r31,r9
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// subf r31,r6,r31
	r31.u64 = r31.u64 - ctx.r6.u64;
	// or r31,r31,r7
	r31.u64 = r31.u64 | ctx.r7.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82734324
	if (!ctx.cr6.eq) goto loc_82734324;
	// rldicl r31,r27,40,24
	r31.u64 = __builtin_rotateleft64(r27.u64, 40) & 0xFFFFFFFFFF;
	// std r11,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r11.u64);
	// addi r20,r11,192
	r20.s64 = ctx.r11.s64 + 192;
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r31,r31,24
	r31.u64 = r31.u32 & 0xFF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lbzx r31,r31,r20
	r31.u64 = REX_LOAD_U8(r31.u32 + r20.u32);
	// lbzx r20,r8,r11
	r20.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// ld r11,-176(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// or r20,r31,r20
	r20.u64 = r31.u64 | r20.u64;
loc_82734324:
	// lwz r31,-4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// subf r31,r6,r31
	r31.u64 = r31.u64 - ctx.r6.u64;
	// or r31,r31,r24
	r31.u64 = r31.u64 | r24.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82734380
	if (!ctx.cr6.eq) goto loc_82734380;
	// rldicl r7,r19,32,32
	ctx.r7.u64 = __builtin_rotateleft64(r19.u64, 32) & 0xFFFFFFFF;
	// lbzx r31,r8,r11
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// std r11,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stw r4,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r4.u32);
	// clrlwi r20,r20,24
	r20.u64 = r20.u32 & 0xFF;
	// lwz r11,-184(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// stw r7,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r7.u32);
	// std r10,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r10.u64);
	// lwz r10,-176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r7,-188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// ld r10,-184(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// or r31,r11,r31
	r31.u64 = ctx.r11.u64 | r31.u64;
	// ld r11,-160(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// and r20,r31,r20
	r20.u64 = r31.u64 & r20.u64;
loc_82734380:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(r31.s32, 16384, ctx.xer);
	// beq cr6,0x82734404
	if (ctx.cr6.eq) goto loc_82734404;
	// lwz r10,-224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827343d0
	if (!ctx.cr6.eq) goto loc_827343D0;
	// rldicl r10,r27,48,16
	ctx.r10.u64 = __builtin_rotateleft64(r27.u64, 48) & 0xFFFFFFFFFFFF;
	// std r11,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// addi r21,r11,192
	r21.s64 = ctx.r11.s64 + 192;
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lbzx r10,r10,r21
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r21.u32);
	// lbzx r21,r5,r11
	r21.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// ld r11,-160(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// or r21,r10,r21
	r21.u64 = ctx.r10.u64 | r21.u64;
loc_827343D0:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r31.s32, ctx.xer);
	// bne cr6,0x82734404
	if (!ctx.cr6.eq) goto loc_82734404;
	// std r11,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r11.u64);
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lbzx r4,r5,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// clrlwi r21,r21,24
	r21.u64 = r21.u32 & 0xFF;
	// lbzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stw r4,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r4.u32);
	// lwz r11,-176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// and r21,r10,r21
	r21.u64 = ctx.r10.u64 & r21.u64;
	// ld r11,-160(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
loc_82734404:
	// lwz r10,-212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// beq cr6,0x82734468
	if (ctx.cr6.eq) goto loc_82734468;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82734434
	if (!ctx.cr6.eq) goto loc_82734434;
	// addi r6,r11,192
	ctx.r6.s64 = ctx.r11.s64 + 192;
	// addi r22,r11,128
	r22.s64 = ctx.r11.s64 + 128;
	// lbzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// lbzx r6,r3,r22
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + r22.u32);
	// or r22,r8,r6
	r22.u64 = ctx.r8.u64 | ctx.r6.u64;
loc_82734434:
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// or r8,r6,r24
	ctx.r8.u64 = ctx.r6.u64 | r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82734468
	if (!ctx.cr6.eq) goto loc_82734468;
	// rldicl r8,r19,48,16
	ctx.r8.u64 = __builtin_rotateleft64(r19.u64, 48) & 0xFFFFFFFFFFFF;
	// lbzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r22,r22,24
	r22.u64 = r22.u32 & 0xFF;
	// lbzx r3,r8,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// or r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 | ctx.r6.u64;
	// and r22,r8,r22
	r22.u64 = ctx.r8.u64 & r22.u64;
loc_82734468:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x827344b0
	if (ctx.cr6.eq) goto loc_827344B0;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82734490
	if (!ctx.cr6.eq) goto loc_82734490;
	// addi r8,r11,192
	ctx.r8.s64 = ctx.r11.s64 + 192;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// lbzx r3,r5,r8
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbzx r8,r30,r6
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + ctx.r6.u32);
	// or r23,r3,r8
	r23.u64 = ctx.r3.u64 | ctx.r8.u64;
loc_82734490:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827344b0
	if (!ctx.cr6.eq) goto loc_827344B0;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// lbzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// clrlwi r8,r23,24
	ctx.r8.u64 = r23.u32 & 0xFF;
	// lbzx r6,r5,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// and r23,r5,r8
	r23.u64 = ctx.r5.u64 & ctx.r8.u64;
loc_827344B0:
	// lwz r9,-216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// lwz r10,352(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 352);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// beq cr6,0x82734570
	if (ctx.cr6.eq) goto loc_82734570;
	// lwz r6,-192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r5,-220(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// subf r3,r9,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r9.u64;
	// or r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 | ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82734520
	if (!ctx.cr6.eq) goto loc_82734520;
	// rldicl r10,r27,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r27.u64, 56) & 0xFFFFFFFFFFFFFF;
	// addi r6,r11,192
	ctx.r6.s64 = ctx.r11.s64 + 192;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// addi r31,r11,192
	r31.s64 = ctx.r11.s64 + 192;
	// addi r30,r11,128
	r30.s64 = ctx.r11.s64 + 128;
	// lbzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// lbzx r5,r25,r3
	ctx.r5.u64 = REX_LOAD_U8(r25.u32 + ctx.r3.u32);
	// lbzx r3,r10,r31
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + r31.u32);
	// or r29,r6,r5
	r29.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lbzx r10,r26,r30
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + r30.u32);
	// or r28,r3,r10
	r28.u64 = ctx.r3.u64 | ctx.r10.u64;
loc_82734520:
	// lwz r10,-4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// or r8,r9,r24
	ctx.r8.u64 = ctx.r9.u64 | r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82734570
	if (!ctx.cr6.eq) goto loc_82734570;
	// rldicl r10,r19,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r19.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lbzx r9,r25,r11
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + ctx.r11.u32);
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lbzx r6,r26,r11
	ctx.r6.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r3,r19,24
	ctx.r3.u64 = r19.u32 & 0xFF;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// clrlwi r31,r29,24
	r31.u64 = r29.u32 & 0xFF;
	// clrlwi r30,r28,24
	r30.u64 = r28.u32 & 0xFF;
	// lbzx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbzx r5,r3,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// or r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// and r29,r3,r31
	r29.u64 = ctx.r3.u64 & r31.u64;
	// and r28,r10,r30
	r28.u64 = ctx.r10.u64 & r30.u64;
loc_82734570:
	// rldicl r10,r16,56,8
	ctx.r10.u64 = __builtin_rotateleft64(r16.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lwz r31,-224(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// clrlwi r9,r16,24
	ctx.r9.u64 = r16.u32 & 0xFF;
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rldicl r5,r8,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// rldicl r10,r5,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// rldicl r5,r10,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// and r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 & r20.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stb r9,0(r18)
	REX_STORE_U8(r18.u32 + 0, ctx.r9.u8);
	// and r9,r8,r23
	ctx.r9.u64 = ctx.r8.u64 & r23.u64;
	// and r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 & r28.u64;
	// lwz r28,-168(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & r21.u64;
	// stb r9,3(r18)
	REX_STORE_U8(r18.u32 + 3, ctx.r9.u8);
	// and r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 & r22.u64;
	// stb r5,5(r18)
	REX_STORE_U8(r18.u32 + 5, ctx.r5.u8);
	// and r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 & r29.u64;
	// stb r6,1(r18)
	REX_STORE_U8(r18.u32 + 1, ctx.r6.u8);
	// stb r3,2(r18)
	REX_STORE_U8(r18.u32 + 2, ctx.r3.u8);
	// stb r8,4(r18)
	REX_STORE_U8(r18.u32 + 4, ctx.r8.u8);
loc_827345D4:
	// lwz r10,-220(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r8,-216(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// lwz r6,-212(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// stw r9,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r9.u32);
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// stw r5,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r5.u32);
	// stw r3,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r3.u32);
	// addi r14,r14,8
	r14.s64 = r14.s64 + 8;
	// stw r10,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r10.u32);
	// addi r18,r18,6
	r18.s64 = r18.s64 + 6;
	// addi r17,r17,8
	r17.s64 = r17.s64 + 8;
	// bdnz 0x82734170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82734170;
	// lwz r9,-204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// lwz r14,-208(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// lwz r8,-200(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// lwz r27,52(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
loc_82734624:
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r7,r10,r14
	ctx.r7.u64 = ctx.r10.u64 + r14.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r7.u32);
	// stw r6,-204(r1)
	REX_STORE_U32(ctx.r1.u32 + -204, ctx.r6.u32);
	// bne cr6,0x8273464c
	if (!ctx.cr6.eq) goto loc_8273464C;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,-200(r1)
	REX_STORE_U32(ctx.r1.u32 + -200, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_8273464C:
	// lwz r9,-196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -196);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,-196(r1)
	REX_STORE_U32(ctx.r1.u32 + -196, ctx.r9.u32);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// blt cr6,0x82734108
	if (ctx.cr6.lt) goto loc_82734108;
loc_82734660:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82759A60) {
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
	ctx.lr = 0x82759A68;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-32106
	r21.s64 = -2104098816;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,30032(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 30032);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82759AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,30032(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 30032);
	// addi r24,r30,8
	r24.s64 = r30.s64 + 8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82759AC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,30032(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 30032);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82759AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,30032(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 30032);
	// addi r23,r29,8
	r23.s64 = r29.s64 + 8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82759B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,30032(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 30032);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82759B24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,30032(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 30032);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82759B40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// adde r11,r7,r8
	temp.u8 = (ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82759b74
	if (ctx.cr6.gt) goto loc_82759B74;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82759B74:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82759b90
	if (ctx.cr6.gt) goto loc_82759B90;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82759B90:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwzx r7,r8,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82759BB0:
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x82759bd4
	if (!ctx.cr6.lt) goto loc_82759BD4;
	// cmpwi cr6,r7,64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 64, ctx.xer);
	// blt cr6,0x82759bd4
	if (ctx.cr6.lt) goto loc_82759BD4;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stwx r5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
loc_82759BD4:
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x82759be4
	if (!ctx.cr6.lt) goto loc_82759BE4;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stwx r6,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_82759BE4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bdnz 0x82759bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82759BB0;
	// lis r21,-32106
	r21.s64 = -2104098816;
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r22,r22,1,0,30
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,30036(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 30036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82759C14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,30036(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 30036);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82759C30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,30036(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 30036);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82759C4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,30036(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 30036);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82759C68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,30036(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 30036);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82759C84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,30036(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 30036);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82759CA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82762FF0) {
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
	ctx.lr = 0x82762FF8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// lwz r11,20628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20628);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// srawi r29,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r29.s64 = r23.s32 >> 1;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// lwz r30,208(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r10,20624(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20624);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// lbz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mullw r30,r5,r30
	r30.s64 = int64_t(ctx.r5.s32) * int64_t(r30.s32);
	// lwz r5,328(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r26,3764(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// lwz r28,6576(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 6576);
	// lwz r27,3760(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r19,336(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 336);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// add r20,r7,r10
	r20.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// srawi r3,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	ctx.r3.s64 = r21.s32 >> 1;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// add r16,r9,r7
	r16.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r5,r20,r6
	ctx.r5.s64 = int64_t(r20.s32) * int64_t(ctx.r6.s32);
	// add r9,r30,r3
	ctx.r9.u64 = r30.u64 + ctx.r3.u64;
	// add r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r16,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 + r29.u64;
	// not r3,r22
	ctx.r3.u64 = ~r22.u64;
	// lwz r22,84(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// not r4,r23
	ctx.r4.u64 = ~r23.u64;
	// not r7,r21
	ctx.r7.u64 = ~r21.u64;
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// add r30,r26,r11
	r30.u64 = r26.u64 + ctx.r11.u64;
	// add r23,r5,r28
	r23.u64 = ctx.r5.u64 + r28.u64;
	// add r28,r9,r10
	r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// clrlwi r21,r4,31
	r21.u64 = ctx.r4.u32 & 0x1;
	// clrlwi r20,r3,31
	r20.u64 = ctx.r3.u32 & 0x1;
	// clrlwi r15,r7,31
	r15.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r14,r8,31
	r14.u64 = ctx.r8.u32 & 0x1;
	// add r16,r27,r11
	r16.u64 = r27.u64 + ctx.r11.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x827630d8
	if (ctx.cr6.eq) goto loc_827630D8;
	// lbz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 0);
	// clrlwi r19,r11,29
	r19.u64 = ctx.r11.u32 & 0x7;
loc_827630D8:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827630fc
	if (ctx.cr6.eq) goto loc_827630FC;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,732
	ctx.r10.s64 = ctx.r11.s64 + 732;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r11,r31
	r22.u64 = ctx.r11.u64 + r31.u64;
	// b 0x82763100
	goto loc_82763100;
loc_827630FC:
	// addi r22,r31,2904
	r22.s64 = r31.s64 + 2904;
loc_82763100:
	// lbz r11,19(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 19);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82763440
	if (ctx.cr6.eq) goto loc_82763440;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82763190
	if (ctx.cr6.eq) goto loc_82763190;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763144
	if (!ctx.cr0.lt) goto loc_82763144;
	// bl 0x82725e38
	ctx.lr = 0x82763144;
	sub_82725E38(ctx, base);
loc_82763144:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82763154
	if (!ctx.cr6.eq) goto loc_82763154;
	// li r19,0
	r19.s64 = 0;
	// b 0x82763198
	goto loc_82763198;
loc_82763154:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8276317c
	if (!ctx.cr0.lt) goto loc_8276317C;
	// bl 0x82725e38
	ctx.lr = 0x8276317C;
	sub_82725E38(ctx, base);
loc_8276317C:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x827631e0
	goto loc_827631E0;
loc_82763190:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x827631e0
	if (!ctx.cr6.eq) goto loc_827631E0;
loc_82763198:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1832(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1832);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827631BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827631E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827631E0:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x827632f8
	if (!ctx.cr6.eq) goto loc_827632F8;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82763200;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763228
	if (!ctx.cr0.lt) goto loc_82763228;
	// bl 0x82725e38
	ctx.lr = 0x82763228;
	sub_82725E38(ctx, base);
loc_82763228:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x827632b4
	if (ctx.cr6.eq) goto loc_827632B4;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763258
	if (!ctx.cr0.lt) goto loc_82763258;
	// bl 0x82725e38
	ctx.lr = 0x82763258;
	sub_82725E38(ctx, base);
loc_82763258:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x82763288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827632AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x827632f8
	if (ctx.cr6.eq) goto loc_827632F8;
loc_827632B4:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827632D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827632F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827632F8:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x82763410
	if (!ctx.cr6.eq) goto loc_82763410;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82763318;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763340
	if (!ctx.cr0.lt) goto loc_82763340;
	// bl 0x82725e38
	ctx.lr = 0x82763340;
	sub_82725E38(ctx, base);
loc_82763340:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x827633cc
	if (ctx.cr6.eq) goto loc_827633CC;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763370
	if (!ctx.cr0.lt) goto loc_82763370;
	// bl 0x82725e38
	ctx.lr = 0x82763370;
	sub_82725E38(ctx, base);
loc_82763370:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x827633A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827633C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82763410
	if (ctx.cr6.eq) goto loc_82763410;
loc_827633CC:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827633EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82763410:
	// lwz r11,3104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3104);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276343C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82763464
	goto loc_82763464;
loc_82763440:
	// lwz r11,3108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3108);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82763464:
	// lbz r11,18(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 18);
	// addi r27,r25,8
	r27.s64 = r25.s64 + 8;
	// addi r26,r28,8
	r26.s64 = r28.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827637ac
	if (ctx.cr6.eq) goto loc_827637AC;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827634fc
	if (ctx.cr6.eq) goto loc_827634FC;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x827634b0
	if (!ctx.cr0.lt) goto loc_827634B0;
	// bl 0x82725e38
	ctx.lr = 0x827634B0;
	sub_82725E38(ctx, base);
loc_827634B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x827634c0
	if (!ctx.cr6.eq) goto loc_827634C0;
	// li r19,0
	r19.s64 = 0;
	// b 0x82763504
	goto loc_82763504;
loc_827634C0:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x827634e8
	if (!ctx.cr0.lt) goto loc_827634E8;
	// bl 0x82725e38
	ctx.lr = 0x827634E8;
	sub_82725E38(ctx, base);
loc_827634E8:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x8276354c
	goto loc_8276354C;
loc_827634FC:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8276354c
	if (!ctx.cr6.eq) goto loc_8276354C;
loc_82763504:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1832(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1832);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276354C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8276354C:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x82763664
	if (!ctx.cr6.eq) goto loc_82763664;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8276356C;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763594
	if (!ctx.cr0.lt) goto loc_82763594;
	// bl 0x82725e38
	ctx.lr = 0x82763594;
	sub_82725E38(ctx, base);
loc_82763594:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82763620
	if (ctx.cr6.eq) goto loc_82763620;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x827635c4
	if (!ctx.cr0.lt) goto loc_827635C4;
	// bl 0x82725e38
	ctx.lr = 0x827635C4;
	sub_82725E38(ctx, base);
loc_827635C4:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x827635F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82763664
	if (ctx.cr6.eq) goto loc_82763664;
loc_82763620:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763640;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82763664:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8276377c
	if (!ctx.cr6.eq) goto loc_8276377C;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82763684;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x827636ac
	if (!ctx.cr0.lt) goto loc_827636AC;
	// bl 0x82725e38
	ctx.lr = 0x827636AC;
	sub_82725E38(ctx, base);
loc_827636AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82763738
	if (ctx.cr6.eq) goto loc_82763738;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x827636dc
	if (!ctx.cr0.lt) goto loc_827636DC;
	// bl 0x82725e38
	ctx.lr = 0x827636DC;
	sub_82725E38(ctx, base);
loc_827636DC:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x8276370C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8276377c
	if (ctx.cr6.eq) goto loc_8276377C;
loc_82763738:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276377C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8276377C:
	// lwz r11,3104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3104);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827637A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827637d4
	goto loc_827637D4;
loc_827637AC:
	// lwz r11,3108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3108);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827637D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827637D4:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lbz r10,17(r18)
	ctx.r10.u64 = REX_LOAD_U8(r18.u32 + 17);
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// add r27,r11,r26
	r27.u64 = ctx.r11.u64 + r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82763b20
	if (ctx.cr6.eq) goto loc_82763B20;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82763870
	if (ctx.cr6.eq) goto loc_82763870;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763824
	if (!ctx.cr0.lt) goto loc_82763824;
	// bl 0x82725e38
	ctx.lr = 0x82763824;
	sub_82725E38(ctx, base);
loc_82763824:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82763834
	if (!ctx.cr6.eq) goto loc_82763834;
	// li r19,0
	r19.s64 = 0;
	// b 0x82763878
	goto loc_82763878;
loc_82763834:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8276385c
	if (!ctx.cr0.lt) goto loc_8276385C;
	// bl 0x82725e38
	ctx.lr = 0x8276385C;
	sub_82725E38(ctx, base);
loc_8276385C:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x827638c0
	goto loc_827638C0;
loc_82763870:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x827638c0
	if (!ctx.cr6.eq) goto loc_827638C0;
loc_82763878:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1832(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1832);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276389C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827638C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827638C0:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x827639d8
	if (!ctx.cr6.eq) goto loc_827639D8;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x827638E0;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763908
	if (!ctx.cr0.lt) goto loc_82763908;
	// bl 0x82725e38
	ctx.lr = 0x82763908;
	sub_82725E38(ctx, base);
loc_82763908:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82763994
	if (ctx.cr6.eq) goto loc_82763994;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763938
	if (!ctx.cr0.lt) goto loc_82763938;
	// bl 0x82725e38
	ctx.lr = 0x82763938;
	sub_82725E38(ctx, base);
loc_82763938:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x82763968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276398C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x827639d8
	if (ctx.cr6.eq) goto loc_827639D8;
loc_82763994:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827639B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827639D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827639D8:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x82763af0
	if (!ctx.cr6.eq) goto loc_82763AF0;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x827639F8;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763a20
	if (!ctx.cr0.lt) goto loc_82763A20;
	// bl 0x82725e38
	ctx.lr = 0x82763A20;
	sub_82725E38(ctx, base);
loc_82763A20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82763aac
	if (ctx.cr6.eq) goto loc_82763AAC;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763a50
	if (!ctx.cr0.lt) goto loc_82763A50;
	// bl 0x82725e38
	ctx.lr = 0x82763A50;
	sub_82725E38(ctx, base);
loc_82763A50:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x82763A80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82763af0
	if (ctx.cr6.eq) goto loc_82763AF0;
loc_82763AAC:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763ACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763AF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82763AF0:
	// lwz r11,3104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3104);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763B1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82763b48
	goto loc_82763B48;
loc_82763B20:
	// lwz r11,3108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3108);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763B48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82763B48:
	// lbz r11,16(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 16);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82763e90
	if (ctx.cr6.eq) goto loc_82763E90;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82763be0
	if (ctx.cr6.eq) goto loc_82763BE0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763b94
	if (!ctx.cr0.lt) goto loc_82763B94;
	// bl 0x82725e38
	ctx.lr = 0x82763B94;
	sub_82725E38(ctx, base);
loc_82763B94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82763ba4
	if (!ctx.cr6.eq) goto loc_82763BA4;
	// li r19,0
	r19.s64 = 0;
	// b 0x82763be8
	goto loc_82763BE8;
loc_82763BA4:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763bcc
	if (!ctx.cr0.lt) goto loc_82763BCC;
	// bl 0x82725e38
	ctx.lr = 0x82763BCC;
	sub_82725E38(ctx, base);
loc_82763BCC:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x82763c30
	goto loc_82763C30;
loc_82763BE0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x82763c30
	if (!ctx.cr6.eq) goto loc_82763C30;
loc_82763BE8:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1832(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1832);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763C30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82763C30:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x82763d48
	if (!ctx.cr6.eq) goto loc_82763D48;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82763C50;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763c78
	if (!ctx.cr0.lt) goto loc_82763C78;
	// bl 0x82725e38
	ctx.lr = 0x82763C78;
	sub_82725E38(ctx, base);
loc_82763C78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82763d04
	if (ctx.cr6.eq) goto loc_82763D04;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763ca8
	if (!ctx.cr0.lt) goto loc_82763CA8;
	// bl 0x82725e38
	ctx.lr = 0x82763CA8;
	sub_82725E38(ctx, base);
loc_82763CA8:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x82763CD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763CFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82763d48
	if (ctx.cr6.eq) goto loc_82763D48;
loc_82763D04:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82763D48:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x82763e60
	if (!ctx.cr6.eq) goto loc_82763E60;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82763D68;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763d90
	if (!ctx.cr0.lt) goto loc_82763D90;
	// bl 0x82725e38
	ctx.lr = 0x82763D90;
	sub_82725E38(ctx, base);
loc_82763D90:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82763e1c
	if (ctx.cr6.eq) goto loc_82763E1C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763dc0
	if (!ctx.cr0.lt) goto loc_82763DC0;
	// bl 0x82725e38
	ctx.lr = 0x82763DC0;
	sub_82725E38(ctx, base);
loc_82763DC0:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x82763DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763E14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82763e60
	if (ctx.cr6.eq) goto loc_82763E60;
loc_82763E1C:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763E3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763E60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82763E60:
	// lwz r11,3104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3104);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763E8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82763eb8
	goto loc_82763EB8;
loc_82763E90:
	// lwz r11,3108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3108);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82763EB8:
	// lbz r11,15(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 15);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827641f8
	if (ctx.cr6.eq) goto loc_827641F8;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82763f48
	if (ctx.cr6.eq) goto loc_82763F48;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763efc
	if (!ctx.cr0.lt) goto loc_82763EFC;
	// bl 0x82725e38
	ctx.lr = 0x82763EFC;
	sub_82725E38(ctx, base);
loc_82763EFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82763f0c
	if (!ctx.cr6.eq) goto loc_82763F0C;
	// li r19,0
	r19.s64 = 0;
	// b 0x82763f50
	goto loc_82763F50;
loc_82763F0C:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763f34
	if (!ctx.cr0.lt) goto loc_82763F34;
	// bl 0x82725e38
	ctx.lr = 0x82763F34;
	sub_82725E38(ctx, base);
loc_82763F34:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x82763f98
	goto loc_82763F98;
loc_82763F48:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x82763f98
	if (!ctx.cr6.eq) goto loc_82763F98;
loc_82763F50:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1832(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1832);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763F74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82763F98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82763F98:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x827640b0
	if (!ctx.cr6.eq) goto loc_827640B0;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82763FB8;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82763fe0
	if (!ctx.cr0.lt) goto loc_82763FE0;
	// bl 0x82725e38
	ctx.lr = 0x82763FE0;
	sub_82725E38(ctx, base);
loc_82763FE0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8276406c
	if (ctx.cr6.eq) goto loc_8276406C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82764010
	if (!ctx.cr0.lt) goto loc_82764010;
	// bl 0x82725e38
	ctx.lr = 0x82764010;
	sub_82725E38(ctx, base);
loc_82764010:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x82764040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82764064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x827640b0
	if (ctx.cr6.eq) goto loc_827640B0;
loc_8276406C:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276408C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827640B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827640B0:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x827641c8
	if (!ctx.cr6.eq) goto loc_827641C8;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x827640D0;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x827640f8
	if (!ctx.cr0.lt) goto loc_827640F8;
	// bl 0x82725e38
	ctx.lr = 0x827640F8;
	sub_82725E38(ctx, base);
loc_827640F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82764184
	if (ctx.cr6.eq) goto loc_82764184;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82764128
	if (!ctx.cr0.lt) goto loc_82764128;
	// bl 0x82725e38
	ctx.lr = 0x82764128;
	sub_82725E38(ctx, base);
loc_82764128:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x82764158;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276417C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x827641c8
	if (ctx.cr6.eq) goto loc_827641C8;
loc_82764184:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827641A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827641C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827641C8:
	// lwz r11,3132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3132);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827641F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82764220
	goto loc_82764220;
loc_827641F8:
	// lwz r11,3128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3128);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82764220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82764220:
	// lbz r11,14(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82764568
	if (ctx.cr6.eq) goto loc_82764568;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827642b0
	if (ctx.cr6.eq) goto loc_827642B0;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82764264
	if (!ctx.cr0.lt) goto loc_82764264;
	// bl 0x82725e38
	ctx.lr = 0x82764264;
	sub_82725E38(ctx, base);
loc_82764264:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82764274
	if (!ctx.cr6.eq) goto loc_82764274;
	// li r19,0
	r19.s64 = 0;
	// b 0x827642b8
	goto loc_827642B8;
loc_82764274:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8276429c
	if (!ctx.cr0.lt) goto loc_8276429C;
	// bl 0x82725e38
	ctx.lr = 0x8276429C;
	sub_82725E38(ctx, base);
loc_8276429C:
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r19,r11,1
	r19.s64 = ctx.r11.s64 + 1;
	// b 0x82764300
	goto loc_82764300;
loc_827642B0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x82764300
	if (!ctx.cr6.eq) goto loc_82764300;
loc_827642B8:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,1832(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1832);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827642DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,1944(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1944);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82764300;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82764300:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x82764418
	if (!ctx.cr6.eq) goto loc_82764418;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82764320;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82764348
	if (!ctx.cr0.lt) goto loc_82764348;
	// bl 0x82725e38
	ctx.lr = 0x82764348;
	sub_82725E38(ctx, base);
loc_82764348:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x827643d4
	if (ctx.cr6.eq) goto loc_827643D4;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82764378
	if (!ctx.cr0.lt) goto loc_82764378;
	// bl 0x82725e38
	ctx.lr = 0x82764378;
	sub_82725E38(ctx, base);
loc_82764378:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x827643A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827643CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82764418
	if (ctx.cr6.eq) goto loc_82764418;
loc_827643D4:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827643F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82764418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82764418:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x82764530
	if (!ctx.cr6.eq) goto loc_82764530;
	// lwz r24,1764(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82764438;
	sub_826A2E60(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82764460
	if (!ctx.cr0.lt) goto loc_82764460;
	// bl 0x82725e38
	ctx.lr = 0x82764460;
	sub_82725E38(ctx, base);
loc_82764460:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x827644ec
	if (ctx.cr6.eq) goto loc_827644EC;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82764490
	if (!ctx.cr0.lt) goto loc_82764490;
	// bl 0x82725e38
	ctx.lr = 0x82764490;
	sub_82725E38(ctx, base);
loc_82764490:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,3180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
	// bctrl 
	ctx.lr = 0x827644C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827644E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82764530
	if (ctx.cr6.eq) goto loc_82764530;
loc_827644EC:
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276450C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764594
	if (!ctx.cr6.eq) goto loc_82764594;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82764530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82764530:
	// lwz r11,3132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3132);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// mr r8,r15
	ctx.r8.u64 = r15.u64;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276455C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_82764568:
	// lwz r11,3128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3128);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82764590;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82764594:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

