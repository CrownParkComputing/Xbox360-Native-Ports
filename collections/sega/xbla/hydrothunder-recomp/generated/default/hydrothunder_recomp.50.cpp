#include "hydrothunder_funcs.50.h"

DEFINE_REX_FUNC(sub_821225F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82122600;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r30
	r31.u64 = r30.u64;
	// lbz r11,57(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 57);
	// b 0x82122658
	goto loc_82122658;
loc_8212261C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82122a08
	ctx.lr = 0x82122628;
	sub_82122A08(ctx, base);
	// addi r28,r30,12
	r28.s64 = r30.s64 + 12;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82122800
	ctx.lr = 0x82122638;
	sub_82122800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82122648;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82122650;
	sub_8269CE98(ctx, base);
	// lbz r11,57(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 57);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82122658:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212261c
	if (ctx.cr0.eq) goto loc_8212261C;
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
	// stw r10,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x82122688;
	sub_8269CE98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8212AEF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8212AEF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,65(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 65);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x8212af4c
	goto loc_8212AF4C;
loc_8212AF10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8212aef0
	ctx.lr = 0x8212AF1C;
	sub_8212AEF0(ctx, base);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8215f0f0
	ctx.lr = 0x8212AF2C;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8212AF3C;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212AF44;
	sub_8269CE98(ctx, base);
	// lbz r11,65(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 65);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8212AF4C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212af10
	if (ctx.cr0.eq) goto loc_8212AF10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8212D5D8) {
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
	ctx.lr = 0x8212D600;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212d62c
	if (ctx.cr0.eq) goto loc_8212D62C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-9544
	ctx.r10.s64 = ctx.r10.s64 + -9544;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8212d630
	goto loc_8212D630;
loc_8212D62C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8212D630:
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
	ctx.lr = 0x8212D64C;
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

DEFINE_REX_FUNC(sub_821325D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,436
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(436));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,432(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r8,428(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,432(r11)
	REX_STORE_U32(ctx.r11.u32 + 432, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r11,172
	ctx.xer.ca = ctx.r11.u32 > 4294967123;
	ctx.r11.s64 = ctx.r11.s64 + 172;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134D80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,36(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// lwz r9,36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r7,r11,16592
	ctx.r7.s64 = ctx.r11.s64 + 16592;
	// lfs f13,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r8,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(24));
	// lfs f0,52(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r7,r8,12,10,19
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3FF000) | (ctx.r7.u64 & 0xFFFFFFFFFFC00FFF);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// ld r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213A4E0) {
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
	ctx.lr = 0x8213A4E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x823edb68
	ctx.lr = 0x8213A508;
	sub_823EDB68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213a518
	if (ctx.cr0.eq) goto loc_8213A518;
loc_8213A510:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8213a550
	goto loc_8213A550;
loc_8213A518:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823edb90
	ctx.lr = 0x8213A53C;
	sub_823EDB90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213a510
	if (!ctx.cr0.eq) goto loc_8213A510;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8213A550:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8213CF88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8213CF90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,41(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 41);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// b 0x8213cfd8
	goto loc_8213CFD8;
loc_8213CFA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8213cf88
	ctx.lr = 0x8213CFB4;
	sub_8213CF88(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x8213CFC8;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213CFD0;
	sub_8269CE98(ctx, base);
	// lbz r11,41(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 41);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8213CFD8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213cfa8
	if (ctx.cr0.eq) goto loc_8213CFA8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821406A0) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821406C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-12668
	ctx.r11.s64 = ctx.r11.s64 + -12668;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82142458) {
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
	ctx.lr = 0x82142460;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r21,r11,-17048
	r21.s64 = ctx.r11.s64 + -17048;
	// bne cr6,0x821424a8
	if (!ctx.cr6.eq) goto loc_821424A8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r11,-16676
	ctx.r3.s64 = ctx.r11.s64 + -16676;
	// li r5,875
	ctx.r5.s64 = 875;
	// bl 0x821231d0
	ctx.lr = 0x821424A8;
	sub_821231D0(ctx, base);
loc_821424A8:
	// li r19,0
	r19.s64 = 0;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(r20.s32, 1, ctx.xer);
	// bne cr6,0x821424b8
	if (!ctx.cr6.eq) goto loc_821424B8;
	// li r19,17
	r19.s64 = 17;
loc_821424B8:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bne cr6,0x821424c8
	if (!ctx.cr6.eq) goto loc_821424C8;
	// clrlwi r11,r19,16
	ctx.r11.u64 = r19.u32 & 0xFFFF;
	// ori r19,r11,2
	r19.u64 = ctx.r11.u64 | 2;
loc_821424C8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x821424d8
	if (!ctx.cr6.eq) goto loc_821424D8;
	// clrlwi r11,r19,16
	ctx.r11.u64 = r19.u32 & 0xFFFF;
	// ori r19,r11,4
	r19.u64 = ctx.r11.u64 | 4;
loc_821424D8:
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82125bc8
	ctx.lr = 0x821424E4;
	sub_82125BC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r29,5
	r31.s64 = r29.s64 + 5;
	// stw r30,97(r1)
	REX_STORE_U32(ctx.r1.u32 + 97, r30.u32);
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82142534
	if (!ctx.cr6.gt) goto loc_82142534;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d1d0
	ctx.lr = 0x82142510;
	sub_8269D1D0(ctx, base);
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82142524;
	sub_826A1E70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x8214252C;
	sub_8269D1B8(ctx, base);
	// stw r24,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
loc_82142534:
	// addi r4,r30,5
	ctx.r4.s64 = r30.s64 + 5;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82125c20
	ctx.lr = 0x82142540;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82125c98
	ctx.lr = 0x8214254C;
	sub_82125C98(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,95
	ctx.r10.s64 = ctx.r1.s64 + 95;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8214255C:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8214255c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214255C;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bl 0x82125c20
	ctx.lr = 0x8214257C;
	sub_82125C20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82125c98
	ctx.lr = 0x82142588;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82142594;
	sub_826A1E70(ctx, base);
	// lwz r23,108(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r22,104(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x821425f8
	if (ctx.cr0.eq) goto loc_821425F8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821425BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821425d8
	if (ctx.cr0.eq) goto loc_821425D8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r11,-16628
	ctx.r3.s64 = ctx.r11.s64 + -16628;
	// li r5,914
	ctx.r5.s64 = 914;
	// bl 0x821231d0
	ctx.lr = 0x821425D8;
	sub_821231D0(ctx, base);
loc_821425D8:
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821425EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// li r31,1
	r31.s64 = 1;
	// b 0x821426f8
	goto loc_821426F8;
loc_821425F8:
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82142758
	if (ctx.cr0.eq) goto loc_82142758;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r24,r11,-4
	r24.s64 = ctx.r11.s64 + -4;
loc_82142620:
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214264C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821426b8
	if (!ctx.cr0.eq) goto loc_821426B8;
	// li r27,0
	r27.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821426a0
	if (!ctx.cr6.gt) goto loc_821426A0;
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
loc_82142668:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8214269c
	if (!ctx.cr0.eq) goto loc_8214269C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// blt cr6,0x82142668
	if (ctx.cr6.lt) goto loc_82142668;
	// b 0x821426a0
	goto loc_821426A0;
loc_8214269C:
	// li r27,1
	r27.s64 = 1;
loc_821426A0:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821426b8
	if (!ctx.cr0.eq) goto loc_821426B8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwu r28,4(r24)
	ea = 4 + r24.u32;
	REX_STORE_U32(ea, r28.u32);
	r24.u32 = ea;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// bgt cr6,0x821426dc
	if (ctx.cr6.gt) goto loc_821426DC;
loc_821426B8:
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821426D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82142620
	if (ctx.cr6.lt) goto loc_82142620;
	// b 0x821426f0
	goto loc_821426F0;
loc_821426DC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r11,-16572
	ctx.r3.s64 = ctx.r11.s64 + -16572;
	// li r5,942
	ctx.r5.s64 = 942;
	// bl 0x821231d0
	ctx.lr = 0x821426F0;
	sub_821231D0(ctx, base);
loc_821426F0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82142758
	if (!ctx.cr6.gt) goto loc_82142758;
loc_821426F8:
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(r20.s32, 1, ctx.xer);
	// mullw r10,r23,r31
	ctx.r10.s64 = int64_t(r23.s32) * int64_t(r31.s32);
	// bne cr6,0x82142714
	if (!ctx.cr6.eq) goto loc_82142714;
	// lwz r11,280(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 280);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,280(r25)
	REX_STORE_U32(r25.u32 + 280, ctx.r11.u32);
	// b 0x82142720
	goto loc_82142720;
loc_82142714:
	// lwz r11,284(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 284);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,284(r25)
	REX_STORE_U32(r25.u32 + 284, ctx.r11.u32);
loc_82142720:
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 44);
	// clrlwi r11,r19,16
	ctx.r11.u64 = r19.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82142758:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x82142760;
	sub_8269D1B8(ctx, base);
	// mullw r3,r23,r31
	ctx.r3.s64 = int64_t(r23.s32) * int64_t(r31.s32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82158750) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82158758;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x821587ac
	if (!ctx.cr6.gt) goto loc_821587AC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82158810
	if (ctx.cr6.eq) goto loc_82158810;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8269cc20
	ctx.lr = 0x821587A4;
	sub_8269CC20(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// b 0x8215880c
	goto loc_8215880C;
loc_821587AC:
	// bge cr6,0x82158810
	if (!ctx.cr6.lt) goto loc_82158810;
	// subf r4,r11,r30
	ctx.r4.u64 = r30.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82145a58
	ctx.lr = 0x821587BC;
	sub_82145A58(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf. r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821587f0
	if (ctx.cr0.eq) goto loc_821587F0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821587f0
	if (ctx.cr0.eq) goto loc_821587F0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821587E8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821587e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821587E8;
loc_821587F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8215880C:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82158810:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215E730) {
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
	ctx.lr = 0x8215E738;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r28,r6,16
	r28.s64 = ctx.r6.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215e780
	if (!ctx.cr6.eq) goto loc_8215E780;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_8215E768:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8215E76C:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8215E778:
	// bl 0x8215e9f8
	ctx.lr = 0x8215E77C;
	sub_8215E9F8(ctx, base);
	// b 0x8215e8dc
	goto loc_8215E8DC;
loc_8215E780:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8215e7ac
	if (!ctx.cr6.eq) goto loc_8215E7AC;
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x8215E79C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8215e8c0
	if (!ctx.cr0.lt) goto loc_8215E8C0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8215e768
	goto loc_8215E768;
loc_8215E7AC:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8215e7dc
	if (!ctx.cr6.eq) goto loc_8215E7DC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82120780
	ctx.lr = 0x8215E7C4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8215e8c0
	if (!ctx.cr0.lt) goto loc_8215E8C0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8215e76c
	goto loc_8215E76C;
loc_8215E7DC:
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8215E7EC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8215e84c
	if (!ctx.cr0.lt) goto loc_8215E84C;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212bae8
	ctx.lr = 0x8215E800;
	sub_8212BAE8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82120780
	ctx.lr = 0x8215E810;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8215e84c
	if (!ctx.cr0.lt) goto loc_8215E84C;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r11,65(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215e840
	if (ctx.cr0.eq) goto loc_8215E840;
loc_8215E838:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8215e778
	goto loc_8215E778;
loc_8215E840:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8215E844:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8215e778
	goto loc_8215E778;
loc_8215E84C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8215E858;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8215e8c0
	if (!ctx.cr0.lt) goto loc_8215E8C0;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a9b0
	ctx.lr = 0x8215E86C;
	sub_8212A9B0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8215e894
	if (ctx.cr6.eq) goto loc_8215E894;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82120780
	ctx.lr = 0x8215E88C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8215e8c0
	if (!ctx.cr0.lt) goto loc_8215E8C0;
loc_8215E894:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,65(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8215e8b8
	if (ctx.cr0.eq) goto loc_8215E8B8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8215e838
	goto loc_8215E838;
loc_8215E8B8:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8215e844
	goto loc_8215E844;
loc_8215E8C0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8215e8e8
	ctx.lr = 0x8215E8D0;
	sub_8215E8E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8215E8DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8216BCE8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82162af8
	ctx.lr = 0x8216BD10;
	sub_82162AF8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8216bd38
	goto loc_8216BD38;
loc_8216BD1C:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8216bd30
	if (!ctx.cr6.lt) goto loc_8216BD30;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8216bd38
	goto loc_8216BD38;
loc_8216BD30:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8216BD38:
	// lbz r9,21(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8216bd1c
	if (ctx.cr0.eq) goto loc_8216BD1C;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8216bd68
	if (ctx.cr6.eq) goto loc_8216BD68;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216bd68
	if (ctx.cr6.lt) goto loc_8216BD68;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x8216bd70
	goto loc_8216BD70;
loc_8216BD68:
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_8216BD70:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8216bd94
	if (ctx.cr6.eq) goto loc_8216BD94;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216BD94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216BD94:
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

DEFINE_REX_FUNC(sub_82171DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82171DF0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82171e14
	if (ctx.cr6.lt) goto loc_82171E14;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82171e18
	goto loc_82171E18;
loc_82171E14:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82171E18:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bne cr6,0x82171e40
	if (!ctx.cr6.eq) goto loc_82171E40;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,26816
	ctx.r4.s64 = ctx.r11.s64 + 26816;
	// addi r3,r10,26872
	ctx.r3.s64 = ctx.r10.s64 + 26872;
	// li r5,360
	ctx.r5.s64 = 360;
	// bl 0x821231d0
	ctx.lr = 0x82171E40;
	sub_821231D0(ctx, base);
loc_82171E40:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171E58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82171e6c
	if (ctx.cr0.eq) goto loc_82171E6C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82171E64:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d0c
	return;
loc_82171E6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82123288
	ctx.lr = 0x82171E78;
	sub_82123288(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821234f0
	ctx.lr = 0x82171E84;
	sub_821234F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82171eb8
	if (ctx.cr6.eq) goto loc_82171EB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82171EA0;
	sub_82120AC0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120b20
	ctx.lr = 0x82171EB4;
	sub_82120B20(ctx, base);
	// b 0x82171ec4
	goto loc_82171EC4;
loc_82171EB8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x82171EC4;
	sub_82120600(ctx, base);
loc_82171EC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82171ED4;
	sub_82120AC0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82171f18
	if (ctx.cr6.eq) goto loc_82171F18;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171EF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82171f18
	if (!ctx.cr0.eq) goto loc_82171F18;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82171F10;
	sub_82120AC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82171e64
	goto loc_82171E64;
loc_82171F18:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171F2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82126238
	ctx.lr = 0x82171F3C;
	sub_82126238(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821233a0
	ctx.lr = 0x82171F44;
	sub_821233A0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bge cr6,0x82171f58
	if (!ctx.cr6.lt) goto loc_82171F58;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_82171F58:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ed3f8
	ctx.lr = 0x82171F60;
	sub_823ED3F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82171f94
	if (!ctx.cr0.eq) goto loc_82171F94;
	// li r31,0
	r31.s64 = 0;
loc_82171F6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82171F7C;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82171F8C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82171e64
	goto loc_82171E64;
loc_82171F94:
	// li r31,1
	r31.s64 = 1;
	// b 0x82171f6c
	goto loc_82171F6C;
}

DEFINE_REX_FUNC(sub_8217C608) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x8217C628;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217c680
	if (ctx.cr0.eq) goto loc_8217C680;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r8,28880
	ctx.r10.s64 = ctx.r8.s64 + 28880;
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x8217c684
	goto loc_8217C684;
loc_8217C680:
	// li r31,0
	r31.s64 = 0;
loc_8217C684:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217c694
	if (!ctx.cr6.eq) goto loc_8217C694;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217c6a4
	goto loc_8217C6A4;
loc_8217C694:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217ab98
	ctx.lr = 0x8217C6A0;
	sub_8217AB98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8217C6A4:
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

DEFINE_REX_FUNC(sub_82182120) {
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
	// bl 0x826a1c80
	ctx.lr = 0x82182128;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c84
	ctx.lr = 0x82182130;
	// stwu r1,-2800(r1)
	ea = -2800 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f12,f1
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f9,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// lfs f1,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f27,f4
	f27.f64 = ctx.f4.f64;
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f31,f9,f0
	f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmr f30,f12
	f30.f64 = ctx.f12.f64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fmuls f26,f12,f1
	f26.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f25,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	f25.f64 = double(temp.f32);
	// fmuls f2,f7,f11
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f23,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	f23.f64 = double(temp.f32);
	// lfs f24,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f24.f64 = double(temp.f32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// fadds f19,f23,f8
	f19.f64 = double(float(f23.f64 + ctx.f8.f64));
	// stfs f19,120(r1)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fadds f22,f25,f13
	f22.f64 = double(float(f25.f64 + ctx.f13.f64));
	// lfs f12,908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f21,f25,f13
	f21.f64 = double(float(f25.f64 - ctx.f13.f64));
	// fadds f20,f24,f10
	f20.f64 = double(float(f24.f64 + ctx.f10.f64));
	// lfs f25,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f25.f64 = double(temp.f32);
	// fsubs f8,f23,f8
	ctx.f8.f64 = double(float(f23.f64 - ctx.f8.f64));
	// stfs f22,112(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f21,96(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f10,f24,f10
	ctx.f10.f64 = double(float(f24.f64 - ctx.f10.f64));
	// lfs f13,912(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stfs f25,124(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stfs f25,108(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stfs f20,116(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r18,r1,176
	r18.s64 = ctx.r1.s64 + 176;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r19,r1,1360
	r19.s64 = ctx.r1.s64 + 1360;
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r14,0
	r14.s64 = 0;
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// li r15,0
	r15.s64 = 0;
	// fmsubs f23,f9,f30,f2
	f23.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, -ctx.f2.f64)));
	// fmsubs f22,f1,f11,f31
	f22.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, -f31.f64)));
	// fcmpu cr6,f28,f12
	ctx.cr6.compare(f28.f64, ctx.f12.f64);
	// fmsubs f21,f4,f7,f26
	f21.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, -f26.f64)));
	// bgt cr6,0x82182218
	if (ctx.cr6.gt) goto loc_82182218;
	// fsubs f28,f0,f13
	f28.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// li r14,1
	r14.s64 = 1;
loc_82182218:
	// fcmpu cr6,f3,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// blt cr6,0x82182228
	if (ctx.cr6.lt) goto loc_82182228;
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// li r15,1
	r15.s64 = 1;
loc_82182228:
	// fcmpu cr6,f28,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, ctx.f3.f64);
	// ble cr6,0x82182240
	if (!ctx.cr6.gt) goto loc_82182240;
	// fsubs f28,f0,f13
	f28.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// li r15,1
	r15.s64 = 1;
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// li r14,1
	r14.s64 = 1;
loc_82182240:
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f3,f28
	ctx.f13.f64 = double(float(ctx.f3.f64 - f28.f64));
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r20,r10,1
	r20.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(r20.s32, 2, ctx.xer);
	// bge cr6,0x8218226c
	if (!ctx.cr6.lt) goto loc_8218226C;
	// li r20,2
	r20.s64 = 2;
loc_8218226C:
	// addi r16,r20,-1
	r16.s64 = r20.s64 + -1;
	// fcmpu cr6,f27,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, ctx.f5.f64);
	// li r17,1
	r17.s64 = 1;
	// extsw r10,r16
	ctx.r10.s64 = r16.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f24,f13,f11
	f24.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// ble cr6,0x821822a4
	if (!ctx.cr6.gt) goto loc_821822A4;
	// lfs f13,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f27,f0,f13
	f27.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// b 0x821822b8
	goto loc_821822B8;
loc_821822A4:
	// fsubs f13,f5,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f5.f64 - f27.f64));
	// lfs f0,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821822b8
	if (!ctx.cr6.lt) goto loc_821822B8;
	// li r17,0
	r17.s64 = 0;
loc_821822B8:
	// fsubs f0,f5,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f5.f64 - f27.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r23,r11,1
	r23.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(r23.s32, 2, ctx.xer);
	// bge cr6,0x821822dc
	if (!ctx.cr6.lt) goto loc_821822DC;
	// li r23,2
	r23.s64 = 2;
loc_821822DC:
	// addi r22,r23,-1
	r22.s64 = r23.s64 + -1;
	// li r29,0
	r29.s64 = 0;
	// extsw r11,r22
	ctx.r11.s64 = r22.s32;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f26,f0,f13
	f26.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// ble cr6,0x8218254c
	if (!ctx.cr6.gt) goto loc_8218254C;
	// lwz r25,2892(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 2892);
loc_82182308:
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f31,f0,f24,f28
	f31.f64 = double(float(std::fma(ctx.f0.f64, f24.f64, f28.f64)));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a14e0
	ctx.lr = 0x82182328;
	sub_826A14E0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmuls f31,f0,f29
	f31.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x826a15c0
	ctx.lr = 0x82182338;
	sub_826A15C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// fmuls f30,f0,f29
	f30.f64 = double(float(ctx.f0.f64 * f29.f64));
	// ble cr6,0x82182534
	if (!ctx.cr6.gt) goto loc_82182534;
	// stfs f25,140(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// clrlwi r21,r17,24
	r21.u64 = r17.u32 & 0xFF;
loc_82182354:
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f20,f0,f26,f27
	f20.f64 = double(float(std::fma(ctx.f0.f64, f26.f64, f27.f64)));
	// fmr f1,f20
	ctx.f1.f64 = f20.f64;
	// bl 0x826a14e0
	ctx.lr = 0x82182374;
	sub_826A14E0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f20
	ctx.f1.f64 = f20.f64;
	// fmuls f20,f0,f30
	f20.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x826a15c0
	ctx.lr = 0x82182384;
	sub_826A15C0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f21,f20
	ctx.f11.f64 = double(float(f21.f64 * f20.f64));
	// lfs f10,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f23,f20
	ctx.f9.f64 = double(float(f23.f64 * f20.f64));
	// lfs f8,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f22,f20
	ctx.f7.f64 = double(float(f22.f64 * f20.f64));
	// lfs f6,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f5,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f4,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lfs f3,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * f31.f64));
	// lfs f2,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f31
	ctx.f3.f64 = double(float(ctx.f3.f64 * f31.f64));
	// fmuls f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * f31.f64));
	// add r31,r11,r19
	r31.u64 = ctx.r11.u64 + r19.u64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f13,f12,f3
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stdx r9,r11,r19
	REX_STORE_U64(ctx.r11.u32 + r19.u32, ctx.r9.u64);
	// std r10,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// beq cr6,0x82182438
	if (ctx.cr6.eq) goto loc_82182438;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// add r4,r11,r18
	ctx.r4.u64 = ctx.r11.u64 + r18.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8218244c
	goto loc_8218244C;
loc_82182438:
	// clrlwi. r11,r15,24
	ctx.r11.u64 = r15.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82182460
	if (ctx.cr0.eq) goto loc_82182460;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8218244C:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bctrl 
	ctx.lr = 0x82182460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82182460:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8218248c
	if (ctx.cr6.eq) goto loc_8218248C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82182488;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821824a0
	goto loc_821824A0;
loc_8218248C:
	// ld r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U64(r19.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// ld r9,8(r19)
	ctx.r9.u64 = REX_LOAD_U64(r19.u32 + 8);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
loc_821824A0:
	// cmpw cr6,r29,r16
	ctx.cr6.compare<int32_t>(r29.s32, r16.s32, ctx.xer);
	// bne cr6,0x821824d0
	if (!ctx.cr6.eq) goto loc_821824D0;
	// clrlwi. r11,r14,24
	ctx.r11.u64 = r14.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821824d0
	if (ctx.cr0.eq) goto loc_821824D0;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821824D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821824D0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x821824e8
	if (ctx.cr6.eq) goto loc_821824E8;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(r28.s32, r22.s32, ctx.xer);
	// bne cr6,0x82182528
	if (!ctx.cr6.eq) goto loc_82182528;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// b 0x8218250c
	goto loc_8218250C;
loc_821824E8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821824f8
	if (ctx.cr6.eq) goto loc_821824F8;
	// cmpw cr6,r29,r16
	ctx.cr6.compare<int32_t>(r29.s32, r16.s32, ctx.xer);
	// bne cr6,0x82182528
	if (!ctx.cr6.eq) goto loc_82182528;
loc_821824F8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82182508
	if (ctx.cr6.eq) goto loc_82182508;
	// cmpw cr6,r28,r22
	ctx.cr6.compare<int32_t>(r28.s32, r22.s32, ctx.xer);
	// bne cr6,0x82182528
	if (!ctx.cr6.eq) goto loc_82182528;
loc_82182508:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8218250C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82182528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82182528:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(r28.s32, r23.s32, ctx.xer);
	// blt cr6,0x82182354
	if (ctx.cr6.lt) goto loc_82182354;
loc_82182534:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r18,r19
	r18.u64 = r19.u64;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// blt cr6,0x82182308
	if (ctx.cr6.lt) goto loc_82182308;
loc_8218254C:
	// addi r1,r1,2800
	ctx.r1.s64 = ctx.r1.s64 + 2800;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cd0
	ctx.lr = 0x82182558;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_821A3E98) {
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
	// lwz r10,-20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r4,-16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3ED0;
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

DEFINE_REX_FUNC(sub_821A6280) {
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
	ctx.lr = 0x821A6288;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r31.s32, ctx.xer);
	// bge cr6,0x821a62e4
	if (!ctx.cr6.lt) goto loc_821A62E4;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x821a6344
	if (!ctx.cr6.lt) goto loc_821A6344;
	// mulli r30,r31,48
	r30.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(48));
	// subf r31,r31,r4
	r31.u64 = ctx.r4.u64 - r31.u64;
loc_821A62B4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// bl 0x8215f0f0
	ctx.lr = 0x821A62C4;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x821A62D4;
	sub_82120AC0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bne 0x821a62b4
	if (!ctx.cr0.eq) goto loc_821A62B4;
	// b 0x821a6344
	goto loc_821A6344;
loc_821A62E4:
	// ble cr6,0x821a62f4
	if (!ctx.cr6.gt) goto loc_821A62F4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821a6350
	ctx.lr = 0x821A62F4;
	sub_821A6350(ctx, base);
loc_821A62F4:
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// bge cr6,0x821a6344
	if (!ctx.cr6.lt) goto loc_821A6344;
	// mulli r30,r31,48
	r30.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(48));
	// subf r29,r31,r28
	r29.u64 = r28.u64 - r31.u64;
loc_821A6304:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// add. r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821a6338
	if (ctx.cr0.eq) goto loc_821A6338;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r26,4
	ctx.r4.s64 = r26.s64 + 4;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82120d70
	ctx.lr = 0x821A6324;
	sub_82120D70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// addi r4,r26,32
	ctx.r4.s64 = r26.s64 + 32;
	// bl 0x8215efb0
	ctx.lr = 0x821A6338;
	sub_8215EFB0(ctx, base);
loc_821A6338:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bne 0x821a6304
	if (!ctx.cr0.eq) goto loc_821A6304;
loc_821A6344:
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821AAB30) {
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
	ctx.lr = 0x821AAB38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f0,16(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lfs f0,88(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f0,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f0,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f0,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// beq cr6,0x821aab88
	if (ctx.cr6.eq) goto loc_821AAB88;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x821aab8c
	goto loc_821AAB8C;
loc_821AAB88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AAB8C:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lis r9,22849
	ctx.r9.s64 = 1497432064;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r27,r9,21057
	r27.u64 = ctx.r9.u64 | 21057;
	// addi r26,r10,-24588
	r26.s64 = ctx.r10.s64 + -24588;
	// beq cr6,0x821aac18
	if (ctx.cr6.eq) goto loc_821AAC18;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r30,40(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AABC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821aabf8
	if (!ctx.cr6.gt) goto loc_821AABF8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_821AABE4:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821aabe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AABE4;
loc_821AABF8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AAC18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AAC18:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r11.u32);
	// beq cr6,0x821aac30
	if (ctx.cr6.eq) goto loc_821AAC30;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// b 0x821aac34
	goto loc_821AAC34;
loc_821AAC30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AAC34:
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aacb0
	if (ctx.cr6.eq) goto loc_821AACB0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r30,36(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AAC60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821aac90
	if (!ctx.cr6.gt) goto loc_821AAC90;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_821AAC7C:
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821aac7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AAC7C;
loc_821AAC90:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AACB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AACB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r11.u32);
	// beq cr6,0x821aacc8
	if (ctx.cr6.eq) goto loc_821AACC8;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// b 0x821aaccc
	goto loc_821AACCC;
loc_821AACC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AACCC:
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aad7c
	if (ctx.cr6.eq) goto loc_821AAD7C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r30,44(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AACF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821aad58
	if (!ctx.cr6.gt) goto loc_821AAD58;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
loc_821AAD14:
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f0,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821aad14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AAD14;
loc_821AAD58:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r5,r10,-24584
	ctx.r5.s64 = ctx.r10.s64 + -24584;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AAD7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AAD7C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r11.u32);
	// beq cr6,0x821aad94
	if (ctx.cr6.eq) goto loc_821AAD94;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// b 0x821aad98
	goto loc_821AAD98;
loc_821AAD94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AAD98:
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aae14
	if (ctx.cr6.eq) goto loc_821AAE14;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r30,44(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AADC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x821aadf4
	if (!ctx.cr6.gt) goto loc_821AADF4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_821AADE0:
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821aade0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AADE0;
loc_821AADF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AAE14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AAE14:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-24564
	ctx.r3.s64 = ctx.r11.s64 + -24564;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821BFE78) {
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
	ctx.lr = 0x821BFE80;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r31,r26
	r31.u64 = r26.u64;
	// bl 0x82178268
	ctx.lr = 0x821BFE9C;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r26,116(r30)
	REX_STORE_U32(r30.u32 + 116, r26.u32);
	// stw r26,120(r30)
	REX_STORE_U32(r30.u32 + 120, r26.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-18280
	ctx.r11.s64 = ctx.r11.s64 + -18280;
	// addi r29,r30,116
	r29.s64 = r30.s64 + 116;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r27,r30,120
	r27.s64 = r30.s64 + 120;
	// bl 0x822f6280
	ctx.lr = 0x821BFEC0;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821bfef0
	if (ctx.cr0.eq) goto loc_821BFEF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18332
	ctx.r4.s64 = ctx.r11.s64 + -18332;
	// bl 0x82120600
	ctx.lr = 0x821BFED8;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x821BFEEC;
	sub_82197628(ctx, base);
	// b 0x821bfef4
	goto loc_821BFEF4;
loc_821BFEF0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821BFEF4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r30,80
	r28.s64 = r30.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821BFF08;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bff24
	if (ctx.cr0.eq) goto loc_821BFF24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821BFF24;
	sub_82120AC0(ctx, base);
loc_821BFF24:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821BFF2C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821bff5c
	if (ctx.cr0.eq) goto loc_821BFF5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-18316
	ctx.r4.s64 = ctx.r11.s64 + -18316;
	// bl 0x82120600
	ctx.lr = 0x821BFF44;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82197628
	ctx.lr = 0x821BFF58;
	sub_82197628(ctx, base);
	// b 0x821bff60
	goto loc_821BFF60;
loc_821BFF5C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_821BFF60:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821BFF70;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bff88
	if (ctx.cr0.eq) goto loc_821BFF88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821BFF88;
	sub_82120AC0(ctx, base);
loc_821BFF88:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821BFF90;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bffb0
	if (ctx.cr0.eq) goto loc_821BFFB0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BFFA8;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821bffb4
	goto loc_821BFFB4;
loc_821BFFB0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_821BFFB4:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BFFC0;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BFFC8;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r28,r11,-15424
	r28.s64 = ctx.r11.s64 + -15424;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x821c003c
	if (ctx.cr0.eq) goto loc_821C003C;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-18300
	ctx.r4.s64 = ctx.r11.s64 + -18300;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BFFFC;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821C0008;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c002c
	if (ctx.cr0.eq) goto loc_821C002C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-600
	ctx.r10.s64 = ctx.r10.s64 + -600;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821c0030
	goto loc_821C0030;
loc_821C002C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C0030:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821c0040
	goto loc_821C0040;
loc_821C003C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821C0040:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C0058;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C0060;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c00c4
	if (ctx.cr0.eq) goto loc_821C00C4;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-18296
	ctx.r4.s64 = ctx.r11.s64 + -18296;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C0084;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821C0090;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c00b4
	if (ctx.cr0.eq) goto loc_821C00B4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-536
	ctx.r10.s64 = ctx.r10.s64 + -536;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821c00b8
	goto loc_821C00B8;
loc_821C00B4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C00B8:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821c00c8
	goto loc_821C00C8;
loc_821C00C4:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821C00C8:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C00E0;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C00E8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c014c
	if (ctx.cr0.eq) goto loc_821C014C;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-18292
	ctx.r4.s64 = ctx.r11.s64 + -18292;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C010C;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821C0118;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c013c
	if (ctx.cr0.eq) goto loc_821C013C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-472
	ctx.r10.s64 = ctx.r10.s64 + -472;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821c0140
	goto loc_821C0140;
loc_821C013C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C0140:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821c0150
	goto loc_821C0150;
loc_821C014C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821C0150:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C0168;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821C0170;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x821c01a8
	if (ctx.cr0.eq) goto loc_821C01A8;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C019C;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821c01ac
	goto loc_821C01AC;
loc_821C01A8:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_821C01AC:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C01C4;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821C01CC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c01fc
	if (ctx.cr0.eq) goto loc_821C01FC;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r26.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-19336
	ctx.r4.s64 = ctx.r11.s64 + -19336;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C01F0;
	sub_821DBB48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821c0200
	goto loc_821C0200;
loc_821C01FC:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_821C0200:
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// bl 0x82264568
	ctx.lr = 0x821C0218;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821DB478) {
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
	ctx.lr = 0x821DB480;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821613d8
	ctx.lr = 0x821DB4A0;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821db560
	ctx.lr = 0x821DB4A8;
	sub_821DB560(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x821613d8
	ctx.lr = 0x821DB4BC;
	sub_821613D8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821613d8
	ctx.lr = 0x821DB4D0;
	sub_821613D8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mulli r5,r11,48
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// bl 0x821613d8
	ctx.lr = 0x821DB4E4;
	sub_821613D8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821DB4F4;
	sub_821613D8(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x821ec240
	ctx.lr = 0x821DB508;
	sub_821EC240(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821db558
	if (!ctx.cr6.gt) goto loc_821DB558;
	// li r30,0
	r30.s64 = 0;
	// li r28,0
	r28.s64 = 0;
loc_821DB520:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// bl 0x821ec898
	ctx.lr = 0x821DB534;
	sub_821EC898(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8216ab58
	ctx.lr = 0x821DB540;
	sub_8216AB58(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,48
	r28.s64 = r28.s64 + 48;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821db520
	if (ctx.cr6.lt) goto loc_821DB520;
loc_821DB558:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821DFC50) {
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
	// lbz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821dfc88
	if (ctx.cr0.eq) goto loc_821DFC88;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6188(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6188);
	// bl 0x82151a88
	ctx.lr = 0x821DFC80;
	sub_82151A88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,148(r31)
	REX_STORE_U8(r31.u32 + 148, ctx.r11.u8);
loc_821DFC88:
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

DEFINE_REX_FUNC(sub_821E0648) {
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
	ctx.lr = 0x821E0650;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E066C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821E067C;
	sub_821626C0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E0694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r31,r30
	ctx.r4.u64 = r31.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821E06B0;
	sub_82125C20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821E06BC;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821E06C8;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E06DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821E4FC0) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2ca4
	ctx.lr = 0x821E4FD8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E4FF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E500C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E5024;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// stfs f31,48(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// fadds f31,f13,f29
	f31.f64 = double(float(ctx.f13.f64 + f29.f64));
	// fadds f30,f12,f30
	f30.f64 = double(float(ctx.f12.f64 + f30.f64));
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// fadds f29,f0,f1
	f29.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E5058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E5070;
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
	ctx.lr = 0x821E5088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - f27.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f30,f28
	ctx.f13.f64 = double(float(f30.f64 - f28.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f12,f29,f1
	ctx.f12.f64 = double(float(f29.f64 - ctx.f1.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// std r10,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cf0
	ctx.lr = 0x821E50CC;
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

DEFINE_REX_FUNC(sub_821EF420) {
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
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
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
	ctx.lr = 0x821EF454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EF46C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EF484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EF49C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EF4B4;
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

DEFINE_REX_FUNC(sub_821F61E0) {
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
	// addi r11,r11,23684
	ctx.r11.s64 = ctx.r11.s64 + 23684;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821f6220
	if (ctx.cr6.eq) goto loc_821F6220;
	// bl 0x821357c8
	ctx.lr = 0x821F6218;
	sub_821357C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_821F6220:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8215f0f0
	ctx.lr = 0x821F6228;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214e4b0
	ctx.lr = 0x821F6230;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f6240
	if (ctx.cr0.eq) goto loc_821F6240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821F6240;
	sub_8269CE98(ctx, base);
loc_821F6240:
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

DEFINE_REX_FUNC(sub_821FA5A8) {
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
	ctx.lr = 0x821FA5B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,1640
	r29.s64 = ctx.r11.s64 + 1640;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r3,8
	r28.s64 = ctx.r3.s64 + 8;
	// mr r31,r29
	r31.u64 = r29.u64;
	// addi r27,r11,24748
	r27.s64 = ctx.r11.s64 + 24748;
loc_821FA5D0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FA5DC;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821FA5E4;
	sub_8215F2D0(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FA5E8;
	sub_8215F990(ctx, base);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r11,r29,84
	ctx.r11.s64 = r29.s64 + 84;
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821fa5d0
	if (ctx.cr6.lt) goto loc_821FA5D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821FB9A0) {
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
	ctx.lr = 0x821FB9A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fb9d8
	if (ctx.cr6.eq) goto loc_821FB9D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,469
	ctx.r5.s64 = 469;
	// bl 0x821231d0
	ctx.lr = 0x821FB9D8;
	sub_821231D0(ctx, base);
loc_821FB9D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FB9EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,25468
	ctx.r4.s64 = ctx.r11.s64 + 25468;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FBA00;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FBA08;
	sub_8215F0F0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FBA28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,25484
	ctx.r4.s64 = ctx.r11.s64 + 25484;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FBA3C;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FBA44;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FBA60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,25508
	ctx.r4.s64 = ctx.r11.s64 + 25508;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FBA74;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FBA7C;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r28)
	REX_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6276(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FBA9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,25536
	ctx.r4.s64 = ctx.r11.s64 + 25536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x821FBAB0;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x821FBAB8;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82203D60) {
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
	ctx.lr = 0x82203D68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// li r28,1
	r28.s64 = 1;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82203d98
	if (!ctx.cr6.lt) goto loc_82203D98;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,29708
	ctx.r3.s64 = ctx.r11.s64 + 29708;
	// bl 0x822f6020
	ctx.lr = 0x82203D98;
	sub_822F6020(ctx, base);
loc_82203D98:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82203da8
	if (!ctx.cr6.lt) goto loc_82203DA8;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82203DA8:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82203dc0
	if (!ctx.cr6.gt) goto loc_82203DC0;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82203dc0
	if (ctx.cr6.gt) goto loc_82203DC0;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82203DC0:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// rlwinm r29,r10,30,2,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x82203df4
	if (ctx.cr0.eq) goto loc_82203DF4;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82203f2c
	if (ctx.cr6.gt) goto loc_82203F2C;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822f6280
	ctx.lr = 0x82203DEC;
	sub_822F6280(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82203f2c
	if (ctx.cr0.eq) goto loc_82203F2C;
loc_82203DF4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x8269cc20
	ctx.lr = 0x82203E24;
	sub_8269CC20(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bgt cr6,0x82203ea0
	if (ctx.cr6.gt) goto loc_82203EA0;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// subf r27,r29,r28
	r27.u64 = r28.u64 - r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8269cc20
	ctx.lr = 0x82203E50;
	sub_8269CC20(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82203e78
	if (ctx.cr6.eq) goto loc_82203E78;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq 0x82203e78
	if (ctx.cr0.eq) goto loc_82203E78;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_82203E70:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82203e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82203E70;
loc_82203E78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82203f04
	if (ctx.cr6.eq) goto loc_82203F04;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x82203f04
	if (ctx.cr0.eq) goto loc_82203F04;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82203E94:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82203e94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82203E94;
	// b 0x82203f04
	goto loc_82203F04;
loc_82203EA0:
	// rlwinm r29,r28,2,0,29
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r29
	ctx.r11.u64 = r29.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x82203EB8;
	sub_8269CC20(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + ctx.r11.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8269cc20
	ctx.lr = 0x82203EDC;
	sub_8269CC20(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82203f04
	if (ctx.cr6.eq) goto loc_82203F04;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x82203f04
	if (ctx.cr0.eq) goto loc_82203F04;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_82203EFC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82203efc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82203EFC;
loc_82203F04:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82203f14
	if (ctx.cr6.eq) goto loc_82203F14;
	// bl 0x8269ce98
	ctx.lr = 0x82203F14;
	sub_8269CE98(ctx, base);
loc_82203F14:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r26,4(r30)
	REX_STORE_U32(r30.u32 + 4, r26.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82203F2C:
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
	ctx.lr = 0x82203F48;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82211D40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82211D48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x82211D5C;
	sub_8212E8B0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x8215fbf8
	ctx.lr = 0x82211D78;
	sub_8215FBF8(ctx, base);
	// addi r31,r31,520
	r31.s64 = r31.s64 + 520;
	// li r29,4
	r29.s64 = 4;
loc_82211D80:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82211D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -8);
	// stw r30,-12(r31)
	REX_STORE_U32(r31.u32 + -12, r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82211db4
	if (ctx.cr6.lt) goto loc_82211DB4;
	// lwz r11,-28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -28);
	// b 0x82211db8
	goto loc_82211DB8;
loc_82211DB4:
	// addi r11,r31,-28
	ctx.r11.s64 = r31.s64 + -28;
loc_82211DB8:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// addi r31,r31,60
	r31.s64 = r31.s64 + 60;
	// bne 0x82211d80
	if (!ctx.cr0.eq) goto loc_82211D80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x82211DD0;
	sub_8215F0F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822185A8) {
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
	ctx.lr = 0x822185B0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r22,r11,-27048
	r22.s64 = ctx.r11.s64 + -27048;
	// addi r21,r10,1624
	r21.s64 = ctx.r10.s64 + 1624;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8215f338
	ctx.lr = 0x822185D0;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26752
	ctx.r4.s64 = ctx.r11.s64 + -26752;
	// bl 0x8215f338
	ctx.lr = 0x822185DC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r27,r11,16432
	r27.s64 = ctx.r11.s64 + 16432;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r23,r9,-26796
	r23.s64 = ctx.r9.s64 + -26796;
	// addi r25,r10,-26744
	r25.s64 = ctx.r10.s64 + -26744;
	// addi r24,r11,-26828
	r24.s64 = ctx.r11.s64 + -26828;
loc_82218604:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82218628
	if (!ctx.cr6.eq) goto loc_82218628;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8221862c
	goto loc_8221862C;
loc_82218628:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221862C:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822186b8
	if (!ctx.cr6.lt) goto loc_822186B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82218640;
	sub_8215F1B0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221864C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82218650;
	sub_8215FA30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82218660;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82218674
	if (!ctx.cr6.eq) goto loc_82218674;
	// lbz r29,8(r3)
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82218678
	goto loc_82218678;
loc_82218674:
	// li r29,0
	r29.s64 = 0;
loc_82218678:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82218684;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82218688;
	sub_8215F990(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bge cr6,0x8221869c
	if (!ctx.cr6.lt) goto loc_8221869C;
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x822186a0
	goto loc_822186A0;
loc_8221869C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_822186A0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82219170
	ctx.lr = 0x822186AC;
	sub_82219170(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x82218604
	goto loc_82218604;
loc_822186B8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8215f670
	ctx.lr = 0x822186C4;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x822186C8;
	sub_8215F0F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_822237A8) {
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
	ctx.lr = 0x822237B0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca0
	ctx.lr = 0x822237B8;
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x822237D4;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-26752
	ctx.r4.s64 = ctx.r11.s64 + -26752;
	// bl 0x8215f338
	ctx.lr = 0x822237E4;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r11,-24980
	ctx.r4.s64 = ctx.r11.s64 + -24980;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x8215f338
	ctx.lr = 0x82223804;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82223818
	if (!ctx.cr6.eq) goto loc_82223818;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82223818:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r28,r11,16592
	r28.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r30,0
	r30.s64 = 0;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r27,r11,-24968
	r27.s64 = ctx.r11.s64 + -24968;
	// lfs f27,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f27.f64 = double(temp.f32);
	// lfs f26,172(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 172);
	f26.f64 = double(temp.f32);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// fmr f28,f26
	f28.f64 = f26.f64;
loc_82223844:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82223868
	if (!ctx.cr6.eq) goto loc_82223868;
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
	// b 0x8222386c
	goto loc_8222386C;
loc_82223868:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222386C:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822238b8
	if (!ctx.cr6.lt) goto loc_822238B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82223880;
	sub_8215F1B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223888;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x8222388C;
	sub_8215F9E0(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// addi r11,r28,256
	ctx.r11.s64 = r28.s64 + 256;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
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
	// fsel f28,f0,f28,f1
	f28.f64 = ctx.f0.f64 >= 0.0 ? f28.f64 : ctx.f1.f64;
	// b 0x82223844
	goto loc_82223844;
loc_822238B8:
	// ld r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 128);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// addi r15,r11,16432
	r15.s64 = ctx.r11.s64 + 16432;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lfs f31,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f31.f64 = double(temp.f32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r30,-32241
	r30.s64 = -2112946176;
	// li r27,0
	r27.s64 = 0;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// addi r22,r11,-26856
	r22.s64 = ctx.r11.s64 + -26856;
	// addi r20,r10,24552
	r20.s64 = ctx.r10.s64 + 24552;
	// addi r17,r9,-24916
	r17.s64 = ctx.r9.s64 + -24916;
	// addi r24,r8,-24932
	r24.s64 = ctx.r8.s64 + -24932;
	// addi r19,r7,-24944
	r19.s64 = ctx.r7.s64 + -24944;
	// addi r23,r6,-24748
	r23.s64 = ctx.r6.s64 + -24748;
	// addi r14,r5,-26828
	r14.s64 = ctx.r5.s64 + -26828;
	// addi r16,r4,-24760
	r16.s64 = ctx.r4.s64 + -24760;
	// addi r21,r3,-24772
	r21.s64 = ctx.r3.s64 + -24772;
	// addi r18,r30,-24784
	r18.s64 = r30.s64 + -24784;
loc_8222392C:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82223950
	if (!ctx.cr6.eq) goto loc_82223950;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x82223954
	goto loc_82223954;
loc_82223950:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223954:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82223e8c
	if (!ctx.cr6.lt) goto loc_82223E8C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82223968;
	sub_8215F1B0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223974;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82223988
	if (!ctx.cr6.eq) goto loc_82223988;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8222398c
	goto loc_8222398C;
loc_82223988:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222398C:
	// addi r26,r27,1
	r26.s64 = r27.s64 + 1;
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f12,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f11,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// beq 0x82223ab8
	if (ctx.cr0.eq) goto loc_82223AB8;
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x822239D0;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82222758
	ctx.lr = 0x822239E8;
	sub_82222758(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x822239F4;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82223a18
	if (!ctx.cr6.eq) goto loc_82223A18;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82223a1c
	if (ctx.cr6.lt) goto loc_82223A1C;
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82223a1c
	goto loc_82223A1C;
loc_82223A18:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_82223A1C:
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,268
	ctx.r5.s64 = r31.s64 + 268;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x82222758
	ctx.lr = 0x82223A58;
	sub_82222758(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223A64;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82223A68;
	sub_8215F9E0(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ee668
	ctx.lr = 0x82223A74;
	sub_822EE668(ctx, base);
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,580(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lfs f12,584(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,588(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 588);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r5,r31,592
	ctx.r5.s64 = r31.s64 + 592;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82222758
	ctx.lr = 0x82223AB4;
	sub_82222758(ctx, base);
	// b 0x82223e78
	goto loc_82223E78;
loc_82223AB8:
	// stfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f11,268(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x82223AD0;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82222758
	ctx.lr = 0x82223AE8;
	sub_82222758(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223AF4;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82223b18
	if (!ctx.cr6.eq) goto loc_82223B18;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82223b1c
	if (ctx.cr6.lt) goto loc_82223B1C;
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82223b1c
	goto loc_82223B1C;
loc_82223B18:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_82223B1C:
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,256(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,260(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,264(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 264);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,268
	ctx.r5.s64 = r31.s64 + 268;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82222758
	ctx.lr = 0x82223B58;
	sub_82222758(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r30,6140(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 6140);
	// bl 0x8215f338
	ctx.lr = 0x82223B68;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82223b8c
	if (!ctx.cr6.eq) goto loc_82223B8C;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82223b90
	if (ctx.cr6.lt) goto loc_82223B90;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82223b90
	goto loc_82223B90;
loc_82223B8C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_82223B90:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223BA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82223bb8
	if (ctx.cr6.lt) goto loc_82223BB8;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82223bbc
	goto loc_82223BBC;
loc_82223BB8:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82223BBC:
	// lfs f0,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,364(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,368(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,372(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,376
	ctx.r5.s64 = r31.s64 + 376;
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f11,252(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x82222758
	ctx.lr = 0x82223BF8;
	sub_82222758(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223C04;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82223c18
	if (!ctx.cr6.eq) goto loc_82223C18;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82223c1c
	goto loc_82223C1C;
loc_82223C18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223C1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223e78
	if (ctx.cr0.eq) goto loc_82223E78;
	// lbz r30,80(r1)
	r30.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82223cc4
	if (ctx.cr0.eq) goto loc_82223CC4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223C3C;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82223C40;
	sub_8215F990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82223cc4
	if (!ctx.cr0.gt) goto loc_82223CC4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x82223C54;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82223C58;
	sub_8215F9E0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f26
	ctx.cr6.compare(ctx.f1.f64, f26.f64);
	// bne cr6,0x82223c68
	if (!ctx.cr6.eq) goto loc_82223C68;
	// fmr f29,f27
	f29.f64 = f27.f64;
loc_82223C68:
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ee668
	ctx.lr = 0x82223C78;
	sub_822EE668(ctx, base);
	// fcmpu cr6,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f28.f64);
	// li r7,1
	ctx.r7.s64 = 1;
	// beq cr6,0x82223c88
	if (ctx.cr6.eq) goto loc_82223C88;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82223C88:
	// lfs f0,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lfs f13,472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,476(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,480(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r31,484
	ctx.r5.s64 = r31.s64 + 484;
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x82222758
	ctx.lr = 0x82223CC4;
	sub_82222758(ctx, base);
loc_82223CC4:
	// subfic r11,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// bl 0x8215f338
	ctx.lr = 0x82223CE0;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82223CE4;
	sub_8215F990(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// bge cr6,0x82223d4c
	if (!ctx.cr6.lt) goto loc_82223D4C;
	// lwz r3,6140(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6140);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82223D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82223d18
	if (ctx.cr6.lt) goto loc_82223D18;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82223d1c
	goto loc_82223D1C;
loc_82223D18:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82223D1C:
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,580(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lfs f12,584(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,588(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 588);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x82223d98
	goto loc_82223D98;
loc_82223D4C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223D58;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x82223D5C;
	sub_8215F9E0(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ee668
	ctx.lr = 0x82223D68;
	sub_822EE668(ctx, base);
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,580(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lfs f12,584(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,588(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 588);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_82223D98:
	// cntlzw r11,r27
	ctx.r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// addi r5,r31,592
	ctx.r5.s64 = r31.s64 + 592;
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82222758
	ctx.lr = 0x82223DB0;
	sub_82222758(ctx, base);
	// lbz r11,792(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 792);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82223e74
	if (ctx.cr0.eq) goto loc_82223E74;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223DC8;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82223DCC;
	sub_8215F990(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// bge cr6,0x82223e14
	if (!ctx.cr6.lt) goto loc_82223E14;
	// lfs f0,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f13,688(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f12,692(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 692);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,696(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 696);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x82223E0C;
	sub_826A06D8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x82223e60
	goto loc_82223E60;
loc_82223E14:
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(r27.s32, 15, ctx.xer);
	// bge cr6,0x82223e24
	if (!ctx.cr6.lt) goto loc_82223E24;
	// lwz r3,0(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 0);
	// b 0x82223e28
	goto loc_82223E28;
loc_82223E24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82223E28:
	// lfs f0,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f13,688(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lfs f12,692(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 692);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f11,696(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 696);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f11,236(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x82223E5C;
	sub_826A06D8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82223E60:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,700
	ctx.r5.s64 = r31.s64 + 700;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82222758
	ctx.lr = 0x82223E74;
	sub_82222758(ctx, base);
loc_82223E74:
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82223E78:
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r26
	r27.u64 = r26.u64;
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// b 0x8222392c
	goto loc_8222392C;
loc_82223E8C:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82223eac
	if (!ctx.cr6.eq) goto loc_82223EAC;
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
	// b 0x82223eb0
	goto loc_82223EB0;
loc_82223EAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223EB0:
	// stw r11,972(r31)
	REX_STORE_U32(r31.u32 + 972, ctx.r11.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// addi r25,r9,-26796
	r25.s64 = ctx.r9.s64 + -26796;
	// addi r23,r10,-26744
	r23.s64 = ctx.r10.s64 + -26744;
	// addi r24,r11,-24740
	r24.s64 = ctx.r11.s64 + -24740;
loc_82223ED4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82223ef8
	if (!ctx.cr6.eq) goto loc_82223EF8;
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
	// b 0x82223efc
	goto loc_82223EFC;
loc_82223EF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223EFC:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82223fb8
	if (!ctx.cr6.lt) goto loc_82223FB8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x82223F10;
	sub_8215F1B0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223F1C;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82223f30
	if (!ctx.cr6.eq) goto loc_82223F30;
	// lbz r30,8(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82223f34
	goto loc_82223F34;
loc_82223F30:
	// li r30,0
	r30.s64 = 0;
loc_82223F34:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223F40;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82223f54
	if (!ctx.cr6.eq) goto loc_82223F54;
	// lbz r28,8(r3)
	r28.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82223f58
	goto loc_82223F58;
loc_82223F54:
	// li r28,0
	r28.s64 = 0;
loc_82223F58:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82223F64;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82223F68;
	sub_8215FA30(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq 0x82223f94
	if (ctx.cr0.eq) goto loc_82223F94;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223f94
	if (ctx.cr0.eq) goto loc_82223F94;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x8215f338
	ctx.lr = 0x82223F90;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82223F94;
	sub_8215F990(ctx, base);
loc_82223F94:
	// lwz r11,988(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 988);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r30,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, r30.u32);
	// lwz r11,988(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 988);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x82223ed4
	goto loc_82223ED4;
loc_82223FB8:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// addi r3,r31,796
	ctx.r3.s64 = r31.s64 + 796;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x82223FE0;
	sub_8226BF68(ctx, base);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cec
	ctx.lr = 0x82223FEC;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82264E90) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82264f40
	sub_82264F40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82264F38) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82265398
	sub_82265398(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82265780) {
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
	// addi r11,r11,-6816
	ctx.r11.s64 = ctx.r11.s64 + -6816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82120ac0
	ctx.lr = 0x822657B8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,30860
	ctx.r11.s64 = ctx.r11.s64 + 30860;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x822657d4
	if (ctx.cr0.eq) goto loc_822657D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822657D4;
	sub_8269CE98(ctx, base);
loc_822657D4:
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

DEFINE_REX_FUNC(sub_82268898) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822688A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x822f6280
	ctx.lr = 0x822688BC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8226892c
	if (ctx.cr0.eq) goto loc_8226892C;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r11,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r11,41(r10)
	REX_STORE_U8(ctx.r10.u32 + 41, ctx.r11.u8);
	// beq cr6,0x82268920
	if (ctx.cr6.eq) goto loc_82268920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213cf00
	ctx.lr = 0x82268900;
	sub_8213CF00(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
loc_82268920:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_8226892C:
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
	ctx.lr = 0x82268944;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8226E3F8) {
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
	ctx.lr = 0x8226E400;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r11,-7872
	r28.s64 = ctx.r11.s64 + -7872;
loc_8226E41C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8226e440
	if (!ctx.cr6.eq) goto loc_8226E440;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8226e444
	goto loc_8226E444;
loc_8226E440:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226E444:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226e484
	if (!ctx.cr6.lt) goto loc_8226E484;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8226E458;
	sub_8215F1B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8226E460;
	sub_8215F338(ctx, base);
	// bl 0x8215fab8
	ctx.lr = 0x8226E464;
	sub_8215FAB8(ctx, base);
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8226e478
	if (ctx.cr6.eq) goto loc_8226E478;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8226e41c
	goto loc_8226E41C;
loc_8226E478:
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226e488
	goto loc_8226E488;
loc_8226E484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226E488:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82270FD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13196
	ctx.r3.s64 = ctx.r11.s64 + -13196;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82271968) {
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
	// bl 0x82271f18
	ctx.lr = 0x82271984;
	sub_82271F18(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r3,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r3.u8);
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

DEFINE_REX_FUNC(sub_82273090) {
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
	ctx.lr = 0x82273098;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x822730B0;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82271e38
	ctx.lr = 0x822730B8;
	sub_82271E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,0
	r25.s64 = 0;
	// beq 0x82273220
	if (ctx.cr0.eq) goto loc_82273220;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82271f18
	ctx.lr = 0x822730CC;
	sub_82271F18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82273208
	if (ctx.cr0.eq) goto loc_82273208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272050
	ctx.lr = 0x822730DC;
	sub_82272050(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822731f8
	if (ctx.cr0.eq) goto loc_822731F8;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,652(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 652);
	// lwz r11,664(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 664);
	// addi r31,r30,648
	r31.s64 = r30.s64 + 648;
	// addi r28,r10,-26268
	r28.s64 = ctx.r10.s64 + -26268;
	// lwz r10,648(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 648);
	// li r26,-1
	r26.s64 = -1;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82273174
	if (!ctx.cr6.lt) goto loc_82273174;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82273438
	ctx.lr = 0x82273124;
	sub_82273438(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227312C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82273130;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120b20
	ctx.lr = 0x82273144;
	sub_82120B20(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822732cc
	if (!ctx.cr6.eq) goto loc_822732CC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227315C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82273160;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120b20
	ctx.lr = 0x82273174;
	sub_82120B20(ctx, base);
loc_82273174:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822732cc
	if (!ctx.cr6.eq) goto loc_822732CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r25
	r27.u64 = r25.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82273324
	if (!ctx.cr0.gt) goto loc_82273324;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_8227319C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x82273438
	ctx.lr = 0x822731A8;
	sub_82273438(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x822731B0;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822731B4;
	sub_8215FA30(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822731d4
	if (ctx.cr6.eq) goto loc_822731D4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120b20
	ctx.lr = 0x822731D4;
	sub_82120B20(ctx, base);
loc_822731D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8227319c
	if (ctx.cr6.lt) goto loc_8227319C;
	// b 0x822732c0
	goto loc_822732C0;
loc_822731F8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,25
	ctx.r5.s64 = 25;
	// addi r4,r11,-4188
	ctx.r4.s64 = ctx.r11.s64 + -4188;
	// b 0x82273214
	goto loc_82273214;
loc_82273208:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r11,-4160
	ctx.r4.s64 = ctx.r11.s64 + -4160;
loc_82273214:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120c08
	ctx.lr = 0x8227321C;
	sub_82120C08(ctx, base);
	// b 0x822732c0
	goto loc_822732C0;
loc_82273220:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82273238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82273324
	if (ctx.cr6.eq) goto loc_82273324;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-4140
	ctx.r5.s64 = ctx.r11.s64 + -4140;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82121610
	ctx.lr = 0x82273258;
	sub_82121610(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r25,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, r25.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82273270
	if (!ctx.cr6.lt) goto loc_82273270;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82273270:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82273274:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82273274
	if (!ctx.cr6.eq) goto loc_82273274;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x822732A0;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,-31008
	ctx.r3.s64 = ctx.r11.s64 + -31008;
	// bl 0x8216bc98
	ctx.lr = 0x822732B0;
	sub_8216BC98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x822732C0;
	sub_82120AC0(ctx, base);
loc_822732C0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82273324
	if (ctx.cr6.eq) goto loc_82273324;
loc_822732CC:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, r25.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x822732e4
	if (!ctx.cr6.lt) goto loc_822732E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_822732E4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822732E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822732e8
	if (!ctx.cr6.eq) goto loc_822732E8;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x82273314;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r11,31540
	ctx.r3.s64 = ctx.r11.s64 + 31540;
	// bl 0x8216bc98
	ctx.lr = 0x82273324;
	sub_8216BC98(ctx, base);
loc_82273324:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82273334;
	sub_82120AC0(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822862F0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x826a1e70
	ctx.lr = 0x8228631C;
	sub_826A1E70(ctx, base);
	// addi r4,r30,464
	ctx.r4.s64 = r30.s64 + 464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216d040
	ctx.lr = 0x82286328;
	sub_8216D040(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c3ec8
	ctx.lr = 0x82286334;
	sub_821C3EC8(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// ld r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// ld r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 48);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// ld r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_82289E88) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// stb r10,52(r11)
	REX_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// stw r9,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// bne cr6,0x82289ee4
	if (!ctx.cr6.eq) goto loc_82289EE4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r11,-11228
	ctx.r6.s64 = ctx.r11.s64 + -11228;
	// addi r5,r10,-26948
	ctx.r5.s64 = ctx.r10.s64 + -26948;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x82289EDC;
	sub_82288100(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82289f88
	goto loc_82289F88;
loc_82289EE4:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82289f18
	if (!ctx.cr6.eq) goto loc_82289F18;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r11,-11340
	ctx.r6.s64 = ctx.r11.s64 + -11340;
	// addi r5,r10,-26948
	ctx.r5.s64 = ctx.r10.s64 + -26948;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x82289F10;
	sub_82288100(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82289f88
	goto loc_82289F88;
loc_82289F18:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82289f34
	if (!ctx.cr6.eq) goto loc_82289F34;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r6,r11,-11368
	ctx.r6.s64 = ctx.r11.s64 + -11368;
	// addi r5,r10,-26948
	ctx.r5.s64 = ctx.r10.s64 + -26948;
	// b 0x82289f70
	goto loc_82289F70;
loc_82289F34:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// addi r5,r10,-26252
	ctx.r5.s64 = ctx.r10.s64 + -26252;
	// bne cr6,0x82289f68
	if (!ctx.cr6.eq) goto loc_82289F68;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,-11208
	ctx.r6.s64 = ctx.r11.s64 + -11208;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x82289F60;
	sub_82288100(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82289f88
	goto loc_82289F88;
loc_82289F68:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-11184
	ctx.r6.s64 = ctx.r11.s64 + -11184;
loc_82289F70:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x82289F84;
	sub_82288100(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
loc_82289F88:
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8228DAF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8228DAF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6212(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228DB18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8228db94
	if (ctx.cr6.eq) goto loc_8228DB94;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bne cr6,0x8228db8c
	if (!ctx.cr6.eq) goto loc_8228DB8C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8228db8c
	if (!ctx.cr6.lt) goto loc_8228DB8C;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
loc_8228DB44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8228ca78
	ctx.lr = 0x8228DB50;
	sub_8228CA78(ctx, base);
	// lwz r11,6212(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6212);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// lwz r11,64(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228DB74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8228db94
	if (ctx.cr6.eq) goto loc_8228DB94;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8228db44
	if (ctx.cr6.eq) goto loc_8228DB44;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8228db90
	goto loc_8228DB90;
loc_8228DB8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228DB90:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8228DB94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822921F0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x822921F8;
	// stfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f30.u64);
	// stfd f31,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// li r17,1
	r17.s64 = 1;
	// li r3,512
	ctx.r3.s64 = 512;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
	// mr r25,r17
	r25.u64 = r17.u64;
	// li r30,126
	r30.s64 = 126;
	// bl 0x822c1a70
	ctx.lr = 0x82292238;
	sub_822C1A70(ctx, base);
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r17,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r17.u8);
	// li r22,128
	r22.s64 = 128;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r22,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82292258:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82292268
	if (ctx.cr6.eq) goto loc_82292268;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82292268:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82292258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82292258;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r26,128
	r26.s64 = 128;
	// li r27,4
	r27.s64 = 4;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// lis r16,-32126
	r16.s64 = -2105409536;
	// lis r18,-32106
	r18.s64 = -2104098816;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82292298:
	// addi r27,r27,-4
	r27.s64 = r27.s64 + -4;
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f11,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfs f10,4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwzx r31,r28,r27
	r31.u64 = REX_LOAD_U32(r28.u32 + r27.u32);
	// lfs f9,8(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lwz r5,0(r19)
	ctx.r5.u64 = REX_LOAD_U32(r19.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r7,4(r19)
	ctx.r7.u64 = REX_LOAD_U32(r19.u32 + 4);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f8,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f7,4(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// lfs f6,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f6,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r29,8(r11)
	r29.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// std r29,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r29.u64);
	// lfs f0,0(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// lfsx f10,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// lfsx f11,r7,r3
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f6,4(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fmuls f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82292440
	if (ctx.cr6.gt) goto loc_82292440;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82292440
	if (ctx.cr6.gt) goto loc_82292440;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822923b8
	if (!ctx.cr6.gt) goto loc_822923B8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_822923B8:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x822923c4
	if (!ctx.cr6.lt) goto loc_822923C4;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_822923C4:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lfs f0,8(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,8(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lfsx f10,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82292440
	if (ctx.cr6.gt) goto loc_82292440;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82292440
	if (ctx.cr6.gt) goto loc_82292440;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82292414
	if (!ctx.cr6.gt) goto loc_82292414;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82292414:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82292420
	if (!ctx.cr6.lt) goto loc_82292420;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
loc_82292420:
	// fcmpu cr6,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x82292434
	if (!ctx.cr6.lt) goto loc_82292434;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bgt cr6,0x82292438
	if (ctx.cr6.gt) goto loc_82292438;
loc_82292434:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82292438:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82292444
	goto loc_82292444;
loc_82292440:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82292444:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82292564
	if (ctx.cr0.eq) goto loc_82292564;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229254c
	if (ctx.cr6.eq) goto loc_8229254C;
	// cmpw cr6,r25,r30
	ctx.cr6.compare<int32_t>(r25.s32, r30.s32, ctx.xer);
	// ble cr6,0x8229252c
	if (!ctx.cr6.gt) goto loc_8229252C;
	// rlwinm r29,r26,1,0,30
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(r29.s32, r26.s32, ctx.xer);
	// ble cr6,0x82292520
	if (!ctx.cr6.gt) goto loc_82292520;
	// cmpw cr6,r22,r29
	ctx.cr6.compare<int32_t>(r22.s32, r29.s32, ctx.xer);
	// bge cr6,0x822924f0
	if (!ctx.cr6.lt) goto loc_822924F0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8229248c
	if (ctx.cr6.eq) goto loc_8229248C;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x82292484;
	sub_822C1A70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82292490
	goto loc_82292490;
loc_8229248C:
	// li r30,0
	r30.s64 = 0;
loc_82292490:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x822924bc
	if (!ctx.cr6.gt) goto loc_822924BC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r10,r30,r28
	ctx.r10.u64 = r28.u64 - r30.u64;
loc_822924A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822924b4
	if (ctx.cr6.eq) goto loc_822924B4;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822924B4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822924a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822924A4;
loc_822924BC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822924e0
	if (ctx.cr6.eq) goto loc_822924E0;
	// lwz r11,112(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 112);
	// lwz r10,-19400(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -4);
	// stw r11,112(r18)
	REX_STORE_U32(r18.u32 + 112, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822924E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822924E0:
	// mr r22,r29
	r22.u64 = r29.u64;
	// stb r17,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r17.u8);
	// mr r28,r30
	r28.u64 = r30.u64;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r29.u32);
loc_822924F0:
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(r26.s32, r29.s32, ctx.xer);
	// bge cr6,0x82292520
	if (!ctx.cr6.lt) goto loc_82292520;
	// subf r10,r26,r29
	ctx.r10.u64 = r29.u64 - r26.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82292508:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292518
	if (ctx.cr6.eq) goto loc_82292518;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82292518:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82292508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82292508;
loc_82292520:
	// mr r26,r29
	r26.u64 = r29.u64;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// addi r30,r29,-2
	r30.s64 = r29.s64 + -2;
loc_8229252C:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r27,4
	ctx.r11.s64 = r27.s64 + 4;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// stwx r10,r28,r27
	REX_STORE_U32(r28.u32 + r27.u32, ctx.r10.u32);
	// addi r27,r11,4
	r27.s64 = ctx.r11.s64 + 4;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stwx r10,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x82292564
	goto loc_82292564;
loc_8229254C:
	// lwz r3,0(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 0);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82292564:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x82292298
	if (!ctx.cr6.eq) goto loc_82292298;
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821eced8
	ctx.lr = 0x82292578;
	sub_821ECED8(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_822B8188) {
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
	ctx.lr = 0x822B8198;
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
	// blt cr6,0x822b8268
	if (ctx.cr6.lt) goto loc_822B8268;
	// lfs f12,128(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x822b8274
	if (!ctx.cr6.gt) goto loc_822B8274;
loc_822B8268:
	// stfs f12,84(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 84, temp.u32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// b 0x822b8278
	goto loc_822B8278;
loc_822B8274:
	// stfs f11,84(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + 84, temp.u32);
loc_822B8278:
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
	// beq cr6,0x822b8334
	if (ctx.cr6.eq) goto loc_822B8334;
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
loc_822B8334:
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
	// beq cr6,0x822b83f4
	if (ctx.cr6.eq) goto loc_822B83F4;
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
loc_822B83F4:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cf0
	ctx.lr = 0x822B83FC;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9B30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822C9B38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r29,r4,24
	r29.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822c9b60
	if (!ctx.cr0.eq) goto loc_822C9B60;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-25568
	ctx.r6.s64 = ctx.r11.s64 + -25568;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x826a0028
	ctx.lr = 0x822C9B60;
	sub_826A0028(ctx, base);
loc_822C9B60:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x822c9c00
	if (!ctx.cr6.gt) goto loc_822C9C00;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_822C9B94:
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r9,12,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xF;
	// lbzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x822c9be8
	if (!ctx.cr6.eq) goto loc_822C9BE8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822c9bbc
	if (ctx.cr6.eq) goto loc_822C9BBC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x822c9bc4
	goto loc_822C9BC4;
loc_822C9BBC:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_822C9BC4:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// bge cr6,0x822c9bd8
	if (!ctx.cr6.lt) goto loc_822C9BD8;
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
loc_822C9BD8:
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x822c9be8
	if (!ctx.cr6.lt) goto loc_822C9BE8;
	// slw r11,r3,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 | ctx.r5.u64;
loc_822C9BE8:
	// rlwimi r9,r10,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c9b94
	if (ctx.cr6.lt) goto loc_822C9B94;
loc_822C9C00:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822c9c14
	if (!ctx.cr6.eq) goto loc_822C9C14;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822c9c14
	if (ctx.cr6.eq) goto loc_822C9C14;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C9C14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822CEFF0) {
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
	ctx.lr = 0x822CEFF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822cf080
	if (!ctx.cr6.gt) goto loc_822CF080;
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822cf02c
	if (!ctx.cr6.lt) goto loc_822CF02C;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822CF02C:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x822CF038;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822cf050
	if (!ctx.cr0.eq) goto loc_822CF050;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x822cf0ac
	goto loc_822CF0AC;
loc_822CF050:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf07c
	if (ctx.cr6.eq) goto loc_822CF07C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x822CF070;
	sub_826A1E70(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x822CF07C;
	sub_823F0350(ctx, base);
loc_822CF07C:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_822CF080:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822cf0ac
	if (ctx.cr6.lt) goto loc_822CF0AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822CF0AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822D5FD8) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d6004
	if (!ctx.cr6.gt) goto loc_822D6004;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D6004;
	sub_822D5B28(ctx, base);
loc_822D6004:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r4,10908(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x822d6034
	if (ctx.cr6.eq) goto loc_822D6034;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5c28
	ctx.lr = 0x822D6034;
	sub_822D5C28(ctx, base);
loc_822D6034:
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d6034
	if (!ctx.cr6.eq) goto loc_822D6034;
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

DEFINE_REX_FUNC(sub_822D9E48) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82793df4
	ctx.lr = 0x822D9E5C;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d9e94
	if (ctx.cr6.eq) goto loc_822D9E94;
	// lwz r10,24200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24200);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d9e94
	if (ctx.cr6.eq) goto loc_822D9E94;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,24196(r11)
	REX_STORE_U32(ctx.r11.u32 + 24196, ctx.r10.u32);
	// lwsync 
	// lwz r11,24200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24200);
	// li r10,-1
	ctx.r10.s64 = -1;
	// std r10,544(r11)
	REX_STORE_U64(ctx.r11.u32 + 544, ctx.r10.u64);
loc_822D9E94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DC2C8) {
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
	ctx.lr = 0x822DC2D0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// rlwinm. r11,r10,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822dc400
	if (!ctx.cr0.eq) goto loc_822DC400;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822dc300
	if (ctx.cr6.eq) goto loc_822DC300;
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822dc400
	if (!ctx.cr0.eq) goto loc_822DC400;
loc_822DC300:
	// rlwinm r26,r10,27,27,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	// beq cr6,0x822dc344
	if (ctx.cr6.eq) goto loc_822DC344;
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// addi r28,r6,32
	r28.s64 = ctx.r6.s64 + 32;
	// clrlwi. r24,r11,27
	r24.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// rlwinm r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// beq 0x822dc350
	if (ctx.cr0.eq) goto loc_822DC350;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// b 0x822dc350
	goto loc_822DC350;
loc_822DC344:
	// li r28,0
	r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r24,0
	r24.s64 = 0;
loc_822DC350:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dc3cc
	if (ctx.cr6.eq) goto loc_822DC3CC;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_822DC35C:
	// lbz r27,3(r28)
	r27.u64 = REX_LOAD_U8(r28.u32 + 3);
	// b 0x822dc388
	goto loc_822DC388;
loc_822DC364:
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bge cr6,0x822dc390
	if (!ctx.cr6.lt) goto loc_822DC390;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dc140
	ctx.lr = 0x822DC380;
	sub_822DC140(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822DC388:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// blt cr6,0x822dc364
	if (ctx.cr6.lt) goto loc_822DC364;
loc_822DC390:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dc3b8
	if (ctx.cr0.eq) goto loc_822DC3B8;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dc210
	ctx.lr = 0x822DC3B8;
	sub_822DC210(ctx, base);
loc_822DC3B8:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x822dc35c
	if (!ctx.cr0.eq) goto loc_822DC35C;
loc_822DC3CC:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// bge cr6,0x822dc3f4
	if (!ctx.cr6.lt) goto loc_822DC3F4;
	// subf r29,r29,r26
	r29.u64 = r26.u64 - r29.u64;
loc_822DC3D8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dc140
	ctx.lr = 0x822DC3E8;
	sub_822DC140(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x822dc3d8
	if (!ctx.cr0.eq) goto loc_822DC3D8;
loc_822DC3F4:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwimi r11,r24,20,8,11
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 20) & 0xF00000) | (ctx.r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
loc_822DC400:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822E61A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822E61A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mftb r30
	r30.u64 = REX_QUERY_TIMEBASE();
	// bl 0x822e6268
	ctx.lr = 0x822E61B8;
	sub_822E6268(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e61ec
	if (!ctx.cr6.eq) goto loc_822E61EC;
loc_822E61C0:
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// subf r29,r30,r11
	r29.u64 = ctx.r11.u64 - r30.u64;
	// bl 0x82793944
	ctx.lr = 0x822E61CC;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rldicl r10,r3,61,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// cmpld cr6,r29,r10
	ctx.cr6.compare<uint64_t>(r29.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x822e61f8
	if (ctx.cr6.gt) goto loc_822E61F8;
	// db16cyc 
	std::this_thread::yield();
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6268
	ctx.lr = 0x822E61E4;
	sub_822E6268(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e61c0
	if (ctx.cr6.eq) goto loc_822E61C0;
loc_822E61EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_822E61F8:
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// li r30,0
	r30.s64 = 0;
	// ori r10,r11,6148
	ctx.r10.u64 = ctx.r11.u64 | 6148;
	// stwx r30,0,r10
	REX_MM_STORE_U32(ctx.r10.u32, r30.u32);
	// eieio 
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// ori r7,r9,6148
	ctx.r7.u64 = ctx.r9.u64 | 6148;
	// stwx r8,0,r7
	REX_MM_STORE_U32(ctx.r7.u32, ctx.r8.u32);
	// eieio 
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6268
	ctx.lr = 0x822E6228;
	sub_822E6268(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ble cr6,0x822e6250
	if (!ctx.cr6.gt) goto loc_822E6250;
loc_822E6234:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6720
	ctx.lr = 0x822E6240;
	sub_822E6720(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e6234
	if (ctx.cr6.lt) goto loc_822E6234;
loc_822E6250:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// oris r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 524288;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822E9818) {
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
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822e6f28
	ctx.lr = 0x822E983C;
	sub_822E6F28(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822E984C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x822E9854;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e9864
	if (ctx.cr0.eq) goto loc_822E9864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822E9864;
	sub_8269CE98(ctx, base);
loc_822E9864:
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

DEFINE_REX_FUNC(sub_822EC410) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822EC418;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// bl 0x822e8048
	ctx.lr = 0x822EC42C;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,260
	r30.s64 = r31.s64 + 260;
	// addi r11,r11,14684
	ctx.r11.s64 = ctx.r11.s64 + 14684;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822EC44C;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x822EC454;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822ec484
	if (ctx.cr0.eq) goto loc_822EC484;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29032
	ctx.r4.s64 = ctx.r11.s64 + -29032;
	// bl 0x82120600
	ctx.lr = 0x822EC46C;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x822EC480;
	sub_821BF110(ctx, base);
	// b 0x822ec488
	goto loc_822EC488;
loc_822EC484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EC488:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x822EC498;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ec4b0
	if (ctx.cr0.eq) goto loc_822EC4B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x822EC4B0;
	sub_82120AC0(ctx, base);
loc_822EC4B0:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822EC4B8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822ec538
	if (ctx.cr0.eq) goto loc_822EC538;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8216b9a8
	ctx.lr = 0x822EC4D0;
	sub_8216B9A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,2960
	ctx.r4.s64 = ctx.r11.s64 + 2960;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822EC4E8;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x822EC4FC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ec528
	if (ctx.cr0.eq) goto loc_822EC528;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-15008
	ctx.r10.s64 = ctx.r10.s64 + -15008;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822ec52c
	goto loc_822EC52C;
loc_822EC528:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EC52C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x822ec53c
	goto loc_822EC53C;
loc_822EC538:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822EC53C:
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
	ctx.lr = 0x822EC554;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822F3F10) {
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
	ctx.lr = 0x822F3F18;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8400(r1)
	ea = -8400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lwz r10,8484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 8484);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822f3f74
	if (ctx.cr6.eq) goto loc_822F3F74;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x822f3f64
	if (!ctx.cr6.eq) goto loc_822F3F64;
	// li r31,8
	r31.s64 = 8;
	// b 0x822f3f74
	goto loc_822F3F74;
loc_822F3F64:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822f3f74
	if (ctx.cr6.eq) goto loc_822F3F74;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822F3F74:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3f80
	if (ctx.cr0.eq) goto loc_822F3F80;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_822F3F80:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3f8c
	if (ctx.cr0.eq) goto loc_822F3F8C;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_822F3F8C:
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3f98
	if (ctx.cr0.eq) goto loc_822F3F98;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
loc_822F3F98:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3fa4
	if (ctx.cr0.eq) goto loc_822F3FA4;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
loc_822F3FA4:
	// rlwinm. r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3fb0
	if (ctx.cr0.eq) goto loc_822F3FB0;
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
loc_822F3FB0:
	// rlwinm. r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3fbc
	if (ctx.cr0.eq) goto loc_822F3FBC;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
loc_822F3FBC:
	// rlwinm. r11,r10,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3fc8
	if (ctx.cr0.eq) goto loc_822F3FC8;
	// ori r31,r31,256
	r31.u64 = r31.u64 | 256;
loc_822F3FC8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f401c
	if (ctx.cr6.lt) goto loc_822F401C;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826a2e60
	ctx.lr = 0x822F3FE0;
	sub_826A2E60(ctx, base);
	// lwz r11,8492(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 8492);
	// lwz r10,8500(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 8500);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r26,8304(r1)
	REX_STORE_U32(ctx.r1.u32 + 8304, r26.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// stw r25,8308(r1)
	REX_STORE_U32(ctx.r1.u32 + 8308, r25.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stb r9,8313(r1)
	REX_STORE_U8(ctx.r1.u32 + 8313, ctx.r9.u8);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,8296(r1)
	REX_STORE_U32(ctx.r1.u32 + 8296, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r10,8300(r1)
	REX_STORE_U32(ctx.r1.u32 + 8300, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f37d8
	ctx.lr = 0x822F401C;
	sub_822F37D8(ctx, base);
loc_822F401C:
	// addi r1,r1,8400
	ctx.r1.s64 = ctx.r1.s64 + 8400;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822FAAF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fab04
	if (ctx.cr6.eq) goto loc_822FAB04;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fab08
	goto loc_822FAB08;
loc_822FAB04:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FAB08:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fab28
	if (ctx.cr6.eq) goto loc_822FAB28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fab20
	if (ctx.cr6.eq) goto loc_822FAB20;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fab2c
	goto loc_822FAB2C;
loc_822FAB20:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822fab2c
	goto loc_822FAB2C;
loc_822FAB28:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822FAB2C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822fab3c
	if (!ctx.cr6.eq) goto loc_822FAB3C;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FAB3C:
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FBD38) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// rlwinm r11,r3,15,17,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x7FFC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r9,r3,20,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0x7F;
	// rlwinm r4,r3,24,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// lwz r10,-10820(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -10820);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,68(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822fbd7c
	if (ctx.cr6.eq) goto loc_822FBD7C;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,168(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822fbd90
	if (ctx.cr6.eq) goto loc_822FBD90;
	// blt cr6,0x822fbd84
	if (ctx.cr6.lt) goto loc_822FBD84;
loc_822FBD7C:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_822FBD84:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_822FBD90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fbd7c
	if (ctx.cr6.eq) goto loc_822FBD7C;
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fbdac
	if (ctx.cr6.eq) goto loc_822FBDAC;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x822fbdb0
	goto loc_822FBDB0;
loc_822FBDAC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FBDB0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822fbd7c
	if (!ctx.cr6.eq) goto loc_822FBD7C;
	// lwz r3,312(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822FFA80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ffa90
	if (!ctx.cr6.eq) goto loc_822FFA90;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FFA90:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FFCF0) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ffd20
	if (!ctx.cr6.eq) goto loc_822FFD20;
loc_822FFD18:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x822ffdb4
	goto loc_822FFDB4;
loc_822FFD20:
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ffd34
	if (ctx.cr6.eq) goto loc_822FFD34;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822ffd38
	goto loc_822FFD38;
loc_822FFD34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FFD38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ffd54
	if (!ctx.cr6.eq) goto loc_822FFD54;
	// li r6,64
	ctx.r6.s64 = 64;
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x822FFD54;
	sub_82331A00(ctx, base);
loc_822FFD54:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ffd80
	if (ctx.cr6.eq) goto loc_822FFD80;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FFD78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ffdb4
	if (!ctx.cr0.eq) goto loc_822FFDB4;
loc_822FFD80:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ffdb0
	if (ctx.cr6.eq) goto loc_822FFDB0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ffd18
	if (ctx.cr6.eq) goto loc_822FFD18;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x822FFDB0;
	sub_82331A00(ctx, base);
loc_822FFDB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FFDB4:
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

DEFINE_REX_FUNC(sub_82304D50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82304D58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82304dd4
	if (ctx.cr6.eq) goto loc_82304DD4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82304dd4
	if (ctx.cr6.eq) goto loc_82304DD4;
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82304d8c
	if (!ctx.cr6.eq) goto loc_82304D8C;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x82304dd8
	goto loc_82304DD8;
loc_82304D8C:
	// bl 0x823150e0
	ctx.lr = 0x82304D90;
	sub_823150E0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82304da0
	if (!ctx.cr0.eq) goto loc_82304DA0;
	// li r3,91
	ctx.r3.s64 = 91;
	// b 0x82304dd8
	goto loc_82304DD8;
loc_82304DA0:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// beq 0x82304dc8
	if (ctx.cr0.eq) goto loc_82304DC8;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82303ea8
	ctx.lr = 0x82304DBC;
	sub_82303EA8(ctx, base);
loc_82304DBC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82304dd8
	if (!ctx.cr0.eq) goto loc_82304DD8;
	// b 0x82304dd8
	goto loc_82304DD8;
loc_82304DC8:
	// lwz r3,40(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x8230a640
	ctx.lr = 0x82304DD0;
	sub_8230A640(ctx, base);
	// b 0x82304dbc
	goto loc_82304DBC;
loc_82304DD4:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82304DD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8230C3A0) {
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
	ctx.lr = 0x8230C3A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8230c3c8
	if (!ctx.cr6.eq) goto loc_8230C3C8;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x8230c508
	goto loc_8230C508;
loc_8230C3C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwinm. r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c3e4
	if (ctx.cr0.eq) goto loc_8230C3E4;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// b 0x8230c4dc
	goto loc_8230C4DC;
loc_8230C3E4:
	// addic. r25,r28,44
	ctx.xer.ca = r28.u32 > 4294967251;
	r25.s64 = r28.s64 + 44;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r10,r28,48
	ctx.r10.s64 = r28.s64 + 48;
	// bne 0x8230c3f4
	if (!ctx.cr0.eq) goto loc_8230C3F4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8230C3F4:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// addi r27,r28,48
	r27.s64 = r28.s64 + 48;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8230c40c
	if (!ctx.cr6.eq) goto loc_8230C40C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230c508
	goto loc_8230C508;
loc_8230C40C:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_8230C410:
	// subfic r11,r25,0
	ctx.xer.ca = r25.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r25.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & r27.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230c4e8
	if (ctx.cr6.eq) goto loc_8230C4E8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r31,r29,-4
	r31.s64 = r29.s64 + -4;
	// bne cr6,0x8230c434
	if (!ctx.cr6.eq) goto loc_8230C434;
	// li r31,0
	r31.s64 = 0;
loc_8230C434:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r30,r11,0,25,28
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x78;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// beq cr6,0x8230c464
	if (ctx.cr6.eq) goto loc_8230C464;
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c454
	if (ctx.cr0.eq) goto loc_8230C454;
	// rlwinm. r11,r26,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230c464
	if (!ctx.cr0.eq) goto loc_8230C464;
loc_8230C454:
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c4c0
	if (ctx.cr0.eq) goto loc_8230C4C0;
	// rlwinm. r11,r26,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c4c0
	if (ctx.cr0.eq) goto loc_8230C4C0;
loc_8230C464:
	// lbz r11,17(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8230c4c0
	if (!ctx.cr0.eq) goto loc_8230C4C0;
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230c4d0
	if (ctx.cr0.eq) goto loc_8230C4D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x8233fae8
	ctx.lr = 0x8230C484;
	sub_8233FAE8(ctx, base);
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// beq cr6,0x8230c4c0
	if (ctx.cr6.eq) goto loc_8230C4C0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230c508
	if (!ctx.cr6.eq) goto loc_8230C508;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// xor r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 ^ r26.u64;
	// rlwinm. r10,r10,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8230c4d0
	if (ctx.cr0.eq) goto loc_8230C4D0;
	// rlwimi r11,r30,0,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8233fa68
	ctx.lr = 0x8230C4B8;
	sub_8233FA68(ctx, base);
	// cmpwi cr6,r3,56
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 56, ctx.xer);
	// bne cr6,0x8230c4c8
	if (!ctx.cr6.eq) goto loc_8230C4C8;
loc_8230C4C0:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8230c410
	goto loc_8230C410;
loc_8230C4C8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8230c508
	if (!ctx.cr6.eq) goto loc_8230C508;
loc_8230C4D0:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stb r10,17(r31)
	REX_STORE_U8(r31.u32 + 17, ctx.r10.u8);
loc_8230C4DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// b 0x8230c508
	goto loc_8230C508;
loc_8230C4E8:
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 80);
	// li r10,79
	ctx.r10.s64 = 79;
	// lwz r9,72(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 72);
	// xoris r8,r11,32768
	ctx.r8.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addc r11,r11,r8
	ctx.xer.ca = ctx.r11.u32 + ctx.r8.u32 < ctx.r11.u32;
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8230C508:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82316098) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823160A0;
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
	// cmpld cr6,r5,r6
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, ctx.xer);
	// ble cr6,0x823160c4
	if (!ctx.cr6.gt) goto loc_823160C4;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8231611c
	goto loc_8231611C;
loc_823160C4:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823160d8
	if (ctx.cr6.eq) goto loc_823160D8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82316118
	if (!ctx.cr6.eq) goto loc_82316118;
loc_823160D8:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82315c38
	ctx.lr = 0x823160EC;
	sub_82315C38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231611c
	if (!ctx.cr0.eq) goto loc_8231611C;
	// ld r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 24);
	// subf r11,r29,r28
	ctx.r11.u64 = r28.u64 - r29.u64;
	// ld r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 32);
	// subf r9,r30,r10
	ctx.r9.u64 = ctx.r10.u64 - r30.u64;
	// subf r10,r30,r8
	ctx.r10.u64 = ctx.r8.u64 - r30.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r9.u64);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
loc_82316118:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231611C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823192C8) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823192f0
	if (ctx.cr6.eq) goto loc_823192F0;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x823150e0
	ctx.lr = 0x823192EC;
	sub_823150E0(ctx, base);
	// b 0x823192f4
	goto loc_823192F4;
loc_823192F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823192F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231A9E0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8231ab08
	sub_8231AB08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231AAB8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,5936
	ctx.r11.s64 = ctx.r11.s64 + 5936;
	// addi r10,r10,6132
	ctx.r10.s64 = ctx.r10.s64 + 6132;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x8231aaf0
	if (ctx.cr0.eq) goto loc_8231AAF0;
	// bl 0x8269ce98
	ctx.lr = 0x8231AAF0;
	sub_8269CE98(ctx, base);
loc_8231AAF0:
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

DEFINE_REX_FUNC(sub_8231EAB0) {
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
	ctx.lr = 0x8231EAB8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231eb40
	if (ctx.cr6.eq) goto loc_8231EB40;
	// lwz r27,4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8231EAE8:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8231eafc
	if (!ctx.cr6.eq) goto loc_8231EAFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231EAFC:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8231eb40
	if (ctx.cr6.eq) goto loc_8231EB40;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// addi r6,r27,-4
	ctx.r6.s64 = r27.s64 + -4;
	// bne cr6,0x8231eb14
	if (!ctx.cr6.eq) goto loc_8231EB14;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8231EB14:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8231eab0
	ctx.lr = 0x8231EB30;
	sub_8231EAB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231ebdc
	if (!ctx.cr0.eq) goto loc_8231EBDC;
	// lwz r27,0(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 0);
	// b 0x8231eae8
	goto loc_8231EAE8;
loc_8231EB40:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8231eb74
	if (!ctx.cr6.gt) goto loc_8231EB74;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8231EB54:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// beq cr6,0x8231eb74
	if (ctx.cr6.eq) goto loc_8231EB74;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8231eb54
	if (ctx.cr6.lt) goto loc_8231EB54;
loc_8231EB74:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8231ebd8
	if (!ctx.cr6.eq) goto loc_8231EBD8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,52
	ctx.r9.s64 = r30.s64 + 52;
	// stwx r30,r11,r28
	REX_STORE_U32(ctx.r11.u32 + r28.u32, r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// b 0x8231ebd0
	goto loc_8231EBD0;
loc_8231EB9C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// bne cr6,0x8231ebac
	if (!ctx.cr6.eq) goto loc_8231EBAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231EBAC:
	// lwz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r25
	REX_STORE_U32(ctx.r8.u32 + r25.u32, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bge cr6,0x8231ebe4
	if (!ctx.cr6.lt) goto loc_8231EBE4;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_8231EBD0:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8231eb9c
	if (!ctx.cr6.eq) goto loc_8231EB9C;
loc_8231EBD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231EBDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_8231EBE4:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231ebdc
	goto loc_8231EBDC;
}

DEFINE_REX_FUNC(sub_82329268) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82329360
	if (ctx.cr6.eq) goto loc_82329360;
	// lbz r9,1(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82329360
	if (ctx.cr0.eq) goto loc_82329360;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82329360
	if (ctx.cr0.eq) goto loc_82329360;
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82329360
	if (ctx.cr6.lt) goto loc_82329360;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lwz r8,32(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// std r10,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,5916(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5916);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lfs f13,3712(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3712);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3720(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fadds f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fctidz f12,f11
	ctx.f12.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f12,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f12.u64);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// ld r10,-8(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// ld r9,-8(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// divdu r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 ? ctx.r11.u64 / ctx.r9.u64 : 0;
	// mulld r8,r8,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// subf r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	// divdu r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 ? ctx.r11.u64 / ctx.r9.u64 : 0;
	// divdu r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 ? ctx.r8.u64 / ctx.r10.u64 : 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdllei r9,0
	if (ctx.r9.s64 == 0ll || ctx.r9.u64 < 0ull) ppc_trap(ctx, base, 0);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82329360:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232FE48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8235ace0
	ctx.lr = 0x8232FE6C;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232fe90
	if (!ctx.cr6.eq) goto loc_8232FE90;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FE90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232FE90:
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

DEFINE_REX_FUNC(sub_823343F8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82334408
	if (ctx.cr6.eq) goto loc_82334408;
	// lbz r11,26164(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 26164);
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_82334408:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823350E8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82335114
	if (!ctx.cr6.eq) goto loc_82335114;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82335114:
	// addi r4,r3,26168
	ctx.r4.s64 = ctx.r3.s64 + 26168;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82335124;
	sub_823EF2F8(ctx, base);
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

DEFINE_REX_FUNC(sub_8233E200) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x823ee100
	ctx.lr = 0x8233E228;
	sub_823EE100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233e23c
	if (!ctx.cr6.eq) goto loc_8233E23C;
	// bl 0x823ee280
	ctx.lr = 0x8233E234;
	sub_823EE280(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x8233e258
	goto loc_8233E258;
loc_8233E23C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,22
	ctx.r10.s64 = 22;
	// subf r9,r11,r31
	ctx.r9.u64 = r31.u64 - ctx.r11.u64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
loc_8233E258:
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

DEFINE_REX_FUNC(sub_8233F2B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8234aac0
	ctx.lr = 0x8233F2D4;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233f304
	if (ctx.cr6.eq) goto loc_8233F304;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233f310
	if (ctx.cr6.eq) goto loc_8233F310;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
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
loc_8233F304:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234d560
	ctx.lr = 0x8233F310;
	sub_8234D560(ctx, base);
loc_8233F310:
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

DEFINE_REX_FUNC(sub_82341948) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x823537f0
	sub_823537F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82341F30) {
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
	ctx.lr = 0x82341F38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8233e7e0
	ctx.lr = 0x82341F58;
	sub_8233E7E0(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r10,r11,1164
	ctx.r10.s64 = ctx.r11.s64 + 1164;
	// lwz r31,1164(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1164);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82341f84
	if (ctx.cr6.eq) goto loc_82341F84;
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 324);
	// mr r28,r31
	r28.u64 = r31.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x82341F78;
	sub_8233E7E0(ctx, base);
	// lwz r3,324(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 324);
	// li r29,1
	r29.s64 = 1;
	// bl 0x8233e820
	ctx.lr = 0x82341F84;
	sub_8233E820(ctx, base);
loc_82341F84:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8233e820
	ctx.lr = 0x82341F90;
	sub_8233E820(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234200c
	if (!ctx.cr6.eq) goto loc_8234200C;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,9336
	ctx.r5.s64 = ctx.r10.s64 + 9336;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,646
	ctx.r6.s64 = 646;
	// li r4,344
	ctx.r4.s64 = 344;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82341FC0;
	sub_82330A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341fd8
	if (ctx.cr6.eq) goto loc_82341FD8;
	// bl 0x82341d70
	ctx.lr = 0x82341FCC;
	sub_82341D70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82341fe4
	if (!ctx.cr6.eq) goto loc_82341FE4;
loc_82341FD8:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82341FE4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82341ff4
	if (ctx.cr6.eq) goto loc_82341FF4;
	// lwz r5,192(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 192);
	// b 0x82341ff8
	goto loc_82341FF8;
loc_82341FF4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82341FF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82341e58
	ctx.lr = 0x82342004;
	sub_82341E58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82342020
	if (!ctx.cr6.eq) goto loc_82342020;
loc_8234200C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8234201c
	if (ctx.cr6.eq) goto loc_8234201C;
	// lwz r11,216(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 216);
	// stw r28,520(r11)
	REX_STORE_U32(ctx.r11.u32 + 520, r28.u32);
loc_8234201C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82342020:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8234BD90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234bda0
	if (!ctx.cr6.eq) goto loc_8234BDA0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234BDA0:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234bdb4
	if (!ctx.cr6.eq) goto loc_8234BDB4;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234BDB4:
	// lfs f0,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234CCD0) {
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
	ctx.lr = 0x8234CCD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,76
	r30.s64 = ctx.r3.s64 + 76;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234cd00
	if (!ctx.cr6.eq) goto loc_8234CD00;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8234CD00:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234cd1c
	if (!ctx.cr6.eq) goto loc_8234CD1C;
	// li r3,49
	ctx.r3.s64 = 49;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8234CD1C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234cd78
	if (ctx.cr6.eq) goto loc_8234CD78;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,300(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8234cd54
	if (!ctx.cr6.eq) goto loc_8234CD54;
	// lfs f0,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8234cd54
	if (!ctx.cr6.eq) goto loc_8234CD54;
	// lfs f0,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8234cd60
	if (ctx.cr6.eq) goto loc_8234CD60;
loc_8234CD54:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
loc_8234CD60:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r8.u32);
loc_8234CD78:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234cdd4
	if (ctx.cr6.eq) goto loc_8234CDD4;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,312(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8234cdb0
	if (!ctx.cr6.eq) goto loc_8234CDB0;
	// lfs f0,316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8234cdb0
	if (!ctx.cr6.eq) goto loc_8234CDB0;
	// lfs f0,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8234cdbc
	if (ctx.cr6.eq) goto loc_8234CDBC;
loc_8234CDB0:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
loc_8234CDBC:
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r10.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r9.u32);
	// lwz r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r8,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r8.u32);
loc_8234CDD4:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234cdf0
	if (!ctx.cr6.eq) goto loc_8234CDF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8234CDF0:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234ce34
	if (!ctx.cr6.gt) goto loc_8234CE34;
loc_8234CE00:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234CE14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8234ce20
	if (!ctx.cr6.eq) goto loc_8234CE20;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8234CE20:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234ce00
	if (ctx.cr6.lt) goto loc_8234CE00;
loc_8234CE34:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82355870) {
	REX_FUNC_PROLOGUE();
	// lwz r3,412(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 412);
	// b 0x8233e270
	sub_8233E270(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823559AC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82355AE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82355AE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82355b0c
	if (!ctx.cr6.eq) goto loc_82355B0C;
	// li r3,81
	ctx.r3.s64 = 81;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82355B0C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82355c00
	if (ctx.cr6.eq) goto loc_82355C00;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r31,r11,9928
	r31.s64 = ctx.r11.s64 + 9928;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,71
	ctx.r6.s64 = 71;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82355B40;
	sub_82330A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355b50
	if (ctx.cr6.eq) goto loc_82355B50;
	// bl 0x823583e8
	ctx.lr = 0x82355B4C;
	sub_823583E8(ctx, base);
	// b 0x82355b54
	goto loc_82355B54;
loc_82355B50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82355B54:
	// stw r3,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// bne cr6,0x82355b70
	if (!ctx.cr6.eq) goto loc_82355B70;
loc_82355B64:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82355B70:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82358408
	ctx.lr = 0x82355B80;
	sub_82358408(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355c04
	if (!ctx.cr6.eq) goto loc_82355C04;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,83
	ctx.r6.s64 = 83;
	// mulli r4,r28,392
	ctx.r4.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(392));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82355BA4;
	sub_82330E40(ctx, base);
	// stw r3,364(r30)
	REX_STORE_U32(r30.u32 + 364, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355b64
	if (ctx.cr6.eq) goto loc_82355B64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82355c00
	if (!ctx.cr6.gt) goto loc_82355C00;
	// li r31,0
	r31.s64 = 0;
loc_82355BC0:
	// lwz r11,364(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 364);
	// add. r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82355bd0
	if (ctx.cr0.eq) goto loc_82355BD0;
	// bl 0x823aa088
	ctx.lr = 0x82355BD0;
	sub_823AA088(ctx, base);
loc_82355BD0:
	// lwz r11,364(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 364);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x823587d8
	ctx.lr = 0x82355BE8;
	sub_823587D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82355c04
	if (!ctx.cr6.eq) goto loc_82355C04;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,392
	r31.s64 = r31.s64 + 392;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x82355bc0
	if (ctx.cr6.lt) goto loc_82355BC0;
loc_82355C00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82355C04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8235DC88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,10704
	ctx.r10.s64 = ctx.r11.s64 + 10704;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235E170) {
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
	ctx.lr = 0x8235E178;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16544(r1)
	ea = -16544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r24,r6,24,8,31
	r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFFFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8235e308
	if (!ctx.cr6.gt) goto loc_8235E308;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// addi r27,r3,20
	r27.s64 = ctx.r3.s64 + 20;
	// addi r26,r3,16
	r26.s64 = ctx.r3.s64 + 16;
	// addi r30,r5,-4
	r30.s64 = ctx.r5.s64 + -4;
	// addi r31,r4,-4
	r31.s64 = ctx.r4.s64 + -4;
loc_8235E1B4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8235e218
	if (!ctx.cr6.eq) goto loc_8235E218;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r1,4172
	ctx.r11.s64 = ctx.r1.s64 + 4172;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235E1CC:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4092(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4092, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-2044(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -2044, temp.u32);
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,-3068(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -3068, temp.u32);
	// lfs f10,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,1028(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 1028, temp.u32);
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,2052(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 2052, temp.u32);
	// lfs f8,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,3076(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 3076, temp.u32);
	// lfs f7,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// stfs f8,-1020(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + -1020, temp.u32);
	// stfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235e1cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235E1CC;
	// b 0x8235e260
	goto loc_8235E260;
loc_8235E218:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8235e260
	if (!ctx.cr6.eq) goto loc_8235E260;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r1,4172
	ctx.r11.s64 = ctx.r1.s64 + 4172;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235E22C:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4092(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4092, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-2044(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -2044, temp.u32);
	// lfs f11,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,-3068(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -3068, temp.u32);
	// lfs f10,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,1028(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 1028, temp.u32);
	// lfsu f0,24(r31)
	ea = 24 + r31.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r31.u32 = ea;
	// stfs f10,-1020(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + -1020, temp.u32);
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235e22c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235E22C;
loc_8235E260:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r1,8272
	ctx.r5.s64 = ctx.r1.s64 + 8272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8235de08
	ctx.lr = 0x8235E278;
	sub_8235DE08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8235e314
	if (!ctx.cr6.eq) goto loc_8235E314;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8235e2d4
	if (!ctx.cr6.eq) goto loc_8235E2D4;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r1,12364
	ctx.r11.s64 = ctx.r1.s64 + 12364;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235E298:
	// lfs f13,-4092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4092);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-2044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -2044);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -3068);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1028);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-1020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -1020);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f10,16(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f9,20(r30)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// bdnz 0x8235e298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235E298;
	// b 0x8235e2fc
	goto loc_8235E2FC;
loc_8235E2D4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8235e2fc
	if (!ctx.cr6.eq) goto loc_8235E2FC;
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r11,r1,10316
	ctx.r11.s64 = ctx.r1.s64 + 10316;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235E2E8:
	// lfs f13,-2044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -2044);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfsu f0,8(r30)
	ea = 8 + r30.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r30.u32 = ea;
	// bdnz 0x8235e2e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235E2E8;
loc_8235E2FC:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(r25.s32, r24.s32, ctx.xer);
	// blt cr6,0x8235e1b4
	if (ctx.cr6.lt) goto loc_8235E1B4;
loc_8235E308:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x826a1cf8
	return;
loc_8235E314:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8236F4A8) {
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
	ctx.lr = 0x8236F4B0;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,372
	r27.s64 = ctx.r3.s64 + 372;
	// lwz r29,376(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 376);
	// lfs f30,312(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 312);
	f30.f64 = double(temp.f32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r26,r3,376
	r26.s64 = ctx.r3.s64 + 376;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8236f4ec
	if (ctx.cr6.eq) goto loc_8236F4EC;
	// lwz r10,1188(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1188);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_8236F4EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8236f4fc
	if (ctx.cr6.eq) goto loc_8236F4FC;
	// lwz r11,1200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_8236F4FC:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82334778
	ctx.lr = 0x8236F504;
	sub_82334778(ctx, base);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bgt cr6,0x8236f560
	if (ctx.cr6.gt) goto loc_8236F560;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8236f52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236F52C;
	// bdzf 4*cr6+eq,0x8236f534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236F534;
	// bdzf 4*cr6+eq,0x8236f554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236F554;
	// bne cr6,0x8236f55c
	if (!ctx.cr6.eq) goto loc_8236F55C;
	// stfs f31,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 312, temp.u32);
	// b 0x8236f560
	goto loc_8236F560;
loc_8236F52C:
	// stfs f31,316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 316, temp.u32);
	// b 0x8236f560
	goto loc_8236F560;
loc_8236F534:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f31.f64) ? int64_t(0x80000000U) : (f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// beq cr6,0x8236f560
	if (ctx.cr6.eq) goto loc_8236F560;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// b 0x8236f560
	goto loc_8236F560;
loc_8236F554:
	// stfs f31,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 320, temp.u32);
	// b 0x8236f560
	goto loc_8236F560;
loc_8236F55C:
	// stfs f31,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
loc_8236F560:
	// lfs f0,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bne cr6,0x8236f584
	if (!ctx.cr6.eq) goto loc_8236F584;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bne cr6,0x8236f584
	if (!ctx.cr6.eq) goto loc_8236F584;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236f6a4
	if (!ctx.cr6.eq) goto loc_8236F6A4;
loc_8236F584:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e7e0
	ctx.lr = 0x8236F590;
	sub_8233E7E0(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lfs f0,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lwz r4,352(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 352);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r28,0
	r28.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lis r29,-32129
	r29.s64 = -2105606144;
	// addi r30,r11,16924
	r30.s64 = ctx.r11.s64 + 16924;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// divw r6,r7,r10
	ctx.r6.u64 = uint32_t((ctx.r10.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r7.s32 / ctx.r10.s32 : 0);
	// stw r6,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r6.u32);
	// beq cr6,0x8236f604
	if (ctx.cr6.eq) goto loc_8236F604;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1033
	ctx.r6.s64 = 1033;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8236F5FC;
	sub_82330D00(ctx, base);
	// stw r28,348(r31)
	REX_STORE_U32(r31.u32 + 348, r28.u32);
	// stw r28,352(r31)
	REX_STORE_U32(r31.u32 + 352, r28.u32);
loc_8236F604:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,364(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 364);
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8236f654
	if (!ctx.cr6.eq) goto loc_8236F654;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1050
	ctx.r6.s64 = 1050;
	// lwz r10,1012(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8236F644;
	sub_82330E40(ctx, base);
	// addi r11,r3,15
	ctx.r11.s64 = ctx.r3.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r3,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r3.u32);
	// stw r10,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r10.u32);
loc_8236F654:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e820
	ctx.lr = 0x8236F660;
	sub_8233E820(ctx, base);
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236f688
	if (!ctx.cr6.eq) goto loc_8236F688;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823347a0
	ctx.lr = 0x8236F674;
	sub_823347A0(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
loc_8236F688:
	// lwz r3,348(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stw r28,360(r31)
	REX_STORE_U32(r31.u32 + 360, r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236f6a4
	if (ctx.cr6.eq) goto loc_8236F6A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,356(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 356);
	// bl 0x823ef5f0
	ctx.lr = 0x8236F6A4;
	sub_823EF5F0(ctx, base);
loc_8236F6A4:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823347a0
	ctx.lr = 0x8236F6AC;
	sub_823347A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82389510) {
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
	ctx.lr = 0x82389518;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2184);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r9,520(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,2180(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2180);
	// lwz r10,788(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lbz r6,532(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 532);
	// rotlwi r8,r6,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add. r22,r9,r11
	r22.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x8238a130
	if (ctx.cr0.eq) goto loc_8238A130;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r20,r24
	r20.u64 = r24.u64;
	// ble cr6,0x8238a130
	if (!ctx.cr6.gt) goto loc_8238A130;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// lis r8,21845
	ctx.r8.s64 = 1431633920;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// li r14,2
	r14.s64 = 2;
	// li r15,4
	r15.s64 = 4;
	// li r19,64
	r19.s64 = 64;
	// ori r18,r8,21846
	r18.u64 = ctx.r8.u64 | 21846;
	// addi r21,r11,32064
	r21.s64 = ctx.r11.s64 + 32064;
	// addi r17,r10,-27992
	r17.s64 = ctx.r10.s64 + -27992;
	// addi r16,r9,32120
	r16.s64 = ctx.r9.s64 + 32120;
loc_82389594:
	// addi r11,r20,198
	ctx.r11.s64 = r20.s64 + 198;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r26
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x823895c0
	if (!ctx.cr6.eq) goto loc_823895C0;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x823895c4
	if (ctx.cr6.eq) goto loc_823895C4;
loc_823895C0:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_823895C4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823895d8
	if (!ctx.cr6.eq) goto loc_823895D8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_823895D8:
	// lwz r11,1420(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1420);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lbz r10,592(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 592);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823895fc
	if (ctx.cr6.lt) goto loc_823895FC;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r24,0(r21)
	REX_STORE_U32(r21.u32 + 0, r24.u32);
	// mr r25,r17
	r25.u64 = r17.u64;
	// b 0x8238962c
	goto loc_8238962C;
loc_823895FC:
	// lwz r11,1428(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1428);
	// mulli r10,r10,1492
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1492));
	// lbz r9,593(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 593);
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r25
	ctx.r11.u64 = ctx.r9.u64 + r25.u64;
	// lbz r11,864(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 864);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8238962c
	if (!ctx.cr6.lt) goto loc_8238962C;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// addic. r23,r11,32
	ctx.xer.ca = ctx.r11.u32 > 4294967263;
	r23.s64 = ctx.r11.s64 + 32;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne 0x82389630
	if (!ctx.cr0.eq) goto loc_82389630;
loc_8238962C:
	// mr r23,r21
	r23.u64 = r21.u64;
loc_82389630:
	// lbz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U8(r22.u32 + 4);
	// lbz r30,3(r22)
	r30.u64 = REX_LOAD_U8(r22.u32 + 3);
	// stw r24,476(r8)
	REX_STORE_U32(ctx.r8.u32 + 476, r24.u32);
	// rlwinm r28,r11,28,4,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r27,r11,28
	r27.u64 = ctx.r11.u32 & 0xF;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r24,480(r10)
	REX_STORE_U32(ctx.r10.u32 + 480, r24.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stb r24,460(r9)
	REX_STORE_U8(ctx.r9.u32 + 460, r24.u8);
	// lbz r8,960(r25)
	ctx.r8.u64 = REX_LOAD_U8(r25.u32 + 960);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823896a4
	if (ctx.cr6.eq) goto loc_823896A4;
	// lbz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823896a4
	if (!ctx.cr6.eq) goto loc_823896A4;
	// lbz r11,1042(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 1042);
	// addi r7,r25,962
	ctx.r7.s64 = r25.s64 + 962;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r10,1044(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 1044);
	// addi r4,r31,500
	ctx.r4.s64 = r31.s64 + 500;
	// lbz r9,1043(r25)
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + 1043);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r6,961(r25)
	ctx.r6.u64 = REX_LOAD_U8(r25.u32 + 961);
	// stb r14,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r14.u8);
	// stb r11,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x823881e8
	ctx.lr = 0x823896A0;
	sub_823881E8(ctx, base);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823896A4:
	// lbz r8,1047(r25)
	ctx.r8.u64 = REX_LOAD_U8(r25.u32 + 1047);
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823896f0
	if (ctx.cr6.eq) goto loc_823896F0;
	// lbz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823896f0
	if (!ctx.cr6.eq) goto loc_823896F0;
	// lbz r11,1130(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 1130);
	// addi r7,r25,1050
	ctx.r7.s64 = r25.s64 + 1050;
	// stb r15,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r15.u8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r31,524
	ctx.r4.s64 = r31.s64 + 524;
	// lbz r10,1132(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 1132);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r9,1131(r25)
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + 1131);
	// lbz r6,1048(r25)
	ctx.r6.u64 = REX_LOAD_U8(r25.u32 + 1048);
	// stb r11,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x823881e8
	ctx.lr = 0x823896EC;
	sub_823881E8(ctx, base);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823896F0:
	// lbz r11,584(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389734
	if (ctx.cr6.eq) goto loc_82389734;
	// lhz r11,1228(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 1228);
	// lwz r10,572(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 572);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r9.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,572(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 572);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82389724
	if (!ctx.cr6.lt) goto loc_82389724;
	// stw r24,572(r11)
	REX_STORE_U32(ctx.r11.u32 + 572, r24.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82389724:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82389734:
	// lbz r11,2(r22)
	ctx.r11.u64 = REX_LOAD_U8(r22.u32 + 2);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,-6
	ctx.r10.s64 = ctx.r10.s64 + -6;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x82389888
	if (ctx.cr6.gt) goto loc_82389888;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26784
	ctx.r12.s64 = ctx.r12.s64 + -26784;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82389788;
	case 1:
		goto loc_823897C0;
	case 2:
		goto loc_82389888;
	case 3:
		goto loc_82389888;
	case 4:
		goto loc_82389888;
	case 5:
		goto loc_823897F8;
	case 6:
		goto loc_82389888;
	case 7:
		goto loc_82389834;
	case 8:
		goto loc_82389858;
	case 9:
		goto loc_8238987C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82389788:
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r8.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,468(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x823897b0
	if (!ctx.cr6.lt) goto loc_823897B0;
	// stw r24,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r24.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823897B0:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82389884
	goto loc_82389884;
loc_823897C0:
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x823897e8
	if (!ctx.cr6.gt) goto loc_823897E8;
	// stw r19,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r19.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823897E8:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82389884
	goto loc_82389884;
loc_823897F8:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,648(r29)
	REX_STORE_U8(r29.u32 + 648, ctx.r11.u8);
	// bl 0x82387ff0
	ctx.lr = 0x82389808;
	sub_82387FF0(ctx, base);
	// lbz r11,646(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 646);
	// lbz r9,647(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 647);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stb r7,646(r29)
	REX_STORE_U8(r29.u32 + 646, ctx.r7.u8);
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// ble cr6,0x82389884
	if (!ctx.cr6.gt) goto loc_82389884;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// stb r10,646(r29)
	REX_STORE_U8(r29.u32 + 646, ctx.r10.u8);
	// b 0x82389884
	goto loc_82389884;
loc_82389834:
	// lwz r10,472(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 472);
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r8.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r7,460(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// stb r6,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r6.u8);
	// b 0x82389884
	goto loc_82389884;
loc_82389858:
	// lwz r10,472(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 472);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82389884
	goto loc_82389884;
loc_8238987C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387f68
	ctx.lr = 0x82389884;
	sub_82387F68(ctx, base);
loc_82389884:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82389888:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bgt cr6,0x8238a0fc
	if (ctx.cr6.gt) goto loc_8238A0FC;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26452
	ctx.r12.s64 = ctx.r12.s64 + -26452;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82389924;
	case 1:
		goto loc_82389A2C;
	case 2:
		goto loc_82389A70;
	case 3:
		goto loc_82389AA0;
	case 4:
		goto loc_82389AB0;
	case 5:
		goto loc_82389AE4;
	case 6:
		goto loc_82389B60;
	case 7:
		goto loc_82389C04;
	case 8:
		goto loc_8238A0FC;
	case 9:
		goto loc_8238A0FC;
	case 10:
		goto loc_82389C10;
	case 11:
		goto loc_8238A0FC;
	case 12:
		goto loc_8238A0FC;
	case 13:
		goto loc_8238A0FC;
	case 14:
		goto loc_82389C98;
	case 15:
		goto loc_8238A0FC;
	case 16:
		goto loc_8238A0FC;
	case 17:
		goto loc_82389FC8;
	case 18:
		goto loc_8238A0FC;
	case 19:
		goto loc_8238A0FC;
	case 20:
		goto loc_8238A0FC;
	case 21:
		goto loc_8238A0FC;
	case 22:
		goto loc_8238A0FC;
	case 23:
		goto loc_8238A0FC;
	case 24:
		goto loc_8238A0FC;
	case 25:
		goto loc_8238A01C;
	case 26:
		goto loc_8238A0FC;
	case 27:
		goto loc_82389DF0;
	case 28:
		goto loc_8238A0FC;
	case 29:
		goto loc_8238A0A8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82389924:
	// lbz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U8(r22.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a0fc
	if (ctx.cr6.eq) goto loc_8238A0FC;
	// lwz r9,2168(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 2168);
	// mulhw r11,r9,r18
	ctx.r11.s64 = (int64_t(ctx.r9.s32) * int64_t(r18.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823899b8
	if (ctx.cr6.eq) goto loc_823899B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82389a1c
	if (!ctx.cr6.eq) goto loc_82389A1C;
	// lhz r11,2162(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 2162);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238997c
	if (ctx.cr6.eq) goto loc_8238997C;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x82389a14
	goto loc_82389A14;
loc_8238997C:
	// lwz r28,24(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 24);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lbz r30,595(r29)
	r30.u64 = REX_LOAD_U8(r29.u32 + 595);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82388690
	ctx.lr = 0x82389998;
	sub_82388690(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82388690
	ctx.lr = 0x823899AC;
	sub_82388690(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x82389a10
	goto loc_82389A10;
loc_823899B8:
	// lhz r11,2162(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 2162);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823899d8
	if (ctx.cr6.eq) goto loc_823899D8;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x82389a14
	goto loc_82389A14;
loc_823899D8:
	// lwz r27,24(r23)
	r27.u64 = REX_LOAD_U32(r23.u32 + 24);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// lbz r30,595(r29)
	r30.u64 = REX_LOAD_U8(r29.u32 + 595);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82388690
	ctx.lr = 0x823899F4;
	sub_82388690(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82388690
	ctx.lr = 0x82389A08;
	sub_82388690(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82389A10:
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82389A14:
	// stw r9,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r9.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82389A1C:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389A2C:
	// stw r24,480(r31)
	REX_STORE_U32(r31.u32 + 480, r24.u32);
	// lbz r11,630(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 630);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r8.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,464(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// cmpwi cr6,r7,56
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 56, ctx.xer);
	// bge cr6,0x82389a64
	if (!ctx.cr6.lt) goto loc_82389A64;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82389A64:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// b 0x8238a0f8
	goto loc_8238A0F8;
loc_82389A70:
	// stw r24,480(r31)
	REX_STORE_U32(r31.u32 + 480, r24.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,629(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 629);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r9.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stb r7,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r7.u8);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389AA0:
	// stw r24,480(r31)
	REX_STORE_U32(r31.u32 + 480, r24.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387f68
	ctx.lr = 0x82389AAC;
	sub_82387F68(ctx, base);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389AB0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ff0
	ctx.lr = 0x82389AB8;
	sub_82387FF0(ctx, base);
	// lbz r10,646(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 646);
	// lbz r9,647(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 647);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stb r7,646(r29)
	REX_STORE_U8(r29.u32 + 646, ctx.r7.u8);
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// ble cr6,0x8238a0fc
	if (!ctx.cr6.gt) goto loc_8238A0FC;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// stb r10,646(r29)
	REX_STORE_U8(r29.u32 + 646, ctx.r10.u8);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389AE4:
	// stw r24,480(r31)
	REX_STORE_U32(r31.u32 + 480, r24.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387f68
	ctx.lr = 0x82389AF0;
	sub_82387F68(ctx, base);
	// lbz r10,633(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 633);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389b2c
	if (ctx.cr6.eq) goto loc_82389B2C;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,468(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,468(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x8238a0f0
	if (!ctx.cr6.gt) goto loc_8238A0F0;
	// stw r19,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r19.u32);
	// b 0x8238a0ec
	goto loc_8238A0EC;
loc_82389B2C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a0ec
	if (ctx.cr6.eq) goto loc_8238A0EC;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,468(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r8.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,468(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8238a0f0
	if (!ctx.cr6.lt) goto loc_8238A0F0;
	// stw r24,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r24.u32);
	// b 0x8238a0ec
	goto loc_8238A0EC;
loc_82389B60:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ff0
	ctx.lr = 0x82389B68;
	sub_82387FF0(ctx, base);
	// lbz r10,646(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 646);
	// lbz r9,647(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 647);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stb r7,646(r29)
	REX_STORE_U8(r29.u32 + 646, ctx.r7.u8);
	// cmpwi cr6,r7,31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 31, ctx.xer);
	// ble cr6,0x82389b90
	if (!ctx.cr6.gt) goto loc_82389B90;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// stb r10,646(r29)
	REX_STORE_U8(r29.u32 + 646, ctx.r10.u8);
loc_82389B90:
	// lbz r10,633(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 633);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389bd0
	if (ctx.cr6.eq) goto loc_82389BD0;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,468(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// ble cr6,0x8238a0f0
	if (!ctx.cr6.gt) goto loc_8238A0F0;
	// stw r19,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r19.u32);
	// b 0x8238a0ec
	goto loc_8238A0EC;
loc_82389BD0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a0ec
	if (ctx.cr6.eq) goto loc_8238A0EC;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,468(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,468(r10)
	REX_STORE_U32(ctx.r10.u32 + 468, ctx.r8.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,468(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x8238a0f0
	if (!ctx.cr6.lt) goto loc_8238A0F0;
	// stw r24,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, r24.u32);
	// b 0x8238a0ec
	goto loc_8238A0EC;
loc_82389C04:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823880d0
	ctx.lr = 0x82389C0C;
	sub_823880D0(ctx, base);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389C10:
	// lbz r10,633(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 633);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389c58
	if (ctx.cr6.eq) goto loc_82389C58;
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x82389c88
	if (!ctx.cr6.gt) goto loc_82389C88;
	// stw r19,468(r31)
	REX_STORE_U32(r31.u32 + 468, r19.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389C58:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389c88
	if (ctx.cr6.eq) goto loc_82389C88;
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r9.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,468(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 468);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82389c88
	if (!ctx.cr6.lt) goto loc_82389C88;
	// stw r24,468(r31)
	REX_STORE_U32(r31.u32 + 468, r24.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82389C88:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389C98:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82389d8c
	if (ctx.cr6.eq) goto loc_82389D8C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82389d74
	if (ctx.cr6.eq) goto loc_82389D74;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bne cr6,0x8238a0fc
	if (!ctx.cr6.eq) goto loc_8238A0FC;
	// lwz r11,2168(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 2168);
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82389d28
	if (!ctx.cr6.eq) goto loc_82389D28;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82387cb0
	ctx.lr = 0x82389CDC;
	sub_82387CB0(ctx, base);
	// lwz r11,596(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 596);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,464(r10)
	REX_STORE_U32(ctx.r10.u32 + 464, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r6,r9,1
	ctx.r6.u64 = ctx.r9.u64 | 1;
	// stb r6,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r6.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82388708
	ctx.lr = 0x82389D24;
	sub_82388708(ctx, base);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389D28:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r8,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r8.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r7,460(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r6,r6,0,30,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r6,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r6.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r5,460(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r4,r4,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r4,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r4.u8);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389D74:
	// lwz r11,2168(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 2168);
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8238a0fc
	if (!ctx.cr6.eq) goto loc_8238A0FC;
	// stw r24,468(r31)
	REX_STORE_U32(r31.u32 + 468, r24.u32);
	// b 0x8238a0ec
	goto loc_8238A0EC;
loc_82389D8C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a0fc
	if (ctx.cr6.eq) goto loc_8238A0FC;
	// lwz r9,2168(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 2168);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// subf. r5,r7,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne 0x8238a0fc
	if (!ctx.cr0.eq) goto loc_8238A0FC;
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stb r8,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r8.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r7,460(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// stb r6,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r6.u8);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389DF0:
	// lbz r11,636(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a0fc
	if (ctx.cr6.eq) goto loc_8238A0FC;
	// lwz r9,2168(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 2168);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// subf. r5,r7,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne 0x8238a0fc
	if (!ctx.cr0.eq) goto loc_8238A0FC;
	// lbz r11,635(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 635);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389fa8
	if (ctx.cr6.eq) goto loc_82389FA8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x82389f80
	if (ctx.cr6.gt) goto loc_82389F80;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-25004
	ctx.r12.s64 = ctx.r12.s64 + -25004;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82389E90;
	case 1:
		goto loc_82389EA0;
	case 2:
		goto loc_82389EB0;
	case 3:
		goto loc_82389EC0;
	case 4:
		goto loc_82389ED0;
	case 5:
		goto loc_82389EE0;
	case 6:
		goto loc_82389EF8;
	case 7:
		goto loc_82389F80;
	case 8:
		goto loc_82389F04;
	case 9:
		goto loc_82389F14;
	case 10:
		goto loc_82389F24;
	case 11:
		goto loc_82389F34;
	case 12:
		goto loc_82389F44;
	case 13:
		goto loc_82389F54;
	case 14:
		goto loc_82389F70;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82389E90:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389EA0:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389EB0:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389EC0:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389ED0:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389EE0:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r8,r9,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// stw r8,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r8.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389EF8:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// b 0x82389f78
	goto loc_82389F78;
loc_82389F04:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389F14:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389F24:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389F34:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389F44:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389F54:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r9.u32);
	// b 0x82389f7c
	goto loc_82389F7C;
loc_82389F70:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82389F78:
	// stw r10,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r10.u32);
loc_82389F7C:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82389F80:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x82389f94
	if (!ctx.cr6.gt) goto loc_82389F94;
	// stw r19,468(r31)
	REX_STORE_U32(r31.u32 + 468, r19.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82389F94:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82389fa8
	if (!ctx.cr6.lt) goto loc_82389FA8;
	// stw r24,468(r31)
	REX_STORE_U32(r31.u32 + 468, r24.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82389FA8:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// stb r8,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r8.u8);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389FC8:
	// lbz r10,2160(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 2160);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389ff8
	if (ctx.cr6.eq) goto loc_82389FF8;
	// lwz r10,2156(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 2156);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,2156(r26)
	REX_STORE_U32(r26.u32 + 2156, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x8238a0fc
	if (!ctx.cr6.gt) goto loc_8238A0FC;
	// stw r19,2156(r26)
	REX_STORE_U32(r26.u32 + 2156, r19.u32);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_82389FF8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a0fc
	if (ctx.cr6.eq) goto loc_8238A0FC;
	// lwz r10,2156(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 2156);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,2156(r26)
	REX_STORE_U32(r26.u32 + 2156, ctx.r9.u32);
	// bge 0x8238a0fc
	if (!ctx.cr0.lt) goto loc_8238A0FC;
	// stw r24,2156(r26)
	REX_STORE_U32(r26.u32 + 2156, r24.u32);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_8238A01C:
	// lbz r10,634(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 634);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a068
	if (ctx.cr6.eq) goto loc_8238A068;
	// lwz r10,472(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 472);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r11.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,472(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 472);
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8238a098
	if (!ctx.cr6.gt) goto loc_8238A098;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r11.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_8238A068:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a098
	if (ctx.cr6.eq) goto loc_8238A098;
	// lwz r10,472(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 472);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r9.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,472(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 472);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x8238a098
	if (!ctx.cr6.lt) goto loc_8238A098;
	// stw r24,472(r31)
	REX_STORE_U32(r31.u32 + 472, r24.u32);
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8238A098:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
	// b 0x8238a0fc
	goto loc_8238A0FC;
loc_8238A0A8:
	// lbz r11,663(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 663);
	// lbz r10,662(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 662);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8238a0c4
	if (ctx.cr6.lt) goto loc_8238A0C4;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r10.u32);
loc_8238A0C4:
	// lbz r9,662(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 662);
	// lbz r11,664(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 664);
	// lbz r10,663(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 663);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r8,662(r29)
	REX_STORE_U8(r29.u32 + 662, ctx.r8.u8);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8238a0ec
	if (ctx.cr6.lt) goto loc_8238A0EC;
	// stb r24,662(r29)
	REX_STORE_U8(r29.u32 + 662, r24.u8);
loc_8238A0EC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8238A0F0:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
loc_8238A0F8:
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
loc_8238A0FC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82388380
	ctx.lr = 0x8238A108;
	sub_82388380(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82387d18
	ctx.lr = 0x8238A11C;
	sub_82387D18(ctx, base);
	// lwz r11,788(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 788);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r22,r22,5
	r22.s64 = r22.s64 + 5;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82389594
	if (ctx.cr6.lt) goto loc_82389594;
loc_8238A130:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823E2E98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E35E0) {
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
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e360c
	if (ctx.cr6.eq) goto loc_823E360C;
	// bl 0x82393bf0
	ctx.lr = 0x823E360C;
	sub_82393BF0(ctx, base);
loc_823E360C:
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e3620
	if (ctx.cr6.eq) goto loc_823E3620;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823E3620;
	sub_82393BF0(ctx, base);
loc_823E3620:
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e3634
	if (ctx.cr6.eq) goto loc_823E3634;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823E3634;
	sub_82393BF0(ctx, base);
loc_823E3634:
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e3648
	if (ctx.cr6.eq) goto loc_823E3648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823E3648;
	sub_82393BF0(ctx, base);
loc_823E3648:
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823e365c
	if (ctx.cr6.eq) goto loc_823E365C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823E365C;
	sub_82393BF0(ctx, base);
loc_823E365C:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823E366C;
	sub_823EF5F0(ctx, base);
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

DEFINE_REX_FUNC(sub_823E7C80) {
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
	ctx.lr = 0x823E7C88;
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
	// beq cr6,0x823e7cc4
	if (ctx.cr6.eq) goto loc_823E7CC4;
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
	// bl 0x823e7c80
	ctx.lr = 0x823E7CC4;
	sub_823E7C80(ctx, base);
loc_823E7CC4:
	// addi r11,r26,-2
	ctx.r11.s64 = r26.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823e7d9c
	if (ctx.cr6.gt) goto loc_823E7D9C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823e7d2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823E7D2C;
	// bdzf 4*cr6+eq,0x823e7d08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823E7D08;
	// bne cr6,0x823e7d64
	if (!ctx.cr6.eq) goto loc_823E7D64;
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
	// bl 0x823e67e0
	ctx.lr = 0x823E7D00;
	sub_823E67E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823E7D08:
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
	// bl 0x823e6c38
	ctx.lr = 0x823E7D24;
	sub_823E6C38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823E7D2C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823e7dd0
	if (!ctx.cr6.gt) goto loc_823E7DD0;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r28,r11,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_823E7D40:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823e6f68
	ctx.lr = 0x823E7D50;
	sub_823E6F68(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// bne 0x823e7d40
	if (!ctx.cr0.eq) goto loc_823E7D40;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823E7D64:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823e7dd0
	if (!ctx.cr6.gt) goto loc_823E7DD0;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r26,r11,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_823E7D74:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e71c0
	ctx.lr = 0x823E7D88;
	sub_823E71C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// bne 0x823e7d74
	if (!ctx.cr0.eq) goto loc_823E7D74;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823E7D9C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823e7dd0
	if (!ctx.cr6.gt) goto loc_823E7DD0;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r25,r11,3,0,28
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_823E7DAC:
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
	// bl 0x823e7630
	ctx.lr = 0x823E7DC4;
	sub_823E7630(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r28,r28,r25
	r28.u64 = r28.u64 + r25.u64;
	// bne 0x823e7dac
	if (!ctx.cr0.eq) goto loc_823E7DAC;
loc_823E7DD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823EC6D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823EC6E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x826a2e60
	ctx.lr = 0x823EC708;
	sub_826A2E60(ctx, base);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// bl 0x827938e4
	ctx.lr = 0x823EC728;
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ec788
	if (ctx.cr0.lt) goto loc_823EC788;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,204
	ctx.r7.s64 = ctx.r1.s64 + 204;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82793654
	ctx.lr = 0x823EC764;
	__imp__XamShowMessageBoxUIEx(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x823ec780
	if (!ctx.cr6.eq) goto loc_823EC780;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823ed2c0
	ctx.lr = 0x823EC780;
	sub_823ED2C0(ctx, base);
loc_823EC780:
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x827938d4
	ctx.lr = 0x823EC788;
	__imp__NtClose(ctx, base);
loc_823EC788:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823EE280) {
	REX_FUNC_PROLOGUE();
	// b 0x823f0058
	sub_823F0058(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EE458) {
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
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// li r3,251
	ctx.r3.s64 = 251;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x827937c4
	ctx.lr = 0x823EE48C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ee49c
	if (!ctx.cr0.lt) goto loc_823EE49C;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x823ee4bc
	goto loc_823EE4BC;
loc_823EE49C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823ee4b8
	if (!ctx.cr6.eq) goto loc_823EE4B8;
	// bl 0x823f0058
	ctx.lr = 0x823EE4A8;
	sub_823F0058(ctx, base);
	// li r11,1627
	ctx.r11.s64 = 1627;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x823ee4bc
	goto loc_823EE4BC;
loc_823EE4B8:
	// li r3,997
	ctx.r3.s64 = 997;
loc_823EE4BC:
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

DEFINE_REX_FUNC(sub_823EFB20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823EFB28;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-30908
	r30.s64 = ctx.r11.s64 + -30908;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x823EFB44;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x823efb6c
	if (ctx.cr6.eq) goto loc_823EFB6C;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r10,r11,-30880
	ctx.r10.s64 = ctx.r11.s64 + -30880;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x823efb7c
	goto loc_823EFB7C;
loc_823EFB6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_823EFB7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938b4
	ctx.lr = 0x823EFB84;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823F1C48) {
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
	ctx.lr = 0x823F1C50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// addi r25,r4,56
	r25.s64 = ctx.r4.s64 + 56;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823f1cb0
	if (ctx.cr6.eq) goto loc_823F1CB0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_823F1C7C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f1c9c
	if (ctx.cr6.lt) goto loc_823F1C9C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823f1cbc
	if (ctx.cr6.eq) goto loc_823F1CBC;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823f1cbc
	if (ctx.cr6.eq) goto loc_823F1CBC;
loc_823F1C9C:
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823f1c7c
	if (!ctx.cr6.eq) goto loc_823F1C7C;
loc_823F1CB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F1CB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_823F1CBC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,1412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x823f1ce4
	if (ctx.cr6.eq) goto loc_823F1CE4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x823F1CE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f1d00
	goto loc_823F1D00;
loc_823F1CE4:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793b54
	ctx.lr = 0x823F1D00;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_823F1D00:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823f1cb0
	if (ctx.cr6.lt) goto loc_823F1CB0;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823f1d2c
	if (!ctx.cr6.eq) goto loc_823F1D2C;
	// stw r26,28(r30)
	REX_STORE_U32(r30.u32 + 28, r26.u32);
loc_823F1D2C:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f1d5c
	if (ctx.cr0.eq) goto loc_823F1D5C;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823f1dc8
	if (ctx.cr6.eq) goto loc_823F1DC8;
loc_823F1D5C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x823f1d6c
	if (!ctx.cr6.eq) goto loc_823F1D6C;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// b 0x823f1d78
	goto loc_823F1D78;
loc_823F1D6C:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823F1D78:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823f1dc8
	if (!ctx.cr0.eq) goto loc_823F1DC8;
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
loc_823F1D88:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823f1dbc
	if (!ctx.cr6.lt) goto loc_823F1DBC;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x823f1dbc
	if (ctx.cr0.eq) goto loc_823F1DBC;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f1d88
	if (ctx.cr0.eq) goto loc_823F1D88;
	// b 0x823f1dc8
	goto loc_823F1DC8;
loc_823F1DBC:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823f1cb0
	if (!ctx.cr6.eq) goto loc_823F1CB0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_823F1DC8:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// subf. r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bne 0x823f1e58
	if (!ctx.cr0.eq) goto loc_823F1E58;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823f1e18
	if (!ctx.cr6.eq) goto loc_823F1E18;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// b 0x823f1e24
	goto loc_823F1E24;
loc_823F1E18:
	// stb r26,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, r26.u8);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r10,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r10.u32);
loc_823F1E24:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r31,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, r31.u32);
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// b 0x823f1e64
	goto loc_823F1E64;
loc_823F1E58:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r3.u32);
loc_823F1E64:
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r10,28,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFF;
	// sth r10,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// bne 0x823f1e9c
	if (!ctx.cr0.eq) goto loc_823F1E9C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_823F1E9C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f1cb4
	if (!ctx.cr6.eq) goto loc_823F1CB4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// b 0x823f1ec8
	goto loc_823F1EC8;
loc_823F1EB0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823f1ec4
	if (ctx.cr6.lt) goto loc_823F1EC4;
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
loc_823F1EC4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_823F1EC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f1eb0
	if (!ctx.cr6.eq) goto loc_823F1EB0;
	// b 0x823f1cb4
	goto loc_823F1CB4;
}

DEFINE_REX_FUNC(sub_82404CC8) {
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
	ctx.lr = 0x82404CD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r29,32(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r28,r10,r7
	r28.u64 = ctx.r10.u64 + ctx.r7.u64;
	// b 0x82404dbc
	goto loc_82404DBC;
loc_82404CF4:
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82404da0
	if (!ctx.cr6.lt) goto loc_82404DA0;
	// subf r10,r7,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r29,-2
	ctx.r6.s64 = r29.s64 + -2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82404D30:
	// lhz r27,6(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r26,6(r10)
	r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// andi. r4,r27,33760
	ctx.r4.u64 = r27.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// andi. r30,r9,33760
	r30.u64 = ctx.r9.u64 & 33760;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// andi. r5,r8,33760
	ctx.r5.u64 = ctx.r8.u64 & 33760;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andi. r9,r9,31775
	ctx.r9.u64 = ctx.r9.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// andi. r8,r8,31775
	ctx.r8.u64 = ctx.r8.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// andi. r31,r26,33760
	r31.u64 = r26.u64 & 33760;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + r30.u64;
	// andi. r8,r26,31775
	ctx.r8.u64 = r26.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// andi. r8,r27,31775
	ctx.r8.u64 = r27.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 65536;
	// addi r9,r9,2050
	ctx.r9.s64 = ctx.r9.s64 + 2050;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// rlwinm r9,r9,30,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7FFF;
	// rlwinm r8,r8,30,16,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xFFE0;
	// rlwinm r9,r9,0,27,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// rlwinm r8,r8,0,22,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF83FF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthu r9,2(r6)
	ea = 2 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x82404d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82404D30;
loc_82404DA0:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82404DBC:
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// blt cr6,0x82404cf4
	if (ctx.cr6.lt) goto loc_82404CF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8240DB48) {
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
	ctx.lr = 0x8240DB50;
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
	// beq cr6,0x8240db84
	if (ctx.cr6.eq) goto loc_8240DB84;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240DB80;
	sub_82408848(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8240DB84:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240dba0
	if (ctx.cr6.eq) goto loc_8240DBA0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240DB9C;
	sub_824094E0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8240DBA0:
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
	// bne 0x8240dc08
	if (!ctx.cr0.eq) goto loc_8240DC08;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x8240dc10
	goto loc_8240DC10;
loc_8240DC08:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_8240DC10:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240dc28
	if (ctx.cr6.eq) goto loc_8240DC28;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240DC28;
	sub_82409A88(ctx, base);
loc_8240DC28:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240de2c
	if (!ctx.cr6.gt) goto loc_8240DE2C;
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
loc_8240DC88:
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
	// beq cr6,0x8240ddb0
	if (ctx.cr6.eq) goto loc_8240DDB0;
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
loc_8240DDB0:
	// cmpwi cr6,r9,127
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 127, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x8240ddc0
	if (ctx.cr6.lt) goto loc_8240DDC0;
	// li r11,127
	ctx.r11.s64 = 127;
loc_8240DDC0:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x8240ddd8
	if (!ctx.cr6.gt) goto loc_8240DDD8;
	// cmpwi cr6,r9,127
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 127, ctx.xer);
	// blt cr6,0x8240dddc
	if (ctx.cr6.lt) goto loc_8240DDDC;
	// li r9,127
	ctx.r9.s64 = 127;
	// b 0x8240dddc
	goto loc_8240DDDC;
loc_8240DDD8:
	// li r9,-127
	ctx.r9.s64 = -127;
loc_8240DDDC:
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x8240ddec
	if (ctx.cr6.lt) goto loc_8240DDEC;
	// li r11,127
	ctx.r11.s64 = 127;
loc_8240DDEC:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x8240de04
	if (!ctx.cr6.gt) goto loc_8240DE04;
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// blt cr6,0x8240de08
	if (ctx.cr6.lt) goto loc_8240DE08;
	// li r5,127
	ctx.r5.s64 = 127;
	// b 0x8240de08
	goto loc_8240DE08;
loc_8240DE04:
	// li r5,-127
	ctx.r5.s64 = -127;
loc_8240DE08:
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
	// blt cr6,0x8240dc88
	if (ctx.cr6.lt) goto loc_8240DC88;
loc_8240DE2C:
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

DEFINE_REX_FUNC(sub_8241B560) {
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
	ctx.lr = 0x8241B568;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8241b76c
	if (!ctx.cr6.lt) goto loc_8241B76C;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x8241b5ac
	if (ctx.cr6.eq) goto loc_8241B5AC;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// bne cr6,0x8241b76c
	if (!ctx.cr6.eq) goto loc_8241B76C;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241b76c
	if (ctx.cr0.eq) goto loc_8241B76C;
	// li r11,62
	ctx.r11.s64 = 62;
loc_8241B5AC:
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8241b654
	if (!ctx.cr6.lt) goto loc_8241B654;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
loc_8241B5C4:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8241b654
	if (ctx.cr6.eq) goto loc_8241B654;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x8241b654
	if (ctx.cr6.eq) goto loc_8241B654;
	// cmpwi cr6,r10,92
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 92, ctx.xer);
	// bne cr6,0x8241b640
	if (!ctx.cr6.eq) goto loc_8241B640;
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 40);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241b640
	if (!ctx.cr0.eq) goto loc_8241B640;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8241b640
	if (!ctx.cr6.lt) goto loc_8241B640;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x8241b634
	if (ctx.cr6.eq) goto loc_8241B634;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// bne cr6,0x8241b640
	if (!ctx.cr6.eq) goto loc_8241B640;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8241b640
	if (!ctx.cr6.lt) goto loc_8241B640;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8241b640
	if (!ctx.cr6.eq) goto loc_8241B640;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8241B634:
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r10.u32);
loc_8241B640:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8241b5c4
	if (ctx.cr6.lt) goto loc_8241B5C4;
loc_8241B654:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8241b670
	if (ctx.cr6.lt) goto loc_8241B670;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1006
	ctx.r5.s64 = 1006;
	// addi r6,r11,25232
	ctx.r6.s64 = ctx.r11.s64 + 25232;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// b 0x8241b688
	goto loc_8241B688;
loc_8241B670:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8241b694
	if (!ctx.cr6.eq) goto loc_8241B694;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1005
	ctx.r5.s64 = 1005;
	// addi r6,r11,25196
	ctx.r6.s64 = ctx.r11.s64 + 25196;
loc_8241B688:
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// lwz r3,48(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 48);
	// bl 0x8241a4f0
	ctx.lr = 0x8241B694;
	sub_8241A4F0(ctx, base);
loc_8241B694:
	// subf r27,r29,r31
	r27.u64 = r31.u64 - r29.u64;
	// lwz r3,44(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 44);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82444608
	ctx.lr = 0x8241B6A8;
	sub_82444608(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8241b76c
	if (ctx.cr0.eq) goto loc_8241B76C;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
loc_8241B6B4:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x8241b72c
	if (!ctx.cr6.lt) goto loc_8241B72C;
	// addi r10,r30,2
	ctx.r10.s64 = r30.s64 + 2;
loc_8241B6C4:
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// bne cr6,0x8241b72c
	if (!ctx.cr6.eq) goto loc_8241B72C;
	// lwz r9,40(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 40);
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241b72c
	if (!ctx.cr0.eq) goto loc_8241B72C;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bne cr6,0x8241b6fc
	if (!ctx.cr6.eq) goto loc_8241B6FC;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8241b724
	goto loc_8241B724;
loc_8241B6FC:
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// bne cr6,0x8241b72c
	if (!ctx.cr6.eq) goto loc_8241B72C;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bge cr6,0x8241b72c
	if (!ctx.cr6.lt) goto loc_8241B72C;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x8241b72c
	if (!ctx.cr6.eq) goto loc_8241B72C;
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_8241B724:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x8241b6c4
	if (ctx.cr6.lt) goto loc_8241B6C4;
loc_8241B72C:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bge cr6,0x8241b75c
	if (!ctx.cr6.lt) goto loc_8241B75C;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8241af70
	ctx.lr = 0x8241B744;
	sub_8241AF70(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r11.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x8241b6b4
	goto loc_8241B6B4;
loc_8241B75C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r27,1
	ctx.r3.s64 = r27.s64 + 1;
	// stb r11,0(r29)
	REX_STORE_U8(r29.u32 + 0, ctx.r11.u8);
	// b 0x8241b770
	goto loc_8241B770;
loc_8241B76C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241B770:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8243A648) {
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
	ctx.lr = 0x8243A650;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,24(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8243a944
	if (ctx.cr6.lt) goto loc_8243A944;
	// beq cr6,0x8243a8bc
	if (ctx.cr6.eq) goto loc_8243A8BC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8243a820
	if (ctx.cr6.lt) goto loc_8243A820;
	// beq cr6,0x8243a77c
	if (ctx.cr6.eq) goto loc_8243A77C;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8243a6a0
	if (ctx.cr6.eq) goto loc_8243A6A0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x8243ab44
	goto loc_8243AB44;
loc_8243A6A0:
	// lwz r10,52(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 52);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 8);
	// divwu r27,r9,r10
	r27.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8243a6c0
	if (!ctx.cr6.gt) goto loc_8243A6C0;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8243A6C0:
	// mullw. r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8243a6fc
	if (ctx.cr0.eq) goto loc_8243A6FC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_8243A6D4:
	// rlwinm r8,r11,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r9,r11,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8243a6d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A6D4;
loc_8243A6FC:
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8243a774
	if (ctx.cr6.eq) goto loc_8243A774;
loc_8243A70C:
	// lhz r11,10(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 10);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8243a768
	if (ctx.cr0.eq) goto loc_8243A768;
	// li r30,0
	r30.s64 = 0;
loc_8243A720:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r31,r11,r30
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x82438da8
	ctx.lr = 0x8243A740;
	sub_82438DA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8243ab44
	if (ctx.cr0.lt) goto loc_8243AB44;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 10);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// blt cr6,0x8243a720
	if (ctx.cr6.lt) goto loc_8243A720;
loc_8243A768:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x8243a70c
	if (ctx.cr6.lt) goto loc_8243A70C;
loc_8243A774:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243ab44
	goto loc_8243AB44;
loc_8243A77C:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8243a790
	if (!ctx.cr6.gt) goto loc_8243A790;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8243A790:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243a994
	if (ctx.cr6.eq) goto loc_8243A994;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_8243A7A0:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8243a814
	if (ctx.cr0.eq) goto loc_8243A814;
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
loc_8243A7B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8243a800
	if (ctx.cr6.eq) goto loc_8243A800;
loc_8243A7C4:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8243a7e8
	if (ctx.cr6.gt) goto loc_8243A7E8;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x8243a7e8
	if (ctx.cr6.gt) goto loc_8243A7E8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x8243a7ec
	goto loc_8243A7EC;
loc_8243A7E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8243A7EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8243a7c4
	if (ctx.cr6.lt) goto loc_8243A7C4;
loc_8243A800:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243a7b8
	if (ctx.cr6.lt) goto loc_8243A7B8;
loc_8243A814:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x8243a7a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A7A0;
	// b 0x8243a994
	goto loc_8243A994;
loc_8243A820:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8243a834
	if (!ctx.cr6.gt) goto loc_8243A834;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8243A834:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243a994
	if (ctx.cr6.eq) goto loc_8243A994;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_8243A844:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8243a8b0
	if (ctx.cr0.eq) goto loc_8243A8B0;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_8243A858:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243a8a0
	if (ctx.cr6.eq) goto loc_8243A8A0;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_8243A868:
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bgt cr6,0x8243a884
	if (ctx.cr6.gt) goto loc_8243A884;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8243a884
	if (ctx.cr6.gt) goto loc_8243A884;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x8243a888
	goto loc_8243A888;
loc_8243A884:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243A888:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243a868
	if (ctx.cr6.lt) goto loc_8243A868;
loc_8243A8A0:
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8243a858
	if (ctx.cr6.lt) goto loc_8243A858;
loc_8243A8B0:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x8243a844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A844;
	// b 0x8243a994
	goto loc_8243A994;
loc_8243A8BC:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8243a8d0
	if (!ctx.cr6.gt) goto loc_8243A8D0;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8243A8D0:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243a994
	if (ctx.cr6.eq) goto loc_8243A994;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
loc_8243A8E4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243a934
	if (ctx.cr6.eq) goto loc_8243A934;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8243A8F4:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// ble cr6,0x8243a904
	if (!ctx.cr6.gt) goto loc_8243A904;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8243a91c
	goto loc_8243A91C;
loc_8243A904:
	// clrlwi r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r5,r8,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
loc_8243A91C:
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8243a8f4
	if (ctx.cr6.lt) goto loc_8243A8F4;
loc_8243A934:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// blt cr6,0x8243a8e4
	if (ctx.cr6.lt) goto loc_8243A8E4;
	// b 0x8243a994
	goto loc_8243A994;
loc_8243A944:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8243a958
	if (!ctx.cr6.gt) goto loc_8243A958;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8243A958:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243a994
	if (ctx.cr6.eq) goto loc_8243A994;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_8243A96C:
	// rlwinm r8,r11,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r9,r11,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8243a96c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A96C;
loc_8243A994:
	// lhz r10,2(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8243aa18
	if (ctx.cr6.eq) goto loc_8243AA18;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// beq cr6,0x8243a9e4
	if (ctx.cr6.eq) goto loc_8243A9E4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8243aa18
	if (!ctx.cr6.eq) goto loc_8243AA18;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243aa18
	if (ctx.cr6.eq) goto loc_8243AA18;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8243A9C8:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8243a9c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A9C8;
	// b 0x8243aa18
	goto loc_8243AA18;
loc_8243A9E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243aa18
	if (ctx.cr6.eq) goto loc_8243AA18;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_8243A9FC:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8243aa10
	if (!ctx.cr6.eq) goto loc_8243AA10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243AA10:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8243a9fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243A9FC;
loc_8243AA18:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8243aaf4
	if (ctx.cr0.eq) goto loc_8243AAF4;
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8243aa3c
	if (ctx.cr6.eq) goto loc_8243AA3C;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// b 0x8243aa44
	goto loc_8243AA44;
loc_8243AA3C:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_8243AA44:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8243aaf4
	if (ctx.cr0.eq) goto loc_8243AAF4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8243aa60
	if (!ctx.cr6.eq) goto loc_8243AA60;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-21408
	ctx.r3.s64 = ctx.r9.s64 + -21408;
	// b 0x8243aa68
	goto loc_8243AA68;
loc_8243AA60:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-21424
	ctx.r3.s64 = ctx.r9.s64 + -21424;
loc_8243AA68:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// mullw. r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x8243aaf4
	if (ctx.cr0.eq) goto loc_8243AAF4;
	// mullw r8,r9,r7
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
loc_8243AA80:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8243aabc
	if (!ctx.cr6.gt) goto loc_8243AABC;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8243AAA0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r5,r10,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stwx r5,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// bdnz 0x8243aaa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243AAA0;
loc_8243AABC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243aaec
	if (ctx.cr6.eq) goto loc_8243AAEC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8243AACC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stwx r5,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// bdnz 0x8243aacc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243AACC;
loc_8243AAEC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8243aa80
	if (!ctx.cr6.eq) goto loc_8243AA80;
loc_8243AAF4:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r31
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8243ab0c
	if (!ctx.cr6.gt) goto loc_8243AB0C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8243AB0C:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243ab24
	if (!ctx.cr6.eq) goto loc_8243AB24;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8243ab44
	goto loc_8243AB44;
loc_8243AB24:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x8243AB3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8243AB44:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8245A588) {
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
	// addi r4,r10,16616
	ctx.r4.s64 = ctx.r10.s64 + 16616;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245A5AC;
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

DEFINE_REX_FUNC(sub_8245E318) {
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
	// addi r5,r11,18460
	ctx.r5.s64 = ctx.r11.s64 + 18460;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E344;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824746c0
	ctx.lr = 0x8245E34C;
	sub_824746C0(ctx, base);
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

DEFINE_REX_FUNC(sub_8245E8B0) {
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
	// addi r5,r11,18628
	ctx.r5.s64 = ctx.r11.s64 + 18628;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E8DC;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473650
	ctx.lr = 0x8245E8E4;
	sub_82473650(ctx, base);
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

DEFINE_REX_FUNC(sub_82460058) {
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
	ctx.lr = 0x82460060;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r22,8320
	r22.s64 = 545259520;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r25,r11,12
	r25.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// beq cr6,0x8246008c
	if (ctx.cr6.eq) goto loc_8246008C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824602c0
	goto loc_824602C0;
loc_8246008C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r24,0
	r24.s64 = 0;
loc_82460098:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82460128
	if (ctx.cr6.eq) goto loc_82460128;
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
loc_824600B4:
	// add r11,r24,r6
	ctx.r11.u64 = r24.u64 + ctx.r6.u64;
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r3,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,4(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82460128
	if (!ctx.cr6.eq) goto loc_82460128;
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x82460128
	if (!ctx.cr6.eq) goto loc_82460128;
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x82460128
	if (!ctx.cr6.eq) goto loc_82460128;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82460128
	if (!ctx.cr6.eq) goto loc_82460128;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, ctx.xer);
	// blt cr6,0x824600b4
	if (ctx.cr6.lt) goto loc_824600B4;
loc_82460128:
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, ctx.xer);
	// beq cr6,0x824602a8
	if (ctx.cr6.eq) goto loc_824602A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824787f8
	ctx.lr = 0x8246014C;
	sub_824787F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824602c8
	if (ctx.cr6.eq) goto loc_824602C8;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r26,r3,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwzx r29,r26,r11
	r29.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// beq cr6,0x8246023c
	if (ctx.cr6.eq) goto loc_8246023C;
	// li r30,0
	r30.s64 = 0;
loc_82460174:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// add r10,r24,r28
	ctx.r10.u64 = r24.u64 + r28.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r21,r10,2,0,29
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// stwx r11,r30,r9
	REX_STORE_U32(r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82478918
	ctx.lr = 0x824601B0;
	sub_82478918(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824602c8
	if (ctx.cr6.eq) goto loc_824602C8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blt cr6,0x82460174
	if (ctx.cr6.lt) goto loc_82460174;
loc_8246023C:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82460240:
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82460270
	if (ctx.cr6.gt) goto loc_82460270;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8246028c
	if (ctx.cr6.eq) goto loc_8246028C;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// bne cr6,0x8246028c
	if (!ctx.cr6.eq) goto loc_8246028C;
loc_82460270:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x82460240
	goto loc_82460240;
loc_8246028C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
loc_824602A8:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// add r24,r24,r25
	r24.u64 = r24.u64 + r25.u64;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(r23.u32, 2, ctx.xer);
	// blt cr6,0x82460098
	if (ctx.cr6.lt) goto loc_82460098;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_824602C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_824602C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824602c0
	goto loc_824602C0;
}

DEFINE_REX_FUNC(sub_82474360) {
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
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824715b8
	ctx.lr = 0x8247437C;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247444c
	if (ctx.cr0.lt) goto loc_8247444C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r4,-4096
	ctx.r4.s64 = -268435456;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// ori r4,r4,2048
	ctx.r4.u64 = ctx.r4.u64 | 2048;
	// lwz r11,316(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824743B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247444c
	if (ctx.cr0.lt) goto loc_8247444C;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
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
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x824743EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247444c
	if (ctx.cr0.lt) goto loc_8247444C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247444c
	if (ctx.cr0.lt) goto loc_8247444C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247444c
	if (ctx.cr0.lt) goto loc_8247444C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x82474440;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8247444c
	if (ctx.cr0.lt) goto loc_8247444C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8247444C:
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

DEFINE_REX_FUNC(sub_82478220) {
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
	// bl 0x82448598
	ctx.lr = 0x82478238;
	sub_82448598(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82478998) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824789A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82477ac8
	ctx.lr = 0x824789B4;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824789c8
	if (ctx.cr0.eq) goto loc_824789C8;
	// bl 0x824773d0
	ctx.lr = 0x824789C0;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824789cc
	goto loc_824789CC;
loc_824789C8:
	// li r31,0
	r31.s64 = 0;
loc_824789CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824789dc
	if (!ctx.cr6.eq) goto loc_824789DC;
loc_824789D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82478a10
	goto loc_82478A10;
loc_824789DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477e80
	ctx.lr = 0x824789E8;
	sub_82477E80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82478a04
	if (!ctx.cr0.lt) goto loc_82478A04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x824789F8;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x82478A00;
	sub_82477B20(ctx, base);
	// b 0x824789d4
	goto loc_824789D4;
loc_82478A04:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824785e8
	ctx.lr = 0x82478A10;
	sub_824785E8(ctx, base);
loc_82478A10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8247BFA8) {
	REX_FUNC_PROLOGUE();
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8247c008
	if (!ctx.cr6.eq) goto loc_8247C008;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8247c008
	if (!ctx.cr6.eq) goto loc_8247C008;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8247C008:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247FEA8) {
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
	ctx.lr = 0x8247FEB0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,12(r4)
	r18.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// divwu r15,r11,r18
	r15.u64 = uint32_t(r18.u32 ? ctx.r11.u32 / r18.u32 : 0);
	// twllei r18,0
	if (r18.s32 == 0 || r18.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x824774e8
	ctx.lr = 0x8247FED4;
	sub_824774E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq 0x8247ff90
	if (ctx.cr0.eq) goto loc_8247FF90;
	// li r29,0
	r29.s64 = 0;
	// beq cr6,0x824803fc
	if (ctx.cr6.eq) goto loc_824803FC;
	// li r28,0
	r28.s64 = 0;
	// li r17,-1
	r17.s64 = -1;
loc_8247FEF0:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// rlwimi r4,r11,0,12,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFF00000);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824787f8
	ctx.lr = 0x8247FF0C;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824801a0
	if (ctx.cr6.eq) goto loc_824801A0;
	// lwz r11,24(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477420
	ctx.lr = 0x8247FF2C;
	sub_82477420(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8247ff6c
	if (ctx.cr6.eq) goto loc_8247FF6C;
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8247FF40:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8247ff40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247FF40;
loc_8247FF6C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r29,r18
	ctx.cr6.compare<uint32_t>(r29.u32, r18.u32, ctx.xer);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8247fef0
	if (ctx.cr6.lt) goto loc_8247FEF0;
	// b 0x824803fc
	goto loc_824803FC;
loc_8247FF90:
	// mr r16,r18
	r16.u64 = r18.u64;
	// li r17,-1
	r17.s64 = -1;
	// li r26,0
	r26.s64 = 0;
	// beq cr6,0x8248012c
	if (ctx.cr6.eq) goto loc_8248012C;
	// li r27,0
	r27.s64 = 0;
loc_8247FFA4:
	// lwz r29,16(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r27.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248011c
	if (ctx.cr6.eq) goto loc_8248011C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 20);
	// lwz r9,16(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248011c
	if (ctx.cr0.eq) goto loc_8248011C;
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(r26.u32, r18.u32, ctx.xer);
	// bge cr6,0x82480028
	if (!ctx.cr6.lt) goto loc_82480028;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// subf r6,r26,r18
	ctx.r6.u64 = r18.u64 - r26.u64;
loc_8247FFF0:
	// lwzx r11,r29,r7
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248001c
	if (ctx.cr6.eq) goto loc_8248001C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r4,r11,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// bl 0x8247a530
	ctx.lr = 0x82480010;
	sub_8247A530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8248001c
	if (ctx.cr0.eq) goto loc_8248001C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8248001C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8247fff0
	if (!ctx.cr0.eq) goto loc_8247FFF0;
loc_82480028:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// rlwimi r4,r30,0,12,31
	ctx.r4.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFF00000);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824787f8
	ctx.lr = 0x82480040;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824801a0
	if (ctx.cr6.eq) goto loc_824801A0;
	// lwz r11,24(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477420
	ctx.lr = 0x82480060;
	sub_82477420(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(r26.u32, r18.u32, ctx.xer);
	// lwzx r4,r11,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// bge cr6,0x8248011c
	if (!ctx.cr6.lt) goto loc_8248011C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r28,0
	r28.s64 = 0;
loc_82480080:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8248010c
	if (ctx.cr6.eq) goto loc_8248010C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8247a530
	ctx.lr = 0x82480098;
	sub_8247A530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8248010c
	if (ctx.cr0.eq) goto loc_8248010C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x824800e8
	if (ctx.cr6.eq) goto loc_824800E8;
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
loc_824800B0:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + r29.u64;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r9,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// bdnz 0x824800b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824800B0;
loc_824800E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r16,r16,-1
	r16.s64 = r16.s64 + -1;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stwx r11,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stwx r17,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, r17.u32);
loc_8248010C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r29,r18
	ctx.cr6.compare<uint32_t>(r29.u32, r18.u32, ctx.xer);
	// blt cr6,0x82480080
	if (ctx.cr6.lt) goto loc_82480080;
loc_8248011C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(r26.u32, r18.u32, ctx.xer);
	// blt cr6,0x8247ffa4
	if (ctx.cr6.lt) goto loc_8247FFA4;
loc_8248012C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824777d8
	ctx.lr = 0x82480134;
	sub_824777D8(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// li r20,1
	r20.s64 = 1;
	// li r19,1
	r19.s64 = 1;
	// bne 0x824803f4
	if (!ctx.cr0.eq) goto loc_824803F4;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824803f4
	if (ctx.cr6.eq) goto loc_824803F4;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82480158:
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8248018c
	if (ctx.cr6.eq) goto loc_8248018C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r22)
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + 20);
	// lwz r6,16(r22)
	ctx.r6.u64 = REX_LOAD_U32(r22.u32 + 16);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824801ac
	if (!ctx.cr0.eq) goto loc_824801AC;
loc_8248018C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r18.u32, ctx.xer);
	// blt cr6,0x82480158
	if (ctx.cr6.lt) goto loc_82480158;
	// b 0x824803f4
	goto loc_824803F4;
loc_824801A0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82480400
	goto loc_82480400;
loc_824801AC:
	// li r21,1
	r21.s64 = 1;
	// b 0x824803f4
	goto loc_824803F4;
loc_824801B4:
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(r16.u32, 4, ctx.xer);
	// bgt cr6,0x824801cc
	if (ctx.cr6.gt) goto loc_824801CC;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x824801cc
	if (!ctx.cr6.eq) goto loc_824801CC;
	// li r20,0
	r20.s64 = 0;
	// li r19,0
	r19.s64 = 0;
loc_824801CC:
	// li r25,0
	r25.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824803fc
	if (ctx.cr6.eq) goto loc_824803FC;
	// lwz r24,16(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r26,0
	r26.s64 = 0;
loc_824801E8:
	// lwzx r11,r24,r26
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + r26.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248029c
	if (ctx.cr6.eq) goto loc_8248029C;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_82480200:
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// bge cr6,0x8248028c
	if (!ctx.cr6.lt) goto loc_8248028C;
	// lwzx r11,r24,r30
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8248027c
	if (ctx.cr6.eq) goto loc_8248027C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x82480254
	if (ctx.cr6.eq) goto loc_82480254;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82480254
	if (ctx.cr6.eq) goto loc_82480254;
	// lwz r9,20(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248027c
	if (ctx.cr0.eq) goto loc_8248027C;
loc_82480254:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82480278
	if (ctx.cr6.eq) goto loc_82480278;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8247fde0
	ctx.lr = 0x82480270;
	sub_8247FDE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8248027c
	if (!ctx.cr0.eq) goto loc_8248027C;
loc_82480278:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8248027C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r18
	ctx.cr6.compare<uint32_t>(r29.u32, r18.u32, ctx.xer);
	// blt cr6,0x82480200
	if (ctx.cr6.lt) goto loc_82480200;
loc_8248028C:
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(r25.u32, r28.u32, ctx.xer);
	// bge cr6,0x8248029c
	if (!ctx.cr6.lt) goto loc_8248029C;
	// mr r25,r28
	r25.u64 = r28.u64;
	// mr r23,r27
	r23.u64 = r27.u64;
loc_8248029C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(r27.u32, r18.u32, ctx.xer);
	// blt cr6,0x824801e8
	if (ctx.cr6.lt) goto loc_824801E8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824803fc
	if (ctx.cr6.eq) goto loc_824803FC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// rlwimi r4,r25,0,12,31
	ctx.r4.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFF00000);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824787f8
	ctx.lr = 0x824802CC;
	sub_824787F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824801a0
	if (ctx.cr6.eq) goto loc_824801A0;
	// lwz r11,24(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477420
	ctx.lr = 0x824802EC;
	sub_82477420(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// lwzx r25,r11,r10
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82480308:
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(r26.u32, 16, ctx.xer);
	// bge cr6,0x824803f4
	if (!ctx.cr6.lt) goto loc_824803F4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824803e4
	if (ctx.cr6.eq) goto loc_824803E4;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x82480354
	if (ctx.cr6.eq) goto loc_82480354;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82480354
	if (ctx.cr6.eq) goto loc_82480354;
	// lwz r10,20(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824803e4
	if (ctx.cr0.eq) goto loc_824803E4;
loc_82480354:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82480378
	if (ctx.cr6.eq) goto loc_82480378;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8247fde0
	ctx.lr = 0x82480370;
	sub_8247FDE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824803e4
	if (!ctx.cr0.eq) goto loc_824803E4;
loc_82480378:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x824803c0
	if (ctx.cr6.eq) goto loc_824803C0;
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
loc_82480388:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + r27.u64;
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// bdnz 0x82480388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82480388;
loc_824803C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r16,r16,-1
	r16.s64 = r16.s64 + -1;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stwx r11,r10,r26
	REX_STORE_U32(ctx.r10.u32 + r26.u32, ctx.r11.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stwx r17,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, r17.u32);
loc_824803E4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(r27.u32, r18.u32, ctx.xer);
	// blt cr6,0x82480308
	if (ctx.cr6.lt) goto loc_82480308;
loc_824803F4:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x824801b4
	if (!ctx.cr6.eq) goto loc_824801B4;
loc_824803FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82480400:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_824B4B98) {
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
	ctx.lr = 0x824B4BA0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r28,540(r3)
	REX_STORE_U32(ctx.r3.u32 + 540, r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r28,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r28.u64);
	// addi r3,r3,508
	ctx.r3.s64 = ctx.r3.s64 + 508;
	// stw r28,544(r31)
	REX_STORE_U32(r31.u32 + 544, r28.u32);
	// std r28,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r28.u64);
	// mr r27,r28
	r27.u64 = r28.u64;
	// mr r25,r28
	r25.u64 = r28.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// mr r20,r28
	r20.u64 = r28.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824B4BE0;
	sub_826A2E60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r21,r28
	r21.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b4d4c
	if (!ctx.cr6.gt) goto loc_824B4D4C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r22,r28
	r22.u64 = r28.u64;
	// addi r24,r11,30208
	r24.s64 = ctx.r11.s64 + 30208;
	// addi r23,r10,2156
	r23.s64 = ctx.r10.s64 + 2156;
loc_824B4C04:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r30,r11,r22
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x824b4c4c
	if (ctx.cr6.eq) goto loc_824B4C4C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824b4c4c
	if (!ctx.cr6.eq) goto loc_824B4C4C;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 96);
	// li r5,4511
	ctx.r5.s64 = 4511;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B4C44;
	sub_82489C30(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// li r27,1
	r27.s64 = 1;
loc_824B4C4C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b4cd8
	if (ctx.cr0.eq) goto loc_824B4CD8;
	// lbz r10,110(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 110);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x824b4d4c
	if (ctx.cr6.gt) goto loc_824B4D4C;
	// lbz r11,111(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 111);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824b4cb4
	if (ctx.cr6.eq) goto loc_824B4CB4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x824b4d38
	if (!ctx.cr6.eq) goto loc_824B4D38;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824b4d38
	if (!ctx.cr6.eq) goto loc_824B4D38;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b4d38
	if (ctx.cr6.eq) goto loc_824B4D38;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x824b4d38
	if (!ctx.cr6.eq) goto loc_824B4D38;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 96);
	// li r5,4528
	ctx.r5.s64 = 4528;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B4CA8;
	sub_82489C30(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// li r27,1
	r27.s64 = 1;
	// b 0x824b4d38
	goto loc_824B4D38;
loc_824B4CB4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824b4d38
	if (!ctx.cr6.eq) goto loc_824B4D38;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r20,96(r30)
	r20.u64 = REX_LOAD_U32(r30.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x824b4d38
	goto loc_824B4D38;
loc_824B4CD8:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824b4d38
	if (ctx.cr0.eq) goto loc_824B4D38;
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824b4d38
	if (!ctx.cr0.eq) goto loc_824B4D38;
	// lbz r10,111(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 111);
	// lbz r11,110(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 110);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x824b4d10
	if (ctx.cr6.eq) goto loc_824B4D10;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824b4d38
	if (!ctx.cr6.eq) goto loc_824B4D38;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x824b4d38
	if (!ctx.cr6.lt) goto loc_824B4D38;
	// addi r10,r11,127
	ctx.r10.s64 = ctx.r11.s64 + 127;
	// b 0x824b4d1c
	goto loc_824B4D1C;
loc_824B4D10:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x824b4d38
	if (!ctx.cr6.lt) goto loc_824B4D38;
	// addi r10,r11,135
	ctx.r10.s64 = ctx.r11.s64 + 135;
loc_824B4D1C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824b4d38
	if (!ctx.cr6.lt) goto loc_824B4D38;
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r11.u32);
loc_824B4D38:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b4c04
	if (ctx.cr6.lt) goto loc_824B4C04;
loc_824B4D4C:
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824B4D5C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x824b4d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B4D5C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824b4d94
	if (ctx.cr6.eq) goto loc_824B4D94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4530
	ctx.r5.s64 = 4530;
	// addi r6,r11,30104
	ctx.r6.s64 = ctx.r11.s64 + 30104;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B4D90;
	sub_82489C30(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_824B4D94:
	// subfic r11,r27,0
	ctx.xer.ca = r27.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r27.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_824C18C8) {
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
	// lwz r30,424(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 424);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c1910
	if (ctx.cr6.eq) goto loc_824C1910;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C190C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824c1a58
	goto loc_824C1A58;
loc_824C1910:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c198c
	if (ctx.cr6.eq) goto loc_824C198C;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824c198c
	if (!ctx.cr6.eq) goto loc_824C198C;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c1954
	if (ctx.cr6.eq) goto loc_824C1954;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c1954
	if (ctx.cr6.eq) goto loc_824C1954;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// b 0x824c198c
	goto loc_824C198C;
loc_824C1954:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824c196c
	if (ctx.cr6.eq) goto loc_824C196C;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r11.u32);
	// b 0x824c198c
	goto loc_824C198C;
loc_824C196C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,46
	ctx.r10.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C198C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C198C:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C19A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,432(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C19B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,68(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824c1a58
	if (!ctx.cr6.eq) goto loc_824C1A58;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c19e0
	if (!ctx.cr6.eq) goto loc_824C19E0;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C19E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C19E0:
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C19F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824c1a18
	if (ctx.cr6.eq) goto loc_824C1A18;
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 464);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C1A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C1A18:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824C1A40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824C1A58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824C1A58:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c1ad0
	if (ctx.cr6.eq) goto loc_824C1AD0;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r5.u32);
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x824c1ad0
	if (ctx.cr6.eq) goto loc_824C1AD0;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824c1ad0
	if (!ctx.cr6.eq) goto loc_824C1AD0;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
loc_824C1AD0:
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

DEFINE_REX_FUNC(sub_824CB238) {
	REX_FUNC_PROLOGUE();
	// b 0x824cafe8
	sub_824CAFE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824CB248) {
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
	ctx.lr = 0x824CB250;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824CB270;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32179
	ctx.r9.s64 = -2108882944;
	// stw r3,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r3.u32);
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// li r27,0
	r27.s64 = 0;
	// addi r7,r9,-21344
	ctx.r7.s64 = ctx.r9.s64 + -21344;
	// addi r6,r8,-21320
	ctx.r6.s64 = ctx.r8.s64 + -21320;
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r6,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r5,304(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824cb2c4
	if (ctx.cr6.eq) goto loc_824CB2C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824CB2C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CB2C4:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r23,1
	r23.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824cb2e4
	if (ctx.cr6.eq) goto loc_824CB2E4;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x824cb2e8
	if (ctx.cr6.gt) goto loc_824CB2E8;
loc_824CB2E4:
	// mr r24,r27
	r24.u64 = r27.u64;
loc_824CB2E8:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824cb528
	if (!ctx.cr6.gt) goto loc_824CB528;
	// addi r28,r11,36
	r28.s64 = ctx.r11.s64 + 36;
	// addi r30,r26,52
	r30.s64 = r26.s64 + 52;
	// li r25,38
	r25.s64 = 38;
loc_824CB304:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,-28(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + -28);
	// lwz r8,-24(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + -24);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r6,320(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r10,312(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r9,316(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 316);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r8,r5,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// divw r11,r5,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// andc r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// andc r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 12);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r8,r7,r6
	ctx.r8.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824cb374
	if (!ctx.cr6.eq) goto loc_824CB374;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-21000
	ctx.r10.s64 = ctx.r11.s64 + -21000;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x824cb510
	goto loc_824CB510;
loc_824CB374:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824cb394
	if (!ctx.cr6.eq) goto loc_824CB394;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x824cb394
	if (!ctx.cr6.eq) goto loc_824CB394;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-21008
	ctx.r10.s64 = ctx.r11.s64 + -21008;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x824cb510
	goto loc_824CB510;
loc_824CB394:
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824cb428
	if (!ctx.cr6.eq) goto loc_824CB428;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x824cb3dc
	if (!ctx.cr6.eq) goto loc_824CB3DC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x824cb3cc
	if (ctx.cr6.eq) goto loc_824CB3CC;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x824cb3cc
	if (!ctx.cr6.gt) goto loc_824CB3CC;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-19912
	ctx.r10.s64 = ctx.r11.s64 + -19912;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x824cb4dc
	goto loc_824CB4DC;
loc_824CB3CC:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-20768
	ctx.r10.s64 = ctx.r11.s64 + -20768;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x824cb4dc
	goto loc_824CB4DC;
loc_824CB3DC:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824cb428
	if (!ctx.cr6.eq) goto loc_824CB428;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x824cb428
	if (!ctx.cr6.eq) goto loc_824CB428;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x824cb418
	if (ctx.cr6.eq) goto loc_824CB418;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x824cb418
	if (!ctx.cr6.gt) goto loc_824CB418;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-19904
	ctx.r10.s64 = ctx.r11.s64 + -19904;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r23,8(r26)
	REX_STORE_U32(r26.u32 + 8, r23.u32);
	// b 0x824cb4dc
	goto loc_824CB4DC;
loc_824CB418:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-20664
	ctx.r10.s64 = ctx.r11.s64 + -20664;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x824cb4dc
	goto loc_824CB4DC;
loc_824CB428:
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r6,r10,r8
	ctx.r6.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// andc r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf. r3,r5,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne 0x824cb4c0
	if (!ctx.cr0.eq) goto loc_824CB4C0;
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r6,r9,r11
	ctx.r6.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// mullw r5,r6,r11
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// andc r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf. r3,r5,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne 0x824cb4c0
	if (!ctx.cr0.eq) goto loc_824CB4C0;
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r6,r9,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// divw r4,r10,r8
	ctx.r4.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// lis r5,-32179
	ctx.r5.s64 = -2108882944;
	// add r10,r27,r26
	ctx.r10.u64 = r27.u64 + r26.u64;
	// add r6,r27,r26
	ctx.r6.u64 = r27.u64 + r26.u64;
	// addi r5,r5,-20984
	ctx.r5.s64 = ctx.r5.s64 + -20984;
	// divw r9,r9,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// andc r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r3.u64;
	// stw r5,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// stb r4,140(r10)
	REX_STORE_U8(ctx.r10.u32 + 140, ctx.r4.u8);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// stb r9,150(r6)
	REX_STORE_U8(ctx.r6.u32 + 150, ctx.r9.u8);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x824cb4dc
	goto loc_824CB4DC;
loc_824CB4C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r25,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r25.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824CB4DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CB4DC:
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r22,316(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 316);
	// lwz r4,312(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x824c1bd0
	ctx.lr = 0x824CB4F0;
	sub_824C1BD0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CB50C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-40(r30)
	REX_STORE_U32(r30.u32 + -40, ctx.r3.u32);
loc_824CB510:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r28,r28,84
	r28.s64 = r28.s64 + 84;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824cb304
	if (ctx.cr6.lt) goto loc_824CB304;
loc_824CB528:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824DBD20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824DBD28;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824dbd74
	if (ctx.cr6.lt) goto loc_824DBD74;
	// lwz r30,108(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dbd74
	if (ctx.cr6.gt) goto loc_824DBD74;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dbd6c
	if (!ctx.cr6.gt) goto loc_824DBD6C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d8358
	ctx.lr = 0x824DBD6C;
	sub_824D8358(ctx, base);
loc_824DBD6C:
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_824DBD74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824DD560) {
	REX_FUNC_PROLOGUE();
	// b 0x824dd048
	sub_824DD048(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD588) {
	REX_FUNC_PROLOGUE();
	// b 0x824dd398
	sub_824DD398(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD700) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a2b40
	sub_826A2B40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD808) {
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// beq cr6,0x824dd88c
	if (ctx.cr6.eq) goto loc_824DD88C;
	// cmplwi cr6,r5,20
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 20, ctx.xer);
	// beq cr6,0x824dd884
	if (ctx.cr6.eq) goto loc_824DD884;
	// cmplwi cr6,r5,21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 21, ctx.xer);
	// beq cr6,0x824dd87c
	if (ctx.cr6.eq) goto loc_824DD87C;
	// cmplwi cr6,r5,22
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 22, ctx.xer);
	// beq cr6,0x824dd870
	if (ctx.cr6.eq) goto loc_824DD870;
	// cmplwi cr6,r5,23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 23, ctx.xer);
	// beq cr6,0x824dd864
	if (ctx.cr6.eq) goto loc_824DD864;
	// bl 0x826b40a0
	ctx.lr = 0x824DD854;
	sub_826B40A0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x824dd8f0
	goto loc_824DD8F0;
loc_824DD864:
	// li r11,11
	ctx.r11.s64 = 11;
loc_824DD868:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x824dd900
	goto loc_824DD900;
loc_824DD870:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x824dd8e8
	goto loc_824DD8E8;
loc_824DD87C:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x824dd868
	goto loc_824DD868;
loc_824DD884:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x824dd868
	goto loc_824DD868;
loc_824DD88C:
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bge cr6,0x824dd8dc
	if (!ctx.cr6.lt) goto loc_824DD8DC;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// beq cr6,0x824dd8cc
	if (ctx.cr6.eq) goto loc_824DD8CC;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// beq cr6,0x824dd87c
	if (ctx.cr6.eq) goto loc_824DD87C;
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x824dd870
	if (ctx.cr6.eq) goto loc_824DD870;
	// cmplwi cr6,r3,23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 23, ctx.xer);
	// beq cr6,0x824dd864
	if (ctx.cr6.eq) goto loc_824DD864;
	// cmplwi cr6,r3,33
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33, ctx.xer);
	// beq cr6,0x824dd884
	if (ctx.cr6.eq) goto loc_824DD884;
	// bl 0x826b40a0
	ctx.lr = 0x824DD8C0;
	sub_826B40A0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x824dd8fc
	goto loc_824DD8FC;
loc_824DD8CC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r4,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// b 0x824dd8f0
	goto loc_824DD8F0;
loc_824DD8DC:
	// rlwinm r11,r6,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_824DD8E8:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_824DD8F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// ble cr6,0x824dd900
	if (!ctx.cr6.gt) goto loc_824DD900;
loc_824DD8FC:
	// bl 0x826b40a0
	ctx.lr = 0x824DD900;
	sub_826B40A0(ctx, base);
loc_824DD900:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x824dd910
	if (ctx.cr6.lt) goto loc_824DD910;
	// bl 0x826b40a0
	ctx.lr = 0x824DD910;
	sub_826B40A0(ctx, base);
loc_824DD910:
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

DEFINE_REX_FUNC(sub_824E44C8) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824e4504
	if (ctx.cr6.eq) goto loc_824E4504;
loc_824E44EC:
	// lis r4,-24435
	ctx.r4.s64 = -1601372160;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x823f0350
	ctx.lr = 0x824E44F8;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824e44ec
	if (!ctx.cr6.eq) goto loc_824E44EC;
loc_824E4504:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4458
	ctx.lr = 0x824E450C;
	sub_824E4458(ctx, base);
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

DEFINE_REX_FUNC(sub_824E74C8) {
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
	ctx.lr = 0x824E74D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824e74f8
	if (ctx.cr6.lt) goto loc_824E74F8;
	// bl 0x826b40a0
	ctx.lr = 0x824E74F8;
	sub_826B40A0(ctx, base);
loc_824E74F8:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r30,0(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,259
	ctx.r10.u64 = ctx.r10.u64 | 259;
	// addi r26,r11,4
	r26.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r28,r31,21
	r28.u64 = r31.u32 & 0x7FF;
	// bgt cr6,0x824e75d4
	if (ctx.cr6.gt) goto loc_824E75D4;
	// rlwinm. r9,r31,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r31,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF0000;
	// li r10,256
	ctx.r10.s64 = 256;
	// beq 0x824e7534
	if (ctx.cr0.eq) goto loc_824E7534;
	// li r10,257
	ctx.r10.s64 = 257;
loc_824E7534:
	// rlwinm. r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824e7540
	if (ctx.cr0.eq) goto loc_824E7540;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_824E7540:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e754c
	if (ctx.cr0.eq) goto loc_824E754C;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_824E754C:
	// ori r9,r10,192
	ctx.r9.u64 = ctx.r10.u64 | 192;
	// rlwinm. r11,r31,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x824e758c
	if (ctx.cr0.eq) goto loc_824E758C;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e7578
	if (ctx.cr0.eq) goto loc_824E7578;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-19976
	ctx.r10.s64 = ctx.r10.s64 + -19976;
	// b 0x824e7580
	goto loc_824E7580;
loc_824E7578:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,-19992
	ctx.r10.s64 = ctx.r10.s64 + -19992;
loc_824E7580:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_824E758C:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// or r29,r10,r9
	r29.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x824e75a8
	if (ctx.cr6.eq) goto loc_824E75A8;
	// bl 0x826b40a0
	ctx.lr = 0x824E75A8;
	sub_826B40A0(ctx, base);
loc_824E75A8:
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// li r10,71
	ctx.r10.s64 = 71;
	// oris r9,r11,81
	ctx.r9.u64 = ctx.r11.u64 | 5308416;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// oris r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 1114112;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r29.u32);
	r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x824e7640
	goto loc_824E7640;
loc_824E75D4:
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x824e75f4
	if (ctx.cr6.eq) goto loc_824E75F4;
	// bl 0x826b40a0
	ctx.lr = 0x824E75F4;
	sub_826B40A0(ctx, base);
loc_824E75F4:
	// li r11,71
	ctx.r11.s64 = 71;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e6318
	ctx.lr = 0x824E7614;
	sub_824E6318(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e6438
	ctx.lr = 0x824E762C;
	sub_824E6438(ctx, base);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e7640
	if (ctx.cr6.eq) goto loc_824E7640;
	// bl 0x826b40a0
	ctx.lr = 0x824E7640;
	sub_826B40A0(ctx, base);
loc_824E7640:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824F0950) {
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
	ctx.lr = 0x824F0958;
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-25912
	r29.s64 = ctx.r10.s64 + -25912;
	// bne cr6,0x824f09a0
	if (!ctx.cr6.eq) goto loc_824F09A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26852
	ctx.r5.s64 = ctx.r11.s64 + -26852;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1177
	ctx.r7.s64 = 1177;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F09A0;
	sub_824EA978(ctx, base);
loc_824F09A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824F09B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x824f09e0
	if (!ctx.cr0.eq) goto loc_824F09E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-25088
	ctx.r5.s64 = ctx.r11.s64 + -25088;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1186
	ctx.r7.s64 = 1186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F09D8;
	sub_824EA978(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x824f0a00
	goto loc_824F0A00;
loc_824F09E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r28.u32);
	// stw r27,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r27.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r26.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2436);
	// bl 0x824ef768
	ctx.lr = 0x824F09FC;
	sub_824EF768(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F0A00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824F7010) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824f706c
	if (ctx.cr6.eq) goto loc_824F706C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// bne cr6,0x824f70c8
	if (!ctx.cr6.eq) goto loc_824F70C8;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// bne cr6,0x824f70c8
	if (!ctx.cr6.eq) goto loc_824F70C8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,2,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824f70c8
	if (!ctx.cr6.eq) goto loc_824F70C8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824f706c
	if (ctx.cr6.eq) goto loc_824F706C;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f70c8
	if (!ctx.cr0.eq) goto loc_824F70C8;
loc_824F706C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824f70c8
	if (!ctx.cr0.eq) goto loc_824F70C8;
	// rlwinm r9,r11,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r8,r10,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824f70c8
	if (!ctx.cr6.eq) goto loc_824F70C8;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f70cc
	if (ctx.cr0.eq) goto loc_824F70CC;
loc_824F70C8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_824F70CC:
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824FFB10) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824ffb40
	if (ctx.cr6.lt) goto loc_824FFB40;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x824ffb44
	if (!ctx.cr6.gt) goto loc_824FFB44;
loc_824FFB40:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824FFB44:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ffb54
	if (ctx.cr0.eq) goto loc_824FFB54;
loc_824FFB4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824ffbc0
	goto loc_824FFBC0;
loc_824FFB54:
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// blt cr6,0x824ffbbc
	if (ctx.cr6.lt) goto loc_824FFBBC;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// ble cr6,0x824ffb4c
	if (!ctx.cr6.gt) goto loc_824FFB4C;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x824ffb74
	if (ctx.cr6.eq) goto loc_824FFB74;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// b 0x824ffbb8
	goto loc_824FFBB8;
loc_824FFB74:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824f71b8
	ctx.lr = 0x824FFB90;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x824ffbbc
	if (!ctx.cr6.eq) goto loc_824FFBBC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824ffb4c
	if (ctx.cr6.eq) goto loc_824FFB4C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
loc_824FFBB8:
	// beq cr6,0x824ffb4c
	if (ctx.cr6.eq) goto loc_824FFB4C;
loc_824FFBBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824FFBC0:
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

DEFINE_REX_FUNC(sub_82504880) {
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
	ctx.lr = 0x82504888;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82504910
	if (!ctx.cr0.eq) goto loc_82504910;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82504910
	if (ctx.cr0.eq) goto loc_82504910;
	// clrlwi r27,r5,24
	r27.u64 = ctx.r5.u32 & 0xFF;
loc_825048B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82503c40
	ctx.lr = 0x825048C0;
	sub_82503C40(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825048f4
	if (ctx.cr6.eq) goto loc_825048F4;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_825048CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825048f4
	if (ctx.cr6.eq) goto loc_825048F4;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x825048ec
	if (!ctx.cr6.eq) goto loc_825048EC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82503c40
	ctx.lr = 0x825048EC;
	sub_82503C40(ctx, base);
loc_825048EC:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x825048cc
	goto loc_825048CC;
loc_825048F4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82504910
	if (!ctx.cr0.eq) goto loc_82504910;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825048b4
	if (!ctx.cr0.eq) goto loc_825048B4;
loc_82504910:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8250B4D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8250B4E0;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8250ae78
	ctx.lr = 0x8250B4F8;
	sub_8250AE78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8250b520
	if (ctx.cr0.eq) goto loc_8250B520;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x8250b560
	if (ctx.cr6.eq) goto loc_8250B560;
	// rlwinm r11,r29,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x8250B520;
	sub_824E4368(ctx, base);
loc_8250B520:
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ff930
	ctx.lr = 0x8250B530;
	sub_824FF930(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// rlwimi r9,r10,13,7,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1FFE000) | (ctx.r9.u64 & 0xFFFFFFFFFE001FFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8250B560;
	sub_8250AD28(ctx, base);
loc_8250B560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82516538) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82516770) {
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
	ctx.lr = 0x82516778;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r3,-8
	r28.s64 = ctx.r3.s64 + -8;
	// li r31,4
	r31.s64 = 4;
loc_82516788:
	// ldu r30,8(r28)
	ea = 8 + r28.u32;
	r30.u64 = REX_LOAD_U64(ea);
	r28.u32 = ea;
	// rldicl r3,r30,32,32
	ctx.r3.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF;
	// bl 0x825162c0
	ctx.lr = 0x82516794;
	sub_825162C0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(r30.u32, 0);
	// bl 0x825162c0
	ctx.lr = 0x825167A0;
	sub_825162C0(ctx, base);
	// add r11,r27,r3
	ctx.r11.u64 = r27.u64 + ctx.r3.u64;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bne 0x82516788
	if (!ctx.cr0.eq) goto loc_82516788;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82518AA8) {
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
	ctx.lr = 0x82518AB0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,192(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r27
	r30.u64 = r27.u64;
	// beq 0x82518b0c
	if (ctx.cr0.eq) goto loc_82518B0C;
loc_82518AD8:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825188c0
	ctx.lr = 0x82518AF0;
	sub_825188C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82518c20
	if (!ctx.cr0.eq) goto loc_82518C20;
	// lwz r10,192(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 192);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82518ad8
	if (ctx.cr6.lt) goto loc_82518AD8;
loc_82518B0C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82518b1c
	if (!ctx.cr6.eq) goto loc_82518B1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82518c24
	goto loc_82518C24;
loc_82518B1C:
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82518c20
	if (ctx.cr0.eq) goto loc_82518C20;
	// lwz r10,676(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 676);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mulli r9,r28,5
	ctx.r9.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(5));
loc_82518B30:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82518c2c
	if (!ctx.cr6.eq) goto loc_82518C2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82518b30
	if (ctx.cr6.lt) goto loc_82518B30;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82518B58:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82518c20
	if (ctx.cr0.eq) goto loc_82518C20;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// lwz r11,792(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r27,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r27.u64);
	// std r27,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r27.u64);
	// std r27,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r27.u64);
	// std r27,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, r27.u64);
	// bne cr6,0x82518b88
	if (!ctx.cr6.eq) goto loc_82518B88;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82518B88:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82518ba0
	if (!ctx.cr6.lt) goto loc_82518BA0;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8251ed40
	ctx.lr = 0x82518BA0;
	sub_8251ED40(ctx, base);
loc_82518BA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82517b10
	ctx.lr = 0x82518BA8;
	sub_82517B10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82518178
	ctx.lr = 0x82518BC4;
	sub_82518178(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,192(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 192);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// or r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 | ctx.r6.u64;
	// bl 0x825185b0
	ctx.lr = 0x82518C04;
	sub_825185B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82517168
	ctx.lr = 0x82518C14;
	sub_82517168(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82518c24
	if (ctx.cr6.eq) goto loc_82518C24;
loc_82518C20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82518C24:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d00
	return;
loc_82518C2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82518b58
	goto loc_82518B58;
}

DEFINE_REX_FUNC(sub_82528D80) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82528d9c
	if (ctx.cr6.lt) goto loc_82528D9C;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82528da0
	if (!ctx.cr6.gt) goto loc_82528DA0;
loc_82528D9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82528DA0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82528db0
	if (!ctx.cr0.eq) goto loc_82528DB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82528DB0:
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// beq cr6,0x82528dc4
	if (ctx.cr6.eq) goto loc_82528DC4;
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82528dc8
	if (!ctx.cr6.eq) goto loc_82528DC8;
loc_82528DC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82528DC8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8252DEA8) {
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
	ctx.lr = 0x8252DEB0;
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8252deec
	if (!ctx.cr6.eq) goto loc_8252DEEC;
	// rlwinm r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x8252df6c
	goto loc_8252DF6C;
loc_8252DEEC:
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8252df54
	if (ctx.cr6.eq) goto loc_8252DF54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_8252DF10:
	// srw r11,r26,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r26.u32 >> (r31.u8 & 0x3F));
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b8558
	ctx.lr = 0x8252DF24;
	sub_825B8558(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x8252df38
	if (!ctx.cr6.lt) goto loc_8252DF38;
	// li r25,1
	r25.s64 = 1;
	// b 0x8252df44
	goto loc_8252DF44;
loc_8252DF38:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x8252df44
	if (!ctx.cr6.gt) goto loc_8252DF44;
	// li r24,1
	r24.s64 = 1;
loc_8252DF44:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8252df10
	if (!ctx.cr0.eq) goto loc_8252DF10;
loc_8252DF54:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252df68
	if (ctx.cr0.eq) goto loc_8252DF68;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8252df6c
	if (!ctx.cr0.eq) goto loc_8252DF6C;
loc_8252DF68:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8252DF6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82534560) {
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
	ctx.lr = 0x82534568;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r25,r4,4
	r25.s64 = ctx.r4.s64 + 4;
loc_82534578:
	// lwz r31,0(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825347ac
	if (ctx.cr6.eq) goto loc_825347AC;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82534798
	if (ctx.cr6.eq) goto loc_82534798;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r8,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82534798
	if (ctx.cr0.eq) goto loc_82534798;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825345e0
	if (ctx.cr6.eq) goto loc_825345E0;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r7,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
loc_825345BC:
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x825345bc
	if (ctx.cr6.lt) goto loc_825345BC;
loc_825345E0:
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825345EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534660
	if (ctx.cr6.eq) goto loc_82534660;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// addi r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 + 11;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// bne cr6,0x82534624
	if (!ctx.cr6.eq) goto loc_82534624;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// b 0x8253462c
	goto loc_8253462C;
loc_82534624:
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82534798
	if (!ctx.cr6.eq) goto loc_82534798;
loc_8253462C:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r6,r9,27,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// andc r8,r28,r8
	ctx.r8.u64 = r28.u64 & ~ctx.r8.u64;
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// or r28,r10,r8
	r28.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// b 0x825345ec
	goto loc_825345EC;
loc_82534660:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r9,r10,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// beq 0x82534680
	if (ctx.cr0.eq) goto loc_82534680;
	// rlwinm. r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82534680
	if (ctx.cr0.eq) goto loc_82534680;
loc_82534678:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x825346a8
	goto loc_825346A8;
loc_82534680:
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82534690
	if (ctx.cr0.eq) goto loc_82534690;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82534678
	if (!ctx.cr0.eq) goto loc_82534678;
loc_82534690:
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825346a4
	if (ctx.cr0.eq) goto loc_825346A4;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne 0x825346a8
	if (!ctx.cr0.eq) goto loc_825346A8;
loc_825346A4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_825346A8:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82534798
	if (ctx.cr0.eq) goto loc_82534798;
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825346c4
	if (ctx.cr0.eq) goto loc_825346C4;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825346c4
	if (ctx.cr0.eq) goto loc_825346C4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_825346C4:
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825346d8
	if (ctx.cr0.eq) goto loc_825346D8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_825346D8:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825346ec
	if (ctx.cr0.eq) goto loc_825346EC;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825346ec
	if (ctx.cr0.eq) goto loc_825346EC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_825346EC:
	// or r30,r10,r11
	r30.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82528eb8
	ctx.lr = 0x825346F8;
	sub_82528EB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534798
	if (ctx.cr0.eq) goto loc_82534798;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82534718
	goto loc_82534718;
loc_82534710:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82534718:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82534710
	if (!ctx.cr6.eq) goto loc_82534710;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r30,27
	ctx.r9.u64 = r30.u32 & 0x1F;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// rlwinm r8,r10,27,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x6;
	// rlwinm r7,r10,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x6;
	// srw r8,r28,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r28,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r10,31,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x6;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r8,r28,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r8,r7,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r8,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x825335b8
	ctx.lr = 0x82534798;
	sub_825335B8(ctx, base);
loc_82534798:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82534578
	if (!ctx.cr6.eq) goto loc_82534578;
	// addi r25,r31,8
	r25.s64 = r31.s64 + 8;
	// b 0x82534578
	goto loc_82534578;
loc_825347AC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f7708
	ctx.lr = 0x825347B4;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r5,652(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 652);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// beq 0x825347d8
	if (ctx.cr0.eq) goto loc_825347D8;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x825c2288
	ctx.lr = 0x825347D0;
	sub_825C2288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x825348d0
	goto loc_825348D0;
loc_825347D8:
	// bl 0x8255ea00
	ctx.lr = 0x825347DC;
	sub_8255EA00(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x825348cc
	if (ctx.cr0.eq) goto loc_825348CC;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534860
	if (ctx.cr0.eq) goto loc_82534860;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x82534804;
	sub_82516448(ctx, base);
	// sth r3,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253483c
	if (!ctx.cr0.eq) goto loc_8253483C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253483c
	if (ctx.cr0.eq) goto loc_8253483C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82534848
	if (!ctx.cr6.gt) goto loc_82534848;
loc_8253483C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82534844;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82534848:
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
loc_82534860:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r31,r11,13,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82534888
	if (ctx.cr0.eq) goto loc_82534888;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r11,r27,40
	ctx.r11.s64 = r27.s64 + 40;
loc_82534878:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82534878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82534878;
loc_82534888:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 652);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825c2288
	ctx.lr = 0x8253489C;
	sub_825C2288(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825348c4
	if (ctx.cr6.eq) goto loc_825348C4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_825348AC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r5,660(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 660);
	// bl 0x8254f8d8
	ctx.lr = 0x825348BC;
	sub_8254F8D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825348ac
	if (!ctx.cr0.eq) goto loc_825348AC;
loc_825348C4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x825348d0
	goto loc_825348D0;
loc_825348CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825348D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8255DE90) {
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
	ctx.lr = 0x8255DE98;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x824f7678
	ctx.lr = 0x8255DEB8;
	sub_824F7678(ctx, base);
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r8,r29,1
	ctx.r8.u64 = r29.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825ba3a0
	ctx.lr = 0x8255DEF4;
	sub_825BA3A0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bne 0x8255e0d4
	if (!ctx.cr0.eq) goto loc_8255E0D4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x8255e0d4
	if (!ctx.cr6.eq) goto loc_8255E0D4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8255dbb8
	ctx.lr = 0x8255DF30;
	sub_8255DBB8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8255dbb8
	ctx.lr = 0x8255DF50;
	sub_8255DBB8(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r7,r11,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255df84
	if (ctx.cr0.eq) goto loc_8255DF84;
	// rlwinm. r7,r10,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255df84
	if (ctx.cr0.eq) goto loc_8255DF84;
loc_8255DF7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8255dfac
	goto loc_8255DFAC;
loc_8255DF84:
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255df94
	if (ctx.cr0.eq) goto loc_8255DF94;
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8255df7c
	if (!ctx.cr0.eq) goto loc_8255DF7C;
loc_8255DF94:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255dfa8
	if (ctx.cr0.eq) goto loc_8255DFA8;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8255dfac
	if (!ctx.cr0.eq) goto loc_8255DFAC;
loc_8255DFA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255DFAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// beq 0x8255e018
	if (ctx.cr0.eq) goto loc_8255E018;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255dfd8
	if (ctx.cr0.eq) goto loc_8255DFD8;
	// rlwinm. r7,r10,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255dfd8
	if (ctx.cr0.eq) goto loc_8255DFD8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8255DFD8:
	// and r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm. r7,r7,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255dfec
	if (ctx.cr0.eq) goto loc_8255DFEC;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8255DFEC:
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255e000
	if (ctx.cr0.eq) goto loc_8255E000;
	// rlwinm. r7,r10,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255e000
	if (ctx.cr0.eq) goto loc_8255E000;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8255E000:
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subfe r10,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// b 0x8255e144
	goto loc_8255E144;
loc_8255E018:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm. r7,r11,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255e034
	if (ctx.cr0.eq) goto loc_8255E034;
	// rlwinm. r7,r10,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255e034
	if (ctx.cr0.eq) goto loc_8255E034;
loc_8255E02C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8255e05c
	goto loc_8255E05C;
loc_8255E034:
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255e044
	if (ctx.cr0.eq) goto loc_8255E044;
	// clrlwi. r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8255e02c
	if (!ctx.cr0.eq) goto loc_8255E02C;
loc_8255E044:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255e058
	if (ctx.cr0.eq) goto loc_8255E058;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8255e05c
	if (!ctx.cr0.eq) goto loc_8255E05C;
loc_8255E058:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255E05C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255e0c8
	if (ctx.cr0.eq) goto loc_8255E0C8;
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm. r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255e088
	if (ctx.cr0.eq) goto loc_8255E088;
	// rlwinm. r7,r10,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255e088
	if (ctx.cr0.eq) goto loc_8255E088;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8255E088:
	// and r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm. r7,r7,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255e09c
	if (ctx.cr0.eq) goto loc_8255E09C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8255E09C:
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255e0b0
	if (ctx.cr0.eq) goto loc_8255E0B0;
	// rlwinm. r7,r10,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8255e0b0
	if (ctx.cr0.eq) goto loc_8255E0B0;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8255E0B0:
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subfe r10,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// b 0x8255e144
	goto loc_8255E144;
loc_8255E0C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82559b18
	ctx.lr = 0x8255E0D0;
	sub_82559B18(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8255E0D4:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,96(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255e110
	if (!ctx.cr0.eq) goto loc_8255E110;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r10.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255e110
	if (ctx.cr0.eq) goto loc_8255E110;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8255e120
	if (!ctx.cr6.gt) goto loc_8255E120;
loc_8255E110:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82584838
	ctx.lr = 0x8255E11C;
	sub_82584838(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8255E120:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r30.u32);
	// stw r29,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r29.u32);
loc_8255E144:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82581968) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82581970;
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
	// li r6,19
	ctx.r6.s64 = 19;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82581998;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825819bc
	if (ctx.cr6.eq) goto loc_825819BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825819B8;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825819BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825819C4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x825819e8
	if (ctx.cr6.eq) goto loc_825819E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825819E4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825819E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825819F0;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82583E68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82583E70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82583f24
	if (ctx.cr6.eq) goto loc_82583F24;
	// addic. r11,r6,1
	ctx.xer.ca = ctx.r6.u32 > 4294967294;
	ctx.r11.s64 = ctx.r6.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82583ea8
	if (ctx.cr0.eq) goto loc_82583EA8;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// subf. r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82583eac
	if (ctx.cr0.eq) goto loc_82583EAC;
loc_82583EA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82583EAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82583f24
	if (ctx.cr0.eq) goto loc_82583F24;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// subfic r9,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r5,624
	ctx.r5.s64 = ctx.r5.s64 + 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82583bb0
	ctx.lr = 0x82583ED8;
	sub_82583BB0(ctx, base);
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82583f18
	if (ctx.cr6.eq) goto loc_82583F18;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82583f18
	if (!ctx.cr6.eq) goto loc_82583F18;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// bl 0x82583718
	ctx.lr = 0x82583F0C;
	sub_82583718(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82583F18:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x82583F24;
	sub_824E4368(ctx, base);
loc_82583F24:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x82583F34;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82587E70) {
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
	ctx.lr = 0x82587E78;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x82588044
	if (ctx.cr6.lt) goto loc_82588044;
	// beq cr6,0x82587ff0
	if (ctx.cr6.eq) goto loc_82587FF0;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// blt cr6,0x82587f18
	if (ctx.cr6.lt) goto loc_82587F18;
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// blt cr6,0x82587ec0
	if (ctx.cr6.lt) goto loc_82587EC0;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x82587EC0;
	sub_824E4368(ctx, base);
loc_82587EC0:
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82587f08
	if (!ctx.cr6.eq) goto loc_82587F08;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503da0
	ctx.lr = 0x82587EDC;
	sub_82503DA0(ctx, base);
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,7296
	ctx.r11.u64 = ctx.r11.u64 | 7296;
	// ori r12,r12,64671
	ctx.r12.u64 = ctx.r12.u64 | 64671;
	// rlwimi r11,r10,26,25,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x60) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF9F);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82587F08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582188
	ctx.lr = 0x82587F10;
	sub_82582188(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x82588044
	goto loc_82588044;
loc_82587F18:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82587f38
	if (ctx.cr6.eq) goto loc_82587F38;
	// li r4,3536
	ctx.r4.s64 = 3536;
	// bl 0x824e4368
	ctx.lr = 0x82587F38;
	sub_824E4368(ctx, base);
loc_82587F38:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82587F44;
	sub_82503DA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// ori r10,r10,7296
	ctx.r10.u64 = ctx.r10.u64 | 7296;
	// ori r12,r12,64671
	ctx.r12.u64 = ctx.r12.u64 | 64671;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwimi r10,r9,26,25,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x60) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF9F);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82581e40
	ctx.lr = 0x82587F7C;
	sub_82581E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82587F88;
	sub_8250AB60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r27,r24,25,4,6
	r27.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 25) & 0xE000000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,27,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF81F;
	// rlwinm r11,r11,0,7,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | r27.u64;
	// ori r11,r11,6144
	ctx.r11.u64 = ctx.r11.u64 | 6144;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82587FB8;
	sub_82503DA0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r10,0,7,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82580e90
	ctx.lr = 0x82587FDC;
	sub_82580E90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82587FE8;
	sub_8250AB60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82588044
	goto loc_82588044;
loc_82587FF0:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582308
	ctx.lr = 0x82587FFC;
	sub_82582308(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x825823b0
	ctx.lr = 0x8258800C;
	sub_825823B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503400
	ctx.lr = 0x82588020;
	sub_82503400(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503400
	ctx.lr = 0x82588034;
	sub_82503400(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_82588044:
	// clrlwi. r25,r30,24
	r25.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// li r27,1
	r27.s64 = 1;
	// beq 0x825882d8
	if (ctx.cr0.eq) goto loc_825882D8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503da0
	ctx.lr = 0x82588060;
	sub_82503DA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r27,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// rlwinm r10,r11,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x3;
	// rlwinm r9,r11,25,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xC;
	// rlwinm r8,r11,31,24,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825880A4;
	sub_82503DA0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r10,r27,27,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r10,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// rlwinm r7,r10,25,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xC;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r6,r8,2,26,29
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC3);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi r8,r6,26
	ctx.r8.u64 = ctx.r6.u32 & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r9,r8,4,0,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r9,r9,3,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82581968
	ctx.lr = 0x825880F0;
	sub_82581968(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82588100;
	sub_8250AB60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,14
	ctx.r10.s64 = 917504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r10,r10,24833
	ctx.r10.u64 = ctx.r10.u64 | 24833;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,25,19,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r9,r10,25,4,6
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xE000000) | (ctx.r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82581e40
	ctx.lr = 0x82588128;
	sub_82581E40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82588138;
	sub_8250AB60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwimi r11,r27,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// bl 0x8250ab60
	ctx.lr = 0x82588154;
	sub_8250AB60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r9,r10,10,19,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r9,r10,10,4,6
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xE000000) | (ctx.r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82580e90
	ctx.lr = 0x82588180;
	sub_82580E90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f4,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f1,3708(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3708);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x825bdd18
	ctx.lr = 0x825881AC;
	sub_825BDD18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825881B8;
	sub_8250AB60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r27,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x82584ed0
	ctx.lr = 0x825881D4;
	sub_82584ED0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r27,26,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 26) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r10,27,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r7,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwimi r10,r9,5,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82580da0
	ctx.lr = 0x82588210;
	sub_82580DA0(ctx, base);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x82588228;
	sub_825BB9C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82588238;
	sub_8250AB60(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lis r11,14
	ctx.r11.s64 = 917504;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ori r11,r11,20481
	ctx.r11.u64 = ctx.r11.u64 | 20481;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// rlwimi r10,r11,25,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r10.u32);
	// bl 0x8250ab60
	ctx.lr = 0x82588260;
	sub_8250AB60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r27,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8258827C;
	sub_8250AB60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,14
	ctx.r11.s64 = 917504;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r11,r11,28673
	ctx.r11.u64 = ctx.r11.u64 | 28673;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r10,r11,25,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x8250ad28
	ctx.lr = 0x825882A4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825882B4;
	sub_8250AD28(ctx, base);
	// stw r3,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825882C4;
	sub_8250AD28(ctx, base);
	// stw r3,52(r28)
	REX_STORE_U32(r28.u32 + 52, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825882D4;
	sub_8250AB60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825882D8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r24,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r30,0(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82588300
	if (ctx.cr6.eq) goto loc_82588300;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// beq 0x82588304
	if (ctx.cr0.eq) goto loc_82588304;
loc_82588300:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82588304:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258834c
	if (ctx.cr0.eq) goto loc_8258834C;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r10,15,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
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
	// beq cr6,0x8258833c
	if (ctx.cr6.eq) goto loc_8258833C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258833C;
	sub_824E4368(ctx, base);
loc_8258833C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8258849c
	if (ctx.cr0.eq) goto loc_8258849C;
	// b 0x8258843c
	goto loc_8258843C;
loc_8258834C:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82588368
	if (!ctx.cr6.eq) goto loc_82588368;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82588368;
	sub_824E4368(ctx, base);
loc_82588368:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82588390
	if (ctx.cr6.eq) goto loc_82588390;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82588590
	if (!ctx.cr6.eq) goto loc_82588590;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82588584
	if (!ctx.cr0.eq) goto loc_82588584;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82588584
	if (!ctx.cr0.eq) goto loc_82588584;
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_82588390:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x825883e4
	if (!ctx.cr6.eq) goto loc_825883E4;
	// lwz r28,44(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f7010
	ctx.lr = 0x825883B0;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82588448
	if (ctx.cr0.eq) goto loc_82588448;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82588448
	if (!ctx.cr6.eq) goto loc_82588448;
	// rlwinm. r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82588448
	if (!ctx.cr0.eq) goto loc_82588448;
	// andi. r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 & 23;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82588448
	if (!ctx.cr0.eq) goto loc_82588448;
	// lwz r30,12(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 12);
loc_825883E4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r28,r11,25,25,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r28,118
	ctx.cr6.compare<uint32_t>(r28.u32, 118, ctx.xer);
	// beq cr6,0x8258849c
	if (ctx.cr6.eq) goto loc_8258849C;
	// cmplwi cr6,r28,112
	ctx.cr6.compare<uint32_t>(r28.u32, 112, ctx.xer);
	// bne cr6,0x82588454
	if (!ctx.cr6.eq) goto loc_82588454;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x82588410;
	sub_824F71B8(ctx, base);
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
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
	// bne cr6,0x82588454
	if (!ctx.cr6.eq) goto loc_82588454;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_8258843C:
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// b 0x8258849c
	goto loc_8258849C;
loc_82588448:
	// li r4,3538
	ctx.r4.s64 = 3538;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82588454;
	sub_824E4368(ctx, base);
loc_82588454:
	// cmplwi cr6,r28,124
	ctx.cr6.compare<uint32_t>(r28.u32, 124, ctx.xer);
	// bne cr6,0x82588578
	if (!ctx.cr6.eq) goto loc_82588578;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82588474;
	sub_824F71B8(ctx, base);
	// addi r10,r30,-8
	ctx.r10.s64 = r30.s64 + -8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
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
	// bne cr6,0x82588578
	if (!ctx.cr6.eq) goto loc_82588578;
loc_8258849C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585fb0
	ctx.lr = 0x825884AC;
	sub_82585FB0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825884C8;
	sub_824F71B8(ctx, base);
	// addi r11,r29,-24
	ctx.r11.s64 = r29.s64 + -24;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r27,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// beq cr6,0x825884f0
	if (ctx.cr6.eq) goto loc_825884F0;
	// ori r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 49152;
	// b 0x825884f8
	goto loc_825884F8;
loc_825884F0:
	// addi r10,r24,-1
	ctx.r10.s64 = r24.s64 + -1;
	// rlwimi r11,r10,14,16,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF3FFF);
loc_825884F8:
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(r22.s32, 4, ctx.xer);
	// beq cr6,0x82588510
	if (ctx.cr6.eq) goto loc_82588510;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_82588510:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82588540
	if (ctx.cr6.eq) goto loc_82588540;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82503400
	ctx.lr = 0x82588528;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82588534;
	sub_8250AD28(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_82588540:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8258856c
	if (ctx.cr6.eq) goto loc_8258856C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82588554;
	sub_8250AD28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x8250ad28
	ctx.lr = 0x82588560;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8258856C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_82588578:
	// li r4,3538
	ctx.r4.s64 = 3538;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82588584;
	sub_824E4368(ctx, base);
loc_82588584:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x82588590;
	sub_824E4368(ctx, base);
loc_82588590:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258859C;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825C21D8) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r9,r5,40
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(40));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x825c225c
	if (ctx.cr6.eq) goto loc_825C225C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x825c2240
	if (ctx.cr6.eq) goto loc_825C2240;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x825c222c
	if (ctx.cr6.eq) goto loc_825C222C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x825c2240
	if (ctx.cr6.eq) goto loc_825C2240;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x825C222C;
	sub_824E4368(ctx, base);
loc_825C222C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c1318
	ctx.lr = 0x825C223C;
	sub_825C1318(ctx, base);
	// b 0x825c226c
	goto loc_825C226C;
loc_825C2240:
	// lwz r5,564(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bc910
	ctx.lr = 0x825C2258;
	sub_825BC910(ctx, base);
	// b 0x825c226c
	goto loc_825C226C;
loc_825C225C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c1e18
	ctx.lr = 0x825C226C;
	sub_825C1E18(ctx, base);
loc_825C226C:
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

DEFINE_REX_FUNC(sub_825C6828) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// b 0x825c683c
	goto loc_825C683C;
loc_825C6834:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_825C683C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x825c6834
	if (!ctx.cr6.eq) goto loc_825C6834;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x825c6868
	goto loc_825C6868;
loc_825C685C:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_825C6868:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825c685c
	if (!ctx.cr6.eq) goto loc_825C685C;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825C89D8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x825C89E0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca8
	ctx.lr = 0x825C89E8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c8a14
	if (ctx.cr6.eq) goto loc_825C8A14;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825C8A10;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825C8A14:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825c8a30
	if (ctx.cr6.eq) goto loc_825C8A30;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825C8A2C;
	sub_825C7448(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825C8A30:
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
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r24,r9,r5
	r24.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x825c8aa0
	if (!ctx.cr0.eq) goto loc_825C8AA0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825c8aa8
	goto loc_825C8AA8;
loc_825C8AA0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825C8AA8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c8ac0
	if (ctx.cr6.eq) goto loc_825C8AC0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825C8AC0;
	sub_82409A88(ctx, base);
loc_825C8AC0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825c8e3c
	if (!ctx.cr6.gt) goto loc_825C8E3C;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f12,15196(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15196);
	ctx.f12.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfd f11,20216(r10)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + 20216);
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,20232(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20232);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,20224(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20224);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_825C8B24:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f29,f9
	ctx.f8.f64 = double(float(f29.f64 + ctx.f9.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 + f30.f64));
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 + f28.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fadds f4,f9,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f2,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fadds f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f1
	ctx.f4.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f4,f3
	ctx.f4.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x825c8d54
	if (ctx.cr6.eq) goto loc_825C8D54;
	// extsw r28,r5
	r28.s64 = ctx.r5.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// lfd f3,104(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f4,96(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r28.u64);
	// lfs f2,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// frsp f4,f3
	ctx.f4.f64 = double(float(ctx.f3.f64));
	// fmadds f3,f7,f0,f2
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmul f4,f7,f11
	ctx.f4.f64 = ctx.f7.f64 * ctx.f11.f64;
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// frsp f31,f4
	f31.f64 = double(float(ctx.f4.f64));
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f4,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f7,f7,f12,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f7,16(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f7,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f7.f64)));
	// stfs f7,20(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f8,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmul f3,f6,f11
	ctx.f3.f64 = ctx.f6.f64 * ctx.f11.f64;
	// fmadds f7,f8,f13,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f7,24(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfd f6,120(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f7,f6
	ctx.f7.f64 = double(ctx.f6.s64);
	// lfs f6,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// frsp f30,f3
	f30.f64 = double(float(ctx.f3.f64));
	// fmadds f6,f8,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f6,24(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fmul f8,f8,f11
	ctx.f8.f64 = ctx.f8.f64 * ctx.f11.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f6,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// frsp f29,f8
	f29.f64 = double(float(ctx.f8.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// fmadds f8,f9,f0,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f6.f64)));
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmul f7,f9,f11
	ctx.f7.f64 = ctx.f9.f64 * ctx.f11.f64;
	// stfs f8,28(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f8,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_825C8D54:
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x825c8d64
	if (ctx.cr6.lt) goto loc_825C8D64;
	// li r10,31
	ctx.r10.s64 = 31;
loc_825C8D64:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825c8d7c
	if (!ctx.cr6.gt) goto loc_825C8D7C;
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// blt cr6,0x825c8d80
	if (ctx.cr6.lt) goto loc_825C8D80;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x825c8d80
	goto loc_825C8D80;
loc_825C8D7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C8D80:
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x825c8d90
	if (ctx.cr6.lt) goto loc_825C8D90;
	// li r10,31
	ctx.r10.s64 = 31;
loc_825C8D90:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825c8da8
	if (!ctx.cr6.gt) goto loc_825C8DA8;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// blt cr6,0x825c8dac
	if (ctx.cr6.lt) goto loc_825C8DAC;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x825c8dac
	goto loc_825C8DAC;
loc_825C8DA8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825C8DAC:
	// cmpwi cr6,r5,31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 31, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x825c8dbc
	if (ctx.cr6.lt) goto loc_825C8DBC;
	// li r10,31
	ctx.r10.s64 = 31;
loc_825C8DBC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825c8dd4
	if (!ctx.cr6.gt) goto loc_825C8DD4;
	// cmpwi cr6,r5,31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 31, ctx.xer);
	// blt cr6,0x825c8dd8
	if (ctx.cr6.lt) goto loc_825C8DD8;
	// li r5,31
	ctx.r5.s64 = 31;
	// b 0x825c8dd8
	goto loc_825C8DD8;
loc_825C8DD4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825C8DD8:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x825c8de8
	if (ctx.cr6.lt) goto loc_825C8DE8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_825C8DE8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825c8e00
	if (!ctx.cr6.gt) goto loc_825C8E00;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x825c8e04
	if (ctx.cr6.lt) goto loc_825C8E04;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x825c8e04
	goto loc_825C8E04;
loc_825C8E00:
	// li r6,0
	ctx.r6.s64 = 0;
loc_825C8E04:
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// sthux r10,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	r29.u32 = ea;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825c8b24
	if (ctx.cr6.lt) goto loc_825C8B24;
loc_825C8E3C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf4
	ctx.lr = 0x825C8E48;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825E35D8) {
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
	ctx.lr = 0x825E35E0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r4,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// stb r5,295(r1)
	REX_STORE_U8(ctx.r1.u32 + 295, ctx.r5.u8);
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// li r18,0
	r18.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825e3c40
	if (ctx.cr6.eq) goto loc_825E3C40;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32127
	ctx.r6.s64 = -2105475072;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r8,12836
	ctx.r8.s64 = ctx.r8.s64 + 12836;
	// addi r10,r10,12792
	ctx.r10.s64 = ctx.r10.s64 + 12792;
	// li r25,1
	r25.s64 = 1;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r17,r7,27328
	r17.s64 = ctx.r7.s64 + 27328;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r20,r6,-21368
	r20.s64 = ctx.r6.s64 + -21368;
	// addi r16,r5,11796
	r16.s64 = ctx.r5.s64 + 11796;
	// addi r15,r4,12768
	r15.s64 = ctx.r4.s64 + 12768;
	// addi r14,r3,12744
	r14.s64 = ctx.r3.s64 + 12744;
	// addi r22,r9,22852
	r22.s64 = ctx.r9.s64 + 22852;
	// addi r21,r11,11616
	r21.s64 = ctx.r11.s64 + 11616;
loc_825E3674:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3c2c
	if (ctx.cr0.eq) goto loc_825E3C2C;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x825e36a0
	if (!ctx.cr6.eq) goto loc_825E36A0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e19c8
	ctx.lr = 0x825E3698;
	sub_825E19C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_825E36A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E36B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e380c
	if (ctx.cr0.eq) goto loc_825E380C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E36D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e37e4
	if (ctx.cr0.eq) goto loc_825E37E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi. r11,r19,24
	ctx.r11.u64 = r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,295(r1)
	REX_STORE_U8(ctx.r1.u32 + 295, ctx.r10.u8);
	// beq 0x825e3724
	if (ctx.cr0.eq) goto loc_825E3724;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r6,r27,r11
	ctx.r6.u64 = ctx.r11.u64 - r27.u64;
	// bl 0x825e0270
	ctx.lr = 0x825E3714;
	sub_825E0270(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r19,0
	r19.s64 = 0;
loc_825E3724:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r11,142
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 142, ctx.xer);
	// bne cr6,0x825e376c
	if (!ctx.cr6.eq) goto loc_825E376C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,2736(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r11,2084(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e3764
	if (!ctx.cr6.eq) goto loc_825E3764;
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e3764
	if (!ctx.cr0.eq) goto loc_825E3764;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e0348
	ctx.lr = 0x825E3760;
	sub_825E0348(ctx, base);
	// stb r25,124(r31)
	REX_STORE_U8(r31.u32 + 124, r25.u8);
loc_825E3764:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x825e37ac
	goto loc_825E37AC;
loc_825E376C:
	// cmpwi cr6,r11,143
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 143, ctx.xer);
	// bne cr6,0x825e37c0
	if (!ctx.cr6.eq) goto loc_825E37C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,2736(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r11,2084(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e37a8
	if (!ctx.cr6.eq) goto loc_825E37A8;
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e37a8
	if (!ctx.cr0.eq) goto loc_825E37A8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e0348
	ctx.lr = 0x825E37A4;
	sub_825E0348(ctx, base);
	// stb r25,124(r31)
	REX_STORE_U8(r31.u32 + 124, r25.u8);
loc_825E37A8:
	// li r5,3
	ctx.r5.s64 = 3;
loc_825E37AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,168(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 168);
	// bl 0x825e0348
	ctx.lr = 0x825E37B8;
	sub_825E0348(ctx, base);
	// stb r25,125(r31)
	REX_STORE_U8(r31.u32 + 125, r25.u8);
	// b 0x825e37e4
	goto loc_825E37E4;
loc_825E37C0:
	// cmpwi cr6,r11,144
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 144, ctx.xer);
	// beq cr6,0x825e37d0
	if (ctx.cr6.eq) goto loc_825E37D0;
	// cmpwi cr6,r11,145
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 145, ctx.xer);
	// bne cr6,0x825e37e4
	if (!ctx.cr6.eq) goto loc_825E37E4;
loc_825E37D0:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,168(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e0348
	ctx.lr = 0x825E37E0;
	sub_825E0348(ctx, base);
	// stb r25,124(r31)
	REX_STORE_U8(r31.u32 + 124, r25.u8);
loc_825E37E4:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,20,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3afc
	if (ctx.cr0.eq) goto loc_825E3AFC;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1466
	ctx.r7.s64 = 1466;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E3808;
	sub_824EA978(ctx, base);
	// b 0x825e3afc
	goto loc_825E3AFC;
loc_825E380C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e3488
	ctx.lr = 0x825E3814;
	sub_825E3488(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e385c
	if (ctx.cr0.eq) goto loc_825E385C;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3844
	if (ctx.cr0.eq) goto loc_825E3844;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e385c
	if (!ctx.cr0.eq) goto loc_825E385C;
loc_825E3844:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E3858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825e3c2c
	goto loc_825E3C2C;
loc_825E385C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e07a8
	ctx.lr = 0x825E3864;
	sub_825E07A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3878
	if (ctx.cr0.eq) goto loc_825E3878;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
loc_825E3878:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e38a8
	if (!ctx.cr6.eq) goto loc_825E38A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E3898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e38a8
	if (ctx.cr0.eq) goto loc_825E38A8;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stw r25,2092(r11)
	REX_STORE_U32(ctx.r11.u32 + 2092, r25.u32);
loc_825E38A8:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3930
	if (ctx.cr0.eq) goto loc_825E3930;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 80);
	// bl 0x825e1918
	ctx.lr = 0x825E38C0;
	sub_825E1918(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3930
	if (ctx.cr0.eq) goto loc_825E3930;
	// clrlwi. r11,r19,24
	ctx.r11.u64 = r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3908
	if (ctx.cr0.eq) goto loc_825E3908;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r6,r27,r11
	ctx.r6.u64 = ctx.r11.u64 - r27.u64;
	// bl 0x825e0270
	ctx.lr = 0x825E38FC;
	sub_825E0270(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
loc_825E3908:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e04a8
	ctx.lr = 0x825E3910;
	sub_825E04A8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 140);
	// bl 0x825e2c28
	ctx.lr = 0x825E3920;
	sub_825E2C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825e0348
	ctx.lr = 0x825E3930;
	sub_825E0348(ctx, base);
loc_825E3930:
	// clrlwi. r29,r23,24
	r29.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// mr r19,r25
	r19.u64 = r25.u64;
	// bne 0x825e3988
	if (!ctx.cr0.eq) goto loc_825E3988;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e3988
	if (!ctx.cr0.eq) goto loc_825E3988;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r12,783
	ctx.r12.s64 = 51314688;
	// ori r12,r12,49279
	ctx.r12.u64 = ctx.r12.u64 | 49279;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// oris r9,r9,57344
	ctx.r9.u64 = ctx.r9.u64 | 3758096384;
	// oris r11,r11,51200
	ctx.r11.u64 = ctx.r11.u64 | 3355443200;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r9,r11,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 92);
	// rlwimi r8,r11,24,3,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r9,r9,0,17,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF07FFF;
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825E3988:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e39ac
	if (!ctx.cr0.eq) goto loc_825E39AC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e0f70
	ctx.lr = 0x825E39A8;
	sub_825E0F70(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_825E39AC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E39CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E39E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3a5c
	if (ctx.cr0.eq) goto loc_825E3A5C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r30,r27,1,0,30
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// slw r10,r25,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// or r26,r10,r26
	r26.u64 = ctx.r10.u64 | r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E3A08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3a1c
	if (ctx.cr0.eq) goto loc_825E3A1C;
	// lbz r11,176(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 176);
	// slw r11,r11,r27
	ctx.r11.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r27.u8 & 0x3F));
	// or r24,r11,r24
	r24.u64 = ctx.r11.u64 | r24.u64;
loc_825E3A1C:
	// clrlwi. r11,r18,24
	ctx.r11.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e3a2c
	if (!ctx.cr0.eq) goto loc_825E3A2C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825e3a44
	if (ctx.cr6.eq) goto loc_825E3A44;
loc_825E3A2C:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1551
	ctx.r7.s64 = 1551;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E3A44;
	sub_824EA978(ctx, base);
loc_825E3A44:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r23,r25
	r23.u64 = r25.u64;
	// mr r18,r25
	r18.u64 = r25.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// b 0x825e3acc
	goto loc_825E3ACC;
loc_825E3A5C:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3a98
	if (ctx.cr0.eq) goto loc_825E3A98;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3a90
	if (ctx.cr0.eq) goto loc_825E3A90;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1558
	ctx.r7.s64 = 1558;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E3A90;
	sub_824EA978(ctx, base);
loc_825E3A90:
	// mr r18,r25
	r18.u64 = r25.u64;
	// b 0x825e3abc
	goto loc_825E3ABC;
loc_825E3A98:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825e3ab8
	if (ctx.cr6.eq) goto loc_825E3AB8;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1561
	ctx.r7.s64 = 1561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E3AB8;
	sub_824EA978(ctx, base);
loc_825E3AB8:
	// mr r23,r25
	r23.u64 = r25.u64;
loc_825E3ABC:
	// rlwinm r30,r27,1,0,30
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// or r26,r11,r26
	r26.u64 = ctx.r11.u64 | r26.u64;
loc_825E3ACC:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,20,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e3ae4
	if (!ctx.cr0.eq) goto loc_825E3AE4;
	// lbz r11,295(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 295);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825e3af8
	if (ctx.cr0.eq) goto loc_825E3AF8;
loc_825E3AE4:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// slw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r11.u8 & 0x3F));
	// stb r10,295(r1)
	REX_STORE_U8(ctx.r1.u32 + 295, ctx.r10.u8);
	// or r26,r11,r26
	r26.u64 = ctx.r11.u64 | r26.u64;
loc_825E3AF8:
	// lwz r30,284(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
loc_825E3AFC:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825e3bb4
	if (!ctx.cr0.eq) goto loc_825E3BB4;
	// clrlwi. r8,r23,24
	ctx.r8.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825e3b18
	if (!ctx.cr0.eq) goto loc_825E3B18;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3bb4
	if (ctx.cr0.eq) goto loc_825E3BB4;
loc_825E3B18:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// rlwinm. r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825e3b80
	if (ctx.cr0.eq) goto loc_825E3B80;
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825e3b58
	if (!ctx.cr0.eq) goto loc_825E3B58;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3b80
	if (ctx.cr0.eq) goto loc_825E3B80;
loc_825E3B58:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// beq cr6,0x825e3b80
	if (ctx.cr6.eq) goto loc_825E3B80;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3b80
	if (ctx.cr0.eq) goto loc_825E3B80;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_825E3B80:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,1376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1376);
	// mulli r11,r11,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825e3bac
	if (!ctx.cr6.gt) goto loc_825E3BAC;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r7,1586
	ctx.r7.s64 = 1586;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E3BAC;
	sub_824EA978(ctx, base);
loc_825E3BAC:
	// li r23,0
	r23.s64 = 0;
	// li r18,0
	r18.s64 = 0;
loc_825E3BB4:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3bc8
	if (ctx.cr0.eq) goto loc_825E3BC8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bgt cr6,0x825e3bd0
	if (ctx.cr6.gt) goto loc_825E3BD0;
loc_825E3BC8:
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(r27.s32, 6, ctx.xer);
	// bne cr6,0x825e3c0c
	if (!ctx.cr6.eq) goto loc_825E3C0C;
loc_825E3BD0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r6,r27,r11
	ctx.r6.u64 = ctx.r11.u64 - r27.u64;
	// bl 0x825e0270
	ctx.lr = 0x825E3BFC;
	sub_825E0270(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r19,0
	r19.s64 = 0;
loc_825E3C0C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E3C2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825E3C2C:
	// lwz r28,8(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825e3674
	if (!ctx.cr6.eq) goto loc_825E3674;
loc_825E3C40:
	// clrlwi. r11,r19,24
	ctx.r11.u64 = r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e3c7c
	if (ctx.cr0.eq) goto loc_825E3C7C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x825e3c7c
	if (!ctx.cr6.gt) goto loc_825E3C7C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r6,r27,r11
	ctx.r6.u64 = ctx.r11.u64 - r27.u64;
	// bl 0x825e0270
	ctx.lr = 0x825E3C7C;
	sub_825E0270(ctx, base);
loc_825E3C7C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82611C18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82611C20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82611C48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260f988
	ctx.lr = 0x82611C50;
	sub_8260F988(ctx, base);
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
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8260b5b8
	ctx.lr = 0x82611C6C;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82611d50
	if (ctx.cr0.eq) goto loc_82611D50;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82611cbc
	if (ctx.cr6.eq) goto loc_82611CBC;
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82611cf8
	goto loc_82611CF8;
loc_82611CBC:
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82611ce4
	if (!ctx.cr6.eq) goto loc_82611CE4;
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x82611cf8
	goto loc_82611CF8;
loc_82611CE4:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_82611CF8:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r3,616(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 616);
	// bl 0x822f5a50
	ctx.lr = 0x82611D28;
	sub_822F5A50(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x82611d3c
	if (!ctx.cr0.lt) goto loc_82611D3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82611D38;
	sub_8264C3D0(ctx, base);
	// b 0x82611d78
	goto loc_82611D78;
loc_82611D3C:
	// addi r3,r29,148
	ctx.r3.s64 = r29.s64 + 148;
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// bl 0x8260f878
	ctx.lr = 0x82611D48;
	sub_8260F878(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82611d5c
	if (!ctx.cr0.eq) goto loc_82611D5C;
loc_82611D50:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x82611d78
	goto loc_82611D78;
loc_82611D5C:
	// lwz r3,144(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 144);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82611D74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82611D78:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82611D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8261AFF0) {
	REX_FUNC_PROLOGUE();
	// b 0x82618000
	sub_82618000(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8261B1C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8261b1ec
	if (!ctx.cr6.lt) goto loc_8261B1EC;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8261b1e4
	if (ctx.cr6.eq) goto loc_8261B1E4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8261B1DC:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x8261b1dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261B1DC;
loc_8261B1E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261b1f0
	goto loc_8261B1F0;
loc_8261B1EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261B1F0:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8261CE38) {
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
	ctx.lr = 0x8261CE40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8261b898
	ctx.lr = 0x8261CE4C;
	sub_8261B898(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8261ce88
	if (!ctx.cr0.eq) goto loc_8261CE88;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261ce88
	if (ctx.cr6.eq) goto loc_8261CE88;
loc_8261CE64:
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
	// bne 0x8261ce64
	if (!ctx.cr0.eq) goto loc_8261CE64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
loc_8261CE88:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,64(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwz r27,60(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r30,48(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CEA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,592
	ctx.r3.s64 = r30.s64 + 592;
	// bl 0x8260e310
	ctx.lr = 0x8261CEC0;
	sub_8260E310(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// beq 0x8261cefc
	if (ctx.cr0.eq) goto loc_8261CEFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8261cef4
	if (!ctx.cr6.eq) goto loc_8261CEF4;
loc_8261CED8:
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
	// bne 0x8261ced8
	if (!ctx.cr0.eq) goto loc_8261CED8;
loc_8261CEF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8261CEFC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8261cef4
	goto loc_8261CEF4;
}

DEFINE_REX_FUNC(sub_82627788) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826274c8
	sub_826274C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82627888) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82627934
	if (ctx.cr6.gt) goto loc_82627934;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826278d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826278D0;
	// bdzf 4*cr6+eq,0x826278e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826278E0;
	// bdzf 4*cr6+eq,0x826278ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826278EC;
	// bdzf 4*cr6+eq,0x826278f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826278F8;
	// bdzf 4*cr6+eq,0x82627904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82627904;
	// bdzf 4*cr6+eq,0x82627914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82627914;
	// bne cr6,0x82627924
	if (!ctx.cr6.eq) goto loc_82627924;
loc_826278D0:
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82643cd0
	ctx.lr = 0x826278DC;
	sub_82643CD0(ctx, base);
	// b 0x82627938
	goto loc_82627938;
loc_826278E0:
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82643218
	ctx.lr = 0x826278E8;
	sub_82643218(ctx, base);
	// b 0x8262793c
	goto loc_8262793C;
loc_826278EC:
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82642a60
	ctx.lr = 0x826278F4;
	sub_82642A60(ctx, base);
	// b 0x8262793c
	goto loc_8262793C;
loc_826278F8:
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82642a98
	ctx.lr = 0x82627900;
	sub_82642A98(ctx, base);
	// b 0x8262793c
	goto loc_8262793C;
loc_82627904:
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82643a00
	ctx.lr = 0x82627910;
	sub_82643A00(ctx, base);
	// b 0x82627938
	goto loc_82627938;
loc_82627914:
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82643b20
	ctx.lr = 0x82627920;
	sub_82643B20(ctx, base);
	// b 0x82627938
	goto loc_82627938;
loc_82627924:
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82643c50
	ctx.lr = 0x82627930;
	sub_82643C50(ctx, base);
	// b 0x82627938
	goto loc_82627938;
loc_82627934:
	// bl 0x82628340
	ctx.lr = 0x82627938;
	sub_82628340(ctx, base);
loc_82627938:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8262793C:
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

DEFINE_REX_FUNC(sub_82630210) {
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
	ctx.lr = 0x82630218;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r31,0
	r31.s64 = 0;
	// lwz r30,32(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r24,24(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwz r26,0(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,4(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f31,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// lwz r23,28(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r29,36(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// mullw r22,r7,r30
	r22.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// fsubs f30,f0,f10
	f30.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// beq cr6,0x826302b0
	if (ctx.cr6.eq) goto loc_826302B0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826302b0
	if (ctx.cr6.eq) goto loc_826302B0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x826302B0;
	sub_826A22F8(ctx, base);
loc_826302B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// lfs f12,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// bge cr6,0x826303ec
	if (!ctx.cr6.lt) goto loc_826303EC;
loc_826302C0:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bge cr6,0x82630518
	if (!ctx.cr6.lt) goto loc_82630518;
	// add r7,r29,r30
	ctx.r7.u64 = r29.u64 + r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x826303c4
	if (!ctx.cr6.lt) goto loc_826303C4;
	// subf r11,r29,r7
	ctx.r11.u64 = ctx.r7.u64 - r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82630370
	if (ctx.cr6.lt) goto loc_82630370;
	// subf r11,r30,r29
	ctx.r11.u64 = r29.u64 - r30.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + r27.u64;
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + r28.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// addi r5,r7,-3
	ctx.r5.s64 = ctx.r7.s64 + -3;
	// add r10,r6,r28
	ctx.r10.u64 = ctx.r6.u64 + r28.u64;
loc_82630310:
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lfs f10,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fsubs f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfsu f13,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f1,f6,f31,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, f31.f64, ctx.f11.f64)));
	// stfs f1,4(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmadds f13,f4,f31,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, f31.f64, ctx.f10.f64)));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmadds f11,f3,f31,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, f31.f64, ctx.f9.f64)));
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmadds f10,f2,f31,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, f31.f64, ctx.f0.f64)));
	// stfsu f10,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x82630310
	if (ctx.cr6.lt) goto loc_82630310;
loc_82630370:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x826303c4
	if (!ctx.cr6.lt) goto loc_826303C4;
	// subf r10,r30,r8
	ctx.r10.u64 = ctx.r8.u64 - r30.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + r27.u64;
	// add r9,r8,r28
	ctx.r9.u64 = ctx.r8.u64 + r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 + r28.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_826303AC:
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
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f13,f31,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// stfsu f11,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x826303ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826303AC;
loc_826303C4:
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 + f31.f64));
	// add r29,r22,r29
	r29.u64 = r22.u64 + r29.u64;
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(f31.f64, ctx.f12.f64);
	// blt cr6,0x826303e4
	if (ctx.cr6.lt) goto loc_826303E4;
loc_826303D4:
	// fsubs f31,f31,f12
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - ctx.f12.f64));
	// add r29,r29,r30
	r29.u64 = r29.u64 + r30.u64;
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(f31.f64, ctx.f12.f64);
	// bge cr6,0x826303d4
	if (!ctx.cr6.lt) goto loc_826303D4;
loc_826303E4:
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// blt cr6,0x826302c0
	if (ctx.cr6.lt) goto loc_826302C0;
loc_826303EC:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bge cr6,0x82630518
	if (!ctx.cr6.lt) goto loc_82630518;
loc_826303F4:
	// add r7,r29,r30
	ctx.r7.u64 = r29.u64 + r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x826304f0
	if (!ctx.cr6.lt) goto loc_826304F0;
	// subf r11,r29,r7
	ctx.r11.u64 = ctx.r7.u64 - r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8263049c
	if (ctx.cr6.lt) goto loc_8263049C;
	// subf r11,r30,r29
	ctx.r11.u64 = r29.u64 - r30.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + r27.u64;
	// add r10,r9,r26
	ctx.r10.u64 = ctx.r9.u64 + r26.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// addi r5,r7,-3
	ctx.r5.s64 = ctx.r7.s64 + -3;
	// add r10,r6,r26
	ctx.r10.u64 = ctx.r6.u64 + r26.u64;
loc_8263043C:
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lfs f10,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fsubs f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfsu f13,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f1,f6,f31,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, f31.f64, ctx.f11.f64)));
	// stfs f1,4(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmadds f13,f4,f31,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, f31.f64, ctx.f10.f64)));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmadds f11,f3,f31,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, f31.f64, ctx.f9.f64)));
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmadds f10,f2,f31,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, f31.f64, ctx.f0.f64)));
	// stfsu f10,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x8263043c
	if (ctx.cr6.lt) goto loc_8263043C;
loc_8263049C:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x826304f0
	if (!ctx.cr6.lt) goto loc_826304F0;
	// subf r10,r30,r8
	ctx.r10.u64 = ctx.r8.u64 - r30.u64;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + r27.u64;
	// add r9,r8,r26
	ctx.r9.u64 = ctx.r8.u64 + r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r10,r8,r26
	ctx.r10.u64 = ctx.r8.u64 + r26.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_826304D8:
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
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f13,f31,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// stfsu f11,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x826304d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826304D8;
loc_826304F0:
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 + f31.f64));
	// add r29,r22,r29
	r29.u64 = r22.u64 + r29.u64;
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(f31.f64, ctx.f12.f64);
	// blt cr6,0x82630510
	if (ctx.cr6.lt) goto loc_82630510;
loc_82630500:
	// fsubs f31,f31,f12
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - ctx.f12.f64));
	// add r29,r29,r30
	r29.u64 = r29.u64 + r30.u64;
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(f31.f64, ctx.f12.f64);
	// bge cr6,0x82630500
	if (!ctx.cr6.lt) goto loc_82630500;
loc_82630510:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// blt cr6,0x826303f4
	if (ctx.cr6.lt) goto loc_826303F4;
loc_82630518:
	// subf r11,r30,r24
	ctx.r11.u64 = r24.u64 - r30.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82630528
	if (!ctx.cr6.lt) goto loc_82630528;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_82630528:
	// subf r10,r24,r29
	ctx.r10.u64 = r29.u64 - r24.u64;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// neg r8,r24
	ctx.r8.s64 = static_cast<int64_t>(-r24.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r30,r10
	ctx.r11.u64 = ctx.r10.u64 - r30.u64;
	// stw r9,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r9.u32);
	// stw r10,36(r25)
	REX_STORE_U32(r25.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x826305f8
	if (!ctx.cr6.lt) goto loc_826305F8;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x826305bc
	if (ctx.cr6.lt) goto loc_826305BC;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + r28.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r24,2
	ctx.r7.s64 = r24.s64 + 2;
	// addi r6,r24,3
	ctx.r6.s64 = r24.s64 + 3;
	// addi r5,r8,-3
	ctx.r5.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
loc_82630580:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r28
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// lfsx f12,r3,r28
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82630580
	if (ctx.cr6.lt) goto loc_82630580;
loc_826305BC:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x826305f8
	if (!ctx.cr6.lt) goto loc_826305F8;
	// add r7,r11,r24
	ctx.r7.u64 = ctx.r11.u64 + r24.u64;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_826305EC:
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfsu f0,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x826305ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826305EC;
loc_826305F8:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82630670
	if (ctx.cr6.lt) goto loc_82630670;
	// subfic r9,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r9.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 + r28.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r24,2
	ctx.r7.s64 = r24.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r24,3
	ctx.r6.s64 = r24.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r8,r26
	ctx.r9.u64 = ctx.r8.u64 + r26.u64;
loc_82630638:
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsx f12,r4,r26
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r3,r26
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r26.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82630638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82630638;
loc_82630670:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82630698
	if (!ctx.cr6.lt) goto loc_82630698;
	// add r9,r11,r24
	ctx.r9.u64 = ctx.r11.u64 + r24.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + r28.u64;
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + r26.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x82630698;
	sub_826A22F8(ctx, base);
loc_82630698:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8264FB08) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8264f6f0
	ctx.lr = 0x8264FB24;
	sub_8264F6F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8264fb3c
	if (ctx.cr0.lt) goto loc_8264FB3C;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x8264FB3C;
	sub_826A1E70(ctx, base);
loc_8264FB3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82651030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-519
	ctx.r10.s64 = -34013184;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// ori r10,r10,65530
	ctx.r10.u64 = ctx.r10.u64 | 65530;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// lwz r3,400(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r8,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r7,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lis r31,256
	r31.s64 = 16777216;
	// stw r4,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x8265d6d8
	ctx.lr = 0x826510C4;
	sub_8265D6D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82655E08) {
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
	ctx.lr = 0x82655E10;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82655e28
	if (!ctx.cr6.lt) goto loc_82655E28;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x82656060
	goto loc_82656060;
loc_82655E28:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82655e40
	if (!ctx.cr6.eq) goto loc_82655E40;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,1235
	r30.u64 = r30.u64 | 1235;
	// b 0x82656060
	goto loc_82656060;
loc_82655E40:
	// li r25,0
	r25.s64 = 0;
	// addi r27,r1,160
	r27.s64 = ctx.r1.s64 + 160;
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// addi r28,r31,380
	r28.s64 = r31.s64 + 380;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82655E58:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82655e9c
	if (ctx.cr6.eq) goto loc_82655E9C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82653a08
	ctx.lr = 0x82655E74;
	sub_82653A08(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r30,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, r30.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// stwx r11,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x82655eac
	goto loc_82655EAC;
loc_82655E9C:
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82655EAC;
	sub_826A2E60(ctx, base);
loc_82655EAC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,42
	r27.s64 = r27.s64 + 42;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x82655e58
	if (ctx.cr6.lt) goto loc_82655E58;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82655ed4
	if (!ctx.cr6.eq) goto loc_82655ED4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82655ed8
	goto loc_82655ED8;
loc_82655ED4:
	// bl 0x8264ca10
	ctx.lr = 0x82655ED8;
	sub_8264CA10(ctx, base);
loc_82655ED8:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// rlwinm r9,r3,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFC;
	// stb r9,328(r1)
	REX_STORE_U8(ctx.r1.u32 + 328, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82655ef4
	if (ctx.cr6.eq) goto loc_82655EF4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82655ef8
	goto loc_82655EF8;
loc_82655EF4:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82655EF8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,328(r1)
	REX_STORE_U8(ctx.r1.u32 + 328, ctx.r10.u8);
	// beq cr6,0x82655f1c
	if (ctx.cr6.eq) goto loc_82655F1C;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x82655f20
	goto loc_82655F20;
loc_82655F1C:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_82655F20:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82655f30
	if (ctx.cr6.eq) goto loc_82655F30;
	// ori r11,r10,16
	ctx.r11.u64 = ctx.r10.u64 | 16;
	// stb r11,328(r1)
	REX_STORE_U8(ctx.r1.u32 + 328, ctx.r11.u8);
loc_82655F30:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8264dd38
	ctx.lr = 0x82655F48;
	sub_8264DD38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82655f6c
	if (ctx.cr0.eq) goto loc_82655F6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x82655F58;
	sub_823EDE70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82656060
	if (ctx.cr0.lt) goto loc_82656060;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x82656060
	goto loc_82656060;
loc_82655F6C:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// li r30,1000
	r30.s64 = 1000;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// sth r30,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r30.u16);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x8264c810
	ctx.lr = 0x82655F94;
	sub_8264C810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82655fb8
	if (ctx.cr0.eq) goto loc_82655FB8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82655fac
	if (ctx.cr6.gt) goto loc_82655FAC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82656060
	goto loc_82656060;
loc_82655FAC:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r30,r11,32775
	r30.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82656060
	goto loc_82656060;
loc_82655FB8:
	// sth r30,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, r30.u16);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826500f8
	ctx.lr = 0x82655FC8;
	sub_826500F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r29,r31,400
	r29.s64 = r31.s64 + 400;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// sth r7,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,31
	ctx.r7.s64 = 31;
	// li r6,169
	ctx.r6.s64 = 169;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8265d680
	ctx.lr = 0x82656008;
	sub_8265D680(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650248
	ctx.lr = 0x82656018;
	sub_82650248(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82656060
	if (ctx.cr6.lt) goto loc_82656060;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r7,r31,560
	ctx.r7.s64 = r31.s64 + 560;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8265d7b8
	ctx.lr = 0x8265603C;
	sub_8265D7B8(ctx, base);
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265606c
	if (ctx.cr0.eq) goto loc_8265606C;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x826558c0
	ctx.lr = 0x82656058;
	sub_826558C0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8265606c
	if (!ctx.cr0.lt) goto loc_8265606C;
loc_82656060:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654f40
	ctx.lr = 0x8265606C;
	sub_82654F40(ctx, base);
loc_8265606C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826624E0) {
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
	ctx.lr = 0x826624E8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 292);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266261c
	if (!ctx.cr0.eq) goto loc_8266261C;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82675ee0
	ctx.lr = 0x82662514;
	sub_82675EE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82662528
	if (!ctx.cr0.eq) goto loc_82662528;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82662684
	goto loc_82662684;
loc_82662528:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r7,1155
	ctx.r7.s64 = 1155;
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,69(r31)
	REX_STORE_U32(r31.u32 + 69, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r11,73(r31)
	REX_STORE_U32(r31.u32 + 73, ctx.r11.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x826711d8
	ctx.lr = 0x82662550;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826715f0
	ctx.lr = 0x8266256C;
	sub_826715F0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8266263c
	if (!ctx.cr0.eq) goto loc_8266263C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826625a4
	if (!ctx.cr6.eq) goto loc_826625A4;
loc_82662584:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82662584
	if (!ctx.cr0.eq) goto loc_82662584;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_826625A4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826625c4
	if (!ctx.cr6.eq) goto loc_826625C4;
	// li r29,0
	r29.s64 = 0;
	// b 0x8266263c
	goto loc_8266263C;
loc_826625C4:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x82671270
	ctx.lr = 0x826625D4;
	sub_82671270(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8266263c
	if (!ctx.cr0.lt) goto loc_8266263C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bne 0x82662624
	if (!ctx.cr0.eq) goto loc_82662624;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_826625FC:
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
	// bne 0x826625fc
	if (!ctx.cr0.eq) goto loc_826625FC;
	// b 0x82662624
	goto loc_82662624;
loc_8266261C:
	// lis r29,-32646
	r29.s64 = -2139488256;
	// ori r29,r29,4113
	r29.u64 = r29.u64 | 4113;
loc_82662624:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82674c80
	ctx.lr = 0x82662638;
	sub_82674C80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8266263C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82662684
	if (ctx.cr6.eq) goto loc_82662684;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
loc_82662648:
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
	// bne 0x82662648
	if (!ctx.cr0.eq) goto loc_82662648;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82662684
	if (!ctx.cr6.eq) goto loc_82662684;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662684;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82662684:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82670888) {
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
loc_826708A8:
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,60(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826708cc
	if (ctx.cr6.eq) goto loc_826708CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826708a8
	if (ctx.cr6.lt) goto loc_826708A8;
	// blr 
	return;
loc_826708CC:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82671978) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x82671994
	if (ctx.cr6.eq) goto loc_82671994;
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// b 0x82671998
	goto loc_82671998;
loc_82671994:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82671998:
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_826719A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// lwz r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// subfic r11,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// bne cr6,0x826719a8
	if (!ctx.cr6.eq) goto loc_826719A8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x826719f0
	if (ctx.cr6.eq) goto loc_826719F0;
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// rlwinm. r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x826719a8
	if (!ctx.cr0.eq) goto loc_826719A8;
	// rlwinm. r8,r8,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x826719a8
	if (!ctx.cr0.eq) goto loc_826719A8;
loc_826719F0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82674D28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82674D30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4626
	ctx.r11.s64 = 303169536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,4626
	ctx.r11.u64 = ctx.r11.u64 | 4626;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82674dd8
	if (ctx.cr6.eq) goto loc_82674DD8;
	// lis r11,13364
	ctx.r11.s64 = 875823104;
	// ori r11,r11,13364
	ctx.r11.u64 = ctx.r11.u64 | 13364;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82674dd8
	if (ctx.cr6.eq) goto loc_82674DD8;
	// bl 0x82672760
	ctx.lr = 0x82674D68;
	sub_82672760(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82674d7c
	if (!ctx.cr0.eq) goto loc_82674D7C;
	// lis r29,-32646
	r29.s64 = -2139488256;
	// ori r29,r29,4106
	r29.u64 = r29.u64 | 4106;
	// b 0x82674df4
	goto loc_82674DF4;
loc_82674D7C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82674dd8
	if (!ctx.cr6.eq) goto loc_82674DD8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82674db8
	if (!ctx.cr6.lt) goto loc_82674DB8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82674DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_82674DB8:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82674610
	ctx.lr = 0x82674DD0;
	sub_82674610(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82674de0
	goto loc_82674DE0;
loc_82674DD8:
	// lis r29,-32646
	r29.s64 = -2139488256;
	// ori r29,r29,4106
	r29.u64 = r29.u64 | 4106;
loc_82674DE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82674df4
	if (ctx.cr6.eq) goto loc_82674DF4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82672c40
	ctx.lr = 0x82674DF4;
	sub_82672C40(ctx, base);
loc_82674DF4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82677E18) {
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
	// bl 0x826773c0
	ctx.lr = 0x82677E38;
	sub_826773C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82677e48
	if (ctx.cr0.eq) goto loc_82677E48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82677E48;
	sub_8269CE98(ctx, base);
loc_82677E48:
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

DEFINE_REX_FUNC(sub_826790A0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,1040(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1040);
	// addi r9,r3,1040
	ctx.r9.s64 = ctx.r3.s64 + 1040;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,896(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 896);
	// ld r10,808(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 808);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267910c
	if (!ctx.cr0.gt) goto loc_8267910C;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82679104
	if (ctx.cr6.lt) goto loc_82679104;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x826790f4
	if (!ctx.cr6.lt) goto loc_826790F4;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82679100
	goto loc_82679100;
loc_826790F4:
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82679100:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82679104:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82679110
	goto loc_82679110;
loc_8267910C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82679110:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267B400) {
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
	ctx.lr = 0x8267B408;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1048(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1048);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8267b43c
	if (!ctx.cr6.eq) goto loc_8267B43C;
	// lhz r11,336(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 336);
	// andi. r11,r11,49151
	ctx.r11.u64 = ctx.r11.u64 & 49151;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,336(r4)
	REX_STORE_U16(ctx.r4.u32 + 336, ctx.r11.u16);
	// b 0x8267b468
	goto loc_8267B468;
loc_8267B43C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x8267B468;
	sub_82676D18(ctx, base);
loc_8267B468:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r11,r11,0,25,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x8267b4d4
	if (ctx.cr6.lt) goto loc_8267B4D4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8267b4d4
	if (ctx.cr6.gt) goto loc_8267B4D4;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// subf r10,r10,r26
	ctx.r10.u64 = r26.u64 - ctx.r10.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267b4d4
	if (ctx.cr6.lt) goto loc_8267B4D4;
	// lwz r11,700(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 700);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_8267B4D4:
	// lhz r11,330(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267b4e8
	if (ctx.cr0.eq) goto loc_8267B4E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82681c70
	ctx.lr = 0x8267B4E8;
	sub_82681C70(ctx, base);
loc_8267B4E8:
	// lhz r11,330(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 330);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267b578
	if (ctx.cr0.eq) goto loc_8267B578;
	// lwz r11,1036(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1036);
	// addi r10,r28,1032
	ctx.r10.s64 = r28.s64 + 1032;
	// lhz r9,332(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 332);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b540
	if (ctx.cr6.eq) goto loc_8267B540;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
loc_8267B51C:
	// lhz r8,324(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 324);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// extsh. r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8267b55c
	if (!ctx.cr0.gt) goto loc_8267B55C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267b540
	if (ctx.cr6.eq) goto loc_8267B540;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267b51c
	if (!ctx.cr0.eq) goto loc_8267B51C;
loc_8267B540:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// b 0x8267b58c
	goto loc_8267B58C;
loc_8267B55C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// b 0x8267b58c
	goto loc_8267B58C;
loc_8267B578:
	// lhz r11,1076(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 1076);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,1076(r28)
	REX_STORE_U16(r28.u32 + 1076, ctx.r11.u16);
	// bl 0x82676d18
	ctx.lr = 0x8267B58C;
	sub_82676D18(ctx, base);
loc_8267B58C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82684908) {
	REX_FUNC_PROLOGUE();
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r10,200(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// oris r11,r11,10240
	ctx.r11.u64 = ctx.r11.u64 | 671088640;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82684848
	sub_82684848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82685380) {
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
	ctx.lr = 0x82685388;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r29,r3,48
	r29.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// li r28,0
	r28.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x826854dc
	if (ctx.cr6.eq) goto loc_826854DC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// subf r10,r11,r29
	ctx.r10.u64 = r29.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
loc_826853DC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x826853f4
	if (ctx.cr6.eq) goto loc_826853F4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r11,-4
	r27.s64 = ctx.r11.s64 + -4;
	// bne 0x826853f8
	if (!ctx.cr0.eq) goto loc_826853F8;
loc_826853F4:
	// li r27,0
	r27.s64 = 0;
loc_826853F8:
	// lbz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 72);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8268540c
	if (ctx.cr6.eq) goto loc_8268540C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826854d0
	if (!ctx.cr6.eq) goto loc_826854D0;
loc_8268540C:
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82684a10
	ctx.lr = 0x8268542C;
	sub_82684A10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826854d0
	if (ctx.cr0.eq) goto loc_826854D0;
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 76);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826854d0
	if (!ctx.cr0.eq) goto loc_826854D0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826854b4
	if (ctx.cr6.eq) goto loc_826854B4;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82685458
	if (ctx.cr0.eq) goto loc_82685458;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826885c8
	ctx.lr = 0x82685458;
	sub_826885C8(ctx, base);
loc_82685458:
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 76);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826854b4
	if (ctx.cr0.eq) goto loc_826854B4;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// addi r9,r31,172
	ctx.r9.s64 = r31.s64 + 172;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826854a8
	if (ctx.cr6.eq) goto loc_826854A8;
loc_82685474:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// bne cr6,0x82685494
	if (!ctx.cr6.eq) goto loc_82685494;
	// stw r27,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r27.u32);
	// lhz r10,76(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 76);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// sth r10,76(r27)
	REX_STORE_U16(r27.u32 + 76, ctx.r10.u16);
loc_82685494:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x826854a8
	if (ctx.cr6.eq) goto loc_826854A8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82685474
	if (!ctx.cr0.eq) goto loc_82685474;
loc_826854A8:
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 76);
	// andi. r11,r11,65279
	ctx.r11.u64 = ctx.r11.u64 & 65279;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,76(r30)
	REX_STORE_U16(r30.u32 + 76, ctx.r11.u16);
loc_826854B4:
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,4117
	ctx.r4.u64 = ctx.r4.u64 | 4117;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x82687870
	ctx.lr = 0x826854D0;
	sub_82687870(ctx, base);
loc_826854D0:
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x826853dc
	if (!ctx.cr6.eq) goto loc_826853DC;
loc_826854DC:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stw r10,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r10.u32);
	// beq cr6,0x82685508
	if (ctx.cr6.eq) goto loc_82685508;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_82685508:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8268551c
	if (ctx.cr6.eq) goto loc_8268551C;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_8268551C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82692370) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82692378;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826924b8
	if (ctx.cr6.eq) goto loc_826924B8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,64206
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64206, ctx.xer);
	// bne cr6,0x826924b8
	if (!ctx.cr6.eq) goto loc_826924B8;
	// lbz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x826923ac
	if (ctx.cr6.eq) goto loc_826923AC;
	// li r3,6115
	ctx.r3.s64 = 6115;
	// b 0x826924bc
	goto loc_826924BC;
loc_826923AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826923bc
	if (!ctx.cr6.eq) goto loc_826923BC;
	// li r3,6170
	ctx.r3.s64 = 6170;
	// b 0x826924bc
	goto loc_826924BC;
loc_826923BC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826923d0
	if (!ctx.cr6.eq) goto loc_826923D0;
	// li r3,6130
	ctx.r3.s64 = 6130;
	// b 0x826924bc
	goto loc_826924BC;
loc_826923D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826923e4
	if (!ctx.cr6.eq) goto loc_826923E4;
	// li r3,6125
	ctx.r3.s64 = 6125;
	// b 0x826924bc
	goto loc_826924BC;
loc_826923E4:
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82692400
	if (ctx.cr6.lt) goto loc_82692400;
	// li r3,6145
	ctx.r3.s64 = 6145;
	// b 0x826924bc
	goto loc_826924BC;
loc_82692400:
	// lhz r9,18(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82692414
	if (ctx.cr6.lt) goto loc_82692414;
	// li r3,6150
	ctx.r3.s64 = 6150;
	// b 0x826924bc
	goto loc_826924BC;
loc_82692414:
	// lbz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// ble cr6,0x8269242c
	if (!ctx.cr6.gt) goto loc_8269242C;
	// li r3,6135
	ctx.r3.s64 = 6135;
	// b 0x826924bc
	goto loc_826924BC;
loc_8269242C:
	// lbz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// ble cr6,0x82692440
	if (!ctx.cr6.gt) goto loc_82692440;
	// li r3,6140
	ctx.r3.s64 = 6140;
	// b 0x826924bc
	goto loc_826924BC;
loc_82692440:
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// lhz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// addi r29,r1,160
	r29.s64 = ctx.r1.s64 + 160;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x82693580
	ctx.lr = 0x82692470;
	sub_82693580(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826924b0
	if (ctx.cr6.eq) goto loc_826924B0;
	// li r9,12
	ctx.r9.s64 = 12;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82692490:
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,-44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -44, temp.u32);
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82692490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82692490;
loc_826924B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826924bc
	goto loc_826924BC;
loc_826924B8:
	// li r3,6100
	ctx.r3.s64 = 6100;
loc_826924BC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8269A8D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8269A8E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bne cr6,0x8269a904
	if (!ctx.cr6.eq) goto loc_8269A904;
	// bl 0x82699e90
	ctx.lr = 0x8269A900;
	sub_82699E90(ctx, base);
	// b 0x8269a908
	goto loc_8269A908;
loc_8269A904:
	// bl 0x82699ed8
	ctx.lr = 0x8269A908;
	sub_82699ED8(ctx, base);
loc_8269A908:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8269a954
	if (ctx.cr6.lt) goto loc_8269A954;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82794294
	ctx.lr = 0x8269A91C;
	__imp__RmcDeviceRequest(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8269a940
	if (!ctx.cr6.eq) goto loc_8269A940;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82699be0
	ctx.lr = 0x8269A938;
	sub_82699BE0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8269a954
	goto loc_8269A954;
loc_8269A940:
	// cmpwi cr6,r31,259
	ctx.cr6.compare<int32_t>(r31.s32, 259, ctx.xer);
	// beq cr6,0x8269a954
	if (ctx.cr6.eq) goto loc_8269A954;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82699c40
	ctx.lr = 0x8269A954;
	sub_82699C40(ctx, base);
loc_8269A954:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793b74
	ctx.lr = 0x8269A95C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8269C988) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,8896(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8896);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8269c9ac
	if (ctx.cr6.eq) goto loc_8269C9AC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8269C9AC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269D030) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r11,9032(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9032);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8269d054
	if (ctx.cr0.eq) goto loc_8269D054;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269D054;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8269D054:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x826a5c30
	ctx.lr = 0x8269D05C;
	sub_826A5C30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269f058
	ctx.lr = 0x8269D068;
	sub_8269F058(ctx, base);
	// bl 0x8269f008
	ctx.lr = 0x8269D06C;
	sub_8269F008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269E7DC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// lwz r30,148(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// b 0x8269e814
	goto loc_8269E814;
loc_8269E814:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269e1e0
	ctx.lr = 0x8269E81C;
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

DEFINE_REX_FUNC(sub_8269FD58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x826a3a68
	ctx.lr = 0x8269FD70;
	sub_826A3A68(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r3,88(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269FD88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826a3990
	ctx.lr = 0x8269FD8C;
	sub_826A3990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269fda4
	if (ctx.cr0.eq) goto loc_8269FDA4;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8269fda4
	if (ctx.cr6.eq) goto loc_8269FDA4;
	// bl 0x823ed360
	ctx.lr = 0x8269FDA4;
	sub_823ED360(ctx, base);
loc_8269FDA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826b4158
	ctx.lr = 0x8269FDAC;
	sub_826B4158(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x826a38b8
	ctx.lr = 0x8269FDB4;
	sub_826A38B8(ctx, base);
	// addi r1,r31,96
	ctx.r1.s64 = r31.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_31) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_27) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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

DEFINE_REX_FUNC(sub_826A2BA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,27184
	ctx.r11.s64 = ctx.r11.s64 + 27184;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_29) {
	REX_FUNC_PROLOGUE();
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// stfd f29,-24(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -24, f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_29) {
	REX_FUNC_PROLOGUE();
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f29,-24(r12)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A3360) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,25984
	ctx.r9.s64 = ctx.r10.s64 + 25984;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_826A3370:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826a33a4
	if (ctx.cr6.eq) goto loc_826A33A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// blt cr6,0x826a3370
	if (ctx.cr6.lt) goto loc_826A3370;
	// cmplwi cr6,r3,19
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 19, ctx.xer);
	// blt cr6,0x826a33b4
	if (ctx.cr6.lt) goto loc_826A33B4;
	// cmplwi cr6,r3,36
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36, ctx.xer);
	// bgt cr6,0x826a33b4
	if (ctx.cr6.gt) goto loc_826A33B4;
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_826A33A4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_826A33B4:
	// cmplwi cr6,r3,188
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 188, ctx.xer);
	// blt cr6,0x826a33c8
	if (ctx.cr6.lt) goto loc_826A33C8;
	// cmplwi cr6,r3,202
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 202, ctx.xer);
	// li r3,8
	ctx.r3.s64 = 8;
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_826A33C8:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_108) {
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

DEFINE_REX_FUNC(__restvmx_118) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826A5838) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x826a5560
	sub_826A5560(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A5848) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826a58a8
	if (ctx.cr6.eq) goto loc_826A58A8;
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_826A5858:
	// lbzu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x826a5870
	if (ctx.cr6.lt) goto loc_826A5870;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// bgt cr6,0x826a5870
	if (ctx.cr6.gt) goto loc_826A5870;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_826A5870:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x826a5888
	if (ctx.cr6.lt) goto loc_826A5888;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x826a5888
	if (ctx.cr6.gt) goto loc_826A5888;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_826A5888:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x826a58a0
	if (ctx.cr0.eq) goto loc_826A58A0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826a58a0
	if (ctx.cr6.eq) goto loc_826A58A0;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826a5858
	if (ctx.cr6.eq) goto loc_826A5858;
loc_826A58A0:
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// blr 
	return;
loc_826A58A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A98DC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r30,r11,26472
	ctx.r30.s64 = ctx.r11.s64 + 26472;
	// b 0x826a9908
	goto loc_826A9908;
loc_826A9908:
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x827938b4
	ctx.lr = 0x826A9910;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AA5B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826AA5C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826b0230
	ctx.lr = 0x826AA5CC;
	sub_826B0230(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r29,r11,31264
	r29.s64 = ctx.r11.s64 + 31264;
	// beq cr6,0x826aa644
	if (ctx.cr6.eq) goto loc_826AA644;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bne cr6,0x826aa5f4
	if (!ctx.cr6.eq) goto loc_826AA5F4;
	// lbz r10,148(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 148);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826aa608
	if (!ctx.cr0.eq) goto loc_826AA608;
loc_826AA5F4:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// bne cr6,0x826aa624
	if (!ctx.cr6.eq) goto loc_826AA624;
	// lbz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826aa624
	if (ctx.cr0.eq) goto loc_826AA624;
loc_826AA608:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826b0230
	ctx.lr = 0x826AA610;
	sub_826B0230(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826b0230
	ctx.lr = 0x826AA61C;
	sub_826B0230(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// beq cr6,0x826aa644
	if (ctx.cr6.eq) goto loc_826AA644;
loc_826AA624:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0230
	ctx.lr = 0x826AA62C;
	sub_826B0230(ctx, base);
	// bl 0x823ed360
	ctx.lr = 0x826AA630;
	sub_823ED360(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826aa644
	if (!ctx.cr0.eq) goto loc_826AA644;
	// bl 0x823ee280
	ctx.lr = 0x826AA63C;
	sub_823EE280(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x826aa648
	goto loc_826AA648;
loc_826AA644:
	// li r30,0
	r30.s64 = 0;
loc_826AA648:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0198
	ctx.lr = 0x826AA650;
	sub_826B0198(ctx, base);
	// srawi r11,r31,5
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = r31.s32 >> 5;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(72));
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// beq cr6,0x826aa688
	if (ctx.cr6.eq) goto loc_826AA688;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a3440
	ctx.lr = 0x826AA680;
	sub_826A3440(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826aa68c
	goto loc_826AA68C;
loc_826AA688:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AA68C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826B08F8) {
	REX_FUNC_PROLOGUE();
	// b 0x826a4a30
	sub_826A4A30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B0A98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826B0AA0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b0b1c
	if (ctx.cr6.eq) goto loc_826B0B1C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_826B0AB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b0ab4
	if (!ctx.cr6.eq) goto loc_826B0AB4;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d6a8
	ctx.lr = 0x826B0ADC;
	sub_8269D6A8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x826b0b1c
	if (ctx.cr0.eq) goto loc_826B0B1C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1bc8
	ctx.lr = 0x826B0AF4;
	sub_826A1BC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826b0b04
	if (!ctx.cr0.eq) goto loc_826B0B04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826b0b20
	goto loc_826B0B20;
loc_826B0B04:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269cbf8
	ctx.lr = 0x826B0B1C;
	sub_8269CBF8(ctx, base);
loc_826B0B1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B0B20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826B5A68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826B5A70;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826B5A8C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x826b5a8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B5A8C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82793634
	ctx.lr = 0x826B5A9C;
	__imp__XGetVideoMode(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r29.u64);
	// std r29,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r29.u64);
	// bl 0x822d6628
	ctx.lr = 0x826B5AB8;
	sub_822D6628(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// beq cr6,0x826b5b00
	if (ctx.cr6.eq) goto loc_826B5B00;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,26060(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26060);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826b5b08
	goto loc_826B5B08;
loc_826B5B00:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,26056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26056);
	ctx.f0.f64 = double(temp.f32);
loc_826B5B08:
	// fdivs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// bl 0x822c6190
	ctx.lr = 0x826B5B28;
	sub_822C6190(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r30,r11,14
	r30.u64 = ctx.r11.u64 | 14;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b5bf0
	if (ctx.cr6.lt) goto loc_826B5BF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822c6240
	ctx.lr = 0x826B5B5C;
	sub_822C6240(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r29,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, r29.u16);
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r9,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// li r7,4
	ctx.r7.s64 = 4;
	// sth r10,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// sth r8,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// sth r7,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// bl 0x822c6288
	ctx.lr = 0x826B5B90;
	sub_822C6288(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822c6068
	ctx.lr = 0x826B5BA0;
	sub_822C6068(ctx, base);
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b5bf0
	if (ctx.cr6.lt) goto loc_826B5BF0;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,31200
	ctx.r3.s64 = ctx.r11.s64 + 31200;
	// bl 0x822c99b0
	ctx.lr = 0x826B5BC4;
	sub_822C99B0(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b5bf0
	if (ctx.cr6.lt) goto loc_826B5BF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B5BF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B5BF0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826C1CB0) {
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
	// bl 0x826bc110
	ctx.lr = 0x826C1CC8;
	sub_826BC110(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,29896
	ctx.r9.s64 = ctx.r10.s64 + 29896;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_826C5188) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826C5190;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C51B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,256(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r30,52(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x826c1b80
	ctx.lr = 0x826C51C8;
	sub_826C1B80(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C51E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,80(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C51F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// ld r29,0(r4)
	r29.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C5210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c5234
	if (ctx.cr6.eq) goto loc_826C5234;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C5230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_826C5234:
	// addi r11,r31,244
	ctx.r11.s64 = r31.s64 + 244;
loc_826C5238:
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
	// bne 0x826c5238
	if (!ctx.cr0.eq) goto loc_826C5238;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x826c526c
	if (ctx.cr6.lt) goto loc_826C526C;
	// stw r28,256(r31)
	REX_STORE_U32(r31.u32 + 256, r28.u32);
loc_826C526C:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C5284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,196(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 196);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C5298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,204(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 204);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C52AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826D2178) {
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
	// bl 0x826d1e48
	ctx.lr = 0x826D21B0;
	sub_826D1E48(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826d21c0
	goto loc_826D21C0;
loc_826D21C0:
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

DEFINE_REX_FUNC(sub_826D4CC0) {
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
	ctx.lr = 0x826D4CC8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,28(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r23,r4,-24
	r23.s64 = ctx.r4.s64 + -24;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// sth r30,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, r30.u16);
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// sth r30,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r30.u16);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826D4D20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// cmplwi cr6,r23,54
	ctx.cr6.compare<uint32_t>(r23.u32, 54, ctx.xer);
	// blt cr6,0x826d51bc
	if (ctx.cr6.lt) goto loc_826D51BC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d4080
	ctx.lr = 0x826D4D48;
	sub_826D4080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d4080
	ctx.lr = 0x826D4D68;
	sub_826D4080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D4D88;
	sub_826D3EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D4DA8;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D4DC8;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D4DE8;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D4E08;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,148(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 148);
	// li r24,54
	r24.s64 = 54;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r31,r11,25
	r31.u64 = ctx.r11.u32 & 0x7F;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subfe r28,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x826c6cf0
	ctx.lr = 0x826D4E38;
	sub_826C6CF0(ctx, base);
	// lis r8,-32688
	ctx.r8.s64 = -2142240768;
	// ori r7,r8,22
	ctx.r7.u64 = ctx.r8.u64 | 22;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x826d4e60
	if (!ctx.cr6.eq) goto loc_826D4E60;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,148(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 148);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826c6c08
	ctx.lr = 0x826D4E58;
	sub_826C6C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
loc_826D4E60:
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// ld r26,128(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// li r29,1
	r29.s64 = 1;
	// addi r11,r11,30568
	ctx.r11.s64 = ctx.r11.s64 + 30568;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, r31.u8);
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// std r26,56(r7)
	REX_STORE_U64(ctx.r7.u32 + 56, r26.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r28,64(r6)
	REX_STORE_U32(ctx.r6.u32 + 64, r28.u32);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r29,68(r5)
	REX_STORE_U32(ctx.r5.u32 + 68, r29.u32);
loc_826D4E98:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826d4eb8
	if (!ctx.cr0.eq) goto loc_826D4EB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826d4e98
	if (!ctx.cr6.eq) goto loc_826D4E98;
loc_826D4EB8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826d51cc
	if (!ctx.cr6.eq) goto loc_826D51CC;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6c08
	ctx.lr = 0x826D4ED4;
	sub_826C6C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x826c6880
	ctx.lr = 0x826D4EF4;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_826D4F14:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826d4f14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D4F14;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r30,112(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lhz r9,38(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// sth r9,44(r10)
	REX_STORE_U16(ctx.r10.u32 + 44, ctx.r9.u16);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r29,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, r29.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,38(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 38);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,38(r11)
	REX_STORE_U16(ctx.r11.u32 + 38, ctx.r6.u16);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// sth r10,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r10.u16);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r29,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r29.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, r31.u8);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r6)
	REX_STORE_U64(ctx.r6.u32 + 16, r26.u64);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, r28.u32);
	// beq cr6,0x826d5140
	if (ctx.cr6.eq) goto loc_826D5140;
	// addi r11,r30,54
	ctx.r11.s64 = r30.s64 + 54;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bgt cr6,0x826d51bc
	if (ctx.cr6.gt) goto loc_826D51BC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D4FA4;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// bl 0x826d3b98
	ctx.lr = 0x826D4FD4;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,2(r9)
	REX_STORE_U16(ctx.r9.u32 + 2, ctx.r10.u16);
	// bl 0x826d3d18
	ctx.lr = 0x826D5004;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x826d3d18
	ctx.lr = 0x826D5034;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x826d3b98
	ctx.lr = 0x826D5064;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,12(r9)
	REX_STORE_U16(ctx.r9.u32 + 12, ctx.r10.u16);
	// bl 0x826d3b98
	ctx.lr = 0x826D5094;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,14(r9)
	REX_STORE_U16(ctx.r9.u32 + 14, ctx.r10.u16);
	// bl 0x826d3b98
	ctx.lr = 0x826D50C4;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addis r10,r30,1
	ctx.r10.s64 = r30.s64 + 65536;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r10,r10,-18
	ctx.r10.s64 = ctx.r10.s64 + -18;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,16(r8)
	REX_STORE_U16(ctx.r8.u32 + 16, ctx.r10.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// lhz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// bl 0x826c6880
	ctx.lr = 0x826D50FC;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// addi r31,r5,72
	r31.s64 = ctx.r5.s64 + 72;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bgt cr6,0x826d51bc
	if (ctx.cr6.gt) goto loc_826D51BC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D5134;
	sub_826D4230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// mr r24,r31
	r24.u64 = r31.u64;
loc_826D5140:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d563c
	if (ctx.cr6.eq) goto loc_826D563C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,30552
	ctx.r11.s64 = ctx.r11.s64 + 30552;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_826D515C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826d517c
	if (!ctx.cr0.eq) goto loc_826D517C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826d515c
	if (!ctx.cr6.eq) goto loc_826D515C;
loc_826D517C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826d563c
	if (ctx.cr6.eq) goto loc_826D563C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,30536
	ctx.r11.s64 = ctx.r11.s64 + 30536;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_826D5194:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826d51b4
	if (!ctx.cr0.eq) goto loc_826D51B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826d5194
	if (!ctx.cr6.eq) goto loc_826D5194;
loc_826D51B4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826d563c
	if (ctx.cr6.eq) goto loc_826D563C;
loc_826D51BC:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf4
	return;
loc_826D51CC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,13800
	ctx.r11.s64 = ctx.r11.s64 + 13800;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_826D51DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826d51fc
	if (!ctx.cr0.eq) goto loc_826D51FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826d51dc
	if (!ctx.cr6.eq) goto loc_826D51DC;
loc_826D51FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826d55f0
	if (!ctx.cr6.eq) goto loc_826D55F0;
	// lwz r30,112(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826d51bc
	if (ctx.cr6.eq) goto loc_826D51BC;
	// cmplwi cr6,r30,51
	ctx.cr6.compare<uint32_t>(r30.u32, 51, ctx.xer);
	// blt cr6,0x826d51bc
	if (ctx.cr6.lt) goto loc_826D51BC;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6c08
	ctx.lr = 0x826D522C;
	sub_826C6C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x826c6880
	ctx.lr = 0x826D524C;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x826a2e60
	ctx.lr = 0x826D5268;
	sub_826A2E60(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lhz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r11,44(r8)
	REX_STORE_U16(ctx.r8.u32 + 44, ctx.r11.u16);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 40);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r8.u16);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r8)
	REX_STORE_U64(ctx.r8.u32 + 16, r26.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// bl 0x826d3d18
	ctx.lr = 0x826D52D4;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bl 0x826d3d18
	ctx.lr = 0x826D5304;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x826d3a88
	ctx.lr = 0x826D5334;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x826d51bc
	if (!ctx.cr6.eq) goto loc_826D51BC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D5360;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D5380;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D53A0;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x826d3d18
	ctx.lr = 0x826D53D0;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// bl 0x826d3b98
	ctx.lr = 0x826D5400;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r10.u16);
	// bl 0x826d3b98
	ctx.lr = 0x826D5430;
	sub_826D3B98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lhz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,18(r9)
	REX_STORE_U16(ctx.r9.u32 + 18, ctx.r10.u16);
	// bl 0x826d3d18
	ctx.lr = 0x826D5460;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stwbrx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, __builtin_bswap32(ctx.r9.u32));
	// bl 0x826d3d18
	ctx.lr = 0x826D5494;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// bl 0x826d3d18
	ctx.lr = 0x826D54C4;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// bl 0x826d3d18
	ctx.lr = 0x826D54F4;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// bl 0x826d3d18
	ctx.lr = 0x826D5524;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// bl 0x826d3d18
	ctx.lr = 0x826D5554;
	sub_826D3D18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r24,105
	r24.s64 = 105;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r30,51
	ctx.cr6.compare<uint32_t>(r30.u32, 51, ctx.xer);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r10.u32);
	// ble cr6,0x826d563c
	if (!ctx.cr6.gt) goto loc_826D563C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addis r10,r30,1
	ctx.r10.s64 = r30.s64 + 65536;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r10,r10,-51
	ctx.r10.s64 = ctx.r10.s64 + -51;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,48(r8)
	REX_STORE_U16(ctx.r8.u32 + 48, ctx.r10.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// bl 0x826c6880
	ctx.lr = 0x826D55A8;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// addi r31,r5,105
	r31.s64 = ctx.r5.s64 + 105;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// bgt cr6,0x826d51bc
	if (ctx.cr6.gt) goto loc_826D51BC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D55E0;
	sub_826D4230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// mr r24,r31
	r24.u64 = r31.u64;
	// b 0x826d563c
	goto loc_826D563C;
loc_826D55F0:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6c08
	ctx.lr = 0x826D5604;
	sub_826C6C08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r26,16(r7)
	REX_STORE_U64(ctx.r7.u32 + 16, r26.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r30,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, r30.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r30.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r31.u8);
loc_826D563C:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r9.u16);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r6,r7,r23
	ctx.r6.u64 = r23.u64 - ctx.r7.u64;
	// subf. r31,r24,r6
	r31.u64 = ctx.r6.u64 - r24.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x826d568c
	if (ctx.cr0.eq) goto loc_826D568C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D5674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d568c
	if (ctx.cr6.lt) goto loc_826D568C;
	// ld r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U64(r25.u32 + 8);
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r11.u64);
loc_826D568C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82723438) {
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
	// bne cr6,0x8272346c
	if (!ctx.cr6.eq) goto loc_8272346C;
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
loc_8272346C:
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82723494
	if (!ctx.cr6.eq) goto loc_82723494;
	// bl 0x82722e60
	ctx.lr = 0x82723480;
	sub_82722E60(ctx, base);
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
loc_82723494:
	// bl 0x82722ab8
	ctx.lr = 0x82723498;
	sub_82722AB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x827234A0;
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

DEFINE_REX_FUNC(sub_82725630) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24184);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8272564c
	if (!ctx.cr6.lt) goto loc_8272564C;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,24184(r3)
	REX_STORE_U32(ctx.r3.u32 + 24184, ctx.r7.u32);
loc_8272564C:
	// lwz r9,3668(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 3668);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8272566c
	if (ctx.cr6.lt) goto loc_8272566C;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bgt cr6,0x8272566c
	if (ctx.cr6.gt) goto loc_8272566C;
	// stw r9,15580(r11)
	REX_STORE_U32(ctx.r11.u32 + 15580, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8272566C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8272567c
	if (ctx.cr6.lt) goto loc_8272567C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x8272579c
	if (!ctx.cr6.gt) goto loc_8272579C;
loc_8272567C:
	// lwz r10,3680(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3680);
	// li r8,30
	ctx.r8.s64 = 30;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82725690
	if (!ctx.cr6.gt) goto loc_82725690;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82725690:
	// lwz r9,3684(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 3684);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x827256a0
	if (ctx.cr6.gt) goto loc_827256A0;
	// li r9,500
	ctx.r9.s64 = 500;
loc_827256A0:
	// lwz r10,24188(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24188);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827257a8
	if (!ctx.cr6.gt) goto loc_827257A8;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// blt cr6,0x827257a8
	if (ctx.cr6.lt) goto loc_827257A8;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r3,r6,34464
	ctx.r3.u64 = ctx.r6.u64 | 34464;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x827257a8
	if (ctx.cr6.gt) goto loc_827257A8;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// lwz r6,15604(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 15604);
	// mullw r5,r8,r5
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// std r4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,4104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// mulli r9,r10,10000
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10000));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// fsqrts f10,f12
	ctx.f10.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r9,r6,r8
	ctx.r9.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne cr6,0x82725744
	if (!ctx.cr6.eq) goto loc_82725744;
	// addi r9,r9,-50
	ctx.r9.s64 = ctx.r9.s64 + -50;
loc_82725744:
	// addi r10,r9,-100
	ctx.r10.s64 = ctx.r9.s64 + -100;
	// cmpwi cr6,r10,120
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 120, ctx.xer);
	// blt cr6,0x82725760
	if (ctx.cr6.lt) goto loc_82725760;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15580(r11)
	REX_STORE_U32(ctx.r11.u32 + 15580, ctx.r10.u32);
	// blr 
	return;
loc_82725760:
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// blt cr6,0x82725778
	if (ctx.cr6.lt) goto loc_82725778;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15580(r11)
	REX_STORE_U32(ctx.r11.u32 + 15580, ctx.r10.u32);
	// blr 
	return;
loc_82725778:
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x82725790
	if (ctx.cr6.lt) goto loc_82725790;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15580(r11)
	REX_STORE_U32(ctx.r11.u32 + 15580, ctx.r10.u32);
	// blr 
	return;
loc_82725790:
	// cmpwi cr6,r10,42
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 42, ctx.xer);
	// blt cr6,0x827257a8
	if (ctx.cr6.lt) goto loc_827257A8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8272579C:
	// stw r10,15580(r11)
	REX_STORE_U32(ctx.r11.u32 + 15580, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827257A8:
	// stw r7,15580(r11)
	REX_STORE_U32(ctx.r11.u32 + 15580, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827319F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82731A00;
	// lhz r30,50(r3)
	r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// srawi r31,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r6.s32 >> 16;
	// lhz r29,52(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 52);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x82731a28
	if (!ctx.cr6.eq) goto loc_82731A28;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82731a30
	goto loc_82731A30;
loc_82731A28:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82731a34
	if (!ctx.cr6.eq) goto loc_82731A34;
loc_82731A30:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82731A34:
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// lhz r9,18(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 18);
	// lhz r8,16(r7)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + 16);
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// clrlwi r7,r6,31
	ctx.r7.u64 = ctx.r6.u32 & 0x1;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r9,r5,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// subfic r10,r11,-15
	ctx.xer.ca = ctx.r11.u32 <= 4294967281;
	ctx.r10.u64 = static_cast<uint64_t>(-15) - ctx.r11.u64;
	// beq cr6,0x82731a70
	if (ctx.cr6.eq) goto loc_82731A70;
	// subfic r10,r11,-7
	ctx.xer.ca = ctx.r11.u32 <= 4294967289;
	ctx.r10.u64 = static_cast<uint64_t>(-7) - ctx.r11.u64;
loc_82731A70:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// not r5,r5
	ctx.r5.u64 = ~ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82731ac0
	if (!ctx.cr6.lt) goto loc_82731AC0;
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// b 0x82731acc
	goto loc_82731ACC;
loc_82731AC0:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82731ad0
	if (!ctx.cr6.gt) goto loc_82731AD0;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_82731ACC:
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82731AD0:
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82731ae0
	if (!ctx.cr6.lt) goto loc_82731AE0;
	// subf r11,r10,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r10.u64;
	// b 0x82731aec
	goto loc_82731AEC;
loc_82731AE0:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82731af0
	if (!ctx.cr6.gt) goto loc_82731AF0;
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_82731AEC:
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_82731AF0:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x82731b00
	if (!ctx.cr6.eq) goto loc_82731B00;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// srawi r31,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r31.s64 = r31.s32 >> 1;
loc_82731B00:
	// rlwimi r3,r31,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82739B48) {
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
	ctx.lr = 0x82739B50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// stw r27,17324(r3)
	REX_STORE_U32(ctx.r3.u32 + 17324, r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,19660(r3)
	REX_STORE_U32(ctx.r3.u32 + 19660, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,1968(r3)
	REX_STORE_U32(ctx.r3.u32 + 1968, r28.u32);
	// mr r26,r27
	r26.u64 = r27.u64;
	// bl 0x82739580
	ctx.lr = 0x82739B78;
	sub_82739580(ctx, base);
	// ld r11,3600(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 3600);
	// stw r27,21928(r30)
	REX_STORE_U32(r30.u32 + 21928, r27.u32);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// bne cr6,0x82739ba4
	if (!ctx.cr6.eq) goto loc_82739BA4;
	// lwz r11,21764(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739b9c
	if (ctx.cr6.eq) goto loc_82739B9C;
	// stw r28,21932(r30)
	REX_STORE_U32(r30.u32 + 21932, r28.u32);
	// b 0x82739bb0
	goto loc_82739BB0;
loc_82739B9C:
	// stw r27,21932(r30)
	REX_STORE_U32(r30.u32 + 21932, r27.u32);
	// b 0x82739bb0
	goto loc_82739BB0;
loc_82739BA4:
	// lwz r11,20912(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,21932(r30)
	REX_STORE_U32(r30.u32 + 21932, ctx.r10.u32);
loc_82739BB0:
	// lwz r11,21764(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739bc4
	if (ctx.cr6.eq) goto loc_82739BC4;
	// stw r27,20912(r30)
	REX_STORE_U32(r30.u32 + 20912, r27.u32);
	// b 0x82739bc8
	goto loc_82739BC8;
loc_82739BC4:
	// stw r28,20912(r30)
	REX_STORE_U32(r30.u32 + 20912, r28.u32);
loc_82739BC8:
	// lwz r11,22000(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22000);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,284(r30)
	REX_STORE_U32(r30.u32 + 284, ctx.r11.u32);
	// bl 0x8277fd20
	ctx.lr = 0x82739BD8;
	sub_8277FD20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8273a038
	if (!ctx.cr6.eq) goto loc_8273A038;
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82739c00
	if (!ctx.cr6.eq) goto loc_82739C00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,22008(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 22008);
	// bl 0x8277fb00
	ctx.lr = 0x82739BFC;
	sub_8277FB00(ctx, base);
	// b 0x82739c48
	goto loc_82739C48;
loc_82739C00:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82739c48
	if (!ctx.cr6.eq) goto loc_82739C48;
	// lwz r11,14808(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14808);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,3416(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3416);
	// lwz r9,22008(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 22008);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r31,r6,r11
	r31.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bl 0x8277fb00
	ctx.lr = 0x82739C3C;
	sub_8277FB00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8277fc10
	ctx.lr = 0x82739C48;
	sub_8277FC10(ctx, base);
loc_82739C48:
	// lwz r10,284(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82739c58
	if (!ctx.cr6.eq) goto loc_82739C58;
	// stw r27,3404(r30)
	REX_STORE_U32(r30.u32 + 3404, r27.u32);
loc_82739C58:
	// lwz r11,22000(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22000);
	// stw r28,1968(r30)
	REX_STORE_U32(r30.u32 + 1968, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739c70
	if (ctx.cr6.eq) goto loc_82739C70;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82739d74
	if (!ctx.cr6.eq) goto loc_82739D74;
loc_82739C70:
	// lwz r11,14820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739d74
	if (ctx.cr6.eq) goto loc_82739D74;
	// lwz r11,14804(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82739d64
	if (!ctx.cr6.gt) goto loc_82739D64;
	// lwz r11,3400(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3400);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x82739ccc
	if (!ctx.cr6.eq) goto loc_82739CCC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8273a9bc
	if (ctx.cr6.eq) goto loc_8273A9BC;
	// lwz r11,22296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22296);
	// lwz r10,3420(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3420);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,3400(r30)
	REX_STORE_U32(r30.u32 + 3400, ctx.r8.u32);
	// beq cr6,0x82739cc0
	if (ctx.cr6.eq) goto loc_82739CC0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827460b0
	ctx.lr = 0x82739CC0;
	sub_827460B0(ctx, base);
loc_82739CC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82746150
	ctx.lr = 0x82739CC8;
	sub_82746150(ctx, base);
	// b 0x82739d74
	goto loc_82739D74;
loc_82739CCC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82739d34
	if (!ctx.cr6.eq) goto loc_82739D34;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x82739d10
	if (!ctx.cr6.eq) goto loc_82739D10;
	// lwz r11,21932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21932);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,3432(r30)
	REX_STORE_U32(r30.u32 + 3432, r28.u32);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r28,21928(r30)
	REX_STORE_U32(r30.u32 + 21928, r28.u32);
	// stw r10,21932(r30)
	REX_STORE_U32(r30.u32 + 21932, ctx.r10.u32);
	// bl 0x8271f9e0
	ctx.lr = 0x82739CFC;
	sub_8271F9E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271f4a8
	ctx.lr = 0x82739D04;
	sub_8271F4A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_82739D10:
	// stw r27,3400(r30)
	REX_STORE_U32(r30.u32 + 3400, r27.u32);
	// bl 0x827460b0
	ctx.lr = 0x82739D18;
	sub_827460B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82746150
	ctx.lr = 0x82739D20;
	sub_82746150(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// bl 0x8274d2d8
	ctx.lr = 0x82739D2C;
	sub_8274D2D8(ctx, base);
	// stw r27,3408(r30)
	REX_STORE_U32(r30.u32 + 3408, r27.u32);
	// b 0x82739d74
	goto loc_82739D74;
loc_82739D34:
	// lwz r11,3420(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739d48
	if (ctx.cr6.eq) goto loc_82739D48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827460b0
	ctx.lr = 0x82739D48;
	sub_827460B0(ctx, base);
loc_82739D48:
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82739d5c
	if (ctx.cr6.eq) goto loc_82739D5C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82746150
	ctx.lr = 0x82739D5C;
	sub_82746150(ctx, base);
loc_82739D5C:
	// stw r27,3408(r30)
	REX_STORE_U32(r30.u32 + 3408, r27.u32);
	// b 0x82739d74
	goto loc_82739D74;
loc_82739D64:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x827077d0
	ctx.lr = 0x82739D74;
	sub_827077D0(ctx, base);
loc_82739D74:
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739fe0
	if (ctx.cr6.eq) goto loc_82739FE0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82739fe0
	if (ctx.cr6.eq) goto loc_82739FE0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82703500
	ctx.lr = 0x82739D90;
	sub_82703500(ctx, base);
	// lwz r11,14820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739e14
	if (ctx.cr6.eq) goto loc_82739E14;
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82739e14
	if (ctx.cr6.eq) goto loc_82739E14;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82739e64
	if (!ctx.cr6.eq) goto loc_82739E64;
	// lwz r11,3400(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3400);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82739dfc
	if (!ctx.cr6.eq) goto loc_82739DFC;
	// lwz r11,22296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82739dfc
	if (!ctx.cr6.eq) goto loc_82739DFC;
	// lwz r11,21932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21932);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,3432(r30)
	REX_STORE_U32(r30.u32 + 3432, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r28,21928(r30)
	REX_STORE_U32(r30.u32 + 21928, r28.u32);
	// stw r10,21932(r30)
	REX_STORE_U32(r30.u32 + 21932, ctx.r10.u32);
	// bl 0x8271f9e0
	ctx.lr = 0x82739DE8;
	sub_8271F9E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271f4a8
	ctx.lr = 0x82739DF0;
	sub_8271F4A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_82739DFC:
	// lwz r11,3420(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739e64
	if (ctx.cr6.eq) goto loc_82739E64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827460b0
	ctx.lr = 0x82739E10;
	sub_827460B0(ctx, base);
	// b 0x82739e64
	goto loc_82739E64;
loc_82739E14:
	// lwz r11,14804(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82739e30
	if (!ctx.cr6.eq) goto loc_82739E30;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827077d0
	ctx.lr = 0x82739E2C;
	sub_827077D0(ctx, base);
	// b 0x82739e60
	goto loc_82739E60;
loc_82739E30:
	// lwz r11,3400(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3400);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82739e44
	if (!ctx.cr6.eq) goto loc_82739E44;
	// stw r27,3400(r30)
	REX_STORE_U32(r30.u32 + 3400, r27.u32);
	// b 0x82739e50
	goto loc_82739E50;
loc_82739E44:
	// lwz r11,3420(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739e58
	if (ctx.cr6.eq) goto loc_82739E58;
loc_82739E50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827460b0
	ctx.lr = 0x82739E58;
	sub_827460B0(ctx, base);
loc_82739E58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82746150
	ctx.lr = 0x82739E60;
	sub_82746150(ctx, base);
loc_82739E60:
	// stw r27,3408(r30)
	REX_STORE_U32(r30.u32 + 3408, r27.u32);
loc_82739E64:
	// lwz r11,3988(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739f58
	if (ctx.cr6.eq) goto loc_82739F58;
	// lwz r11,14804(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739e84
	if (ctx.cr6.eq) goto loc_82739E84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82703a00
	ctx.lr = 0x82739E84;
	sub_82703A00(ctx, base);
loc_82739E84:
	// lwz r11,20952(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739ea4
	if (ctx.cr6.eq) goto loc_82739EA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,20964(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20964);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,20960(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20960);
	// bl 0x827429d8
	ctx.lr = 0x82739EA4;
	sub_827429D8(ctx, base);
loc_82739EA4:
	// lwz r11,20956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82739ec4
	if (ctx.cr6.eq) goto loc_82739EC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,20972(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20972);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,20968(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20968);
	// bl 0x827429d8
	ctx.lr = 0x82739EC4;
	sub_827429D8(ctx, base);
loc_82739EC4:
	// lwz r11,22448(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82739f58
	if (!ctx.cr6.eq) goto loc_82739F58;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r31,15888(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 15888);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,172(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 172);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,184(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 184);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,164(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 164);
	// lwz r6,220(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 220);
	// lwz r3,3756(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 3756);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x82739F10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,208(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 208);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
	// li r8,1
	ctx.r8.s64 = 1;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r31,15884(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 15884);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,176(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 176);
	// lwz r10,168(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 168);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,224(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r4,3764(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3764);
	// lwz r3,3760(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 3760);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x82739F58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82739F58:
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82739f70
	if (!ctx.cr6.eq) goto loc_82739F70;
	// bl 0x827d18e0
	ctx.lr = 0x82739F6C;
	sub_827D18E0(ctx, base);
	// b 0x82739f74
	goto loc_82739F74;
loc_82739F70:
	// bl 0x827d1738
	ctx.lr = 0x82739F74;
	sub_827D1738(ctx, base);
loc_82739F74:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8273a030
	if (!ctx.cr6.eq) goto loc_8273A030;
loc_82739F80:
	// li r26,4
	r26.s64 = 4;
loc_82739F84:
	// lwz r11,22000(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a068
	if (ctx.cr6.eq) goto loc_8273A068;
	// lwz r11,22004(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273a068
	if (!ctx.cr6.eq) goto loc_8273A068;
	// lwz r11,14820(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a068
	if (ctx.cr6.eq) goto loc_8273A068;
	// lwz r11,14804(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8273a068
	if (!ctx.cr6.gt) goto loc_8273A068;
	// lwz r11,3400(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3400);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x8273a058
	if (!ctx.cr6.eq) goto loc_8273A058;
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8273a9bc
	if (ctx.cr6.eq) goto loc_8273A9BC;
	// lwz r11,22296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22296);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,3400(r30)
	REX_STORE_U32(r30.u32 + 3400, ctx.r9.u32);
	// b 0x8273a068
	goto loc_8273A068;
loc_82739FE0:
	// lwz r11,15540(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15540);
	// stw r28,3692(r30)
	REX_STORE_U32(r30.u32 + 3692, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273a000
	if (!ctx.cr6.eq) goto loc_8273A000;
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// bne cr6,0x8273a004
	if (!ctx.cr6.eq) goto loc_8273A004;
loc_8273A000:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8273A004:
	// lwz r10,14852(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 14852);
	// stw r11,15508(r30)
	REX_STORE_U32(r30.u32 + 15508, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273a01c
	if (ctx.cr6.eq) goto loc_8273A01C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8270c900
	ctx.lr = 0x8273A01C;
	sub_8270C900(ctx, base);
loc_8273A01C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ceed8
	ctx.lr = 0x8273A024;
	sub_827CEED8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82739f80
	if (ctx.cr6.eq) goto loc_82739F80;
loc_8273A030:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82739f84
	if (ctx.cr6.eq) goto loc_82739F84;
loc_8273A038:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271f9e0
	ctx.lr = 0x8273A044;
	sub_8271F9E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271f4a8
	ctx.lr = 0x8273A04C;
	sub_8271F4A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_8273A058:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273a064
	if (!ctx.cr6.eq) goto loc_8273A064;
	// stw r27,3400(r30)
	REX_STORE_U32(r30.u32 + 3400, r27.u32);
loc_8273A064:
	// stw r27,3408(r30)
	REX_STORE_U32(r30.u32 + 3408, r27.u32);
loc_8273A068:
	// lwz r11,20904(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a9bc
	if (ctx.cr6.eq) goto loc_8273A9BC;
	// lwz r11,20908(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a9bc
	if (ctx.cr6.eq) goto loc_8273A9BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// bl 0x8274d2d8
	ctx.lr = 0x8273A08C;
	sub_8274D2D8(ctx, base);
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r11,21932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21932);
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r10,22004(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 22004);
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// stw r28,21928(r30)
	REX_STORE_U32(r30.u32 + 21928, r28.u32);
	// stw r7,20912(r30)
	REX_STORE_U32(r30.u32 + 20912, ctx.r7.u32);
	// stw r9,21932(r30)
	REX_STORE_U32(r30.u32 + 21932, ctx.r9.u32);
	// stw r10,284(r30)
	REX_STORE_U32(r30.u32 + 284, ctx.r10.u32);
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8273a154
	if (ctx.cr6.eq) goto loc_8273A154;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x8273a144
	if (!ctx.cr6.lt) goto loc_8273A144;
loc_8273A0D4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8273a11c
	if (ctx.cr6.gt) goto loc_8273A11C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8273a24c
	if (ctx.cr6.gt) goto loc_8273A24C;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// b 0x8273a134
	goto loc_8273A134;
loc_8273A11C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273a144
	if (!ctx.cr6.eq) goto loc_8273A144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725a90
	ctx.lr = 0x8273A130;
	sub_82725A90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8273A134:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8273a0d4
	if (ctx.cr6.lt) goto loc_8273A0D4;
loc_8273A144:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
loc_8273A14C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a9bc
	if (ctx.cr6.eq) goto loc_8273A9BC;
loc_8273A154:
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a1dc
	if (ctx.cr6.eq) goto loc_8273A1DC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8273a1b8
	if (!ctx.cr6.lt) goto loc_8273A1B8;
loc_8273A178:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a1b8
	if (ctx.cr6.eq) goto loc_8273A1B8;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8273a1a8
	if (!ctx.cr0.lt) goto loc_8273A1A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273A1A8;
	sub_82725E38(ctx, base);
loc_8273A1A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8273a178
	if (ctx.cr6.gt) goto loc_8273A178;
loc_8273A1B8:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8273a1dc
	if (!ctx.cr0.lt) goto loc_8273A1DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273A1DC;
	sub_82725E38(ctx, base);
loc_8273A1DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x82725f80
	ctx.lr = 0x8273A1EC;
	sub_82725F80(ctx, base);
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8273a2a4
	if (!ctx.cr6.lt) goto loc_8273A2A4;
loc_8273A204:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8273a27c
	if (ctx.cr6.gt) goto loc_8273A27C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8273a39c
	if (ctx.cr6.gt) goto loc_8273A39C;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// b 0x8273a294
	goto loc_8273A294;
loc_8273A24C:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x8273a144
	if (!ctx.cr6.lt) goto loc_8273A144;
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// srd r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldicl r5,r6,33,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 33) & 0x1FFFFFFFF;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// b 0x8273a14c
	goto loc_8273A14C;
loc_8273A27C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273a2a4
	if (!ctx.cr6.eq) goto loc_8273A2A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725a90
	ctx.lr = 0x8273A290;
	sub_82725A90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8273A294:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8273a204
	if (ctx.cr6.lt) goto loc_8273A204;
loc_8273A2A4:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
loc_8273A2A8:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8273a698
	if (!ctx.cr6.eq) goto loc_8273A698;
loc_8273A2B4:
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8273a448
	if (!ctx.cr6.eq) goto loc_8273A448;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,16
	r29.s64 = 16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8273a318
	if (!ctx.cr6.lt) goto loc_8273A318;
loc_8273A2D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a318
	if (ctx.cr6.eq) goto loc_8273A318;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8273a308
	if (!ctx.cr0.lt) goto loc_8273A308;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273A308;
	sub_82725E38(ctx, base);
loc_8273A308:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8273a2d8
	if (ctx.cr6.gt) goto loc_8273A2D8;
loc_8273A318:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8273a33c
	if (!ctx.cr0.lt) goto loc_8273A33C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273A33C;
	sub_82725E38(ctx, base);
loc_8273A33C:
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8273a3f4
	if (!ctx.cr6.lt) goto loc_8273A3F4;
loc_8273A354:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8273a3cc
	if (ctx.cr6.gt) goto loc_8273A3CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8273a418
	if (ctx.cr6.gt) goto loc_8273A418;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// b 0x8273a3e4
	goto loc_8273A3E4;
loc_8273A39C:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8273a2a4
	if (!ctx.cr6.lt) goto loc_8273A2A4;
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// srd r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldicl r5,r6,48,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// b 0x8273a2a8
	goto loc_8273A2A8;
loc_8273A3CC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273a3f4
	if (!ctx.cr6.eq) goto loc_8273A3F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725a90
	ctx.lr = 0x8273A3E0;
	sub_82725A90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8273A3E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8273a354
	if (ctx.cr6.lt) goto loc_8273A354;
loc_8273A3F4:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
loc_8273A3F8:
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8273a9bc
	if (!ctx.cr6.eq) goto loc_8273A9BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a2b4
	if (ctx.cr6.eq) goto loc_8273A2B4;
	// b 0x8273a450
	goto loc_8273A450;
loc_8273A418:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8273a3f4
	if (!ctx.cr6.lt) goto loc_8273A3F4;
	// addi r9,r10,248
	ctx.r9.s64 = ctx.r10.s64 + 248;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// srd r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r4,r5,48,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x8273a3f8
	goto loc_8273A3F8;
loc_8273A448:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8273a698
	if (ctx.cr6.eq) goto loc_8273A698;
loc_8273A450:
	// cmplwi cr6,r11,268
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 268, ctx.xer);
	// bne cr6,0x8273a4d4
	if (!ctx.cr6.eq) goto loc_8273A4D4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,16
	r29.s64 = 16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8273a4ac
	if (!ctx.cr6.lt) goto loc_8273A4AC;
loc_8273A46C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a4ac
	if (ctx.cr6.eq) goto loc_8273A4AC;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8273a49c
	if (!ctx.cr0.lt) goto loc_8273A49C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273A49C;
	sub_82725E38(ctx, base);
loc_8273A49C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8273a46c
	if (ctx.cr6.gt) goto loc_8273A46C;
loc_8273A4AC:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8273a6b0
	if (!ctx.cr0.lt) goto loc_8273A6B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273A4D0;
	sub_82725E38(ctx, base);
	// b 0x8273a6b0
	goto loc_8273A6B0;
loc_8273A4D4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8273a6b0
	if (!ctx.cr6.eq) goto loc_8273A6B0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,8
	r29.s64 = 8;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8273a530
	if (!ctx.cr6.lt) goto loc_8273A530;
loc_8273A4F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a530
	if (ctx.cr6.eq) goto loc_8273A530;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8273a520
	if (!ctx.cr0.lt) goto loc_8273A520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273A520;
	sub_82725E38(ctx, base);
loc_8273A520:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8273a4f0
	if (ctx.cr6.gt) goto loc_8273A4F0;
loc_8273A530:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8273a554
	if (!ctx.cr0.lt) goto loc_8273A554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273A554;
	sub_82725E38(ctx, base);
loc_8273A554:
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8273a5dc
	if (!ctx.cr6.lt) goto loc_8273A5DC;
loc_8273A56C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8273a5b4
	if (ctx.cr6.gt) goto loc_8273A5B4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8273a668
	if (ctx.cr6.gt) goto loc_8273A668;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// b 0x8273a5cc
	goto loc_8273A5CC;
loc_8273A5B4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273a5dc
	if (!ctx.cr6.eq) goto loc_8273A5DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725a90
	ctx.lr = 0x8273A5C8;
	sub_82725A90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8273A5CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8273a56c
	if (ctx.cr6.lt) goto loc_8273A56C;
loc_8273A5DC:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
loc_8273A5E0:
	// cmplwi cr6,r11,268
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 268, ctx.xer);
	// bne cr6,0x8273a6b0
	if (!ctx.cr6.eq) goto loc_8273A6B0;
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// li r29,16
	r29.s64 = 16;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8273a640
	if (!ctx.cr6.lt) goto loc_8273A640;
loc_8273A600:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273a640
	if (ctx.cr6.eq) goto loc_8273A640;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8273a630
	if (!ctx.cr0.lt) goto loc_8273A630;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273A630;
	sub_82725E38(ctx, base);
loc_8273A630:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8273a600
	if (ctx.cr6.gt) goto loc_8273A600;
loc_8273A640:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8273a6b0
	if (!ctx.cr0.lt) goto loc_8273A6B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273A664;
	sub_82725E38(ctx, base);
	// b 0x8273a6b0
	goto loc_8273A6B0;
loc_8273A668:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8273a5dc
	if (!ctx.cr6.lt) goto loc_8273A5DC;
	// addi r9,r10,248
	ctx.r9.s64 = ctx.r10.s64 + 248;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// srd r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r4,r5,48,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x8273a5e0
	goto loc_8273A5E0;
loc_8273A698:
	// lwz r11,22408(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a6b0
	if (ctx.cr6.eq) goto loc_8273A6B0;
	// lwz r11,22272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a9bc
	if (ctx.cr6.eq) goto loc_8273A9BC;
loc_8273A6B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8277fd20
	ctx.lr = 0x8273A6B8;
	sub_8277FD20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8273a038
	if (!ctx.cr6.eq) goto loc_8273A038;
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273a6e0
	if (!ctx.cr6.eq) goto loc_8273A6E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,22008(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 22008);
	// bl 0x8277fb00
	ctx.lr = 0x8273A6DC;
	sub_8277FB00(ctx, base);
	// b 0x8273a728
	goto loc_8273A728;
loc_8273A6E0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8273a728
	if (!ctx.cr6.eq) goto loc_8273A728;
	// lwz r11,14808(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14808);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,3416(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3416);
	// lwz r9,22008(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 22008);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r31,r6,r11
	r31.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bl 0x8277fb00
	ctx.lr = 0x8273A71C;
	sub_8277FB00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8277fc10
	ctx.lr = 0x8273A728;
	sub_8277FC10(ctx, base);
loc_8273A728:
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273a738
	if (!ctx.cr6.eq) goto loc_8273A738;
	// stw r27,3404(r30)
	REX_STORE_U32(r30.u32 + 3404, r27.u32);
loc_8273A738:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,1968(r30)
	REX_STORE_U32(r30.u32 + 1968, r28.u32);
	// beq cr6,0x8273a944
	if (ctx.cr6.eq) goto loc_8273A944;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8273a944
	if (ctx.cr6.eq) goto loc_8273A944;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82703500
	ctx.lr = 0x8273A754;
	sub_82703500(ctx, base);
	// lwz r11,3988(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a8b0
	if (ctx.cr6.eq) goto loc_8273A8B0;
	// lwz r11,14804(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a774
	if (ctx.cr6.eq) goto loc_8273A774;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82703a00
	ctx.lr = 0x8273A774;
	sub_82703A00(ctx, base);
loc_8273A774:
	// lwz r11,20952(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a7b0
	if (ctx.cr6.eq) goto loc_8273A7B0;
	// lwz r11,20912(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273a79c
	if (!ctx.cr6.eq) goto loc_8273A79C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274d518
	ctx.lr = 0x8273A798;
	sub_8274D518(ctx, base);
	// stw r28,15596(r30)
	REX_STORE_U32(r30.u32 + 15596, r28.u32);
loc_8273A79C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,20964(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20964);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,20960(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20960);
	// bl 0x827429d8
	ctx.lr = 0x8273A7B0;
	sub_827429D8(ctx, base);
loc_8273A7B0:
	// lwz r11,20956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a7ec
	if (ctx.cr6.eq) goto loc_8273A7EC;
	// lwz r11,20912(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273a7d8
	if (!ctx.cr6.eq) goto loc_8273A7D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8274d518
	ctx.lr = 0x8273A7D4;
	sub_8274D518(ctx, base);
	// stw r28,15596(r30)
	REX_STORE_U32(r30.u32 + 15596, r28.u32);
loc_8273A7D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,20972(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20972);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,20968(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20968);
	// bl 0x827429d8
	ctx.lr = 0x8273A7EC;
	sub_827429D8(ctx, base);
loc_8273A7EC:
	// lwz r11,22448(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273a8b0
	if (!ctx.cr6.eq) goto loc_8273A8B0;
	// lwz r11,20952(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a810
	if (ctx.cr6.eq) goto loc_8273A810;
	// lwz r11,20912(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a828
	if (ctx.cr6.eq) goto loc_8273A828;
loc_8273A810:
	// lwz r11,20956(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a8b0
	if (ctx.cr6.eq) goto loc_8273A8B0;
	// lwz r11,20912(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8273a8b0
	if (!ctx.cr6.eq) goto loc_8273A8B0;
loc_8273A828:
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r3,15888(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 15888);
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,184(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 184);
	// lwz r9,164(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 164);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lwz r6,220(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 220);
	// lwz r3,3756(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 3756);
	// bctrl 
	ctx.lr = 0x8273A868;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,196(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 196);
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,168(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 168);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r7,224(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 224);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,3764(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3764);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r3,3760(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 3760);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r31,15884(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 15884);
	// lwz r29,176(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 176);
	// rlwinm r6,r29,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8273A8B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8273A8B0:
	// lwz r11,284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 284);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8273a8c8
	if (!ctx.cr6.eq) goto loc_8273A8C8;
	// bl 0x827d18e0
	ctx.lr = 0x8273A8C4;
	sub_827D18E0(ctx, base);
	// b 0x8273a8cc
	goto loc_8273A8CC;
loc_8273A8C8:
	// bl 0x827d1738
	ctx.lr = 0x8273A8CC;
	sub_827D1738(ctx, base);
loc_8273A8CC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8273a994
	if (!ctx.cr6.eq) goto loc_8273A994;
loc_8273A8D8:
	// li r26,4
	r26.s64 = 4;
loc_8273A8DC:
	// lwz r11,15596(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a8f4
	if (ctx.cr6.eq) goto loc_8273A8F4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// bl 0x8274d518
	ctx.lr = 0x8273A8F4;
	sub_8274D518(ctx, base);
loc_8273A8F4:
	// lwz r11,20904(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a9bc
	if (ctx.cr6.eq) goto loc_8273A9BC;
	// lwz r11,20908(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273a9bc
	if (ctx.cr6.eq) goto loc_8273A9BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// bl 0x8274d2d8
	ctx.lr = 0x8273A918;
	sub_8274D2D8(ctx, base);
	// lwz r11,20912(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// li r4,0
	ctx.r4.s64 = 0;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,20912(r30)
	REX_STORE_U32(r30.u32 + 20912, ctx.r10.u32);
	// bl 0x8271f9e0
	ctx.lr = 0x8273A930;
	sub_8271F9E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271f4a8
	ctx.lr = 0x8273A938;
	sub_8271F4A8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_8273A944:
	// lwz r11,15540(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15540);
	// stw r28,3692(r30)
	REX_STORE_U32(r30.u32 + 3692, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8273a964
	if (!ctx.cr6.eq) goto loc_8273A964;
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// bne cr6,0x8273a968
	if (!ctx.cr6.eq) goto loc_8273A968;
loc_8273A964:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8273A968:
	// lwz r10,14852(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 14852);
	// stw r11,15508(r30)
	REX_STORE_U32(r30.u32 + 15508, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273a980
	if (ctx.cr6.eq) goto loc_8273A980;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8270c900
	ctx.lr = 0x8273A980;
	sub_8270C900(ctx, base);
loc_8273A980:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ceed8
	ctx.lr = 0x8273A988;
	sub_827CEED8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8273a8d8
	if (ctx.cr6.eq) goto loc_8273A8D8;
loc_8273A994:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8273a8dc
	if (ctx.cr6.eq) goto loc_8273A8DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271f9e0
	ctx.lr = 0x8273A9A8;
	sub_8271F9E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271f4a8
	ctx.lr = 0x8273A9B0;
	sub_8271F4A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_8273A9BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271f9e0
	ctx.lr = 0x8273A9C8;
	sub_8271F9E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271f4a8
	ctx.lr = 0x8273A9D0;
	sub_8271F4A8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_827923B0) {
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
	// addi r31,r11,5944
	r31.s64 = ctx.r11.s64 + 5944;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ecc18
	ctx.lr = 0x827923D0;
	sub_823ECC18(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ecc50
	ctx.lr = 0x827923D8;
	sub_823ECC50(ctx, base);
	// bl 0x823ef900
	ctx.lr = 0x827923DC;
	sub_823EF900(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// addi r3,r10,13232
	ctx.r3.s64 = ctx.r10.s64 + 13232;
	// bl 0x8269d008
	ctx.lr = 0x827923F4;
	sub_8269D008(ctx, base);
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

DEFINE_REX_FUNC(sub_82792D90) {
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
	// li r4,648
	ctx.r4.s64 = 648;
	// addi r3,r11,16232
	ctx.r3.s64 = ctx.r11.s64 + 16232;
	// bl 0x8269c348
	ctx.lr = 0x82792DAC;
	sub_8269C348(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// stw r3,8860(r11)
	REX_STORE_U32(ctx.r11.u32 + 8860, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82793028) {
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
	// addi r31,r11,1136
	r31.s64 = ctx.r11.s64 + 1136;
	// b 0x82793048
	goto loc_82793048;
loc_82793044:
	// bl 0x8214bfd8
	ctx.lr = 0x82793048;
	sub_8214BFD8(ctx, base);
loc_82793048:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82793044
	if (!ctx.cr6.eq) goto loc_82793044;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8279305C;
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

DEFINE_REX_FUNC(sub_82793868) {
	REX_FUNC_PROLOGUE();
	// .long 0x200020a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793998) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010110
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793AF8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100e7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793C98) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100b1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793E58) {
	REX_FUNC_PROLOGUE();
	// .long 0x201006c
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794038) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001ea
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794248) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101f4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82799440) {
	REX_FUNC_PROLOGUE();
	// lwz r10,1368(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addi r6,r5,64
	ctx.r6.s64 = ctx.r5.s64 + 64;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// blt cr6,0x82799530
	if (ctx.cr6.lt) goto loc_82799530;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x827994bc
	if (ctx.cr6.lt) goto loc_827994BC;
	// lhz r8,62(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// neg r4,r8
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subf r7,r4,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// srawi r8,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// andc r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// b 0x827994cc
	goto loc_827994CC;
loc_827994BC:
	// lwz r10,1476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
loc_827994CC:
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// blt cr6,0x82799518
	if (ctx.cr6.lt) goto loc_82799518;
	// lhz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ctx.r7.u64;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_82799518:
	// lwz r11,1468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1468);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_82799530:
	// lwz r10,1476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1468(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1468);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B0248) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cbc
	ctx.lr = 0x827B0250;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,1120
	ctx.r5.s64 = 1120;
	// vspltish v9,15
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xF)));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v8,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, result);
	}
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vspltish v31,1
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// lvx128 v10,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vaddshs v30,v9,v10
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vsubshs v2,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// slw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x827b03f0
	if (!ctx.cr6.eq) goto loc_827B03F0;
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v58,v59,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b05d8
	if (!ctx.cr6.gt) goto loc_827B05D8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_827B0314:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v3,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vadduhm v24,v6,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// vperm128 v6,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v23,v3,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v5,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v4,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v22,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v1
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v17,v27,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v3,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v14,v21,v22
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v6,v24,v18
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v1,v23,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v16,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v29,v0,v26
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubshs v27,v0,v25
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vadduhm v28,v6,v14
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v26,v1,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubshs v25,v8,v16
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vsubshs v24,v7,v15
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vadduhm v23,v28,v30
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v22,v26,v30
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v21,v25,v29
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v20,v24,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v6,v23,v21
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v3,v22,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v19,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v19,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x827b0314
	if (ctx.cr6.lt) goto loc_827B0314;
	// b 0x827b05d8
	goto loc_827B05D8;
loc_827B03F0:
	// li r3,32
	ctx.r3.s64 = 32;
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b05d8
	if (!ctx.cr6.gt) goto loc_827B05D8;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// li r30,-32
	r30.s64 = -32;
	// li r31,-16
	r31.s64 = -16;
loc_827B047C:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v29,v10,v10
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v28,v9,v9
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v7,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v25,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vslh v26,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v43,v63,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vslh v24,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v41,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvsl v2,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v25,v10
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vperm128 v21,v63,v42,v2
	simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vadduhm v25,v23,v24
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vmrglb v20,v0,v3
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v26,v1
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v19,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v16,v0,v21
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v22,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v27,v8,v8
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v14,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vadduhm v21,v18,v19
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vor v1,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v20.u8));
	// vslh v23,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v15,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v19,v26,v14
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v18,v24,v25
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v22,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vslh v17,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v26,v0,v23
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v25,v20,v21
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v23,v18,v19
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsubshs v24,v0,v22
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vslh v29,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v15,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vor v4,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vadduhm v19,v14,v8
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v22,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v5,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v18,v3,v29
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vsubshs v17,v1,v28
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vslh v14,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v19,v20
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v28,v21,v22
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v25,v30
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v15,v23,v30
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v25,v17,v24
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v26,v18,v26
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubshs v24,v0,v14
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vsubshs v23,v4,v29
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vadduhm v22,v27,v28
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v21,v16,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v20,v15,v25
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v18,v22,v30
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v17,v21,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v18,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// stvx128 v17,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stvx128 v14,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vor128 v2,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x827b047c
	if (ctx.cr6.lt) goto loc_827B047C;
loc_827B05D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827afb20
	ctx.lr = 0x827B05EC;
	sub_827AFB20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

