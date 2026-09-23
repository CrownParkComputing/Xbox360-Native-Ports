#include "hydrothunder_funcs.6.h"

DEFINE_REX_FUNC(sub_82120670) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82120678;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82120690;
	sub_82120AC0(ctx, base);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// beq cr6,0x821206f4
	if (ctx.cr6.eq) goto loc_821206F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821206A8;
	sub_82120AC0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821206d0
	if (!ctx.cr6.lt) goto loc_821206D0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8269cc20
	ctx.lr = 0x821206CC;
	sub_8269CC20(ctx, base);
	// b 0x821206dc
	goto loc_821206DC;
loc_821206D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_821206DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
loc_821206F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212AA28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,61(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 61);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,61(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 61);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8212aa84
	if (!ctx.cr0.eq) goto loc_8212AA84;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8212aa58
	goto loc_8212AA58;
loc_8212AA50:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8212AA58:
	// lbz r9,61(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 61);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8212aa50
	if (ctx.cr0.eq) goto loc_8212AA50;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8212AA6C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8212aa94
	if (!ctx.cr6.eq) goto loc_8212AA94;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8212AA84:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,61(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 61);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8212aa6c
	if (ctx.cr0.eq) goto loc_8212AA6C;
loc_8212AA94:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212E2A8) {
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
	ctx.lr = 0x8212E2B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// li r29,512
	r29.s64 = 512;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bge cr6,0x8212e300
	if (!ctx.cr6.lt) goto loc_8212E300;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x8269d1d0
	ctx.lr = 0x8212E2DC;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8212E2F0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E2F8;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_8212E300:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bge cr6,0x8212e340
	if (!ctx.cr6.lt) goto loc_8212E340;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x8269d1d0
	ctx.lr = 0x8212E31C;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8212E330;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E338;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_8212E340:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lis r29,8
	r29.s64 = 524288;
	// addi r31,r30,44
	r31.s64 = r30.s64 + 44;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x8212e380
	if (!ctx.cr6.lt) goto loc_8212E380;
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// bl 0x8269d1d0
	ctx.lr = 0x8212E360;
	sub_8269D1D0(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8212E370;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E378;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_8212E380:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// addi r31,r30,68
	r31.s64 = r30.s64 + 68;
	// li r28,8192
	r28.s64 = 8192;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// bge cr6,0x8212e3c4
	if (!ctx.cr6.lt) goto loc_8212E3C4;
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// bl 0x8269d1d0
	ctx.lr = 0x8212E3A0;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x826a1e70
	ctx.lr = 0x8212E3B4;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E3BC;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_8212E3C4:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// addi r31,r30,56
	r31.s64 = r30.s64 + 56;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x8212e400
	if (!ctx.cr6.lt) goto loc_8212E400;
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// bl 0x8269d1d0
	ctx.lr = 0x8212E3E0;
	sub_8269D1D0(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8212E3F0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E3F8;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_8212E400:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// bge cr6,0x8212e440
	if (!ctx.cr6.lt) goto loc_8212E440;
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// bl 0x8269d1d0
	ctx.lr = 0x8212E41C;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x826a1e70
	ctx.lr = 0x8212E430;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E438;
	sub_8269D1B8(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_8212E440:
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// addi r31,r30,120
	r31.s64 = r30.s64 + 120;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// bge cr6,0x8212e480
	if (!ctx.cr6.lt) goto loc_8212E480;
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x8269d1d0
	ctx.lr = 0x8212E45C;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x8212E470;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E478;
	sub_8269D1B8(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_8212E480:
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// addi r31,r30,132
	r31.s64 = r30.s64 + 132;
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// bge cr6,0x8212e4c4
	if (!ctx.cr6.lt) goto loc_8212E4C4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// bl 0x8269d1d0
	ctx.lr = 0x8212E4A0;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8212E4B4;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E4BC;
	sub_8269D1B8(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_8212E4C4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r10,-9120
	ctx.r4.s64 = ctx.r10.s64 + -9120;
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E4E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r27,5(r30)
	REX_STORE_U8(r30.u32 + 5, r27.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82141358) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821413a4
	if (ctx.cr6.eq) goto loc_821413A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214139C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_821413A4:
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

DEFINE_REX_FUNC(sub_82144B80) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-14688
	ctx.r11.s64 = ctx.r11.s64 + -14688;
	// addi r10,r10,-14796
	ctx.r10.s64 = ctx.r10.s64 + -14796;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x82144bb8
	if (ctx.cr0.eq) goto loc_82144BB8;
	// bl 0x8269ce98
	ctx.lr = 0x82144BB8;
	sub_8269CE98(ctx, base);
loc_82144BB8:
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

DEFINE_REX_FUNC(sub_82147B28) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147B70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214A280) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// ld r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-13312
	ctx.r11.s64 = ctx.r11.s64 + -13312;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r9,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82185dc0
	ctx.lr = 0x8214A2D8;
	sub_82185DC0(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214CBF0) {
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
	ctx.lr = 0x8214CBF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,6060(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// ld r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// rldicl r10,r11,10,54
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0x3FF;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8214cd60
	if (!ctx.cr6.eq) goto loc_8214CD60;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rldicl r11,r11,8,56
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r28,r11,29
	r28.u64 = ctx.r11.u32 & 0x7;
	// beq cr6,0x8214cc44
	if (ctx.cr6.eq) goto loc_8214CC44;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821928d0
	ctx.lr = 0x8214CC44;
	sub_821928D0(ctx, base);
loc_8214CC44:
	// lwz r4,2000(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 2000);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8214cc70
	if (ctx.cr6.eq) goto loc_8214CC70;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r5,32(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CC70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214CC70:
	// lbz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214cd7c
	if (ctx.cr0.eq) goto loc_8214CD7C;
	// lwz r4,2004(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 2004);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8214cce4
	if (ctx.cr6.eq) goto loc_8214CCE4;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwa r10,0(r11)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 0));
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 4));
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CCE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214CCE4:
	// lwz r4,2008(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 2008);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8214cd7c
	if (ctx.cr6.lt) goto loc_8214CD7C;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,212(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CD18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,2008(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 2008);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CD3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,2008(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 2008);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214CD5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8214cd7c
	goto loc_8214CD7C;
loc_8214CD60:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214cd7c
	if (ctx.cr6.eq) goto loc_8214CD7C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821928d0
	ctx.lr = 0x8214CD7C;
	sub_821928D0(ctx, base);
loc_8214CD7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821597E8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,112(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f12,116(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f11,120(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r5,96
	ctx.r11.s64 = ctx.r5.s64 + 96;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f10,96(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// lfs f8,104(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// bl 0x82293ac8
	ctx.lr = 0x82159880;
	sub_82293AC8(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8215E288) {
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
	ctx.lr = 0x8215E290;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,65(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 65);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215e2b8
	if (ctx.cr0.eq) goto loc_8215E2B8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26916
	ctx.r3.s64 = ctx.r11.s64 + -26916;
	// bl 0x822f6058
	ctx.lr = 0x8215E2B8;
	sub_822F6058(ctx, base);
loc_8215E2B8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x8212a9b0
	ctx.lr = 0x8215E2C4;
	sub_8212A9B0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lbz r10,65(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x8215e2e0
	if (ctx.cr0.eq) goto loc_8215E2E0;
	// lwz r28,8(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8);
	// b 0x8215e304
	goto loc_8215E304;
loc_8215E2E0:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lbz r10,65(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8215e2f8
	if (ctx.cr0.eq) goto loc_8215E2F8;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x8215e304
	goto loc_8215E304;
loc_8215E2F8:
	// lwz r28,8(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(r25.u32, r26.u32, ctx.xer);
	// bne cr6,0x8215e3dc
	if (!ctx.cr6.eq) goto loc_8215E3DC;
loc_8215E304:
	// lbz r11,65(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 65);
	// lwz r31,4(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215e318
	if (!ctx.cr0.eq) goto loc_8215E318;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
loc_8215E318:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8215e330
	if (!ctx.cr6.eq) goto loc_8215E330;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x8215e348
	goto loc_8215E348;
loc_8215E330:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8215e344
	if (!ctx.cr6.eq) goto loc_8215E344;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x8215e348
	goto loc_8215E348;
loc_8215E344:
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_8215E348:
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8215e390
	if (!ctx.cr6.eq) goto loc_8215E390;
	// lbz r11,65(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215e36c
	if (ctx.cr0.eq) goto loc_8215E36C;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8215e38c
	goto loc_8215E38C;
loc_8215E36C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8215e380
	goto loc_8215E380;
loc_8215E378:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8215E380:
	// lbz r8,65(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8215e378
	if (ctx.cr0.eq) goto loc_8215E378;
loc_8215E38C:
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8215E390:
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8215e470
	if (!ctx.cr6.eq) goto loc_8215E470;
	// lbz r11,65(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215e3b4
	if (ctx.cr0.eq) goto loc_8215E3B4;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8215e3d4
	goto loc_8215E3D4;
loc_8215E3B4:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x8215e3c8
	goto loc_8215E3C8;
loc_8215E3C0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8215E3C8:
	// lbz r8,65(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8215e3c0
	if (ctx.cr0.eq) goto loc_8215E3C0;
loc_8215E3D4:
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8215e470
	goto loc_8215E470;
loc_8215E3DC:
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
	// bne cr6,0x8215e3fc
	if (!ctx.cr6.eq) goto loc_8215E3FC;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x8215e424
	goto loc_8215E424;
loc_8215E3FC:
	// lbz r11,65(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 65);
	// lwz r31,4(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8215e410
	if (!ctx.cr0.eq) goto loc_8215E410;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
loc_8215E410:
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
loc_8215E424:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8215e43c
	if (!ctx.cr6.eq) goto loc_8215E43C;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// b 0x8215e458
	goto loc_8215E458;
loc_8215E43C:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8215e454
	if (!ctx.cr6.eq) goto loc_8215E454;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// b 0x8215e458
	goto loc_8215E458;
loc_8215E454:
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r25.u32);
loc_8215E458:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// lbz r11,64(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 64);
	// lbz r10,64(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 64);
	// stb r10,64(r25)
	REX_STORE_U8(r25.u32 + 64, ctx.r10.u8);
	// stb r11,64(r26)
	REX_STORE_U8(r26.u32 + 64, ctx.r11.u8);
loc_8215E470:
	// lbz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8215e608
	if (!ctx.cr6.eq) goto loc_8215E608;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8215e604
	if (ctx.cr6.eq) goto loc_8215E604;
	// li r29,0
	r29.s64 = 0;
loc_8215E494:
	// lbz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8215e604
	if (!ctx.cr6.eq) goto loc_8215E604;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215e54c
	if (!ctx.cr6.eq) goto loc_8215E54C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8215e4d4
	if (!ctx.cr0.eq) goto loc_8215E4D4;
	// stb r30,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,64(r31)
	REX_STORE_U8(r31.u32 + 64, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215e650
	ctx.lr = 0x8215E4D0;
	sub_8215E650(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8215E4D4:
	// lbz r10,65(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8215e5a0
	if (!ctx.cr0.eq) goto loc_8215E5A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,64(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8215e500
	if (!ctx.cr6.eq) goto loc_8215E500;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,64(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8215e59c
	if (ctx.cr6.eq) goto loc_8215E59C;
loc_8215E500:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,64(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8215e528
	if (!ctx.cr6.eq) goto loc_8215E528;
	// stb r30,64(r10)
	REX_STORE_U8(ctx.r10.u32 + 64, r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8212af60
	ctx.lr = 0x8215E524;
	sub_8212AF60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8215E528:
	// lbz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// stb r30,64(r31)
	REX_STORE_U8(r31.u32 + 64, r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, r30.u8);
	// bl 0x8215e650
	ctx.lr = 0x8215E548;
	sub_8215E650(ctx, base);
	// b 0x8215e604
	goto loc_8215E604;
loc_8215E54C:
	// lbz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8215e570
	if (!ctx.cr0.eq) goto loc_8215E570;
	// stb r30,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,64(r31)
	REX_STORE_U8(r31.u32 + 64, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8212af60
	ctx.lr = 0x8215E56C;
	sub_8212AF60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8215E570:
	// lbz r10,65(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8215e5a0
	if (!ctx.cr0.eq) goto loc_8215E5A0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,64(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8215e5bc
	if (!ctx.cr6.eq) goto loc_8215E5BC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,64(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8215e5bc
	if (!ctx.cr6.eq) goto loc_8215E5BC;
loc_8215E59C:
	// stb r29,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, r29.u8);
loc_8215E5A0:
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
	// bne cr6,0x8215e494
	if (!ctx.cr6.eq) goto loc_8215E494;
	// b 0x8215e604
	goto loc_8215E604;
loc_8215E5BC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,64(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 64);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8215e5e4
	if (!ctx.cr6.eq) goto loc_8215E5E4;
	// stb r30,64(r10)
	REX_STORE_U8(ctx.r10.u32 + 64, r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215e650
	ctx.lr = 0x8215E5E0;
	sub_8215E650(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8215E5E4:
	// lbz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// stb r30,64(r31)
	REX_STORE_U8(r31.u32 + 64, r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, r30.u8);
	// bl 0x8212af60
	ctx.lr = 0x8215E604;
	sub_8212AF60(ctx, base);
loc_8215E604:
	// stb r30,64(r28)
	REX_STORE_U8(r28.u32 + 64, r30.u8);
loc_8215E608:
	// addi r31,r26,16
	r31.s64 = r26.s64 + 16;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8215f0f0
	ctx.lr = 0x8215E614;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8215E624;
	sub_82120AC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8215E62C;
	sub_8269CE98(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215e640
	if (ctx.cr6.eq) goto loc_8215E640;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
loc_8215E640:
	// stw r25,0(r24)
	REX_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8217C588) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8217C590;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8217c5c4
	if (!ctx.cr6.gt) goto loc_8217C5C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r30,r11,28460
	r30.s64 = ctx.r11.s64 + 28460;
loc_8217C5B0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269f3c0
	ctx.lr = 0x8217C5BC;
	sub_8269F3C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8217c5b0
	if (!ctx.cr0.eq) goto loc_8217C5B0;
loc_8217C5C4:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r10,28688
	ctx.r4.s64 = ctx.r10.s64 + 28688;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x8269f3c0
	ctx.lr = 0x8217C5DC;
	sub_8269F3C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8217F438) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82181910) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// ld r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// ld r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// bl 0x821814a0
	ctx.lr = 0x8218197C;
	sub_821814A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82188608) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82188610;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,80
	r29.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x826a1e70
	ctx.lr = 0x82188628;
	sub_826A1E70(ctx, base);
	// addi r30,r31,144
	r30.s64 = r31.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82126320
	ctx.lr = 0x82188634;
	sub_82126320(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82173c20
	ctx.lr = 0x8218866C;
	sub_82173C20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82188418
	ctx.lr = 0x82188678;
	sub_82188418(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8216cfa0
	ctx.lr = 0x82188684;
	sub_8216CFA0(ctx, base);
	// addi r31,r31,208
	r31.s64 = r31.s64 + 208;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82188698;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216ab58
	ctx.lr = 0x821886A0;
	sub_8216AB58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8218D5F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8218d76c
	if (!ctx.cr6.gt) goto loc_8218D76C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r31,0
	r31.s64 = 0;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f8,920(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 920);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
loc_8218D63C:
	// lwz r9,100(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// lwz r8,104(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8218d740
	if (!ctx.cr6.eq) goto loc_8218D740;
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f12,f11,f11
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f12.f64)));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8218d740
	if (!ctx.cr6.lt) goto loc_8218D740;
	// lfs f13,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f13,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f7
	ctx.cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// ble cr6,0x8218d724
	if (!ctx.cr6.gt) goto loc_8218D724;
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// lfs f6,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fsubs f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fsubs f5,f5,f7
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fdivs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fsqrts f11,f7
	ctx.f11.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fdivs f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f5.f64));
	// fdivs f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// fmadds f13,f3,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f13.f64)));
	// fsubs f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f11,f10,f6
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmadds f12,f12,f3,f2
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f2.f64)));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f7,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f11.f64)));
	// b 0x8218d730
	goto loc_8218D730;
loc_8218D724:
	// lfs f12,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
loc_8218D730:
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8218D740:
	// lwz r9,96(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// blt cr6,0x8218d63c
	if (ctx.cr6.lt) goto loc_8218D63C;
loc_8218D76C:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821973C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,6180(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
loc_821973D0:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82197468
	if (ctx.cr6.eq) goto loc_82197468;
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821973f4
	if (!ctx.cr6.eq) goto loc_821973F4;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821973F4:
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82197404
	if (ctx.cr6.eq) goto loc_82197404;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
loc_82197404:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82197410
	if (ctx.cr6.eq) goto loc_82197410;
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82197410:
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// beq cr6,0x8219744c
	if (ctx.cr6.eq) goto loc_8219744C;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// b 0x82197454
	goto loc_82197454;
loc_8219744C:
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82197454:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x821973d0
	goto loc_821973D0;
loc_82197468:
	// addi r9,r3,44
	ctx.r9.s64 = ctx.r3.s64 + 44;
loc_8219746C:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82197490
	if (!ctx.cr6.eq) goto loc_82197490;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82197490:
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821974a0
	if (ctx.cr6.eq) goto loc_821974A0;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_821974A0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821974ac
	if (ctx.cr6.eq) goto loc_821974AC;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_821974AC:
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// beq cr6,0x821974e8
	if (ctx.cr6.eq) goto loc_821974E8;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x821974f0
	goto loc_821974F0;
loc_821974E8:
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_821974F0:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x8219746c
	goto loc_8219746C;
}

DEFINE_REX_FUNC(sub_821A17E8) {
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
	// bl 0x826a1c94
	ctx.lr = 0x821A17F0;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2ca0
	ctx.lr = 0x821A17F8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// lfs f0,80(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821a1a58
	if (!ctx.cr6.gt) goto loc_821A1A58;
	// lwz r30,32(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x821a1850
	goto loc_821A1850;
loc_821A1834:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A184C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_821A1850:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821a1834
	if (!ctx.cr6.eq) goto loc_821A1834;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r8,r31,44
	ctx.r8.s64 = r31.s64 + 44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a1a58
	if (ctx.cr6.eq) goto loc_821A1A58;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lfs f13,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,6180(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 6180);
loc_821A187C:
	// lfs f12,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f11,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfs f10,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfs f9,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f7,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r10,256
	ctx.r4.s64 = ctx.r10.s64 + 256;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fadds f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f11,80(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f10,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// lfs f12,72(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r10,256
	r30.s64 = ctx.r10.s64 + 256;
	// lfs f8,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// fadds f8,f30,f8
	ctx.f8.f64 = double(float(f30.f64 + ctx.f8.f64));
	// fmadds f11,f10,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, ctx.f11.f64)));
	// stfs f11,80(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f8,68(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f7,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r3,16592
	ctx.r10.s64 = ctx.r3.s64 + 16592;
	// lfs f11,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r10,256
	ctx.r3.s64 = ctx.r10.s64 + 256;
	// lfs f8,100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lfs f9,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
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
	// lfs f12,176(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r28,r10,27,29,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, f31.f64);
	// or r10,r28,r10
	ctx.r10.u64 = r28.u64 | ctx.r10.u64;
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
	// lfsx f9,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r25,r26,27,29,29
	r25.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x4;
	// rlwinm r28,r26,30,29,29
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x4;
	// fsel f9,f9,f13,f0
	ctx.f9.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, f31.f64);
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
	// or r10,r25,r28
	ctx.r10.u64 = r25.u64 | r28.u64;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// rlwinm r4,r26,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x4;
	// fmadds f12,f30,f12,f10
	ctx.f12.f64 = double(float(std::fma(f30.f64, ctx.f12.f64, ctx.f10.f64)));
	// rlwinm r28,r26,30,29,29
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x4;
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f12,180(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f30,f12,f8
	ctx.f12.f64 = double(float(std::fma(f30.f64, ctx.f12.f64, ctx.f8.f64)));
	// lfsx f11,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// or r10,r4,r28
	ctx.r10.u64 = ctx.r4.u64 | r28.u64;
	// fsel f11,f11,f9,f0
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
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
	// rlwinm r25,r26,27,29,29
	r25.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x4;
	// lfsx f12,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r26,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x4;
	// fsel f12,f12,f11,f0
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// or r9,r25,r9
	ctx.r9.u64 = r25.u64 | ctx.r9.u64;
	// lfsx f11,r3,r9
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// bge cr6,0x821a1a4c
	if (!ctx.cr6.lt) goto loc_821A1A4C;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821a19d0
	if (!ctx.cr6.eq) goto loc_821A19D0;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_821A19D0:
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821a19e0
	if (!ctx.cr6.eq) goto loc_821A19E0;
	// stw r9,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
loc_821A19E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a19ec
	if (ctx.cr6.eq) goto loc_821A19EC;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_821A19EC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a19f8
	if (ctx.cr6.eq) goto loc_821A19F8;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_821A19F8:
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// beq cr6,0x821a1a34
	if (ctx.cr6.eq) goto loc_821A1A34;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x821a1a3c
	goto loc_821A1A3C;
loc_821A1A34:
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_821A1A3C:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_821A1A4C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821a187c
	if (!ctx.cr6.eq) goto loc_821A187C;
loc_821A1A58:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a1c44
	if (ctx.cr6.eq) goto loc_821A1C44;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A1A78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,596(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f0,172(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r30,16
	ctx.r9.s64 = r30.s64 + 16;
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r8.u64);
	// std r10,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// std r9,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r9.u64);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// lwz r29,44(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821a1cb4
	if (ctx.cr6.eq) goto loc_821A1CB4;
	// lfs f30,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	f30.f64 = double(temp.f32);
loc_821A1ADC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823fbd18
	ctx.lr = 0x821A1AEC;
	sub_823FBD18(ctx, base);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r27,256
	ctx.r10.s64 = r27.s64 + 256;
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r27,256
	ctx.r9.s64 = r27.s64 + 256;
	// lfs f8,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r27,256
	ctx.r6.s64 = r27.s64 + 256;
	// std r7,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lfs f7,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// std r8,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lfs f6,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r27,256
	ctx.r5.s64 = r27.s64 + 256;
	// addi r4,r27,256
	ctx.r4.s64 = r27.s64 + 256;
	// addi r8,r27,256
	ctx.r8.s64 = r27.s64 + 256;
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f0,f11
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f11,f2,f10
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fsubs f29,f1,f9
	f29.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fsubs f28,f7,f0
	f28.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f27,f6,f13
	f27.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f26,f5,f12
	f26.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
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
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, f31.f64);
	// rlwinm r24,r11,27,29,29
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
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
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(f28.f64, f31.f64);
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
	// rlwinm r22,r7,27,29,29
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(f27.f64, f31.f64);
	// rlwinm r21,r3,27,29,29
	r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// mfcr r25
	r25.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r25.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r25.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r25.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r25.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r25.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r25.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r25.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r25.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r25.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r25.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r25.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r25.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r25.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r25.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r25.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r25.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r25.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r25.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r25.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r25.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r25.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r25.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r25.u64 |= ctx.cr5.so ? 0x100 : 0;
	r25.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r25.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r25.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r25.u64 |= ctx.cr6.so ? 0x10 : 0;
	r25.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r25.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r25.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r25.u64 |= ctx.cr7.so ? 0x1 : 0;
	// or r11,r24,r11
	ctx.r11.u64 = r24.u64 | ctx.r11.u64;
	// fcmpu cr6,f26,f31
	ctx.cr6.compare(f26.f64, f31.f64);
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// mfcr r23
	r23.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r23.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r23.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r23.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r23.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r23.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r23.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r23.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r23.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r23.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r23.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r23.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r23.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r23.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r23.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r23.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r23.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r23.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r23.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r23.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r23.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r23.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r23.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r23.u64 |= ctx.cr5.so ? 0x100 : 0;
	r23.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r23.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r23.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r23.u64 |= ctx.cr6.so ? 0x10 : 0;
	r23.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r23.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r23.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r23.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r3,r3,30,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// lfsx f11,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r20,r26,27,29,29
	r20.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x4;
	// fsel f11,f11,f10,f2
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f10.f64 : ctx.f2.f64;
	// rlwinm r19,r25,27,29,29
	r19.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 27) & 0x4;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// rlwinm r26,r26,30,29,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x4;
	// rlwinm r25,r25,30,29,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x4;
	// or r7,r22,r7
	ctx.r7.u64 = r22.u64 | ctx.r7.u64;
	// or r3,r21,r3
	ctx.r3.u64 = r21.u64 | ctx.r3.u64;
	// or r26,r20,r26
	r26.u64 = r20.u64 | r26.u64;
	// or r25,r19,r25
	r25.u64 = r19.u64 | r25.u64;
	// rlwinm r11,r23,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 27) & 0x4;
	// lfsx f3,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f10,r6,r3
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f3,f9,f1
	ctx.f9.f64 = ctx.f3.f64 >= 0.0 ? ctx.f9.f64 : ctx.f1.f64;
	// fsel f10,f10,f8,f4
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? ctx.f8.f64 : ctx.f4.f64;
	// lfsx f3,r5,r26
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r26.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f8,r4,r25
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r25.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f0,f3,f7,f0
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// fsel f13,f8,f6,f13
	ctx.f13.f64 = ctx.f8.f64 >= 0.0 ? ctx.f6.f64 : ctx.f13.f64;
	// stfs f9,68(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f10,72(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// rlwinm r10,r23,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x4;
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
	// bne cr6,0x821a1adc
	if (!ctx.cr6.eq) goto loc_821A1ADC;
	// b 0x821a1cb4
	goto loc_821A1CB4;
loc_821A1C44:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// ld r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r5,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// ld r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// ld r10,24(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// std r10,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// ld r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r10,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r10.u64);
loc_821A1CB4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cec
	ctx.lr = 0x821A1CC0;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_821E0878) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,48(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x822c5c60
	ctx.lr = 0x821E0898;
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

DEFINE_REX_FUNC(sub_821E3270) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821E3278;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,160(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// addi r9,r1,72
	ctx.r9.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E329C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821e329c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E329C;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e32c0
	if (ctx.cr6.eq) goto loc_821E32C0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821884b0
	ctx.lr = 0x821E32C0;
	sub_821884B0(ctx, base);
loc_821E32C0:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r30,r31,176
	r30.s64 = r31.s64 + 176;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3308
	if (ctx.cr6.eq) goto loc_821E3308;
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821e3300
	goto loc_821E3300;
loc_821E32DC:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d5ec0
	ctx.lr = 0x821E32F4;
	sub_821D5EC0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
loc_821E3300:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e32dc
	if (!ctx.cr6.eq) goto loc_821E32DC;
loc_821E3308:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821E8BC0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
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
	ctx.lr = 0x821E8C0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r6,68(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,20(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8C40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r8,56(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r7,52(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r6,44(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E8C74;
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

DEFINE_REX_FUNC(sub_821EE100) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x821EE108;
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r21,r31
	r21.u64 = r31.u64;
	// bl 0x821effd8
	ctx.lr = 0x821EE128;
	sub_821EFFD8(ctx, base);
	// bl 0x821f3db8
	ctx.lr = 0x821EE12C;
	sub_821F3DB8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,22744
	ctx.r4.s64 = ctx.r11.s64 + 22744;
	// bl 0x82120600
	ctx.lr = 0x821EE13C;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r30,r11,964
	r30.s64 = ctx.r11.s64 + 964;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82122730
	ctx.lr = 0x821EE150;
	sub_82122730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x821EE160;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,12644
	ctx.r4.s64 = ctx.r11.s64 + 12644;
	// bl 0x82120600
	ctx.lr = 0x821EE170;
	sub_82120600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x82122730
	ctx.lr = 0x821EE17C;
	sub_82122730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x821EE18C;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,22752
	ctx.r4.s64 = ctx.r11.s64 + 22752;
	// bl 0x82120600
	ctx.lr = 0x821EE19C;
	sub_82120600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82122730
	ctx.lr = 0x821EE1A8;
	sub_82122730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821EE1B8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,22756
	ctx.r4.s64 = ctx.r11.s64 + 22756;
	// bl 0x82120600
	ctx.lr = 0x821EE1C8;
	sub_82120600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82122730
	ctx.lr = 0x821EE1D4;
	sub_82122730(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821EE1E4;
	sub_82120AC0(ctx, base);
	// bl 0x82121f50
	ctx.lr = 0x821EE1E8;
	sub_82121F50(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,-26856
	ctx.r5.s64 = ctx.r11.s64 + -26856;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r10,16064
	ctx.r4.s64 = ctx.r10.s64 + 16064;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x821EE210;
	sub_822F6280(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r24,1
	r24.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,6248
	ctx.r11.s64 = ctx.r11.s64 + 6248;
	// beq 0x821ee240
	if (ctx.cr0.eq) goto loc_821EE240;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r31,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, r31.u8);
	// addi r10,r10,16632
	ctx.r10.s64 = ctx.r10.s64 + 16632;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r24,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r24.u8);
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// b 0x821ee244
	goto loc_821EE244;
loc_821EE240:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821EE244:
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r11,-28
	r30.s64 = ctx.r11.s64 + -28;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE264;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ee284
	if (!ctx.cr0.eq) goto loc_821EE284;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,16088
	ctx.r4.s64 = ctx.r11.s64 + 16088;
	// addi r3,r10,16108
	ctx.r3.s64 = ctx.r10.s64 + 16108;
	// li r5,82
	ctx.r5.s64 = 82;
	// bl 0x821231d0
	ctx.lr = 0x821EE284;
	sub_821231D0(ctx, base);
loc_821EE284:
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// addi r11,r22,8
	ctx.r11.s64 = r22.s64 + 8;
	// bne cr6,0x821ee2a8
	if (!ctx.cr6.eq) goto loc_821EE2A8;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_821EE2A8:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,16152
	r30.s64 = ctx.r11.s64 + 16152;
	// addi r29,r10,1624
	r29.s64 = ctx.r10.s64 + 1624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x821EE2C8;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// bl 0x8215f670
	ctx.lr = 0x821EE2D4;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16184
	ctx.r4.s64 = ctx.r11.s64 + 16184;
	// bl 0x8215fbf8
	ctx.lr = 0x821EE2E0;
	sub_8215FBF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x821EE2EC;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16192
	ctx.r4.s64 = ctx.r11.s64 + 16192;
	// bl 0x8215f670
	ctx.lr = 0x821EE2F8;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16200
	ctx.r4.s64 = ctx.r11.s64 + 16200;
	// bl 0x8215fbf8
	ctx.lr = 0x821EE304;
	sub_8215FBF8(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r25,r11,16592
	r25.s64 = ctx.r11.s64 + 16592;
	// lwz r3,6048(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6048);
	// lfs f1,1580(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1580);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lfs f1,1600(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1600);
	ctx.f1.f64 = double(temp.f32);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,1604(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,120
	ctx.r3.s64 = 120;
	// lwz r30,6168(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x822f6280
	ctx.lr = 0x821EE388;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee398
	if (ctx.cr0.eq) goto loc_821EE398;
	// bl 0x821866d8
	ctx.lr = 0x821EE394;
	sub_821866D8(ctx, base);
	// b 0x821ee39c
	goto loc_821EE39C;
loc_821EE398:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821EE39C:
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822f6280
	ctx.lr = 0x821EE3A8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r26,8
	r26.s64 = 8;
	// beq 0x821ee418
	if (ctx.cr0.eq) goto loc_821EE418;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x821EE3DC;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x821EE3E8;
	sub_8269D1B8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// addi r29,r11,6252
	r29.s64 = ctx.r11.s64 + 6252;
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// stw r31,16(r30)
	REX_STORE_U32(r30.u32 + 16, r31.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,24(r30)
	REX_STORE_U32(r30.u32 + 24, r31.u32);
	// stw r31,28(r30)
	REX_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// b 0x821ee428
	goto loc_821EE428;
loc_821EE418:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r29,r10,6252
	r29.s64 = ctx.r10.s64 + 6252;
	// stw r31,6252(r10)
	REX_STORE_U32(ctx.r10.u32 + 6252, r31.u32);
loc_821EE428:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r27,r22,12
	r27.s64 = r22.s64 + 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE43C;
	sub_82124E10(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ee460
	if (!ctx.cr0.eq) goto loc_821EE460;
loc_821EE458:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821eed18
	goto loc_821EED18;
loc_821EE460:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821EE468;
	sub_822F6280(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r10,6256
	r30.s64 = ctx.r10.s64 + 6256;
	// beq 0x821ee490
	if (ctx.cr0.eq) goto loc_821EE490;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// addi r9,r9,23392
	ctx.r9.s64 = ctx.r9.s64 + 23392;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x821ee494
	goto loc_821EE494;
loc_821EE490:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_821EE494:
	// stw r11,6256(r10)
	REX_STORE_U32(ctx.r10.u32 + 6256, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE4A8;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE4BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// bl 0x821f6260
	ctx.lr = 0x821EE4C8;
	sub_821F6260(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE4D8;
	sub_82124E10(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6260(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE4F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x821EE500;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee510
	if (ctx.cr0.eq) goto loc_821EE510;
	// bl 0x821f67c0
	ctx.lr = 0x821EE50C;
	sub_821F67C0(ctx, base);
	// b 0x821ee514
	goto loc_821EE514;
loc_821EE510:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821EE514:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,6264
	r30.s64 = ctx.r11.s64 + 6264;
	// stw r3,6264(r11)
	REX_STORE_U32(ctx.r11.u32 + 6264, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE530;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x821f6a48
	ctx.lr = 0x821EE538;
	sub_821F6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821EE548;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee558
	if (ctx.cr0.eq) goto loc_821EE558;
	// bl 0x821f7f60
	ctx.lr = 0x821EE554;
	sub_821F7F60(ctx, base);
	// b 0x821ee55c
	goto loc_821EE55C;
loc_821EE558:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821EE55C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,6268
	r30.s64 = ctx.r11.s64 + 6268;
	// stw r3,6268(r11)
	REX_STORE_U32(ctx.r11.u32 + 6268, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE578;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE58C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x821EE59C;
	sub_822F6280(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r10,6272
	r30.s64 = ctx.r10.s64 + 6272;
	// beq 0x821ee5c4
	if (ctx.cr0.eq) goto loc_821EE5C4;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r9,r9,25048
	ctx.r9.s64 = ctx.r9.s64 + 25048;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// b 0x821ee5c8
	goto loc_821EE5C8;
loc_821EE5C4:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_821EE5C8:
	// stw r11,6272(r10)
	REX_STORE_U32(ctx.r10.u32 + 6272, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE5DC;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE5F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822f6280
	ctx.lr = 0x821EE600;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee644
	if (ctx.cr0.eq) goto loc_821EE644;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r30,r11,6276
	r30.s64 = ctx.r11.s64 + 6276;
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// addi r10,r10,25664
	ctx.r10.s64 = ctx.r10.s64 + 25664;
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// stb r31,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r31.u8);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x821ee654
	goto loc_821EE654;
loc_821EE644:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r30,r10,6276
	r30.s64 = ctx.r10.s64 + 6276;
	// stw r31,6276(r10)
	REX_STORE_U32(ctx.r10.u32 + 6276, r31.u32);
loc_821EE654:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE664;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x822f6280
	ctx.lr = 0x821EE688;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821ee6f0
	if (ctx.cr0.eq) goto loc_821EE6F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,26032
	ctx.r11.s64 = ctx.r11.s64 + 26032;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x821EE6AC;
	sub_82120AC0(ctx, base);
	// addi r28,r30,56
	r28.s64 = r30.s64 + 56;
	// li r29,3
	r29.s64 = 3;
loc_821EE6B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821EE6C4;
	sub_82120AC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// bge 0x821ee6b4
	if (!ctx.cr0.lt) goto loc_821EE6B4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r31,168(r30)
	REX_STORE_U32(r30.u32 + 168, r31.u32);
	// stw r31,172(r30)
	REX_STORE_U32(r30.u32 + 172, r31.u32);
	// addi r29,r11,6280
	r29.s64 = ctx.r11.s64 + 6280;
	// stw r31,176(r30)
	REX_STORE_U32(r30.u32 + 176, r31.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// b 0x821ee700
	goto loc_821EE700;
loc_821EE6F0:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r29,r10,6280
	r29.s64 = ctx.r10.s64 + 6280;
	// stw r31,6280(r10)
	REX_STORE_U32(ctx.r10.u32 + 6280, r31.u32);
loc_821EE700:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE710;
	sub_82124E10(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,736
	ctx.r3.s64 = 736;
	// bl 0x822f6280
	ctx.lr = 0x821EE734;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee744
	if (ctx.cr0.eq) goto loc_821EE744;
	// bl 0x821fd260
	ctx.lr = 0x821EE740;
	sub_821FD260(ctx, base);
	// b 0x821ee748
	goto loc_821EE748;
loc_821EE744:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821EE748:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,6284
	r30.s64 = ctx.r11.s64 + 6284;
	// stw r3,6284(r11)
	REX_STORE_U32(ctx.r11.u32 + 6284, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE764;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE778;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821EE788;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee7e0
	if (ctx.cr0.eq) goto loc_821EE7E0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,28328
	ctx.r10.s64 = ctx.r10.s64 + 28328;
	// addi r30,r11,6288
	r30.s64 = ctx.r11.s64 + 6288;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stb r24,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, r24.u8);
	// stfs f31,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r31,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// stb r24,44(r3)
	REX_STORE_U8(ctx.r3.u32 + 44, r24.u8);
	// stw r31,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x821ee7f0
	goto loc_821EE7F0;
loc_821EE7E0:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r30,r10,6288
	r30.s64 = ctx.r10.s64 + 6288;
	// stw r31,6288(r10)
	REX_STORE_U32(ctx.r10.u32 + 6288, r31.u32);
loc_821EE7F0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE800;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE814;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821EE824;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee87c
	if (ctx.cr0.eq) goto loc_821EE87C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,29544
	ctx.r10.s64 = ctx.r10.s64 + 29544;
	// addi r30,r11,6292
	r30.s64 = ctx.r11.s64 + 6292;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// std r31,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, r31.u64);
	// stb r31,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, r31.u8);
	// stb r31,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, r31.u8);
	// stb r31,26(r3)
	REX_STORE_U8(ctx.r3.u32 + 26, r31.u8);
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r31,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// stw r31,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, r31.u32);
	// stb r24,48(r3)
	REX_STORE_U8(ctx.r3.u32 + 48, r24.u8);
	// stw r31,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r31.u32);
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x821ee88c
	goto loc_821EE88C;
loc_821EE87C:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r30,r10,6292
	r30.s64 = ctx.r10.s64 + 6292;
	// stw r31,6292(r10)
	REX_STORE_U32(ctx.r10.u32 + 6292, r31.u32);
loc_821EE88C:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE89C;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE8B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821EE8C0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee8d0
	if (ctx.cr0.eq) goto loc_821EE8D0;
	// bl 0x82202de8
	ctx.lr = 0x821EE8CC;
	sub_82202DE8(ctx, base);
	// b 0x821ee8d4
	goto loc_821EE8D4;
loc_821EE8D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821EE8D4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,6296
	r30.s64 = ctx.r11.s64 + 6296;
	// stw r3,6296(r11)
	REX_STORE_U32(ctx.r11.u32 + 6296, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE8F0;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// bl 0x82204738
	ctx.lr = 0x821EE910;
	sub_82204738(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE920;
	sub_82124E10(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6300(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6300);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822f6280
	ctx.lr = 0x821EE948;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ee980
	if (ctx.cr0.eq) goto loc_821EE980;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r30,r11,6304
	r30.s64 = ctx.r11.s64 + 6304;
	// addi r10,r10,30000
	ctx.r10.s64 = ctx.r10.s64 + 30000;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// std r31,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, r31.u64);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x821ee990
	goto loc_821EE990;
loc_821EE980:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r30,r10,6304
	r30.s64 = ctx.r10.s64 + 6304;
	// stw r31,6304(r10)
	REX_STORE_U32(ctx.r10.u32 + 6304, r31.u32);
loc_821EE990:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EE9A0;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE9B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821EE9C4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821eea1c
	if (ctx.cr0.eq) goto loc_821EEA1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x821EE9F4;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x821EEA00;
	sub_8269D1B8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r29,r11,6308
	r29.s64 = ctx.r11.s64 + 6308;
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// b 0x821eea2c
	goto loc_821EEA2C;
loc_821EEA1C:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r29,r10,6308
	r29.s64 = ctx.r10.s64 + 6308;
	// stw r31,6308(r10)
	REX_STORE_U32(ctx.r10.u32 + 6308, r31.u32);
loc_821EEA2C:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EEA3C;
	sub_82124E10(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEA50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821EEA60;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821eeaac
	if (ctx.cr0.eq) goto loc_821EEAAC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lfd f0,136(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r25.u32 + 136);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfd f0,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.f0.u64);
	// addi r30,r11,6312
	r30.s64 = ctx.r11.s64 + 6312;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// addi r10,r10,30160
	ctx.r10.s64 = ctx.r10.s64 + 30160;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r31,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// b 0x821eeabc
	goto loc_821EEABC;
loc_821EEAAC:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r30,r10,6312
	r30.s64 = ctx.r10.s64 + 6312;
	// stw r31,6312(r10)
	REX_STORE_U32(ctx.r10.u32 + 6312, r31.u32);
loc_821EEABC:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EEACC;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEAE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x822f6280
	ctx.lr = 0x821EEAF0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821eeb00
	if (ctx.cr0.eq) goto loc_821EEB00;
	// bl 0x822060a8
	ctx.lr = 0x821EEAFC;
	sub_822060A8(ctx, base);
	// b 0x821eeb04
	goto loc_821EEB04;
loc_821EEB00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821EEB04:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,6316
	r30.s64 = ctx.r11.s64 + 6316;
	// stw r3,6316(r11)
	REX_STORE_U32(ctx.r11.u32 + 6316, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EEB20;
	sub_82124E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEB38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// bl 0x82207b10
	ctx.lr = 0x821EEB44;
	sub_82207B10(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82124e10
	ctx.lr = 0x821EEB54;
	sub_82124E10(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6320(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6320);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEB6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ee458
	if (ctx.cr0.eq) goto loc_821EE458;
	// bl 0x821eeee8
	ctx.lr = 0x821EEB78;
	sub_821EEEE8(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// addi r4,r22,4
	ctx.r4.s64 = r22.s64 + 4;
	// bne cr6,0x821eeb88
	if (!ctx.cr6.eq) goto loc_821EEB88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_821EEB88:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6220(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6220);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEBA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEBBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,16216
	ctx.r4.s64 = ctx.r11.s64 + 16216;
	// bl 0x82120600
	ctx.lr = 0x821EEBCC;
	sub_82120600(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821EEBDC;
	sub_82180E18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821EEBF0;
	sub_82120AC0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// lwz r28,6080(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 6080);
	// bl 0x8215f338
	ctx.lr = 0x821EEC08;
	sub_8215F338(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEC20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEC38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821eec60
	goto loc_821EEC60;
loc_821EEC44:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EEC58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_821EEC60:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eec44
	if (!ctx.cr6.eq) goto loc_821EEC44;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x821EEC70;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821eec9c
	if (ctx.cr0.eq) goto loc_821EEC9C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,16232
	ctx.r4.s64 = ctx.r11.s64 + 16232;
	// bl 0x82120600
	ctx.lr = 0x821EEC88;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r21,r24
	r21.u64 = r24.u64;
	// bl 0x82208610
	ctx.lr = 0x821EEC98;
	sub_82208610(ctx, base);
	// b 0x821eeca0
	goto loc_821EECA0;
loc_821EEC9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821EECA0:
	// clrlwi. r11,r21,31
	ctx.r11.u64 = r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,24(r22)
	REX_STORE_U32(r22.u32 + 24, ctx.r3.u32);
	// beq 0x821eecc0
	if (ctx.cr0.eq) goto loc_821EECC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r21,r21,0,0,30
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821EECC0;
	sub_82120AC0(ctx, base);
loc_821EECC0:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x821EECC8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821eecf4
	if (ctx.cr0.eq) goto loc_821EECF4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,16252
	ctx.r4.s64 = ctx.r11.s64 + 16252;
	// bl 0x82120600
	ctx.lr = 0x821EECE0;
	sub_82120600(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r21,r21,2
	r21.u64 = r21.u64 | 2;
	// bl 0x82208610
	ctx.lr = 0x821EECF0;
	sub_82208610(ctx, base);
	// b 0x821eecf8
	goto loc_821EECF8;
loc_821EECF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821EECF8:
	// rlwinm. r11,r21,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,28(r22)
	REX_STORE_U32(r22.u32 + 28, ctx.r3.u32);
	// beq 0x821eed14
	if (ctx.cr0.eq) goto loc_821EED14;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x821EED14;
	sub_82120AC0(ctx, base);
loc_821EED14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821EED18:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82246B58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13340
	ctx.r3.s64 = ctx.r11.s64 + -13340;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822471D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13324
	ctx.r3.s64 = ctx.r11.s64 + -13324;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82247728) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82247730;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,120(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 120);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82247774
	if (ctx.cr0.eq) goto loc_82247774;
	// stw r30,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, r30.u32);
	// addi r5,r4,128
	ctx.r5.s64 = ctx.r4.s64 + 128;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8216b6a8
	ctx.lr = 0x82247764;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// bl 0x8216bc98
	ctx.lr = 0x82247774;
	sub_8216BC98(ctx, base);
loc_82247774:
	// lbz r11,121(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822477a8
	if (ctx.cr0.eq) goto loc_822477A8;
	// stw r30,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b6a8
	ctx.lr = 0x82247798;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-14864
	ctx.r3.s64 = ctx.r11.s64 + -14864;
	// bl 0x8216bc98
	ctx.lr = 0x822477A8;
	sub_8216BC98(ctx, base);
loc_822477A8:
	// lbz r11,122(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 122);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822477dc
	if (ctx.cr0.eq) goto loc_822477DC;
	// stw r30,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8216b6a8
	ctx.lr = 0x822477CC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r11,-14828
	ctx.r3.s64 = ctx.r11.s64 + -14828;
	// bl 0x8216bc98
	ctx.lr = 0x822477DC;
	sub_8216BC98(ctx, base);
loc_822477DC:
	// stw r30,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,116
	ctx.r5.s64 = r31.s64 + 116;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8216b6a8
	ctx.lr = 0x822477F4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r11,-14796
	ctx.r3.s64 = ctx.r11.s64 + -14796;
	// bl 0x8216bc98
	ctx.lr = 0x82247804;
	sub_8216BC98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8224FCA0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a2c98
	ctx.lr = 0x8224FCB0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,352(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8224fdfc
	if (ctx.cr6.eq) goto loc_8224FDFC;
	// lfs f12,368(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// addic. r10,r3,608
	ctx.xer.ca = ctx.r3.u32 > 4294966687;
	ctx.r10.s64 = ctx.r3.s64 + 608;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r3,320
	ctx.r9.s64 = ctx.r3.s64 + 320;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,372(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 372);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,368
	ctx.r11.s64 = ctx.r3.s64 + 368;
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f10,376(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 376);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f10,320(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,324(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,328(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,320(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,324(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,328(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// beq 0x8224fdfc
	if (ctx.cr0.eq) goto loc_8224FDFC;
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r3,272
	ctx.r9.s64 = ctx.r3.s64 + 272;
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r3,336
	ctx.r9.s64 = ctx.r3.s64 + 336;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f11,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,276(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,292(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,308(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 308);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f4,280(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,296(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,312(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f31,272(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 272);
	f31.f64 = double(temp.f32);
	// fmuls f27,f10,f9
	f27.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f30,288(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 288);
	f30.f64 = double(temp.f32);
	// lfs f29,304(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 304);
	f29.f64 = double(temp.f32);
	// lfs f28,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f28.f64 = double(temp.f32);
	// lfs f26,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	f26.f64 = double(temp.f32);
	// lfs f25,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	f25.f64 = double(temp.f32);
	// lfs f24,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	f24.f64 = double(temp.f32);
	// fmsubs f12,f10,f12,f5
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f5.f64)));
	// lfs f10,340(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,344(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 344);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f13,f13,f9,f1
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f1.f64)));
	// fmsubs f0,f11,f0,f27
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, -f27.f64)));
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmadds f11,f4,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f9,f3,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f13,f2,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f12,f31,f0,f11
	ctx.f12.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f11,f0,f30,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f9.f64)));
	// fmadds f0,f29,f0,f13
	ctx.f0.f64 = double(float(std::fma(f29.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmuls f13,f28,f12
	ctx.f13.f64 = double(float(f28.f64 * ctx.f12.f64));
	// fmuls f12,f26,f11
	ctx.f12.f64 = double(float(f26.f64 * ctx.f11.f64));
	// fmuls f0,f25,f0
	ctx.f0.f64 = double(float(f25.f64 * ctx.f0.f64));
	// fadds f13,f24,f13
	ctx.f13.f64 = double(float(f24.f64 + ctx.f13.f64));
	// stfs f13,336(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// fadds f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f13,340(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f0,344(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 344, temp.u32);
loc_8224FDFC:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2ce4
	ctx.lr = 0x8224FE04;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225A910) {
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
	ctx.lr = 0x8225A918;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,6152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225A944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225a9f4
	if (!ctx.cr0.eq) goto loc_8225A9F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,-11460
	ctx.r4.s64 = ctx.r11.s64 + -11460;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x8225A960;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r4,r11,-11444
	ctx.r4.s64 = ctx.r11.s64 + -11444;
	// bl 0x8215f670
	ctx.lr = 0x8225A970;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8225A978;
	sub_8215F0F0(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// stw r30,8(r25)
	REX_STORE_U32(r25.u32 + 8, r30.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-11432
	ctx.r4.s64 = ctx.r11.s64 + -11432;
	// bl 0x8215f670
	ctx.lr = 0x8225A994;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8225A99C;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r25)
	REX_STORE_U32(r25.u32 + 8, r29.u32);
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ef950
	ctx.lr = 0x8225A9AC;
	sub_821EF950(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-16776
	ctx.r4.s64 = ctx.r11.s64 + -16776;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225A9C0;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8225A9C8;
	sub_8215F0F0(ctx, base);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// lwz r3,6152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225A9E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225A9F4;
	sub_8225B1C8(ctx, base);
loc_8225A9F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82262AF8) {
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
	ctx.lr = 0x82262B00;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// li r26,0
	r26.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82262c08
	if (!ctx.cr6.eq) goto loc_82262C08;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r28,0
	r28.s64 = 0;
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
	ctx.lr = 0x82262B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82262bb0
	if (!ctx.cr0.gt) goto loc_82262BB0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r27,r11,-13316
	r27.s64 = ctx.r11.s64 + -13316;
loc_82262B4C:
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
	ctx.lr = 0x82262B64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x82262B74;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82262b90
	if (ctx.cr0.eq) goto loc_82262B90;
	// lwz r11,460(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 460);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r28,r11,r28
	r28.u64 = ctx.r11.u64 | r28.u64;
loc_82262B90:
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
	ctx.lr = 0x82262BA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82262b4c
	if (ctx.cr6.lt) goto loc_82262B4C;
loc_82262BB0:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x82262BB8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82262be8
	if (ctx.cr0.eq) goto loc_82262BE8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7524
	ctx.r4.s64 = ctx.r11.s64 + -7524;
	// bl 0x82120600
	ctx.lr = 0x82262BD0;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x8228d180
	ctx.lr = 0x82262BE4;
	sub_8228D180(ctx, base);
	// b 0x82262bec
	goto loc_82262BEC;
loc_82262BE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82262BEC:
	// clrlwi. r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,164(r25)
	REX_STORE_U32(r25.u32 + 164, ctx.r3.u32);
	// beq 0x82262c08
	if (ctx.cr0.eq) goto loc_82262C08;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82262C08;
	sub_82120AC0(ctx, base);
loc_82262C08:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822698C8) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82269910
	if (ctx.cr0.eq) goto loc_82269910;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r5,r3,120
	ctx.r5.s64 = ctx.r3.s64 + 120;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// addi r4,r3,128
	ctx.r4.s64 = ctx.r3.s64 + 128;
	// addi r3,r3,572
	ctx.r3.s64 = ctx.r3.s64 + 572;
	// lfs f12,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226aa70
	ctx.lr = 0x82269910;
	sub_8226AA70(ctx, base);
loc_82269910:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82269924;
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

DEFINE_REX_FUNC(sub_8226DC20) {
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
	ctx.lr = 0x8226DC28;
	// stwu r1,-1792(r1)
	ea = -1792 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-16680
	ctx.r4.s64 = ctx.r11.s64 + -16680;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x8215f338
	ctx.lr = 0x8226DC50;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8226DC54;
	sub_8215F990(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8226DC68;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x82125d00
	ctx.lr = 0x8226DC78;
	sub_82125D00(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,6256
	r31.s64 = ctx.r11.s64 + 6256;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bne 0x8226dd30
	if (!ctx.cr0.eq) goto loc_8226DD30;
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226DCB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226e008
	if (ctx.cr0.eq) goto loc_8226E008;
loc_8226DCB8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-17164
	ctx.r4.s64 = ctx.r11.s64 + -17164;
	// bl 0x8215f338
	ctx.lr = 0x8226DCC8;
	sub_8215F338(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8226DCDC;
	sub_82120AC0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8226de00
	if (ctx.cr6.eq) goto loc_8226DE00;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8226de00
	if (ctx.cr6.eq) goto loc_8226DE00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8226ddec
	if (!ctx.cr6.eq) goto loc_8226DDEC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21476
	ctx.r4.s64 = ctx.r11.s64 + 21476;
	// bl 0x82125d00
	ctx.lr = 0x8226DD08;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226dd68
	if (!ctx.cr0.eq) goto loc_8226DD68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f990
	ctx.lr = 0x8226DD18;
	sub_8215F990(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,28480
	ctx.r4.s64 = ctx.r11.s64 + 28480;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826a0568
	ctx.lr = 0x8226DD2C;
	sub_826A0568(ctx, base);
	// b 0x8226df28
	goto loc_8226DF28;
loc_8226DD30:
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226DD44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226dcb8
	if (!ctx.cr0.eq) goto loc_8226DCB8;
loc_8226DD4C:
	// li r31,0
	r31.s64 = 0;
loc_8226DD50:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8226DD60;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8226e01c
	goto loc_8226E01C;
loc_8226DD68:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24460
	ctx.r4.s64 = ctx.r11.s64 + 24460;
	// bl 0x82125d00
	ctx.lr = 0x8226DD78;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226dda4
	if (!ctx.cr0.eq) goto loc_8226DDA4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f9e0
	ctx.lr = 0x8226DD88;
	sub_8215F9E0(ctx, base);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,28484
	ctx.r4.s64 = ctx.r11.s64 + 28484;
	// bl 0x826a0568
	ctx.lr = 0x8226DDA0;
	sub_826A0568(ctx, base);
	// b 0x8226df28
	goto loc_8226DF28;
loc_8226DDA4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25384
	ctx.r4.s64 = ctx.r11.s64 + -25384;
	// bl 0x82125d00
	ctx.lr = 0x8226DDB4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226ddec
	if (!ctx.cr0.eq) goto loc_8226DDEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,1472
	ctx.r5.s64 = ctx.r1.s64 + 1472;
	// bl 0x8215f9e0
	ctx.lr = 0x8226DDC8;
	sub_8215F9E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ee668
	ctx.lr = 0x8226DDD0;
	sub_822EE668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8226DDD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8226ddd8
	if (!ctx.cr6.eq) goto loc_8226DDD8;
	// b 0x8226df14
	goto loc_8226DF14;
loc_8226DDEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8226DDFC;
	sub_82120AC0(ctx, base);
	// b 0x8226dd4c
	goto loc_8226DD4C;
loc_8226DE00:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21476
	ctx.r4.s64 = ctx.r11.s64 + 21476;
	// bl 0x82125d00
	ctx.lr = 0x8226DE10;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226de58
	if (!ctx.cr0.eq) goto loc_8226DE58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f990
	ctx.lr = 0x8226DE20;
	sub_8215F990(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,28480
	ctx.r4.s64 = ctx.r11.s64 + 28480;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826a0568
	ctx.lr = 0x8226DE34;
	sub_826A0568(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8226DE3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8226de3c
	if (!ctx.cr6.eq) goto loc_8226DE3C;
loc_8226DE4C:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x8226df18
	goto loc_8226DF18;
loc_8226DE58:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24460
	ctx.r4.s64 = ctx.r11.s64 + 24460;
	// bl 0x82125d00
	ctx.lr = 0x8226DE68;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226deac
	if (!ctx.cr0.eq) goto loc_8226DEAC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f9e0
	ctx.lr = 0x8226DE78;
	sub_8215F9E0(ctx, base);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,28484
	ctx.r4.s64 = ctx.r11.s64 + 28484;
	// bl 0x826a0568
	ctx.lr = 0x8226DE90;
	sub_826A0568(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8226DE98:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8226de98
	if (!ctx.cr6.eq) goto loc_8226DE98;
	// b 0x8226de4c
	goto loc_8226DE4C;
loc_8226DEAC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25384
	ctx.r4.s64 = ctx.r11.s64 + -25384;
	// bl 0x82125d00
	ctx.lr = 0x8226DEBC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226df50
	if (!ctx.cr0.eq) goto loc_8226DF50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f990
	ctx.lr = 0x8226DECC;
	sub_8215F990(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,1216
	ctx.r5.s64 = ctx.r1.s64 + 1216;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822ee668
	ctx.lr = 0x8226DEFC;
	sub_822EE668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8226DF04:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8226df04
	if (!ctx.cr6.eq) goto loc_8226DF04;
loc_8226DF14:
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_8226DF18:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82120c08
	ctx.lr = 0x8226DF28;
	sub_82120C08(ctx, base);
loc_8226DF28:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8226DF38;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8226DF48;
	sub_82120AC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226e01c
	goto loc_8226E01C;
loc_8226DF50:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5284
	ctx.r4.s64 = ctx.r11.s64 + -5284;
	// bl 0x82125d00
	ctx.lr = 0x8226DF60;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8226dff8
	if (!ctx.cr0.eq) goto loc_8226DFF8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-25800
	ctx.r4.s64 = ctx.r11.s64 + -25800;
	// bl 0x82120600
	ctx.lr = 0x8226DF78;
	sub_82120600(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8215f990
	ctx.lr = 0x8226DF8C;
	sub_8215F990(ctx, base);
	// lwz r11,56(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226DFA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226DFBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82120b20
	ctx.lr = 0x8226DFD0;
	sub_82120B20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8226DFE0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8226DFF0;
	sub_82120AC0(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// b 0x8226dd50
	goto loc_8226DD50;
loc_8226DFF8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8226E008;
	sub_82120AC0(ctx, base);
loc_8226E008:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8226E018;
	sub_82120AC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226E01C:
	// addi r1,r1,1792
	ctx.r1.s64 = ctx.r1.s64 + 1792;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82287160) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32770
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32770, ctx.xer);
	// beq cr6,0x82287228
	if (ctx.cr6.eq) goto loc_82287228;
	// cmplwi cr6,r11,32771
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32771, ctx.xer);
	// beq cr6,0x822871d4
	if (ctx.cr6.eq) goto loc_822871D4;
	// cmplwi cr6,r11,32781
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32781, ctx.xer);
	// beq cr6,0x822871c0
	if (ctx.cr6.eq) goto loc_822871C0;
	// cmplwi cr6,r11,32787
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32787, ctx.xer);
	// beq cr6,0x822871ac
	if (ctx.cr6.eq) goto loc_822871AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82287238
	goto loc_82287238;
loc_822871AC:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82287388
	ctx.lr = 0x822871BC;
	sub_82287388(ctx, base);
	// b 0x82287238
	goto loc_82287238;
loc_822871C0:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82287490
	ctx.lr = 0x822871D0;
	sub_82287490(ctx, base);
	// b 0x82287238
	goto loc_82287238;
loc_822871D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x8227dd78
	ctx.lr = 0x822871F8;
	sub_8227DD78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822875c8
	ctx.lr = 0x82287218;
	sub_822875C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x82287220;
	sub_8215F0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82287238
	goto loc_82287238;
loc_82287228:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82287250
	ctx.lr = 0x82287238;
	sub_82287250(ctx, base);
loc_82287238:
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

DEFINE_REX_FUNC(sub_8228AB68) {
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
	ctx.lr = 0x8228AB70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AB94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8228AB9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8228abc0
	if (ctx.cr0.eq) goto loc_8228ABC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8228ab9c
	if (ctx.cr6.eq) goto loc_8228AB9C;
loc_8228ABC0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8228abd0
	if (!ctx.cr0.eq) goto loc_8228ABD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8228ac30
	goto loc_8228AC30;
loc_8228ABD0:
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8228ac2c
	if (!ctx.cr0.gt) goto loc_8228AC2C;
	// li r30,0
	r30.s64 = 0;
loc_8228ABF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8228ab68
	ctx.lr = 0x8228AC04;
	sub_8228AB68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8228ac30
	if (!ctx.cr0.eq) goto loc_8228AC30;
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
	// blt cr6,0x8228abf0
	if (ctx.cr6.lt) goto loc_8228ABF0;
loc_8228AC2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228AC30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8228F3A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8228F3A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F3D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f3f0
	if (ctx.cr0.eq) goto loc_8228F3F0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822aba78
	ctx.lr = 0x8228F3EC;
	sub_822ABA78(ctx, base);
	// b 0x8228f3f4
	goto loc_8228F3F4;
loc_8228F3F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F3F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82290F70) {
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
	ctx.lr = 0x82290F78;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x822c1a70
	ctx.lr = 0x82290F9C;
	sub_822C1A70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// beq 0x82291008
	if (ctx.cr0.eq) goto loc_82291008;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// sth r26,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// sth r25,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, r25.u16);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r27.u32);
	// stw r27,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r27.u32);
	// b 0x8229100c
	goto loc_8229100C;
loc_82291008:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8229100C:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U64(r29.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U64(r28.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// ld r7,8(r28)
	ctx.r7.u64 = REX_LOAD_U64(r28.u32 + 8);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// ld r29,8(r29)
	r29.u64 = REX_LOAD_U64(r29.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r6,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r7,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r29,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r29.u64);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// bl 0x82293ac8
	ctx.lr = 0x82291060;
	sub_82293AC8(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r27,52(r30)
	REX_STORE_U32(r30.u32 + 52, r27.u32);
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r10,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229108c
	if (ctx.cr6.eq) goto loc_8229108C;
	// stw r30,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, r30.u32);
loc_8229108C:
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
	// lbz r11,153(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 153);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822910d4
	if (!ctx.cr0.eq) goto loc_822910D4;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822910bc
	if (ctx.cr6.eq) goto loc_822910BC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82291f28
	ctx.lr = 0x822910BC;
	sub_82291F28(ctx, base);
loc_822910BC:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822910d4
	if (ctx.cr6.eq) goto loc_822910D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82291f28
	ctx.lr = 0x822910D4;
	sub_82291F28(ctx, base);
loc_822910D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822A0888) {
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
	// bl 0x826a1c80
	ctx.lr = 0x822A0890;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c8c
	ctx.lr = 0x822A0898;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f5,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fsubs f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stw r4,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r4.u32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f30,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lwz r31,148(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// lfs f31,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f11,308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f11.f64 = double(temp.f32);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// stw r9,580(r1)
	REX_STORE_U32(ctx.r1.u32 + 580, ctx.r9.u32);
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// fmuls f12,f10,f10
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fmadds f12,f9,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmadds f12,f7,f7,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f7.f64, ctx.f12.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f3,f31,f12
	ctx.f3.f64 = double(float(f31.f64 / ctx.f12.f64));
	// fmuls f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f0,f7,f3
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f26,f7,f0,f10
	f26.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f10.f64)));
	// bne cr6,0x822a0948
	if (!ctx.cr6.eq) goto loc_822A0948;
	// fmr f28,f11
	f28.f64 = ctx.f11.f64;
	// b 0x822a094c
	goto loc_822A094C;
loc_822A0948:
	// fdivs f28,f31,f0
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f31.f64 / ctx.f0.f64));
loc_822A094C:
	// fcmpu cr6,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bne cr6,0x822a095c
	if (!ctx.cr6.eq) goto loc_822A095C;
	// fmr f29,f11
	f29.f64 = ctx.f11.f64;
	// b 0x822a0960
	goto loc_822A0960;
loc_822A095C:
	// fdivs f29,f31,f13
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(f31.f64 / ctx.f13.f64));
loc_822A0960:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// bne cr6,0x822a0970
	if (!ctx.cr6.eq) goto loc_822A0970;
	// fmr f27,f11
	f27.f64 = ctx.f11.f64;
	// b 0x822a0974
	goto loc_822A0974;
loc_822A0970:
	// fdivs f27,f31,f12
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(f31.f64 / ctx.f12.f64));
loc_822A0974:
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f30.f64);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// blt cr6,0x822a0988
	if (ctx.cr6.lt) goto loc_822A0988;
	// stw r4,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
loc_822A0988:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f30.f64);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// blt cr6,0x822a0998
	if (ctx.cr6.lt) goto loc_822A0998;
	// stw r4,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
loc_822A0998:
	// fcmpu cr6,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, f30.f64);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// blt cr6,0x822a09a8
	if (ctx.cr6.lt) goto loc_822A09A8;
	// stw r4,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
loc_822A09A8:
	// ld r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U64(r20.u32 + 0);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r8,8(r20)
	ctx.r8.u64 = REX_LOAD_U64(r20.u32 + 8);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f7,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// bge cr6,0x822a09e0
	if (!ctx.cr6.lt) goto loc_822A09E0;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
loc_822A09E0:
	// lfs f9,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f6,f9
	ctx.cr6.compare(ctx.f6.f64, ctx.f9.f64);
	// bge cr6,0x822a09f0
	if (!ctx.cr6.lt) goto loc_822A09F0;
	// fmr f9,f6
	ctx.f9.f64 = ctx.f6.f64;
loc_822A09F0:
	// lfs f10,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f5,f10
	ctx.cr6.compare(ctx.f5.f64, ctx.f10.f64);
	// bge cr6,0x822a0a00
	if (!ctx.cr6.lt) goto loc_822A0A00;
	// fmr f10,f5
	ctx.f10.f64 = ctx.f5.f64;
loc_822A0A00:
	// lfs f0,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822a0a14
	if (!ctx.cr6.lt) goto loc_822A0A14;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_822A0A14:
	// lfs f11,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x822a0a24
	if (!ctx.cr6.lt) goto loc_822A0A24;
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
loc_822A0A24:
	// lfs f12,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// bge cr6,0x822a0a34
	if (!ctx.cr6.lt) goto loc_822A0A34;
	// fmr f12,f6
	ctx.f12.f64 = ctx.f6.f64;
loc_822A0A34:
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bge cr6,0x822a0a44
	if (!ctx.cr6.lt) goto loc_822A0A44;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
loc_822A0A44:
	// lfs f8,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x822a0a54
	if (!ctx.cr6.lt) goto loc_822A0A54;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_822A0A54:
	// lfs f0,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// lfs f7,8(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f8,4(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r14,r27,16
	r14.s64 = r27.s64 + 16;
	// lfs f10,4(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f12,16(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bge cr6,0x822a0acc
	if (!ctx.cr6.lt) goto loc_822A0ACC;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// b 0x822a0ad0
	goto loc_822A0AD0;
loc_822A0ACC:
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
loc_822A0AD0:
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r15,r14,4
	r15.s64 = r14.s64 + 4;
	// lfs f0,4(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x822a0ae8
	if (!ctx.cr6.lt) goto loc_822A0AE8;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_822A0AE8:
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r16,r14,8
	r16.s64 = r14.s64 + 8;
	// lfs f13,8(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822a0b00
	if (!ctx.cr6.lt) goto loc_822A0B00;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822A0B00:
	// lfs f4,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r27,32
	ctx.r11.s64 = r27.s64 + 32;
	// fcmpu cr6,f4,f9
	ctx.cr6.compare(ctx.f4.f64, ctx.f9.f64);
	// bge cr6,0x822a0b14
	if (!ctx.cr6.lt) goto loc_822A0B14;
	// fmr f9,f4
	ctx.f9.f64 = ctx.f4.f64;
loc_822A0B14:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x822a0b28
	if (!ctx.cr6.lt) goto loc_822A0B28;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
loc_822A0B28:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x822a0b3c
	if (!ctx.cr6.lt) goto loc_822A0B3C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822A0B3C:
	// lfs f11,0(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f13,0(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,56(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// lfs f10,52(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,48(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// fmuls f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// fctidz f7,f7
	ctx.f7.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f7,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.f7.u64);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// fctidz f0,f6
	ctx.f0.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r8,214(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 214);
	// lhz r5,94(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// lhz r7,166(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 166);
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r7,r5,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// bge cr6,0x822a0bc0
	if (!ctx.cr6.lt) goto loc_822A0BC0;
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// b 0x822a0bc4
	goto loc_822A0BC4;
loc_822A0BC0:
	// lfs f5,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
loc_822A0BC4:
	// lfs f0,0(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r15.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bge cr6,0x822a0bd8
	if (!ctx.cr6.lt) goto loc_822A0BD8;
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
loc_822A0BD8:
	// lfs f7,0(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x822a0bec
	if (!ctx.cr6.lt) goto loc_822A0BEC;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
loc_822A0BEC:
	// fcmpu cr6,f4,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// bge cr6,0x822a0bf8
	if (!ctx.cr6.lt) goto loc_822A0BF8;
	// fmr f5,f4
	ctx.f5.f64 = ctx.f4.f64;
loc_822A0BF8:
	// lfs f7,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x822a0c08
	if (!ctx.cr6.lt) goto loc_822A0C08;
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
loc_822A0C08:
	// lfs f7,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x822a0c18
	if (!ctx.cr6.lt) goto loc_822A0C18;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
loc_822A0C18:
	// fsubs f13,f6,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fsubs f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctidz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// lhz r11,94(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// stfd f13,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f13.u64);
	// lhz r5,166(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 166);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r10,94(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 94);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// ori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 | 1;
	// ble cr6,0x822a1020
	if (!ctx.cr6.gt) goto loc_822A1020;
	// clrlwi r26,r6,16
	r26.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r25,r7,16
	r25.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r24,r9,16
	r24.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r23,r10,16
	r23.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r22,r11,16
	r22.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r21,r8,16
	r21.u64 = ctx.r8.u32 & 0xFFFF;
	// li r30,-1
	r30.s64 = -1;
loc_822A0C90:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// subfc r7,r11,r22
	ctx.xer.ca = r22.u32 >= ctx.r11.u32;
	ctx.r7.u64 = r22.u64 - ctx.r11.u64;
	// lhz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 4);
	// lhz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 6);
	// subfze r3,r30
	temp.u8 = ~r30.u32 + ctx.xer.ca < ~r30.u32;
	ctx.r3.u64 = ~r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lhz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 8);
	// subfc r5,r10,r23
	ctx.xer.ca = r23.u32 >= ctx.r10.u32;
	ctx.r5.u64 = r23.u64 - ctx.r10.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lhz r6,10(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 10);
	// subfze r5,r30
	temp.u8 = ~r30.u32 + ctx.xer.ca < ~r30.u32;
	ctx.r5.u64 = ~r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r5,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// subfc r5,r9,r24
	ctx.xer.ca = r24.u32 >= ctx.r9.u32;
	ctx.r5.u64 = r24.u64 - ctx.r9.u64;
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// and r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subfze r11,r30
	temp.u8 = ~r30.u32 + ctx.xer.ca < ~r30.u32;
	ctx.r11.u64 = ~r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r5,r21,r8
	ctx.xer.ca = ctx.r8.u32 >= r21.u32;
	ctx.r5.u64 = ctx.r8.u64 - r21.u64;
	// and r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subfze r11,r30
	temp.u8 = ~r30.u32 + ctx.xer.ca < ~r30.u32;
	ctx.r11.u64 = ~r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r5,r25,r7
	ctx.xer.ca = ctx.r7.u32 >= r25.u32;
	ctx.r5.u64 = ctx.r7.u64 - r25.u64;
	// and r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & ctx.r11.u64;
	// subfze r11,r30
	temp.u8 = ~r30.u32 + ctx.xer.ca < ~r30.u32;
	ctx.r11.u64 = ~r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r5,r26,r6
	ctx.xer.ca = ctx.r6.u32 >= r26.u32;
	ctx.r5.u64 = ctx.r6.u64 - r26.u64;
	// and r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & ctx.r11.u64;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// subfze r5,r30
	temp.u8 = ~r30.u32 + ctx.xer.ca < ~r30.u32;
	ctx.r5.u64 = ~r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r28,r28,1,31,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x1;
	// and r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 & ctx.r5.u64;
	// xori r5,r28,1
	ctx.r5.u64 = r28.u64 ^ 1;
	// neg r28,r3
	r28.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// or r3,r28,r3
	ctx.r3.u64 = r28.u64 | ctx.r3.u64;
	// srawi r3,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 31;
	// clrlwi. r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822a0fa0
	if (ctx.cr0.eq) goto loc_822A0FA0;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f10,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r10,256(r1)
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r10.u64);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lfs f0,48(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// std r11,248(r1)
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r11.u64);
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// std r10,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r10.u64);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// std r6,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// lfs f13,52(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// std r8,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// fdivs f10,f31,f10
	ctx.f10.f64 = double(float(f31.f64 / ctx.f10.f64));
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfs f30,236(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f3,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lfs f4,0(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f5,0(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f2,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lfs f1,4(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f25,8(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 8);
	f25.f64 = double(temp.f32);
	// lfs f24,0(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	f24.f64 = double(temp.f32);
	// lfs f23,4(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 4);
	f23.f64 = double(temp.f32);
	// lfs f22,8(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 8);
	f22.f64 = double(temp.f32);
	// lfs f21,0(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	f21.f64 = double(temp.f32);
	// lfd f7,112(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f11,256(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f9,248(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// lfd f8,240(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f12,160(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfd f6,128(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f6,f13
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fadds f13,f3,f9
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fadds f13,f4,f11
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f13,f5,f8
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f11,f4,f7
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r29,0(r10)
	r29.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r3,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// std r29,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r29.u64);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f10,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// fsubs f10,f10,f23
	ctx.f10.f64 = double(float(ctx.f10.f64 - f23.f64));
	// stfs f10,196(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fsubs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,196
	ctx.r9.s64 = ctx.r1.s64 + 196;
	// lfs f11,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - f25.f64));
	// fsubs f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 - f24.f64));
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f12,f12,f22
	ctx.f12.f64 = double(float(ctx.f12.f64 - f22.f64));
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r8,r1,180
	ctx.r8.s64 = ctx.r1.s64 + 180;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// lfs f13,4(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f10,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r7,r6
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 - f21.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f9,f12,f21
	ctx.f9.f64 = double(float(ctx.f12.f64 - f21.f64));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fmuls f12,f10,f29
	ctx.f12.f64 = double(float(ctx.f10.f64 * f29.f64));
	// fmuls f13,f11,f29
	ctx.f13.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmuls f11,f9,f28
	ctx.f11.f64 = double(float(ctx.f9.f64 * f28.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x822a0f98
	if (ctx.cr6.gt) goto loc_822A0F98;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x822a0f98
	if (ctx.cr6.gt) goto loc_822A0F98;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x822a0f14
	if (!ctx.cr6.gt) goto loc_822A0F14;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_822A0F14:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x822a0f20
	if (!ctx.cr6.lt) goto loc_822A0F20;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
loc_822A0F20:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// addi r9,r1,184
	ctx.r9.s64 = ctx.r1.s64 + 184;
	// lfs f13,8(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lfsx f12,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f13,f12,f27
	ctx.f13.f64 = double(float(ctx.f12.f64 * f27.f64));
	// fmuls f12,f10,f27
	ctx.f12.f64 = double(float(ctx.f10.f64 * f27.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x822a0f98
	if (ctx.cr6.gt) goto loc_822A0F98;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x822a0f98
	if (ctx.cr6.gt) goto loc_822A0F98;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822a0f6c
	if (!ctx.cr6.gt) goto loc_822A0F6C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822A0F6C:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822a0f78
	if (!ctx.cr6.lt) goto loc_822A0F78;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_822A0F78:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// bge cr6,0x822a0f8c
	if (!ctx.cr6.lt) goto loc_822A0F8C;
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, f30.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x822a0f90
	if (ctx.cr6.gt) goto loc_822A0F90;
loc_822A0F8C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822A0F90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x822a0f9c
	goto loc_822A0F9C;
loc_822A0F98:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_822A0F9C:
	// clrlwi r29,r11,24
	r29.u64 = ctx.r11.u32 & 0xFF;
loc_822A0FA0:
	// clrlwi. r28,r5,24
	r28.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822a0fd4
	if (ctx.cr0.eq) goto loc_822A0FD4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822a0fdc
	if (ctx.cr6.eq) goto loc_822A0FDC;
	// lwz r3,540(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi r5,r11,11
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFFFF;
	// srawi r4,r11,21
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 21;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A0FD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_822A0FD4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822a1000
	if (!ctx.cr6.eq) goto loc_822A1000;
loc_822A0FDC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822a1000
	if (!ctx.cr6.eq) goto loc_822A1000;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// b 0x822a100c
	goto loc_822A100C;
loc_822A1000:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822A100C:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,580(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822a0c90
	if (ctx.cr6.lt) goto loc_822A0C90;
loc_822A1020:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpw cr6,r10,r19
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r19.s32, ctx.xer);
	// bge cr6,0x822a1034
	if (!ctx.cr6.lt) goto loc_822A1034;
	// stw r19,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, r19.u32);
loc_822A1034:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cd8
	ctx.lr = 0x822A1040;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822E1600) {
	REX_FUNC_PROLOGUE();
	// b 0x822d5fd8
	sub_822D5FD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E19F0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lwz r11,2072(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2072);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1a30
	if (ctx.cr6.eq) goto loc_822E1A30;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1a58
	if (ctx.cr6.eq) goto loc_822E1A58;
	// b 0x822e1a44
	goto loc_822E1A44;
loc_822E1A30:
	// lwz r11,2272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2272);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1a58
	if (ctx.cr6.eq) goto loc_822E1A58;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_822E1A44:
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r4,r10,6000
	ctx.r4.s64 = ctx.r10.s64 + 6000;
	// bctrl 
	ctx.lr = 0x822E1A58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E1A58:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r10,2272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2272);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r11,r11,2720
	ctx.r11.s64 = ctx.r11.s64 + 2720;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1a8c
	if (ctx.cr6.eq) goto loc_822E1A8C;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,66
	ctx.r3.s64 = 66;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E1A8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E1A8C:
	// lwz r11,2272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2272);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1ab4
	if (ctx.cr6.eq) goto loc_822E1AB4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r3,89
	ctx.r3.s64 = 89;
	// addi r4,r10,6160
	ctx.r4.s64 = ctx.r10.s64 + 6160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E1AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E1AB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,21832(r30)
	REX_STORE_U32(r30.u32 + 21832, ctx.r11.u32);
	// stw r11,21836(r30)
	REX_STORE_U32(r30.u32 + 21836, ctx.r11.u32);
	// stw r10,21840(r30)
	REX_STORE_U32(r30.u32 + 21840, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_822E6F28) {
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
	// lwz r4,88(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E6F5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E6F74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822E6F84;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216bb58
	ctx.lr = 0x822E6F8C;
	sub_8216BB58(ctx, base);
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

DEFINE_REX_FUNC(sub_822E8770) {
	REX_FUNC_PROLOGUE();
	// lbz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822EA110) {
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
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x822f6280
	ctx.lr = 0x822EA124;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ea134
	if (ctx.cr0.eq) goto loc_822EA134;
	// bl 0x822ea148
	ctx.lr = 0x822EA130;
	sub_822EA148(ctx, base);
	// b 0x822ea138
	goto loc_822EA138;
loc_822EA134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EA138:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EBAC0) {
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
	ctx.lr = 0x822EBAD4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ebae4
	if (ctx.cr0.eq) goto loc_822EBAE4;
	// bl 0x822ebaf8
	ctx.lr = 0x822EBAE0;
	sub_822EBAF8(ctx, base);
	// b 0x822ebae8
	goto loc_822EBAE8;
loc_822EBAE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EBAE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ECF08) {
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
	// lwz r10,152(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,156(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lwz r6,160(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// lfs f13,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,164(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// addi r4,r7,16592
	ctx.r4.s64 = ctx.r7.s64 + 16592;
	// lfs f12,148(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lfs f11,168(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// stw r5,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lfs f8,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// fdivs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f0,16592(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f1,f11,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// lwz r3,6096(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 6096);
	// fmuls f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82136798
	ctx.lr = 0x822ECFC4;
	sub_82136798(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F2BE8) {
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
	ctx.lr = 0x822F2BF0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f34a4
	if (ctx.cr0.eq) goto loc_822F34A4;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lbz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 12);
	// rlwinm r30,r11,20,28,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822f2cd4
	if (ctx.cr0.eq) goto loc_822F2CD4;
	// bl 0x822f39a0
	ctx.lr = 0x822F2C24;
	sub_822F39A0(ctx, base);
	// rlwinm r11,r22,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r22,27
	ctx.r10.u64 = r22.u32 & 0x1F;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2c90
	if (ctx.cr0.eq) goto loc_822F2C90;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2c64
	if (ctx.cr0.eq) goto loc_822F2C64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18736
	ctx.r4.s64 = ctx.r11.s64 + 18736;
	// bl 0x822f3c00
	ctx.lr = 0x822F2C64;
	sub_822F3C00(ctx, base);
loc_822F2C64:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18744
	ctx.r4.s64 = ctx.r11.s64 + 18744;
	// bl 0x822f3dc8
	ctx.lr = 0x822F2C74;
	sub_822F3DC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r11,18752
	ctx.r4.s64 = ctx.r11.s64 + 18752;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F2C88;
	sub_822F3C00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3938
	ctx.lr = 0x822F2C90;
	sub_822F3938(ctx, base);
loc_822F2C90:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f2ca4
	if (!ctx.cr0.eq) goto loc_822F2CA4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822f2cd4
	if (ctx.cr6.eq) goto loc_822F2CD4;
loc_822F2CA4:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2cd4
	if (ctx.cr0.eq) goto loc_822F2CD4;
	// srawi r11,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r11.s64 = r22.s32 >> 1;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r9,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r9.s64 = r22.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,19236
	ctx.r4.s64 = ctx.r10.s64 + 19236;
	// addze r5,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r22
	ctx.r6.u64 = r22.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F2CD4;
	sub_822F3C00(ctx, base);
loc_822F2CD4:
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(r30.u32, 15, ctx.xer);
	// bgt cr6,0x822f3460
	if (ctx.cr6.gt) goto loc_822F3460;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// rlwinm r0,r30,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,16328
	ctx.r12.s64 = ctx.r12.s64 + 16328;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32209
	ctx.r12.s64 = -2110849024;
	// addi r12,r12,11524
	ctx.r12.s64 = ctx.r12.s64 + 11524;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r30.u32) {
	case 0:
		goto loc_822F2D04;
	case 1:
		goto loc_822F2D40;
	case 2:
		goto loc_822F2D8C;
	case 3:
		goto loc_822F2DB4;
	case 4:
		goto loc_822F2E38;
	case 5:
		goto loc_822F2E60;
	case 6:
		goto loc_822F2E90;
	case 7:
		goto loc_822F2EC0;
	case 8:
		goto loc_822F2F8C;
	case 9:
		goto loc_822F3048;
	case 10:
		goto loc_822F3150;
	case 11:
		goto loc_822F3178;
	case 12:
		goto loc_822F32EC;
	case 13:
		goto loc_822F3398;
	case 14:
		goto loc_822F3410;
	case 15:
		goto loc_822F3438;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822F2D04:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// bl 0x822f3c00
	ctx.lr = 0x822F2D2C;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18760
	ctx.r4.s64 = ctx.r11.s64 + 18760;
loc_822F2D34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3dc8
	ctx.lr = 0x822F2D3C;
	sub_822F3DC8(ctx, base);
	// b 0x822f37c4
	goto loc_822F37C4;
loc_822F2D40:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
loc_822F2D54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F2D5C;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18768
	ctx.r4.s64 = ctx.r11.s64 + 18768;
loc_822F2D64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3dc8
	ctx.lr = 0x822F2D6C;
	sub_822F3DC8(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,23,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// rlwinm r4,r10,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
loc_822F2D80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c50
	ctx.lr = 0x822F2D88;
	sub_822F3C50(ctx, base);
	// b 0x822f37c4
	goto loc_822F37C4;
loc_822F2D8C:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
loc_822F2DA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F2DA8;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18776
	ctx.r4.s64 = ctx.r11.s64 + 18776;
	// b 0x822f2d64
	goto loc_822F2D64;
loc_822F2DB4:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// bl 0x822f3c00
	ctx.lr = 0x822F2DD0;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18784
	ctx.r4.s64 = ctx.r11.s64 + 18784;
loc_822F2DD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3dc8
	ctx.lr = 0x822F2DE0;
	sub_822F3DC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F2DF0;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2e0c
	if (!ctx.cr0.eq) goto loc_822F2E0C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18792
	ctx.r4.s64 = ctx.r11.s64 + 18792;
	// bl 0x822f3c00
	ctx.lr = 0x822F2E0C;
	sub_822F3C00(ctx, base);
loc_822F2E0C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,18796
	ctx.r4.s64 = ctx.r10.s64 + 18796;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x822f3c00
	ctx.lr = 0x822F2E24;
	sub_822F3C00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_822F2E28:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r4,r11,17,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// b 0x822f2d80
	goto loc_822F2D80;
loc_822F2E38:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// bl 0x822f3c00
	ctx.lr = 0x822F2E54;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18800
	ctx.r4.s64 = ctx.r11.s64 + 18800;
	// b 0x822f2dd8
	goto loc_822F2DD8;
loc_822F2E60:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2e84
	if (ctx.cr0.eq) goto loc_822F2E84;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19172
	ctx.r4.s64 = ctx.r11.s64 + 19172;
	// b 0x822f2d54
	goto loc_822F2D54;
loc_822F2E84:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19180
	ctx.r4.s64 = ctx.r11.s64 + 19180;
	// b 0x822f2d54
	goto loc_822F2D54;
loc_822F2E90:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2eb4
	if (ctx.cr0.eq) goto loc_822F2EB4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19172
	ctx.r4.s64 = ctx.r11.s64 + 19172;
	// b 0x822f2da0
	goto loc_822F2DA0;
loc_822F2EB4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19180
	ctx.r4.s64 = ctx.r11.s64 + 19180;
	// b 0x822f2da0
	goto loc_822F2DA0;
loc_822F2EC0:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// bl 0x822f3c00
	ctx.lr = 0x822F2EDC;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18808
	ctx.r4.s64 = ctx.r11.s64 + 18808;
	// bl 0x822f3dc8
	ctx.lr = 0x822F2EEC;
	sub_822F3DC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F2EFC;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18816
	ctx.r4.s64 = ctx.r11.s64 + 18816;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x822f3c00
	ctx.lr = 0x822F2F14;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17932
	ctx.r4.s64 = ctx.r11.s64 + 17932;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x822f3c00
	ctx.lr = 0x822F2F2C;
	sub_822F3C00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r10,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// bne 0x822f2f48
	if (!ctx.cr0.eq) goto loc_822F2F48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2f74
	if (ctx.cr6.eq) goto loc_822F2F74;
loc_822F2F48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f2f5c
	if (ctx.cr6.eq) goto loc_822F2F5C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,19332
	ctx.r5.s64 = ctx.r11.s64 + 19332;
	// b 0x822f2f64
	goto loc_822F2F64;
loc_822F2F5C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,19324
	ctx.r5.s64 = ctx.r11.s64 + 19324;
loc_822F2F64:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18824
	ctx.r4.s64 = ctx.r11.s64 + 18824;
	// bl 0x822f3c00
	ctx.lr = 0x822F2F74;
	sub_822F3C00(ctx, base);
loc_822F2F74:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18836
	ctx.r4.s64 = ctx.r11.s64 + 18836;
	// b 0x822f3498
	goto loc_822F3498;
loc_822F2F8C:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2fc8
	if (ctx.cr0.eq) goto loc_822F2FC8;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2fbc
	if (ctx.cr0.eq) goto loc_822F2FBC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19172
	ctx.r4.s64 = ctx.r11.s64 + 19172;
	// b 0x822f2fd0
	goto loc_822F2FD0;
loc_822F2FBC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19180
	ctx.r4.s64 = ctx.r11.s64 + 19180;
	// b 0x822f2fd0
	goto loc_822F2FD0;
loc_822F2FC8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
loc_822F2FD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F2FD8;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18856
	ctx.r4.s64 = ctx.r11.s64 + 18856;
	// bl 0x822f3dc8
	ctx.lr = 0x822F2FE8;
	sub_822F3DC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F2FF8;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18816
	ctx.r4.s64 = ctx.r11.s64 + 18816;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x822f3c00
	ctx.lr = 0x822F3010;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17932
	ctx.r4.s64 = ctx.r11.s64 + 17932;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x822f3c00
	ctx.lr = 0x822F3028;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18864
	ctx.r4.s64 = ctx.r11.s64 + 18864;
loc_822F303C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3044;
	sub_822F3C00(ctx, base);
	// b 0x822f37c4
	goto loc_822F37C4;
loc_822F3048:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f308c
	if (ctx.cr0.eq) goto loc_822F308C;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3080
	if (ctx.cr0.eq) goto loc_822F3080;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19172
	ctx.r4.s64 = ctx.r11.s64 + 19172;
	// b 0x822f3094
	goto loc_822F3094;
loc_822F3080:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19180
	ctx.r4.s64 = ctx.r11.s64 + 19180;
	// b 0x822f3094
	goto loc_822F3094;
loc_822F308C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
loc_822F3094:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F309C;
	sub_822F3C00(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f311c
	if (!ctx.cr0.eq) goto loc_822F311C;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f311c
	if (!ctx.cr0.eq) goto loc_822F311C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18892
	ctx.r4.s64 = ctx.r11.s64 + 18892;
	// bl 0x822f3dc8
	ctx.lr = 0x822F30C0;
	sub_822F3DC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F30D0;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f30e8
	if (ctx.cr0.eq) goto loc_822F30E8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,-26856
	ctx.r5.s64 = ctx.r11.s64 + -26856;
	// b 0x822f30f0
	goto loc_822F30F0;
loc_822F30E8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,18792
	ctx.r5.s64 = ctx.r11.s64 + 18792;
loc_822F30F0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// bl 0x822f3c00
	ctx.lr = 0x822F3100;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18900
	ctx.r4.s64 = ctx.r11.s64 + 18900;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x822f3c00
	ctx.lr = 0x822F3118;
	sub_822F3C00(ctx, base);
	// b 0x822f313c
	goto loc_822F313C;
loc_822F311C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18884
	ctx.r4.s64 = ctx.r11.s64 + 18884;
	// bl 0x822f3dc8
	ctx.lr = 0x822F312C;
	sub_822F3DC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F313C;
	sub_822F3C00(ctx, base);
loc_822F313C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,17932
	ctx.r4.s64 = ctx.r10.s64 + 17932;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// b 0x822f3498
	goto loc_822F3498;
loc_822F3150:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// bl 0x822f3c00
	ctx.lr = 0x822F316C;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18908
	ctx.r4.s64 = ctx.r11.s64 + 18908;
	// b 0x822f2d34
	goto loc_822F2D34;
loc_822F3178:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f31bc
	if (ctx.cr0.eq) goto loc_822F31BC;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f31b0
	if (ctx.cr0.eq) goto loc_822F31B0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19172
	ctx.r4.s64 = ctx.r11.s64 + 19172;
	// b 0x822f31c4
	goto loc_822F31C4;
loc_822F31B0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19180
	ctx.r4.s64 = ctx.r11.s64 + 19180;
	// b 0x822f31c4
	goto loc_822F31C4;
loc_822F31BC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
loc_822F31C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F31CC;
	sub_822F3C00(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f31e4
	if (!ctx.cr0.eq) goto loc_822F31E4;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f31e8
	if (ctx.cr0.eq) goto loc_822F31E8;
loc_822F31E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822F31E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x822f3214
	if (ctx.cr0.eq) goto loc_822F3214;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18912
	ctx.r4.s64 = ctx.r11.s64 + 18912;
	// bl 0x822f3dc8
	ctx.lr = 0x822F3200;
	sub_822F3DC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F3210;
	sub_822F3C00(ctx, base);
	// b 0x822f3278
	goto loc_822F3278;
loc_822F3214:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18916
	ctx.r4.s64 = ctx.r11.s64 + 18916;
	// bl 0x822f3dc8
	ctx.lr = 0x822F3220;
	sub_822F3DC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F3230;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3248
	if (ctx.cr0.eq) goto loc_822F3248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,-26856
	ctx.r5.s64 = ctx.r11.s64 + -26856;
	// b 0x822f3250
	goto loc_822F3250;
loc_822F3248:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r11,18792
	ctx.r5.s64 = ctx.r11.s64 + 18792;
loc_822F3250:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28576
	ctx.r4.s64 = ctx.r11.s64 + 28576;
	// bl 0x822f3c00
	ctx.lr = 0x822F3260;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18900
	ctx.r4.s64 = ctx.r11.s64 + 18900;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x822f3c00
	ctx.lr = 0x822F3278;
	sub_822F3C00(ctx, base);
loc_822F3278:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,17932
	ctx.r4.s64 = ctx.r10.s64 + 17932;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x822f3c00
	ctx.lr = 0x822F3290;
	sub_822F3C00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f32c8
	if (ctx.cr0.eq) goto loc_822F32C8;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f32e0
	if (!ctx.cr0.eq) goto loc_822F32E0;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f32c8
	if (ctx.cr0.eq) goto loc_822F32C8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,19324
	ctx.r5.s64 = ctx.r11.s64 + 19324;
loc_822F32B8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18924
	ctx.r4.s64 = ctx.r11.s64 + 18924;
	// bl 0x822f3c00
	ctx.lr = 0x822F32C8;
	sub_822F3C00(ctx, base);
loc_822F32C8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18944
	ctx.r4.s64 = ctx.r11.s64 + 18944;
	// b 0x822f3498
	goto loc_822F3498;
loc_822F32E0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r11,19332
	ctx.r5.s64 = ctx.r11.s64 + 19332;
	// b 0x822f32b8
	goto loc_822F32B8;
loc_822F32EC:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// bl 0x822f3c00
	ctx.lr = 0x822F3308;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18964
	ctx.r4.s64 = ctx.r11.s64 + 18964;
	// bl 0x822f3dc8
	ctx.lr = 0x822F3318;
	sub_822F3DC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F3328;
	sub_822F3C00(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,-25664
	ctx.r9.s64 = ctx.r11.s64 + -25664;
	// addi r4,r10,28576
	ctx.r4.s64 = ctx.r10.s64 + 28576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r30,r11,23,30,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x3;
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x822f3c00
	ctx.lr = 0x822F3360;
	sub_822F3C00(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bne cr6,0x822f3380
	if (!ctx.cr6.eq) goto loc_822F3380;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,18972
	ctx.r4.s64 = ctx.r10.s64 + 18972;
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// bl 0x822f3c00
	ctx.lr = 0x822F3380;
	sub_822F3C00(ctx, base);
loc_822F3380:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18976
	ctx.r4.s64 = ctx.r11.s64 + 18976;
	// b 0x822f303c
	goto loc_822F303C;
loc_822F3398:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// bl 0x822f3c00
	ctx.lr = 0x822F33B4;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18784
	ctx.r4.s64 = ctx.r11.s64 + 18784;
loc_822F33BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3dc8
	ctx.lr = 0x822F33C4;
	sub_822F3DC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26960
	ctx.r4.s64 = ctx.r11.s64 + -26960;
	// bl 0x822f3c00
	ctx.lr = 0x822F33D4;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f33f0
	if (!ctx.cr0.eq) goto loc_822F33F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18792
	ctx.r4.s64 = ctx.r11.s64 + 18792;
	// bl 0x822f3c00
	ctx.lr = 0x822F33F0;
	sub_822F3C00(ctx, base);
loc_822F33F0:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,18796
	ctx.r4.s64 = ctx.r10.s64 + 18796;
	// rlwinm r5,r11,30,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// bl 0x822f3c00
	ctx.lr = 0x822F3408;
	sub_822F3C00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x822f2e28
	goto loc_822F2E28;
loc_822F3410:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// bl 0x822f3c00
	ctx.lr = 0x822F342C;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18800
	ctx.r4.s64 = ctx.r11.s64 + 18800;
	// b 0x822f33bc
	goto loc_822F33BC;
loc_822F3438:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// bl 0x822f3c00
	ctx.lr = 0x822F3454;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19000
	ctx.r4.s64 = ctx.r11.s64 + 19000;
	// b 0x822f2d34
	goto loc_822F2D34;
loc_822F3460:
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28460
	ctx.r4.s64 = ctx.r11.s64 + 28460;
	// bl 0x822f3c00
	ctx.lr = 0x822F347C;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19008
	ctx.r4.s64 = ctx.r11.s64 + 19008;
	// bl 0x822f3dc8
	ctx.lr = 0x822F348C;
	sub_822F3DC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,19028
	ctx.r4.s64 = ctx.r11.s64 + 19028;
loc_822F3498:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F34A0;
	sub_822F3C00(ctx, base);
	// b 0x822f37c4
	goto loc_822F37C4;
loc_822F34A4:
	// rlwinm. r11,r29,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// lwz r11,8240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8240);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bgt cr6,0x822f34bc
	if (ctx.cr6.gt) goto loc_822F34BC;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822F34BC:
	// rlwinm. r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8240(r31)
	REX_STORE_U32(r31.u32 + 8240, ctx.r11.u32);
	// rlwinm r21,r29,27,31,31
	r21.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x1;
	// beq 0x822f3568
	if (ctx.cr0.eq) goto loc_822F3568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f39a0
	ctx.lr = 0x822F34D4;
	sub_822F39A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f34f4
	if (ctx.cr0.eq) goto loc_822F34F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r11,19252
	ctx.r4.s64 = ctx.r11.s64 + 19252;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F34F4;
	sub_822F3C00(ctx, base);
loc_822F34F4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r21,24
	ctx.r10.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,28460
	r30.s64 = ctx.r11.s64 + 28460;
	// beq 0x822f3544
	if (ctx.cr0.eq) goto loc_822F3544;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3510;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19120
	ctx.r4.s64 = ctx.r11.s64 + 19120;
	// bl 0x822f3dc8
	ctx.lr = 0x822F3520;
	sub_822F3DC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3938
	ctx.lr = 0x822F3528;
	sub_822F3938(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3544
	if (ctx.cr0.eq) goto loc_822F3544;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19268
	ctx.r4.s64 = ctx.r11.s64 + 19268;
	// bl 0x822f3c00
	ctx.lr = 0x822F3544;
	sub_822F3C00(ctx, base);
loc_822F3544:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3550;
	sub_822F3C00(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// rlwinm r5,r29,28,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1d98
	ctx.lr = 0x822F3564;
	sub_822F1D98(ctx, base);
	// b 0x822f37c4
	goto loc_822F37C4;
loc_822F3568:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f37c4
	if (ctx.cr0.eq) goto loc_822F37C4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f14e8
	ctx.lr = 0x822F3578;
	sub_822F14E8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// clrlwi. r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r27,-14336
	r27.s64 = -939524096;
	// addi r25,r11,19268
	r25.s64 = ctx.r11.s64 + 19268;
	// addi r26,r10,19120
	r26.s64 = ctx.r10.s64 + 19120;
	// addi r29,r9,19252
	r29.s64 = ctx.r9.s64 + 19252;
	// addi r24,r8,19180
	r24.s64 = ctx.r8.s64 + 19180;
	// addi r23,r7,19172
	r23.s64 = ctx.r7.s64 + 19172;
	// addi r30,r6,28460
	r30.s64 = ctx.r6.s64 + 28460;
	// beq 0x822f35f8
	if (ctx.cr0.eq) goto loc_822F35F8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x822f35ec
	if (!ctx.cr6.eq) goto loc_822F35EC;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f35e0
	if (ctx.cr0.eq) goto loc_822F35E0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f1450
	ctx.lr = 0x822F35D4;
	sub_822F1450(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x822f35f0
	goto loc_822F35F0;
loc_822F35E0:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x822f35f0
	if (ctx.cr0.eq) goto loc_822F35F0;
loc_822F35EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F35F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f36a0
	if (ctx.cr0.eq) goto loc_822F36A0;
loc_822F35F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f39a0
	ctx.lr = 0x822F3600;
	sub_822F39A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f361c
	if (ctx.cr0.eq) goto loc_822F361C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F361C;
	sub_822F3C00(ctx, base);
loc_822F361C:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f365c
	if (ctx.cr0.eq) goto loc_822F365C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3630;
	sub_822F3C00(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3dc8
	ctx.lr = 0x822F363C;
	sub_822F3DC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3938
	ctx.lr = 0x822F3644;
	sub_822F3938(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f365c
	if (ctx.cr0.eq) goto loc_822F365C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F365C;
	sub_822F3C00(ctx, base);
loc_822F365C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3668;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x822f3694
	if (ctx.cr6.lt) goto loc_822F3694;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bne 0x822f368c
	if (!ctx.cr0.eq) goto loc_822F368C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_822F368C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3694;
	sub_822F3C00(ctx, base);
loc_822F3694:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1558
	ctx.lr = 0x822F36A0;
	sub_822F1558(ctx, base);
loc_822F36A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x822f36d8
	if (!ctx.cr6.eq) goto loc_822F36D8;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f36cc
	if (ctx.cr0.eq) goto loc_822F36CC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f1450
	ctx.lr = 0x822F36C0;
	sub_822F1450(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x822f36dc
	goto loc_822F36DC;
loc_822F36CC:
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x822f36dc
	if (ctx.cr0.eq) goto loc_822F36DC;
loc_822F36D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F36DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f37c4
	if (!ctx.cr0.eq) goto loc_822F37C4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f14e8
	ctx.lr = 0x822F36EC;
	sub_822F14E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x822f3720
	if (!ctx.cr0.eq) goto loc_822F3720;
	// bl 0x822f3938
	ctx.lr = 0x822F36FC;
	sub_822F3938(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3714
	if (ctx.cr0.eq) goto loc_822F3714;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3714;
	sub_822F3C00(ctx, base);
loc_822F3714:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,19040
	ctx.r4.s64 = ctx.r11.s64 + 19040;
	// b 0x822f3784
	goto loc_822F3784;
loc_822F3720:
	// bl 0x822f39a0
	ctx.lr = 0x822F3724;
	sub_822F39A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3740
	if (ctx.cr0.eq) goto loc_822F3740;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3740;
	sub_822F3C00(ctx, base);
loc_822F3740:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3780
	if (ctx.cr0.eq) goto loc_822F3780;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3754;
	sub_822F3C00(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3dc8
	ctx.lr = 0x822F3760;
	sub_822F3DC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3938
	ctx.lr = 0x822F3768;
	sub_822F3938(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3780
	if (ctx.cr0.eq) goto loc_822F3780;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F3780;
	sub_822F3C00(ctx, base);
loc_822F3780:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_822F3784:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F378C;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x822f37b8
	if (ctx.cr6.lt) goto loc_822F37B8;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bne 0x822f37b0
	if (!ctx.cr0.eq) goto loc_822F37B0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_822F37B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F37B8;
	sub_822F3C00(ctx, base);
loc_822F37B8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f1938
	ctx.lr = 0x822F37C4;
	sub_822F1938(ctx, base);
loc_822F37C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3938
	ctx.lr = 0x822F37CC;
	sub_822F3938(ctx, base);
	// lwz r3,8236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8236);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82351220) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82351228;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8235124c
	if (ctx.cr6.eq) goto loc_8235124C;
	// lfs f13,80(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82351250
	goto loc_82351250;
loc_8235124C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82351250:
	// lfs f12,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,80(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + 80, temp.u32);
	// beq cr6,0x82351270
	if (ctx.cr6.eq) goto loc_82351270;
	// lfs f13,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82351274
	goto loc_82351274;
loc_82351270:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_82351274:
	// lfs f12,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,84(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + 84, temp.u32);
	// beq cr6,0x823512d4
	if (ctx.cr6.eq) goto loc_823512D4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823512a4
	if (!ctx.cr6.eq) goto loc_823512A4;
	// li r31,0
	r31.s64 = 0;
loc_823512A4:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823512d4
	if (ctx.cr6.eq) goto loc_823512D4;
loc_823512AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82351220
	ctx.lr = 0x823512B4;
	sub_82351220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823512c8
	if (!ctx.cr6.eq) goto loc_823512C8;
	// li r31,0
	r31.s64 = 0;
loc_823512C8:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823512ac
	if (!ctx.cr6.eq) goto loc_823512AC;
loc_823512D4:
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r30,r30,44
	r30.s64 = r30.s64 + 44;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x82351318
	if (ctx.cr6.eq) goto loc_82351318;
loc_823512E4:
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8234cf38
	ctx.lr = 0x823512F8;
	sub_8234CF38(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823508e0
	ctx.lr = 0x8235130C;
	sub_823508E0(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823512e4
	if (!ctx.cr6.eq) goto loc_823512E4;
loc_82351318:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823566B8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823566c8
	if (!ctx.cr6.eq) goto loc_823566C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823566C8:
	// lwz r11,460(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// addi r9,r3,460
	ctx.r9.s64 = ctx.r3.s64 + 460;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823566ec
	if (ctx.cr6.eq) goto loc_823566EC;
loc_823566DC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823566dc
	if (!ctx.cr6.eq) goto loc_823566DC;
loc_823566EC:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82357F50) {
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
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x82357F80;
	sub_82331A00(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357fa4
	if (ctx.cr6.eq) goto loc_82357FA4;
	// bl 0x82331458
	ctx.lr = 0x82357F90;
	sub_82331458(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x82357FA4;
	sub_82331A00(ctx, base);
loc_82357FA4:
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

DEFINE_REX_FUNC(sub_8235AFA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235afc4
	if (ctx.cr6.eq) goto loc_8235AFC4;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,568(r3)
	REX_STORE_U32(ctx.r3.u32 + 568, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,572(r3)
	REX_STORE_U32(ctx.r3.u32 + 572, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,576(r3)
	REX_STORE_U32(ctx.r3.u32 + 576, ctx.r8.u32);
loc_8235AFC4:
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,580(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 580, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// stb r10,561(r11)
	REX_STORE_U8(ctx.r11.u32 + 561, ctx.r10.u8);
	// ble cr6,0x8235afe0
	if (!ctx.cr6.gt) goto loc_8235AFE0;
	// stfs f1,584(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 584, temp.u32);
loc_8235AFE0:
	// stfs f2,584(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 584, temp.u32);
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// bge cr6,0x8235aff0
	if (!ctx.cr6.lt) goto loc_8235AFF0;
	// stfs f2,580(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 580, temp.u32);
loc_8235AFF0:
	// lfs f0,580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// stfs f13,588(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235EBF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8235EBF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235ed98
	if (!ctx.cr6.eq) goto loc_8235ED98;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8235ec90
	if (!ctx.cr6.gt) goto loc_8235EC90;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r5,r8,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// subf r28,r4,r7
	r28.u64 = ctx.r7.u64 - ctx.r4.u64;
	// stw r5,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r6,10708
	ctx.r6.s64 = ctx.r6.s64 + 10708;
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// li r7,538
	ctx.r7.s64 = 538;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r29,r4,r9
	r29.u64 = ctx.r9.u64 - ctx.r4.u64;
	// bl 0x82330e48
	ctx.lr = 0x8235EC68;
	sub_82330E48(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235ec80
	if (!ctx.cr6.eq) goto loc_8235EC80;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8235EC80:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + r29.u64;
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + r28.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
loc_8235EC90:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8235ecd8
	if (!ctx.cr6.gt) goto loc_8235ECD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235e8f8
	ctx.lr = 0x8235ECB8;
	sub_8235E8F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235ecd8
	if (ctx.cr6.eq) goto loc_8235ECD8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8235ECD8:
	// lbz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,37
	ctx.r11.s64 = r31.s64 + 37;
loc_8235ECE4:
	// lbz r7,-1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8235ed00
	if (!ctx.cr6.eq) goto loc_8235ED00;
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,9(r30)
	ctx.r7.u64 = REX_LOAD_U8(r30.u32 + 9);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8235ed14
	if (ctx.cr6.eq) goto loc_8235ED14;
loc_8235ED00:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x8235ece4
	if (ctx.cr6.lt) goto loc_8235ECE4;
	// b 0x8235ed2c
	goto loc_8235ED2C;
loc_8235ED14:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// stw r9,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r9.u32);
loc_8235ED2C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x823ef2f8
	ctx.lr = 0x8235ED3C;
	sub_823EF2F8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r8,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r10,r10,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// or r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 | ctx.r10.u64;
	// or r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 | ctx.r6.u64;
	// or r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r7.u32);
loc_8235ED98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8236C8D0) {
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
	ctx.lr = 0x8236C8D8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r28,-32129
	r28.s64 = -2105606144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r3,356
	r29.s64 = ctx.r3.s64 + 356;
	// stw r11,1012(r28)
	REX_STORE_U32(r28.u32 + 1012, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,10516(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10516);
	f31.f64 = double(temp.f32);
loc_8236C900:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x826a15c0
	ctx.lr = 0x8236C91C;
	sub_826A15C0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfsu f11,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// cmpwi cr6,r30,8192
	ctx.cr6.compare<int32_t>(r30.s32, 8192, ctx.xer);
	// blt cr6,0x8236c900
	if (ctx.cr6.lt) goto loc_8236C900;
	// addi r11,r31,356
	ctx.r11.s64 = r31.s64 + 356;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236c948
	if (ctx.cr6.eq) goto loc_8236C948;
	// lwz r9,1188(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1188);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8236C948:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// lwz r4,1200(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1200);
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,15500(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15500);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r5,r11,15472
	ctx.r5.s64 = ctx.r11.s64 + 15472;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,225
	ctx.r6.s64 = 225;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// divw r9,r10,r8
	ctx.r9.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// mullw r8,r9,r4
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// subfic r4,r8,512
	ctx.xer.ca = ctx.r8.u32 <= 512;
	ctx.r4.u64 = static_cast<uint64_t>(512) - ctx.r8.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r4.u32);
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8236C9B0;
	sub_82330E40(ctx, base);
	// stw r3,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236c9cc
	if (!ctx.cr6.eq) goto loc_8236C9CC;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
loc_8236C9CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 348, temp.u32);
	// ble cr6,0x8236ca2c
	if (!ctx.cr6.gt) goto loc_8236CA2C;
	// li r29,0
	r29.s64 = 0;
loc_8236C9EC:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r29,r11
	ctx.r9.u64 = r29.u64 + ctx.r11.u64;
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236CA10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236ca30
	if (!ctx.cr6.eq) goto loc_8236CA30;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236c9ec
	if (ctx.cr6.lt) goto loc_8236C9EC;
loc_8236CA2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236CA30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8237C9B8) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2c9c
	ctx.lr = 0x8237C9D0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,508(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 508);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f27,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f27.f64 = double(temp.f32);
	// lfs f26,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f26.f64 = double(temp.f32);
	// fmr f28,f27
	f28.f64 = f27.f64;
	// fmr f25,f27
	f25.f64 = f27.f64;
	// beq cr6,0x8237cc68
	if (ctx.cr6.eq) goto loc_8237CC68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,608(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 608);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,19084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19084);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8237cb0c
	if (ctx.cr6.eq) goto loc_8237CB0C;
	// lwz r11,624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// lbz r10,684(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 684);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8237cb0c
	if (!ctx.cr6.eq) goto loc_8237CB0C;
	// lwz r9,492(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 492);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8237cb0c
	if (ctx.cr6.eq) goto loc_8237CB0C;
	// addi r11,r9,38
	ctx.r11.s64 = ctx.r9.s64 + 38;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// ble cr6,0x8237ca70
	if (!ctx.cr6.gt) goto loc_8237CA70;
	// lfs f13,496(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8237ca70
	if (ctx.cr6.gt) goto loc_8237CA70;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmadds f0,f9,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f12.f64)));
	// b 0x8237ca74
	goto loc_8237CA74;
loc_8237CA70:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_8237CA74:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8237caa4
	if (!ctx.cr6.eq) goto loc_8237CAA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,19072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19072);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8237caa4
	if (!ctx.cr6.gt) goto loc_8237CAA4;
	// fnmsubs f1,f0,f31,f27
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f27.f64)));
	// bl 0x826a1830
	ctx.lr = 0x8237CA94;
	sub_826A1830(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5644(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5644);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8237CAA4:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8237cac0
	if (!ctx.cr6.eq) goto loc_8237CAC0;
	// lfs f13,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8237cac0
	if (!ctx.cr6.lt) goto loc_8237CAC0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8237CAC0:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,480
	ctx.r11.s64 = r31.s64 + 480;
	// stw r10,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r10.u32);
	// lfs f12,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 488);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,484(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f26
	ctx.cr6.compare(ctx.f11.f64, f26.f64);
	// beq cr6,0x8237cb08
	if (ctx.cr6.eq) goto loc_8237CB08;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, f26.f64);
	// beq cr6,0x8237cb08
	if (ctx.cr6.eq) goto loc_8237CB08;
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fdivs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fdivs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// stfs f7,496(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 496, temp.u32);
	// b 0x8237cb0c
	goto loc_8237CB0C;
loc_8237CB08:
	// stfs f26,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 496, temp.u32);
loc_8237CB0C:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// lfs f0,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 38;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8237cbb8
	if (ctx.cr6.lt) goto loc_8237CBB8;
loc_8237CB30:
	// lwz r10,492(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x8237cbb8
	if (!ctx.cr6.lt) goto loc_8237CBB8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8237cb60
	if (!ctx.cr6.eq) goto loc_8237CB60;
	// lbz r11,608(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237cbb0
	if (ctx.cr6.eq) goto loc_8237CBB0;
	// lwz r11,624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 624);
	// lbz r9,684(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 684);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8237cbb0
	if (!ctx.cr6.eq) goto loc_8237CBB0;
loc_8237CB60:
	// addi r11,r10,38
	ctx.r11.s64 = ctx.r10.s64 + 38;
	// lfs f0,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 38;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfsx f13,r7,r31
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,496(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 496, temp.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r9.u32);
	// lfsx f10,r5,r31
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x8237cb30
	if (!ctx.cr6.lt) goto loc_8237CB30;
	// b 0x8237cbb8
	goto loc_8237CBB8;
loc_8237CBB0:
	// lfs f0,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,496(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 496, temp.u32);
loc_8237CBB8:
	// lwz r9,492(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x8237cbd0
	if (ctx.cr6.lt) goto loc_8237CBD0;
loc_8237CBC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237c920
	ctx.lr = 0x8237CBCC;
	sub_8237C920(ctx, base);
	// b 0x8237cd9c
	goto loc_8237CD9C;
loc_8237CBD0:
	// addi r11,r9,38
	ctx.r11.s64 = ctx.r9.s64 + 38;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// ble cr6,0x8237cc0c
	if (!ctx.cr6.gt) goto loc_8237CC0C;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,496(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmadds f0,f9,f10,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f13.f64)));
	// b 0x8237cc10
	goto loc_8237CC10;
loc_8237CC0C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_8237CC10:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8237cc28
	if (!ctx.cr6.eq) goto loc_8237CC28;
	// lfs f13,500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8237cc28
	if (!ctx.cr6.lt) goto loc_8237CC28;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8237CC28:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8237cc38
	if (!ctx.cr6.eq) goto loc_8237CC38;
	// fnmsubs f28,f0,f31,f27
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f27.f64)));
	// b 0x8237cc68
	goto loc_8237CC68;
loc_8237CC38:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// addi r11,r9,13680
	ctx.r11.s64 = ctx.r9.s64 + 13680;
	// lfs f13,11200(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 11200);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,768
	ctx.r8.s64 = ctx.r11.s64 + 768;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r6,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r6.u64;
	// lfs f28,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	f28.f64 = double(temp.f32);
loc_8237CC68:
	// lbz r11,584(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 584);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,624(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 624);
	// lfs f13,448(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f13.f64 = double(temp.f32);
	// mullw r8,r11,r11
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// lfs f12,444(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 444);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f0,19080(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19080);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,700(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 700);
	// lwz r7,692(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 692);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// mullw r11,r6,r6
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r6.s32);
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// mullw r4,r7,r7
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmuls f31,f4,f0
	f31.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f30,f3,f0
	f30.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f29,f5,f0
	f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// blt cr6,0x8237cd28
	if (ctx.cr6.lt) goto loc_8237CD28;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,19076(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19076);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x826a14e0
	ctx.lr = 0x8237CD00;
	sub_826A14E0(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,596(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 596);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f25,f9,f10,f27
	f25.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, f27.f64)));
	// fcmpu cr6,f25,f26
	ctx.cr6.compare(f25.f64, f26.f64);
	// bge cr6,0x8237cd1c
	if (!ctx.cr6.lt) goto loc_8237CD1C;
	// fmr f25,f26
	f25.f64 = f26.f64;
	// b 0x8237cd28
	goto loc_8237CD28;
loc_8237CD1C:
	// fcmpu cr6,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f25.f64, f27.f64);
	// ble cr6,0x8237cd28
	if (!ctx.cr6.gt) goto loc_8237CD28;
	// fmr f25,f27
	f25.f64 = f27.f64;
loc_8237CD28:
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * f29.f64));
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f10,f11,f25
	ctx.f10.f64 = double(float(ctx.f11.f64 * f25.f64));
	// fmuls f0,f10,f28
	ctx.f0.f64 = double(float(ctx.f10.f64 * f28.f64));
	// bne cr6,0x8237cd5c
	if (!ctx.cr6.eq) goto loc_8237CD5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8237cbc4
	if (ctx.cr6.lt) goto loc_8237CBC4;
loc_8237CD5C:
	// lwz r11,624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 624);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 672);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8234bbc8
	ctx.lr = 0x8237CD78;
	sub_8234BBC8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234d160
	ctx.lr = 0x8237CD8C;
	sub_8234D160(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8237cbc4
	if (ctx.cr6.eq) goto loc_8237CBC4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237CD9C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2ce8
	ctx.lr = 0x8237CDA8;
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

DEFINE_REX_FUNC(sub_823A94B8) {
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
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,2248
	ctx.r6.s64 = 2248;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x823A94DC;
	sub_82331A00(ctx, base);
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

DEFINE_REX_FUNC(sub_823AA1B0) {
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
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aa1dc
	if (ctx.cr6.eq) goto loc_823AA1DC;
	// stw r30,364(r11)
	REX_STORE_U32(ctx.r11.u32 + 364, r30.u32);
loc_823AA1DC:
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aa1ec
	if (ctx.cr6.eq) goto loc_823AA1EC;
	// stw r30,384(r11)
	REX_STORE_U32(ctx.r11.u32 + 384, r30.u32);
loc_823AA1EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1868
	ctx.lr = 0x823AA1F4;
	sub_823D1868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aa294
	if (!ctx.cr6.eq) goto loc_823AA294;
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa220
	if (ctx.cr6.eq) goto loc_823AA220;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AA21C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,396(r31)
	REX_STORE_U32(r31.u32 + 396, r30.u32);
loc_823AA220:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa244
	if (ctx.cr6.eq) goto loc_823AA244;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AA240;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
loc_823AA244:
	// lwz r3,768(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa268
	if (ctx.cr6.eq) goto loc_823AA268;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AA264;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,768(r31)
	REX_STORE_U32(r31.u32 + 768, r30.u32);
loc_823AA268:
	// lwz r3,772(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa28c
	if (ctx.cr6.eq) goto loc_823AA28C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AA288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,772(r31)
	REX_STORE_U32(r31.u32 + 772, r30.u32);
loc_823AA28C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,780(r31)
	REX_STORE_U32(r31.u32 + 780, r30.u32);
loc_823AA294:
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

DEFINE_REX_FUNC(sub_823AFD78) {
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
	ctx.lr = 0x823AFD80;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82354248
	ctx.lr = 0x823AFDC8;
	sub_82354248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823b01f8
	if (!ctx.cr6.eq) goto loc_823B01F8;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823afdec
	if (ctx.cr6.eq) goto loc_823AFDEC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8233e2b0
	ctx.lr = 0x823AFDEC;
	sub_8233E2B0(ctx, base);
loc_823AFDEC:
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r11,23036(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 23036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823afe00
	if (ctx.cr6.eq) goto loc_823AFE00;
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_823AFE00:
	// lwz r11,284(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 284);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823aff88
	if (ctx.cr6.eq) goto loc_823AFF88;
	// lwz r10,208(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 208);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x823aff44
	if (ctx.cr6.gt) goto loc_823AFF44;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-452
	ctx.r12.s64 = ctx.r12.s64 + -452;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823AFEA4;
	case 1:
		goto loc_823AFE6C;
	case 2:
		goto loc_823AFE74;
	case 3:
		goto loc_823AFE7C;
	case 4:
		goto loc_823AFE84;
	case 5:
		goto loc_823AFE84;
	case 6:
		goto loc_823AFEA4;
	case 7:
		goto loc_823AFEA4;
	case 8:
		goto loc_823AFEA4;
	case 9:
		goto loc_823AFEA4;
	case 10:
		goto loc_823AFEA4;
	case 11:
		goto loc_823AFEA4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823AFE6C:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x823afe88
	goto loc_823AFE88;
loc_823AFE74:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x823afe88
	goto loc_823AFE88;
loc_823AFE7C:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x823afe88
	goto loc_823AFE88;
loc_823AFE84:
	// li r10,32
	ctx.r10.s64 = 32;
loc_823AFE88:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulld r9,r10,r11
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r11.u64);
	// rldicl r8,r9,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// b 0x823aff48
	goto loc_823AFF48;
loc_823AFEA4:
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-324
	ctx.r12.s64 = ctx.r12.s64 + -324;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823AFF38;
	case 1:
		goto loc_823AFF44;
	case 2:
		goto loc_823AFF44;
	case 3:
		goto loc_823AFF44;
	case 4:
		goto loc_823AFF44;
	case 5:
		goto loc_823AFF44;
	case 6:
		goto loc_823AFEEC;
	case 7:
		goto loc_823AFF04;
	case 8:
		goto loc_823AFF20;
	case 9:
		goto loc_823AFF48;
	case 10:
		goto loc_823AFF48;
	case 11:
		goto loc_823AFF48;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823AFEEC:
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// b 0x823aff48
	goto loc_823AFF48;
loc_823AFF04:
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// b 0x823aff48
	goto loc_823AFF48;
loc_823AFF20:
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// li r10,28
	ctx.r10.s64 = 28;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// b 0x823aff48
	goto loc_823AFF48;
loc_823AFF38:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// b 0x823aff48
	goto loc_823AFF48;
loc_823AFF44:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823AFF48:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823AFF58;
	sub_826A2E60(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b01b8
	if (ctx.cr6.eq) goto loc_823B01B8;
	// sth r31,100(r29)
	REX_STORE_U16(r29.u32 + 100, r31.u16);
	// sth r26,90(r29)
	REX_STORE_U16(r29.u32 + 90, r26.u16);
	// sth r26,92(r29)
	REX_STORE_U16(r29.u32 + 92, r26.u16);
	// sth r26,94(r29)
	REX_STORE_U16(r29.u32 + 94, r26.u16);
	// sth r26,96(r29)
	REX_STORE_U16(r29.u32 + 96, r26.u16);
	// sth r26,98(r29)
	REX_STORE_U16(r29.u32 + 98, r26.u16);
	// b 0x823b01b8
	goto loc_823B01B8;
loc_823AFF88:
	// lwz r11,208(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 208);
	// lwz r9,23036(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 23036);
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r28,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x823afff0
	if (ctx.cr6.eq) goto loc_823AFFF0;
	// lwz r11,4368(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4368);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823afff0
	if (!ctx.cr6.eq) goto loc_823AFFF0;
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823affc4
	if (ctx.cr6.eq) goto loc_823AFFC4;
	// lwz r27,1220(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 1220);
	// b 0x823affc8
	goto loc_823AFFC8;
loc_823AFFC4:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_823AFFC8:
	// lwz r3,23036(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 23036);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AFFE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823afff4
	goto loc_823AFFF4;
loc_823AFFF0:
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823AFFF4:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b0024
	if (ctx.cr6.eq) goto loc_823B0024;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823496f8
	ctx.lr = 0x823B0020;
	sub_823496F8(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823B0024:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b006c
	if (ctx.cr6.eq) goto loc_823B006C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,208(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 208);
	// li r8,1
	ctx.r8.s64 = 1;
	// mullw r7,r10,r31
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// lfs f1,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823b0200
	ctx.lr = 0x823B005C;
	sub_823B0200(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823b01b8
	if (ctx.cr6.eq) goto loc_823B01B8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_823B006C:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// beq cr6,0x823b01b8
	if (ctx.cr6.eq) goto loc_823B01B8;
	// lwz r10,208(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 208);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x823b01a4
	if (ctx.cr6.gt) goto loc_823B01A4;
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,156
	ctx.r12.s64 = ctx.r12.s64 + 156;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823B0104;
	case 1:
		goto loc_823B00CC;
	case 2:
		goto loc_823B00D4;
	case 3:
		goto loc_823B00DC;
	case 4:
		goto loc_823B00E4;
	case 5:
		goto loc_823B00E4;
	case 6:
		goto loc_823B0104;
	case 7:
		goto loc_823B0104;
	case 8:
		goto loc_823B0104;
	case 9:
		goto loc_823B0104;
	case 10:
		goto loc_823B0104;
	case 11:
		goto loc_823B0104;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823B00CC:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x823b00e8
	goto loc_823B00E8;
loc_823B00D4:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x823b00e8
	goto loc_823B00E8;
loc_823B00DC:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x823b00e8
	goto loc_823B00E8;
loc_823B00E4:
	// li r10,32
	ctx.r10.s64 = 32;
loc_823B00E8:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mulld r9,r10,r11
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r11.u64);
	// rldicl r8,r9,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// b 0x823b01a8
	goto loc_823B01A8;
loc_823B0104:
	// lis r12,-32197
	ctx.r12.s64 = -2110062592;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,284
	ctx.r12.s64 = ctx.r12.s64 + 284;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823B0198;
	case 1:
		goto loc_823B01A4;
	case 2:
		goto loc_823B01A4;
	case 3:
		goto loc_823B01A4;
	case 4:
		goto loc_823B01A4;
	case 5:
		goto loc_823B01A4;
	case 6:
		goto loc_823B014C;
	case 7:
		goto loc_823B0164;
	case 8:
		goto loc_823B0180;
	case 9:
		goto loc_823B01A8;
	case 10:
		goto loc_823B01A8;
	case 11:
		goto loc_823B01A8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823B014C:
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// b 0x823b01a8
	goto loc_823B01A8;
loc_823B0164:
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// b 0x823b01a8
	goto loc_823B01A8;
loc_823B0180:
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// li r10,28
	ctx.r10.s64 = 28;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// b 0x823b01a8
	goto loc_823B01A8;
loc_823B0198:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// b 0x823b01a8
	goto loc_823B01A8;
loc_823B01A4:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_823B01A8:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x823B01B8;
	sub_826A1E70(ctx, base);
loc_823B01B8:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r24,280(r29)
	REX_STORE_U32(r29.u32 + 280, r24.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b01f4
	if (ctx.cr6.eq) goto loc_823B01F4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8233e2b0
	ctx.lr = 0x823B01D8;
	sub_8233E2B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r10,88(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 88);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// sth r26,88(r29)
	REX_STORE_U16(r29.u32 + 88, r26.u16);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,86(r29)
	REX_STORE_U16(r29.u32 + 86, ctx.r8.u16);
loc_823B01F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B01F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823D0FB0) {
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
	ctx.lr = 0x823D0FB8;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d1374
	if (ctx.cr6.eq) goto loc_823D1374;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r22,r7,-1
	r22.s64 = ctx.r7.s64 + -1;
	// addi r26,r11,-28912
	r26.s64 = ctx.r11.s64 + -28912;
loc_823D0FD4:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r10,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r11,r9,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// addi r10,r23,4
	ctx.r10.s64 = r23.s64 + 4;
	// or r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r30,r9,16,24,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// extsh r29,r9
	r29.s64 = ctx.r9.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823d101c
	if (ctx.cr6.lt) goto loc_823D101C;
	// cmpwi cr6,r30,89
	ctx.cr6.compare<int32_t>(r30.s32, 89, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x823d1020
	if (ctx.cr6.lt) goto loc_823D1020;
loc_823D101C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823D1020:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d1370
	if (ctx.cr6.eq) goto loc_823D1370;
	// rlwinm r24,r8,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r29,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, r29.u16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// add r4,r24,r4
	ctx.r4.u64 = r24.u64 + ctx.r4.u64;
	// beq cr6,0x823d1360
	if (ctx.cr6.eq) goto loc_823D1360;
	// addi r25,r10,-1
	r25.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_823D1048:
	// addi r7,r26,64
	ctx.r7.s64 = r26.s64 + 64;
	// lbzu r11,1(r25)
	ea = 1 + r25.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r25.u32 = ea;
	// clrlwi r31,r11,28
	r31.u64 = ctx.r11.u32 & 0xF;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// lhzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// bgt cr6,0x823d117c
	if (ctx.cr6.gt) goto loc_823D117C;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4232
	ctx.r12.s64 = ctx.r12.s64 + 4232;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_823D10C4;
	case 1:
		goto loc_823D10D0;
	case 2:
		goto loc_823D10DC;
	case 3:
		goto loc_823D10F8;
	case 4:
		goto loc_823D10F0;
	case 5:
		goto loc_823D1100;
	case 6:
		goto loc_823D1110;
	case 7:
		goto loc_823D1178;
	case 8:
		goto loc_823D1128;
	case 9:
		goto loc_823D1134;
	case 10:
		goto loc_823D1140;
	case 11:
		goto loc_823D1174;
	case 12:
		goto loc_823D1154;
	case 13:
		goto loc_823D115C;
	case 14:
		goto loc_823D1164;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823D10C4:
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d117c
	goto loc_823D117C;
loc_823D10D0:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d117c
	goto loc_823D117C;
loc_823D10DC:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d117c
	goto loc_823D117C;
loc_823D10F0:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823D10F8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d117c
	goto loc_823D117C;
loc_823D1100:
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d117c
	goto loc_823D117C;
loc_823D1110:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d117c
	goto loc_823D117C;
loc_823D1128:
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d1178
	goto loc_823D1178;
loc_823D1134:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d1178
	goto loc_823D1178;
loc_823D1140:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d1178
	goto loc_823D1178;
loc_823D1154:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// b 0x823d1170
	goto loc_823D1170;
loc_823D115C:
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// b 0x823d1170
	goto loc_823D1170;
loc_823D1164:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_823D1170:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823D1174:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823D1178:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_823D117C:
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// extsh r10,r29
	ctx.r10.s64 = r29.s16;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// beq cr6,0x823d119c
	if (ctx.cr6.eq) goto loc_823D119C;
	// cmpwi cr6,r29,-32768
	ctx.cr6.compare<int32_t>(r29.s32, -32768, ctx.xer);
	// li r29,-32768
	r29.s64 = -32768;
	// blt cr6,0x823d119c
	if (ctx.cr6.lt) goto loc_823D119C;
	// li r29,32767
	r29.s64 = 32767;
loc_823D119C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// add. r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x823d11b4
	if (!ctx.cr0.lt) goto loc_823D11B4;
	// li r31,0
	r31.s64 = 0;
	// b 0x823d11c0
	goto loc_823D11C0;
loc_823D11B4:
	// cmpwi cr6,r31,89
	ctx.cr6.compare<int32_t>(r31.s32, 89, ctx.xer);
	// blt cr6,0x823d11c0
	if (ctx.cr6.lt) goto loc_823D11C0;
	// li r31,88
	r31.s64 = 88;
loc_823D11C0:
	// sth r29,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, r29.u16);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r4,r24,r4
	ctx.r4.u64 = r24.u64 + ctx.r4.u64;
	// beq 0x823d1360
	if (ctx.cr0.eq) goto loc_823D1360;
	// addi r11,r26,64
	ctx.r11.s64 = r26.s64 + 64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r27,28,4,31
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 28) & 0xFFFFFFF;
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// lhzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// bgt cr6,0x823d1300
	if (ctx.cr6.gt) goto loc_823D1300;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4620
	ctx.r12.s64 = ctx.r12.s64 + 4620;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_823D1248;
	case 1:
		goto loc_823D1254;
	case 2:
		goto loc_823D1260;
	case 3:
		goto loc_823D127C;
	case 4:
		goto loc_823D1274;
	case 5:
		goto loc_823D1284;
	case 6:
		goto loc_823D1294;
	case 7:
		goto loc_823D12FC;
	case 8:
		goto loc_823D12AC;
	case 9:
		goto loc_823D12B8;
	case 10:
		goto loc_823D12C4;
	case 11:
		goto loc_823D12F8;
	case 12:
		goto loc_823D12D8;
	case 13:
		goto loc_823D12E0;
	case 14:
		goto loc_823D12E8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823D1248:
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d1300
	goto loc_823D1300;
loc_823D1254:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d1300
	goto loc_823D1300;
loc_823D1260:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d1300
	goto loc_823D1300;
loc_823D1274:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823D127C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d1300
	goto loc_823D1300;
loc_823D1284:
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d1300
	goto loc_823D1300;
loc_823D1294:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d1300
	goto loc_823D1300;
loc_823D12AC:
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d12fc
	goto loc_823D12FC;
loc_823D12B8:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d12fc
	goto loc_823D12FC;
loc_823D12C4:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d12fc
	goto loc_823D12FC;
loc_823D12D8:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// b 0x823d12f4
	goto loc_823D12F4;
loc_823D12E0:
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// b 0x823d12f4
	goto loc_823D12F4;
loc_823D12E8:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_823D12F4:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823D12F8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823D12FC:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_823D1300:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d1320
	if (ctx.cr6.eq) goto loc_823D1320;
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// blt cr6,0x823d1320
	if (ctx.cr6.lt) goto loc_823D1320;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_823D1320:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// add. r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823d133c
	if (!ctx.cr0.lt) goto loc_823D133C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823d1348
	goto loc_823D1348;
loc_823D133C:
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// blt cr6,0x823d1348
	if (ctx.cr6.lt) goto loc_823D1348;
	// li r11,88
	ctx.r11.s64 = 88;
loc_823D1348:
	// sth r10,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// add r4,r24,r4
	ctx.r4.u64 = r24.u64 + ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x823d1048
	if (!ctx.cr0.eq) goto loc_823D1048;
loc_823D1360:
	// add r23,r23,r6
	r23.u64 = r23.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823d0fd4
	if (!ctx.cr6.eq) goto loc_823D0FD4;
	// b 0x826a1cf0
	return;
loc_823D1370:
	// li r3,19
	ctx.r3.s64 = 19;
loc_823D1374:
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823E8A90) {
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
	ctx.lr = 0x823E8A98;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823e8b40
	if (!ctx.cr6.eq) goto loc_823E8B40;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x823e83f0
	ctx.lr = 0x823E8ACC;
	sub_823E83F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e8af4
	if (ctx.cr6.eq) goto loc_823E8AF4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e8cb8
	ctx.lr = 0x823E8AE8;
	sub_823E8CB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823E8AF4:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// srawi r6,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r6.s64 = r29.s32 >> 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e8a90
	ctx.lr = 0x823E8B18;
	sub_823E8A90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e8968
	ctx.lr = 0x823E8B34;
	sub_823E8968(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823E8B40:
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x823e83f0
	ctx.lr = 0x823E8B50;
	sub_823E83F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823e8b8c
	if (ctx.cr6.eq) goto loc_823E8B8C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e8cb8
	ctx.lr = 0x823E8B6C;
	sub_823E8CB8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e8cb8
	ctx.lr = 0x823E8B80;
	sub_823E8CB8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823E8B8C:
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e8c50
	if (ctx.cr6.eq) goto loc_823E8C50;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e83f0
	ctx.lr = 0x823E8BA4;
	sub_823E83F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// beq cr6,0x823e8c08
	if (ctx.cr6.eq) goto loc_823E8C08;
	// srawi r7,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r7.s64 = r26.s32 >> 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e8a90
	ctx.lr = 0x823E8BCC;
	sub_823E8A90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e8968
	ctx.lr = 0x823E8BE8;
	sub_823E8968(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e8cb8
	ctx.lr = 0x823E8BFC;
	sub_823E8CB8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823E8C08:
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// srawi r6,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r6.s64 = r29.s32 >> 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e8a90
	ctx.lr = 0x823E8C24;
	sub_823E8A90(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e8968
	ctx.lr = 0x823E8C44;
	sub_823E8968(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x823e8c98
	goto loc_823E8C98;
loc_823E8C50:
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// srawi r6,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r6.s64 = r26.s32 >> 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823e8a90
	ctx.lr = 0x823E8C74;
	sub_823E8A90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e8968
	ctx.lr = 0x823E8C90;
	sub_823E8968(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_823E8C98:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823e8968
	ctx.lr = 0x823E8CAC;
	sub_823E8968(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823EEBB0) {
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
	// bl 0x82793ad4
	ctx.lr = 0x823EEBC0;
	__imp__NtReleaseSemaphore(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eebd0
	if (ctx.cr0.lt) goto loc_823EEBD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823eebd8
	goto loc_823EEBD8;
loc_823EEBD0:
	// bl 0x823eff48
	ctx.lr = 0x823EEBD4;
	sub_823EFF48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EEBD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EF910) {
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
	// bl 0x82793b04
	ctx.lr = 0x823EF924;
	__imp__NtResumeThread(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ef938
	if (!ctx.cr0.lt) goto loc_823EF938;
	// bl 0x823f0020
	ctx.lr = 0x823EF930;
	sub_823F0020(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823ef93c
	goto loc_823EF93C;
loc_823EF938:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823EF93C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F0130) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793934
	ctx.lr = 0x823F0158;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-4
	ctx.r11.s64 = -4;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_823F2BA8) {
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
	ctx.lr = 0x823F2BB0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r29,r11,16,16,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r27,64
	r27.s64 = 64;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_823F2BDC:
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x823f2c60
	if (ctx.cr6.eq) goto loc_823F2C60;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f2c70
	if (ctx.cr6.gt) goto loc_823F2C70;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f2c70
	if (ctx.cr6.gt) goto loc_823F2C70;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f1c48
	ctx.lr = 0x823F2C20;
	sub_823F1C48(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x823f2c70
	if (ctx.cr0.eq) goto loc_823F2C70;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x823f1ed8
	ctx.lr = 0x823F2C44;
	sub_823F1ED8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823f22e0
	ctx.lr = 0x823F2C58;
	sub_823F22E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823f2ddc
	goto loc_823F2DDC;
loc_823F2C60:
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x823f2c70
	if (!ctx.cr6.eq) goto loc_823F2C70;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_823F2C70:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x823f2bdc
	if (ctx.cr6.lt) goto loc_823F2BDC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x823f2dd8
	if (ctx.cr6.eq) goto loc_823F2DD8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f2dd8
	if (ctx.cr0.eq) goto loc_823F2DD8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addis r30,r28,1
	r30.s64 = r28.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x823f2cbc
	if (ctx.cr6.gt) goto loc_823F2CBC;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_823F2CBC:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82793b54
	ctx.lr = 0x823F2CD8;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823f2d2c
	if (!ctx.cr0.lt) goto loc_823F2D2C;
loc_823F2CE0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x823f2d24
	if (ctx.cr6.eq) goto loc_823F2D24;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x823f2d00
	if (!ctx.cr6.lt) goto loc_823F2D00;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_823F2D00:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82793b54
	ctx.lr = 0x823F2D1C;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f2ce0
	if (ctx.cr0.lt) goto loc_823F2CE0;
loc_823F2D24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823f2dd8
	if (ctx.cr6.lt) goto loc_823F2DD8;
loc_823F2D2C:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x823f2d50
	if (ctx.cr6.gt) goto loc_823F2D50;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_823F2D50:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82793b54
	ctx.lr = 0x823F2D6C;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x823f2dc0
	if (ctx.cr0.lt) goto loc_823F2DC0;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x823f2a40
	ctx.lr = 0x823F2D9C;
	sub_823F2A40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823f2dac
	if (!ctx.cr0.eq) goto loc_823F2DAC;
	// lis r30,-16384
	r30.s64 = -1073741824;
	// ori r30,r30,23
	r30.u64 = r30.u64 | 23;
loc_823F2DAC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823f2dc0
	if (ctx.cr6.lt) goto loc_823F2DC0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x823f2ddc
	goto loc_823F2DDC;
loc_823F2DC0:
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82793b64
	ctx.lr = 0x823F2DD8;
	__imp__NtFreeVirtualMemory(ctx, base);
loc_823F2DD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F2DDC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824008D0) {
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
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824008F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x826a4440
	ctx.lr = 0x82400904;
	ppc_longjmp(ctx.r3.u32, ctx.r4.s32);
}

DEFINE_REX_FUNC(sub_82403CC8) {
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
	ctx.lr = 0x82403CD0;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x82404158
	if (ctx.cr6.lt) goto loc_82404158;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,8275
	ctx.r10.s64 = 542310400;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// ori r10,r10,17476
	ctx.r10.u64 = ctx.r10.u64 | 17476;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82404158
	if (!ctx.cr6.eq) goto loc_82404158;
	// addi r30,r5,-4
	r30.s64 = ctx.r5.s64 + -4;
	// addi r31,r4,4
	r31.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r30,124
	ctx.cr6.compare<uint32_t>(r30.u32, 124, ctx.xer);
	// blt cr6,0x82404158
	if (ctx.cr6.lt) goto loc_82404158;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82403D30;
	sub_826A1E70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82403a98
	ctx.lr = 0x82403D3C;
	sub_82403A98(ctx, base);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r18,r31,124
	r18.s64 = r31.s64 + 124;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r17,r30,-124
	r17.s64 = r30.s64 + -124;
	// rlwinm. r31,r11,0,8,8
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,12(r16)
	REX_STORE_U32(r16.u32 + 12, ctx.r10.u32);
	// stw r9,16(r16)
	REX_STORE_U32(r16.u32 + 16, ctx.r9.u32);
	// bne 0x82403d68
	if (!ctx.cr0.eq) goto loc_82403D68;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82403D68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,20(r16)
	REX_STORE_U32(r16.u32 + 20, ctx.r11.u32);
	// bne cr6,0x82403d7c
	if (!ctx.cr6.eq) goto loc_82403D7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r16)
	REX_STORE_U32(r16.u32 + 20, ctx.r11.u32);
loc_82403D7C:
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm r11,r11,0,16,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC00;
	// cmplwi cr6,r11,64512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64512, ctx.xer);
	// bne cr6,0x82403d94
	if (!ctx.cr6.eq) goto loc_82403D94;
	// li r14,6
	r14.s64 = 6;
	// b 0x82403da0
	goto loc_82403DA0;
loc_82403D94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82404158
	if (!ctx.cr6.eq) goto loc_82404158;
	// li r14,1
	r14.s64 = 1;
loc_82403DA0:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r15,r11
	r15.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82403db4
	if (!ctx.cr6.eq) goto loc_82403DB4;
	// li r15,1
	r15.s64 = 1;
loc_82403DB4:
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82403dc4
	if (ctx.cr0.eq) goto loc_82403DC4;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82403DC4:
	// lis r12,12
	ctx.r12.s64 = 786432;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// ori r12,r12,17506
	ctx.r12.u64 = ctx.r12.u64 | 17506;
	// addi r9,r10,-30528
	ctx.r9.s64 = ctx.r10.s64 + -30528;
	// and r7,r11,r12
	ctx.r7.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,14
	ctx.r12.s64 = 917504;
	// lwz r10,-30528(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -30528);
	// clrlwi r4,r11,12
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFFF;
	// ori r12,r12,16448
	ctx.r12.u64 = ctx.r12.u64 | 16448;
	// rlwinm r3,r10,0,26,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// and r6,r11,r12
	ctx.r6.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,12
	ctx.r12.s64 = 786432;
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// ori r12,r12,17472
	ctx.r12.u64 = ctx.r12.u64 | 17472;
	// rlwinm r4,r4,0,30,12
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFF80003;
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,12
	ctx.r12.s64 = 786432;
	// ori r12,r12,16448
	ctx.r12.u64 = ctx.r12.u64 | 16448;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x82403ec4
	goto loc_82403EC4;
loc_82403E14:
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bne cr6,0x82403ebc
	if (!ctx.cr6.eq) goto loc_82403EBC;
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82403ebc
	if (!ctx.cr6.eq) goto loc_82403EBC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82403e44
	if (ctx.cr6.eq) goto loc_82403E44;
	// lwz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r30,176(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82403ebc
	if (!ctx.cr6.eq) goto loc_82403EBC;
loc_82403E44:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82403e5c
	if (ctx.cr6.eq) goto loc_82403E5C;
	// lwz r3,16(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r30,180(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82403ebc
	if (!ctx.cr6.eq) goto loc_82403EBC;
loc_82403E5C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82403e74
	if (ctx.cr6.eq) goto loc_82403E74;
	// lwz r3,20(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r30,184(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82403ebc
	if (!ctx.cr6.eq) goto loc_82403EBC;
loc_82403E74:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82403e8c
	if (ctx.cr6.eq) goto loc_82403E8C;
	// lwz r3,24(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r30,188(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82403ebc
	if (!ctx.cr6.eq) goto loc_82403EBC;
loc_82403E8C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82403ea4
	if (ctx.cr6.eq) goto loc_82403EA4;
	// lwz r3,28(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r30,192(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82403ebc
	if (!ctx.cr6.eq) goto loc_82403EBC;
loc_82403EA4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82403ecc
	if (ctx.cr6.eq) goto loc_82403ECC;
	// lwz r3,32(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r30,196(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82403ecc
	if (ctx.cr6.eq) goto loc_82403ECC;
loc_82403EBC:
	// lwzu r3,36(r9)
	ea = 36 + ctx.r9.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwinm r3,r3,0,26,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
loc_82403EC4:
	// cmpwi cr6,r3,-449
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -449, ctx.xer);
	// bne cr6,0x82403e14
	if (!ctx.cr6.eq) goto loc_82403E14;
loc_82403ECC:
	// lwz r23,0(r9)
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r23,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// beq cr6,0x82404158
	if (ctx.cr6.eq) goto loc_82404158;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823fccc8
	ctx.lr = 0x82403EE4;
	sub_823FCCC8(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82403ef8
	if (ctx.cr6.eq) goto loc_82403EF8;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82403f08
	goto loc_82403F08;
loc_82403EF8:
	// cmplwi cr6,r14,6
	ctx.cr6.compare<uint32_t>(r14.u32, 6, ctx.xer);
	// li r11,18
	ctx.r11.s64 = 18;
	// beq cr6,0x82403f08
	if (ctx.cr6.eq) goto loc_82403F08;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82403F08:
	// stw r11,68(r16)
	REX_STORE_U32(r16.u32 + 68, ctx.r11.u32);
	// li r27,0
	r27.s64 = 0;
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82403f34
	if (!ctx.cr6.eq) goto loc_82403F34;
	// cmplwi cr6,r17,1024
	ctx.cr6.compare<uint32_t>(r17.u32, 1024, ctx.xer);
	// blt cr6,0x82404158
	if (ctx.cr6.lt) goto loc_82404158;
	// mr r25,r18
	r25.u64 = r18.u64;
	// addi r18,r18,1024
	r18.s64 = r18.s64 + 1024;
	// addi r17,r17,-1024
	r17.s64 = r17.s64 + -1024;
	// b 0x82403f38
	goto loc_82403F38;
loc_82403F34:
	// mr r25,r27
	r25.u64 = r27.u64;
loc_82403F38:
	// mr r24,r27
	r24.u64 = r27.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82404144
	if (ctx.cr6.eq) goto loc_82404144;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r22,-1
	r22.s64 = -1;
	// ori r20,r11,18
	r20.u64 = ctx.r11.u64 | 18;
loc_82403F58:
	// lwz r30,12(r16)
	r30.u64 = REX_LOAD_U32(r16.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r28,16(r16)
	r28.u64 = REX_LOAD_U32(r16.u32 + 16);
	// lwz r29,20(r16)
	r29.u64 = REX_LOAD_U32(r16.u32 + 20);
	// bne cr6,0x82403f74
	if (!ctx.cr6.eq) goto loc_82403F74;
	// mr r21,r16
	r21.u64 = r16.u64;
	// b 0x82403fc0
	goto loc_82403FC0;
loc_82403F74:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x823f02b8
	ctx.lr = 0x82403F80;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82403fac
	if (ctx.cr0.eq) goto loc_82403FAC;
	// stw r22,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r27.u32);
	// stw r27,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r27.u32);
	// stw r27,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r27.u32);
	// stw r27,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r27.u32);
	// b 0x82403fb0
	goto loc_82403FB0;
loc_82403FAC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82403FB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240414c
	if (ctx.cr6.eq) goto loc_8240414C;
	// stw r11,80(r21)
	REX_STORE_U32(r21.u32 + 80, ctx.r11.u32);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
loc_82403FC0:
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x82404138
	if (ctx.cr6.eq) goto loc_82404138;
loc_82403FCC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82403fdc
	if (!ctx.cr6.eq) goto loc_82403FDC;
	// mr r31,r21
	r31.u64 = r21.u64;
	// b 0x82404028
	goto loc_82404028;
loc_82403FDC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x823f02b8
	ctx.lr = 0x82403FE8;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82404014
	if (ctx.cr0.eq) goto loc_82404014;
	// stw r22,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r27.u32);
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r27.u32);
	// stw r27,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r27.u32);
	// stw r27,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r27.u32);
	// stw r27,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r27.u32);
	// b 0x82404018
	goto loc_82404018;
loc_82404014:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82404018:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240414c
	if (ctx.cr6.eq) goto loc_8240414C;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82404028:
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// rlwinm r11,r23,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r10,11
	ctx.r10.u64 = ctx.r10.u64 | 11;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x824040b8
	if (ctx.cr6.lt) goto loc_824040B8;
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824040ac
	if (!ctx.cr6.gt) goto loc_824040AC;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824040b8
	if (!ctx.cr6.gt) goto loc_824040B8;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824040ac
	if (!ctx.cr6.gt) goto loc_824040AC;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// beq cr6,0x824040a0
	if (ctx.cr6.eq) goto loc_824040A0;
	// ble cr6,0x824040b8
	if (!ctx.cr6.gt) goto loc_824040B8;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,20
	ctx.r10.u64 = ctx.r10.u64 | 20;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x824040b8
	if (ctx.cr6.gt) goto loc_824040B8;
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// rlwinm r11,r11,2,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
loc_82404090:
	// addi r10,r28,3
	ctx.r10.s64 = r28.s64 + 3;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x824040c8
	goto loc_824040C8;
loc_824040A0:
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// rlwinm r11,r11,1,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFF8;
	// b 0x82404090
	goto loc_82404090;
loc_824040AC:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// rlwinm r11,r11,1,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// b 0x824040c4
	goto loc_824040C4;
loc_824040B8:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
loc_824040C4:
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
loc_824040C8:
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// stw r18,4(r31)
	REX_STORE_U32(r31.u32 + 4, r18.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r25,8(r31)
	REX_STORE_U32(r31.u32 + 8, r25.u32);
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
	// stw r27,60(r31)
	REX_STORE_U32(r31.u32 + 60, r27.u32);
	// rlwinm r8,r23,0,24,22
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmplw cr6,r17,r9
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r9.u32, ctx.xer);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// blt cr6,0x82404158
	if (ctx.cr6.lt) goto loc_82404158;
	// add r18,r9,r18
	r18.u64 = ctx.r9.u64 + r18.u64;
	// subf r17,r9,r17
	r17.u64 = r17.u64 - ctx.r9.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x82404114
	if (ctx.cr6.eq) goto loc_82404114;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
loc_82404114:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// beq cr6,0x82404120
	if (ctx.cr6.eq) goto loc_82404120;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_82404120:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// beq cr6,0x8240412c
	if (ctx.cr6.eq) goto loc_8240412C;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
loc_8240412C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r15
	ctx.cr6.compare<uint32_t>(r26.u32, r15.u32, ctx.xer);
	// blt cr6,0x82403fcc
	if (ctx.cr6.lt) goto loc_82403FCC;
loc_82404138:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r14
	ctx.cr6.compare<uint32_t>(r24.u32, r14.u32, ctx.xer);
	// blt cr6,0x82403f58
	if (ctx.cr6.lt) goto loc_82403F58;
loc_82404144:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82404160
	goto loc_82404160;
loc_8240414C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82404160
	goto loc_82404160;
loc_82404158:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82404160:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8241C128) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241CCB0) {
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
	ctx.lr = 0x8241CCB8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8241CCDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8241ccdc
	if (!ctx.cr6.eq) goto loc_8241CCDC;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x8241cd28
	if (ctx.cr6.gt) goto loc_8241CD28;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-28456
	ctx.r6.s64 = ctx.r11.s64 + -28456;
loc_8241CD08:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8241a4f0
	ctx.lr = 0x8241CD1C;
	sub_8241A4F0(ctx, base);
loc_8241CD1C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8241d27c
	goto loc_8241D27C;
loc_8241CD28:
	// lwz r27,260(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r10,r9,-29112
	ctx.r10.s64 = ctx.r9.s64 + -29112;
	// addi r9,r31,2
	ctx.r9.s64 = r31.s64 + 2;
	// stw r4,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r4.u32);
loc_8241CD4C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8241cd6c
	if (!ctx.cr0.eq) goto loc_8241CD6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8241cd4c
	if (!ctx.cr6.eq) goto loc_8241CD4C;
loc_8241CD6C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8241ce64
	if (!ctx.cr0.eq) goto loc_8241CE64;
	// lwz r11,180(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 180);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8241cdd8
	if (ctx.cr6.lt) goto loc_8241CDD8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x8241cdd8
	if (ctx.cr6.gt) goto loc_8241CDD8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// bl 0x8241ba48
	ctx.lr = 0x8241CD98;
	sub_8241BA48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241ce1c
	if (ctx.cr0.lt) goto loc_8241CE1C;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8241cdbc
	if (!ctx.cr6.eq) goto loc_8241CDBC;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8241CDB0:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x8241d274
	goto loc_8241D274;
loc_8241CDBC:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8241cdcc
	if (!ctx.cr6.eq) goto loc_8241CDCC;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8241cdb0
	goto loc_8241CDB0;
loc_8241CDCC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-28508
	ctx.r6.s64 = ctx.r11.s64 + -28508;
	// b 0x8241cd08
	goto loc_8241CD08;
loc_8241CDD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r29,28
	r30.s64 = r29.s64 + 28;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241c068
	ctx.lr = 0x8241CDF0;
	sub_8241C068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241ce04
	if (ctx.cr0.eq) goto loc_8241CE04;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x8241ce50
	goto loc_8241CE50;
loc_8241CE04:
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// bl 0x8241ba48
	ctx.lr = 0x8241CE14;
	sub_8241BA48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8241ce28
	if (!ctx.cr0.lt) goto loc_8241CE28;
loc_8241CE1C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-28548
	ctx.r6.s64 = ctx.r11.s64 + -28548;
	// b 0x8241cd08
	goto loc_8241CD08;
loc_8241CE28:
	// lwz r11,156(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 156);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r5,156(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 156);
	// bl 0x8241c9f0
	ctx.lr = 0x8241CE44;
	sub_8241C9F0(ctx, base);
	// lwz r11,156(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r29)
	REX_STORE_U32(r29.u32 + 156, ctx.r11.u32);
loc_8241CE50:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8241d278
	if (ctx.cr6.eq) goto loc_8241D278;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-28612
	ctx.r6.s64 = ctx.r11.s64 + -28612;
	// b 0x8241cd08
	goto loc_8241CD08;
loc_8241CE64:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r10,r10,-29116
	ctx.r10.s64 = ctx.r10.s64 + -29116;
	// addi r8,r31,2
	ctx.r8.s64 = r31.s64 + 2;
loc_8241CE74:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241ce94
	if (!ctx.cr0.eq) goto loc_8241CE94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8241ce74
	if (!ctx.cr6.eq) goto loc_8241CE74;
loc_8241CE94:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241cf00
	if (!ctx.cr0.eq) goto loc_8241CF00;
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
	// addi r30,r29,84
	r30.s64 = r29.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241c068
	ctx.lr = 0x8241CEB0;
	sub_8241C068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241cec4
	if (ctx.cr0.eq) goto loc_8241CEC4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x8241ceec
	goto loc_8241CEEC;
loc_8241CEC4:
	// lwz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 164);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r5,164(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 164);
	// bl 0x8241c9f0
	ctx.lr = 0x8241CEE0;
	sub_8241C9F0(ctx, base);
	// lwz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,164(r29)
	REX_STORE_U32(r29.u32 + 164, ctx.r11.u32);
loc_8241CEEC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8241d278
	if (ctx.cr6.eq) goto loc_8241D278;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-28676
	ctx.r6.s64 = ctx.r11.s64 + -28676;
	// b 0x8241cd08
	goto loc_8241CD08;
loc_8241CF00:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r9,r10,-28680
	ctx.r9.s64 = ctx.r10.s64 + -28680;
	// addi r8,r31,2
	ctx.r8.s64 = r31.s64 + 2;
loc_8241CF10:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241cf30
	if (!ctx.cr0.eq) goto loc_8241CF30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8241cf10
	if (!ctx.cr6.eq) goto loc_8241CF10;
loc_8241CF30:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,-28684
	ctx.r10.s64 = ctx.r11.s64 + -28684;
	// addi r9,r9,-28688
	ctx.r9.s64 = ctx.r9.s64 + -28688;
	// addi r8,r8,-28692
	ctx.r8.s64 = ctx.r8.s64 + -28692;
	// beq 0x8241d0c8
	if (ctx.cr0.eq) goto loc_8241D0C8;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r5,r31,2
	ctx.r5.s64 = r31.s64 + 2;
loc_8241CF5C:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// subf. r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8241cf7c
	if (!ctx.cr0.eq) goto loc_8241CF7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8241cf5c
	if (!ctx.cr6.eq) goto loc_8241CF5C;
loc_8241CF7C:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8241d0c8
	if (ctx.cr0.eq) goto loc_8241D0C8;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r5,r31,2
	ctx.r5.s64 = r31.s64 + 2;
loc_8241CF90:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// subf. r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8241cfb0
	if (!ctx.cr0.eq) goto loc_8241CFB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8241cf90
	if (!ctx.cr6.eq) goto loc_8241CF90;
loc_8241CFB0:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8241d0c8
	if (ctx.cr0.eq) goto loc_8241D0C8;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r5,r31,2
	ctx.r5.s64 = r31.s64 + 2;
loc_8241CFC4:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// subf. r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8241cfe4
	if (!ctx.cr0.eq) goto loc_8241CFE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8241cfc4
	if (!ctx.cr6.eq) goto loc_8241CFC4;
loc_8241CFE4:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8241d0c8
	if (ctx.cr0.eq) goto loc_8241D0C8;
	// lwz r11,176(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8241d0bc
	if (ctx.cr6.eq) goto loc_8241D0BC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r10,r10,-29120
	ctx.r10.s64 = ctx.r10.s64 + -29120;
	// addi r8,r31,2
	ctx.r8.s64 = r31.s64 + 2;
loc_8241D008:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241d028
	if (!ctx.cr0.eq) goto loc_8241D028;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8241d008
	if (!ctx.cr6.eq) goto loc_8241D008;
loc_8241D028:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241d0bc
	if (!ctx.cr0.eq) goto loc_8241D0BC;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r30,r29,56
	r30.s64 = r29.s64 + 56;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241c068
	ctx.lr = 0x8241D048;
	sub_8241C068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241d05c
	if (ctx.cr0.eq) goto loc_8241D05C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x8241d0a8
	goto loc_8241D0A8;
loc_8241D05C:
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// bl 0x8241ba48
	ctx.lr = 0x8241D06C;
	sub_8241BA48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8241d080
	if (!ctx.cr0.lt) goto loc_8241D080;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-28732
	ctx.r6.s64 = ctx.r11.s64 + -28732;
	// b 0x8241cd08
	goto loc_8241CD08;
loc_8241D080:
	// lwz r11,160(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 160);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r5,160(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 160);
	// bl 0x8241c9f0
	ctx.lr = 0x8241D09C;
	sub_8241C9F0(ctx, base);
	// lwz r11,160(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r29)
	REX_STORE_U32(r29.u32 + 160, ctx.r11.u32);
loc_8241D0A8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8241d278
	if (ctx.cr6.eq) goto loc_8241D278;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-28796
	ctx.r6.s64 = ctx.r11.s64 + -28796;
	// b 0x8241cd08
	goto loc_8241CD08;
loc_8241D0BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-28936
	ctx.r6.s64 = ctx.r11.s64 + -28936;
	// b 0x8241cd08
	goto loc_8241CD08;
loc_8241D0C8:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r6,r31,2
	ctx.r6.s64 = r31.s64 + 2;
loc_8241D0D0:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// subf. r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8241d0f0
	if (!ctx.cr0.eq) goto loc_8241D0F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8241d0d0
	if (!ctx.cr6.eq) goto loc_8241D0D0;
loc_8241D0F0:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8241d104
	if (!ctx.cr0.eq) goto loc_8241D104;
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x8241d184
	goto loc_8241D184;
loc_8241D104:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r7,r31,2
	ctx.r7.s64 = r31.s64 + 2;
loc_8241D10C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8241d12c
	if (!ctx.cr0.eq) goto loc_8241D12C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8241d10c
	if (!ctx.cr6.eq) goto loc_8241D10C;
loc_8241D12C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8241d140
	if (!ctx.cr0.eq) goto loc_8241D140;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r30,1
	r30.s64 = 1;
	// b 0x8241d184
	goto loc_8241D184;
loc_8241D140:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,2
	ctx.r8.s64 = r31.s64 + 2;
loc_8241D148:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241d168
	if (!ctx.cr0.eq) goto loc_8241D168;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8241d148
	if (!ctx.cr6.eq) goto loc_8241D148;
loc_8241D168:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241d17c
	if (!ctx.cr0.eq) goto loc_8241D17C;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r30,2
	r30.s64 = 2;
	// b 0x8241d184
	goto loc_8241D184;
loc_8241D17C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,3
	r30.s64 = 3;
loc_8241D184:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8241c068
	ctx.lr = 0x8241D194;
	sub_8241C068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241d1b0
	if (ctx.cr0.eq) goto loc_8241D1B0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// b 0x8241d238
	goto loc_8241D238;
loc_8241D1B0:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82448978
	ctx.lr = 0x8241D1C4;
	sub_82448978(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8241d27c
	if (ctx.cr0.lt) goto loc_8241D27C;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8241d1fc
	if (!ctx.cr6.eq) goto loc_8241D1FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r31,2
	ctx.r8.s64 = r31.s64 + 2;
	// addi r6,r11,-29000
	ctx.r6.s64 = ctx.r11.s64 + -29000;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8241a4f0
	ctx.lr = 0x8241D1F8;
	sub_8241A4F0(ctx, base);
	// b 0x8241cd1c
	goto loc_8241CD1C;
loc_8241D1FC:
	// addi r11,r30,35
	ctx.r11.s64 = r30.s64 + 35;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwzx r5,r30,r29
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// bl 0x8241c9f0
	ctx.lr = 0x8241D21C;
	sub_8241C9F0(ctx, base);
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, ctx.r11.u32);
	// lwz r11,172(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 172);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r29)
	REX_STORE_U32(r29.u32 + 172, ctx.r11.u32);
loc_8241D238:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8241d278
	if (ctx.cr6.eq) goto loc_8241D278;
	// lwz r9,24(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 24);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8241d26c
	if (!ctx.cr6.gt) goto loc_8241D26C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r11,-29080
	ctx.r6.s64 = ctx.r11.s64 + -29080;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8241a4f0
	ctx.lr = 0x8241D268;
	sub_8241A4F0(ctx, base);
	// b 0x8241cd1c
	goto loc_8241CD1C;
loc_8241D26C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8241D274:
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_8241D278:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241D27C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8244BE60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,3032(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3032);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8244b6c8
	ctx.lr = 0x8244BE9C;
	sub_8244B6C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824517B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824517C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r11,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r6,r10,-16720
	ctx.r6.s64 = ctx.r10.s64 + -16720;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8244af60
	ctx.lr = 0x824517F4;
	sub_8244AF60(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244fdc8
	ctx.lr = 0x82451808;
	sub_8244FDC8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x82451850
	if (ctx.cr6.gt) goto loc_82451850;
	// lwz r10,100(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 100);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,-1002
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1002, ctx.xer);
	// beq cr6,0x82451844
	if (ctx.cr6.eq) goto loc_82451844;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,10884
	ctx.r4.s64 = ctx.r11.s64 + 10884;
	// bl 0x8244beb0
	ctx.lr = 0x82451838;
	sub_8244BEB0(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824518b8
	goto loc_824518B8;
loc_82451844:
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r11,r10,20,7,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82451850:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x8245185C;
	sub_82450858(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822cdbd0
	ctx.lr = 0x82451868;
	sub_822CDBD0(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82451888
	if (ctx.cr6.eq) goto loc_82451888;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822cdd88
	ctx.lr = 0x82451888;
	sub_822CDD88(ctx, base);
loc_82451888:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824518b4
	if (ctx.cr6.eq) goto loc_824518B4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824dd560
	ctx.lr = 0x824518B4;
	sub_824DD560(ctx, base);
loc_824518B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824518B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824583E0) {
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
	// addi r4,r11,14624
	ctx.r4.s64 = ctx.r11.s64 + 14624;
	// bl 0x824555b8
	ctx.lr = 0x824583F8;
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

DEFINE_REX_FUNC(sub_82458620) {
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
	// addi r4,r11,14816
	ctx.r4.s64 = ctx.r11.s64 + 14816;
	// bl 0x824555b8
	ctx.lr = 0x8245863C;
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

DEFINE_REX_FUNC(sub_82459490) {
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
	ctx.lr = 0x82459498;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82455688
	ctx.lr = 0x824594AC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,15808
	ctx.r4.s64 = ctx.r11.s64 + 15808;
	// bl 0x824555b8
	ctx.lr = 0x824594C4;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824594D4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14352
	ctx.r4.s64 = ctx.r11.s64 + 14352;
	// bl 0x824555b8
	ctx.lr = 0x824594EC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,14344
	r25.s64 = ctx.r11.s64 + 14344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82459518;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14096
	ctx.r4.s64 = ctx.r11.s64 + 14096;
	// bl 0x824555b8
	ctx.lr = 0x82459530;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r11,14160
	r26.s64 = ctx.r11.s64 + 14160;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824595c0
	if (ctx.cr6.eq) goto loc_824595C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15784
	r29.s64 = ctx.r11.s64 + 15784;
loc_82459558:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459560;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82459580;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459594;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824595A8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82459558
	if (ctx.cr6.lt) goto loc_82459558;
loc_824595C0:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r9,15756
	r29.s64 = ctx.r9.s64 + 15756;
	// addi r27,r10,14372
	r27.s64 = ctx.r10.s64 + 14372;
	// beq cr6,0x82459648
	if (ctx.cr6.eq) goto loc_82459648;
loc_824595DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824595E4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82459604;
	sub_82404168(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404168
	ctx.lr = 0x82459618;
	sub_82404168(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459630;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824595dc
	if (ctx.cr6.lt) goto loc_824595DC;
loc_82459648:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r10,14148
	r28.s64 = ctx.r10.s64 + 14148;
	// beq cr6,0x824596c4
	if (ctx.cr6.eq) goto loc_824596C4;
loc_8245965C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459664;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82459680;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459694;
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
	ctx.lr = 0x824596AC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245965c
	if (ctx.cr6.lt) goto loc_8245965C;
loc_824596C4:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82459758
	if (ctx.cr6.eq) goto loc_82459758;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15656
	r29.s64 = ctx.r11.s64 + 15656;
loc_824596D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824596E0;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x824596FC;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82459710;
	sub_82404168(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404168
	ctx.lr = 0x82459724;
	sub_82404168(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82459740;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824596d8
	if (ctx.cr6.lt) goto loc_824596D8;
loc_82459758:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824597f0
	if (ctx.cr6.eq) goto loc_824597F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,15624
	r29.s64 = ctx.r11.s64 + 15624;
loc_8245976C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82459774;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82404168
	ctx.lr = 0x82459794;
	sub_82404168(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x824597A8;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x824597BC;
	sub_82404168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824597D8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824597f4
	if (ctx.cr0.lt) goto loc_824597F4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245976c
	if (ctx.cr6.lt) goto loc_8245976C;
loc_824597F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824597F4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82471700) {
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
	// or r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 | ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8246e840
	ctx.lr = 0x82471724;
	sub_8246E840(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82471774
	if (ctx.cr6.lt) goto loc_82471774;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82471770
	if (ctx.cr6.eq) goto loc_82471770;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246e840
	ctx.lr = 0x82471748;
	sub_8246E840(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82471774
	if (ctx.cr6.lt) goto loc_82471774;
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 284);
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 272);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// oris r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 268435456;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82471770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471774:
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

DEFINE_REX_FUNC(sub_824736E8) {
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
	ctx.lr = 0x824736F0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r27,r10,12
	r27.u64 = ctx.r10.u32 & 0xFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824715b8
	ctx.lr = 0x82473724;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824738a4
	if (ctx.cr0.lt) goto loc_824738A4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82473764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824738a4
	if (ctx.cr0.lt) goto loc_824738A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824738a4
	if (ctx.cr0.lt) goto loc_824738A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824737BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824738a4
	if (ctx.cr0.lt) goto loc_824738A4;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// rlwinm r26,r27,2,0,29
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_824737D0:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82473808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824738a4
	if (ctx.cr0.lt) goto loc_824738A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824738a4
	if (ctx.cr0.lt) goto loc_824738A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247385C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824738a4
	if (ctx.cr0.lt) goto loc_824738A4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r29,r26,r29
	r29.u64 = r26.u64 + r29.u64;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// blt cr6,0x824737d0
	if (ctx.cr6.lt) goto loc_824737D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473888;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824738a4
	if (ctx.cr0.lt) goto loc_824738A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x82473898;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824738a4
	if (ctx.cr0.lt) goto loc_824738A4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824738A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8247C4C8) {
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
	ctx.lr = 0x8247C4D0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r21,20(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwzx r23,r9,r21
	r23.u64 = REX_LOAD_U32(ctx.r9.u32 + r21.u32);
	// lwzx r22,r11,r10
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// beq cr6,0x8247c5f0
	if (ctx.cr6.eq) goto loc_8247C5F0;
	// lwz r19,88(r23)
	r19.u64 = REX_LOAD_U32(r23.u32 + 88);
loc_8247C508:
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r11,r21
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// lwz r10,72(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 72);
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// bge cr6,0x8247c5e4
	if (!ctx.cr6.lt) goto loc_8247C5E4;
	// lwz r9,72(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 72);
	// lwz r11,88(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 88);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8247c5f0
	if (!ctx.cr6.lt) goto loc_8247C5F0;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// lwz r8,20(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 20);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8247c548
	if (!ctx.cr6.eq) goto loc_8247C548;
	// lwz r8,24(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 24);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8247c5fc
	if (ctx.cr6.eq) goto loc_8247C5FC;
loc_8247C548:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8247c55c
	if (!ctx.cr6.lt) goto loc_8247C55C;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// b 0x8247c564
	goto loc_8247C564;
loc_8247C55C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_8247C564:
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// li r25,0
	r25.s64 = 0;
	// lwz r10,80(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,76(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 76);
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r27,r8,r9
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8247c5e4
	if (ctx.cr6.eq) goto loc_8247C5E4;
	// lwz r30,88(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 88);
	// lwz r29,72(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 72);
loc_8247C59C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// ble cr6,0x8247c5e4
	if (!ctx.cr6.gt) goto loc_8247C5E4;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,24(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 24);
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 20);
	// bl 0x8247c3d8
	ctx.lr = 0x8247C5CC;
	sub_8247C3D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8247c5fc
	if (ctx.cr0.eq) goto loc_8247C5FC;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(r25.u32, r27.u32, ctx.xer);
	// blt cr6,0x8247c59c
	if (ctx.cr6.lt) goto loc_8247C59C;
loc_8247C5E4:
	// lwz r22,48(r24)
	r22.u64 = REX_LOAD_U32(r24.u32 + 48);
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(r22.s32, -1, ctx.xer);
	// bne cr6,0x8247c508
	if (!ctx.cr6.eq) goto loc_8247C508;
loc_8247C5F0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8247C5F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
loc_8247C5FC:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// b 0x8247c5f4
	goto loc_8247C5F4;
}

DEFINE_REX_FUNC(sub_82492570) {
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
	ctx.lr = 0x82492578;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824925a0
	if (!ctx.cr0.eq) goto loc_824925A0;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824925a0
	if (!ctx.cr0.eq) goto loc_824925A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8249281c
	goto loc_8249281C;
loc_824925A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x824925A8;
	sub_8247D160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249281c
	if (ctx.cr0.lt) goto loc_8249281C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x824891f8
	ctx.lr = 0x824925C8;
	sub_824891F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824925e8
	if (ctx.cr0.lt) goto loc_824925E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248efc0
	ctx.lr = 0x824925E0;
	sub_8248EFC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82492628
	if (!ctx.cr0.lt) goto loc_82492628;
loc_824925E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82480f90
	ctx.lr = 0x824925F4;
	sub_82480F90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x824891f8
	ctx.lr = 0x82492608;
	sub_824891F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82492800
	if (ctx.cr0.lt) goto loc_82492800;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248efc0
	ctx.lr = 0x82492620;
	sub_8248EFC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82492800
	if (ctx.cr0.lt) goto loc_82492800;
loc_82492628:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x82492638;
	sub_823F02B8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x82492800
	if (ctx.cr0.eq) goto loc_82492800;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82492654;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247aff8
	ctx.lr = 0x8249265C;
	sub_8247AFF8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8249274c
	if (ctx.cr6.eq) goto loc_8249274C;
	// li r29,0
	r29.s64 = 0;
loc_82492674:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82492738
	if (ctx.cr0.eq) goto loc_82492738;
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82492728
	if (ctx.cr6.eq) goto loc_82492728;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_82492698:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247b110
	ctx.lr = 0x824926A4;
	sub_8247B110(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82492728
	if (ctx.cr0.eq) goto loc_82492728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247aff8
	ctx.lr = 0x824926B4;
	sub_8247AFF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bgt cr6,0x8249271c
	if (ctx.cr6.gt) goto loc_8249271C;
	// bne cr6,0x824926f0
	if (!ctx.cr6.eq) goto loc_824926F0;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8249271c
	if (!ctx.cr0.eq) goto loc_8249271C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8249271c
	if (!ctx.cr6.eq) goto loc_8249271C;
loc_824926F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248efc0
	ctx.lr = 0x82492700;
	sub_8248EFC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249271c
	if (ctx.cr0.lt) goto loc_8249271C;
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82492718;
	sub_826A1E70(ctx, base);
	// mr r25,r30
	r25.u64 = r30.u64;
loc_8249271C:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bne 0x82492698
	if (!ctx.cr0.eq) goto loc_82492698;
loc_82492728:
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82492738;
	sub_826A1E70(ctx, base);
loc_82492738:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82492674
	if (ctx.cr6.lt) goto loc_82492674;
loc_8249274C:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82492800
	if (ctx.cr6.eq) goto loc_82492800;
loc_82492758:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,44(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824927f0
	if (ctx.cr0.eq) goto loc_824927F0;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824927ac
	if (!ctx.cr6.lt) goto loc_824927AC;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r5,44(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
loc_8249278C:
	// lwzx r4,r9,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r4,44(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824927ac
	if (!ctx.cr6.eq) goto loc_824927AC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8249278c
	if (ctx.cr6.lt) goto loc_8249278C;
loc_824927AC:
	// subf r10,r6,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r6.u64;
	// rlwinm. r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824927ec
	if (ctx.cr0.eq) goto loc_824927EC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_824927C0:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r7,-4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r6,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r6.u32);
	// bdnz 0x824927c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824927C0;
loc_824927EC:
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
loc_824927F0:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82492758
	if (ctx.cr6.lt) goto loc_82492758;
loc_82492800:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82480f90
	ctx.lr = 0x8249280C;
	sub_82480F90(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f0350
	ctx.lr = 0x82492818;
	sub_823F0350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249281C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824A7BA8) {
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
	ctx.lr = 0x824A7BB0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r4,256(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,340(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// clrlwi r28,r9,12
	r28.u64 = ctx.r9.u32 & 0xFFFFF;
	// lwz r27,8(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r29,12(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,16(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// add r25,r11,r27
	r25.u64 = ctx.r11.u64 + r27.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x824A7BFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a7cd8
	if (ctx.cr0.lt) goto loc_824A7CD8;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r8,548(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 548);
	// li r30,0
	r30.s64 = 0;
	// lwz r7,552(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824A7C20:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r7,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
	// bge cr6,0x824a7c60
	if (!ctx.cr6.lt) goto loc_824A7C60;
	// lwzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// stwx r10,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
loc_824A7C60:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824a7c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A7C20;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82471828
	ctx.lr = 0x824A7CA4;
	sub_82471828(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82471828
	ctx.lr = 0x824A7CD8;
	sub_82471828(ctx, base);
loc_824A7CD8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824ADCA0) {
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
	ctx.lr = 0x824ADCA8;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// bne cr6,0x824adce8
	if (!ctx.cr6.eq) goto loc_824ADCE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ae088
	goto loc_824AE088;
loc_824ADCE8:
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r29,r11,-4200
	r29.s64 = ctx.r11.s64 + -4200;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r5,r29,-128
	ctx.r5.s64 = r29.s64 + -128;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r31,r11,12
	r31.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// bl 0x8245f158
	ctx.lr = 0x824ADD20;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824ae088
	if (ctx.cr0.lt) goto loc_824AE088;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824adda0
	if (!ctx.cr6.eq) goto loc_824ADDA0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824ae084
	if (ctx.cr6.eq) goto loc_824AE084;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// lfd f0,32424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
loc_824ADD58:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824add90
	if (ctx.cr0.eq) goto loc_824ADD90;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824add90
	if (!ctx.cr6.eq) goto loc_824ADD90;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// b 0x824add94
	goto loc_824ADD94;
loc_824ADD90:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_824ADD94:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824add58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ADD58;
	// b 0x824adecc
	goto loc_824ADECC;
loc_824ADDA0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8245f158
	ctx.lr = 0x824ADDC8;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ae088
	if (!ctx.cr0.eq) goto loc_824AE088;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfd f0,28680(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 28680);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824ae084
	if (ctx.cr6.eq) goto loc_824AE084;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_824ADE00:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824ade38
	if (ctx.cr0.eq) goto loc_824ADE38;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824ade38
	if (!ctx.cr6.eq) goto loc_824ADE38;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// b 0x824ade3c
	goto loc_824ADE3C;
loc_824ADE38:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
loc_824ADE3C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824ade00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ADE00;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824ade70
	if (ctx.cr6.eq) goto loc_824ADE70;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x824ade70
	if (!ctx.cr6.eq) goto loc_824ADE70;
	// addi r11,r1,236
	ctx.r11.s64 = ctx.r1.s64 + 236;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_824ADE5C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -44);
	// stw r10,-44(r11)
	REX_STORE_U32(ctx.r11.u32 + -44, ctx.r10.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824ade5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ADE5C;
loc_824ADE70:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824ae084
	if (ctx.cr6.eq) goto loc_824AE084;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_824ADE88:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824adec0
	if (ctx.cr0.eq) goto loc_824ADEC0;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824adec0
	if (!ctx.cr6.eq) goto loc_824ADEC0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// b 0x824adec4
	goto loc_824ADEC4;
loc_824ADEC0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_824ADEC4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824ade88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ADE88;
loc_824ADECC:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x824ae084
	if (!ctx.cr6.eq) goto loc_824AE084;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x824ae084
	if (!ctx.cr6.eq) goto loc_824AE084;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// ble cr6,0x824adf0c
	if (!ctx.cr6.gt) goto loc_824ADF0C;
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
loc_824ADEEC:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824ae084
	if (!ctx.cr6.eq) goto loc_824AE084;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x824adeec
	if (ctx.cr6.lt) goto loc_824ADEEC;
loc_824ADF0C:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// li r8,1807
	ctx.r8.s64 = 1807;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwimi r9,r8,20,0,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFFF00000) | (ctx.r9.u64 & 0xFFFFFFFF000FFFFF);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r27.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824adf9c
	if (!ctx.cr6.gt) goto loc_824ADF9C;
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 136);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_824ADF6C:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824adf8c
	if (!ctx.cr6.eq) goto loc_824ADF8C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824adf8c
	if (ctx.cr6.lt) goto loc_824ADF8C;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
loc_824ADF8C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824adf6c
	if (ctx.cr6.lt) goto loc_824ADF6C;
loc_824ADF9C:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,136(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 136);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f1,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82478758
	ctx.lr = 0x824ADFCC;
	sub_82478758(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824ae008
	if (!ctx.cr6.eq) goto loc_824AE008;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824ae088
	goto loc_824AE088;
loc_824AE008:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// b 0x824ae018
	goto loc_824AE018;
loc_824AE014:
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_824AE018:
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824ae014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AE014;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_824AE044:
	// lwz r8,260(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 260);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r5,r8,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r6,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,260(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
	// bdnz 0x824ae044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AE044;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,1104(r30)
	REX_STORE_U32(r30.u32 + 1104, r27.u32);
	// b 0x824ae088
	goto loc_824AE088;
loc_824AE084:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824AE088:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824C6148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824C6150;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r3,76
	ctx.r5.s64 = ctx.r3.s64 + 76;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824c5828
	ctx.lr = 0x824C6164;
	sub_824C5828(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,56(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824c61a4
	if (ctx.cr6.eq) goto loc_824C61A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C6178:
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824c6178
	if (ctx.cr6.lt) goto loc_824C6178;
loc_824C61A4:
	// lis r11,-32180
	ctx.r11.s64 = -2108948480;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r11,22264
	ctx.r3.s64 = ctx.r11.s64 + 22264;
	// bl 0x824793b0
	ctx.lr = 0x824C61B8;
	sub_824793B0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824c6200
	if (!ctx.cr6.gt) goto loc_824C6200;
	// li r30,0
	r30.s64 = 0;
loc_824C61CC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x824c5998
	ctx.lr = 0x824C61DC;
	sub_824C5998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824c6204
	if (ctx.cr0.lt) goto loc_824C6204;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c620c
	if (ctx.cr6.eq) goto loc_824C620C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824c61cc
	if (ctx.cr6.lt) goto loc_824C61CC;
loc_824C6200:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824C6204:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824C620C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824c6204
	goto loc_824C6204;
}

DEFINE_REX_FUNC(sub_824C9A88) {
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
	ctx.lr = 0x824C9A90;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r24,448(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r21,408(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r20,416(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// beq cr6,0x824c9ad8
	if (ctx.cr6.eq) goto loc_824C9AD8;
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c9ad8
	if (!ctx.cr6.eq) goto loc_824C9AD8;
	// bl 0x824c9790
	ctx.lr = 0x824C9AC4;
	sub_824C9790(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824c9ad8
	if (!ctx.cr6.eq) goto loc_824C9AD8;
loc_824C9ACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
loc_824C9AD8:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c9ccc
	if (!ctx.cr6.eq) goto loc_824C9CCC;
	// lwz r19,20(r24)
	r19.u64 = REX_LOAD_U32(r24.u32 + 20);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824c9af8
	if (ctx.cr6.eq) goto loc_824C9AF8;
	// addi r19,r19,-1
	r19.s64 = r19.s64 + -1;
	// b 0x824c9cc8
	goto loc_824C9CC8;
loc_824C9AF8:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// lwz r29,404(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 404);
	// lwz r22,0(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(r29.s32, r21.s32, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r4,12(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 12);
	// lwz r5,16(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 16);
	// lwz r28,60(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 60);
	// bgt cr6,0x824c9ca8
	if (ctx.cr6.gt) goto loc_824C9CA8;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r26,1
	r26.s64 = 1;
	// addi r23,r10,5392
	r23.s64 = ctx.r10.s64 + 5392;
	// addi r27,r11,8352
	r27.s64 = ctx.r11.s64 + 8352;
loc_824C9B40:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x824c9b74
	if (!ctx.cr6.lt) goto loc_824C9B74;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c8e10
	ctx.lr = 0x824C9B54;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9acc
	if (ctx.cr6.eq) goto loc_824C9ACC;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x824c9b74
	if (!ctx.cr6.lt) goto loc_824C9B74;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x824c9ba8
	goto loc_824C9BA8;
loc_824C9B74:
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824c9ba4
	if (ctx.cr6.eq) goto loc_824C9BA4;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x824c9bc4
	goto loc_824C9BC4;
loc_824C9BA4:
	// li r7,9
	ctx.r7.s64 = 9;
loc_824C9BA8:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c8f78
	ctx.lr = 0x824C9BB4;
	sub_824C8F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824c9acc
	if (ctx.cr6.lt) goto loc_824C9ACC;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_824C9BC4:
	// clrlwi r31,r3,28
	r31.u64 = ctx.r3.u32 & 0xF;
	// srawi r30,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r30.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824c9c44
	if (ctx.cr6.eq) goto loc_824C9C44;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bge cr6,0x824c9bfc
	if (!ctx.cr6.lt) goto loc_824C9BFC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c8e10
	ctx.lr = 0x824C9BEC;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9acc
	if (ctx.cr6.eq) goto loc_824C9ACC;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_824C9BFC:
	// slw r11,r26,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r26.u32 << (r31.u8 & 0x3F));
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x824c9c2c
	if (!ctx.cr6.lt) goto loc_824C9C2C;
	// addi r9,r27,64
	ctx.r9.s64 = r27.s64 + 64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824C9C2C:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r11,r20
	ctx.r9.u64 = r20.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r20.u8 & 0x3F));
	// lwzx r8,r10,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r23.u32);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r6,r22
	REX_STORE_U16(ctx.r6.u32 + r22.u32, ctx.r9.u16);
	// b 0x824c9c50
	goto loc_824C9C50;
loc_824C9C44:
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bne cr6,0x824c9c60
	if (!ctx.cr6.eq) goto loc_824C9C60;
	// addi r30,r29,15
	r30.s64 = r29.s64 + 15;
loc_824C9C50:
	// addi r29,r30,1
	r29.s64 = r30.s64 + 1;
	// cmpw cr6,r29,r21
	ctx.cr6.compare<int32_t>(r29.s32, r21.s32, ctx.xer);
	// ble cr6,0x824c9b40
	if (!ctx.cr6.gt) goto loc_824C9B40;
	// b 0x824c9ca8
	goto loc_824C9CA8;
loc_824C9C60:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// slw r31,r26,r30
	r31.u64 = r30.u8 & 0x20 ? 0 : (r26.u32 << (r30.u8 & 0x3F));
	// beq cr6,0x824c9ca4
	if (ctx.cr6.eq) goto loc_824C9CA4;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// bge cr6,0x824c9c90
	if (!ctx.cr6.lt) goto loc_824C9C90;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824c8e10
	ctx.lr = 0x824C9C80;
	sub_824C8E10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c9acc
	if (ctx.cr6.eq) goto loc_824C9ACC;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_824C9C90:
	// subf r5,r30,r5
	ctx.r5.u64 = ctx.r5.u64 - r30.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// sraw r10,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_824C9CA4:
	// addi r19,r31,-1
	r19.s64 = r31.s64 + -1;
loc_824C9CA8:
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r4,12(r24)
	REX_STORE_U32(r24.u32 + 12, ctx.r4.u32);
	// stw r5,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r5.u32);
loc_824C9CC8:
	// stw r19,20(r24)
	REX_STORE_U32(r24.u32 + 20, r19.u32);
loc_824C9CCC:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,40(r24)
	REX_STORE_U32(r24.u32 + 40, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_824D8358) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D8360;
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
	// ble cr6,0x824d83dc
	if (!ctx.cr6.gt) goto loc_824D83DC;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x824d8388
	if (!ctx.cr6.lt) goto loc_824D8388;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_824D8388:
	// mulli r4,r30,20
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(20));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5af8
	ctx.lr = 0x824D8394;
	sub_824E5AF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824d83ac
	if (!ctx.cr0.eq) goto loc_824D83AC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x824d83dc
	goto loc_824D83DC;
loc_824D83AC:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824d83d8
	if (ctx.cr6.eq) goto loc_824D83D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,20
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// bl 0x826a1e70
	ctx.lr = 0x824D83CC;
	sub_826A1E70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5b08
	ctx.lr = 0x824D83D8;
	sub_824E5B08(ctx, base);
loc_824D83D8:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_824D83DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824DADD8) {
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
	ctx.lr = 0x824DADE0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r26,16(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r11,r11,21948
	ctx.r11.s64 = ctx.r11.s64 + 21948;
	// rotlwi r10,r26,0
	ctx.r10.u64 = __builtin_rotateleft32(r26.u32, 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r24,r3,16
	r24.s64 = ctx.r3.s64 + 16;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mulli r11,r11,476
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(476));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824daf60
	if (!ctx.cr6.lt) goto loc_824DAF60;
	// addi r31,r26,448
	r31.s64 = r26.s64 + 448;
loc_824DAE18:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -60);
	// bl 0x823f0350
	ctx.lr = 0x824DAE24;
	sub_823F0350(ctx, base);
	// addi r3,r31,-172
	ctx.r3.s64 = r31.s64 + -172;
	// bl 0x824dad88
	ctx.lr = 0x824DAE2C;
	sub_824DAD88(ctx, base);
	// addi r3,r31,-160
	ctx.r3.s64 = r31.s64 + -160;
	// bl 0x824dad88
	ctx.lr = 0x824DAE34;
	sub_824DAD88(ctx, base);
	// addi r3,r31,-148
	ctx.r3.s64 = r31.s64 + -148;
	// bl 0x824dad88
	ctx.lr = 0x824DAE3C;
	sub_824DAD88(ctx, base);
	// addi r3,r31,-136
	ctx.r3.s64 = r31.s64 + -136;
	// bl 0x824dad88
	ctx.lr = 0x824DAE44;
	sub_824DAD88(ctx, base);
	// addi r3,r31,-124
	ctx.r3.s64 = r31.s64 + -124;
	// bl 0x824dad88
	ctx.lr = 0x824DAE4C;
	sub_824DAD88(ctx, base);
	// addi r3,r31,-112
	ctx.r3.s64 = r31.s64 + -112;
	// bl 0x82449690
	ctx.lr = 0x824DAE54;
	sub_82449690(ctx, base);
	// addi r3,r31,-96
	ctx.r3.s64 = r31.s64 + -96;
	// bl 0x824dad88
	ctx.lr = 0x824DAE5C;
	sub_824DAD88(ctx, base);
	// addi r3,r31,-84
	ctx.r3.s64 = r31.s64 + -84;
	// bl 0x824dad88
	ctx.lr = 0x824DAE64;
	sub_824DAD88(ctx, base);
	// lwz r10,-72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -72);
	// addi r29,r31,-72
	r29.s64 = r31.s64 + -72;
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// b 0x824dae84
	goto loc_824DAE84;
loc_824DAE74:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x824dad88
	ctx.lr = 0x824DAE7C;
	sub_824DAD88(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
loc_824DAE84:
	// lwz r11,-68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -68);
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824dae74
	if (ctx.cr6.lt) goto loc_824DAE74;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824dad88
	ctx.lr = 0x824DAEA0;
	sub_824DAD88(ctx, base);
	// addi r3,r31,-52
	ctx.r3.s64 = r31.s64 + -52;
	// bl 0x824dad88
	ctx.lr = 0x824DAEA8;
	sub_824DAD88(ctx, base);
	// addi r3,r31,-40
	ctx.r3.s64 = r31.s64 + -40;
	// bl 0x824dad88
	ctx.lr = 0x824DAEB0;
	sub_824DAD88(ctx, base);
	// addi r3,r31,-28
	ctx.r3.s64 = r31.s64 + -28;
	// bl 0x824dad88
	ctx.lr = 0x824DAEB8;
	sub_824DAD88(ctx, base);
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// bl 0x824dad88
	ctx.lr = 0x824DAEC0;
	sub_824DAD88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,-4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r27,r31,-4
	r27.s64 = r31.s64 + -4;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// extsw r29,r10
	r29.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824daf38
	if (!ctx.cr6.lt) goto loc_824DAF38;
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
loc_824DAEE4:
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x824daef8
	goto loc_824DAEF8;
loc_824DAEEC:
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// bl 0x824dad88
	ctx.lr = 0x824DAEF4;
	sub_824DAD88(ctx, base);
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
loc_824DAEF8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824daeec
	if (ctx.cr6.lt) goto loc_824DAEEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824dad88
	ctx.lr = 0x824DAF18;
	sub_824DAD88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824daee4
	if (ctx.cr6.lt) goto loc_824DAEE4;
loc_824DAF38:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824dad88
	ctx.lr = 0x824DAF40;
	sub_824DAD88(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r26,r26,476
	r26.s64 = r26.s64 + 476;
	// mulli r11,r11,476
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(476));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,476
	r31.s64 = r31.s64 + 476;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824dae18
	if (ctx.cr6.lt) goto loc_824DAE18;
loc_824DAF60:
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r30,r25,4
	r30.s64 = r25.s64 + 4;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// extsw r31,r10
	r31.s64 = ctx.r10.s32;
	// b 0x824daf9c
	goto loc_824DAF9C;
loc_824DAF78:
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824daf90
	if (ctx.cr6.eq) goto loc_824DAF90;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x823f0350
	ctx.lr = 0x824DAF8C;
	sub_823F0350(ctx, base);
	// stw r29,272(r31)
	REX_STORE_U32(r31.u32 + 272, r29.u32);
loc_824DAF90:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,276
	r31.s64 = r31.s64 + 276;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_824DAF9C:
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824daf78
	if (ctx.cr6.lt) goto loc_824DAF78;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,132(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 132);
	// bl 0x823f0350
	ctx.lr = 0x824DAFB8;
	sub_823F0350(ctx, base);
	// stw r29,132(r25)
	REX_STORE_U32(r25.u32 + 132, r29.u32);
	// lwz r4,56(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 56);
	// addi r3,r25,56
	ctx.r3.s64 = r25.s64 + 56;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824dafd0
	if (ctx.cr6.eq) goto loc_824DAFD0;
	// bl 0x824e5b08
	ctx.lr = 0x824DAFD0;
	sub_824E5B08(ctx, base);
loc_824DAFD0:
	// lwz r4,44(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 44);
	// addi r3,r25,44
	ctx.r3.s64 = r25.s64 + 44;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824dafe4
	if (ctx.cr6.eq) goto loc_824DAFE4;
	// bl 0x824e5b08
	ctx.lr = 0x824DAFE4;
	sub_824E5B08(ctx, base);
loc_824DAFE4:
	// lwz r4,32(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 32);
	// addi r3,r25,32
	ctx.r3.s64 = r25.s64 + 32;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824daff8
	if (ctx.cr6.eq) goto loc_824DAFF8;
	// bl 0x824e5b08
	ctx.lr = 0x824DAFF8;
	sub_824E5B08(ctx, base);
loc_824DAFF8:
	// lwz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824db00c
	if (ctx.cr6.eq) goto loc_824DB00C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e5b08
	ctx.lr = 0x824DB00C;
	sub_824E5B08(ctx, base);
loc_824DB00C:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824db020
	if (ctx.cr6.eq) goto loc_824DB020;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e5b08
	ctx.lr = 0x824DB020;
	sub_824E5B08(ctx, base);
loc_824DB020:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824E9D20) {
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
	ctx.lr = 0x824E9D28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r26,16(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e9d4c
	if (ctx.cr6.lt) goto loc_824E9D4C;
	// bl 0x826b40a0
	ctx.lr = 0x824E9D4C;
	sub_826B40A0(ctx, base);
loc_824E9D4C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824e9da4
	if (!ctx.cr6.gt) goto loc_824E9DA4;
loc_824E9D5C:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// srw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e9d94
	if (ctx.cr0.eq) goto loc_824E9D94;
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// blt cr6,0x824e9d7c
	if (ctx.cr6.lt) goto loc_824E9D7C;
	// bl 0x826b40a0
	ctx.lr = 0x824E9D7C;
	sub_826B40A0(ctx, base);
loc_824E9D7C:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// ori r11,r11,25
	ctx.r11.u64 = ctx.r11.u64 | 25;
	// rlwimi r11,r31,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_824E9D94:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e9d5c
	if (ctx.cr6.lt) goto loc_824E9D5C;
loc_824E9DA4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824e9e00
	if (!ctx.cr6.gt) goto loc_824E9E00;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r30,r11,-19904
	r30.s64 = ctx.r11.s64 + -19904;
loc_824E9DBC:
	// lwz r11,196(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 196);
	// srw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e9df0
	if (ctx.cr0.eq) goto loc_824E9DF0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// bl 0x824e99a8
	ctx.lr = 0x824E9DF0;
	sub_824E99A8(ctx, base);
loc_824E9DF0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e9dbc
	if (ctx.cr6.lt) goto loc_824E9DBC;
loc_824E9E00:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r10,-19920
	r30.s64 = ctx.r10.s64 + -19920;
	// addi r28,r11,-19936
	r28.s64 = ctx.r11.s64 + -19936;
loc_824E9E14:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e9e58
	if (ctx.cr6.eq) goto loc_824E9E58;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// beq cr6,0x824e9e38
	if (ctx.cr6.eq) goto loc_824E9E38;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_824E9E38:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e99a8
	ctx.lr = 0x824E9E58;
	sub_824E99A8(ctx, base);
loc_824E9E58:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// blt cr6,0x824e9e14
	if (ctx.cr6.lt) goto loc_824E9E14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824F0200) {
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
	ctx.lr = 0x824F0208;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-25912
	r28.s64 = ctx.r10.s64 + -25912;
	// bne cr6,0x824f0248
	if (!ctx.cr6.eq) goto loc_824F0248;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26852
	ctx.r5.s64 = ctx.r11.s64 + -26852;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,376
	ctx.r7.s64 = 376;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0248;
	sub_824EA978(ctx, base);
loc_824F0248:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x824f0270
	if (!ctx.cr6.eq) goto loc_824F0270;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x824f0298
	goto loc_824F0298;
loc_824F0270:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x824f0294
	if (ctx.cr6.eq) goto loc_824F0294;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-25788
	ctx.r5.s64 = ctx.r11.s64 + -25788;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,395
	ctx.r7.s64 = 395;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0294;
	sub_824EA978(ctx, base);
loc_824F0294:
	// li r7,1
	ctx.r7.s64 = 1;
loc_824F0298:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825a34c0
	ctx.lr = 0x824F02B0;
	sub_825A34C0(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824F6B38) {
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
	ctx.lr = 0x824F6B40;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// stw r5,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// bl 0x822c91b8
	ctx.lr = 0x824F6B5C;
	sub_822C91B8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f6b84
	if (ctx.cr6.eq) goto loc_824F6B84;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824f6b84
	if (ctx.cr6.eq) goto loc_824F6B84;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f6b84
	if (ctx.cr0.eq) goto loc_824F6B84;
	// addic. r22,r10,4
	ctx.xer.ca = ctx.r10.u32 > 4294967291;
	r22.s64 = ctx.r10.s64 + 4;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne 0x824f6b8c
	if (!ctx.cr0.eq) goto loc_824F6B8C;
loc_824F6B84:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824f6cf8
	goto loc_824F6CF8;
loc_824F6B8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r21,0
	r21.s64 = 0;
	// lwz r11,16(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 16);
	// lwz r18,12(r22)
	r18.u64 = REX_LOAD_U32(r22.u32 + 12);
	// mr r17,r21
	r17.u64 = r21.u64;
	// clrlwi r19,r10,31
	r19.u64 = ctx.r10.u32 & 0x1;
	// add r30,r11,r22
	r30.u64 = ctx.r11.u64 + r22.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824f6cf4
	if (ctx.cr6.eq) goto loc_824F6CF4;
	// clrlwi r14,r28,31
	r14.u64 = r28.u32 & 0x1;
loc_824F6BB4:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// lhz r29,4(r30)
	r29.u64 = REX_LOAD_U16(r30.u32 + 4);
	// lhz r9,6(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 6);
	// add r20,r10,r22
	r20.u64 = ctx.r10.u64 + r22.u64;
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// bne cr6,0x824f6bf8
	if (!ctx.cr6.eq) goto loc_824F6BF8;
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f6bf8
	if (ctx.cr0.eq) goto loc_824F6BF8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x824f6be8
	if (!ctx.cr6.eq) goto loc_824F6BE8;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// xori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 ^ 128;
loc_824F6BE8:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x824f6bf8
	if (!ctx.cr6.eq) goto loc_824F6BF8;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// xori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 ^ 16;
loc_824F6BF8:
	// cmplwi cr6,r14,1
	ctx.cr6.compare<uint32_t>(r14.u32, 1, ctx.xer);
	// blt cr6,0x824f6cbc
	if (ctx.cr6.lt) goto loc_824F6CBC;
	// bne cr6,0x824f6ce4
	if (!ctx.cr6.eq) goto loc_824F6CE4;
	// subfic r10,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r29.u64;
	// lwz r24,16(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 16);
	// clrlwi. r25,r11,16
	r25.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// mr r31,r21
	r31.u64 = r21.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
	// beq 0x824f6ce4
	if (ctx.cr0.eq) goto loc_824F6CE4;
	// add r23,r24,r22
	r23.u64 = r24.u64 + r22.u64;
	// clrlwi r26,r9,16
	r26.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r28,r21
	r28.u64 = r21.u64;
loc_824F6C40:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824f6c7c
	if (ctx.cr6.eq) goto loc_824F6C7C;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x824f6c74
	if (!ctx.cr6.gt) goto loc_824F6C74;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_824F6C5C:
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r23.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824f6c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F6C5C;
loc_824F6C74:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// b 0x824f6c80
	goto loc_824F6C80;
loc_824F6C7C:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
loc_824F6C80:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bctrl 
	ctx.lr = 0x824F6C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824f6cf8
	if (ctx.cr0.lt) goto loc_824F6CF8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r28,r28,r27
	r28.u64 = r28.u64 + r27.u64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// blt cr6,0x824f6c40
	if (ctx.cr6.lt) goto loc_824F6C40;
	// lwz r28,308(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// b 0x824f6ce4
	goto loc_824F6CE4;
loc_824F6CBC:
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bctrl 
	ctx.lr = 0x824F6CDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824f6cf8
	if (ctx.cr0.lt) goto loc_824F6CF8;
loc_824F6CE4:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// cmplw cr6,r17,r18
	ctx.cr6.compare<uint32_t>(r17.u32, r18.u32, ctx.xer);
	// blt cr6,0x824f6bb4
	if (ctx.cr6.lt) goto loc_824F6BB4;
loc_824F6CF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F6CF8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82504CE0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82504CF4:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82504d28
	if (ctx.cr6.eq) goto loc_82504D28;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
loc_82504D08:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82504d44
	if (ctx.cr6.eq) goto loc_82504D44;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82504d08
	if (ctx.cr6.lt) goto loc_82504D08;
loc_82504D28:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82504cf4
	if (!ctx.cr6.eq) goto loc_82504CF4;
	// blr 
	return;
loc_82504D44:
	// addic. r9,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bne 0x82504d88
	if (!ctx.cr0.eq) goto loc_82504D88;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x824e4308
	sub_824E4308(ctx, base);
	return;
loc_82504D88:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// subf r6,r10,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8269cc20
	sub_8269CC20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8250ED48) {
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
	ctx.lr = 0x8250ED50;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r4,18(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 18);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x825164c0
	ctx.lr = 0x8250ED70;
	sub_825164C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82516928
	ctx.lr = 0x8250ED7C;
	sub_82516928(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250be58
	ctx.lr = 0x8250ED90;
	sub_8250BE58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250eda0
	if (ctx.cr0.eq) goto loc_8250EDA0;
loc_8250ED98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8250edec
	goto loc_8250EDEC;
loc_8250EDA0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250be58
	ctx.lr = 0x8250EDB0;
	sub_8250BE58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ed98
	if (!ctx.cr0.eq) goto loc_8250ED98;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250be58
	ctx.lr = 0x8250EDC8;
	sub_8250BE58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ed98
	if (!ctx.cr0.eq) goto loc_8250ED98;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250be58
	ctx.lr = 0x8250EDE0;
	sub_8250BE58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8250EDEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825187A0) {
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
	ctx.lr = 0x825187A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825187c4
	if (!ctx.cr6.eq) goto loc_825187C4;
	// li r11,32
	ctx.r11.s64 = 32;
loc_825187C4:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825187d8
	if (ctx.cr6.lt) goto loc_825187D8;
	// li r4,3564
	ctx.r4.s64 = 3564;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e4368
	ctx.lr = 0x825187D8;
	sub_824E4368(ctx, base);
loc_825187D8:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// oris r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 1048576;
	// rlwinm r30,r10,31,28,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r9,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// rlwinm r10,r9,16,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825188b8
	if (!ctx.cr6.lt) goto loc_825188B8;
	// subfic r26,r29,63
	ctx.xer.ca = r29.u32 <= 63;
	r26.u64 = static_cast<uint64_t>(63) - r29.u64;
	// addi r25,r29,1
	r25.s64 = r29.s64 + 1;
	// mulli r31,r11,40
	r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// subf r24,r11,r10
	r24.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_82518810:
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// lwz r11,676(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 676);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// andc r10,r30,r10
	ctx.r10.u64 = r30.u64 & ~ctx.r10.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// subfic r27,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	r27.u64 = static_cast<uint64_t>(31) - ctx.r9.u64;
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// bl 0x825180e0
	ctx.lr = 0x82518838;
	sub_825180E0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82518854
	if (ctx.cr6.eq) goto loc_82518854;
	// lwz r11,676(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 676);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x825180e0
	ctx.lr = 0x82518854;
	sub_825180E0(ctx, base);
loc_82518854:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8251885C:
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, ctx.xer);
	// beq cr6,0x8251889c
	if (ctx.cr6.eq) goto loc_8251889C;
	// lwz r10,676(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 676);
	// lis r8,4369
	ctx.r8.s64 = 286326784;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r8,r8,4369
	ctx.r8.u64 = ctx.r8.u64 | 4369;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// rldimi r8,r8,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// sld r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
loc_8251888C:
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8251888c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251888C;
loc_8251889C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x8251885c
	if (ctx.cr6.lt) goto loc_8251885C;
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// bne 0x82518810
	if (!ctx.cr0.eq) goto loc_82518810;
loc_825188B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825246A8) {
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
	ctx.lr = 0x825246B0;
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
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825246D8;
	sub_825BB860(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq cr6,0x825246fc
	if (ctx.cr6.eq) goto loc_825246FC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825246F8;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825246FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82524704;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// beq cr6,0x82524728
	if (ctx.cr6.eq) goto loc_82524728;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82524724;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82524728:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82524730;
	sub_8250AD28(ctx, base);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82524770
	if (ctx.cr6.eq) goto loc_82524770;
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
loc_82524770:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8252E918) {
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
	// bl 0x82503a60
	ctx.lr = 0x8252E930;
	sub_82503A60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252e94c
	if (!ctx.cr0.eq) goto loc_8252E94C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12800
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12800, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8252e950
	if (!ctx.cr6.eq) goto loc_8252E950;
loc_8252E94C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252E950:
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

DEFINE_REX_FUNC(sub_82530950) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_8253095C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
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
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r3,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// b 0x8253095c
	goto loc_8253095C;
}

DEFINE_REX_FUNC(sub_825355F8) {
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
	ctx.lr = 0x82535600;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r18,r11,7,29,31
	r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r23,r10,7,29,31
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// lwz r20,12(r5)
	r20.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r11,r9,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// lwz r17,12(r7)
	r17.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// li r14,1
	r14.s64 = 1;
	// add r15,r23,r18
	r15.u64 = r23.u64 + r18.u64;
	// cmplwi cr6,r11,12800
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12800, ctx.xer);
	// bne cr6,0x82535664
	if (!ctx.cr6.eq) goto loc_82535664;
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82535664
	if (!ctx.cr6.eq) goto loc_82535664;
	// mr r15,r14
	r15.u64 = r14.u64;
loc_82535664:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82536484
	if (ctx.cr0.eq) goto loc_82536484;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825356d8
	if (ctx.cr0.eq) goto loc_825356D8;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825348d8
	ctx.lr = 0x82535690;
	sub_825348D8(ctx, base);
	// lwz r11,12(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 12);
	// lwz r17,12(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r20,r17
	r20.u64 = r17.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825356b4
	goto loc_825356B4;
loc_825356AC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825356B4:
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// bne cr6,0x825356ac
	if (!ctx.cr6.eq) goto loc_825356AC;
	// lwz r10,8(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 4);
	// stw r11,8(r19)
	REX_STORE_U32(r19.u32 + 8, ctx.r11.u32);
	// stw r19,4(r17)
	REX_STORE_U32(r17.u32 + 4, r19.u32);
	// stw r17,12(r19)
	REX_STORE_U32(r19.u32 + 12, r17.u32);
	// b 0x8253573c
	goto loc_8253573C;
loc_825356D8:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253573c
	if (ctx.cr0.eq) goto loc_8253573C;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825348d8
	ctx.lr = 0x825356F8;
	sub_825348D8(ctx, base);
	// lwz r11,12(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 12);
	// lwz r17,12(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r20,r17
	r20.u64 = r17.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253571c
	goto loc_8253571C;
loc_82535714:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8253571C:
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r16.u32, ctx.xer);
	// bne cr6,0x82535714
	if (!ctx.cr6.eq) goto loc_82535714;
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 4);
	// stw r11,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r11.u32);
	// stw r16,4(r17)
	REX_STORE_U32(r17.u32 + 4, r16.u32);
	// stw r17,12(r16)
	REX_STORE_U32(r16.u32 + 12, r17.u32);
loc_8253573C:
	// lwz r31,8(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r31,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x82535834
	if (!ctx.cr6.eq) goto loc_82535834;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x82535790
	if (ctx.cr6.eq) goto loc_82535790;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_82535764:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r10,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r30.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x825b8558
	ctx.lr = 0x82535780;
	sub_825B8558(ctx, base);
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x82535764
	if (!ctx.cr0.eq) goto loc_82535764;
loc_82535790:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x825357dc
	if (ctx.cr6.eq) goto loc_825357DC;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	r30.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r23
	r31.u64 = r23.u64;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_825357B0:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r10,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r30.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x825b8558
	ctx.lr = 0x825357CC;
	sub_825B8558(ctx, base);
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x825357b0
	if (!ctx.cr0.eq) goto loc_825357B0;
loc_825357DC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825bdf00
	ctx.lr = 0x825357FC;
	sub_825BDF00(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8253580C;
	sub_8250AB60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r15,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82528fd8
	ctx.lr = 0x82535824;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x82536974
	goto loc_82536974;
loc_82535834:
	// lwz r30,4(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82535cfc
	if (ctx.cr6.eq) goto loc_82535CFC;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82535b80
	if (!ctx.cr0.eq) goto loc_82535B80;
	// rlwinm. r11,r31,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825358a4
	if (ctx.cr0.eq) goto loc_825358A4;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82516b38
	ctx.lr = 0x82535860;
	sub_82516B38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82516b38
	ctx.lr = 0x82535870;
	sub_82516B38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x825358a4
	if (ctx.cr6.eq) goto loc_825358A4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82519470
	ctx.lr = 0x825358A4;
	sub_82519470(ctx, base);
loc_825358A4:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
loc_825358A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825358e0
	if (ctx.cr6.eq) goto loc_825358E0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825358d8
	if (ctx.cr6.eq) goto loc_825358D8;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x825358d8
	if (!ctx.cr6.eq) goto loc_825358D8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825358e4
	if (!ctx.cr0.eq) goto loc_825358E4;
loc_825358D8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825358a8
	goto loc_825358A8;
loc_825358E0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825358E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r28,r17
	r28.u64 = r17.u64;
	// bne cr6,0x825358f4
	if (!ctx.cr6.eq) goto loc_825358F4;
	// mr r28,r20
	r28.u64 = r20.u64;
loc_825358F4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825bcf88
	ctx.lr = 0x82535900;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253591c
	if (ctx.cr0.eq) goto loc_8253591C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c4b00
	ctx.lr = 0x8253591C;
	sub_825C4B00(ctx, base);
loc_8253591C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825bcf88
	ctx.lr = 0x82535928;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253595c
	if (ctx.cr0.eq) goto loc_8253595C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8253593C;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82535948;
	sub_8250AD28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c4b00
	ctx.lr = 0x8253595C;
	sub_825C4B00(ctx, base);
loc_8253595C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x82535980;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r29,r3,44
	r29.s64 = ctx.r3.s64 + 44;
	// subf r26,r3,r30
	r26.u64 = r30.u64 - ctx.r3.u64;
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
loc_825359C8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825359f4
	if (!ctx.cr6.lt) goto loc_825359F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r26,r29
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + r29.u32);
	// bl 0x8250ad28
	ctx.lr = 0x825359E4;
	sub_8250AD28(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x825359c8
	goto loc_825359C8;
loc_825359F4:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// rlwinm. r29,r11,31,28,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82535a54
	if (ctx.cr0.eq) goto loc_82535A54;
loc_82535A04:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// andc r11,r29,r11
	ctx.r11.u64 = r29.u64 & ~ctx.r11.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// subfic r5,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r5.u64 = static_cast<uint64_t>(31) - ctx.r9.u64;
	// rlwinm r26,r10,13,29,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// bl 0x8250ac70
	ctx.lr = 0x82535A2C;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82535A38;
	sub_8250AD28(ctx, base);
	// add r11,r26,r27
	ctx.r11.u64 = r26.u64 + r27.u64;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// bne cr6,0x82535a04
	if (!ctx.cr6.eq) goto loc_82535A04;
loc_82535A54:
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
loc_82535A58:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82535abc
	if (ctx.cr6.eq) goto loc_82535ABC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82535aa8
	if (ctx.cr6.eq) goto loc_82535AA8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82535a88
	goto loc_82535A88;
loc_82535A80:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82535A88:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82535a80
	if (!ctx.cr6.eq) goto loc_82535A80;
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
loc_82535AA8:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82535a58
	if (!ctx.cr6.eq) goto loc_82535A58;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82535a58
	goto loc_82535A58;
loc_82535ABC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// rlwinm r9,r11,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r8,r11,0,31,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// slw r11,r14,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r10,r11,1,27,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// or r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82535b58
	if (ctx.cr0.eq) goto loc_82535B58;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x82535AFC;
	sub_82516448(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82535b34
	if (!ctx.cr0.eq) goto loc_82535B34;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82535b34
	if (ctx.cr0.eq) goto loc_82535B34;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82535b40
	if (!ctx.cr6.gt) goto loc_82535B40;
loc_82535B34:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82535B3C;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82535B40:
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
loc_82535B58:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2288
	ctx.lr = 0x82535B6C;
	sub_825C2288(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825335b8
	ctx.lr = 0x82535B78;
	sub_825335B8(ctx, base);
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x82535ba8
	goto loc_82535BA8;
loc_82535B80:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825bcf88
	ctx.lr = 0x82535B8C;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82535ba8
	if (ctx.cr0.eq) goto loc_82535BA8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c4b00
	ctx.lr = 0x82535BA8;
	sub_825C4B00(ctx, base);
loc_82535BA8:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r8,r30,44
	ctx.r8.s64 = r30.s64 + 44;
	// li r26,3
	r26.s64 = 3;
loc_82535BC4:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82535c20
	if (!ctx.cr6.lt) goto loc_82535C20;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r20.u32, ctx.xer);
	// bne cr6,0x82535bf4
	if (!ctx.cr6.eq) goto loc_82535BF4;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r4,28,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0x6;
	// slw r3,r26,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r4.u8 & 0x3F));
	// andc r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// slw r4,r11,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
loc_82535BF4:
	// cmplw cr6,r9,r17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r17.u32, ctx.xer);
	// bne cr6,0x82535c14
	if (!ctx.cr6.eq) goto loc_82535C14;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,28,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// slw r9,r26,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// andc r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82535C14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x82535bc4
	goto loc_82535BC4;
loc_82535C20:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmplw cr6,r20,r30
	ctx.cr6.compare<uint32_t>(r20.u32, r30.u32, ctx.xer);
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 0);
	// rlwinm r28,r11,27,24,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r29,r10,27,24,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// beq cr6,0x82535c68
	if (ctx.cr6.eq) goto loc_82535C68;
	// rlwinm r10,r28,27,29,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0x6;
	// rlwinm r9,r28,29,29,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x6;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r8,r28,31,29,30
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x6;
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r28,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// srw r28,r7,r10
	r28.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r28,r8,2,0,29
	r28.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (r28.u64 & 0xFFFFFFFF00000003);
loc_82535C68:
	// cmplw cr6,r17,r30
	ctx.cr6.compare<uint32_t>(r17.u32, r30.u32, ctx.xer);
	// beq cr6,0x82535ca0
	if (ctx.cr6.eq) goto loc_82535CA0;
	// rlwinm r10,r29,27,29,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x6;
	// rlwinm r9,r29,29,29,30
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x6;
	// srw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r8,r29,31,29,30
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x6;
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r29,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// srw r29,r6,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r29,r8,2,0,29
	r29.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (r29.u64 & 0xFFFFFFFF00000003);
loc_82535CA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rlwinm r27,r11,0,27,30
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// bl 0x8250ab60
	ctx.lr = 0x82535CB0;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwimi r11,r15,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82535CC8;
	sub_8250A620(ctx, base);
	// rlwinm r10,r18,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// slw r11,r14,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r9,r11,5,19,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x82548eb8
	ctx.lr = 0x82535CF8;
	sub_82548EB8(ctx, base);
	// b 0x82536974
	goto loc_82536974;
loc_82535CFC:
	// cmplw cr6,r20,r17
	ctx.cr6.compare<uint32_t>(r20.u32, r17.u32, ctx.xer);
	// beq cr6,0x8253641c
	if (ctx.cr6.eq) goto loc_8253641C;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x824f7010
	ctx.lr = 0x82535D10;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253641c
	if (!ctx.cr0.eq) goto loc_8253641C;
	// rlwinm. r11,r31,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82535d70
	if (ctx.cr0.eq) goto loc_82535D70;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82516b38
	ctx.lr = 0x82535D2C;
	sub_82516B38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82516b38
	ctx.lr = 0x82535D3C;
	sub_82516B38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82535d70
	if (ctx.cr6.eq) goto loc_82535D70;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82519470
	ctx.lr = 0x82535D70;
	sub_82519470(ctx, base);
loc_82535D70:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82535da8
	if (!ctx.cr6.eq) goto loc_82535DA8;
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82535da8
	if (!ctx.cr6.eq) goto loc_82535DA8;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c4a48
	ctx.lr = 0x82535DA8;
	sub_825C4A48(ctx, base);
loc_82535DA8:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r24,r11,18,29,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r25,r10,18,29,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r18,r25,r24
	r18.u64 = r25.u64 + r24.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x82535DD0;
	sub_825BB9C8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r26,r11,-22012
	r26.s64 = ctx.r11.s64 + -22012;
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x82535ee0
	if (!ctx.cr6.eq) goto loc_82535EE0;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x82535e10
	if (ctx.cr6.eq) goto loc_82535E10;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c4b00
	ctx.lr = 0x82535E10;
	sub_825C4B00(ctx, base);
loc_82535E10:
	// rlwinm r11,r20,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xFFFFFFFE;
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
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
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
	// beq cr6,0x82535e78
	if (ctx.cr6.eq) goto loc_82535E78;
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// subf r28,r31,r20
	r28.u64 = r20.u64 - r31.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_82535E5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r28,r30
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + r30.u32);
	// bl 0x8250ad28
	ctx.lr = 0x82535E68;
	sub_8250AD28(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82535e5c
	if (!ctx.cr0.eq) goto loc_82535E5C;
loc_82535E78:
	// addi r8,r20,4
	ctx.r8.s64 = r20.s64 + 4;
loc_82535E7C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82535fac
	if (ctx.cr6.eq) goto loc_82535FAC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82535ecc
	if (ctx.cr6.eq) goto loc_82535ECC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82535eac
	goto loc_82535EAC;
loc_82535EA4:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82535EAC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82535ea4
	if (!ctx.cr6.eq) goto loc_82535EA4;
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
loc_82535ECC:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82535e7c
	if (!ctx.cr6.eq) goto loc_82535E7C;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82535e7c
	goto loc_82535E7C;
loc_82535EE0:
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x82535f20
	if (ctx.cr6.eq) goto loc_82535F20;
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
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
loc_82535F20:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// lbz r27,-1(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x82535fac
	if (ctx.cr6.eq) goto loc_82535FAC;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82535F44:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82535F50;
	sub_8250AB60(ctx, base);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,7296
	ctx.r10.u64 = ctx.r10.u64 | 7296;
	// srw r9,r27,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r27.u32 >> (r29.u8 & 0x3F));
	// ori r12,r12,64671
	ctx.r12.u64 = ctx.r12.u64 | 64671;
	// rlwimi r10,r9,5,25,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// and r9,r8,r12
	ctx.r9.u64 = ctx.r8.u64 & ctx.r12.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r9,0(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 0);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8250ad28
	ctx.lr = 0x82535F9C;
	sub_8250AD28(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stwu r3,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r28.u32 = ea;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// bne 0x82535f44
	if (!ctx.cr0.eq) goto loc_82535F44;
loc_82535FAC:
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r9,r11,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r23,r10,-21480
	r23.s64 = ctx.r10.s64 + -21480;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x8253611c
	if (!ctx.cr6.eq) goto loc_8253611C;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x82536028
	if (ctx.cr6.eq) goto loc_82536028;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x82535ff0
	if (ctx.cr6.eq) goto loc_82535FF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c4b00
	ctx.lr = 0x82535FF0;
	sub_825C4B00(ctx, base);
loc_82535FF0:
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xFFFFFFFE;
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
loc_82536028:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82536060
	if (ctx.cr6.eq) goto loc_82536060;
	// addi r28,r24,11
	r28.s64 = r24.s64 + 11;
	// addi r29,r17,40
	r29.s64 = r17.s64 + 40;
loc_8253603C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzu r4,4(r29)
	ea = 4 + r29.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x8250ad28
	ctx.lr = 0x82536048;
	sub_8250AD28(ctx, base);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// blt cr6,0x8253603c
	if (ctx.cr6.lt) goto loc_8253603C;
loc_82536060:
	// add r11,r24,r23
	ctx.r11.u64 = r24.u64 + r23.u64;
	// addi r7,r17,4
	ctx.r7.s64 = r17.s64 + 4;
	// lbz r8,-1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
loc_8253606C:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825361b0
	if (ctx.cr6.eq) goto loc_825361B0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82536108
	if (ctx.cr6.eq) goto loc_82536108;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// beq cr6,0x82536108
	if (ctx.cr6.eq) goto loc_82536108;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825360a4
	goto loc_825360A4;
loc_8253609C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_825360A4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253609c
	if (!ctx.cr6.eq) goto loc_8253609C;
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
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r6,r10,24,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r6,r9,2,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r5,r10,28,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r6,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r6,r8,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r6,r9,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82536108:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253606c
	if (!ctx.cr6.eq) goto loc_8253606C;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// b 0x8253606c
	goto loc_8253606C;
loc_8253611C:
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// li r30,0
	r30.s64 = 0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lbz r27,-1(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// beq cr6,0x825361b0
	if (ctx.cr6.eq) goto loc_825361B0;
	// addi r28,r24,11
	r28.s64 = r24.s64 + 11;
	// li r29,0
	r29.s64 = 0;
loc_8253613C:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82536148;
	sub_8250AB60(ctx, base);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,7296
	ctx.r10.u64 = ctx.r10.u64 | 7296;
	// srw r9,r27,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r27.u32 >> (r29.u8 & 0x3F));
	// ori r12,r12,64671
	ctx.r12.u64 = ctx.r12.u64 | 64671;
	// rlwimi r10,r9,5,25,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// and r9,r8,r12
	ctx.r9.u64 = ctx.r8.u64 & ctx.r12.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r9,0(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 0);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8250ad28
	ctx.lr = 0x82536194;
	sub_8250AD28(ctx, base);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// blt cr6,0x8253613c
	if (ctx.cr6.lt) goto loc_8253613C;
loc_825361B0:
	// lwz r11,12(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825361c8
	goto loc_825361C8;
loc_825361C0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825361C8:
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// bne cr6,0x825361c0
	if (!ctx.cr6.eq) goto loc_825361C0;
	// lwz r8,8(r19)
	ctx.r8.u64 = REX_LOAD_U32(r19.u32 + 8);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r10,-21496
	ctx.r9.s64 = ctx.r10.s64 + -21496;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r19)
	REX_STORE_U32(r19.u32 + 8, ctx.r11.u32);
	// stw r19,4(r31)
	REX_STORE_U32(r31.u32 + 4, r19.u32);
	// stw r31,12(r19)
	REX_STORE_U32(r19.u32 + 12, r31.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r10.u32);
	// rlwinm r8,r10,22,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// rlwinm r6,r10,26,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// rlwinm r5,r10,28,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r8,r11,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r8,r7,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwimi r11,r8,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82536264
	goto loc_82536264;
loc_8253625C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82536264:
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r16.u32, ctx.xer);
	// bne cr6,0x8253625c
	if (!ctx.cr6.eq) goto loc_8253625C;
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// add r8,r24,r23
	ctx.r8.u64 = r24.u64 + r23.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r11.u32);
	// stw r16,4(r31)
	REX_STORE_U32(r31.u32 + 4, r16.u32);
	// stw r31,12(r16)
	REX_STORE_U32(r16.u32 + 12, r31.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r10.u32);
	// rlwinm r7,r10,22,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r10,24,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// rlwinm r5,r10,26,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,28,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r6,r11,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r6,r7,2,28,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r7,r11,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r7,r6,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r9,r9,0,27,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r7,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r11,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// lbz r8,-1(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + -1);
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r7,r11,26,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r10,r11,28,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// srw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r10,r7,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r11.u32);
	// bl 0x824f7708
	ctx.lr = 0x82536334;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536350
	if (ctx.cr0.eq) goto loc_82536350;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r22)
	ctx.r5.u64 = REX_LOAD_U32(r22.u32 + 652);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2288
	ctx.lr = 0x82536350;
	sub_825C2288(ctx, base);
loc_82536350:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824f7708
	ctx.lr = 0x82536358;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536374
	if (ctx.cr0.eq) goto loc_82536374;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r22)
	ctx.r5.u64 = REX_LOAD_U32(r22.u32 + 652);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c2288
	ctx.lr = 0x82536374;
	sub_825C2288(ctx, base);
loc_82536374:
	// slw r11,r14,r18
	ctx.r11.u64 = r18.u8 & 0x20 ? 0 : (r14.u32 << (r18.u8 & 0x3F));
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// rlwinm r10,r10,0,31,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// rlwimi r9,r11,1,27,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE1);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8253640c
	if (ctx.cr0.eq) goto loc_8253640C;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x825363B0;
	sub_82516448(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825363e8
	if (!ctx.cr0.eq) goto loc_825363E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825363e8
	if (ctx.cr0.eq) goto loc_825363E8;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825363f4
	if (!ctx.cr6.gt) goto loc_825363F4;
loc_825363E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x825363F0;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825363F4:
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
loc_8253640C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r20,r31
	r20.u64 = r31.u64;
	// bl 0x825335b8
	ctx.lr = 0x8253641C;
	sub_825335B8(ctx, base);
loc_8253641C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82536428;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwimi r11,r15,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,0(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r8,r9,8,28,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xE;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// slw r11,r14,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r8.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwimi r11,r10,0,27,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F) | (ctx.r11.u64 & 0x1FE0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82536974
	goto loc_82536974;
loc_82536484:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825364a0
	if (ctx.cr0.eq) goto loc_825364A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c4b00
	ctx.lr = 0x825364A0;
	sub_825C4B00(ctx, base);
loc_825364A0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825364c0
	if (ctx.cr0.eq) goto loc_825364C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c4b00
	ctx.lr = 0x825364C0;
	sub_825C4B00(ctx, base);
loc_825364C0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825366a8
	if (ctx.cr0.eq) goto loc_825366A8;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82530ae0
	ctx.lr = 0x825364E4;
	sub_82530AE0(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536518
	if (ctx.cr0.eq) goto loc_82536518;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250a678
	ctx.lr = 0x825364FC;
	sub_8250A678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82503400
	ctx.lr = 0x8253650C;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82536518;
	sub_8250AD28(ctx, base);
loc_82536518:
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82530ae0
	ctx.lr = 0x82536530;
	sub_82530AE0(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536564
	if (ctx.cr0.eq) goto loc_82536564;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250a678
	ctx.lr = 0x82536548;
	sub_8250A678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82503400
	ctx.lr = 0x82536558;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82536564;
	sub_8250AD28(ctx, base);
loc_82536564:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// stw r11,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,28(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 28);
	// bl 0x825bb9c8
	ctx.lr = 0x82536580;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
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
	// beq cr6,0x825365f8
	if (ctx.cr6.eq) goto loc_825365F8;
	// addi r29,r3,40
	r29.s64 = ctx.r3.s64 + 40;
loc_825365CC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825365DC;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825365E8;
	sub_8250AD28(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// cmplw cr6,r31,r18
	ctx.cr6.compare<uint32_t>(r31.u32, r18.u32, ctx.xer);
	// blt cr6,0x825365cc
	if (ctx.cr6.lt) goto loc_825365CC;
loc_825365F8:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8253663c
	if (ctx.cr6.eq) goto loc_8253663C;
	// addi r29,r18,11
	r29.s64 = r18.s64 + 11;
loc_82536608:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82536618;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82536624;
	sub_8250AD28(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// blt cr6,0x82536608
	if (ctx.cr6.lt) goto loc_82536608;
loc_8253663C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82536648;
	sub_8250AB60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82536654;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
	// bl 0x8250aed8
	ctx.lr = 0x82536668;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// bl 0x82548eb8
	ctx.lr = 0x82536680;
	sub_82548EB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x82536698;
	sub_825335B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825335b8
	ctx.lr = 0x825366A4;
	sub_825335B8(ctx, base);
	// b 0x82536968
	goto loc_82536968;
loc_825366A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r18,2
	ctx.cr6.compare<uint32_t>(r18.u32, 2, ctx.xer);
	// lfs f1,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f4.f64 = double(temp.f32);
	// ble cr6,0x825366c8
	if (!ctx.cr6.gt) goto loc_825366C8;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// b 0x825366cc
	goto loc_825366CC;
loc_825366C8:
	// fmr f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f4.f64;
loc_825366CC:
	// cmplwi cr6,r18,1
	ctx.cr6.compare<uint32_t>(r18.u32, 1, ctx.xer);
	// ble cr6,0x825366dc
	if (!ctx.cr6.gt) goto loc_825366DC;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x825366e0
	goto loc_825366E0;
loc_825366DC:
	// fmr f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f4.f64;
loc_825366E0:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825c1a18
	ctx.lr = 0x825366EC;
	sub_825C1A18(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825366FC;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r28,r15,25,4,6
	r28.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 25) & 0xE000000;
	// rlwinm r11,r11,0,7,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | r28.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x8253671C;
	sub_8250A620(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r11,57
	ctx.r11.s64 = 57;
	// li r26,3
	r26.s64 = 3;
	// rlwimi r10,r11,7,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// cmplwi cr6,r18,4
	ctx.cr6.compare<uint32_t>(r18.u32, 4, ctx.xer);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r31,r11,27,24,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// bge cr6,0x82536774
	if (!ctx.cr6.lt) goto loc_82536774;
	// subfic r10,r18,4
	ctx.xer.ca = r18.u32 <= 4;
	ctx.r10.u64 = static_cast<uint64_t>(4) - r18.u64;
	// addi r9,r18,-1
	ctx.r9.s64 = r18.s64 + -1;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82536754:
	// srw r10,r31,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r8,r26,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// andc r8,r31,r8
	ctx.r8.u64 = r31.u64 & ~ctx.r8.u64;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r31,r10,r8
	r31.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bdnz 0x82536754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82536754;
loc_82536774:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r5,12(r19)
	ctx.r5.u64 = REX_LOAD_U32(r19.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82503da0
	ctx.lr = 0x82536784;
	sub_82503DA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,7,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// li r30,0
	r30.s64 = 0;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | r28.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// rlwimi r11,r31,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// rlwinm r9,r11,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// beq cr6,0x825367e0
	if (ctx.cr6.eq) goto loc_825367E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
loc_825367BC:
	// srw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r7,r26,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// andc r7,r30,r7
	ctx.r7.u64 = r30.u64 & ~ctx.r7.u64;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r30,r8,r7
	r30.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x825367bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825367BC;
loc_825367E0:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8253680c
	if (ctx.cr6.eq) goto loc_8253680C;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825367F4:
	// slw r8,r26,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// slw r7,r10,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r8,r30,r8
	ctx.r8.u64 = r30.u64 & ~ctx.r8.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r30,r8,r7
	r30.u64 = ctx.r8.u64 | ctx.r7.u64;
	// bdnz 0x825367f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825367F4;
loc_8253680C:
	// cmplwi cr6,r15,4
	ctx.cr6.compare<uint32_t>(r15.u32, 4, ctx.xer);
	// bge cr6,0x82536848
	if (!ctx.cr6.lt) goto loc_82536848;
	// addi r11,r23,-1
	ctx.r11.s64 = r23.s64 + -1;
	// subfic r10,r15,4
	ctx.xer.ca = r15.u32 <= 4;
	ctx.r10.u64 = static_cast<uint64_t>(4) - r15.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r15,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82536830:
	// slw r10,r26,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r30,r10
	ctx.r10.u64 = r30.u64 & ~ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r30,r10,r8
	r30.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bdnz 0x82536830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82536830;
loc_82536848:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r5,12(r16)
	ctx.r5.u64 = REX_LOAD_U32(r16.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82503da0
	ctx.lr = 0x82536858;
	sub_82503DA0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,7,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | r28.u64;
	// rlwimi r11,r30,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x82536890
	if (ctx.cr6.eq) goto loc_82536890;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82536894
	if (!ctx.cr6.eq) goto loc_82536894;
loc_82536890:
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
loc_82536894:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825368a8
	if (ctx.cr0.eq) goto loc_825368A8;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825368dc
	if (!ctx.cr0.eq) goto loc_825368DC;
loc_825368A8:
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x825368c8
	if (ctx.cr6.eq) goto loc_825368C8;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x825368cc
	if (!ctx.cr6.eq) goto loc_825368CC;
loc_825368C8:
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
loc_825368CC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825368e8
	if (ctx.cr0.eq) goto loc_825368E8;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825368e8
	if (ctx.cr0.eq) goto loc_825368E8;
loc_825368DC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwimi r11,r14,1,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_825368E8:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82530e20
	ctx.lr = 0x82536900;
	sub_82530E20(ctx, base);
	// lwz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82536930
	if (ctx.cr6.eq) goto loc_82536930;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82503400
	ctx.lr = 0x8253691C;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82536928;
	sub_8250AD28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r11.u32);
loc_82536930:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8253693C;
	sub_8250AB60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82528fd8
	ctx.lr = 0x82536948;
	sub_82528FD8(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// bl 0x8250aed8
	ctx.lr = 0x8253695C;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_82536968:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825335b8
	ctx.lr = 0x82536974;
	sub_825335B8(ctx, base);
loc_82536974:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825DB778) {
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
	ctx.lr = 0x825DB7A8;
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
	// bl 0x825d2b78
	ctx.lr = 0x825DB7C4;
	sub_825D2B78(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825db7fc
	if (ctx.cr6.eq) goto loc_825DB7FC;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x825db804
	if (!ctx.cr6.eq) goto loc_825DB804;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,9792
	ctx.r6.s64 = ctx.r11.s64 + 9792;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,553
	ctx.r7.s64 = 553;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DB7F8;
	sub_824EA978(ctx, base);
	// b 0x825db804
	goto loc_825DB804;
loc_825DB7FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d81a0
	ctx.lr = 0x825DB804;
	sub_825D81A0(ctx, base);
loc_825DB804:
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

DEFINE_REX_FUNC(sub_825E0270) {
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
	ctx.lr = 0x825E0278;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,12(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x824ea8e0
	ctx.lr = 0x825E02A0;
	sub_824EA8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x824ea8e0
	ctx.lr = 0x825E02B4;
	sub_824EA8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x824ea8e0
	ctx.lr = 0x825E02C8;
	sub_824EA8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x824ea8e0
	ctx.lr = 0x825E02DC;
	sub_824EA8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x824ea8e0
	ctx.lr = 0x825E02F0;
	sub_824EA8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x824ea8e0
	ctx.lr = 0x825E0304;
	sub_824EA8E0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,27328
	ctx.r11.s64 = ctx.r11.s64 + 27328;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x824ea8e0
	ctx.lr = 0x825E0320;
	sub_824EA8E0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825E6818) {
	REX_FUNC_PROLOGUE();
	// lwz r11,916(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 916);
	// lwz r9,908(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 908);
	// lwz r10,900(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 900);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6B58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6CA0) {
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
	ctx.lr = 0x825E6CA8;
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
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r27,1452(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E6CD0;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// beq 0x825e6cfc
	if (ctx.cr0.eq) goto loc_825E6CFC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825f8bd0
	ctx.lr = 0x825E6CF4;
	sub_825F8BD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825e6d00
	goto loc_825E6D00;
loc_825E6CFC:
	// li r30,0
	r30.s64 = 0;
loc_825E6D00:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x825f7a90
	ctx.lr = 0x825E6D0C;
	sub_825F7A90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825ECB70) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// li r31,2
	r31.s64 = 2;
loc_825ECB8C:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ECBA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825ecb8c
	if (!ctx.cr0.eq) goto loc_825ECB8C;
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

DEFINE_REX_FUNC(sub_825EF858) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825EF860;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EF87C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x825ef8c0
	if (!ctx.cr6.gt) goto loc_825EF8C0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,15448
	ctx.r6.s64 = ctx.r11.s64 + 15448;
	// addi r5,r10,16560
	ctx.r5.s64 = ctx.r10.s64 + 16560;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1739
	ctx.r7.s64 = 1739;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EF8C0;
	sub_824EA978(ctx, base);
loc_825EF8C0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825ef8e0
	if (!ctx.cr6.gt) goto loc_825EF8E0;
	// li r11,13
	ctx.r11.s64 = 13;
	// stb r11,0(0)
	REX_STORE_U8(0, ctx.r11.u8);
loc_825EF8E0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825ef908
	goto loc_825EF908;
loc_825EF8F0:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825ef900
	if (!ctx.cr6.lt) goto loc_825EF900;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_825EF900:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825EF908:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825ef8f0
	if (!ctx.cr6.eq) goto loc_825EF8F0;
	// lwz r30,92(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r29,8(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x825ef948
	goto loc_825EF948;
loc_825EF91C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825ef92c
	if (!ctx.cr6.lt) goto loc_825EF92C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_825EF92C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f7460
	ctx.lr = 0x825EF934;
	sub_825F7460(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ed1a8
	ctx.lr = 0x825EF940;
	sub_825ED1A8(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_825EF948:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825ef91c
	if (!ctx.cr6.eq) goto loc_825EF91C;
	// lwz r30,68(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r28,108(r31)
	REX_STORE_U32(r31.u32 + 108, r28.u32);
	// lwz r29,8(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x825ef9a0
	goto loc_825EF9A0;
loc_825EF960:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825ef970
	if (!ctx.cr6.lt) goto loc_825EF970;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_825EF970:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ed210
	ctx.lr = 0x825EF97C;
	sub_825ED210(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ef998
	if (ctx.cr0.eq) goto loc_825EF998;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f7460
	ctx.lr = 0x825EF98C;
	sub_825F7460(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ed1a8
	ctx.lr = 0x825EF998;
	sub_825ED1A8(ctx, base);
loc_825EF998:
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_825EF9A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825ef960
	if (!ctx.cr6.eq) goto loc_825EF960;
	// stw r28,108(r31)
	REX_STORE_U32(r31.u32 + 108, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825F7378) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F7380;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,18112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 18112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f73a8
	if (ctx.cr6.eq) goto loc_825F73A8;
	// bl 0x825f71e8
	ctx.lr = 0x825F73A4;
	sub_825F71E8(ctx, base);
	// b 0x825f73d0
	goto loc_825F73D0;
loc_825F73A8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x825f59b0
	ctx.lr = 0x825F73B8;
	sub_825F59B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825f73d0
	if (ctx.cr0.lt) goto loc_825F73D0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f6ab8
	ctx.lr = 0x825F73D0;
	sub_825F6AB8(ctx, base);
loc_825F73D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825F7F60) {
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
	// b 0x825f7f98
	goto loc_825F7F98;
loc_825F7F78:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f7f98
	if (ctx.cr6.eq) goto loc_825F7F98;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825F7F98;
	sub_825B3528(ctx, base);
loc_825F7F98:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f7f78
	if (!ctx.cr6.eq) goto loc_825F7F78;
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

DEFINE_REX_FUNC(sub_825F8D38) {
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
	ctx.lr = 0x825F8D40;
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
	// bl 0x825f7fb8
	ctx.lr = 0x825F8D54;
	sub_825F7FB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,28664
	ctx.r9.s64 = ctx.r11.s64 + 28664;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,28336
	r27.s64 = ctx.r10.s64 + 28336;
	// blt cr6,0x825f8d9c
	if (ctx.cr6.lt) goto loc_825F8D9C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,28648
	ctx.r5.s64 = ctx.r11.s64 + 28648;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,577
	ctx.r7.s64 = 577;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F8D9C;
	sub_824EA978(ctx, base);
loc_825F8D9C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825f8dc4
	if (ctx.cr6.lt) goto loc_825F8DC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,28628
	ctx.r5.s64 = ctx.r11.s64 + 28628;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,578
	ctx.r7.s64 = 578;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F8DC4;
	sub_824EA978(ctx, base);
loc_825F8DC4:
	// rlwinm r11,r30,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825FADF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,31296
	ctx.r3.s64 = ctx.r11.s64 + 31296;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FAF28) {
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
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FAF4C;
	sub_825FA990(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,31536
	ctx.r9.s64 = ctx.r11.s64 + 31536;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stb r11,28(r30)
	REX_STORE_U8(r30.u32 + 28, ctx.r11.u8);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825FC660) {
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
	ctx.lr = 0x825FC668;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r10,2148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,2148(r11)
	REX_STORE_U32(ctx.r11.u32 + 2148, ctx.r10.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r30,1456(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FC698;
	sub_825B33A0(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x825fc6b8
	if (ctx.cr0.eq) goto loc_825FC6B8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825FC6B4;
	sub_825D7A48(ctx, base);
	// b 0x825fc6bc
	goto loc_825FC6BC;
loc_825FC6B8:
	// li r28,0
	r28.s64 = 0;
loc_825FC6BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,72(r29)
	REX_STORE_U32(r29.u32 + 72, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,72(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825FC6EC;
	sub_825F7718(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r27,2
	r27.s64 = 2;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r10,72(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 72);
loc_825FC708:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_825FC714:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,2148(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 2148);
	// bl 0x825fd008
	ctx.lr = 0x825FC724;
	sub_825FD008(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x825fc78c
	if (ctx.cr0.eq) goto loc_825FC78C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825FC738;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r27,72(r30)
	REX_STORE_U32(r30.u32 + 72, r27.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,72(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 72);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,2148(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 2148);
	// stw r10,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// b 0x825fc708
	goto loc_825FC708;
loc_825FC78C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fc7a8
	if (ctx.cr6.eq) goto loc_825FC7A8;
	// bl 0x825e9278
	ctx.lr = 0x825FC7A0;
	sub_825E9278(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825fc714
	goto loc_825FC714;
loc_825FC7A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825FC7B0;
	sub_825E18C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8260C9B8) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca8
	ctx.lr = 0x8260C9C0;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r25,r3,44
	r25.s64 = ctx.r3.s64 + 44;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CA00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82615020
	ctx.lr = 0x8260CA08;
	sub_82615020(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 358, ctx.xer);
	// bne cr6,0x8260ca48
	if (!ctx.cr6.eq) goto loc_8260CA48;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,580
	ctx.r4.s64 = 580;
	// bl 0x8260b5b8
	ctx.lr = 0x8260CA30;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260cac4
	if (ctx.cr0.eq) goto loc_8260CAC4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82614590
	ctx.lr = 0x8260CA44;
	sub_82614590(ctx, base);
	// b 0x8260cabc
	goto loc_8260CABC;
loc_8260CA48:
	// cmplwi cr6,r11,353
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 353, ctx.xer);
	// beq cr6,0x8260ca8c
	if (ctx.cr6.eq) goto loc_8260CA8C;
	// cmplwi cr6,r11,354
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 354, ctx.xer);
	// beq cr6,0x8260ca8c
	if (ctx.cr6.eq) goto loc_8260CA8C;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,448
	ctx.r4.s64 = 448;
	// bl 0x8260b5b8
	ctx.lr = 0x8260CA74;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260cac4
	if (ctx.cr0.eq) goto loc_8260CAC4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8260fab8
	ctx.lr = 0x8260CA88;
	sub_8260FAB8(ctx, base);
	// b 0x8260cabc
	goto loc_8260CABC;
loc_8260CA8C:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,704
	ctx.r4.s64 = 704;
	// bl 0x8260b5b8
	ctx.lr = 0x8260CAA8;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260cac4
	if (ctx.cr0.eq) goto loc_8260CAC4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826126b0
	ctx.lr = 0x8260CABC;
	sub_826126B0(ctx, base);
loc_8260CABC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8260cac8
	goto loc_8260CAC8;
loc_8260CAC4:
	// li r31,0
	r31.s64 = 0;
loc_8260CAC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8260cae0
	if (!ctx.cr6.eq) goto loc_8260CAE0;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8260cb98
	goto loc_8260CB98;
loc_8260CAE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CB08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8260cb64
	if (ctx.cr0.lt) goto loc_8260CB64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,188
	ctx.r3.s64 = r28.s64 + 188;
	// bl 0x8260f7f8
	ctx.lr = 0x8260CB20;
	sub_8260F7F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260cb58
	if (ctx.cr0.eq) goto loc_8260CB58;
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r26,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq 0x8260cb50
	if (ctx.cr0.eq) goto loc_8260CB50;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,488
	ctx.r3.s64 = r28.s64 + 488;
	// bl 0x82613af8
	ctx.lr = 0x8260CB44;
	sub_82613AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260cb58
	if (ctx.cr0.eq) goto loc_8260CB58;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8260CB50:
	// stw r31,0(r24)
	REX_STORE_U32(r24.u32 + 0, r31.u32);
	// b 0x8260cb98
	goto loc_8260CB98;
loc_8260CB58:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8260CB64:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CB7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CB94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x8260CB98;
	sub_8264C3D0(ctx, base);
loc_8260CB98:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260CBAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8260cbbc
	if (!ctx.cr6.lt) goto loc_8260CBBC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260b9b8
	ctx.lr = 0x8260CBBC;
	sub_8260B9B8(ctx, base);
loc_8260CBBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261b718
	ctx.lr = 0x8260CBC4;
	sub_8261B718(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82615FE0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82615f98
	sub_82615F98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82616190) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82616198;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r31,r3,28
	r31.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826161BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,380(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 380);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826161d8
	if (!ctx.cr6.eq) goto loc_826161D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_826161D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826161EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82618770) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13960
	ctx.r11.s64 = ctx.r11.s64 + -13960;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82629cd8
	ctx.lr = 0x8261879C;
	sub_82629CD8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826187ac
	if (ctx.cr0.eq) goto loc_826187AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x826187AC;
	sub_8264C3D0(ctx, base);
loc_826187AC:
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

DEFINE_REX_FUNC(sub_8261B820) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bctrl 
	ctx.lr = 0x8261B86C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x826a1e70
	ctx.lr = 0x8261B87C;
	sub_826A1E70(ctx, base);
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

DEFINE_REX_FUNC(sub_8261F448) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x8261F450;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2ca4
	ctx.lr = 0x8261F458;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,352(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r19,360(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 360);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r31,384(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r20,34(r11)
	r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// beq cr6,0x8261fa84
	if (ctx.cr6.eq) goto loc_8261FA84;
	// lwz r11,424(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261f494
	if (ctx.cr6.eq) goto loc_8261F494;
	// li r19,6
	r19.s64 = 6;
loc_8261F494:
	// cmpwi cr6,r20,6
	ctx.cr6.compare<int32_t>(r20.s32, 6, ctx.xer);
	// bne cr6,0x8261f6c4
	if (!ctx.cr6.eq) goto loc_8261F6C4;
	// cmpwi cr6,r19,2
	ctx.cr6.compare<int32_t>(r19.s32, 2, ctx.xer);
	// bne cr6,0x8261f6c4
	if (!ctx.cr6.eq) goto loc_8261F6C4;
	// lwz r10,372(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 372);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// blt cr6,0x8261f644
	if (ctx.cr6.lt) goto loc_8261F644;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
loc_8261F4F0:
	// lfs f2,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	f31.f64 = double(temp.f32);
	// fmuls f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f30,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f28.f64 = double(temp.f32);
	// lfs f27,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f27.f64 = double(temp.f32);
	// fmadds f1,f31,f9,f1
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f9.f64, ctx.f1.f64)));
	// fmadds f2,f31,f3,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmadds f1,f30,f11,f1
	ctx.f1.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f2,f30,f5,f2
	ctx.f2.f64 = double(float(std::fma(f30.f64, ctx.f5.f64, ctx.f2.f64)));
	// fmadds f1,f29,f12,f1
	ctx.f1.f64 = double(float(std::fma(f29.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f2,f29,f6,f2
	ctx.f2.f64 = double(float(std::fma(f29.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f28,f13,f1
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f28,f7,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f27,f0,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,0(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// fmadds f2,f27,f8,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,4(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// lfs f1,44(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,32(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32);
	f31.f64 = double(temp.f32);
	// lfs f30,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	f29.f64 = double(float(f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	f30.f64 = double(float(f30.f64 * ctx.f4.f64));
	// lfs f28,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, f29.f64)));
	// lfs f27,28(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	f27.f64 = double(temp.f32);
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, f30.f64)));
	// fmadds f30,f2,f11,f29
	f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,8(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 8, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,12(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
	// lfs f1,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,60(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	f31.f64 = double(temp.f32);
	// lfs f30,64(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	f29.f64 = double(float(f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	f30.f64 = double(float(f30.f64 * ctx.f4.f64));
	// lfs f28,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, f29.f64)));
	// lfs f27,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	f27.f64 = double(temp.f32);
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, f30.f64)));
	// fmadds f30,f2,f11,f29
	f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,16(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 16, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,20(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r27.u32 + 20, temp.u32);
	// lfs f1,92(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,84(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,80(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 80);
	f31.f64 = double(temp.f32);
	// lfs f30,88(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 88);
	f30.f64 = double(temp.f32);
	// fmuls f29,f30,f10
	f29.f64 = double(float(f30.f64 * ctx.f10.f64));
	// fmuls f30,f30,f4
	f30.f64 = double(float(f30.f64 * ctx.f4.f64));
	// lfs f28,72(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 72);
	f28.f64 = double(temp.f32);
	// fmadds f29,f1,f9,f29
	f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, f29.f64)));
	// lfs f27,76(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 76);
	f27.f64 = double(temp.f32);
	// addi r29,r29,96
	r29.s64 = r29.s64 + 96;
	// fmadds f1,f1,f3,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, f30.f64)));
	// fmadds f30,f2,f11,f29
	f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, f29.f64)));
	// fmadds f2,f2,f5,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f31,f12,f30
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, f30.f64)));
	// fmadds f2,f31,f6,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f27,f13,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f27,f7,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f28,f0,f1
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,24(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 24, temp.u32);
	// fmadds f2,f28,f8,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,28(r27)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r27.u32 + 28, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8261f4f0
	if (ctx.cr6.lt) goto loc_8261F4F0;
loc_8261F644:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8261fa84
	if (!ctx.cr6.lt) goto loc_8261FA84;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8261F65C:
	// lfs f2,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f30,f2,f4
	f30.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f29,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f28,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f28.f64 = double(temp.f32);
	// lfs f27,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	f27.f64 = double(temp.f32);
	// lfsu f2,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f2,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, ctx.f1.f64)));
	// fmadds f2,f2,f3,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, f30.f64)));
	// fmadds f1,f27,f11,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f2,f27,f5,f2
	ctx.f2.f64 = double(float(std::fma(f27.f64, ctx.f5.f64, ctx.f2.f64)));
	// fmadds f1,f28,f12,f1
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f2,f28,f6,f2
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmadds f1,f29,f13,f1
	ctx.f1.f64 = double(float(std::fma(f29.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f2,f29,f7,f2
	ctx.f2.f64 = double(float(std::fma(f29.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f1,f31,f0,f1
	ctx.f1.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f2,f31,f8,f2
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfsu f2,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261f65c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261F65C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cf0
	ctx.lr = 0x8261F6C0;
	// b 0x826a1ce4
	return;
loc_8261F6C4:
	// cmpw cr6,r20,r19
	ctx.cr6.compare<int32_t>(r20.s32, r19.s32, ctx.xer);
	// blt cr6,0x8261f8a4
	if (ctx.cr6.lt) goto loc_8261F8A4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8261fa84
	if (!ctx.cr6.gt) goto loc_8261FA84;
	// neg r11,r19
	ctx.r11.s64 = static_cast<int64_t>(-r19.u64);
	// neg r10,r20
	ctx.r10.s64 = static_cast<int64_t>(-r20.u64);
	// rlwinm r23,r20,2,0,29
	r23.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r19,2,0,29
	r24.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r10,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r26,r6,r31
	r26.u64 = r31.u64 - ctx.r6.u64;
	// subfic r28,r4,-8
	ctx.xer.ca = ctx.r4.u32 <= 4294967288;
	r28.u64 = static_cast<uint64_t>(-8) - ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
loc_8261F6F8:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8261F708;
	sub_826A2E60(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8261f808
	if (!ctx.cr6.gt) goto loc_8261F808;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_8261F718:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(r20.s32, 4, ctx.xer);
	// blt cr6,0x8261f7c4
	if (ctx.cr6.lt) goto loc_8261F7C4;
	// addi r5,r20,-3
	ctx.r5.s64 = r20.s64 + -3;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// addi r4,r28,12
	ctx.r4.s64 = r28.s64 + 12;
loc_8261F734:
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// add r7,r28,r10
	ctx.r7.u64 = r28.u64 + ctx.r10.u64;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f12,r6,r7
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lfs f10,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f4,r7,r9
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfsx f3,r11,r31
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f2,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfsx f0,r7,r4
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f2,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// blt cr6,0x8261f734
	if (ctx.cr6.lt) goto loc_8261F734;
loc_8261F7C4:
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r20.s32, ctx.xer);
	// bge cr6,0x8261f7fc
	if (!ctx.cr6.lt) goto loc_8261F7FC;
	// subf r9,r8,r20
	ctx.r9.u64 = r20.u64 - ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8261F7D8:
	// lwz r9,372(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lfsx f0,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// bdnz 0x8261f7d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261F7D8;
loc_8261F7FC:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8261f718
	if (!ctx.cr0.eq) goto loc_8261F718;
loc_8261F808:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(r19.s32, 4, ctx.xer);
	// blt cr6,0x8261f850
	if (ctx.cr6.lt) goto loc_8261F850;
	// addi r8,r19,-3
	ctx.r8.s64 = r19.s64 + -3;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// addi r11,r27,4
	ctx.r11.s64 = r27.s64 + 4;
loc_8261F820:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r26,r11
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8261f820
	if (ctx.cr6.lt) goto loc_8261F820;
loc_8261F850:
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r19.s32, ctx.xer);
	// bge cr6,0x8261f878
	if (!ctx.cr6.lt) goto loc_8261F878;
	// subf r10,r9,r19
	ctx.r10.u64 = r19.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8261F868:
	// lfsx f0,r26,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8261f868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261F868;
loc_8261F878:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r29,r23,r29
	r29.u64 = r23.u64 + r29.u64;
	// add r28,r28,r21
	r28.u64 = r28.u64 + r21.u64;
	// add r27,r24,r27
	r27.u64 = r24.u64 + r27.u64;
	// add r26,r26,r22
	r26.u64 = r26.u64 + r22.u64;
	// bne 0x8261f6f8
	if (!ctx.cr0.eq) goto loc_8261F6F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cf0
	ctx.lr = 0x8261F8A0;
	// b 0x826a1ce4
	return;
loc_8261F8A4:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mullw r10,r11,r20
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r20.s32);
	// mullw r9,r11,r19
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r4
	r28.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r26,r9,r6
	r26.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8261fa84
	if (ctx.cr6.lt) goto loc_8261FA84;
	// neg r11,r19
	ctx.r11.s64 = static_cast<int64_t>(-r19.u64);
	// neg r10,r20
	ctx.r10.s64 = static_cast<int64_t>(-r20.u64);
	// rlwinm r23,r20,2,0,29
	r23.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r19,2,0,29
	r24.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r11,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r10,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r27,r26,r31
	r27.u64 = r31.u64 - r26.u64;
	// subfic r29,r28,-8
	ctx.xer.ca = r28.u32 <= 4294967288;
	r29.u64 = static_cast<uint64_t>(-8) - r28.u64;
loc_8261F8EC:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8261F8FC;
	sub_826A2E60(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8261f9fc
	if (!ctx.cr6.gt) goto loc_8261F9FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_8261F90C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r20,4
	ctx.cr6.compare<int32_t>(r20.s32, 4, ctx.xer);
	// blt cr6,0x8261f9b8
	if (ctx.cr6.lt) goto loc_8261F9B8;
	// addi r5,r20,-3
	ctx.r5.s64 = r20.s64 + -3;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r28,8
	ctx.r10.s64 = r28.s64 + 8;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
loc_8261F928:
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// add r7,r29,r10
	ctx.r7.u64 = r29.u64 + ctx.r10.u64;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f12,r6,r7
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lfs f10,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lfsx f4,r7,r9
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f6,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfsx f3,r11,r31
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r6,372(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 372);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f1,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lfsx f0,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f1,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f3.f64)));
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x8261f928
	if (ctx.cr6.lt) goto loc_8261F928;
loc_8261F9B8:
	// cmpw cr6,r8,r20
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r20.s32, ctx.xer);
	// bge cr6,0x8261f9f0
	if (!ctx.cr6.lt) goto loc_8261F9F0;
	// subf r9,r8,r20
	ctx.r9.u64 = r20.u64 - ctx.r8.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8261F9CC:
	// lwz r9,372(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfsx f12,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// bdnz 0x8261f9cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261F9CC;
loc_8261F9F0:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8261f90c
	if (!ctx.cr0.eq) goto loc_8261F90C;
loc_8261F9FC:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(r19.s32, 4, ctx.xer);
	// blt cr6,0x8261fa44
	if (ctx.cr6.lt) goto loc_8261FA44;
	// addi r8,r19,-3
	ctx.r8.s64 = r19.s64 + -3;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// addi r11,r26,4
	ctx.r11.s64 = r26.s64 + 4;
loc_8261FA14:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r27,r11
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8261fa14
	if (ctx.cr6.lt) goto loc_8261FA14;
loc_8261FA44:
	// cmpw cr6,r9,r19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r19.s32, ctx.xer);
	// bge cr6,0x8261fa6c
	if (!ctx.cr6.lt) goto loc_8261FA6C;
	// subf r10,r9,r19
	ctx.r10.u64 = r19.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8261FA5C:
	// lfsx f0,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8261fa5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261FA5C;
loc_8261FA6C:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// subf r28,r23,r28
	r28.u64 = r28.u64 - r23.u64;
	// subf r29,r21,r29
	r29.u64 = r29.u64 - r21.u64;
	// subf r26,r24,r26
	r26.u64 = r26.u64 - r24.u64;
	// subf r27,r22,r27
	r27.u64 = r27.u64 - r22.u64;
	// bge 0x8261f8ec
	if (!ctx.cr0.lt) goto loc_8261F8EC;
loc_8261FA84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cf0
	ctx.lr = 0x8261FA94;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_826537E0) {
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
	ctx.lr = 0x826537E8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r27
	r22.u64 = r27.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
	// addi r30,r3,380
	r30.s64 = ctx.r3.s64 + 380;
loc_82653814:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265398c
	if (ctx.cr0.eq) goto loc_8265398C;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82653944
	if (ctx.cr6.eq) goto loc_82653944;
	// stwu r29,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, r29.u32);
	r26.u32 = ea;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r11,396(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265388c
	if (ctx.cr0.eq) goto loc_8265388C;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// beq cr6,0x8265388c
	if (ctx.cr6.eq) goto loc_8265388C;
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8265d9d8
	ctx.lr = 0x8265388C;
	sub_8265D9D8(ctx, base);
loc_8265388C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826538a4
	if (!ctx.cr6.eq) goto loc_826538A4;
	// bl 0x8265f6a8
	ctx.lr = 0x826538A0;
	sub_8265F6A8(ctx, base);
	// stw r27,396(r31)
	REX_STORE_U32(r31.u32 + 396, r27.u32);
loc_826538A4:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8265399c
	if (ctx.cr6.eq) goto loc_8265399C;
	// lwz r10,428(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 428);
	// addi r11,r31,424
	ctx.r11.s64 = r31.s64 + 424;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826538d4
	if (ctx.cr6.eq) goto loc_826538D4;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826538D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826538D4:
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// stb r27,736(r11)
	REX_STORE_U8(ctx.r11.u32 + 736, r27.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826538fc
	if (ctx.cr0.eq) goto loc_826538FC;
	// lbz r11,171(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 171);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,171(r31)
	REX_STORE_U8(r31.u32 + 171, ctx.r11.u8);
	// b 0x82653908
	goto loc_82653908;
loc_826538FC:
	// lbz r11,170(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 170);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,170(r31)
	REX_STORE_U8(r31.u32 + 170, ctx.r11.u8);
loc_82653908:
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8265ddd0
	ctx.lr = 0x82653914;
	sub_8265DDD0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826522e8
	ctx.lr = 0x82653924;
	sub_826522E8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8265ecf8
	ctx.lr = 0x8265392C;
	sub_8265ECF8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r27,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, r27.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8265f6a8
	ctx.lr = 0x8265393C;
	sub_8265F6A8(ctx, base);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// b 0x8265399c
	goto loc_8265399C;
loc_82653944:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8265399c
	if (ctx.cr6.eq) goto loc_8265399C;
	// add r28,r29,r31
	r28.u64 = r29.u64 + r31.u64;
	// lbz r11,736(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 736);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265399c
	if (ctx.cr0.eq) goto loc_8265399C;
	// lwz r10,428(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 428);
	// addi r11,r31,424
	ctx.r11.s64 = r31.s64 + 424;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82653984
	if (ctx.cr6.eq) goto loc_82653984;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82653984:
	// stb r27,736(r28)
	REX_STORE_U8(r28.u32 + 736, r27.u8);
	// b 0x8265399c
	goto loc_8265399C;
loc_8265398C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265399c
	if (ctx.cr6.eq) goto loc_8265399C;
	// li r22,1
	r22.s64 = 1;
loc_8265399C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x82653814
	if (ctx.cr6.lt) goto loc_82653814;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82653a00
	if (ctx.cr6.eq) goto loc_82653A00;
	// lbz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 740);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653a00
	if (ctx.cr0.eq) goto loc_82653A00;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x826539ec
	if (ctx.cr6.eq) goto loc_826539EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8264de98
	ctx.lr = 0x826539DC;
	sub_8264DE98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826539ec
	if (ctx.cr0.eq) goto loc_826539EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x826539EC;
	sub_823EDE70(ctx, base);
loc_826539EC:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x82653a00
	if (!ctx.cr6.eq) goto loc_82653A00;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
loc_82653A00:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826607F8) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82660810:
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
	// bne 0x82660810
	if (!ctx.cr0.eq) goto loc_82660810;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266084c
	if (!ctx.cr6.eq) goto loc_8266084C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82660690
	ctx.lr = 0x82660840;
	sub_82660690(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d850
	ctx.lr = 0x8266084C;
	sub_8265D850(ctx, base);
loc_8266084C:
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

DEFINE_REX_FUNC(sub_826632D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826632E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82663318
	if (!ctx.cr6.eq) goto loc_82663318;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8266342c
	if (ctx.cr6.lt) goto loc_8266342C;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r11,22084(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22084);
	// b 0x82663418
	goto loc_82663418;
loc_82663318:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82663360
	if (!ctx.cr6.eq) goto loc_82663360;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x82663350
	if (ctx.cr6.lt) goto loc_82663350;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r11,-6156
	ctx.r4.s64 = ctx.r11.s64 + -6156;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82663348;
	sub_826A1E70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82663358
	goto loc_82663358;
loc_82663350:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4097
	ctx.r3.u64 = ctx.r3.u64 | 4097;
loc_82663358:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82663438
	goto loc_82663438;
loc_82663360:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82663388
	if (!ctx.cr6.eq) goto loc_82663388;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8266342c
	if (ctx.cr6.lt) goto loc_8266342C;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r11,22088(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22088);
	// b 0x82663420
	goto loc_82663420;
loc_82663388:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82663480
	if (ctx.cr6.eq) goto loc_82663480;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82663480
	if (ctx.cr6.eq) goto loc_82663480;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826633f4
	if (!ctx.cr6.eq) goto loc_826633F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x826633e4
	if (ctx.cr6.lt) goto loc_826633E4;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r11,-6132(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -6132);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r11,8,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// b 0x826633ec
	goto loc_826633EC;
loc_826633E4:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4097
	ctx.r3.u64 = ctx.r3.u64 | 4097;
loc_826633EC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82663438
	goto loc_82663438;
loc_826633F4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82663440
	if (!ctx.cr6.eq) goto loc_82663440;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8266342c
	if (ctx.cr6.lt) goto loc_8266342C;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,-6128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6128);
loc_82663418:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82663420:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82663434
	goto loc_82663434;
loc_8266342C:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4097
	ctx.r3.u64 = ctx.r3.u64 | 4097;
loc_82663434:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82663438:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82663488
	goto loc_82663488;
loc_82663440:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82675c50
	ctx.lr = 0x82663458;
	sub_82675C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82663488
	if (ctx.cr0.lt) goto loc_82663488;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// beq cr6,0x82663470
	if (ctx.cr6.eq) goto loc_82663470;
	// cmpwi cr6,r31,17
	ctx.cr6.compare<int32_t>(r31.s32, 17, ctx.xer);
	// bne cr6,0x82663488
	if (!ctx.cr6.eq) goto loc_82663488;
loc_82663470:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82663488
	goto loc_82663488;
loc_82663480:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
loc_82663488:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82670320) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82793a64
	__imp__ExFreePool(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826704E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826704F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82670574
	if (ctx.cr6.eq) goto loc_82670574;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82670554
	if (!ctx.cr6.gt) goto loc_82670554;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8267051C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r30,r10
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82670538;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r28,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r28.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267051c
	if (ctx.cr6.lt) goto loc_8267051C;
loc_82670554:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267056C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_82670574:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826720E8) {
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
	ctx.lr = 0x826720F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// li r3,267
	ctx.r3.s64 = 267;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8265d838
	ctx.lr = 0x82672114;
	sub_8265D838(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82672134
	if (ctx.cr0.eq) goto loc_82672134;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82671e88
	ctx.lr = 0x82672134;
	sub_82671E88(ctx, base);
loc_82672134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82672E90) {
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
	ctx.lr = 0x82672E98;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r24,r3,28
	r24.s64 = ctx.r3.s64 + 28;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// beq cr6,0x82672fb8
	if (ctx.cr6.eq) goto loc_82672FB8;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82672fb8
	if (ctx.cr0.eq) goto loc_82672FB8;
	// lis r11,4626
	ctx.r11.s64 = 303169536;
	// lis r10,13364
	ctx.r10.s64 = 875823104;
	// ori r25,r11,4626
	r25.u64 = ctx.r11.u64 | 4626;
	// ori r28,r10,13364
	r28.u64 = ctx.r10.u64 | 13364;
loc_82672ECC:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r31,r26,-4
	r31.s64 = r26.s64 + -4;
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 32);
	// subf r9,r10,r24
	ctx.r9.u64 = r24.u64 - ctx.r10.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r9,r10
	r26.u64 = ctx.r9.u64 & ctx.r10.u64;
	// beq 0x82673088
	if (ctx.cr0.eq) goto loc_82673088;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r27,r31,116
	r27.s64 = r31.s64 + 116;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r25.s32, ctx.xer);
	// bne cr6,0x82673088
	if (!ctx.cr6.eq) goto loc_82673088;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82672fb8
	if (!ctx.cr6.eq) goto loc_82672FB8;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82672f94
	if (ctx.cr6.eq) goto loc_82672F94;
	// lbz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 60);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82672fb8
	if (!ctx.cr6.eq) goto loc_82672FB8;
	// lwz r11,61(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 61);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82672fb8
	if (!ctx.cr6.eq) goto loc_82672FB8;
loc_82672F34:
	// stw r28,108(r31)
	REX_STORE_U32(r31.u32 + 108, r28.u32);
loc_82672F38:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bne 0x82672f50
	if (!ctx.cr0.eq) goto loc_82672F50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_82672F50:
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
	// bne 0x82672f50
	if (!ctx.cr0.eq) goto loc_82672F50;
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bne cr6,0x82673068
	if (!ctx.cr6.eq) goto loc_82673068;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8267306c
	goto loc_8267306C;
loc_82672F94:
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82672f34
	if (!ctx.cr6.eq) goto loc_82672F34;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82672fc8
	if (!ctx.cr6.eq) goto loc_82672FC8;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// beq cr6,0x82672f38
	if (ctx.cr6.eq) goto loc_82672F38;
loc_82672FB8:
	// li r30,0
	r30.s64 = 0;
loc_82672FBC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82672FC8:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,29
	ctx.r9.s64 = ctx.r11.s64 + 29;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82673008
	if (!ctx.cr6.gt) goto loc_82673008;
	// addi r9,r27,8
	ctx.r9.s64 = r27.s64 + 8;
loc_82672FE4:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r25.s32, ctx.xer);
	// beq cr6,0x82673000
	if (ctx.cr6.eq) goto loc_82673000;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82672fe4
	if (ctx.cr6.lt) goto loc_82672FE4;
loc_82673000:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82672f38
	if (ctx.cr6.lt) goto loc_82672F38;
loc_82673008:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r28,108(r31)
	REX_STORE_U32(r31.u32 + 108, r28.u32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_82673018:
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
	// bne 0x82673018
	if (!ctx.cr0.eq) goto loc_82673018;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r5,r8,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82672f38
	if (ctx.cr0.eq) goto loc_82672F38;
loc_82673058:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672c40
	ctx.lr = 0x82673064;
	sub_82672C40(ctx, base);
	// b 0x82672fbc
	goto loc_82672FBC;
loc_82673068:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_8267306C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82673058
	if (!ctx.cr0.eq) goto loc_82673058;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672c40
	ctx.lr = 0x82673088;
	sub_82672C40(ctx, base);
loc_82673088:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82672ecc
	if (!ctx.cr6.eq) goto loc_82672ECC;
	// b 0x82672fb8
	goto loc_82672FB8;
}

DEFINE_REX_FUNC(sub_826800E8) {
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
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,22236
	r31.s64 = ctx.r11.s64 + 22236;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x827938a4
	ctx.lr = 0x82680110;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r5,132
	ctx.r5.s64 = 132;
	// addi r4,r11,22104
	ctx.r4.s64 = ctx.r11.s64 + 22104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82680124;
	sub_826A1E70(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x827938b4
	ctx.lr = 0x8268012C;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_82681598) {
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
	// lbz r10,18(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 18);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r10,128
	ctx.r11.u64 = ctx.r10.u64 | 128;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,18(r4)
	REX_STORE_U8(ctx.r4.u32 + 18, ctx.r11.u8);
	// beq 0x826815dc
	if (ctx.cr0.eq) goto loc_826815DC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82679600
	ctx.lr = 0x826815DC;
	sub_82679600(ctx, base);
loc_826815DC:
	// lhz r11,830(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 830);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,830(r31)
	REX_STORE_U16(r31.u32 + 830, ctx.r11.u16);
	// bne 0x82681600
	if (!ctx.cr0.eq) goto loc_82681600;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8267bec0
	ctx.lr = 0x82681600;
	sub_8267BEC0(ctx, base);
loc_82681600:
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

DEFINE_REX_FUNC(sub_82683300) {
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
	ctx.lr = 0x82683308;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,60(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r28,r3,60
	r28.s64 = ctx.r3.s64 + 60;
	// li r25,24
	r25.s64 = 24;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826833cc
	if (ctx.cr6.eq) goto loc_826833CC;
	// lbz r11,21(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 21);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// lbz r10,18(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 18);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// subf r30,r11,r31
	r30.u64 = r31.u64 - ctx.r11.u64;
	// beq 0x82683388
	if (ctx.cr0.eq) goto loc_82683388;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r6,r11,5,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// bl 0x82679468
	ctx.lr = 0x82683368;
	sub_82679468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268337c
	if (!ctx.cr0.eq) goto loc_8268337C;
loc_82683370:
	// lwz r11,104(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 104);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// b 0x826834d4
	goto loc_826834D4;
loc_8268337C:
	// lbz r11,14(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 14);
	// andi. r11,r11,243
	ctx.r11.u64 = ctx.r11.u64 & 243;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,14(r29)
	REX_STORE_U8(r29.u32 + 14, ctx.r11.u8);
loc_82683388:
	// lbz r11,15(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 15);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826833ac
	if (!ctx.cr6.eq) goto loc_826833AC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lhz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 1);
	// lhz r10,682(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 682);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826834d8
	if (!ctx.cr6.eq) goto loc_826834D8;
loc_826833AC:
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// ld r10,816(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 816);
	// stw r28,0(r24)
	REX_STORE_U32(r24.u32 + 0, r28.u32);
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// rldicr r11,r10,5,58
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 5) & 0xFFFFFFFFFFFFFFE0;
	// divw r10,r9,r25
	ctx.r10.u64 = uint32_t((r25.s32 && !(ctx.r9.s32 == INT32_MIN && r25.s32 == -1)) ? ctx.r9.s32 / r25.s32 : 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_826833CC:
	// lwz r30,48(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 48);
	// addi r28,r27,48
	r28.s64 = r27.s64 + 48;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826834b0
	if (ctx.cr6.eq) goto loc_826834B0;
	// lbz r10,18(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 18);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r11,80(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 80);
	// beq 0x826833f8
	if (ctx.cr0.eq) goto loc_826833F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_826833F8:
	// lhz r9,10(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 10);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826834b0
	if (!ctx.cr6.eq) goto loc_826834B0;
	// lbz r11,21(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 21);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// subf r31,r11,r30
	r31.u64 = r30.u64 - ctx.r11.u64;
	// beq 0x82683450
	if (ctx.cr0.eq) goto loc_82683450;
	// lwz r11,104(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 12);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r6,r11,5,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// bl 0x82679468
	ctx.lr = 0x8268343C;
	sub_82679468(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82683370
	if (ctx.cr0.eq) goto loc_82683370;
	// lbz r11,14(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 14);
	// andi. r11,r11,243
	ctx.r11.u64 = ctx.r11.u64 & 243;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,14(r29)
	REX_STORE_U8(r29.u32 + 14, ctx.r11.u8);
loc_82683450:
	// subf r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	// ld r10,816(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 816);
	// cmpldi cr6,r26,0
	ctx.cr6.compare<uint64_t>(r26.u64, 0, ctx.xer);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// rldicr r10,r10,5,58
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 5) & 0xFFFFFFFFFFFFFFE0;
	// divw r11,r11,r25
	ctx.r11.u64 = uint32_t((r25.s32 && !(ctx.r11.s32 == INT32_MIN && r25.s32 == -1)) ? ctx.r11.s32 / r25.s32 : 0);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82683488
	if (ctx.cr6.eq) goto loc_82683488;
	// li r11,1
	ctx.r11.s64 = 1;
	// subf r10,r26,r31
	ctx.r10.u64 = r31.u64 - r26.u64;
	// rldicr r11,r11,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x826834b0
	if (ctx.cr6.lt) goto loc_826834B0;
loc_82683488:
	// lwz r11,104(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 104);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826834a8
	if (ctx.cr0.eq) goto loc_826834A8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82683090
	ctx.lr = 0x826834A0;
	sub_82683090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826834b0
	if (!ctx.cr0.eq) goto loc_826834B0;
loc_826834A8:
	// mr r26,r31
	r26.u64 = r31.u64;
	// stw r28,0(r24)
	REX_STORE_U32(r24.u32 + 0, r28.u32);
loc_826834B0:
	// lwz r11,104(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 104);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826834d8
	if (ctx.cr0.eq) goto loc_826834D8;
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r11,672(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 672);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,672(r10)
	REX_STORE_U32(ctx.r10.u32 + 672, ctx.r11.u32);
	// lwz r11,104(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 104);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
loc_826834D4:
	// stw r11,104(r27)
	REX_STORE_U32(r27.u32 + 104, ctx.r11.u32);
loc_826834D8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82692788) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,-5960(r10)
	REX_STORE_U32(ctx.r10.u32 + -5960, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82692BB8) {
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
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82692c2c
	if (ctx.cr6.eq) goto loc_82692C2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82697878
	ctx.lr = 0x82692BE0;
	sub_82697878(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82695158
	ctx.lr = 0x82692BE8;
	sub_82695158(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826948e0
	ctx.lr = 0x82692BF0;
	sub_826948E0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82695158
	ctx.lr = 0x82692BF8;
	sub_82695158(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lis r30,-32119
	r30.s64 = -2104950784;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82692c1c
	if (ctx.cr6.eq) goto loc_82692C1C;
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82692C14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
loc_82692C1C:
	// lwz r11,-5956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -5956);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82692C2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82692C2C:
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

DEFINE_REX_FUNC(sub_826965F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82696600;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f8,3720(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3720);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f1,f8
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fadds f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82696648
	if (!ctx.cr6.lt) goto loc_82696648;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82696630:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82696648
	if (!ctx.cr6.lt) goto loc_82696648;
	// lfsu f13,4(r7)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82696630
	if (ctx.cr6.lt) goto loc_82696630;
loc_82696648:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f9,4112(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4112);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x82696774
	if (!ctx.cr6.lt) goto loc_82696774;
	// subf r30,r9,r8
	r30.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f6,3784(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3784);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f7.f64 = double(temp.f32);
loc_82696674:
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82696774
	if (!ctx.cr6.lt) goto loc_82696774;
	// fmr f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f7.f64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x826966ec
	if (!ctx.cr6.lt) goto loc_826966EC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lfsx f12,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x826966ec
	if (!ctx.cr6.lt) goto loc_826966EC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subf r31,r4,r5
	r31.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_826966A4:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x826966d4
	if (!ctx.cr6.lt) goto loc_826966D4;
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x826966c0
	if (!ctx.cr6.lt) goto loc_826966C0;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826966C0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f12,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// blt cr6,0x826966a4
	if (ctx.cr6.lt) goto loc_826966A4;
loc_826966D4:
	// fcmpu cr6,f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// ble cr6,0x826966ec
	if (!ctx.cr6.gt) goto loc_826966EC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r30,r7
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + ctx.r7.u32, temp.u32);
	// lfsx f13,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82696724
	goto loc_82696724;
loc_826966EC:
	// fadds f13,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fmadds f13,f13,f8,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f8.f64)));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f13.u64);
	// lwz r9,-44(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r8.u64);
	// lfd f13,-40(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r29
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfsx f12,r30,r7
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + ctx.r7.u32, temp.u32);
loc_82696724:
	// fadds f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x8269673c
	if (!ctx.cr6.gt) goto loc_8269673C;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
loc_8269673C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82696764
	goto loc_82696764;
loc_82696754:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8269676c
	if (!ctx.cr6.lt) goto loc_8269676C;
	// lfsu f13,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82696764:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82696754
	if (ctx.cr6.lt) goto loc_82696754;
loc_8269676C:
	// fcmpu cr6,f11,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f5.f64);
	// blt cr6,0x82696674
	if (ctx.cr6.lt) goto loc_82696674;
loc_82696774:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8269F5F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,32752
	ctx.r10.s64 = 2146435072;
	// stfd f2,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f2.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stfd f1,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lis r9,-16
	ctx.r9.s64 = -1048576;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8269f678
	if (!ctx.cr6.eq) goto loc_8269F678;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8269f6b4
	if (!ctx.cr6.eq) goto loc_8269F6B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,3728(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8269f65c
	if (!ctx.cr6.gt) goto loc_8269F65C;
loc_8269F650:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lfd f0,26768(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26768);
	// b 0x8269f754
	goto loc_8269F754;
loc_8269F65C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8269f670
	if (!ctx.cr6.lt) goto loc_8269F670;
loc_8269F664:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// b 0x8269f754
	goto loc_8269F754;
loc_8269F670:
	// stfd f13,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f13.u64);
	// b 0x8269f758
	goto loc_8269F758;
loc_8269F678:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8269f6b4
	if (!ctx.cr6.eq) goto loc_8269F6B4;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8269f6b4
	if (!ctx.cr6.eq) goto loc_8269F6B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8269f664
	if (ctx.cr6.gt) goto loc_8269F664;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8269f650
	if (ctx.cr6.lt) goto loc_8269F650;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r30,1
	r30.s64 = 1;
	// lfd f0,26776(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26776);
	// b 0x8269f754
	goto loc_8269F754;
loc_8269F6B4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8269f6ec
	if (!ctx.cr6.eq) goto loc_8269F6EC;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8269f758
	if (!ctx.cr6.eq) goto loc_8269F758;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x8269f650
	if (ctx.cr6.gt) goto loc_8269F650;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,3728(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fsel f0,f31,f13,f0
	ctx.f0.f64 = f31.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// b 0x8269f754
	goto loc_8269F754;
loc_8269F6EC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8269f758
	if (!ctx.cr6.eq) goto loc_8269F758;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8269f758
	if (!ctx.cr6.eq) goto loc_8269F758;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269f580
	ctx.lr = 0x8269F708;
	sub_8269F580(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x8269f730
	if (!ctx.cr6.gt) goto loc_8269F730;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f0,26768(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26768);
	// bne cr6,0x8269f754
	if (!ctx.cr6.eq) goto loc_8269F754;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8269f754
	goto loc_8269F754;
loc_8269F730:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x8269f74c
	if (!ctx.cr6.lt) goto loc_8269F74C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8269f754
	if (!ctx.cr6.eq) goto loc_8269F754;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lfd f0,26800(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26800);
	// b 0x8269f754
	goto loc_8269F754;
loc_8269F74C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_8269F754:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f0.u64);
loc_8269F758:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(__restvmx_26) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_86) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B0A08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r28,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r11,31540
	ctx.r30.s64 = ctx.r11.s64 + 31540;
	// b 0x826b0a50
	goto loc_826B0A50;
loc_826B0A50:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8269e220
	ctx.lr = 0x826B0A64;
	sub_8269E220(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r30,r10,31540
	ctx.r30.s64 = ctx.r10.s64 + 31540;
	// addi r10,r11,31544
	ctx.r10.s64 = ctx.r11.s64 + 31544;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B4AE8) {
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
	ctx.lr = 0x826B4AF0;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r3,296
	ctx.r3.s64 = 296;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// bl 0x826ba680
	ctx.lr = 0x826B4B1C;
	sub_826BA680(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b4b30
	if (ctx.cr6.eq) goto loc_826B4B30;
	// bl 0x826ba690
	ctx.lr = 0x826B4B28;
	sub_826BA690(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// b 0x826b4b34
	goto loc_826B4B34;
loc_826B4B30:
	// mr r18,r31
	r18.u64 = r31.u64;
loc_826B4B34:
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x826b9968
	ctx.lr = 0x826B4B3C;
	sub_826B9968(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b4b50
	if (ctx.cr6.eq) goto loc_826B4B50;
	// bl 0x826ba098
	ctx.lr = 0x826B4B48;
	sub_826BA098(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x826b4b54
	goto loc_826B4B54;
loc_826B4B50:
	// mr r22,r31
	r22.u64 = r31.u64;
loc_826B4B54:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r27,r31
	r27.u64 = r31.u64;
	// ori r29,r11,14
	r29.u64 = ctx.r11.u64 | 14;
	// mr r26,r31
	r26.u64 = r31.u64;
	// mr r21,r31
	r21.u64 = r31.u64;
	// mr r19,r31
	r19.u64 = r31.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x826b4b84
	if (ctx.cr6.eq) goto loc_826B4B84;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// bne cr6,0x826b4b88
	if (!ctx.cr6.eq) goto loc_826B4B88;
loc_826B4B84:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_826B4B88:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826b4bec
	if (ctx.cr6.eq) goto loc_826B4BEC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4bec
	if (ctx.cr6.lt) goto loc_826B4BEC;
	// li r3,680
	ctx.r3.s64 = 680;
	// bl 0x826b8718
	ctx.lr = 0x826B4BA0;
	sub_826B8718(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b4bb4
	if (ctx.cr6.eq) goto loc_826B4BB4;
	// bl 0x826b9868
	ctx.lr = 0x826B4BAC;
	sub_826B9868(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x826b4bb8
	goto loc_826B4BB8;
loc_826B4BB4:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_826B4BB8:
	// li r3,664
	ctx.r3.s64 = 664;
	// bl 0x826b64a0
	ctx.lr = 0x826B4BC0;
	sub_826B64A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b4bd4
	if (ctx.cr6.eq) goto loc_826B4BD4;
	// bl 0x826b6b40
	ctx.lr = 0x826B4BCC;
	sub_826B6B40(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x826b4bd8
	goto loc_826B4BD8;
loc_826B4BD4:
	// mr r21,r31
	r21.u64 = r31.u64;
loc_826B4BD8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826b4be8
	if (ctx.cr6.eq) goto loc_826B4BE8;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x826b4bec
	if (!ctx.cr6.eq) goto loc_826B4BEC;
loc_826B4BE8:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_826B4BEC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826b4c50
	if (ctx.cr6.eq) goto loc_826B4C50;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4c50
	if (ctx.cr6.lt) goto loc_826B4C50;
	// li r3,552
	ctx.r3.s64 = 552;
	// bl 0x826b7960
	ctx.lr = 0x826B4C04;
	sub_826B7960(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b4c18
	if (ctx.cr6.eq) goto loc_826B4C18;
	// bl 0x826b8608
	ctx.lr = 0x826B4C10;
	sub_826B8608(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x826b4c1c
	goto loc_826B4C1C;
loc_826B4C18:
	// mr r26,r31
	r26.u64 = r31.u64;
loc_826B4C1C:
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x826b6f78
	ctx.lr = 0x826B4C24;
	sub_826B6F78(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b4c38
	if (ctx.cr6.eq) goto loc_826B4C38;
	// bl 0x826b70e8
	ctx.lr = 0x826B4C30;
	sub_826B70E8(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// b 0x826b4c3c
	goto loc_826B4C3C;
loc_826B4C38:
	// mr r19,r31
	r19.u64 = r31.u64;
loc_826B4C3C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826b4c4c
	if (ctx.cr6.eq) goto loc_826B4C4C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x826b4c50
	if (!ctx.cr6.eq) goto loc_826B4C50;
loc_826B4C4C:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_826B4C50:
	// li r29,8
	r29.s64 = 8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826b4cb0
	if (ctx.cr6.eq) goto loc_826B4CB0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4cb0
	if (ctx.cr6.lt) goto loc_826B4CB0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 24);
	// subf r9,r25,r23
	ctx.r9.u64 = r23.u64 - r25.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r31.u32);
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r5,44(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x826B4CAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B4CB0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826b4d0c
	if (ctx.cr6.eq) goto loc_826B4D0C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4d0c
	if (ctx.cr6.lt) goto loc_826B4D0C;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 28);
	// subf r9,r25,r23
	ctx.r9.u64 = r23.u64 - r25.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r31.u32);
	// stw r29,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r29.u32);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r7,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// lwz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r5,44(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x826B4D08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B4D0C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826b4d50
	if (ctx.cr6.eq) goto loc_826B4D50;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4d50
	if (ctx.cr6.lt) goto loc_826B4D50;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r9,3
	ctx.r9.s64 = 3;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x826b6bc0
	ctx.lr = 0x826B4D4C;
	sub_826B6BC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B4D50:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826b4d70
	if (ctx.cr6.eq) goto loc_826B4D70;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4e18
	if (ctx.cr6.lt) goto loc_826B4E18;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826b6180
	ctx.lr = 0x826B4D6C;
	sub_826B6180(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B4D70:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4e18
	if (ctx.cr6.lt) goto loc_826B4E18;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b4e18
	if (ctx.cr6.lt) goto loc_826B4E18;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r8,12(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 12);
	// rlwinm r7,r10,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// lwz r6,16(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r5,20(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 20);
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r31.u64);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r31.u32);
	// stw r20,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r20.u32);
	// stw r9,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r22,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r22.u32);
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r7,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// stw r6,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// stw r5,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r5.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4E14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B4E18:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826b4e44
	if (ctx.cr6.eq) goto loc_826B4E44;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4e44
	if (ctx.cr6.lt) goto loc_826B4E44;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B4E44:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826b4e70
	if (ctx.cr6.eq) goto loc_826B4E70;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4e70
	if (ctx.cr6.lt) goto loc_826B4E70;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B4E70:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826b4e9c
	if (ctx.cr6.eq) goto loc_826B4E9C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4e9c
	if (ctx.cr6.lt) goto loc_826B4E9C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4E98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B4E9C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x826b4ec8
	if (ctx.cr6.eq) goto loc_826B4EC8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4ef4
	if (ctx.cr6.lt) goto loc_826B4EF4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4EC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B4EC8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4ef4
	if (ctx.cr6.lt) goto loc_826B4EF4;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B4EF4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826b4f10
	if (ctx.cr6.eq) goto loc_826B4F10;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4F10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B4F10:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x826b4f2c
	if (ctx.cr6.eq) goto loc_826B4F2C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4F2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B4F2C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x826b4f48
	if (ctx.cr6.eq) goto loc_826B4F48;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4F48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B4F48:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x826b4f64
	if (ctx.cr6.eq) goto loc_826B4F64;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4F64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B4F64:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x826b4f80
	if (ctx.cr6.eq) goto loc_826B4F80;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B4F80:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x826b4f98
	if (ctx.cr6.lt) goto loc_826B4F98;
	// stw r18,0(r17)
	REX_STORE_U32(r17.u32 + 0, r18.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cdc
	return;
loc_826B4F98:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x826b4fb4
	if (ctx.cr6.eq) goto loc_826B4FB4;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B4FB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B4FB4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_826DD048) {
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
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r30,0
	r30.s64 = 0;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dd12c
	if (ctx.cr6.eq) goto loc_826DD12C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826dd12c
	if (ctx.cr6.eq) goto loc_826DD12C;
loc_826DD08C:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826DD0A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dd12c
	if (ctx.cr6.lt) goto loc_826DD12C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826dd0d8
	if (ctx.cr6.eq) goto loc_826DD0D8;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_826DD0D8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r8,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r8.u32);
	// bne 0x826dd100
	if (!ctx.cr0.eq) goto loc_826DD100;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
loc_826DD100:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x826c68d8
	ctx.lr = 0x826DD110;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dd12c
	if (ctx.cr6.lt) goto loc_826DD12C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x826dd08c
	if (!ctx.cr6.eq) goto loc_826DD08C;
loc_826DD12C:
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

DEFINE_REX_FUNC(sub_826DFFE8) {
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
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826df8d0
	ctx.lr = 0x826E0008;
	sub_826DF8D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0054
	if (ctx.cr6.lt) goto loc_826E0054;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dfb98
	ctx.lr = 0x826E0018;
	sub_826DFB98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e0054
	if (ctx.cr6.lt) goto loc_826E0054;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_826E0054:
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

DEFINE_REX_FUNC(sub_826E2368) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lfsx f0,r9,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,3716(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x826e23d4
	if (!ctx.cr6.lt) goto loc_826E23D4;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_826E23D4:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E7E78) {
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
	ctx.lr = 0x826E7E80;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826e7ec0
	if (ctx.cr6.eq) goto loc_826E7EC0;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x826e7ec0
	if (ctx.cr6.gt) goto loc_826E7EC0;
	// lis r26,-32764
	r26.s64 = -2147221504;
	// ori r26,r26,2
	r26.u64 = r26.u64 | 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_826E7EC0:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826e7ed0
	if (!ctx.cr6.eq) goto loc_826E7ED0;
	// stw r25,380(r31)
	REX_STORE_U32(r31.u32 + 380, r25.u32);
loc_826E7ED0:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826e8454
	if (ctx.cr6.eq) goto loc_826E8454;
	// li r24,1
	r24.s64 = 1;
	// li r23,11
	r23.s64 = 11;
	// li r17,3
	r17.s64 = 3;
	// li r21,4
	r21.s64 = 4;
	// li r18,5
	r18.s64 = 5;
	// li r19,6
	r19.s64 = 6;
	// li r20,7
	r20.s64 = 7;
	// li r22,9
	r22.s64 = 9;
loc_826E7EFC:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x826e8448
	if (ctx.cr6.gt) goto loc_826E8448;
	// lis r12,-32146
	ctx.r12.s64 = -2106720256;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,32548
	ctx.r12.s64 = ctx.r12.s64 + 32548;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826E8110;
	case 1:
		goto loc_826E7F50;
	case 2:
		goto loc_826E8164;
	case 3:
		goto loc_826E8190;
	case 4:
		goto loc_826E81A8;
	case 5:
		goto loc_826E81E0;
	case 6:
		goto loc_826E822C;
	case 7:
		goto loc_826E8268;
	case 8:
		goto loc_826E82B8;
	case 9:
		goto loc_826E82EC;
	case 10:
		goto loc_826E833C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_826E7F50:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826e80f0
	if (ctx.cr6.eq) goto loc_826E80F0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826e80f0
	if (ctx.cr6.gt) goto loc_826E80F0;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x826e7f8c
	if (!ctx.cr6.gt) goto loc_826E7F8C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_826E7F7C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826e7f7c
	if (ctx.cr6.gt) goto loc_826E7F7C;
loc_826E7F8C:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x826e7fa8
	if (!ctx.cr6.gt) goto loc_826E7FA8;
loc_826E7F98:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826e7f98
	if (ctx.cr6.gt) goto loc_826E7F98;
loc_826E7FA8:
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// addi r29,r27,224
	r29.s64 = r27.s64 + 224;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826f1f78
	ctx.lr = 0x826E7FBC;
	sub_826F1F78(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826E7FD8;
	sub_826E58B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// slw r8,r24,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// divw r6,r10,r8
	ctx.r6.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// andc r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x826e58b8
	ctx.lr = 0x826E801C;
	sub_826E58B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// extsh r10,r30
	ctx.r10.s64 = r30.s16;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r9,236(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 236);
	// slw r6,r24,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// divw r4,r11,r6
	ctx.r4.u64 = uint32_t((ctx.r6.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r11.s32 / ctx.r6.s32 : 0);
	// andc r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826e8488
	if (ctx.cr6.lt) goto loc_826E8488;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x826e8488
	if (ctx.cr6.gt) goto loc_826E8488;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826e8488
	if (ctx.cr6.lt) goto loc_826E8488;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x826e8488
	if (ctx.cr6.gt) goto loc_826E8488;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e80e8
	if (ctx.cr6.eq) goto loc_826E80E8;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_826E808C:
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mulli r11,r10,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r7,424(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// sth r30,-2(r6)
	REX_STORE_U16(ctx.r6.u32 + -2, r30.u16);
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// sth r25,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, r25.u16);
	// lwz r4,424(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// sth r8,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// lwz r9,424(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// sth r25,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, r25.u16);
	// lwz r6,424(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r4.u16);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e808c
	if (ctx.cr6.lt) goto loc_826E808C;
loc_826E80E8:
	// stw r23,52(r27)
	REX_STORE_U32(r27.u32 + 52, r23.u32);
	// b 0x826e8448
	goto loc_826E8448;
loc_826E80F0:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826e80e8
	if (!ctx.cr6.gt) goto loc_826E80E8;
	// stw r24,52(r27)
	REX_STORE_U32(r27.u32 + 52, r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e5bf0
	ctx.lr = 0x826E810C;
	sub_826E5BF0(ctx, base);
	// b 0x826e8448
	goto loc_826E8448;
loc_826E8110:
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826e8160
	if (ctx.cr6.eq) goto loc_826E8160;
	// addi r30,r31,608
	r30.s64 = r31.s64 + 608;
	// lwz r4,616(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 616);
	// addi r29,r27,224
	r29.s64 = r27.s64 + 224;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826E8134;
	sub_826E58B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// lwz r11,704(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826e8160
	if (ctx.cr6.eq) goto loc_826E8160;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,616(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 616);
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x826e5798
	ctx.lr = 0x826E8160;
	sub_826E5798(ctx, base);
loc_826E8160:
	// stw r17,52(r27)
	REX_STORE_U32(r27.u32 + 52, r17.u32);
loc_826E8164:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826e8188
	if (!ctx.cr6.gt) goto loc_826E8188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e5c48
	ctx.lr = 0x826E817C;
	sub_826E5C48(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
loc_826E8188:
	// stw r25,436(r27)
	REX_STORE_U32(r27.u32 + 436, r25.u32);
	// stw r21,52(r27)
	REX_STORE_U32(r27.u32 + 52, r21.u32);
loc_826E8190:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826f09d0
	ctx.lr = 0x826E8198;
	sub_826F09D0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// stw r18,52(r27)
	REX_STORE_U32(r27.u32 + 52, r18.u32);
loc_826E81A8:
	// lwz r11,624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826e81d8
	if (ctx.cr6.eq) goto loc_826E81D8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826E81C4;
	sub_826E58B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r11,201(r31)
	REX_STORE_U8(r31.u32 + 201, ctx.r11.u8);
loc_826E81D8:
	// stw r19,52(r27)
	REX_STORE_U32(r27.u32 + 52, r19.u32);
	// b 0x826e8448
	goto loc_826E8448;
loc_826E81E0:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826e821c
	if (!ctx.cr6.gt) goto loc_826E821C;
	// stw r25,372(r31)
	REX_STORE_U32(r31.u32 + 372, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826E8204;
	sub_826E58B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826e8224
	if (!ctx.cr6.eq) goto loc_826E8224;
loc_826E821C:
	// stw r23,52(r27)
	REX_STORE_U32(r27.u32 + 52, r23.u32);
	// b 0x826e8448
	goto loc_826E8448;
loc_826E8224:
	// stw r20,52(r27)
	REX_STORE_U32(r27.u32 + 52, r20.u32);
	// b 0x826e8448
	goto loc_826E8448;
loc_826E822C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826E823C;
	sub_826E58B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,372(r31)
	REX_STORE_U32(r31.u32 + 372, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,52(r27)
	REX_STORE_U32(r27.u32 + 52, ctx.r8.u32);
	// b 0x826e8448
	goto loc_826E8448;
loc_826E8268:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x826e828c
	if (!ctx.cr6.gt) goto loc_826E828C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_826E827C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x826e827c
	if (ctx.cr6.gt) goto loc_826E827C;
loc_826E828C:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826E829C;
	sub_826E58B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r11.u32);
	// stw r22,52(r27)
	REX_STORE_U32(r27.u32 + 52, r22.u32);
	// b 0x826e8448
	goto loc_826E8448;
loc_826E82B8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826E82C8;
	sub_826E58B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// stw r9,52(r27)
	REX_STORE_U32(r27.u32 + 52, ctx.r9.u32);
	// b 0x826e8448
	goto loc_826E8448;
loc_826E82EC:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x826e8310
	if (!ctx.cr6.gt) goto loc_826E8310;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_826E8300:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x826e8300
	if (ctx.cr6.gt) goto loc_826E8300;
loc_826E8310:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,224
	ctx.r3.s64 = r27.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826E8320;
	sub_826E58B8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e8470
	if (ctx.cr6.lt) goto loc_826E8470;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r11.u32);
	// stw r23,52(r27)
	REX_STORE_U32(r27.u32 + 52, r23.u32);
	// b 0x826e8448
	goto loc_826E8448;
loc_826E833C:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826e8444
	if (!ctx.cr6.gt) goto loc_826E8444;
	// lwz r11,160(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826e8444
	if (ctx.cr6.eq) goto loc_826E8444;
	// lwz r11,164(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826e8444
	if (!ctx.cr6.eq) goto loc_826E8444;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82637ac0
	ctx.lr = 0x826E8368;
	sub_82637AC0(ctx, base);
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 184);
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpd cr6,r28,r11
	ctx.cr6.compare<int64_t>(r28.s64, ctx.r11.s64, ctx.xer);
	// bgt cr6,0x826e843c
	if (ctx.cr6.gt) goto loc_826E843C;
	// lwz r10,380(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826e847c
	if (ctx.cr6.eq) goto loc_826E847C;
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x826e847c
	if (ctx.cr6.eq) goto loc_826E847C;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826e83ac
	if (ctx.cr6.eq) goto loc_826E83AC;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// srw r30,r10,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x826e83c8
	goto loc_826E83C8;
loc_826E83AC:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826e83c4
	if (ctx.cr6.eq) goto loc_826E83C4;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// slw r30,r10,r11
	r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x826e83c8
	goto loc_826E83C8;
loc_826E83C4:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_826E83C8:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82635d20
	ctx.lr = 0x826E83D4;
	sub_82635D20(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826e83f8
	if (!ctx.cr6.gt) goto loc_826E83F8;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x826e83fc
	goto loc_826E83FC;
loc_826E83F8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826E83FC:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// blt cr6,0x826e8430
	if (ctx.cr6.lt) goto loc_826E8430;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bge cr6,0x826e8424
	if (!ctx.cr6.lt) goto loc_826E8424;
	// ld r10,184(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 184);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,184(r27)
	REX_STORE_U64(r27.u32 + 184, ctx.r8.u64);
	// b 0x826e8430
	goto loc_826E8430;
loc_826E8424:
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 184);
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - r28.u64;
	// std r10,184(r27)
	REX_STORE_U64(r27.u32 + 184, ctx.r10.u64);
loc_826E8430:
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 184);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x826e8440
	if (!ctx.cr6.lt) goto loc_826E8440;
loc_826E843C:
	// std r25,184(r27)
	REX_STORE_U64(r27.u32 + 184, r25.u64);
loc_826E8440:
	// stw r25,160(r27)
	REX_STORE_U32(r27.u32 + 160, r25.u32);
loc_826E8444:
	// stw r25,52(r27)
	REX_STORE_U32(r27.u32 + 52, r25.u32);
loc_826E8448:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826e7efc
	if (!ctx.cr6.eq) goto loc_826E7EFC;
loc_826E8454:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826e8470
	if (!ctx.cr6.eq) goto loc_826E8470;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r10,380(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 380);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r9.u32);
loc_826E8470:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
loc_826E847C:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// std r11,184(r27)
	REX_STORE_U64(r27.u32 + 184, ctx.r11.u64);
	// b 0x826e8440
	goto loc_826E8440;
loc_826E8488:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82722E60) {
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
	// bne cr6,0x82722e94
	if (!ctx.cr6.eq) goto loc_82722E94;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82722E94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82722ab8
	ctx.lr = 0x82722E9C;
	sub_82722AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x82722EA4;
	sub_8271B1A0(ctx, base);
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

DEFINE_REX_FUNC(sub_82724710) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82724718;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,304(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82724738
	if (ctx.cr6.eq) goto loc_82724738;
	// bl 0x8271b1a0
	ctx.lr = 0x82724734;
	sub_8271B1A0(ctx, base);
	// stw r30,304(r31)
	REX_STORE_U32(r31.u32 + 304, r30.u32);
loc_82724738:
	// lwz r3,308(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8272474c
	if (ctx.cr6.eq) goto loc_8272474C;
	// bl 0x8271b1a0
	ctx.lr = 0x82724748;
	sub_8271B1A0(ctx, base);
	// stw r30,308(r31)
	REX_STORE_U32(r31.u32 + 308, r30.u32);
loc_8272474C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x82723520
	ctx.lr = 0x8272475C;
	sub_82723520(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x82723520
	ctx.lr = 0x82724770;
	sub_82723520(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8271b190
	ctx.lr = 0x82724780;
	sub_8271B190(ctx, base);
	// stw r3,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82724794
	if (!ctx.cr6.eq) goto loc_82724794;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82724794:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271b190
	ctx.lr = 0x827247A0;
	sub_8271B190(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82728868) {
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
	// bl 0x826a1c80
	ctx.lr = 0x82728870;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c98
	ctx.lr = 0x82728878;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r3,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r3.u32);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f24,f2
	f24.f64 = ctx.f2.f64;
	// fmr f27,f3
	f27.f64 = ctx.f3.f64;
	// fmr f26,f4
	f26.f64 = ctx.f4.f64;
	// bne cr6,0x827288b0
	if (!ctx.cr6.eq) goto loc_827288B0;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ce4
	ctx.lr = 0x827288AC;
	// b 0x826a1cd0
	return;
loc_827288B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r25,20(r16)
	r25.u64 = REX_LOAD_U32(r16.u32 + 20);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r9,15360(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r18,15376(r16)
	r18.u64 = REX_LOAD_U32(r16.u32 + 15376);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r17,15380(r16)
	r17.u64 = REX_LOAD_U32(r16.u32 + 15380);
	// srawi r29,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	r29.s64 = r25.s32 >> 1;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// srawi r26,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r26.s64 = ctx.r9.s32 >> 1;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// srawi r23,r25,5
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1F) != 0);
	r23.s64 = r25.s32 >> 5;
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// srawi r21,r25,6
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x3F) != 0);
	r21.s64 = r25.s32 >> 6;
	// lfd f29,-3744(r7)
	f29.u64 = REX_LOAD_U64(ctx.r7.u32 + -3744);
	// stw r18,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r18.u32);
	// fcmpu cr6,f25,f29
	ctx.cr6.compare(f25.f64, f29.f64);
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r17.u32);
	// stvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// stw r23,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r23.u32);
	// stw r21,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r21.u32);
	// beq cr6,0x82729b70
	if (ctx.cr6.eq) goto loc_82729B70;
	// fcmpu cr6,f27,f29
	ctx.cr6.compare(f27.f64, f29.f64);
	// beq cr6,0x82729b70
	if (ctx.cr6.eq) goto loc_82729B70;
	// rotlwi r11,r25,0
	ctx.r11.u64 = __builtin_rotateleft32(r25.u32, 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f28,4296(r10)
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 4296);
	// fsub f11,f13,f24
	ctx.f11.f64 = ctx.f13.f64 - f24.f64;
	// fdiv f12,f28,f25
	ctx.f12.f64 = f28.f64 / f25.f64;
	// fdiv f30,f11,f25
	f30.f64 = ctx.f11.f64 / f25.f64;
	// fmul f0,f12,f24
	ctx.f0.f64 = ctx.f12.f64 * f24.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8272895c
	if (!ctx.cr6.gt) goto loc_8272895C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
loc_8272895C:
	// fsel f1,f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f29.f64;
	// bl 0x826a3cb0
	ctx.lr = 0x82728964;
	sub_826A3CB0(ctx, base);
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82728984
	if (!ctx.cr6.lt) goto loc_82728984;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82728984:
	// bl 0x826a2f00
	ctx.lr = 0x82728988;
	sub_826A2F00(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lfd f0,30712(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 30712);
	// fadd f0,f30,f0
	ctx.f0.f64 = f30.f64 + ctx.f0.f64;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x827289c0
	if (!ctx.cr6.lt) goto loc_827289C0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_827289C0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x826a2f00
	ctx.lr = 0x827289C8;
	sub_826A2F00(ctx, base);
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x827289ec
	if (ctx.cr6.lt) goto loc_827289EC;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
loc_827289EC:
	// bl 0x826a2f00
	ctx.lr = 0x827289F0;
	sub_826A2F00(ctx, base);
	// fsel f1,f1,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : f29.f64;
	// bl 0x826a3cb0
	ctx.lr = 0x827289F8;
	sub_826A3CB0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fsel f1,f31,f31,f29
	ctx.f1.f64 = f31.f64 >= 0.0 ? f31.f64 : f29.f64;
	// bl 0x826a3cb0
	ctx.lr = 0x82728A0C;
	sub_826A3CB0(ctx, base);
	// lwz r11,15356(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15356);
	// fctiwz f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fdiv f12,f28,f27
	ctx.f12.f64 = f28.f64 / f27.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fsub f8,f9,f26
	ctx.f8.f64 = ctx.f9.f64 - f26.f64;
	// lfd f13,3728(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// fmul f0,f12,f26
	ctx.f0.f64 = ctx.f12.f64 * f26.f64;
	// fdiv f7,f8,f27
	ctx.f7.f64 = ctx.f8.f64 / f27.f64;
	// fadd f31,f7,f13
	f31.f64 = ctx.f7.f64 + ctx.f13.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82728a5c
	if (!ctx.cr6.gt) goto loc_82728A5C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
loc_82728A5C:
	// fsel f1,f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f29.f64;
	// bl 0x826a3cb0
	ctx.lr = 0x82728A64;
	sub_826A3CB0(ctx, base);
	// lwz r11,15364(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15364);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82728a84
	if (!ctx.cr6.lt) goto loc_82728A84;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82728A84:
	// bl 0x826a2f00
	ctx.lr = 0x82728A88;
	sub_826A2F00(ctx, base);
	// lwz r11,15364(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15364);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.f0.u64);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r31,212(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82728ab4
	if (ctx.cr6.lt) goto loc_82728AB4;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_82728AB4:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x826a2f00
	ctx.lr = 0x82728ABC;
	sub_826A2F00(ctx, base);
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// fsel f1,f1,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : f29.f64;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// rlwinm r31,r11,0,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r15,r10,0,0,30
	r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// rlwinm r27,r28,0,0,30
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r15,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r15.u32);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r27,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r27.u32);
	// bl 0x826a3cb0
	ctx.lr = 0x82728AEC;
	sub_826A3CB0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r22,r9,0,0,30
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r22,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r22.u32);
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(r22.s32, 2, ctx.xer);
	// bge cr6,0x82728b10
	if (!ctx.cr6.lt) goto loc_82728B10;
	// li r22,2
	r22.s64 = 2;
	// stw r22,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r22.u32);
loc_82728B10:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r28,15384(r16)
	r28.u64 = REX_LOAD_U32(r16.u32 + 15384);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r5,15388(r16)
	ctx.r5.u64 = REX_LOAD_U32(r16.u32 + 15388);
	// srawi r8,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r8.s64 = r31.s32 >> 1;
	// lwz r6,15392(r16)
	ctx.r6.u64 = REX_LOAD_U32(r16.u32 + 15392);
	// srawi r7,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r7.s64 = r30.s32 >> 1;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f13,30704(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 30704);
	// srawi r11,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r11.s64 = r27.s32 >> 1;
	// fmul f11,f25,f13
	ctx.f11.f64 = f25.f64 * ctx.f13.f64;
	// lfd f0,30696(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 30696);
	// fmul f10,f26,f0
	ctx.f10.f64 = f26.f64 * ctx.f0.f64;
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// fmul f9,f24,f0
	ctx.f9.f64 = f24.f64 * ctx.f0.f64;
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// fmul f8,f27,f13
	ctx.f8.f64 = f27.f64 * ctx.f13.f64;
	// lfd f12,8312(r9)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 8312);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r3,128
	ctx.r3.s64 = 128;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// fctiwz f7,f11
	ctx.f7.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r24,84(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f10
	ctx.f6.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// fctiwz f5,f9
	ctx.f5.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// stfd f5,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f5.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// fctiwz f4,f8
	ctx.f4.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r7,r11,r15
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(r15.s32);
	// fmul f3,f11,f12
	ctx.f3.f64 = ctx.f11.f64 * ctx.f12.f64;
	// mullw r11,r24,r31
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(r31.s32);
	// fctiwz f2,f3
	ctx.f2.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f2.u64);
	// lwz r20,164(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r7,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r19,r11,r7
	r19.u64 = ctx.r11.u64 & ctx.r7.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r19.u32);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// ble cr6,0x82728c8c
	if (!ctx.cr6.gt) goto loc_82728C8C;
loc_82728BEC:
	// lwz r10,15360(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82728c14
	if (!ctx.cr6.gt) goto loc_82728C14;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
loc_82728C00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r4,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r10.u32 = ea;
	// lwz r8,15360(r16)
	ctx.r8.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82728c00
	if (ctx.cr6.lt) goto loc_82728C00;
loc_82728C14:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82728c38
	if (!ctx.cr6.gt) goto loc_82728C38;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_82728C28:
	// stbx r3,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82728c28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82728C28;
loc_82728C38:
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// add r8,r28,r11
	ctx.r8.u64 = r28.u64 + ctx.r11.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82728c70
	if (!ctx.cr6.gt) goto loc_82728C70;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82728C5C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82728c5c
	if (ctx.cr6.lt) goto loc_82728C5C;
loc_82728C70:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r28,r8,r11
	r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r15.s32, ctx.xer);
	// blt cr6,0x82728bec
	if (ctx.cr6.lt) goto loc_82728BEC;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_82728C8C:
	// lwz r10,20(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 20);
	// srawi r8,r19,11
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7FF) != 0);
	ctx.r8.s64 = r19.s32 >> 11;
	// lwz r9,15372(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 15372);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x82728cc4
	if (!ctx.cr6.gt) goto loc_82728CC4;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
loc_82728CB4:
	// dcbt r11,r9
	// dcbt r11,r10
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82728cb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82728CB4;
loc_82728CC4:
	// srawi r11,r19,12
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0xFFF) != 0);
	ctx.r11.s64 = r19.s32 >> 12;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// ble cr6,0x82728ce8
	if (!ctx.cr6.gt) goto loc_82728CE8;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82728CD8:
	// dcbt r11,r18
	// dcbt r11,r17
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82728cd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82728CD8;
loc_82728CE8:
	// addi r5,r22,-2
	ctx.r5.s64 = r22.s64 + -2;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r15.u32);
	// cmpw cr6,r15,r5
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82729834
	if (!ctx.cr6.lt) goto loc_82729834;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r14,16
	r14.s64 = 16;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r9,r11,13488
	ctx.r9.s64 = ctx.r11.s64 + 13488;
	// stw r6,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// lfs f0,2208(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2208);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_82728D30:
	// clrlwi r26,r19,21
	r26.u64 = r19.u32 & 0x7FF;
	// lwz r11,20(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 20);
	// srawi r9,r19,11
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7FF) != 0);
	ctx.r9.s64 = r19.s32 >> 11;
	// lwz r10,15372(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 15372);
	// extsw r8,r26
	ctx.r8.s64 = r26.s32;
	// lwz r31,124(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// std r8,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// lfd f13,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,196(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// ble cr6,0x82728d84
	if (!ctx.cr6.gt) goto loc_82728D84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82728D78:
	// dcbt r11,r30
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82728d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82728D78;
loc_82728D84:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82728db0
	if (!ctx.cr6.gt) goto loc_82728DB0;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82728dac
	if (ctx.cr6.eq) goto loc_82728DAC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82728DA4:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82728da4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82728DA4;
loc_82728DAC:
	// add r3,r28,r9
	ctx.r3.u64 = r28.u64 + ctx.r9.u64;
loc_82728DB0:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// mtctr r14
	ctx.ctr.u64 = r14.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_82728DC0:
	// stwu r26,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82728dc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82728DC0;
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// subfic r27,r26,2048
	ctx.xer.ca = r26.u32 <= 2048;
	r27.u64 = static_cast<uint64_t>(2048) - r26.u64;
	// stfs f13,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// srawi. r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r22,r9,r10
	r22.u64 = ctx.r10.u64 - ctx.r9.u64;
	// ble 0x82728f74
	if (!ctx.cr0.gt) goto loc_82728F74;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// lwz r21,88(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r28,r25,1
	r28.s64 = r25.s64 + 1;
	// lvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82728DF8:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r21,256
	ctx.r11.s64 = r21.s64 + 256;
	// addi r10,r21,-4
	ctx.r10.s64 = r21.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82728E0C:
	// srawi r9,r31,11
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	ctx.r9.s64 = r31.s32 >> 11;
	// add r8,r31,r24
	ctx.r8.u64 = r31.u64 + r24.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// srawi r6,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 11;
	// clrlwi r4,r31,21
	ctx.r4.u64 = r31.u32 & 0x7FF;
	// clrlwi r21,r8,21
	r21.u64 = ctx.r8.u32 & 0x7FF;
	// subf r31,r4,r27
	r31.u64 = r27.u64 - ctx.r4.u64;
	// lbzx r19,r9,r25
	r19.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// lbzx r18,r28,r9
	r18.u64 = REX_LOAD_U8(r28.u32 + ctx.r9.u32);
	// subf r17,r21,r27
	r17.u64 = r27.u64 - r21.u64;
	// lbz r15,1(r9)
	r15.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf r18,r19,r18
	r18.u64 = r18.u64 - r19.u64;
	// add r9,r6,r30
	ctx.r9.u64 = ctx.r6.u64 + r30.u64;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// subf r6,r15,r18
	ctx.r6.u64 = r18.u64 - r15.u64;
	// stw r4,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// stw r19,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r19.u32);
	// clrlwi r19,r8,21
	r19.u64 = ctx.r8.u32 & 0x7FF;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r15,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r15.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// subf r18,r19,r27
	r18.u64 = r27.u64 - r19.u64;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// clrlwi r14,r8,21
	r14.u64 = ctx.r8.u32 & 0x7FF;
	// lbzx r15,r9,r25
	r15.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// srawi r4,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 11;
	// lbzx r7,r28,r9
	ctx.r7.u64 = REX_LOAD_U8(r28.u32 + ctx.r9.u32);
	// subf r6,r15,r7
	ctx.r6.u64 = ctx.r7.u64 - r15.u64;
	// lbz r7,1(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// add r31,r8,r24
	r31.u64 = ctx.r8.u64 + r24.u64;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// add r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 + r30.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r15,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r15.u32);
	// lwz r15,140(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r21,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r21.u32);
	// stw r21,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, r21.u32);
	// subf r21,r14,r27
	r21.u64 = r27.u64 - r14.u64;
	// stw r15,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r15.u32);
	// stw r6,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// stw r17,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r17.u32);
	// lbz r17,1(r9)
	r17.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r6,r9,r25
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// lbzx r8,r28,r9
	ctx.r8.u64 = REX_LOAD_U8(r28.u32 + ctx.r9.u32);
	// subf r7,r6,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r7,r17,r7
	ctx.r7.u64 = ctx.r7.u64 - r17.u64;
	// lbzx r8,r5,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + r30.u32);
	// add r9,r4,r30
	ctx.r9.u64 = ctx.r4.u64 + r30.u64;
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r19,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, r19.u32);
	// stw r19,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, r19.u32);
	// stw r6,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// stw r17,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r17.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r18,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r18.u32);
	// lbzx r6,r9,r25
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// lbzx r5,r28,r9
	ctx.r5.u64 = REX_LOAD_U8(r28.u32 + ctx.r9.u32);
	// subf r8,r6,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r6.u64;
	// lbz r7,1(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lbzx r9,r4,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + r30.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r21,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, r21.u32);
	// stw r6,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// stw r14,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, r14.u32);
	// stw r7,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stwu r8,64(r11)
	ea = 64 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r14,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, r14.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82728e0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82728E0C;
	// lwz r21,88(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r21,256
	ctx.r4.s64 = r21.s64 + 256;
	// bl 0x82727b58
	ctx.lr = 0x82728F58;
	sub_82727B58(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x82728df8
	if (!ctx.cr0.eq) goto loc_82728DF8;
	// lwz r15,120(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r14,16
	r14.s64 = 16;
	// lwz r19,144(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,100(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_82728F74:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82728fec
	if (!ctx.cr6.gt) goto loc_82728FEC;
	// addi r7,r25,1
	ctx.r7.s64 = r25.s64 + 1;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_82728F84:
	// srawi r11,r31,11
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	ctx.r11.s64 = r31.s32 >> 11;
	// clrlwi r6,r31,21
	ctx.r6.u64 = r31.u32 & 0x7FF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r31,r31,r24
	r31.u64 = r31.u64 + r24.u64;
	// lbzx r5,r11,r25
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + r25.u32);
	// lbzx r4,r7,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r8,r5,r26
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(r26.s32);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mullw r9,r10,r6
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mullw r5,r10,r26
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// srawi r10,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 11;
	// subfic r4,r6,2048
	ctx.xer.ca = ctx.r6.u32 <= 2048;
	ctx.r4.u64 = static_cast<uint64_t>(2048) - ctx.r6.u64;
	// subf r6,r26,r4
	ctx.r6.u64 = ctx.r4.u64 - r26.u64;
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r4,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 11;
	// stb r4,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x82728f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82728F84;
loc_82728FEC:
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8272901c
	if (!ctx.cr6.lt) goto loc_8272901C;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82729004:
	// srawi r10,r31,11
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	ctx.r10.s64 = r31.s32 >> 11;
	// add r31,r31,r24
	r31.u64 = r31.u64 + r24.u64;
	// lbzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// stb r9,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x82729004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729004;
loc_8272901C:
	// lwz r10,15360(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82729040
	if (!ctx.cr6.lt) goto loc_82729040;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
loc_8272902C:
	// stbu r14,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r14.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,15360(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8272902c
	if (ctx.cr6.lt) goto loc_8272902C;
loc_82729040:
	// srawi r11,r19,12
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0xFFF) != 0);
	ctx.r11.s64 = r19.s32 >> 12;
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// srawi r9,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	ctx.r9.s64 = r19.s32 >> 1;
	// lwz r30,124(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r17,r11,r29
	r17.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lwz r22,92(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,96(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r23,r9,21
	r23.u64 = ctx.r9.u32 & 0x7FF;
	// add r11,r17,r29
	ctx.r11.u64 = r17.u64 + r29.u64;
	// extsw r8,r23
	ctx.r8.s64 = r23.s32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r8,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// lfd f13,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// ble cr6,0x827290a0
	if (!ctx.cr6.gt) goto loc_827290A0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_82729090:
	// dcbt r11,r10
	// dcbt r11,r9
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82729090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729090;
loc_827290A0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827290c8
	if (!ctx.cr6.gt) goto loc_827290C8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,128
	ctx.r11.s64 = 128;
loc_827290B4:
	// stb r11,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r11.u8);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stb r11,0(r21)
	REX_STORE_U8(r21.u32 + 0, ctx.r11.u8);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// bdnz 0x827290b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827290B4;
loc_827290C8:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// mtctr r14
	ctx.ctr.u64 = r14.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_827290D8:
	// stwu r23,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x827290d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827290D8;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// subfic r26,r23,2048
	ctx.xer.ca = r23.u32 <= 2048;
	r26.u64 = static_cast<uint64_t>(2048) - r23.u64;
	// stfs f13,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// srawi. r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r18,r9,r10
	r18.u64 = ctx.r10.u64 - ctx.r9.u64;
	// ble 0x8272936c
	if (!ctx.cr0.gt) goto loc_8272936C;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r14,88(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// add r28,r17,r10
	r28.u64 = r17.u64 + ctx.r10.u64;
	// add r27,r17,r9
	r27.u64 = r17.u64 + ctx.r9.u64;
	// lvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82729120:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r14,256
	ctx.r11.s64 = r14.s64 + 256;
	// addi r10,r14,-4
	ctx.r10.s64 = r14.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82729134:
	// srawi r7,r30,12
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	ctx.r7.s64 = r30.s32 >> 12;
	// srawi r8,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r8.s64 = r30.s32 >> 1;
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// clrlwi r4,r8,21
	ctx.r4.u64 = ctx.r8.u32 & 0x7FF;
	// add r8,r30,r20
	ctx.r8.u64 = r30.u64 + r20.u64;
	// lbzx r6,r28,r7
	ctx.r6.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// subf r3,r4,r26
	ctx.r3.u64 = r26.u64 - ctx.r4.u64;
	// lbzx r30,r9,r29
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// lbz r14,1(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// subf r5,r30,r5
	ctx.r5.u64 = ctx.r5.u64 - r30.u64;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// subf r5,r14,r5
	ctx.r5.u64 = ctx.r5.u64 - r14.u64;
	// stw r4,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r14,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r14.u32);
	// clrlwi r3,r4,21
	ctx.r3.u64 = ctx.r4.u32 & 0x7FF;
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// add r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 + r20.u64;
	// lbzx r4,r9,r29
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// subf r30,r3,r26
	r30.u64 = r26.u64 - ctx.r3.u64;
	// lbz r14,1(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// subf r5,r4,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r5,r14,r5
	ctx.r5.u64 = ctx.r5.u64 - r14.u64;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r14,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r14.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// lbzx r4,r9,r29
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// subf r5,r4,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r4.u64;
	// lbz r14,1(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r5,r14,r5
	ctx.r5.u64 = ctx.r5.u64 - r14.u64;
	// lbzx r6,r28,r7
	ctx.r6.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// stw r3,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// stw r3,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r3.u32);
	// stw r4,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// clrlwi r3,r6,21
	ctx.r3.u64 = ctx.r6.u32 & 0x7FF;
	// stw r14,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r14.u32);
	// stw r30,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r30.u32);
	// subf r4,r3,r26
	ctx.r4.u64 = r26.u64 - ctx.r3.u64;
	// lbzx r30,r9,r29
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// lbz r14,1(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// subf r5,r30,r9
	ctx.r5.u64 = ctx.r9.u64 - r30.u64;
	// subf r5,r14,r5
	ctx.r5.u64 = ctx.r5.u64 - r14.u64;
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// stw r14,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, r14.u32);
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r30,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r30.u32);
	// stw r6,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// lbzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lbz r30,1(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// subf r6,r30,r6
	ctx.r6.u64 = ctx.r6.u64 - r30.u64;
	// lbzx r9,r28,r7
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r4,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r4.u32);
	// stw r5,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r5.u32);
	// stw r30,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r30.u32);
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// stw r6,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r6.u32);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// stw r3,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r3.u32);
	// stw r3,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r3.u32);
	// add r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 + r20.u64;
	// srawi r7,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 12;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// lbz r14,1(r9)
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// add r30,r8,r20
	r30.u64 = ctx.r8.u64 + r20.u64;
	// clrlwi r4,r5,21
	ctx.r4.u64 = ctx.r5.u32 & 0x7FF;
	// lbzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// subf r3,r4,r26
	ctx.r3.u64 = r26.u64 - ctx.r4.u64;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// subf r6,r5,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r5.u64;
	// subf r6,r14,r6
	ctx.r6.u64 = ctx.r6.u64 - r14.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stw r8,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// add r9,r28,r7
	ctx.r9.u64 = r28.u64 + ctx.r7.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r5,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r5.u32);
	// stw r14,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r14.u32);
	// stw r6,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// lbz r5,1(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r6,r9,r29
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// lbzx r14,r31,r9
	r14.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// add r9,r27,r7
	ctx.r9.u64 = r27.u64 + ctx.r7.u64;
	// lbzx r8,r28,r7
	ctx.r8.u64 = REX_LOAD_U8(r28.u32 + ctx.r7.u32);
	// subf r7,r6,r14
	ctx.r7.u64 = r14.u64 - ctx.r6.u64;
	// stw r8,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// subf r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	// stw r3,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r3.u32);
	// stw r4,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, ctx.r4.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r6.u32);
	// stw r5,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r5.u32);
	// stw r8,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// stwu r4,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// lbzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// lbz r6,1(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// stw r6,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r6.u32);
	// subf r3,r5,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// stw r8,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// stw r5,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r5.u32);
	// subf r9,r6,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r9,128(r11)
	ea = 128 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82729134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729134;
	// lwz r14,88(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// addi r5,r14,256
	ctx.r5.s64 = r14.s64 + 256;
	// bl 0x82728058
	ctx.lr = 0x82729350;
	sub_82728058(ctx, base);
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// addi r22,r22,16
	r22.s64 = r22.s64 + 16;
	// addi r21,r21,16
	r21.s64 = r21.s64 + 16;
	// bne 0x82729120
	if (!ctx.cr0.eq) goto loc_82729120;
	// lwz r28,100(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r14,16
	r14.s64 = 16;
	// lwz r19,144(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_8272936C:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x82729448
	if (!ctx.cr6.gt) goto loc_82729448;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// add r4,r17,r11
	ctx.r4.u64 = r17.u64 + ctx.r11.u64;
	// add r3,r17,r10
	ctx.r3.u64 = r17.u64 + ctx.r10.u64;
loc_8272938C:
	// srawi r10,r30,12
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	ctx.r10.s64 = r30.s32 >> 12;
	// srawi r8,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r8.s64 = r30.s32 >> 1;
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// clrlwi r31,r8,21
	r31.u64 = ctx.r8.u32 & 0x7FF;
	// add r30,r30,r20
	r30.u64 = r30.u64 + r20.u64;
	// subfic r7,r31,2048
	ctx.xer.ca = r31.u32 <= 2048;
	ctx.r7.u64 = static_cast<uint64_t>(2048) - r31.u64;
	// lbzx r5,r11,r29
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// subf r27,r23,r7
	r27.u64 = ctx.r7.u64 - r23.u64;
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// mullw r6,r5,r23
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(r23.s32);
	// lbzx r11,r4,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// subf r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	// mullw r5,r27,r11
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(ctx.r11.s32);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r31.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mullw r10,r8,r31
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// mullw r8,r10,r23
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r23.s32);
	// srawi r10,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 11;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// srawi r6,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 11;
	// stb r6,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r6.u8);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// lbzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// mullw r7,r10,r23
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r23.s32);
	// lbz r5,1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mullw r8,r5,r31
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
	// mullw r6,r27,r11
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(ctx.r11.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r5,r31
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// mullw r10,r11,r23
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r23.s32);
	// srawi r11,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 11;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// srawi r7,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 11;
	// stb r7,0(r21)
	REX_STORE_U8(r21.u32 + 0, ctx.r7.u8);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// bdnz 0x8272938c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272938C;
loc_82729448:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,200(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82729494
	if (!ctx.cr6.lt) goto loc_82729494;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r17,r10
	ctx.r10.u64 = r17.u64 + ctx.r10.u64;
	// add r9,r17,r9
	ctx.r9.u64 = r17.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82729470:
	// srawi r11,r30,12
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	ctx.r11.s64 = r30.s32 >> 12;
	// add r30,r30,r20
	r30.u64 = r30.u64 + r20.u64;
	// lbzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r7,0(r22)
	REX_STORE_U8(r22.u32 + 0, ctx.r7.u8);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// lbzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r6,0(r21)
	REX_STORE_U8(r21.u32 + 0, ctx.r6.u8);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// bdnz 0x82729470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729470;
loc_82729494:
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x827294c8
	if (!ctx.cr6.lt) goto loc_827294C8;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r10,r8,r22
	ctx.r10.u64 = r22.u64 - ctx.r8.u64;
	// subf r9,r8,r21
	ctx.r9.u64 = r21.u64 - ctx.r8.u64;
	// li r8,128
	ctx.r8.s64 = 128;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_827294B8:
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x827294b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827294B8;
loc_827294C8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r15,1
	ctx.r5.s64 = r15.s64 + 1;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r19,r11
	ctx.r11.u64 = r19.u64 + ctx.r11.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r10,15360(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r8,15372(r16)
	ctx.r8.u64 = REX_LOAD_U32(r16.u32 + 15372);
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r31,r9,-1
	r31.s64 = ctx.r9.s64 + -1;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// add r6,r28,r10
	ctx.r6.u64 = r28.u64 + ctx.r10.u64;
	// and r21,r31,r11
	r21.u64 = r31.u64 & ctx.r11.u64;
	// lwz r10,20(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 20);
	// lwz r31,124(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// clrlwi r26,r21,21
	r26.u64 = r21.u32 & 0x7FF;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// srawi r4,r21,11
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x7FF) != 0);
	ctx.r4.s64 = r21.s32 >> 11;
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// extsw r7,r26
	ctx.r7.s64 = r26.s32;
	// mullw r11,r4,r10
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// std r7,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lfd f13,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r30,r11,r8
	r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// ble cr6,0x8272956c
	if (!ctx.cr6.gt) goto loc_8272956C;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82729568
	if (ctx.cr6.eq) goto loc_82729568;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82729560:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82729560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729560;
loc_82729568:
	// add r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 + ctx.r9.u64;
loc_8272956C:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// mtctr r14
	ctx.ctr.u64 = r14.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_8272957C:
	// stwu r26,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8272957c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272957C;
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// subfic r27,r26,2048
	ctx.xer.ca = r26.u32 <= 2048;
	r27.u64 = static_cast<uint64_t>(2048) - r26.u64;
	// stfs f13,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// srawi. r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r22,r9,r10
	r22.u64 = ctx.r10.u64 - ctx.r9.u64;
	// ble 0x8272972c
	if (!ctx.cr0.gt) goto loc_8272972C;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// lwz r19,88(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r28,r25,1
	r28.s64 = r25.s64 + 1;
	// lvx128 v1,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827295B4:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r19,256
	ctx.r11.s64 = r19.s64 + 256;
	// addi r10,r19,-4
	ctx.r10.s64 = r19.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827295C8:
	// srawi r9,r31,11
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	ctx.r9.s64 = r31.s32 >> 11;
	// add r8,r31,r24
	ctx.r8.u64 = r31.u64 + r24.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// srawi r6,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 11;
	// clrlwi r5,r31,21
	ctx.r5.u64 = r31.u32 & 0x7FF;
	// clrlwi r4,r8,21
	ctx.r4.u64 = ctx.r8.u32 & 0x7FF;
	// subf r31,r5,r27
	r31.u64 = r27.u64 - ctx.r5.u64;
	// lbzx r19,r9,r25
	r19.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// lbzx r18,r28,r9
	r18.u64 = REX_LOAD_U8(r28.u32 + ctx.r9.u32);
	// subf r17,r4,r27
	r17.u64 = r27.u64 - ctx.r4.u64;
	// lbz r16,1(r9)
	r16.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r15,r8,21
	r15.u64 = ctx.r8.u32 & 0x7FF;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf r18,r19,r18
	r18.u64 = r18.u64 - r19.u64;
	// add r9,r6,r30
	ctx.r9.u64 = ctx.r6.u64 + r30.u64;
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// subf r6,r16,r18
	ctx.r6.u64 = r18.u64 - r16.u64;
	// stw r5,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// stw r19,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r19.u32);
	// srawi r5,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 11;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r16,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r16.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// stw r6,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// subf r19,r15,r27
	r19.u64 = r27.u64 - r15.u64;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// clrlwi r18,r8,21
	r18.u64 = ctx.r8.u32 & 0x7FF;
	// srawi r6,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 11;
	// add r31,r8,r24
	r31.u64 = ctx.r8.u64 + r24.u64;
	// subf r16,r18,r27
	r16.u64 = r27.u64 - r18.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzx r7,r28,r9
	ctx.r7.u64 = REX_LOAD_U8(r28.u32 + ctx.r9.u32);
	// lbzx r14,r9,r25
	r14.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - r14.u64;
	// stw r4,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r4.u32);
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stw r4,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r4.u32);
	// add r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 + r30.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// stw r14,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r14.u32);
	// stw r17,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r17.u32);
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lbz r17,1(r9)
	r17.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r4,r9,r25
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// lbzx r8,r28,r9
	ctx.r8.u64 = REX_LOAD_U8(r28.u32 + ctx.r9.u32);
	// add r9,r6,r30
	ctx.r9.u64 = ctx.r6.u64 + r30.u64;
	// subf r7,r4,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r4.u64;
	// lbzx r8,r5,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + r30.u32);
	// subf r7,r17,r7
	ctx.r7.u64 = ctx.r7.u64 - r17.u64;
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r15,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, r15.u32);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r15,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, r15.u32);
	// stw r4,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// stw r17,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r17.u32);
	// stw r7,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r7.u32);
	// stw r19,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, r19.u32);
	// lbz r7,1(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbzx r5,r9,r25
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + r25.u32);
	// lbzx r4,r28,r9
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + ctx.r9.u32);
	// subf r8,r5,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lbzx r9,r6,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + r30.u32);
	// stw r16,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, r16.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r5,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// stw r18,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, r18.u32);
	// stw r7,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// stw r9,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stwu r8,64(r11)
	ea = 64 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r18,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, r18.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x827295c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827295C8;
	// lwz r19,88(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r19,256
	ctx.r4.s64 = r19.s64 + 256;
	// bl 0x82727b58
	ctx.lr = 0x82729714;
	sub_82727B58(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x827295b4
	if (!ctx.cr0.eq) goto loc_827295B4;
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r14,16
	r14.s64 = 16;
	// lwz r16,484(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
loc_8272972C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x827297a4
	if (!ctx.cr6.gt) goto loc_827297A4;
	// addi r7,r25,1
	ctx.r7.s64 = r25.s64 + 1;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_8272973C:
	// srawi r11,r31,11
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	ctx.r11.s64 = r31.s32 >> 11;
	// clrlwi r5,r31,21
	ctx.r5.u64 = r31.u32 & 0x7FF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r31,r31,r24
	r31.u64 = r31.u64 + r24.u64;
	// lbzx r4,r11,r25
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r25.u32);
	// lbzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// mullw r8,r4,r26
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r26.s32);
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r4,r4,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r4.u64;
	// mullw r9,r28,r5
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// subf r10,r28,r4
	ctx.r10.u64 = ctx.r4.u64 - r28.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r4,r10,r5
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r4,r26
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(r26.s32);
	// srawi r10,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 11;
	// subfic r5,r5,2048
	ctx.xer.ca = ctx.r5.u32 <= 2048;
	ctx.r5.u64 = static_cast<uint64_t>(2048) - ctx.r5.u64;
	// subf r4,r26,r5
	ctx.r4.u64 = ctx.r5.u64 - r26.u64;
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srawi r10,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 11;
	// stb r10,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x8272973c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272973C;
loc_827297A4:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827297d4
	if (!ctx.cr6.lt) goto loc_827297D4;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_827297BC:
	// srawi r11,r31,11
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	ctx.r11.s64 = r31.s32 >> 11;
	// add r31,r31,r24
	r31.u64 = r31.u64 + r24.u64;
	// lbzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// stb r9,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x827297bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827297BC;
loc_827297D4:
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827297f8
	if (!ctx.cr6.lt) goto loc_827297F8;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
loc_827297E4:
	// stbu r14,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, r14.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827297e4
	if (ctx.cr6.lt) goto loc_827297E4;
loc_827297F8:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r28,r6,r11
	r28.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r21,r10
	ctx.r10.u64 = r21.u64 + ctx.r10.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r15,r11,1
	r15.s64 = ctx.r11.s64 + 1;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r5,r8,-2
	ctx.r5.s64 = ctx.r8.s64 + -2;
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r15.u32);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r15,r5
	ctx.cr6.compare<int32_t>(r15.s32, ctx.r5.s32, ctx.xer);
	// and r19,r7,r10
	r19.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r19.u32);
	// blt cr6,0x82728d30
	if (ctx.cr6.lt) goto loc_82728D30;
loc_82729834:
	// lwz r11,15356(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15356);
	// srawi r8,r19,11
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7FF) != 0);
	ctx.r8.s64 = r19.s32 >> 11;
	// lwz r25,124(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// blt cr6,0x82729850
	if (ctx.cr6.lt) goto loc_82729850;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_82729850:
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r17,136(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r17,r10
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82729ab4
	if (ctx.cr6.lt) goto loc_82729AB4;
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r17.s32, ctx.xer);
	// bge cr6,0x82729ab4
	if (!ctx.cr6.lt) goto loc_82729AB4;
	// lwz r31,148(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r15,128
	r15.s64 = 128;
	// lwz r26,92(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r23,0
	r23.s64 = 0;
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r22,128(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,116(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r21,108(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r18,104(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_82729898:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x827298c4
	if (!ctx.cr6.gt) goto loc_827298C4;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827298c0
	if (ctx.cr6.eq) goto loc_827298C0;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_827298B8:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x827298b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827298B8;
loc_827298C0:
	// add r10,r28,r4
	ctx.r10.u64 = r28.u64 + ctx.r4.u64;
loc_827298C4:
	// lwz r9,20(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 20);
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// lwz r11,15372(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15372);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bge cr6,0x827298fc
	if (!ctx.cr6.lt) goto loc_827298FC;
	// subf r9,r4,r30
	ctx.r9.u64 = r30.u64 - ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827298E4:
	// srawi r9,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 11;
	// add r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 + r24.u64;
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x827298e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827298E4;
loc_827298FC:
	// lwz r9,15360(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82729924
	if (!ctx.cr6.lt) goto loc_82729924;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82729910:
	// stbu r23,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r23.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,15360(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82729910
	if (ctx.cr6.lt) goto loc_82729910;
loc_82729924:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8272994c
	if (!ctx.cr6.gt) goto loc_8272994C;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_82729938:
	// stb r15,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r15.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r15,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r15.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82729938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729938;
loc_8272994C:
	// lwz r7,15356(r16)
	ctx.r7.u64 = REX_LOAD_U32(r16.u32 + 15356);
	// srawi r9,r19,12
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0xFFF) != 0);
	ctx.r9.s64 = r19.s32 >> 12;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82729968
	if (ctx.cr6.lt) goto loc_82729968;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_82729968:
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// cmpw cr6,r22,r31
	ctx.cr6.compare<int32_t>(r22.s32, r31.s32, ctx.xer);
	// bge cr6,0x827299a8
	if (!ctx.cr6.lt) goto loc_827299A8;
	// subf r14,r22,r31
	r14.u64 = r31.u64 - r22.u64;
	// add r7,r9,r21
	ctx.r7.u64 = ctx.r9.u64 + r21.u64;
	// add r6,r9,r18
	ctx.r6.u64 = ctx.r9.u64 + r18.u64;
	// mtctr r14
	ctx.ctr.u64 = r14.u64;
loc_82729984:
	// srawi r9,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 12;
	// add r8,r8,r20
	ctx.r8.u64 = ctx.r8.u64 + r20.u64;
	// lbzx r14,r7,r9
	r14.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// stb r14,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r14.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82729984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729984;
loc_827299A8:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x827299d4
	if (!ctx.cr6.lt) goto loc_827299D4;
	// subf r8,r31,r3
	ctx.r8.u64 = ctx.r3.u64 - r31.u64;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827299C4:
	// stbx r15,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, r15.u8);
	// stbx r15,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r15.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x827299c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827299C4;
loc_827299D4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r26,r26,r3
	r26.u64 = r26.u64 + ctx.r3.u64;
	// lwz r9,15360(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// add r27,r27,r3
	r27.u64 = r27.u64 + ctx.r3.u64;
	// add r11,r19,r11
	ctx.r11.u64 = r19.u64 + ctx.r11.u64;
	// lwz r10,15356(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 15356);
	// add r7,r28,r9
	ctx.r7.u64 = r28.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// and r19,r8,r11
	r19.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// srawi r8,r19,11
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7FF) != 0);
	ctx.r8.s64 = r19.s32 >> 11;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82729a18
	if (ctx.cr6.lt) goto loc_82729A18;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_82729A18:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82729a40
	if (!ctx.cr6.gt) goto loc_82729A40;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82729a3c
	if (ctx.cr6.eq) goto loc_82729A3C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82729A34:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82729a34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729A34;
loc_82729A3C:
	// add r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 + ctx.r4.u64;
loc_82729A40:
	// lwz r10,20(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 20);
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r30.s32, ctx.xer);
	// lwz r11,15372(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15372);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82729a78
	if (!ctx.cr6.lt) goto loc_82729A78;
	// subf r10,r4,r30
	ctx.r10.u64 = r30.u64 - ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82729A60:
	// srawi r10,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 11;
	// add r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 + r24.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82729a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729A60;
loc_82729A78:
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82729aa0
	if (!ctx.cr6.lt) goto loc_82729AA0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82729A8C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r23,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, r23.u8);
	ctx.r9.u32 = ea;
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82729a8c
	if (ctx.cr6.lt) goto loc_82729A8C;
loc_82729AA0:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r28,r7,r11
	r28.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r17
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r17.s32, ctx.xer);
	// blt cr6,0x82729898
	if (ctx.cr6.lt) goto loc_82729898;
	// b 0x82729ac8
	goto loc_82729AC8;
loc_82729AB4:
	// lwz r26,92(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r15,128
	r15.s64 = 128;
	// lwz r27,96(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r23,0
	r23.s64 = 0;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_82729AC8:
	// lwz r11,15364(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15364);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(r17.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82729b70
	if (!ctx.cr6.lt) goto loc_82729B70;
loc_82729AD8:
	// lwz r10,15360(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82729b00
	if (!ctx.cr6.gt) goto loc_82729B00;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
loc_82729AEC:
	// stbu r23,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r23.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,15360(r16)
	ctx.r8.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82729aec
	if (ctx.cr6.lt) goto loc_82729AEC;
loc_82729B00:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82729b24
	if (!ctx.cr6.gt) goto loc_82729B24;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// subf r10,r27,r26
	ctx.r10.u64 = r26.u64 - r27.u64;
loc_82729B14:
	// stbx r15,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, r15.u8);
	// stb r15,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r15.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82729b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82729B14;
loc_82729B24:
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// add r26,r26,r3
	r26.u64 = r26.u64 + ctx.r3.u64;
	// add r27,r27,r3
	r27.u64 = r27.u64 + ctx.r3.u64;
	// add r8,r28,r11
	ctx.r8.u64 = r28.u64 + ctx.r11.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82729b5c
	if (!ctx.cr6.gt) goto loc_82729B5C;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82729B48:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r23,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, r23.u8);
	ctx.r9.u32 = ea;
	// lwz r11,15360(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 15360);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82729b48
	if (ctx.cr6.lt) goto loc_82729B48;
loc_82729B5C:
	// lwz r10,15364(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 15364);
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// add r28,r8,r11
	r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82729ad8
	if (ctx.cr6.lt) goto loc_82729AD8;
loc_82729B70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ce4
	ctx.lr = 0x82729B80;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827B3CF8) {
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
	ctx.lr = 0x827B3D00;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r5,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x827b4198
	if (ctx.cr6.eq) goto loc_827B4198;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x827b3fdc
	if (ctx.cr6.eq) goto loc_827B3FDC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827b3f74
	if (!ctx.cr6.gt) goto loc_827B3F74;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
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
	// li r4,-48
	ctx.r4.s64 = -48;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r6,96
	ctx.r6.s64 = 96;
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
loc_827B3D9C:
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r8,r9
	r26.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v62,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r9
	r27.u64 = r31.u64 + ctx.r9.u64;
	// add r29,r30,r9
	r29.u64 = r30.u64 + ctx.r9.u64;
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r8
	r28.u64 = r28.u64 + ctx.r8.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r9
	r25.u64 = r29.u64 + ctx.r9.u64;
	// lvx128 v56,r26,r10
	ea = (r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
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
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
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
	// lvx128 v51,r30,r9
	ea = (r30.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r9
	ea = (r29.u32 + ctx.r9.u32) & ~0xF;
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
	// stvx128 v12,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
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
	// bdnz 0x827b3d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B3D9C;
	// lwz r29,1068(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_827B3F74:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827b4258
	if (!ctx.cr6.gt) goto loc_827B4258;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r30,r10,r9
	r30.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r9,r4,-48
	ctx.r9.s64 = ctx.r4.s64 + -48;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_827B3FA8:
	// lbzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// lbzux r4,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r5,r31,r3
	ctx.r5.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r4,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827b3fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B3FA8;
	// b 0x827b4258
	goto loc_827B4258;
loc_827B3FDC:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r9
	r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,192
	r28.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lvx128 v39,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// lvx128 v63,r7,r9
	ea = (ctx.r7.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r7
	temp.u32 = ctx.r7.u32;
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
	// stvx128 v26,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
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
	// li r4,4
	ctx.r4.s64 = 4;
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
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r8,r1,64
	ctx.r8.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stvx128 v31,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvx128 v30,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
loc_827B4160:
	// lbzx r5,r10,r4
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzux r31,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,48(r8)
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r7.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r5,96(r8)
	ea = 96 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x827b4160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B4160;
	// b 0x827b4258
	goto loc_827B4258;
loc_827B4198:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lvx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v59,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v53,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,240
	r31.s64 = ctx.r1.s64 + 240;
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v58,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v54,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v30,v55,v53,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v28,v0,v4
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v12,v28
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v25,v11,v12
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v24,v10,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
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
	// stvx128 v22,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827B4258:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r4,1060(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lvx128 v1,r29,r11
	ea = (r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827b2618
	ctx.lr = 0x827B4270;
	sub_827B2618(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x826a1cd0
	return;
}

