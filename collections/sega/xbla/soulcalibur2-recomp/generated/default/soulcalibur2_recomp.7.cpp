#include "soulcalibur2_funcs.7.h"

DEFINE_REX_FUNC(sub_820E0188) {
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
	// fabs f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// bl 0x822d4ac8
	ctx.lr = 0x820E019C;
	sub_822D4AC8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E50D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x820e5144
	if (ctx.cr6.eq) goto loc_820E5144;
	// cmplwi cr6,r11,32769
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32769, ctx.xer);
	// beq cr6,0x820e5134
	if (ctx.cr6.eq) goto loc_820E5134;
	// cmplwi cr6,r11,32770
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32770, ctx.xer);
	// beq cr6,0x820e512c
	if (ctx.cr6.eq) goto loc_820E512C;
	// rlwinm. r10,r11,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820e5118
	if (ctx.cr0.eq) goto loc_820E5118;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820e5118
	if (ctx.cr6.eq) goto loc_820E5118;
loc_820E5110:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820E5118:
	// clrlwi. r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820e512c
	if (ctx.cr0.eq) goto loc_820E512C;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e5110
	if (ctx.cr0.eq) goto loc_820E5110;
loc_820E512C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820E5134:
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_820E5144:
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E9F40) {
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
	// bl 0x820e98e0
	ctx.lr = 0x820E9F58;
	sub_820E98E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822002f0
	ctx.lr = 0x820E9F64;
	sub_822002F0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_820EC540) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x820EC548;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f2c
	ctx.lr = 0x820EC550;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r25,r11,32336
	r25.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4892(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4892);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ecc54
	if (ctx.cr6.eq) goto loc_820ECC54;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ecc54
	if (ctx.cr6.eq) goto loc_820ECC54;
	// lwz r11,512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820ecc54
	if (ctx.cr6.eq) goto loc_820ECC54;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r26,r11,-28232
	r26.s64 = ctx.r11.s64 + -28232;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-28232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28232);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EC5A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82202540
	ctx.lr = 0x820EC5B8;
	sub_82202540(ctx, base);
	// lwz r30,632(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822009d0
	ctx.lr = 0x820EC5C4;
	sub_822009D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82200a08
	ctx.lr = 0x820EC5D0;
	sub_82200A08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x82200a10
	ctx.lr = 0x820EC5DC;
	sub_82200A10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x82200a18
	ctx.lr = 0x820EC5E8;
	sub_82200A18(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x821d63a0
	ctx.lr = 0x820EC5FC;
	sub_821D63A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f27,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f27.f64 = double(temp.f32);
	// bne 0x820ec828
	if (!ctx.cr0.eq) goto loc_820EC828;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820ec828
	if (!ctx.cr6.eq) goto loc_820EC828;
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ec638
	if (ctx.cr0.eq) goto loc_820EC638;
	// lfs f0,468(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,432(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
loc_820EC638:
	// rlwinm. r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ec650
	if (ctx.cr0.eq) goto loc_820EC650;
	// lfs f0,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,432(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
loc_820EC650:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm. r9,r11,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,16792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16792);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x820ec75c
	if (ctx.cr0.eq) goto loc_820EC75C;
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ec6b0
	if (ctx.cr0.eq) goto loc_820EC6B0;
	// lwz r10,532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lfs f0,472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820ec698
	if (!ctx.cr6.eq) goto loc_820EC698;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820ec6b0
	if (ctx.cr6.lt) goto loc_820EC6B0;
	// b 0x820ec6ac
	goto loc_820EC6AC;
loc_820EC698:
	// fsubs f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x820ec6b0
	if (ctx.cr6.gt) goto loc_820EC6B0;
loc_820EC6AC:
	// stfs f27,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
loc_820EC6B0:
	// rlwinm. r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ec700
	if (ctx.cr0.eq) goto loc_820EC700;
	// lwz r10,532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lfs f0,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820ec6e8
	if (!ctx.cr6.eq) goto loc_820EC6E8;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x820ec700
	if (ctx.cr6.gt) goto loc_820EC700;
	// b 0x820ec6fc
	goto loc_820EC6FC;
loc_820EC6E8:
	// fadds f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820ec700
	if (ctx.cr6.lt) goto loc_820EC700;
loc_820EC6FC:
	// stfs f27,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
loc_820EC700:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ec75c
	if (ctx.cr0.eq) goto loc_820EC75C;
	// lwz r10,496(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 496);
	// lfs f0,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f11,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// bne cr6,0x820ec740
	if (!ctx.cr6.eq) goto loc_820EC740;
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,472(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x820ec75c
	if (ctx.cr6.gt) goto loc_820EC75C;
	// b 0x820ec758
	goto loc_820EC758;
loc_820EC740:
	// fadds f11,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f0,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,472(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x820ec75c
	if (ctx.cr6.lt) goto loc_820EC75C;
loc_820EC758:
	// stfs f27,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
loc_820EC75C:
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ec768
	if (ctx.cr0.eq) goto loc_820EC768;
	// stfs f31,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
loc_820EC768:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ec7b8
	if (ctx.cr0.eq) goto loc_820EC7B8;
	// lwz r10,532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lfs f0,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820ec7a0
	if (!ctx.cr6.eq) goto loc_820EC7A0;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820ec7b8
	if (ctx.cr6.lt) goto loc_820EC7B8;
	// b 0x820ec7b4
	goto loc_820EC7B4;
loc_820EC7A0:
	// fsubs f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x820ec7b8
	if (ctx.cr6.gt) goto loc_820EC7B8;
loc_820EC7B4:
	// stfs f27,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
loc_820EC7B8:
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ec808
	if (ctx.cr0.eq) goto loc_820EC808;
	// lwz r10,532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lfs f0,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,424(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f11.f64 = double(temp.f32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820ec7f0
	if (!ctx.cr6.eq) goto loc_820EC7F0;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820ec808
	if (ctx.cr6.gt) goto loc_820EC808;
	// b 0x820ec804
	goto loc_820EC804;
loc_820EC7F0:
	// fadds f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 472, temp.u32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820ec808
	if (ctx.cr6.lt) goto loc_820EC808;
loc_820EC804:
	// stfs f27,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
loc_820EC808:
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820ec828
	if (!ctx.cr0.eq) goto loc_820EC828;
	// lfs f0,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,428(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,440(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 440);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f13,f12,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64)));
	// stfs f0,476(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 476, temp.u32);
loc_820EC828:
	// lfs f0,456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,468(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820ec83c
	if (!ctx.cr6.gt) goto loc_820EC83C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820EC83C:
	// lfs f1,444(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 444);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820ec850
	if (!ctx.cr6.lt) goto loc_820EC850;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_820EC850:
	// stfs f1,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 468, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822006f8
	ctx.lr = 0x820EC85C;
	sub_822006F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200700
	ctx.lr = 0x820EC868;
	sub_82200700(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 476);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820EC874;
	sub_82200818(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EC894;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EC89C;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820ec8bc
	if (!ctx.cr0.eq) goto loc_820EC8BC;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_820EC8BC:
	// lwa r11,516(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 516));
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820ec958
	if (ctx.cr6.lt) goto loc_820EC958;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ec958
	if (!ctx.cr6.eq) goto loc_820EC958;
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lbz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820ec904
	if (!ctx.cr0.eq) goto loc_820EC904;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r11.u32);
	// b 0x820ecc54
	goto loc_820ECC54;
loc_820EC904:
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 412);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ec930
	if (!ctx.cr6.eq) goto loc_820EC930;
	// li r6,30
	ctx.r6.s64 = 30;
loc_820EC91C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4892(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4892);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820ea3b8
	ctx.lr = 0x820EC92C;
	sub_820EA3B8(ctx, base);
	// b 0x820ecc54
	goto loc_820ECC54;
loc_820EC930:
	// li r31,0
	r31.s64 = 0;
loc_820EC934:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82202560
	ctx.lr = 0x820EC944;
	sub_82202560(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// blt cr6,0x820ec934
	if (ctx.cr6.lt) goto loc_820EC934;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x820ec91c
	goto loc_820EC91C;
loc_820EC958:
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820ec9d0
	if (!ctx.cr6.eq) goto loc_820EC9D0;
	// lwz r3,532(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 532);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x820ea090
	ctx.lr = 0x820EC974;
	sub_820EA090(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r5,532(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 532);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x820ec9ac
	if (ctx.cr0.eq) goto loc_820EC9AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820e8650
	ctx.lr = 0x820EC98C;
	sub_820E8650(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
loc_820EC994:
	// lwz r10,532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 532);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820ec9c8
	if (!ctx.cr6.eq) goto loc_820EC9C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820ec9cc
	goto loc_820EC9CC;
loc_820EC9AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820e8650
	ctx.lr = 0x820EC9B4;
	sub_820E8650(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,3696
	ctx.r11.s64 = ctx.r11.s64 + 3696;
	// b 0x820ec994
	goto loc_820EC994;
loc_820EC9C8:
	// li r4,1
	ctx.r4.s64 = 1;
loc_820EC9CC:
	// bl 0x820e8638
	ctx.lr = 0x820EC9D0;
	sub_820E8638(ctx, base);
loc_820EC9D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,480(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lfs f13,16788(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16788);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820ecba4
	if (ctx.cr6.lt) goto loc_820ECBA4;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820ecba4
	if (!ctx.cr6.eq) goto loc_820ECBA4;
	// li r11,2
	ctx.r11.s64 = 2;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r11,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r11.u32);
	// bne cr6,0x820ecb84
	if (!ctx.cr6.eq) goto loc_820ECB84;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820ECA20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820ECA38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsubs f28,f31,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820ECA50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820ECA68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsubs f26,f31,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820ECA80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820ECA98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fsubs f25,f31,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = double(float(f31.f64 - ctx.f1.f64));
	// bl 0x822009c8
	ctx.lr = 0x820ECAA4;
	sub_822009C8(ctx, base);
	// bl 0x820fefc8
	ctx.lr = 0x820ECAA8;
	sub_820FEFC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822009c8
	ctx.lr = 0x820ECAB4;
	sub_822009C8(ctx, base);
	// bl 0x820fefc8
	ctx.lr = 0x820ECAB8;
	sub_820FEFC8(ctx, base);
	// fsubs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - ctx.f1.f64));
	// bl 0x820fefc8
	ctx.lr = 0x820ECAC0;
	sub_820FEFC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822009d0
	ctx.lr = 0x820ECACC;
	sub_822009D0(ctx, base);
	// bl 0x820fefc8
	ctx.lr = 0x820ECAD0;
	sub_820FEFC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x822009d0
	ctx.lr = 0x820ECADC;
	sub_822009D0(ctx, base);
	// bl 0x820fefc8
	ctx.lr = 0x820ECAE0;
	sub_820FEFC8(ctx, base);
	// fsubs f1,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f30.f64 - ctx.f1.f64));
	// bl 0x820fefc8
	ctx.lr = 0x820ECAE8;
	sub_820FEFC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x822009d8
	ctx.lr = 0x820ECAF4;
	sub_822009D8(ctx, base);
	// bl 0x820fefc8
	ctx.lr = 0x820ECAF8;
	sub_820FEFC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x822009d8
	ctx.lr = 0x820ECB04;
	sub_822009D8(ctx, base);
	// bl 0x820fefc8
	ctx.lr = 0x820ECB08;
	sub_820FEFC8(ctx, base);
	// fsubs f1,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f29.f64 - ctx.f1.f64));
	// bl 0x820fefc8
	ctx.lr = 0x820ECB10;
	sub_820FEFC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x82200a38
	ctx.lr = 0x820ECB1C;
	sub_82200A38(ctx, base);
	// fmuls f0,f26,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f26.f64 * f26.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f0,f25,f25,f0
	ctx.f0.f64 = double(float(std::fma(f25.f64, f25.f64, ctx.f0.f64)));
	// fmadds f0,f28,f28,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, f28.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820ecb84
	if (!ctx.cr6.lt) goto loc_820ECB84;
	// fabs f13,f31
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16784(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16784);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820ecb84
	if (!ctx.cr6.lt) goto loc_820ECB84;
	// fabs f13,f30
	ctx.f13.u64 = f30.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16780(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16780);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820ecb84
	if (!ctx.cr6.lt) goto loc_820ECB84;
	// fabs f13,f29
	ctx.f13.u64 = f29.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820ecb84
	if (!ctx.cr6.lt) goto loc_820ECB84;
	// stw r28,416(r31)
	REX_STORE_U32(r31.u32 + 416, r28.u32);
loc_820ECB84:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ecba4
	if (!ctx.cr6.eq) goto loc_820ECBA4;
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r3,4892(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4892);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ea3b8
	ctx.lr = 0x820ECBA4;
	sub_820EA3B8(ctx, base);
loc_820ECBA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,480(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820ecc28
	if (!ctx.cr6.gt) goto loc_820ECC28;
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820ecc28
	if (ctx.cr6.eq) goto loc_820ECC28;
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820ecbf8
	if (!ctx.cr6.eq) goto loc_820ECBF8;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_820ECBDC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82202560
	ctx.lr = 0x820ECBEC;
	sub_82202560(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x820ecbdc
	if (ctx.cr6.lt) goto loc_820ECBDC;
loc_820ECBF8:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r11.u32);
	// bl 0x820e8628
	ctx.lr = 0x820ECC08;
	sub_820E8628(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82202560
	ctx.lr = 0x820ECC18;
	sub_82202560(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// bl 0x82202560
	ctx.lr = 0x820ECC28;
	sub_82202560(ctx, base);
loc_820ECC28:
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820ecc54
	if (!ctx.cr6.eq) goto loc_820ECC54;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// lwz r10,4892(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4892);
	// stw r28,-28256(r9)
	REX_STORE_U32(ctx.r9.u32 + -28256, r28.u32);
	// stw r28,160(r10)
	REX_STORE_U32(ctx.r10.u32 + 160, r28.u32);
loc_820ECC54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f78
	ctx.lr = 0x820ECC60;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82116F38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32165
	r31.s64 = -2107965440;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r10,r11,23240
	ctx.r10.s64 = ctx.r11.s64 + 23240;
	// addi r9,r9,13128
	ctx.r9.s64 = ctx.r9.s64 + 13128;
	// lwz r11,-32480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lfs f0,1840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,212(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// lwz r11,144(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// lfs f31,31760(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 31760);
	f31.f64 = double(temp.f32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82116fa4
	if (!ctx.cr0.eq) goto loc_82116FA4;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,428(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 428);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82116fac
	if (ctx.cr0.eq) goto loc_82116FAC;
loc_82116FA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,30012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30012);
	f31.f64 = double(temp.f32);
loc_82116FAC:
	// lhz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8211702c
	if (!ctx.cr0.eq) goto loc_8211702C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8211702c
	if (!ctx.cr6.gt) goto loc_8211702C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,-32480(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,31752
	ctx.r6.s64 = ctx.r11.s64 + 31752;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x82116FEC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8211702c
	if (ctx.cr0.eq) goto loc_8211702C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r8,r30,208
	ctx.r8.s64 = r30.s64 + 208;
	// lfs f4,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r30,80
	ctx.r7.s64 = r30.s64 + 80;
	// li r4,14
	ctx.r4.s64 = 14;
	// lfs f6,16172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,31748(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31748);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f1,15632(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82115fd8
	ctx.lr = 0x8211702C;
	sub_82115FD8(ctx, base);
loc_8211702C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82117064
	if (ctx.cr6.eq) goto loc_82117064;
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82117058
	if (!ctx.cr6.gt) goto loc_82117058;
	// lwz r11,-32480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -32480);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_82117058:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
loc_82117064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_8211B338) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f38
	ctx.lr = 0x8211B350;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32166
	r30.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,7792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 7792);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// bl 0x82202070
	ctx.lr = 0x8211B36C;
	sub_82202070(ctx, base);
	// bl 0x821fee08
	ctx.lr = 0x8211B370;
	sub_821FEE08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-30972(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30972);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f28,f1,f0,f13
	f28.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f13.f64)));
	// lfs f29,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f28,f29
	ctx.cr6.compare(f28.f64, f29.f64);
	// ble cr6,0x8211b3b8
	if (!ctx.cr6.gt) goto loc_8211B3B8;
	// bl 0x821fedc8
	ctx.lr = 0x8211B398;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16688);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8211b3b8
	if (!ctx.cr6.gt) goto loc_8211B3B8;
	// bl 0x821fedc8
	ctx.lr = 0x8211B3AC;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f28,f1,f0,f28
	f28.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f28.f64)));
loc_8211B3B8:
	// fabs f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f28.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8211b414
	if (ctx.cr6.lt) goto loc_8211B414;
	// bl 0x821fedc8
	ctx.lr = 0x8211B3D0;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8211b414
	if (ctx.cr6.lt) goto loc_8211B414;
	// bl 0x821fedc8
	ctx.lr = 0x8211B3E4;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f31,f1,f0,f13
	f31.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f13.f64)));
	// bl 0x821fee08
	ctx.lr = 0x8211B3FC;
	sub_821FEE08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,32124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30976(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30976);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f1,f0,f13
	ctx.f1.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f13.f64)));
	// b 0x8211b460
	goto loc_8211B460;
loc_8211B414:
	// bl 0x821fedc8
	ctx.lr = 0x8211B418;
	sub_821FEDC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f0,-30980(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30980);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,16372(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16372);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8211b450
	if (ctx.cr6.gt) goto loc_8211B450;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x8211b450
	if (ctx.cr6.lt) goto loc_8211B450;
	// bl 0x821fee08
	ctx.lr = 0x8211B440;
	sub_821FEE08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2016);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x8211b460
	goto loc_8211B460;
loc_8211B450:
	// bl 0x821fee08
	ctx.lr = 0x8211B454;
	sub_821FEE08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30976);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f1,f30,f0
	ctx.f1.f64 = double(float(-std::fma(ctx.f1.f64, f30.f64, -ctx.f0.f64)));
loc_8211B460:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x820e0ec8
	ctx.lr = 0x8211B470;
	sub_820E0EC8(ctx, base);
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f28,88(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f29,92(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1d28
	ctx.lr = 0x8211B490;
	sub_820E1D28(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,7792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 7792);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r4,1644(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// bl 0x820e02d8
	ctx.lr = 0x8211B4AC;
	sub_820E02D8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1df8
	ctx.lr = 0x8211B4BC;
	sub_820E1DF8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f84
	ctx.lr = 0x8211B4EC;
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

DEFINE_REX_FUNC(sub_82122C88) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x82122C90;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,30008
	r29.s64 = ctx.r11.s64 + 30008;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,-172(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82122cc8
	if (!ctx.cr6.eq) goto loc_82122CC8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82122090
	ctx.lr = 0x82122CC4;
	sub_82122090(ctx, base);
	// b 0x82122e58
	goto loc_82122E58;
loc_82122CC8:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82122e58
	if (!ctx.cr6.gt) goto loc_82122E58;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r30,r11,80
	r30.s64 = ctx.r11.s64 + 80;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f31,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lfs f29,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f29.f64 = double(temp.f32);
	// addi r25,r11,13128
	r25.s64 = ctx.r11.s64 + 13128;
	// lfs f30,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f30.f64 = double(temp.f32);
loc_82122CF8:
	// lbz r11,123(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 123);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82122e58
	if (ctx.cr0.eq) goto loc_82122E58;
	// lhz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 8);
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x82122e58
	if (!ctx.cr0.gt) goto loc_82122E58;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82122D30:
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r31,76(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 76);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82122d6c
	if (ctx.cr0.eq) goto loc_82122D6C;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82122d54
	if (!ctx.cr6.lt) goto loc_82122D54;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82122D54:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 + 80;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82122d30
	if (ctx.cr6.lt) goto loc_82122D30;
	// b 0x82122d74
	goto loc_82122D74;
loc_82122D6C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82122D74:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82122e58
	if (ctx.cr6.lt) goto loc_82122E58;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82122d8c
	if (!ctx.cr6.eq) goto loc_82122D8C;
	// mulli r11,r10,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82122D8C:
	// lwz r9,1856(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 1856);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r29,4
	ctx.r8.s64 = r29.s64 + 4;
	// addi r7,r29,8
	ctx.r7.s64 = r29.s64 + 8;
	// addi r6,r29,12
	ctx.r6.s64 = r29.s64 + 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r9,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r9.u32);
	// lfs f0,172(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfs f0,176(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// lfs f0,144(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// stb r5,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r5.u8);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stfs f30,12(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f29,12(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82122DF8;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82122E04;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x82122E10;
	sub_821FEDC8(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,48
	ctx.r5.s64 = r30.s64 + 48;
	// bl 0x820e1b70
	ctx.lr = 0x82122E28;
	sub_820E1B70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2290
	ctx.lr = 0x82122E34;
	sub_820E2290(ctx, base);
	// bl 0x821fedc8
	ctx.lr = 0x82122E38;
	sub_821FEDC8(ctx, base);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x82122E4C;
	sub_820E1CF8(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// blt cr6,0x82122cf8
	if (ctx.cr6.lt) goto loc_82122CF8;
loc_82122E58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82129E90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r11,r11,-24000
	ctx.r11.s64 = ctx.r11.s64 + -24000;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// mulli r10,r10,76
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(76));
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82129ec8
	if (!ctx.cr6.eq) goto loc_82129EC8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82129778
	sub_82129778(ctx, base);
	return;
loc_82129EC8:
	// addi r9,r11,212
	ctx.r9.s64 = ctx.r11.s64 + 212;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82129eec
	if (!ctx.cr6.eq) goto loc_82129EEC;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82129778
	sub_82129778(ctx, base);
	return;
loc_82129EEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212A838) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29248
	ctx.r3.s64 = ctx.r11.s64 + -29248;
	// b 0x8229a710
	sub_8229A710(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212A9F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8212AA00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,348(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212aa34
	if (!ctx.cr6.eq) goto loc_8212AA34;
	// lha r3,98(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 98));
	// bl 0x821c9150
	ctx.lr = 0x8212AA28;
	sub_821C9150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8212aa38
	if (!ctx.cr0.eq) goto loc_8212AA38;
loc_8212AA34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212AA38:
	// lha r9,98(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 98));
	// mulli r10,r11,33
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(33));
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,10528
	ctx.r10.s64 = ctx.r9.s64 + 10528;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lha r11,2(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x820e6930
	ctx.lr = 0x8212AA74;
	sub_820E6930(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8212C310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,-23684(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212c3a4
	if (ctx.cr6.eq) goto loc_8212C3A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-29160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -29160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// bge cr6,0x8212c358
	if (!ctx.cr6.lt) goto loc_8212C358;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
loc_8212C358:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// sth r10,120(r1)
	REX_STORE_U16(ctx.r1.u32 + 120, ctx.r10.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// sth r11,122(r1)
	REX_STORE_U16(ctx.r1.u32 + 122, ctx.r11.u16);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r8,15284
	ctx.r3.s64 = ctx.r8.s64 + 15284;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82203fe0
	ctx.lr = 0x8212C3A0;
	sub_82203FE0(ctx, base);
	// b 0x8212c3a8
	goto loc_8212C3A8;
loc_8212C3A4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8212C3A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212FB98) {
	REX_FUNC_PROLOGUE();
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r8,r3,496
	ctx.r8.s64 = ctx.r3.s64 + 496;
	// stw r11,492(r3)
	REX_STORE_U32(ctx.r3.u32 + 492, ctx.r11.u32);
	// stw r11,488(r3)
	REX_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8212FBB8:
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lhzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x8212fbe8
	if (ctx.cr6.eq) goto loc_8212FBE8;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8212FBD4:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,65535
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65535, ctx.xer);
	// bne cr6,0x8212fbd4
	if (!ctx.cr6.eq) goto loc_8212FBD4;
loc_8212FBE8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8212fbb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212FBB8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130370) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82130390
	if (!ctx.cr6.eq) goto loc_82130390;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821303ac
	goto loc_821303AC;
loc_82130390:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r10,-25128
	ctx.r4.s64 = ctx.r10.s64 + -25128;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x822d60a0
	ctx.lr = 0x821303A4;
	sub_822D60A0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821303AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20640
	ctx.r11.s64 = ctx.r11.s64 + 20640;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821316C0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821316f0
	if (ctx.cr6.eq) goto loc_821316F0;
	// bl 0x82101d68
	ctx.lr = 0x821316E8;
	sub_82101D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821316F0:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r11,r11,23912
	ctx.r11.s64 = ctx.r11.s64 + 23912;
	// lwz r10,188(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82131714
	if (ctx.cr6.eq) goto loc_82131714;
	// stb r9,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,188(r11)
	REX_STORE_U32(ctx.r11.u32 + 188, ctx.r10.u32);
loc_82131714:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20960
	ctx.r11.s64 = ctx.r11.s64 + 20960;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82131734
	if (ctx.cr6.eq) goto loc_82131734;
	// stb r9,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82131734:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130e40
	ctx.lr = 0x8213173C;
	sub_82130E40(ctx, base);
	// lis r30,-32169
	r30.s64 = -2108227584;
	// lwz r31,23884(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 23884);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82131764
	if (ctx.cr6.eq) goto loc_82131764;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x82131754;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8213175C;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23884(r30)
	REX_STORE_U32(r30.u32 + 23884, ctx.r11.u32);
loc_82131764:
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

DEFINE_REX_FUNC(sub_82133BF0) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82133ad0
	ctx.lr = 0x82133C04;
	sub_82133AD0(ctx, base);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82133c44
	if (!ctx.cr6.lt) goto loc_82133C44;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,614
	ctx.r11.s64 = ctx.r11.s64 + 614;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82133c48
	goto loc_82133C48;
loc_82133C44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82133C48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135670) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82101d68
	sub_82101D68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821358D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r10,r11,20556
	ctx.r10.s64 = ctx.r11.s64 + 20556;
	// lwz r11,20556(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20556);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lbzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82136160) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r11,23912
	ctx.r11.s64 = ctx.r11.s64 + 23912;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821361ac
	if (ctx.cr6.eq) goto loc_821361AC;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8213618c
	if (!ctx.cr6.eq) goto loc_8213618C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8213618C:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r9,r9,22000
	ctx.r9.s64 = ctx.r9.s64 + 22000;
	// mulli r11,r10,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(324));
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x821341f8
	sub_821341F8(ctx, base);
	return;
loc_821361AC:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r9,r9,21824
	ctx.r9.s64 = ctx.r9.s64 + 21824;
	// mulli r11,r10,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(88));
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82133610
	sub_82133610(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213A958) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// mulli r30,r3,24
	r30.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(24));
	// addi r31,r11,14448
	r31.s64 = ctx.r11.s64 + 14448;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r10,r31,22
	ctx.r10.s64 = r31.s64 + 22;
	// addi r9,r31,20
	ctx.r9.s64 = r31.s64 + 20;
	// addi r11,r11,23232
	ctx.r11.s64 = ctx.r11.s64 + 23232;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhax r10,r30,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + ctx.r10.u32));
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lhax r9,r30,r9
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r30.u32 + ctx.r9.u32));
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	f31.f64 = double(float(ctx.f13.f64));
	// frsp f30,f0
	f30.f64 = double(float(ctx.f0.f64));
	// bl 0x82132dc8
	ctx.lr = 0x8213A9CC;
	sub_82132DC8(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r11,23912(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23912);
	// lwz r11,520(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bgt cr6,0x8213a9ec
	if (ctx.cr6.gt) goto loc_8213A9EC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8213A9EC:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwzx r9,r30,r31
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r4,344(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 344);
	// addis r3,r5,3072
	ctx.r3.s64 = ctx.r5.s64 + 201326592;
	// li r31,0
	r31.s64 = 0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// std r31,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r31.u64);
	// bl 0x820e68b8
	ctx.lr = 0x8213AA1C;
	sub_820E68B8(ctx, base);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,8
	ctx.r9.s64 = 8;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// addi r8,r10,-24324
	ctx.r8.s64 = ctx.r10.s64 + -24324;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// bl 0x8213a318
	ctx.lr = 0x8213AA54;
	sub_8213A318(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// lwz r10,-32480(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lfs f7,2332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f7.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f5,-24328(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24328);
	ctx.f5.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f4,-24332(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24332);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,26856(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,20960(r6)
	REX_STORE_U32(ctx.r6.u32 + 20960, ctx.r11.u32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x82104548
	ctx.lr = 0x8213AAB0;
	sub_82104548(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_821492E0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r10,23912
	ctx.r10.s64 = ctx.r10.s64 + 23912;
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821495A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821495B0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23144
	ctx.r10.s64 = ctx.r10.s64 + -23144;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r10,62(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 62);
	// lbz r11,59(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 59);
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// sth r10,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r10.u16);
	// add r30,r11,r5
	r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r11,61(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 61);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// sth r11,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r11.u16);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f3,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1850
	ctx.lr = 0x8214962C;
	sub_820E1850(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// lfs f3,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1850
	ctx.lr = 0x82149640;
	sub_820E1850(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lbz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 60);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lbz r11,59(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 59);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// lbz r11,61(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 61);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lfs f0,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8214B2D8) {
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
	// bl 0x822d4e60
	ctx.lr = 0x8214B2E0;
	// stwu r1,-3280(r1)
	ea = -3280 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,256
	ctx.r11.s64 = 256;
	// li r21,0
	r21.s64 = 0;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r11,r10,-6
	ctx.r11.s64 = ctx.r10.s64 + -6;
loc_8214B318:
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r21,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, r21.u16);
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// stwu r21,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8214b318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214B318;
	// li r10,255
	ctx.r10.s64 = 255;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r10,3148(r1)
	REX_STORE_U32(ctx.r1.u32 + 3148, ctx.r10.u32);
	// ble cr6,0x8214b410
	if (!ctx.cr6.gt) goto loc_8214B410;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r7,r1,2128
	ctx.r7.s64 = ctx.r1.s64 + 2128;
	// addi r6,r27,62
	ctx.r6.s64 = r27.s64 + 62;
loc_8214B350:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bge cr6,0x8214b3a0
	if (!ctx.cr6.lt) goto loc_8214B3A0;
	// lbz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8214b3b0
	if (ctx.cr6.lt) goto loc_8214B3B0;
loc_8214B364:
	// stw r3,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
loc_8214B368:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r11,1(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// stb r10,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// bgt cr6,0x8214b3dc
	if (ctx.cr6.gt) goto loc_8214B3DC;
	// beq cr6,0x8214b3d4
	if (ctx.cr6.eq) goto loc_8214B3D4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8214b3b8
	if (ctx.cr6.eq) goto loc_8214B3B8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x8214b400
	if (!ctx.cr6.gt) goto loc_8214B400;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ble cr6,0x8214b3fc
	if (!ctx.cr6.gt) goto loc_8214B3FC;
	// b 0x8214b400
	goto loc_8214B400;
loc_8214B3A0:
	// lbz r11,1(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8214b364
	if (!ctx.cr6.eq) goto loc_8214B364;
	// lbz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
loc_8214B3B0:
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x8214b368
	goto loc_8214B368;
loc_8214B3B8:
	// cmpwi cr6,r18,4
	ctx.cr6.compare<int32_t>(r18.s32, 4, ctx.xer);
	// beq cr6,0x8214b3c8
	if (ctx.cr6.eq) goto loc_8214B3C8;
	// cmpwi cr6,r18,11
	ctx.cr6.compare<int32_t>(r18.s32, 11, ctx.xer);
	// bne cr6,0x8214b3cc
	if (!ctx.cr6.eq) goto loc_8214B3CC;
loc_8214B3C8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8214B3CC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8214b400
	goto loc_8214B400;
loc_8214B3D4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x8214b400
	goto loc_8214B400;
loc_8214B3DC:
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x8214b400
	if (ctx.cr6.lt) goto loc_8214B400;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// ble cr6,0x8214b3fc
	if (!ctx.cr6.gt) goto loc_8214B3FC;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// ble cr6,0x8214b400
	if (!ctx.cr6.gt) goto loc_8214B400;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x8214b400
	if (ctx.cr6.gt) goto loc_8214B400;
loc_8214B3FC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8214B400:
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8214b350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214B350;
loc_8214B410:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8214b424
	if (ctx.cr6.eq) goto loc_8214B424;
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
loc_8214B424:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// extsh. r11,r30
	ctx.r11.s64 = r30.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8214b474
	if (!ctx.cr6.lt) goto loc_8214B474;
	// sth r11,0(r19)
	REX_STORE_U16(r19.u32 + 0, ctx.r11.u16);
	// bgt 0x8214b440
	if (ctx.cr0.gt) goto loc_8214B440;
	// stw r21,8(r19)
	REX_STORE_U32(r19.u32 + 8, r21.u32);
	// b 0x8214b444
	goto loc_8214B444;
loc_8214B440:
	// stw r22,8(r19)
	REX_STORE_U32(r19.u32 + 8, r22.u32);
loc_8214B444:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x8214b450
	if (ctx.cr6.gt) goto loc_8214B450;
	// stw r21,12(r19)
	REX_STORE_U32(r19.u32 + 12, r21.u32);
loc_8214B450:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x8214b46c
	if (ctx.cr6.gt) goto loc_8214B46C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x8214b46c
	if (ctx.cr6.gt) goto loc_8214B46C;
	// li r11,88
	ctx.r11.s64 = 88;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x8214bbd8
	goto loc_8214BBD8;
loc_8214B46C:
	// sth r21,2(r19)
	REX_STORE_U16(r19.u32 + 2, r21.u16);
	// b 0x8214b498
	goto loc_8214B498;
loc_8214B474:
	// sth r11,4(r19)
	REX_STORE_U16(r19.u32 + 4, ctx.r11.u16);
	// bgt 0x8214b484
	if (ctx.cr0.gt) goto loc_8214B484;
	// stw r21,16(r19)
	REX_STORE_U32(r19.u32 + 16, r21.u32);
	// b 0x8214b488
	goto loc_8214B488;
loc_8214B484:
	// stw r22,16(r19)
	REX_STORE_U32(r19.u32 + 16, r22.u32);
loc_8214B488:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x8214b494
	if (ctx.cr6.gt) goto loc_8214B494;
	// stw r21,20(r19)
	REX_STORE_U32(r19.u32 + 20, r21.u32);
loc_8214B494:
	// sth r21,6(r19)
	REX_STORE_U16(r19.u32 + 6, r21.u16);
loc_8214B498:
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r20,r21
	r20.u64 = r21.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8214b86c
	if (!ctx.cr6.gt) goto loc_8214B86C;
	// addi r31,r27,62
	r31.s64 = r27.s64 + 62;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,11
	r30.s64 = 11;
loc_8214B4B4:
	// lbz r9,-1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + -1);
	// addi r8,r1,2128
	ctx.r8.s64 = ctx.r1.s64 + 2128;
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1);
	// addi r11,r31,-46
	ctx.r11.s64 = r31.s64 + -46;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stb r9,-1(r31)
	REX_STORE_U8(r31.u32 + -1, ctx.r9.u8);
	// bgt cr6,0x8214b860
	if (ctx.cr6.gt) goto loc_8214B860;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-22776
	ctx.r12.s64 = ctx.r12.s64 + -22776;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// nop 
	// addi r12,r12,-19196
	ctx.r12.s64 = ctx.r12.s64 + -19196;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8214B504;
	case 1:
		goto loc_8214B860;
	case 2:
		goto loc_8214B6DC;
	case 3:
		goto loc_8214B55C;
	case 4:
		goto loc_8214B5D0;
	case 5:
		goto loc_8214B584;
	case 6:
		goto loc_8214B5A8;
	case 7:
		goto loc_8214B5F8;
	case 8:
		goto loc_8214B614;
	case 9:
		goto loc_8214B78C;
	case 10:
		goto loc_8214B630;
	case 11:
		goto loc_8214B7A4;
	case 12:
		goto loc_8214B7A4;
	case 13:
		goto loc_8214B860;
	case 14:
		goto loc_8214B7F0;
	case 15:
		goto loc_8214B808;
	case 16:
		goto loc_8214B820;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8214B504:
	// cmpwi cr6,r18,4
	ctx.cr6.compare<int32_t>(r18.s32, 4, ctx.xer);
	// beq cr6,0x8214b514
	if (ctx.cr6.eq) goto loc_8214B514;
	// cmpwi cr6,r18,11
	ctx.cr6.compare<int32_t>(r18.s32, 11, ctx.xer);
	// bne cr6,0x8214b860
	if (!ctx.cr6.eq) goto loc_8214B860;
loc_8214B514:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b538
	if (ctx.cr6.eq) goto loc_8214B538;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// addi r6,r19,36
	ctx.r6.s64 = r19.s64 + 36;
	// addi r5,r19,28
	ctx.r5.s64 = r19.s64 + 28;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82169bb8
	ctx.lr = 0x8214B534;
	sub_82169BB8(ctx, base);
	// b 0x8214b53c
	goto loc_8214B53C;
loc_8214B538:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8214B53C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r22,r22,528
	r22.s64 = r22.s64 + 528;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// sthx r30,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, r30.u16);
	// b 0x8214b860
	goto loc_8214B860;
loc_8214B55C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b578
	if (ctx.cr6.eq) goto loc_8214B578;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82149690
	ctx.lr = 0x8214B574;
	sub_82149690(ctx, base);
	// b 0x8214b57c
	goto loc_8214B57C;
loc_8214B578:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8214B57C:
	// addi r22,r22,92
	r22.s64 = r22.s64 + 92;
	// b 0x8214b840
	goto loc_8214B840;
loc_8214B584:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b59c
	if (ctx.cr6.eq) goto loc_8214B59C;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82149370
	ctx.lr = 0x8214B598;
	sub_82149370(ctx, base);
	// b 0x8214b5a0
	goto loc_8214B5A0;
loc_8214B59C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8214B5A0:
	// addi r22,r22,68
	r22.s64 = r22.s64 + 68;
	// b 0x8214b840
	goto loc_8214B840;
loc_8214B5A8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b5c4
	if (ctx.cr6.eq) goto loc_8214B5C4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821495a8
	ctx.lr = 0x8214B5C0;
	sub_821495A8(ctx, base);
	// b 0x8214b5c8
	goto loc_8214B5C8;
loc_8214B5C4:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8214B5C8:
	// addi r22,r22,108
	r22.s64 = r22.s64 + 108;
	// b 0x8214b840
	goto loc_8214B840;
loc_8214B5D0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b5ec
	if (ctx.cr6.eq) goto loc_8214B5EC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82149a00
	ctx.lr = 0x8214B5E8;
	sub_82149A00(ctx, base);
	// b 0x8214b5f0
	goto loc_8214B5F0;
loc_8214B5EC:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8214B5F0:
	// addi r22,r22,76
	r22.s64 = r22.s64 + 76;
	// b 0x8214b840
	goto loc_8214B840;
loc_8214B5F8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b5ec
	if (ctx.cr6.eq) goto loc_8214B5EC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82149ac8
	ctx.lr = 0x8214B610;
	sub_82149AC8(ctx, base);
	// b 0x8214b5f0
	goto loc_8214B5F0;
loc_8214B614:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b5c4
	if (ctx.cr6.eq) goto loc_8214B5C4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82149c98
	ctx.lr = 0x8214B62C;
	sub_82149C98(ctx, base);
	// b 0x8214b5c8
	goto loc_8214B5C8;
loc_8214B630:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b648
	if (ctx.cr6.eq) goto loc_8214B648;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82169840
	ctx.lr = 0x8214B644;
	sub_82169840(ctx, base);
	// b 0x8214b64c
	goto loc_8214B64C;
loc_8214B648:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8214B64C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rotlwi r8,r11,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r22,r22,512
	r22.s64 = r22.s64 + 512;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// stwx r3,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r3.u32);
	// sthx r30,r8,r9
	REX_STORE_U16(ctx.r8.u32 + ctx.r9.u32, r30.u16);
	// lha r10,72(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 72));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8214b6a0
	if (!ctx.cr0.gt) goto loc_8214B6A0;
	// addi r10,r3,116
	ctx.r10.s64 = ctx.r3.s64 + 116;
loc_8214B67C:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r1,2128
	ctx.r8.s64 = ctx.r1.s64 + 2128;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lha r9,72(r3)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 72));
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8214b67c
	if (ctx.cr6.lt) goto loc_8214B67C;
loc_8214B6A0:
	// lha r11,74(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 74));
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8214b860
	if (!ctx.cr0.gt) goto loc_8214B860;
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
loc_8214B6B4:
	// lwz r9,84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// addi r8,r1,2128
	ctx.r8.s64 = ctx.r1.s64 + 2128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r9,84(r11)
	ea = 84 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lha r9,74(r3)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 74));
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8214b6b4
	if (ctx.cr6.lt) goto loc_8214B6B4;
	// b 0x8214b860
	goto loc_8214B860;
loc_8214B6DC:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-60
	ctx.r10.s64 = ctx.r10.s64 + -60;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + r19.u64;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,118
	ctx.r10.s64 = ctx.r10.s64 + 118;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,56(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r19
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + r19.u32, temp.u32);
	// lbz r11,45(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 45);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwx r11,r10,r19
	REX_STORE_U32(ctx.r10.u32 + r19.u32, ctx.r11.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// beq cr6,0x8214b74c
	if (ctx.cr6.eq) goto loc_8214B74C;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// beq cr6,0x8214b74c
	if (ctx.cr6.eq) goto loc_8214B74C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b838
	if (ctx.cr6.eq) goto loc_8214B838;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8214a068
	ctx.lr = 0x8214B748;
	sub_8214A068(ctx, base);
	// b 0x8214b83c
	goto loc_8214B83C;
loc_8214B74C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b768
	if (ctx.cr6.eq) goto loc_8214B768;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82149d90
	ctx.lr = 0x8214B764;
	sub_82149D90(ctx, base);
	// b 0x8214b76c
	goto loc_8214B76C;
loc_8214B768:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8214B76C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// bne cr6,0x8214b784
	if (!ctx.cr6.eq) goto loc_8214B784;
	// stw r11,680(r19)
	REX_STORE_U32(r19.u32 + 680, ctx.r11.u32);
	// b 0x8214b57c
	goto loc_8214B57C;
loc_8214B784:
	// stw r11,684(r19)
	REX_STORE_U32(r19.u32 + 684, ctx.r11.u32);
	// b 0x8214b57c
	goto loc_8214B57C;
loc_8214B78C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b838
	if (ctx.cr6.eq) goto loc_8214B838;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82149898
	ctx.lr = 0x8214B7A0;
	sub_82149898(ctx, base);
	// b 0x8214b83c
	goto loc_8214B83C;
loc_8214B7A4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b7c8
	if (ctx.cr6.eq) goto loc_8214B7C8;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82169dd0
	ctx.lr = 0x8214B7C0;
	sub_82169DD0(ctx, base);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// b 0x8214b7cc
	goto loc_8214B7CC;
loc_8214B7C8:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8214B7CC:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r22,r22,204
	r22.s64 = r22.s64 + 204;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// sthx r8,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u16);
	// b 0x8214b840
	goto loc_8214B840;
loc_8214B7F0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b838
	if (ctx.cr6.eq) goto loc_8214B838;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8214a1d0
	ctx.lr = 0x8214B804;
	sub_8214A1D0(ctx, base);
	// b 0x8214b83c
	goto loc_8214B83C;
loc_8214B808:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b838
	if (ctx.cr6.eq) goto loc_8214B838;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8214a3c8
	ctx.lr = 0x8214B81C;
	sub_8214A3C8(ctx, base);
	// b 0x8214b83c
	goto loc_8214B83C;
loc_8214B820:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b838
	if (ctx.cr6.eq) goto loc_8214B838;
	// addi r4,r31,-62
	ctx.r4.s64 = r31.s64 + -62;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8214a640
	ctx.lr = 0x8214B834;
	sub_8214A640(ctx, base);
	// b 0x8214b83c
	goto loc_8214B83C;
loc_8214B838:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
loc_8214B83C:
	// addi r22,r22,60
	r22.s64 = r22.s64 + 60;
loc_8214B840:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214b860
	if (ctx.cr6.eq) goto loc_8214B860;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8214b85c
	if (ctx.cr6.eq) goto loc_8214B85C;
	// subf r11,r29,r3
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// stw r3,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// stw r11,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r11.u32);
loc_8214B85C:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8214B860:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// bne 0x8214b4b4
	if (!ctx.cr0.eq) goto loc_8214B4B4;
loc_8214B86C:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// mr r29,r21
	r29.u64 = r21.u64;
	// blt cr6,0x8214b87c
	if (ctx.cr6.lt) goto loc_8214B87C;
	// lha r29,2(r19)
	r29.s64 = int16_t(REX_LOAD_U16(r19.u32 + 2));
loc_8214B87C:
	// mr r23,r29
	r23.u64 = r29.u64;
	// addi r31,r1,84
	r31.s64 = ctx.r1.s64 + 84;
	// li r30,256
	r30.s64 = 256;
loc_8214B888:
	// lhz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + -4);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8214b958
	if (!ctx.cr6.eq) goto loc_8214B958;
	// lha r11,-2(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + -2));
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8214b9d0
	if (!ctx.cr0.lt) goto loc_8214B9D0;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(r18.s32, -1, ctx.xer);
	// bne cr6,0x8214b9a0
	if (!ctx.cr6.eq) goto loc_8214B9A0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lha r11,22(r8)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 22));
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x8214b9a0
	if (!ctx.cr6.lt) goto loc_8214B9A0;
	// lha r11,72(r8)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + 72));
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8214b90c
	if (!ctx.cr0.gt) goto loc_8214B90C;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8214B8D0:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x8214b8f4
	if (!ctx.cr6.lt) goto loc_8214B8F4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lhax r11,r11,r7
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8214b9cc
	if (!ctx.cr0.lt) goto loc_8214B9CC;
loc_8214B8F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lha r11,72(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 72));
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214b8d0
	if (ctx.cr6.lt) goto loc_8214B8D0;
loc_8214B90C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// sth r23,-2(r31)
	REX_STORE_U16(r31.u32 + -2, r23.u16);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
loc_8214B918:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lha r10,22(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 22));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 11, ctx.xer);
	// bne cr6,0x8214b958
	if (!ctx.cr6.eq) goto loc_8214B958;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_8214B958:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x8214b888
	if (!ctx.cr0.eq) goto loc_8214B888;
	// subf r24,r29,r23
	r24.u64 = r23.u64 - r29.u64;
	// cmpw cr6,r23,r29
	ctx.cr6.compare<int32_t>(r23.s32, r29.s32, ctx.xer);
	// ble cr6,0x8214bbbc
	if (!ctx.cr6.gt) goto loc_8214BBBC;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bge cr6,0x8214b9e4
	if (!ctx.cr6.lt) goto loc_8214B9E4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214b9d8
	if (ctx.cr6.eq) goto loc_8214B9D8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x820e01b0
	ctx.lr = 0x8214B988;
	sub_820E01B0(ctx, base);
	// stw r21,64(r22)
	REX_STORE_U32(r22.u32 + 64, r21.u32);
	// stw r21,68(r22)
	REX_STORE_U32(r22.u32 + 68, r21.u32);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// sth r21,72(r22)
	REX_STORE_U16(r22.u32 + 72, r21.u16);
	// sth r21,74(r22)
	REX_STORE_U16(r22.u32 + 74, r21.u16);
	// b 0x8214b9dc
	goto loc_8214B9DC;
loc_8214B9A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lha r11,22(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 22));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x8214b90c
	if (!ctx.cr6.eq) goto loc_8214B90C;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8214b90c
	if (ctx.cr0.lt) goto loc_8214B90C;
loc_8214B9CC:
	// sth r11,-2(r31)
	REX_STORE_U16(r31.u32 + -2, ctx.r11.u16);
loc_8214B9D0:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8214b918
	goto loc_8214B918;
loc_8214B9D8:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8214B9DC:
	// stw r11,12(r19)
	REX_STORE_U32(r19.u32 + 12, ctx.r11.u32);
	// b 0x8214ba14
	goto loc_8214BA14;
loc_8214B9E4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8214ba0c
	if (ctx.cr6.eq) goto loc_8214BA0C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x820e01b0
	ctx.lr = 0x8214B9F4;
	sub_820E01B0(ctx, base);
	// stw r21,64(r22)
	REX_STORE_U32(r22.u32 + 64, r21.u32);
	// stw r21,68(r22)
	REX_STORE_U32(r22.u32 + 68, r21.u32);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// sth r21,72(r22)
	REX_STORE_U16(r22.u32 + 72, r21.u16);
	// sth r21,74(r22)
	REX_STORE_U16(r22.u32 + 74, r21.u16);
	// b 0x8214ba10
	goto loc_8214BA10;
loc_8214BA0C:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8214BA10:
	// stw r11,20(r19)
	REX_STORE_U32(r19.u32 + 20, ctx.r11.u32);
loc_8214BA14:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
	// cmpw cr6,r29,r23
	ctx.cr6.compare<int32_t>(r29.s32, r23.s32, ctx.xer);
	// bge cr6,0x8214bb90
	if (!ctx.cr6.lt) goto loc_8214BB90;
	// extsh r27,r20
	r27.s64 = r20.s16;
loc_8214BA2C:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// sth r21,72(r5)
	REX_STORE_U16(ctx.r5.u32 + 72, r21.u16);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r21,68(r5)
	REX_STORE_U32(ctx.r5.u32 + 68, r21.u32);
	// addi r29,r1,82
	r29.s64 = ctx.r1.s64 + 82;
	// sth r27,74(r5)
	REX_STORE_U16(ctx.r5.u32 + 74, r27.u16);
	// li r28,256
	r28.s64 = 256;
loc_8214BA48:
	// lhz r11,-2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + -2);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x8214bb58
	if (!ctx.cr6.eq) goto loc_8214BB58;
	// lha r11,0(r29)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + 0));
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bne cr6,0x8214bb58
	if (!ctx.cr6.eq) goto loc_8214BB58;
	// lwz r9,2(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214ba8c
	if (ctx.cr6.eq) goto loc_8214BA8C;
	// stw r9,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214ba84
	if (ctx.cr6.eq) goto loc_8214BA84;
	// subf r11,r3,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r3.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x8214ba90
	goto loc_8214BA90;
loc_8214BA84:
	// stw r21,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r21.u32);
	// b 0x8214ba90
	goto loc_8214BA90;
loc_8214BA8C:
	// stw r9,68(r5)
	REX_STORE_U32(ctx.r5.u32 + 68, ctx.r9.u32);
loc_8214BA90:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r21,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r21.u32);
	// stw r21,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r21.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sth r11,60(r9)
	REX_STORE_U16(ctx.r9.u32 + 60, ctx.r11.u16);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
	// lhz r11,72(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,72(r5)
	REX_STORE_U16(ctx.r5.u32 + 72, ctx.r11.u16);
	// lha r11,72(r9)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 72));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8214bb58
	if (!ctx.cr0.gt) goto loc_8214BB58;
	// addi r4,r9,124
	ctx.r4.s64 = ctx.r9.s64 + 124;
loc_8214BAC8:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lha r10,72(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 72));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8214bb44
	if (!ctx.cr0.gt) goto loc_8214BB44;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
loc_8214BAE4:
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8214bb2c
	if (!ctx.cr6.eq) goto loc_8214BB2C;
	// lha r6,72(r11)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 72));
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8214bb14
	if (!ctx.cr6.lt) goto loc_8214BB14;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r20,116(r6)
	r20.u64 = REX_LOAD_U32(ctx.r6.u32 + 116);
	// stw r20,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r20.u32);
	// lwz r6,120(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 120);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_8214BB14:
	// lhz r6,72(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// sth r6,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r6.u16);
loc_8214BB2C:
	// lha r6,72(r11)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 72));
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8214bae4
	if (ctx.cr6.lt) goto loc_8214BAE4;
loc_8214BB44:
	// lha r11,72(r9)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 72));
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214bac8
	if (ctx.cr6.lt) goto loc_8214BAC8;
loc_8214BB58:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x8214ba48
	if (!ctx.cr0.eq) goto loc_8214BA48;
	// lha r11,72(r5)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r5.u32 + 72));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8214bb80
	if (!ctx.cr0.gt) goto loc_8214BB80;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r5,r5,76
	ctx.r5.s64 = ctx.r5.s64 + 76;
	// stw r5,64(r25)
	REX_STORE_U32(r25.u32 + 64, ctx.r5.u32);
	// b 0x8214bb84
	goto loc_8214BB84;
loc_8214BB80:
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
loc_8214BB84:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(r26.s32, r23.s32, ctx.xer);
	// blt cr6,0x8214ba2c
	if (ctx.cr6.lt) goto loc_8214BA2C;
loc_8214BB90:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8214bbbc
	if (!ctx.cr6.gt) goto loc_8214BBBC;
	// addi r11,r5,15
	ctx.r11.s64 = ctx.r5.s64 + 15;
	// stw r21,64(r25)
	REX_STORE_U32(r25.u32 + 64, r21.u32);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// rlwinm r22,r11,0,0,27
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bge cr6,0x8214bbb4
	if (!ctx.cr6.lt) goto loc_8214BBB4;
	// sth r24,2(r19)
	REX_STORE_U16(r19.u32 + 2, r24.u16);
	// b 0x8214bbd8
	goto loc_8214BBD8;
loc_8214BBB4:
	// sth r24,6(r19)
	REX_STORE_U16(r19.u32 + 6, r24.u16);
	// b 0x8214bbd8
	goto loc_8214BBD8;
loc_8214BBBC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bge cr6,0x8214bbd0
	if (!ctx.cr6.lt) goto loc_8214BBD0;
	// sth r21,2(r19)
	REX_STORE_U16(r19.u32 + 2, r21.u16);
	// stw r21,12(r19)
	REX_STORE_U32(r19.u32 + 12, r21.u32);
	// b 0x8214bbd8
	goto loc_8214BBD8;
loc_8214BBD0:
	// sth r21,6(r19)
	REX_STORE_U16(r19.u32 + 6, r21.u16);
	// stw r21,20(r19)
	REX_STORE_U32(r19.u32 + 20, r21.u32);
loc_8214BBD8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,3280
	ctx.r1.s64 = ctx.r1.s64 + 3280;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_82174DC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-6196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6196);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82175380) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82175388;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82174f40
	ctx.lr = 0x82175394;
	sub_82174F40(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,-23604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23604);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f13,26636(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26636);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,31144(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x820e1b70
	ctx.lr = 0x821753D4;
	sub_820E1B70(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175408
	if (ctx.cr6.eq) goto loc_82175408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-256
	ctx.r11.s64 = -256;
	// lfs f0,2028(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r10,87(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// or r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8217540c
	goto loc_8217540C;
loc_82175408:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_8217540C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r10,-6068
	ctx.r3.s64 = ctx.r10.s64 + -6068;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,26672(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26672);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f1,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f1.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f1,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82175440;
	sub_821EACB0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// lwz r30,164(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r29,160(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lwz r31,156(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x820e68b8
	ctx.lr = 0x82175464;
	sub_820E68B8(ctx, base);
	// lfs f3,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-6096
	ctx.r3.s64 = ctx.r11.s64 + -6096;
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// bl 0x821eacb0
	ctx.lr = 0x821754A4;
	sub_821EACB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82179388) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82179390;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,27608
	r31.s64 = ctx.r11.s64 + 27608;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217940c
	if (!ctx.cr6.eq) goto loc_8217940C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-5188
	ctx.r6.s64 = ctx.r11.s64 + -5188;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,896
	ctx.r4.s64 = 896;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821793D8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82179404
	if (ctx.cr0.eq) goto loc_82179404;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r29.u32);
	// addi r11,r11,-5228
	ctx.r11.s64 = ctx.r11.s64 + -5228;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8217940c
	goto loc_8217940C;
loc_82179404:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
loc_8217940C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217945c
	if (!ctx.cr6.eq) goto loc_8217945C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-5200
	ctx.r6.s64 = ctx.r11.s64 + -5200;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,896
	ctx.r4.s64 = 896;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8217943C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217944c
	if (ctx.cr0.eq) goto loc_8217944C;
	// bl 0x82178780
	ctx.lr = 0x82179448;
	sub_82178780(ctx, base);
	// b 0x82179450
	goto loc_82179450;
loc_8217944C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82179450:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217948c
	if (ctx.cr6.eq) goto loc_8217948C;
loc_8217945C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-5208
	ctx.r6.s64 = ctx.r11.s64 + -5208;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x821f7d50
	ctx.lr = 0x8217947C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217948c
	if (ctx.cr0.eq) goto loc_8217948C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821787f0
	ctx.lr = 0x8217948C;
	sub_821787F0(ctx, base);
loc_8217948C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8217BB18) {
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
	// bl 0x822d4e84
	ctx.lr = 0x8217BB20;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f24
	ctx.lr = 0x8217BB28;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfs f29,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 152);
	f29.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// bl 0x82202070
	ctx.lr = 0x8217BB48;
	sub_82202070(ctx, base);
	// lwz r5,184(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 184);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r5,16
	ctx.r4.s64 = ctx.r5.s64 + 16;
	// bl 0x820e1ba8
	ctx.lr = 0x8217BB58;
	sub_820E1BA8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e2290
	ctx.lr = 0x8217BB64;
	sub_820E2290(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r29,1
	r29.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8217bd1c
	if (!ctx.cr6.gt) goto loc_8217BD1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f23,2352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	f23.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f28,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f28.f64 = double(temp.f32);
	// lfs f26,16352(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16352);
	f26.f64 = double(temp.f32);
	// li r28,16
	r28.s64 = 16;
	// lfs f27,16172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16172);
	f27.f64 = double(temp.f32);
	// addi r27,r11,-4936
	r27.s64 = ctx.r11.s64 + -4936;
	// lfs f24,-24832(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24832);
	f24.f64 = double(temp.f32);
	// lfs f25,1988(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1988);
	f25.f64 = double(temp.f32);
loc_8217BBB4:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// add r30,r28,r11
	r30.u64 = r28.u64 + ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x8217BBF4;
	sub_820E1BA8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e2290
	ctx.lr = 0x8217BC00;
	sub_820E2290(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e1c28
	ctx.lr = 0x8217BC0C;
	sub_820E1C28(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822d6830
	ctx.lr = 0x8217BC14;
	sub_822D6830(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// fmuls f30,f0,f25
	f30.f64 = double(float(ctx.f0.f64 * f25.f64));
	// bge cr6,0x8217bcfc
	if (!ctx.cr6.lt) goto loc_8217BCFC;
	// fcmpu cr6,f30,f24
	ctx.cr6.compare(f30.f64, f24.f64);
	// ble cr6,0x8217bcfc
	if (!ctx.cr6.gt) goto loc_8217BCFC;
	// bl 0x821fee88
	ctx.lr = 0x8217BC40;
	sub_821FEE88(ctx, base);
	// fmadds f0,f1,f27,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f27.f64, f26.f64)));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// ble cr6,0x8217bcfc
	if (!ctx.cr6.gt) goto loc_8217BCFC;
	// addi r5,r31,208
	ctx.r5.s64 = r31.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1ba8
	ctx.lr = 0x8217BC60;
	sub_820E1BA8(ctx, base);
	// bl 0x821fee88
	ctx.lr = 0x8217BC64;
	sub_821FEE88(ctx, base);
	// fadds f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f28.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f31,f0,f23
	f31.f64 = double(float(ctx.f0.f64 * f23.f64));
	// bl 0x820e22e8
	ctx.lr = 0x8217BC74;
	sub_820E22E8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1cc0
	ctx.lr = 0x8217BC84;
	sub_820E1CC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1b28
	ctx.lr = 0x8217BC94;
	sub_820E1B28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,777
	ctx.r4.s64 = 777;
	// bl 0x821f7d50
	ctx.lr = 0x8217BCB4;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217bcfc
	if (ctx.cr0.eq) goto loc_8217BCFC;
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f13,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f4,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f2,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmuls f3,f30,f29
	ctx.f3.f64 = double(float(f30.f64 * f29.f64));
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// fmuls f5,f0,f29
	ctx.f5.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bl 0x82178510
	ctx.lr = 0x8217BCFC;
	sub_82178510(ctx, base);
loc_8217BCFC:
	// fsubs f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f28.f64 - f30.f64));
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// fmuls f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 * f29.f64));
	// blt cr6,0x8217bbb4
	if (ctx.cr6.lt) goto loc_8217BBB4;
loc_8217BD1C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f70
	ctx.lr = 0x8217BD28;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82181F20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x822d4fa0
	ctx.lr = 0x82181F48;
	sub_822D4FA0(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82181ea8
	ctx.lr = 0x82181F58;
	sub_82181EA8(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
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

DEFINE_REX_FUNC(sub_82182BC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82182BC8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// sth r30,16(r31)
	REX_STORE_U16(r31.u32 + 16, r30.u16);
	// sth r30,18(r31)
	REX_STORE_U16(r31.u32 + 18, r30.u16);
	// stb r30,20(r31)
	REX_STORE_U8(r31.u32 + 20, r30.u8);
	// bl 0x821829f8
	ctx.lr = 0x82182BF8;
	sub_821829F8(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// addis r11,r31,4
	ctx.r11.s64 = r31.s64 + 262144;
	// addi r11,r11,2624
	ctx.r11.s64 = ctx.r11.s64 + 2624;
	// addi r9,r11,-28
	ctx.r9.s64 = ctx.r11.s64 + -28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82182C0C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwu r10,28(r9)
	ea = 28 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82182c0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82182C0C;
	// li r10,63
	ctx.r10.s64 = 63;
	// stw r30,1792(r11)
	REX_STORE_U32(ctx.r11.u32 + 1792, r30.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stw r30,1796(r11)
	REX_STORE_U32(ctx.r11.u32 + 1796, r30.u32);
	// stw r10,1800(r11)
	REX_STORE_U32(ctx.r11.u32 + 1800, ctx.r10.u32);
	// addis r4,r31,4
	ctx.r4.s64 = r31.s64 + 262144;
	// ori r11,r9,4440
	ctx.r11.u64 = ctx.r9.u64 | 4440;
	// stwx r30,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, r30.u32);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r11,r11,4444
	ctx.r11.u64 = ctx.r11.u64 | 4444;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r9,r9,4448
	ctx.r9.u64 = ctx.r9.u64 | 4448;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// stwx r30,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, r30.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r4,r4,4464
	ctx.r4.s64 = ctx.r4.s64 + 4464;
	// ori r8,r8,6084
	ctx.r8.u64 = ctx.r8.u64 | 6084;
	// ori r5,r5,6672
	ctx.r5.u64 = ctx.r5.u64 | 6672;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// ori r7,r7,6096
	ctx.r7.u64 = ctx.r7.u64 | 6096;
	// ori r6,r6,6100
	ctx.r6.u64 = ctx.r6.u64 | 6100;
	// li r3,5
	ctx.r3.s64 = 5;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32163
	r29.s64 = -2107834368;
	// stwx r3,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// stw r10,1544(r4)
	REX_STORE_U32(ctx.r4.u32 + 1544, ctx.r10.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stw r30,1536(r4)
	REX_STORE_U32(ctx.r4.u32 + 1536, r30.u32);
	// lis r3,4
	ctx.r3.s64 = 262144;
	// stw r30,1540(r4)
	REX_STORE_U32(ctx.r4.u32 + 1540, r30.u32);
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
	// lfd f0,31912(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// stbx r30,r31,r5
	REX_STORE_U8(r31.u32 + ctx.r5.u32, r30.u8);
	// stwx r30,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, r30.u32);
	// ori r11,r9,4456
	ctx.r11.u64 = ctx.r9.u64 | 4456;
	// stwx r30,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, r30.u32);
	// lfd f13,31632(r29)
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 31632);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// ori r10,r3,4432
	ctx.r10.u64 = ctx.r3.u64 | 4432;
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.f13.u64);
	// lfd f13,31632(r29)
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 31632);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfdx f13,r31,r11
	REX_STORE_U64(r31.u32 + ctx.r11.u32, ctx.f13.u64);
	// lfd f13,31632(r29)
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 31632);
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfdx f13,r31,r10
	REX_STORE_U64(r31.u32 + ctx.r10.u32, ctx.f13.u64);
	// lfd f13,31632(r29)
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 31632);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r11,r11,6664
	ctx.r11.u64 = ctx.r11.u64 | 6664;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// stfdx f0,r31,r11
	REX_STORE_U64(r31.u32 + ctx.r11.u32, ctx.f0.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82182D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r3.u16);
	// std r30,32(r31)
	REX_STORE_U64(r31.u32 + 32, r30.u64);
	// addis r3,r31,4
	ctx.r3.s64 = r31.s64 + 262144;
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r3,6012
	ctx.r3.s64 = ctx.r3.s64 + 6012;
	// bl 0x82181e38
	ctx.lr = 0x82182D4C;
	sub_82181E38(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r3,r31,4
	ctx.r3.s64 = r31.s64 + 262144;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r3,6036
	ctx.r3.s64 = ctx.r3.s64 + 6036;
	// bl 0x82181e38
	ctx.lr = 0x82182D68;
	sub_82181E38(ctx, base);
	// addis r3,r31,4
	ctx.r3.s64 = r31.s64 + 262144;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r3,6060
	ctx.r3.s64 = ctx.r3.s64 + 6060;
	// bl 0x82181e38
	ctx.lr = 0x82182D84;
	sub_82181E38(ctx, base);
	// addis r3,r31,4
	ctx.r3.s64 = r31.s64 + 262144;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,6104
	ctx.r3.s64 = ctx.r3.s64 + 6104;
	// bl 0x822d5870
	ctx.lr = 0x82182D98;
	sub_822D5870(ctx, base);
	// addis r3,r31,4
	ctx.r3.s64 = r31.s64 + 262144;
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,6264
	ctx.r3.s64 = ctx.r3.s64 + 6264;
	// bl 0x822d5870
	ctx.lr = 0x82182DAC;
	sub_822D5870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82189128) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821896D8) {
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
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// bl 0x82189170
	ctx.lr = 0x821896F8;
	sub_82189170(ctx, base);
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

DEFINE_REX_FUNC(sub_8218A390) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e7c
	ctx.lr = 0x8218A398;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,128(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r30,132(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bne 0x8218a3e0
	if (!ctx.cr0.eq) goto loc_8218A3E0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x821a6a08
	ctx.lr = 0x8218A3CC;
	sub_821A6A08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r25,-1
	r25.s64 = -1;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8218a3e4
	if (!ctx.cr6.gt) goto loc_8218A3E4;
loc_8218A3E0:
	// li r25,0
	r25.s64 = 0;
loc_8218A3E4:
	// li r26,7
	r26.s64 = 7;
loc_8218A3E8:
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// rlwinm r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// bne 0x8218a41c
	if (!ctx.cr0.eq) goto loc_8218A41C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821a6a08
	ctx.lr = 0x8218A41C;
	sub_821A6A08(ctx, base);
loc_8218A41C:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x8218a3e8
	if (!ctx.cr0.eq) goto loc_8218A3E8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8218DF20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lha r11,90(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 90));
	// addi r10,r10,30412
	ctx.r10.s64 = ctx.r10.s64 + 30412;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r8,r9,-16696
	ctx.r8.s64 = ctx.r9.s64 + -16696;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// subfc r8,r8,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r8.u32;
	ctx.r8.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfe r9,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218ED80) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,16408
	ctx.r3.s64 = ctx.r3.s64 + 16408;
	// b 0x8218ec90
	sub_8218EC90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218EF30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lhz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// bne cr6,0x8218ef50
	if (!ctx.cr6.eq) goto loc_8218EF50;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2352(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8218ef58
	goto loc_8218EF58;
loc_8218EF50:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_8218EF58:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r4,11680(r11)
	REX_STORE_U32(ctx.r11.u32 + 11680, ctx.r4.u32);
	// stfs f0,11684(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 11684, temp.u32);
	// beq cr6,0x8218efa4
	if (ctx.cr6.eq) goto loc_8218EFA4;
	// cmpwi cr6,r4,19
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 19, ctx.xer);
	// beq cr6,0x8218efa4
	if (ctx.cr6.eq) goto loc_8218EFA4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218ef9c
	if (ctx.cr6.eq) goto loc_8218EF9C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8218EF9C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8218ec90
	sub_8218EC90(ctx, base);
	return;
loc_8218EFA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8218ec90
	sub_8218EC90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82191640) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x82191648;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,304
	ctx.r3.s64 = 304;
	// addi r11,r11,2996
	ctx.r11.s64 = ctx.r11.s64 + 2996;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x822c80d0
	ctx.lr = 0x82191670;
	sub_822C80D0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82191688
	if (ctx.cr0.eq) goto loc_82191688;
	// bl 0x822cad78
	ctx.lr = 0x82191680;
	sub_822CAD78(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8219168c
	goto loc_8219168C;
loc_82191688:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8219168C:
	// li r26,1
	r26.s64 = 1;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stb r31,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r31.u8);
	// stb r31,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, r31.u8);
	// stb r31,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, r31.u8);
	// stb r31,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, r31.u8);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// bl 0x822c8bc0
	ctx.lr = 0x821916CC;
	sub_822C8BC0(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822cae68
	ctx.lr = 0x821916E4;
	sub_822CAE68(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,30848(r11)
	REX_STORE_U32(ctx.r11.u32 + 30848, r29.u32);
	// beq cr6,0x82191700
	if (ctx.cr6.eq) goto loc_82191700;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x82191730
	goto loc_82191730;
loc_82191700:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,2972
	ctx.r11.s64 = ctx.r11.s64 + 2972;
	// addi r10,r10,2948
	ctx.r10.s64 = ctx.r10.s64 + 2948;
	// addi r9,r9,2928
	ctx.r9.s64 = ctx.r9.s64 + 2928;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
loc_82191730:
	// bl 0x822cb688
	ctx.lr = 0x82191734;
	sub_822CB688(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82191740
	if (ctx.cr6.eq) goto loc_82191740;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_82191740:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,92(r30)
	REX_STORE_U32(r30.u32 + 92, r27.u32);
	// stw r29,88(r30)
	REX_STORE_U32(r30.u32 + 88, r29.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stw r26,28(r30)
	REX_STORE_U32(r30.u32 + 28, r26.u32);
	// sth r31,84(r30)
	REX_STORE_U16(r30.u32 + 84, r31.u16);
	// addi r3,r10,-32032
	ctx.r3.s64 = ctx.r10.s64 + -32032;
	// sth r31,86(r30)
	REX_STORE_U16(r30.u32 + 86, r31.u16);
	// stw r31,96(r30)
	REX_STORE_U32(r30.u32 + 96, r31.u32);
	// stw r31,100(r30)
	REX_STORE_U32(r30.u32 + 100, r31.u32);
	// sth r31,80(r30)
	REX_STORE_U16(r30.u32 + 80, r31.u16);
	// sth r11,82(r30)
	REX_STORE_U16(r30.u32 + 82, ctx.r11.u16);
	// bl 0x821f1ee8
	ctx.lr = 0x82191774;
	sub_821F1EE8(ctx, base);
	// bl 0x823caeb0
	ctx.lr = 0x82191778;
	sub_823CAEB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82198A68) {
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
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82198a8c
	if (ctx.cr6.eq) goto loc_82198A8C;
	// bl 0x822c80a8
	ctx.lr = 0x82198A8C;
	sub_822C80A8(ctx, base);
loc_82198A8C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82199F28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// mulli r10,r3,88
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(88));
	// addi r11,r11,-13224
	ctx.r11.s64 = ctx.r11.s64 + -13224;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82199cf0
	sub_82199CF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219A368) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-10044(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10044);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8219a198
	sub_8219A198(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219AA70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8219AA78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r11,-9752
	ctx.r10.s64 = ctx.r11.s64 + -9752;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-80
	ctx.r10.s64 = ctx.r10.s64 + -80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r30,1
	r30.s64 = 1;
loc_8219AA9C:
	// lwzu r9,88(r10)
	ea = 88 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// slw r9,r30,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r9.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// bdnz 0x8219aa9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219AA9C;
	// rlwinm r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r31,r11,-10044
	r31.s64 = ctx.r11.s64 + -10044;
	// lwz r11,-10044(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10044);
	// beq cr6,0x8219aacc
	if (ctx.cr6.eq) goto loc_8219AACC;
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// b 0x8219ab34
	goto loc_8219AB34;
loc_8219AACC:
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8219a2f0
	ctx.lr = 0x8219AAD8;
	sub_8219A2F0(ctx, base);
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ab34
	if (ctx.cr6.eq) goto loc_8219AB34;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r10,r10,32056
	ctx.r10.s64 = ctx.r10.s64 + 32056;
	// addi r11,r11,32040
	ctx.r11.s64 = ctx.r11.s64 + 32040;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// mulli r9,r9,14
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(14));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8219AB08:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8219ab28
	if (!ctx.cr0.eq) goto loc_8219AB28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8219ab08
	if (!ctx.cr6.eq) goto loc_8219AB08;
loc_8219AB28:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8219ab34
	if (ctx.cr0.eq) goto loc_8219AB34;
	// bl 0x8219a048
	ctx.lr = 0x8219AB34;
	sub_8219A048(ctx, base);
loc_8219AB34:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ab44
	if (ctx.cr6.eq) goto loc_8219AB44;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_8219AB44:
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ab58
	if (ctx.cr6.eq) goto loc_8219AB58;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8219AB58:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r11,r11,3696
	ctx.r11.u64 = ctx.r11.u64 | 3696;
	// addi r10,r10,-7072
	ctx.r10.s64 = ctx.r10.s64 + -7072;
	// li r8,-1
	ctx.r8.s64 = -1;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219AB78:
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// lbzux r9,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// bdnz 0x8219ab78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219AB78;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8219EED0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
loc_8219EEFC:
	// stfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r8,40(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f12,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f12,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stb r9,78(r11)
	REX_STORE_U8(ctx.r11.u32 + 78, ctx.r9.u8);
	// stb r10,79(r11)
	REX_STORE_U8(ctx.r11.u32 + 79, ctx.r10.u8);
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r9,82(r11)
	REX_STORE_U8(ctx.r11.u32 + 82, ctx.r9.u8);
	// stbu r10,80(r11)
	ea = 80 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8219eefc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219EEFC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1978) {
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
	// bl 0x822d4e8c
	ctx.lr = 0x821A1980;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f2,6784(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 6784);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a3a18
	ctx.lr = 0x821A19A8;
	sub_821A3A18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// li r31,44
	r31.s64 = 44;
	// lfs f30,26552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26552);
	f30.f64 = double(temp.f32);
loc_821A19B8:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821a3a18
	ctx.lr = 0x821A19C8;
	sub_821A3A18(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x821a19b8
	if (!ctx.cr0.eq) goto loc_821A19B8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 204);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// addi r31,r30,204
	r31.s64 = r30.s64 + 204;
	// lfs f31,-24240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24240);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821a3a18
	ctx.lr = 0x821A19EC;
	sub_821A3A18(ctx, base);
	// lwzu r3,4(r31)
	ea = 4 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x821a3a18
	ctx.lr = 0x821A19FC;
	sub_821A3A18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lfs f2,26856(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26856);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x821a3a18
	ctx.lr = 0x821A1A10;
	sub_821A3A18(ctx, base);
	// lwz r3,216(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 216);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x821a3a18
	ctx.lr = 0x821A1A20;
	sub_821A3A18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A3A58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A3A60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,184(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821a3a94
	if (ctx.cr6.eq) goto loc_821A3A94;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e48c0
	ctx.lr = 0x821A3A88;
	sub_820E48C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821A3A90;
	sub_822C80A8(ctx, base);
	// stw r29,184(r31)
	REX_STORE_U32(r31.u32 + 184, r29.u32);
loc_821A3A94:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a3ab0
	if (ctx.cr6.eq) goto loc_821A3AB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x821a3ab0
	if (!ctx.cr6.eq) goto loc_821A3AB0;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_821A3AB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A58A0) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,-32480
	ctx.r10.s64 = ctx.r11.s64 + -32480;
	// lwz r31,-32480(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a58e4
	if (ctx.cr6.eq) goto loc_821A58E4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r4,19872
	ctx.r4.s64 = 19872;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// bl 0x82190670
	ctx.lr = 0x821A58E4;
	sub_82190670(ctx, base);
loc_821A58E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x821a5770
	ctx.lr = 0x821A58F0;
	sub_821A5770(ctx, base);
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

DEFINE_REX_FUNC(sub_821A70C0) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// ble cr6,0x821a7144
	if (!ctx.cr6.gt) goto loc_821A7144;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_821A7108:
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r3,r6,r4
	ctx.r3.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// and r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lwzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x821a7108
	if (!ctx.cr0.eq) goto loc_821A7108;
loc_821A7144:
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A9BA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A9BB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,3392(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3392);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a9c38
	if (ctx.cr0.eq) goto loc_821A9C38;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r3,2980(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2980);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r11,-11976
	r30.s64 = ctx.r11.s64 + -11976;
	// addi r7,r10,7508
	ctx.r7.s64 = ctx.r10.s64 + 7508;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82234f28
	ctx.lr = 0x821A9BFC;
	sub_82234F28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a9c38
	if (!ctx.cr0.eq) goto loc_821A9C38;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r29,r11,-12008
	r29.s64 = ctx.r11.s64 + -12008;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x821A9C1C;
	sub_822D5870(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,2980(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2980);
	// addi r6,r11,31868
	ctx.r6.s64 = ctx.r11.s64 + 31868;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82234c50
	ctx.lr = 0x821A9C38;
	sub_82234C50(ctx, base);
loc_821A9C38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821AAB38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821AAB40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,7956
	ctx.r11.s64 = ctx.r11.s64 + 7956;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// addi r10,r10,-21904
	ctx.r10.s64 = ctx.r10.s64 + -21904;
	// stw r30,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r30.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r30,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r30.u32);
	// li r29,1
	r29.s64 = 1;
	// stw r30,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, r30.u32);
	// addi r11,r8,-22080
	ctx.r11.s64 = ctx.r8.s64 + -22080;
	// stw r30,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, r30.u32);
	// addi r8,r7,-22040
	ctx.r8.s64 = ctx.r7.s64 + -22040;
	// stw r30,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, r30.u32);
	// addi r9,r9,-22160
	ctx.r9.s64 = ctx.r9.s64 + -22160;
	// stw r29,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, r29.u32);
	// addi r7,r6,-22024
	ctx.r7.s64 = ctx.r6.s64 + -22024;
	// stw r10,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r9,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// stw r8,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r8.u32);
	// stw r7,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r7.u32);
	// bl 0x822d5870
	ctx.lr = 0x821AABC4;
	sub_822D5870(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r11,13128
	ctx.r10.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1835(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1835);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821aac04
	if (ctx.cr6.eq) goto loc_821AAC04;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821aabfc
	if (ctx.cr6.eq) goto loc_821AABFC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821aabf4
	if (ctx.cr6.eq) goto loc_821AABF4;
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// b 0x821aac0c
	goto loc_821AAC0C;
loc_821AABF4:
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// b 0x821aac0c
	goto loc_821AAC0C;
loc_821AABFC:
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// b 0x821aac0c
	goto loc_821AAC0C;
loc_821AAC04:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_821AAC0C:
	// lbz r11,1835(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1835);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821aac38
	if (ctx.cr6.eq) goto loc_821AAC38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821aac30
	if (ctx.cr6.eq) goto loc_821AAC30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821aac30
	if (!ctx.cr6.eq) goto loc_821AAC30;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x821aac3c
	goto loc_821AAC3C;
loc_821AAC30:
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// b 0x821aac40
	goto loc_821AAC40;
loc_821AAC38:
	// li r11,2
	ctx.r11.s64 = 2;
loc_821AAC3C:
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
loc_821AAC40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821B1708) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// lfs f30,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f30.f64 = double(temp.f32);
	// beq cr6,0x821b1740
	if (ctx.cr6.eq) goto loc_821B1740;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x821b1748
	if (!ctx.cr6.eq) goto loc_821B1748;
loc_821B1740:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f30,9908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9908);
	f30.f64 = double(temp.f32);
loc_821B1748:
	// bl 0x821b0d38
	ctx.lr = 0x821B174C;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821b1760
	if (!ctx.cr0.eq) goto loc_821B1760;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b176c
	if (!ctx.cr6.eq) goto loc_821B176C;
loc_821B1760:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4720);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f30,f0
	f30.f64 = double(float(f30.f64 - ctx.f0.f64));
loc_821B176C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,9904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9904);
	f31.f64 = double(temp.f32);
	// bl 0x82204da8
	ctx.lr = 0x821B1778;
	sub_82204DA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1788
	if (ctx.cr0.eq) goto loc_821B1788;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,9900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9900);
	f31.f64 = double(temp.f32);
loc_821B1788:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c2f08
	ctx.lr = 0x821B1794;
	sub_821C2F08(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b17dc
	if (ctx.cr0.eq) goto loc_821B17DC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f3,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f3.f64 = double(temp.f32);
	// bne 0x821b17c8
	if (!ctx.cr0.eq) goto loc_821B17C8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fneg f1,f31
	ctx.f1.u64 = f31.u64 ^ 0x8000000000000000;
	// lfs f4,-24720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24720);
	ctx.f4.f64 = double(temp.f32);
	// b 0x821b17d4
	goto loc_821B17D4;
loc_821B17C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lfs f4,9896(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9896);
	ctx.f4.f64 = double(temp.f32);
loc_821B17D4:
	// bl 0x821ca5a0
	ctx.lr = 0x821B17D8;
	sub_821CA5A0(ctx, base);
	// b 0x821b184c
	goto loc_821B184C;
loc_821B17DC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b17fc
	if (!ctx.cr0.eq) goto loc_821B17FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f31.u64 ^ 0x8000000000000000;
	// stfs f0,10532(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10532, temp.u32);
	// stfs f0,10484(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// lfs f0,-24720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24720);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821b180c
	goto loc_821B180C;
loc_821B17FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,10532(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10532, temp.u32);
	// stfs f31,10484(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10484, temp.u32);
	// lfs f0,9896(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9896);
	ctx.f0.f64 = double(temp.f32);
loc_821B180C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,10312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10312, temp.u32);
	// stfs f30,10536(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 10536, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f30,10488(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10540(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10540, temp.u32);
	// stfs f0,10492(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10492, temp.u32);
	// stfs f0,10316(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10316, temp.u32);
	// stfs f0,10308(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10308, temp.u32);
	// stfs f0,10256(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10256, temp.u32);
	// stfs f0,10252(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10252, temp.u32);
	// stfs f0,10248(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10248, temp.u32);
	// bl 0x821c5c10
	ctx.lr = 0x821B1844;
	sub_821C5C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c5ae8
	ctx.lr = 0x821B184C;
	sub_821C5AE8(ctx, base);
loc_821B184C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE878) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-9768(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9768);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BED08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r11,7224
	ctx.xer.ca = ctx.r11.u32 > 4294960071;
	ctx.r11.s64 = ctx.r11.s64 + 7224;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f2,60(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF278) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r3,6812
	ctx.r10.s64 = ctx.r3.s64 + 6812;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821BF284:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwu r11,12(r10)
	ea = 12 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821bf284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF284;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BF510) {
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
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lha r5,2(r6)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + 2));
	// lha r10,4(r6)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r6.u32 + 4));
	// addi r11,r5,-32767
	ctx.r11.s64 = ctx.r5.s64 + -32767;
	// addi r7,r10,-32767
	ctx.r7.s64 = ctx.r10.s64 + -32767;
	// lwz r30,10008(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// bl 0x821bee40
	ctx.lr = 0x821BF568;
	sub_821BEE40(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// bl 0x821bee40
	ctx.lr = 0x821BF584;
	sub_821BEE40(ctx, base);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821bf5fc
	if (ctx.cr6.eq) goto loc_821BF5FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821bf618
	if (!ctx.cr6.eq) goto loc_821BF618;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821bf5c8
	if (!ctx.cr6.eq) goto loc_821BF5C8;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bgt cr6,0x821bf5cc
	if (ctx.cr6.gt) goto loc_821BF5CC;
loc_821BF5C8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_821BF5CC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821bf5e8
	if (!ctx.cr6.eq) goto loc_821BF5E8;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt cr6,0x821bf5ec
	if (ctx.cr6.gt) goto loc_821BF5EC;
loc_821BF5E8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821BF5EC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821bf618
	if (ctx.cr6.eq) goto loc_821BF618;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x821bf610
	goto loc_821BF610;
loc_821BF5FC:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821bf614
	if (ctx.cr6.eq) goto loc_821BF614;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
loc_821BF610:
	// beq cr6,0x821bf618
	if (ctx.cr6.eq) goto loc_821BF618;
loc_821BF614:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821BF618:
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

DEFINE_REX_FUNC(sub_821C2EB8) {
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
	// lwz r3,19424(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 19424);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x821c2ef4
	if (ctx.cr6.eq) goto loc_821C2EF4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821c2ef4
	if (ctx.cr6.eq) goto loc_821C2EF4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c2eec
	if (ctx.cr6.eq) goto loc_821C2EEC;
	// bl 0x8212b8e8
	ctx.lr = 0x821C2EE4;
	sub_8212B8E8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// b 0x821c2ef8
	goto loc_821C2EF8;
loc_821C2EEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c2ef8
	goto loc_821C2EF8;
loc_821C2EF4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821C2EF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C3F80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r10,220(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lhz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 88);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C4A98) {
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
	// bl 0x822d4e88
	ctx.lr = 0x821C4AA0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r4,164
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(164));
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mulli r11,r4,176
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(176));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addic. r31,r10,9120
	ctx.xer.ca = ctx.r10.u32 > 4294958175;
	r31.s64 = ctx.r10.s64 + 9120;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r28,r11,14152
	r28.s64 = ctx.r11.s64 + 14152;
	// beq 0x821c4bc8
	if (ctx.cr0.eq) goto loc_821C4BC8;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821c4bc8
	if (ctx.cr6.eq) goto loc_821C4BC8;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r9,1
	ctx.r9.s64 = 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r10,-9536
	ctx.r10.s64 = ctx.r10.s64 + -9536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lfs f1,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lha r4,0(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// lha r5,2(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// bl 0x821bef78
	ctx.lr = 0x821C4B08;
	sub_821BEF78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lha r11,24(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 24));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821c4b70
	if (!ctx.cr0.gt) goto loc_821C4B70;
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// sth r11,24(r31)
	REX_STORE_U16(r31.u32 + 24, ctx.r11.u16);
	// lfs f13,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821c4b48
	if (ctx.cr6.lt) goto loc_821C4B48;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821C4B48:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821c4b58
	if (ctx.cr6.gt) goto loc_821C4B58;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_821C4B58:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lha r5,14(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 14));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x821beff0
	ctx.lr = 0x821C4B70;
	sub_821BEFF0(ctx, base);
loc_821C4B70:
	// lhz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 12);
	// lbz r10,181(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 181);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c4ba0
	if (ctx.cr0.eq) goto loc_821C4BA0;
	// bne cr6,0x821c4bb4
	if (!ctx.cr6.eq) goto loc_821C4BB4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// b 0x821c4ba8
	goto loc_821C4BA8;
loc_821C4BA0:
	// beq cr6,0x821c4bb4
	if (ctx.cr6.eq) goto loc_821C4BB4;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
loc_821C4BA8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82161f20
	ctx.lr = 0x821C4BB4;
	sub_82161F20(ctx, base);
loc_821C4BB4:
	// lhz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821c4bd8
	if (!ctx.cr6.eq) goto loc_821C4BD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821c4bdc
	goto loc_821C4BDC;
loc_821C4BC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82161f68
	ctx.lr = 0x821C4BD8;
	sub_82161F68(ctx, base);
loc_821C4BD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C4BDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821C86B8) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x821C86C0;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r25,r3,15912
	r25.s64 = ctx.r3.s64 + 15912;
	// li r27,0
	r27.s64 = 0;
	// lfs f29,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f29.f64 = double(temp.f32);
	// lfs f30,16688(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16688);
	f30.f64 = double(temp.f32);
loc_821C86EC:
	// subfic r10,r27,0
	ctx.xer.ca = r27.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r27.u64;
	// lwz r8,10244(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 10244);
	// mulli r11,r27,52
	ctx.r11.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(52));
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r10,r10,0,31,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// addi r9,r11,9016
	ctx.r9.s64 = ctx.r11.s64 + 9016;
	// addi r11,r10,47
	ctx.r11.s64 = ctx.r10.s64 + 47;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r25
	r29.u64 = ctx.r11.u64 + r25.u64;
	// lfsx f0,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f30
	f31.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bge cr6,0x821c872c
	if (!ctx.cr6.lt) goto loc_821C872C;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821C872C:
	// mulli r11,r27,176
	ctx.r11.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(176));
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// addi r31,r9,16
	r31.s64 = ctx.r9.s64 + 16;
	// addi r30,r11,16108
	r30.s64 = ctx.r11.s64 + 16108;
	// li r26,2
	r26.s64 = 2;
loc_821C8740:
	// lha r11,-8(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + -8));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821c87a8
	if (ctx.cr6.eq) goto loc_821C87A8;
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821c8770
	if (ctx.cr6.lt) goto loc_821C8770;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
loc_821C8770:
	// stw r11,-4(r30)
	REX_STORE_U32(r30.u32 + -4, ctx.r11.u32);
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r3,r30,-12
	ctx.r3.s64 = r30.s64 + -12;
	// lfs f1,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821621b8
	ctx.lr = 0x821C8788;
	sub_821621B8(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C879C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821c879c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C879C;
loc_821C87A8:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r30,r30,88
	r30.s64 = r30.s64 + 88;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// bne 0x821c8740
	if (!ctx.cr0.eq) goto loc_821C8740;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// ble cr6,0x821c86ec
	if (!ctx.cr6.gt) goto loc_821C86EC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,10148(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 10148);
	// bl 0x82165f00
	ctx.lr = 0x821C87D0;
	sub_82165F00(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821D0018) {
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
	// bl 0x822d4e74
	ctx.lr = 0x821D0020;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r24,-32480(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r31,84(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 84);
	// lwz r30,80(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 80);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d0760
	if (ctx.cr6.eq) goto loc_821D0760;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// lwz r11,508(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 508);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821d0114
	if (!ctx.cr6.eq) goto loc_821D0114;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r31,10984
	ctx.r3.s64 = r31.s64 + 10984;
	// lwz r4,10148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8214c448
	ctx.lr = 0x821D0070;
	sub_8214C448(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d00a8
	if (ctx.cr6.eq) goto loc_821D00A8;
	// lwz r10,10148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d00a8
	if (ctx.cr6.eq) goto loc_821D00A8;
	// lwz r9,10144(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10144);
	// lwz r10,10148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
loc_821D00A8:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r30,r11,-27648
	r30.s64 = ctx.r11.s64 + -27648;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82125e10
	ctx.lr = 0x821D00BC;
	sub_82125E10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82125f50
	ctx.lr = 0x821D00C8;
	sub_82125F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82122f18
	ctx.lr = 0x821D00D0;
	sub_82122F18(ctx, base);
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,10140(r31)
	REX_STORE_U32(r31.u32 + 10140, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,10148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// stw r11,10152(r31)
	REX_STORE_U32(r31.u32 + 10152, ctx.r11.u32);
	// blt cr6,0x821d00f4
	if (ctx.cr6.lt) goto loc_821D00F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10140(r31)
	REX_STORE_U32(r31.u32 + 10140, ctx.r11.u32);
loc_821D00F4:
	// lwz r11,10140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10140);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r11,r11,20028
	ctx.r11.s64 = ctx.r11.s64 + 20028;
	// stw r11,10148(r31)
	REX_STORE_U32(r31.u32 + 10148, ctx.r11.u32);
	// bl 0x821ce0b8
	ctx.lr = 0x821D0110;
	sub_821CE0B8(ctx, base);
	// b 0x821d0760
	goto loc_821D0760;
loc_821D0114:
	// lhz r11,30(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 30);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x821d0128
	if (!ctx.cr6.eq) goto loc_821D0128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d9148
	ctx.lr = 0x821D0128;
	sub_821D9148(ctx, base);
loc_821D0128:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-9536
	ctx.r11.s64 = ctx.r11.s64 + -9536;
	// li r26,0
	r26.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r26,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r26.u32);
	// bl 0x821ca5e8
	ctx.lr = 0x821D0144;
	sub_821CA5E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c5b90
	ctx.lr = 0x821D014C;
	sub_821C5B90(ctx, base);
	// lbz r11,174(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 174);
	// li r23,1
	r23.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d0178
	if (ctx.cr0.eq) goto loc_821D0178;
	// lbz r11,175(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 175);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d0178
	if (!ctx.cr0.eq) goto loc_821D0178;
	// lbz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d018c
	if (!ctx.cr0.eq) goto loc_821D018C;
	// b 0x821d0188
	goto loc_821D0188;
loc_821D0178:
	// stw r26,5548(r31)
	REX_STORE_U32(r31.u32 + 5548, r26.u32);
	// stw r26,5544(r31)
	REX_STORE_U32(r31.u32 + 5544, r26.u32);
	// stw r23,5564(r31)
	REX_STORE_U32(r31.u32 + 5564, r23.u32);
	// stw r23,5560(r31)
	REX_STORE_U32(r31.u32 + 5560, r23.u32);
loc_821D0188:
	// stw r26,5552(r31)
	REX_STORE_U32(r31.u32 + 5552, r26.u32);
loc_821D018C:
	// lis r25,-32168
	r25.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r11,-7176(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -7176);
	// lfs f31,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821d01b0
	if (ctx.cr6.eq) goto loc_821D01B0;
	// mr r30,r23
	r30.u64 = r23.u64;
	// b 0x821d02b0
	goto loc_821D02B0;
loc_821D01B0:
	// lha r11,2(r28)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r28.u32 + 2));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821d0200
	if (ctx.cr6.eq) goto loc_821D0200;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821d02a0
	if (!ctx.cr6.eq) goto loc_821D02A0;
	// lhz r11,30(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 30);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x821d02a0
	if (ctx.cr6.eq) goto loc_821D02A0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,-7072
	r30.s64 = ctx.r11.s64 + -7072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c2f08
	ctx.lr = 0x821D01E4;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d02a0
	if (ctx.cr0.eq) goto loc_821D02A0;
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x821c2f08
	ctx.lr = 0x821D01FC;
	sub_821C2F08(ctx, base);
	// b 0x821d0398
	goto loc_821D0398;
loc_821D0200:
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821d02a0
	if (ctx.cr6.lt) goto loc_821D02A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x821d022c
	if (!ctx.cr6.gt) goto loc_821D022C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821d03a8
	if (ctx.cr6.eq) goto loc_821D03A8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821d0390
	if (ctx.cr6.eq) goto loc_821D0390;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821d02a0
	if (!ctx.cr6.eq) goto loc_821D02A0;
loc_821D022C:
	// lwz r11,5464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d0254
	if (!ctx.cr6.eq) goto loc_821D0254;
	// lbz r11,210(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d0254
	if (!ctx.cr0.eq) goto loc_821D0254;
	// lfs f0,5468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821d0258
	if (ctx.cr6.gt) goto loc_821D0258;
loc_821D0254:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_821D0258:
	// lha r11,74(r28)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r28.u32 + 74));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821d026c
	if (ctx.cr6.eq) goto loc_821D026C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821d0270
	if (!ctx.cr6.eq) goto loc_821D0270;
loc_821D026C:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_821D0270:
	// lwz r11,84(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 84);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821d02a0
	if (!ctx.cr6.eq) goto loc_821D02A0;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r11,r11,22576
	ctx.r11.s64 = ctx.r11.s64 + 22576;
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d02a0
	if (ctx.cr6.eq) goto loc_821D02A0;
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	r29.u64 = ctx.r11.u64 & r29.u64;
loc_821D02A0:
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
loc_821D02B0:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821D02C4;
	sub_821BF940(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d0760
	if (!ctx.cr0.eq) goto loc_821D0760;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821d0760
	if (ctx.cr6.eq) goto loc_821D0760;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d02f8
	if (ctx.cr6.eq) goto loc_821D02F8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821d02f8
	if (ctx.cr6.eq) goto loc_821D02F8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x821d0338
	if (!ctx.cr6.eq) goto loc_821D0338;
loc_821D02F8:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
	// stw r26,68(r31)
	REX_STORE_U32(r31.u32 + 68, r26.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r26,60(r31)
	REX_STORE_U32(r31.u32 + 60, r26.u32);
	// stw r26,48(r31)
	REX_STORE_U32(r31.u32 + 48, r26.u32);
	// stw r26,40(r31)
	REX_STORE_U32(r31.u32 + 40, r26.u32);
	// stw r26,76(r31)
	REX_STORE_U32(r31.u32 + 76, r26.u32);
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
	// stw r26,56(r31)
	REX_STORE_U32(r31.u32 + 56, r26.u32);
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// stw r26,36(r31)
	REX_STORE_U32(r31.u32 + 36, r26.u32);
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
loc_821D0338:
	// li r10,100
	ctx.r10.s64 = 100;
	// addi r9,r31,955
	ctx.r9.s64 = r31.s64 + 955;
	// addi r8,r31,1055
	ctx.r8.s64 = r31.s64 + 1055;
	// addi r11,r31,1356
	ctx.r11.s64 = r31.s64 + 1356;
	// li r27,-1
	r27.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D0350:
	// stbu r27,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, r27.u8);
	ctx.r9.u32 = ea;
	// stbu r27,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, r27.u8);
	ctx.r8.u32 = ea;
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// bge cr6,0x821d036c
	if (!ctx.cr6.lt) goto loc_821D036C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_821D036C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x821d0350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D0350;
	// lbz r11,190(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 190);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d03c4
	if (ctx.cr0.eq) goto loc_821D03C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c9410
	ctx.lr = 0x821D038C;
	sub_821C9410(ctx, base);
	// b 0x821d03d0
	goto loc_821D03D0;
loc_821D0390:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b1b98
	ctx.lr = 0x821D0398;
	sub_821B1B98(ctx, base);
loc_821D0398:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d02a0
	if (ctx.cr0.eq) goto loc_821D02A0;
loc_821D03A0:
	// mr r29,r23
	r29.u64 = r23.u64;
	// b 0x821d02a0
	goto loc_821D02A0;
loc_821D03A8:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lbz r11,26(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 26);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821d02a0
	if (!ctx.cr6.eq) goto loc_821D02A0;
	// b 0x821d03a0
	goto loc_821D03A0;
loc_821D03C4:
	// lwz r11,84(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 84);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821d03d8
	if (!ctx.cr6.eq) goto loc_821D03D8;
loc_821D03D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c31c8
	ctx.lr = 0x821D03D8;
	sub_821C31C8(ctx, base);
loc_821D03D8:
	// lhz r11,2(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821d046c
	if (!ctx.cr6.eq) goto loc_821D046C;
	// lhz r11,10(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d046c
	if (ctx.cr0.eq) goto loc_821D046C;
	// bl 0x82135998
	ctx.lr = 0x821D03F4;
	sub_82135998(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d0408
	if (ctx.cr0.eq) goto loc_821D0408;
	// bl 0x82135c90
	ctx.lr = 0x821D0400;
	sub_82135C90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d0414
	if (ctx.cr0.eq) goto loc_821D0414;
loc_821D0408:
	// bl 0x821d56d0
	ctx.lr = 0x821D040C;
	sub_821D56D0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821d041c
	if (!ctx.cr6.eq) goto loc_821D041C;
loc_821D0414:
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
	// stw r26,36(r31)
	REX_STORE_U32(r31.u32 + 36, r26.u32);
loc_821D041C:
	// bl 0x82136518
	ctx.lr = 0x821D0420;
	sub_82136518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d046c
	if (ctx.cr0.eq) goto loc_821D046C;
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821d046c
	if (!ctx.cr6.eq) goto loc_821D046C;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bne cr6,0x821d046c
	if (!ctx.cr6.eq) goto loc_821D046C;
	// bl 0x822d6060
	ctx.lr = 0x821D0444;
	sub_822D6060(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// divw r11,r3,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// addi r10,r10,-11580
	ctx.r10.s64 = ctx.r10.s64 + -11580;
	// mulli r11,r11,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_821D046C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf278
	ctx.lr = 0x821D0474;
	sub_821BF278(ctx, base);
	// lwz r11,-7176(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + -7176);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821d0494
	if (!ctx.cr6.eq) goto loc_821D0494;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r6,140(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 140));
	// lha r5,100(r31)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r31.u32 + 100));
	// lha r4,88(r31)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r31.u32 + 88));
	// bl 0x821c9d30
	ctx.lr = 0x821D0494;
	sub_821C9D30(ctx, base);
loc_821D0494:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cf708
	ctx.lr = 0x821D04A0;
	sub_821CF708(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cdc78
	ctx.lr = 0x821D04AC;
	sub_821CDC78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c2f08
	ctx.lr = 0x821D04B8;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d0760
	if (ctx.cr0.eq) goto loc_821D0760;
	// lbz r11,181(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 181);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d0598
	if (ctx.cr0.eq) goto loc_821D0598;
	// lfs f0,10584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10584);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10568(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10568);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821d0598
	if (ctx.cr6.gt) goto loc_821D0598;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r30,r11,-11600
	r30.s64 = ctx.r11.s64 + -11600;
	// lwz r11,-11600(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11600);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821d0598
	if (ctx.cr6.eq) goto loc_821D0598;
	// addi r29,r31,15532
	r29.s64 = r31.s64 + 15532;
loc_821D04F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82161ff8
	ctx.lr = 0x821D0504;
	sub_82161FF8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821d051c
	if (!ctx.cr0.eq) goto loc_821D051C;
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821d04f8
	if (!ctx.cr6.eq) goto loc_821D04F8;
	// b 0x821d0598
	goto loc_821D0598;
loc_821D051C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821d0598
	if (ctx.cr6.eq) goto loc_821D0598;
	// lfs f13,10228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10228);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,10488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10488);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x821d0550
	if (!ctx.cr6.lt) goto loc_821D0550;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,10488(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
loc_821D0550:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821D0564;
	sub_821BF940(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821D0578;
	sub_821BF940(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r31,9044
	ctx.r11.s64 = r31.s64 + 9044;
	// stw r26,15908(r31)
	REX_STORE_U32(r31.u32 + 15908, r26.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821D0588:
	// stfs f31,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f31,168(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfsu f31,164(r11)
	ea = 164 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821d0588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D0588;
loc_821D0598:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c8460
	ctx.lr = 0x821D05A0;
	sub_821C8460(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821d05ec
	if (!ctx.cr0.eq) goto loc_821D05EC;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d05ec
	if (ctx.cr6.eq) goto loc_821D05EC;
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d05ec
	if (ctx.cr6.eq) goto loc_821D05EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cd410
	ctx.lr = 0x821D05D0;
	sub_821CD410(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c2f08
	ctx.lr = 0x821D05DC;
	sub_821C2F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d05ec
	if (ctx.cr0.eq) goto loc_821D05EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821cd410
	ctx.lr = 0x821D05EC;
	sub_821CD410(ctx, base);
loc_821D05EC:
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// bl 0x821afe08
	ctx.lr = 0x821D05FC;
	sub_821AFE08(ctx, base);
	// sth r23,8192(r31)
	REX_STORE_U16(r31.u32 + 8192, r23.u16);
	// sth r23,7296(r31)
	REX_STORE_U16(r31.u32 + 7296, r23.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821D0618;
	sub_821BF940(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821D062C;
	sub_821BF940(ctx, base);
	// lbz r11,214(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 214);
	// lbz r10,161(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 161);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r9,188(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,232(r31)
	REX_STORE_U8(r31.u32 + 232, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r9,259(r31)
	REX_STORE_U8(r31.u32 + 259, ctx.r9.u8);
	// bl 0x821bf940
	ctx.lr = 0x821D0658;
	sub_821BF940(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821D066C;
	sub_821BF940(ctx, base);
	// addi r11,r31,160
	ctx.r11.s64 = r31.s64 + 160;
	// li r9,71
	ctx.r9.s64 = 71;
	// subf r8,r11,r31
	ctx.r8.u64 = r31.u64 - ctx.r11.u64;
	// addi r10,r31,372
	ctx.r10.s64 = r31.s64 + 372;
	// addi r8,r8,302
	ctx.r8.s64 = ctx.r8.s64 + 302;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821D0684:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821d06b4
	if (ctx.cr6.eq) goto loc_821D06B4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d06a8
	if (ctx.cr6.eq) goto loc_821D06A8;
	// stb r23,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r23.u8);
	// b 0x821d06ac
	goto loc_821D06AC;
loc_821D06A8:
	// stb r27,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r27.u8);
loc_821D06AC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x821d06b8
	goto loc_821D06B8;
loc_821D06B4:
	// stbu r26,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r26.u8);
	ctx.r10.u32 = ea;
loc_821D06B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r9.u8);
	// bdnz 0x821d0684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D0684;
	// sth r26,7300(r31)
	REX_STORE_U16(r31.u32 + 7300, r26.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c22c0
	ctx.lr = 0x821D06D8;
	sub_821C22C0(ctx, base);
	// sth r26,8196(r31)
	REX_STORE_U16(r31.u32 + 8196, r26.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c22c0
	ctx.lr = 0x821D06E8;
	sub_821C22C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821be3d8
	ctx.lr = 0x821D06F0;
	sub_821BE3D8(ctx, base);
	// lis r3,-256
	ctx.r3.s64 = -16777216;
	// li r4,4
	ctx.r4.s64 = 4;
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// bl 0x821afe08
	ctx.lr = 0x821D0700;
	sub_821AFE08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c66f8
	ctx.lr = 0x821D0708;
	sub_821C66F8(ctx, base);
	// bl 0x821c75f0
	ctx.lr = 0x821D070C;
	sub_821C75F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7c90
	ctx.lr = 0x821D0714;
	sub_821C7C90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c5ed8
	ctx.lr = 0x821D071C;
	sub_821C5ED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cb288
	ctx.lr = 0x821D0724;
	sub_821CB288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c39a8
	ctx.lr = 0x821D072C;
	sub_821C39A8(ctx, base);
	// stw r3,5556(r31)
	REX_STORE_U32(r31.u32 + 5556, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c8df0
	ctx.lr = 0x821D0738;
	sub_821C8DF0(ctx, base);
	// lis r3,255
	ctx.r3.s64 = 16711680;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// bl 0x821afe08
	ctx.lr = 0x821D0748;
	sub_821AFE08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c98b0
	ctx.lr = 0x821D0750;
	sub_821C98B0(ctx, base);
	// lis r3,-1
	ctx.r3.s64 = -65536;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r3,r3,255
	ctx.r3.u64 = ctx.r3.u64 | 255;
	// bl 0x821afe08
	ctx.lr = 0x821D0760;
	sub_821AFE08(ctx, base);
loc_821D0760:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821EC210) {
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
	// lis r31,-32166
	r31.s64 = -2108030976;
	// lwz r11,7708(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 7708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ec284
	if (!ctx.cr6.eq) goto loc_821EC284;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,17344
	ctx.r6.s64 = ctx.r11.s64 + 17344;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,-32768
	ctx.r5.s64 = -32768;
	// ori r4,r4,49152
	ctx.r4.u64 = ctx.r4.u64 | 49152;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821EC258;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ec27c
	if (ctx.cr0.eq) goto loc_821EC27C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,7708(r31)
	REX_STORE_U32(r31.u32 + 7708, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,17324
	ctx.r11.s64 = ctx.r11.s64 + 17324;
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821ec284
	goto loc_821EC284;
loc_821EC27C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7708(r31)
	REX_STORE_U32(r31.u32 + 7708, ctx.r11.u32);
loc_821EC284:
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

DEFINE_REX_FUNC(sub_821EEB00) {
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
	// bl 0x821ec9f8
	ctx.lr = 0x821EEB1C;
	sub_821EC9F8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r30,r11,-32032
	r30.s64 = ctx.r11.s64 + -32032;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f2bf0
	ctx.lr = 0x821EEB34;
	sub_821F2BF0(ctx, base);
	// lfs f11,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ed290
	ctx.lr = 0x821EEB58;
	sub_821ED290(ctx, base);
	// fsubs f13,f7,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// li r9,4
	ctx.r9.s64 = 4;
	// fadds f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fsubs f12,f6,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f1,128(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fadds f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f1,88(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fadds f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f1,48(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f0,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// addi r8,r31,64
	ctx.r8.s64 = r31.s64 + 64;
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// fsubs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f0,-13044(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f7,f4,f9
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// stfs f8,40(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fadds f12,f6,f10
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f11,80(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f12,124(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
loc_821EEBF4:
	// lbzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// stfs f13,84(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821eebf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EEBF4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r11,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,72(r7)
	REX_STORE_U32(ctx.r7.u32 + 72, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,76(r7)
	REX_STORE_U32(ctx.r7.u32 + 76, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r11,112(r7)
	REX_STORE_U32(ctx.r7.u32 + 112, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r11,116(r7)
	REX_STORE_U32(ctx.r7.u32 + 116, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r11,152(r7)
	REX_STORE_U32(ctx.r7.u32 + 152, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r11,156(r7)
	REX_STORE_U32(ctx.r7.u32 + 156, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lbz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 76);
	// mulli r10,r10,144
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(144));
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821f2c50
	ctx.lr = 0x821EEC94;
	sub_821F2C50(ctx, base);
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

DEFINE_REX_FUNC(sub_821F7958) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,-32480
	ctx.r11.s64 = ctx.r11.s64 + -32480;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// ld r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x821f7890
	sub_821F7890(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F7C34) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F7C4C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F7C64) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F7C68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821F8240) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f8250
	if (!ctx.cr6.eq) goto loc_821F8250;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
loc_821F8250:
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// beq cr6,0x821f82a4
	if (ctx.cr6.eq) goto loc_821F82A4;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// li r9,8
	ctx.r9.s64 = 8;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821f82a0
	if (ctx.cr0.eq) goto loc_821F82A0;
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_821F8280:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821f82a0
	if (!ctx.cr6.gt) goto loc_821F82A0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lbzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// extsb. r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821f8280
	if (!ctx.cr0.eq) goto loc_821F8280;
loc_821F82A0:
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
loc_821F82A4:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// sth r8,40(r3)
	REX_STORE_U16(ctx.r3.u32 + 40, ctx.r8.u16);
	// li r11,42
	ctx.r11.s64 = 42;
	// sth r8,42(r3)
	REX_STORE_U16(ctx.r3.u32 + 42, ctx.r8.u16);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// stw r8,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r8.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stb r8,37(r3)
	REX_STORE_U8(ctx.r3.u32 + 37, ctx.r8.u8);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// lfs f0,1996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821F82D4:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821f82d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F82D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FA8E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm. r11,r5,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fa918
	if (ctx.cr0.eq) goto loc_821FA918;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r10,r3,268
	ctx.r10.s64 = ctx.r3.s64 + 268;
loc_821FA8FC:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821fa908
	if (ctx.cr0.eq) goto loc_821FA908;
	// stfs f1,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_821FA908:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x821fa8fc
	if (!ctx.cr0.eq) goto loc_821FA8FC;
	// blr 
	return;
loc_821FA918:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r5,67
	ctx.r11.s64 = ctx.r5.s64 + 67;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FE000) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// bne cr6,0x821fe010
	if (!ctx.cr6.eq) goto loc_821FE010;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821fe034
	goto loc_821FE034;
loc_821FE010:
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// bne cr6,0x821fe020
	if (!ctx.cr6.eq) goto loc_821FE020;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x821fe034
	goto loc_821FE034;
loc_821FE020:
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// bne cr6,0x821fe02c
	if (!ctx.cr6.eq) goto loc_821FE02C;
	// li r4,2
	ctx.r4.s64 = 2;
loc_821FE02C:
	// cmplwi cr6,r4,12
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_821FE034:
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stw r7,384(r3)
	REX_STORE_U32(ctx.r3.u32 + 384, ctx.r7.u32);
	// stdx r10,r8,r3
	REX_STORE_U64(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u64);
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FF158) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r3,r11,772
	ctx.r3.s64 = ctx.r11.s64 + 772;
	// b 0x822c84c8
	sub_822C84C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FF240) {
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
	// bl 0x822d4e84
	ctx.lr = 0x821FF248;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x821ff310
	if (!ctx.cr6.lt) goto loc_821FF310;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r11,r11,13064
	ctx.r11.s64 = ctx.r11.s64 + 13064;
	// addi r30,r10,13128
	r30.s64 = ctx.r10.s64 + 13128;
	// addi r29,r11,32
	r29.s64 = ctx.r11.s64 + 32;
	// rlwinm r28,r3,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,1856(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1856);
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821ff310
	if (ctx.cr6.eq) goto loc_821FF310;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,21096
	ctx.r6.s64 = ctx.r10.s64 + 21096;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x821f7d50
	ctx.lr = 0x821FF2B0;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ff2c8
	if (ctx.cr0.eq) goto loc_821FF2C8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,21076
	ctx.r10.s64 = ctx.r10.s64 + 21076;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821ff2cc
	goto loc_821FF2CC;
loc_821FF2C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FF2CC:
	// lwz r10,1856(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1856);
	// stwx r10,r28,r29
	REX_STORE_U32(r28.u32 + r29.u32, ctx.r10.u32);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stw r27,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, r27.u32);
	// stfs f9,80(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f10,84(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f11,88(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f12,92(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f13,96(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f9,112(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f12,116(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
loc_821FF310:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82202EB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82202EB8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r9,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r9,332(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,15152
	r30.s64 = ctx.r11.s64 + 15152;
	// stw r8,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lis r3,-32165
	ctx.r3.s64 = -2107965440;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r3,r3,15284
	ctx.r3.s64 = ctx.r3.s64 + 15284;
	// stw r31,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stw r31,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// stw r31,128(r30)
	REX_STORE_U32(r30.u32 + 128, r31.u32);
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x82204700
	ctx.lr = 0x82202F34;
	sub_82204700(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r10,15024
	ctx.r10.s64 = ctx.r10.s64 + 15024;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82202F4C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82202f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82202F4C;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82202F60:
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82202f60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82202F60;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r30,128
	ctx.r3.s64 = r30.s64 + 128;
	// stw r11,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82205BB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82205BC0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r27,-1
	r27.s64 = -1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82205c0c
	if (!ctx.cr6.eq) goto loc_82205C0C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r11,18752
	ctx.r3.s64 = ctx.r11.s64 + 18752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x82205e08
	ctx.lr = 0x82205BFC;
	sub_82205E08(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82205c74
	if (!ctx.cr6.eq) goto loc_82205C74;
	// b 0x82205ca4
	goto loc_82205CA4;
loc_82205C0C:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82205c74
	if (ctx.cr6.lt) goto loc_82205C74;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82205c3c
	if (!ctx.cr6.eq) goto loc_82205C3C;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82205c3c
	if (!ctx.cr6.eq) goto loc_82205C3C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82205c9c
	if (ctx.cr6.eq) goto loc_82205C9C;
loc_82205C3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822059d0
	ctx.lr = 0x82205C70;
	sub_822059D0(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_82205C74:
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r30.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r29,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r29.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r27,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r27.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r28,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r28.u32);
	// b 0x82205ca0
	goto loc_82205CA0;
loc_82205C9C:
	// stw r28,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r28.u32);
loc_82205CA0:
	// lwz r3,180(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_82205CA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822094C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1728(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1728);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82209740) {
	REX_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824d3fec
	__imp__XamEnumerate(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82209808) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,4159
	ctx.r11.s64 = ctx.r11.s64 + 4159;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,1,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFE000;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// li r9,170
	ctx.r9.s64 = 170;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r11,r8,169
	ctx.r11.s64 = ctx.r8.s64 + 169;
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82209848
	if (!ctx.cr6.gt) goto loc_82209848;
	// addi r10,r11,169
	ctx.r10.s64 = ctx.r11.s64 + 169;
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// b 0x8220984c
	goto loc_8220984C;
loc_82209848:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8220984C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82209860
	if (!ctx.cr6.gt) goto loc_82209860;
	// addi r7,r10,169
	ctx.r7.s64 = ctx.r10.s64 + 169;
	// divwu r9,r7,r9
	ctx.r9.u64 = uint32_t(ctx.r9.u32 ? ctx.r7.u32 / ctx.r9.u32 : 0);
	// b 0x82209864
	goto loc_82209864;
loc_82209860:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82209864:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// rldicr r3,r11,12,51
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 12) & 0xFFFFFFFFFFFFF000;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C588) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r31,-32161
	r31.s64 = -2107703296;
	// lwz r11,1544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1544);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220c604
	if (ctx.cr0.eq) goto loc_8220C604;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8220C5C0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8220c5c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8220C5C0;
	// lwz r3,-12948(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -12948);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220c608
	if (!ctx.cr6.eq) goto loc_8220C608;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,4098
	ctx.r3.u64 = ctx.r3.u64 | 4098;
	// bl 0x8220de28
	ctx.lr = 0x8220C5FC;
	sub_8220DE28(ctx, base);
	// stw r3,-12948(r31)
	REX_STORE_U32(r31.u32 + -12948, ctx.r3.u32);
	// b 0x8220c608
	goto loc_8220C608;
loc_8220C604:
	// lwz r3,-12948(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -12948);
loc_8220C608:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_82210670) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822107A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,10468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10468);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,10472(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10472);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10464(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10464);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10476(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctidz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f10
	ctx.f13.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-4(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// rlwimi r10,r9,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211748) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10688);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,30
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10688(r3)
	REX_STORE_U32(ctx.r3.u32 + 10688, ctx.r4.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212158) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,12382(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 12382);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212360) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1168);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212850) {
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
	// lwz r31,12832(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12832);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82212874
	if (ctx.cr6.eq) goto loc_82212874;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215e78
	ctx.lr = 0x82212874;
	sub_82215E78(ctx, base);
loc_82212874:
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

DEFINE_REX_FUNC(sub_82213C28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82213C30;
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82213cec
	if (ctx.cr6.eq) goto loc_82213CEC;
	// lwz r11,11024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11024);
	// lwz r10,11036(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11036);
	// subf r9,r4,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82213cec
	if (!ctx.cr6.lt) goto loc_82213CEC;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82213c88
	if (!ctx.cr0.eq) goto loc_82213C88;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82213c88
	if (!ctx.cr6.eq) goto loc_82213C88;
	// lwz r11,13600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82213cec
	if (!ctx.cr6.eq) goto loc_82213CEC;
	// bl 0x82215008
	ctx.lr = 0x82213C88;
	sub_82215008(ctx, base);
loc_82213C88:
	// lwz r11,11024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// lwz r10,11036(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// subf r9,r30,r10
	ctx.r9.u64 = ctx.r10.u64 - r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82213cec
	if (!ctx.cr6.lt) goto loc_82213CEC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221a3d0
	ctx.lr = 0x82213CB4;
	sub_8221A3D0(ctx, base);
	// b 0x82213cc8
	goto loc_82213CC8;
loc_82213CB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221a4c8
	ctx.lr = 0x82213CC0;
	sub_8221A4C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82213ce4
	if (ctx.cr0.eq) goto loc_82213CE4;
loc_82213CC8:
	// lwz r11,11024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11024);
	// lwz r10,11036(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11036);
	// subf r9,r30,r10
	ctx.r9.u64 = ctx.r10.u64 - r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82213cb8
	if (ctx.cr6.lt) goto loc_82213CB8;
loc_82213CE4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221a400
	ctx.lr = 0x82213CEC;
	sub_8221A400(ctx, base);
loc_82213CEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82217470) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x82217478;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x82217480;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// bl 0x824d44fc
	ctx.lr = 0x8221749C;
	__imp__VdGetCurrentDisplayGamma(ctx, base);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,6232
	ctx.r10.s64 = ctx.r10.s64 + 6232;
	// addi r9,r9,-11416
	ctx.r9.s64 = ctx.r9.s64 + -11416;
	// rlwinm r8,r31,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 11) & 0xFFFFF800;
	// lis r7,-32163
	ctx.r7.s64 = -2107834368;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r7,-11424
	ctx.r9.s64 = ctx.r7.s64 + -11424;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822174e0
	if (!ctx.cr6.eq) goto loc_822174E0;
	// lfsx f0,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// beq cr6,0x822175e0
	if (ctx.cr6.eq) goto loc_822175E0;
loc_822174E0:
	// stfsx f2,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// lfd f29,4000(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 4000);
	// addi r29,r28,-2
	r29.s64 = r28.s64 + -2;
	// lfd f30,28000(r10)
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 28000);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f28,27992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 27992);
	f28.f64 = double(temp.f32);
	// b 0x8221751c
	goto loc_8221751C;
loc_82217514:
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8221751C:
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * f28.f64));
	// bne cr6,0x8221754c
	if (!ctx.cr6.eq) goto loc_8221754C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82217310
	ctx.lr = 0x82217544;
	sub_82217310(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8221754C:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82217588
	if (ctx.cr6.eq) goto loc_82217588;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x8221757c
	if (ctx.cr6.eq) goto loc_8221757C;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x8221757c
	if (!ctx.cr6.eq) goto loc_8221757C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82217570
	if (!ctx.cr6.eq) goto loc_82217570;
	// fdivs f2,f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(f31.f64 / ctx.f2.f64));
loc_82217570:
	// bl 0x822d5b48
	ctx.lr = 0x82217574;
	sub_822D5B48(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x82217590
	goto loc_82217590;
loc_8221757C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822173c0
	ctx.lr = 0x82217584;
	sub_822173C0(ctx, base);
	// b 0x82217590
	goto loc_82217590;
loc_82217588:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82217310
	ctx.lr = 0x82217590;
	sub_82217310(ctx, base);
loc_82217590:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822175a0
	if (ctx.cr6.eq) goto loc_822175A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82217310
	ctx.lr = 0x822175A0;
	sub_82217310(ctx, base);
loc_822175A0:
	// fmadd f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = std::fma(ctx.f1.f64, f30.f64, f29.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822175c0
	if (!ctx.cr6.lt) goto loc_822175C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822175cc
	goto loc_822175CC;
loc_822175C0:
	// cmpwi cr6,r11,1023
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1023, ctx.xer);
	// ble cr6,0x822175cc
	if (!ctx.cr6.gt) goto loc_822175CC;
	// li r11,1023
	ctx.r11.s64 = 1023;
loc_822175CC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sthu r11,2(r29)
	ea = 2 + r29.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r29.u32 = ea;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(r31.s32, 1024, ctx.xer);
	// blt cr6,0x82217514
	if (ctx.cr6.lt) goto loc_82217514;
loc_822175E0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x822175F0;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822201E8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,11068(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11068);
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r10,10548(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// lbz r9,11071(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 11071);
	// ld r8,40(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// rlwinm r10,r10,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stb r11,11068(r3)
	REX_STORE_U8(ctx.r3.u32 + 11068, ctx.r11.u8);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,13080(r3)
	REX_STORE_U32(ctx.r3.u32 + 13080, ctx.r10.u32);
	// or r11,r8,r12
	ctx.r11.u64 = ctx.r8.u64 | ctx.r12.u64;
	// beq 0x8222023c
	if (ctx.cr0.eq) goto loc_8222023C;
	// lwz r10,10368(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10368);
	// lwz r9,13552(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 13552);
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8222023c
	if (ctx.cr6.eq) goto loc_8222023C;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
loc_8222023C:
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822213F0) {
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
	// blt cr6,0x8222140c
	if (ctx.cr6.lt) goto loc_8222140C;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
loc_8222140C:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x82221418
	if (!ctx.cr6.eq) goto loc_82221418;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_82221418:
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
	// beq cr6,0x82221448
	if (ctx.cr6.eq) goto loc_82221448;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x82221448
	if (ctx.cr6.eq) goto loc_82221448;
	// cmpwi cr6,r9,37
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 37, ctx.xer);
	// bne cr6,0x8222144c
	if (!ctx.cr6.eq) goto loc_8222144C;
loc_82221448:
	// li r8,8
	ctx.r8.s64 = 8;
loc_8222144C:
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

DEFINE_REX_FUNC(sub_82223138) {
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
	// bl 0x822d4e80
	ctx.lr = 0x82223140;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x823cd118
	ctx.lr = 0x82223164;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82223174
	if (!ctx.cr0.eq) goto loc_82223174;
loc_8222316C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82223268
	goto loc_82223268;
loc_82223174:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82222b40
	ctx.lr = 0x82223198;
	sub_82222B40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82223264
	if (!ctx.cr6.eq) goto loc_82223264;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x822231c8
	if (ctx.cr6.eq) goto loc_822231C8;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// bne cr6,0x822231cc
	if (!ctx.cr6.eq) goto loc_822231CC;
loc_822231C8:
	// li r29,1
	r29.s64 = 1;
loc_822231CC:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82223790
	ctx.lr = 0x822231DC;
	sub_82223790(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822231f4
	if (!ctx.cr0.eq) goto loc_822231F4;
loc_822231E4:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x822231F0;
	sub_823CD250(ctx, base);
	// b 0x8222316c
	goto loc_8222316C;
loc_822231F4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// ble cr6,0x82223210
	if (!ctx.cr6.gt) goto loc_82223210;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82223740
	ctx.lr = 0x8222320C;
	sub_82223740(ctx, base);
	// b 0x822231e4
	goto loc_822231E4;
loc_82223210:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82223258
	if (ctx.cr6.eq) goto loc_82223258;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// rlwimi r3,r10,0,0,19
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lwz r10,-7296(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -7296);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82223264
	if (!ctx.cr6.eq) goto loc_82223264;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-7296(r11)
	REX_STORE_U32(ctx.r11.u32 + -7296, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// clrlwi r11,r11,15
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFF;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// b 0x82223264
	goto loc_82223264;
loc_82223258:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r3,r11,0,0,19
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_82223264:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82223268:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82228110) {
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
	// bl 0x822d4e5c
	ctx.lr = 0x82228118;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// ld r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r27,32(r3)
	r27.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r28,24(r3)
	r28.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// ld r30,16(r3)
	r30.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// ld r29,8(r3)
	r29.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82228160
	if (ctx.cr6.eq) goto loc_82228160;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x8221ead0
	ctx.lr = 0x8222815C;
	sub_8221EAD0(ctx, base);
	// std r26,0(r31)
	REX_STORE_U64(r31.u32 + 0, r26.u64);
loc_82228160:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(r29.u64, 0, ctx.xer);
	// beq cr6,0x82228180
	if (ctx.cr6.eq) goto loc_82228180;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221ead0
	ctx.lr = 0x8222817C;
	sub_8221EAD0(ctx, base);
	// std r26,8(r31)
	REX_STORE_U64(r31.u32 + 8, r26.u64);
loc_82228180:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// beq cr6,0x82228260
	if (ctx.cr6.eq) goto loc_82228260;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822281a4
	if (ctx.cr6.eq) goto loc_822281A4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221f868
	ctx.lr = 0x822281A0;
	sub_8221F868(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822281A4:
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822281c8
	if (ctx.cr6.eq) goto loc_822281C8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e3a8
	ctx.lr = 0x822281C4;
	sub_8221E3A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_822281C8:
	// clrldi r11,r30,52
	ctx.r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822281e8
	if (ctx.cr6.eq) goto loc_822281E8;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x822281E8;
	sub_8221E738(ctx, base);
loc_822281E8:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82228208
	if (ctx.cr6.eq) goto loc_82228208;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82228208;
	sub_8221E738(ctx, base);
loc_82228208:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	ctx.r11.u64 = r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82228234
	if (ctx.cr6.eq) goto loc_82228234;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82228234;
	sub_8221E738(ctx, base);
loc_82228234:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8222825c
	if (ctx.cr6.eq) goto loc_8222825C;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x8222825C;
	sub_8221E738(ctx, base);
loc_8222825C:
	// std r26,16(r31)
	REX_STORE_U64(r31.u32 + 16, r26.u64);
loc_82228260:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// beq cr6,0x822282b0
	if (ctx.cr6.eq) goto loc_822282B0;
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82228280
	if (ctx.cr6.eq) goto loc_82228280;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e978
	ctx.lr = 0x82228280;
	sub_8221E978(ctx, base);
loc_82228280:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	ctx.r11.u64 = r28.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822282ac
	if (ctx.cr6.eq) goto loc_822282AC;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x822282AC;
	sub_8221E738(ctx, base);
loc_822282AC:
	// std r26,24(r31)
	REX_STORE_U64(r31.u32 + 24, r26.u64);
loc_822282B0:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(r27.u64, 0, ctx.xer);
	// beq cr6,0x82228374
	if (ctx.cr6.eq) goto loc_82228374;
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x822282e0
	if (ctx.cr6.eq) goto loc_822282E0;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x822282E0;
	sub_8221E738(ctx, base);
loc_822282E0:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82228300
	if (ctx.cr6.eq) goto loc_82228300;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e7f8
	ctx.lr = 0x82228300;
	sub_8221E7F8(ctx, base);
loc_82228300:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82228328
	if (ctx.cr6.eq) goto loc_82228328;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82228328;
	sub_8221E738(ctx, base);
loc_82228328:
	// clrldi r11,r27,26
	ctx.r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82228348
	if (ctx.cr6.eq) goto loc_82228348;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221e738
	ctx.lr = 0x82228348;
	sub_8221E738(ctx, base);
loc_82228348:
	// rldicr r11,r27,0,1
	ctx.r11.u64 = __builtin_rotateleft64(r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82228370
	if (ctx.cr6.eq) goto loc_82228370;
	// lbz r11,11072(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11072);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82228368
	if (!ctx.cr0.eq) goto loc_82228368;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82228370
	if (ctx.cr0.eq) goto loc_82228370;
loc_82228368:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8221a770
	ctx.lr = 0x82228370;
	sub_8221A770(ctx, base);
loc_82228370:
	// std r26,32(r31)
	REX_STORE_U64(r31.u32 + 32, r26.u64);
loc_82228374:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r24,12812(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 12812);
	// addi r23,r31,12498
	r23.s64 = r31.s64 + 12498;
	// clrlwi r22,r18,26
	r22.u64 = r18.u32 & 0x3F;
	// addi r20,r11,22128
	r20.s64 = ctx.r11.s64 + 22128;
loc_82228388:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822283a0
	if (!ctx.cr6.gt) goto loc_822283A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215008
	ctx.lr = 0x822283A0;
	sub_82215008(ctx, base);
loc_822283A0:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r27,r19
	r27.u64 = r19.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r19,65535
	ctx.cr6.compare<uint32_t>(r19.u32, 65535, ctx.xer);
	// stwu r17,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r17.u32);
	ctx.r3.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// ble cr6,0x822283dc
	if (!ctx.cr6.gt) goto loc_822283DC;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r27,r10,r11
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_822283DC:
	// lwz r10,24(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 24);
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,12563(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 12563);
	// rlwinm r7,r27,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,0(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// subfe r5,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbzx r4,r23,r8
	ctx.r4.u64 = REX_LOAD_U8(r23.u32 + ctx.r8.u32);
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwimi r4,r5,8,23,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x100) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r11,r6,1,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xC0000000;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r5,r27,8
	ctx.r5.u64 = r27.u32 & 0xFFFFFF;
	// rlwinm r6,r6,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// andi. r26,r4,319
	r26.u64 = ctx.r4.u64 & 319;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// or r30,r7,r22
	r30.u64 = ctx.r7.u64 | r22.u64;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// or r29,r5,r11
	r29.u64 = ctx.r5.u64 | ctx.r11.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82228460
	if (ctx.cr0.eq) goto loc_82228460;
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,1,8,30
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r29,r8,r11
	r29.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82228460:
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82228490
	if (!ctx.cr0.eq) goto loc_82228490;
	// lis r11,-16381
	ctx.r11.s64 = -1073545216;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// stwu r11,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r25.u32 = ea;
	// stwu r26,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, r26.u32);
	r25.u32 = ea;
	// stwu r30,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, r30.u32);
	r25.u32 = ea;
	// stwu r28,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, r28.u32);
	r25.u32 = ea;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// b 0x82228554
	goto loc_82228554;
loc_82228490:
	// lwz r11,13628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13628);
	// addi r3,r31,13616
	ctx.r3.s64 = r31.s64 + 13616;
	// lwz r10,13632(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13632);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822284b0
	if (!ctx.cr6.gt) goto loc_822284B0;
	// bl 0x82214938
	ctx.lr = 0x822284AC;
	sub_82214938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822284B0:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13628(r31)
	REX_STORE_U32(r31.u32 + 13628, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lis r5,-16383
	ctx.r5.s64 = -1073676288;
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// ori r7,r7,24576
	ctx.r7.u64 = ctx.r7.u64 | 24576;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r8,r5,23041
	ctx.r8.u64 = ctx.r5.u64 | 23041;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r4,26
	ctx.r4.s64 = 26;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r26,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r5.u32 = ea;
	// ori r10,r9,17921
	ctx.r10.u64 = ctx.r9.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r5.u32 = ea;
	// stwu r28,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r5.u32 = ea;
	// stwu r29,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_82228554:
	// subf. r10,r27,r19
	ctx.r10.u64 = r19.u64 - r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// beq 0x8222857c
	if (ctx.cr0.eq) goto loc_8222857C;
	// addi r9,r20,4
	ctx.r9.s64 = r20.s64 + 4;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r9,r11,r27
	ctx.r9.u64 = r27.u64 - ctx.r11.u64;
	// add r19,r11,r10
	r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r21,r9,r21
	r21.u64 = ctx.r9.u64 + r21.u64;
	// b 0x82228388
	goto loc_82228388;
loc_8222857C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_8223ADB0) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82240568
	ctx.lr = 0x8223ADC4;
	sub_82240568(ctx, base);
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

DEFINE_REX_FUNC(sub_8223B680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8223B688;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8223b6fc
	if (ctx.cr6.eq) goto loc_8223B6FC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223b6b4
	if (!ctx.cr6.eq) goto loc_8223B6B4;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
loc_8223B6B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// bl 0x823cd980
	ctx.lr = 0x8223B6D0;
	sub_823CD980(ctx, base);
	// li r10,259
	ctx.r10.s64 = 259;
	// stw r28,4(r29)
	REX_STORE_U32(r29.u32 + 4, r28.u32);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223b708
	if (ctx.cr6.eq) goto loc_8223B708;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x8223b70c
	goto loc_8223B70C;
loc_8223B6FC:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,122
	r28.u64 = r28.u64 | 122;
	// b 0x8223b710
	goto loc_8223B710;
loc_8223B708:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_8223B70C:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
loc_8223B710:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8223DC78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x8223DC80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// ori r28,r28,87
	r28.u64 = r28.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223dce0
	if (ctx.cr6.eq) goto loc_8223DCE0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_8223DCA4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8223d420
	ctx.lr = 0x8223DCB0;
	sub_8223D420(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223dce0
	if (ctx.cr0.eq) goto loc_8223DCE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DCC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8223dce0
	if (ctx.cr0.lt) goto loc_8223DCE0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x8223dca4
	if (ctx.cr6.lt) goto loc_8223DCA4;
loc_8223DCE0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82242150) {
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
	// bl 0x822d4e70
	ctx.lr = 0x82242158;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82243bb0
	ctx.lr = 0x82242194;
	sub_82243BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82242624
	if (!ctx.cr6.eq) goto loc_82242624;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82243c60
	ctx.lr = 0x822421B4;
	sub_82243C60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82242624
	if (!ctx.cr6.eq) goto loc_82242624;
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r31,320
	r25.s64 = r31.s64 + 320;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r31,256
	ctx.r5.s64 = r31.s64 + 256;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822417b0
	ctx.lr = 0x822421E0;
	sub_822417B0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r29,r31,128
	r29.s64 = r31.s64 + 128;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r28,r31,64
	r28.s64 = r31.s64 + 64;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// subf r4,r9,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// subf r27,r3,r11
	r27.u64 = ctx.r11.u64 - ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82244348
	ctx.lr = 0x82242220;
	sub_82244348(ctx, base);
	// lwz r23,96(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8224225c
	if (!ctx.cr6.gt) goto loc_8224225C;
	// addi r10,r23,-1
	ctx.r10.s64 = r23.s64 + -1;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82242240:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82242240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242240;
loc_8224225C:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r24,r31,384
	r24.s64 = r31.s64 + 384;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r24,-8
	ctx.r11.s64 = r24.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82242270:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82242270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242270;
	// addi r30,r31,448
	r30.s64 = r31.s64 + 448;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82241f38
	ctx.lr = 0x822422A8;
	sub_82241F38(ctx, base);
	// addi r11,r23,64
	ctx.r11.s64 = r23.s64 + 64;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r23,80
	ctx.r9.s64 = r23.s64 + 80;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// subfic r11,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stwx r8,r7,r31
	REX_STORE_U32(ctx.r7.u32 + r31.u32, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r5,r4,r31
	REX_STORE_U32(ctx.r4.u32 + r31.u32, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt cr6,0x82242378
	if (ctx.cr6.lt) goto loc_82242378;
	// addi r8,r23,1
	ctx.r8.s64 = r23.s64 + 1;
	// addi r4,r22,-2
	ctx.r4.s64 = r22.s64 + -2;
	// mr r31,r25
	r31.u64 = r25.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82242300:
	// lwz r5,-64(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + -64);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf. r8,r11,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x8224235c
	if (ctx.cr0.lt) goto loc_8224235C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// addi r10,r11,-15
	ctx.r10.s64 = ctx.r11.s64 + -15;
	// clrlwi r29,r5,16
	r29.u64 = ctx.r5.u32 & 0xFFFF;
	// sthu r5,2(r4)
	ea = 2 + ctx.r4.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r4.u32 = ea;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// slw r10,r29,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r5.u64 = static_cast<uint64_t>(16) - ctx.r8.u64;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// slw r11,r7,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// subfic r11,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r8.u64;
	// b 0x82242370
	goto loc_82242370;
loc_8224235C:
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
loc_82242370:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x82242300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82242300;
loc_82242378:
	// lwz r27,108(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82242460
	if (!ctx.cr6.gt) goto loc_82242460;
loc_82242388:
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r27.s32, ctx.xer);
	// bge cr6,0x82242460
	if (!ctx.cr6.lt) goto loc_82242460;
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r8,32
	ctx.r8.s64 = 32;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bgt cr6,0x822423a8
	if (ctx.cr6.gt) goto loc_822423A8;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_822423A8:
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8224244c
	if (!ctx.cr6.gt) goto loc_8224244C;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r31,-4
	r28.s64 = r31.s64 + -4;
	// add r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 + r22.u64;
	// addi r31,r5,-2
	r31.s64 = ctx.r5.s64 + -2;
loc_822423C8:
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r27.s32, ctx.xer);
	// bge cr6,0x8224244c
	if (!ctx.cr6.lt) goto loc_8224244C;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8224262c
	if (ctx.cr6.lt) goto loc_8224262C;
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// srw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sthu r5,2(r31)
	ea = 2 + r31.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	r31.u32 = ea;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// addi r11,r9,-15
	ctx.r11.s64 = ctx.r9.s64 + -15;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r5,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfe r5,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r11,16
	ctx.r11.s64 = 16;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// bne cr6,0x82242444
	if (!ctx.cr6.eq) goto loc_82242444;
loc_8224242C:
	// addi r29,r29,-32
	r29.s64 = r29.s64 + -32;
	// lwzu r7,4(r28)
	ea = 4 + r28.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// li r8,32
	ctx.r8.s64 = 32;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bgt cr6,0x82242444
	if (ctx.cr6.gt) goto loc_82242444;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_82242444:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x822423c8
	if (ctx.cr6.gt) goto loc_822423C8;
loc_8224244C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(r26.s32, r23.s32, ctx.xer);
	// blt cr6,0x82242388
	if (ctx.cr6.lt) goto loc_82242388;
loc_82242460:
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r27.s32, ctx.xer);
	// bge cr6,0x822424d0
	if (!ctx.cr6.lt) goto loc_822424D0;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,0
	ctx.r5.s64 = 0;
	// add r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 + r22.u64;
	// ori r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 65535;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_82242480:
	// subfic r5,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r5.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srw r10,r4,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r5.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// sthu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r7.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// slw r11,r5,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// xor r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// addi r5,r9,-15
	ctx.r5.s64 = ctx.r9.s64 + -15;
	// li r11,16
	ctx.r11.s64 = 16;
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r5.u64;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r27.s32, ctx.xer);
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// blt cr6,0x82242480
	if (ctx.cr6.lt) goto loc_82242480;
loc_822424D0:
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82242620
	if (!ctx.cr6.gt) goto loc_82242620;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// slw r7,r11,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// lhzx r6,r8,r22
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + r22.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// and r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 & ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthx r9,r8,r22
	REX_STORE_U16(ctx.r8.u32 + r22.u32, ctx.r9.u16);
	// bge 0x82242510
	if (!ctx.cr0.lt) goto loc_82242510;
	// li r11,14
	ctx.r11.s64 = 14;
loc_82242510:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lis r8,-32172
	ctx.r8.s64 = -2108424192;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// addi r6,r8,-22004
	ctx.r6.s64 = ctx.r8.s64 + -22004;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// xor r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// lwz r10,-22004(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -22004);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// srawi r4,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 15;
	// lwz r8,8(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// clrlwi r3,r7,17
	ctx.r3.u64 = ctx.r7.u32 & 0x7FFF;
	// lwz r7,12(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// and r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 & ctx.r6.u64;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// lhzx r31,r11,r22
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + r22.u32);
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// slw r6,r4,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// xor r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r4,r6,-1
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// xor r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// xor r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// xor r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r5,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x2;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// xor r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// xor r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// srawi r3,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 8;
	// xor r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// xor r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// srawi r5,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// xor r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// srawi r3,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 8;
	// xor r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// xor r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// xor r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// xor r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// and r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 & ctx.r10.u64;
	// or r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 | r31.u64;
	// sthx r4,r11,r22
	REX_STORE_U16(ctx.r11.u32 + r22.u32, ctx.r4.u16);
loc_82242620:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82242624:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ec0
	return;
loc_8224262C:
	// subfic r5,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r5.u64 = static_cast<uint64_t>(32) - ctx.r8.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// srw r8,r7,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// b 0x8224242c
	goto loc_8224242C;
}

DEFINE_REX_FUNC(sub_822555B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822555C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225560c
	if (!ctx.cr6.gt) goto loc_8225560C;
	// li r30,0
	r30.s64 = 0;
loc_822555E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x822d7938
	ctx.lr = 0x822555F0;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82255618
	if (ctx.cr0.eq) goto loc_82255618;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822555e0
	if (ctx.cr6.lt) goto loc_822555E0;
loc_8225560C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82255610:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82255618:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82255610
	goto loc_82255610;
}

DEFINE_REX_FUNC(sub_82256548) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23576(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23576);
	// bl 0x82246920
	ctx.lr = 0x82256560;
	sub_82246920(ctx, base);
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

DEFINE_REX_FUNC(sub_82257030) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82256fb0
	sub_82256FB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822571B8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822571e0
	if (!ctx.cr6.eq) goto loc_822571E0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8225720c
	goto loc_8225720C;
loc_822571E0:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x822571EC;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82257200
	if (!ctx.cr0.eq) goto loc_82257200;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x8225720c
	goto loc_8225720C;
loc_82257200:
	// bl 0x8225ca00
	ctx.lr = 0x82257204;
	sub_8225CA00(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225720C:
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

DEFINE_REX_FUNC(sub_82258868) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82258870;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822588c4
	if (ctx.cr6.lt) goto loc_822588C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-344
	r30.s64 = ctx.r11.s64 + -344;
loc_82258888:
	// rlwinm r31,r4,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	// bl 0x82258790
	ctx.lr = 0x822588AC;
	sub_82258790(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822588d0
	if (!ctx.cr0.lt) goto loc_822588D0;
	// addi r11,r30,12
	ctx.r11.s64 = r30.s64 + 12;
	// lwzx r4,r31,r11
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82258888
	if (!ctx.cr6.lt) goto loc_82258888;
loc_822588C4:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// b 0x822588d4
	goto loc_822588D4;
loc_822588D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822588D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8225B7E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x8225B7F0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r5,24
	r29.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x8225b820
	if (ctx.cr6.lt) goto loc_8225B820;
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(r29.u32, 255, ctx.xer);
	// beq cr6,0x8225b820
	if (ctx.cr6.eq) goto loc_8225B820;
	// cmplwi cr6,r29,254
	ctx.cr6.compare<uint32_t>(r29.u32, 254, ctx.xer);
	// beq cr6,0x8225b820
	if (ctx.cr6.eq) goto loc_8225B820;
	// cmplwi cr6,r29,253
	ctx.cr6.compare<uint32_t>(r29.u32, 253, ctx.xer);
	// bne cr6,0x8225ba00
	if (!ctx.cr6.eq) goto loc_8225BA00;
loc_8225B820:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ba00
	if (ctx.cr6.eq) goto loc_8225BA00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8225ba00
	if (ctx.cr6.eq) goto loc_8225BA00;
	// bl 0x822469c0
	ctx.lr = 0x8225B834;
	sub_822469C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822469c0
	ctx.lr = 0x8225B840;
	sub_822469C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,253
	ctx.cr6.compare<uint32_t>(r29.u32, 253, ctx.xer);
	// bne cr6,0x8225b86c
	if (!ctx.cr6.eq) goto loc_8225B86C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,255
	r29.s64 = 255;
	// bl 0x82258638
	ctx.lr = 0x8225B858;
	sub_82258638(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b868
	if (ctx.cr0.eq) goto loc_8225B868;
	// bl 0x822560a0
	ctx.lr = 0x8225B864;
	sub_822560A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8225B868:
	// mr r27,r29
	r27.u64 = r29.u64;
loc_8225B86C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82257d18
	ctx.lr = 0x8225B874;
	sub_82257D18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8225b894
	if (ctx.cr6.eq) goto loc_8225B894;
loc_8225B880:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225b924
	if (ctx.cr6.eq) goto loc_8225B924;
	// bl 0x82257d18
	ctx.lr = 0x8225B88C;
	sub_82257D18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// bne cr6,0x8225b880
	if (!ctx.cr6.eq) goto loc_8225B880;
loc_8225B894:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82258aa0
	ctx.lr = 0x8225B89C;
	sub_82258AA0(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x8225b8e0
	if (ctx.cr6.eq) goto loc_8225B8E0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82257d60
	ctx.lr = 0x8225B8B0;
	sub_82257D60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8225b8e0
	if (ctx.cr6.eq) goto loc_8225B8E0;
loc_8225B8BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82257d60
	ctx.lr = 0x8225B8C8;
	sub_82257D60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822516b0
	ctx.lr = 0x8225B8D4;
	sub_822516B0(ctx, base);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(r28.u32, r31.u32, ctx.xer);
	// bne cr6,0x8225b8bc
	if (!ctx.cr6.eq) goto loc_8225B8BC;
loc_8225B8E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82256918
	ctx.lr = 0x8225B8F4;
	sub_82256918(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225b970
	if (!ctx.cr6.eq) goto loc_8225B970;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82256918
	ctx.lr = 0x8225B90C;
	sub_82256918(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8225b930
	if (!ctx.cr6.eq) goto loc_8225B930;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x8225ba08
	goto loc_8225BA08;
loc_8225B924:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x8225ba08
	goto loc_8225BA08;
loc_8225B930:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82256af8
	ctx.lr = 0x8225B93C;
	sub_82256AF8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82256b70
	ctx.lr = 0x8225B950;
	sub_82256B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225ba08
	if (ctx.cr0.lt) goto loc_8225BA08;
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8225da70
	ctx.lr = 0x8225B964;
	sub_8225DA70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822517a0
	ctx.lr = 0x8225B970;
	sub_822517A0(ctx, base);
loc_8225B970:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82258a08
	ctx.lr = 0x8225B97C;
	sub_82258A08(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822579d0
	ctx.lr = 0x8225B98C;
	sub_822579D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225B998;
	sub_8224DA00(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// beq cr6,0x8225b9b4
	if (ctx.cr6.eq) goto loc_8225B9B4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ae58
	ctx.lr = 0x8225B9B4;
	sub_8225AE58(ctx, base);
loc_8225B9B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822567e0
	ctx.lr = 0x8225B9C0;
	sub_822567E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822567e0
	ctx.lr = 0x8225B9CC;
	sub_822567E0(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,23564(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23564);
	// bl 0x82255c88
	ctx.lr = 0x8225B9DC;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b9e8
	if (ctx.cr0.eq) goto loc_8225B9E8;
	// stw r30,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r30.u32);
loc_8225B9E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8225b300
	ctx.lr = 0x8225B9F0;
	sub_8225B300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225b358
	ctx.lr = 0x8225B9F8;
	sub_8225B358(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225ba08
	goto loc_8225BA08;
loc_8225BA00:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_8225BA08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82265030) {
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
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82265054
	if (!ctx.cr6.eq) goto loc_82265054;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82265068
	if (ctx.cr6.eq) goto loc_82265068;
loc_82265054:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82265074
	if (!ctx.cr6.eq) goto loc_82265074;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8226507c
	if (!ctx.cr6.eq) goto loc_8226507C;
loc_82265068:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x822650a0
	goto loc_822650A0;
loc_82265074:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82265084
	if (ctx.cr6.eq) goto loc_82265084;
loc_8226507C:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82265088
	goto loc_82265088;
loc_82265084:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82265088:
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8225e9f8
	ctx.lr = 0x8226509C;
	sub_8225E9F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822650A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822674F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822674F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226751c
	if (!ctx.cr6.eq) goto loc_8226751C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82267584
	goto loc_82267584;
loc_8226751C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82267530
	if (!ctx.cr6.eq) goto loc_82267530;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82267584
	goto loc_82267584;
loc_82267530:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822673a8
	ctx.lr = 0x82267544;
	sub_822673A8(ctx, base);
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bne cr6,0x8226756c
	if (!ctx.cr6.eq) goto loc_8226756C;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82290818
	ctx.lr = 0x8226756C;
	sub_82290818(ctx, base);
loc_8226756C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82267584
	if (ctx.cr6.eq) goto loc_82267584;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,244(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 244);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228eb60
	ctx.lr = 0x82267584;
	sub_8228EB60(ctx, base);
loc_82267584:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8226B1F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8226B1F8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8226b214
	if (!ctx.cr6.lt) goto loc_8226B214;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
loc_8226B214:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8226b224
	if (!ctx.cr6.gt) goto loc_8226B224;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_8226B224:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226b264
	if (!ctx.cr6.lt) goto loc_8226B264;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8226b260
	if (ctx.cr6.eq) goto loc_8226B260;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8226b258
	if (!ctx.cr6.eq) goto loc_8226B258;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b258
	if (ctx.cr6.eq) goto loc_8226B258;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225f500
	ctx.lr = 0x8226B258;
	sub_8225F500(ctx, base);
loc_8226B258:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8226b294
	goto loc_8226B294;
loc_8226B260:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
loc_8226B264:
	// ble cr6,0x8226b29c
	if (!ctx.cr6.gt) goto loc_8226B29C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8226b29c
	if (ctx.cr6.eq) goto loc_8226B29C;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8226b290
	if (!ctx.cr6.eq) goto loc_8226B290;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226b290
	if (ctx.cr6.eq) goto loc_8226B290;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225f500
	ctx.lr = 0x8226B290;
	sub_8225F500(ctx, base);
loc_8226B290:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8226B294:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8225f500
	ctx.lr = 0x8226B29C;
	sub_8225F500(ctx, base);
loc_8226B29C:
	// lwz r29,24(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(r29.s32, r30.s32, ctx.xer);
	// beq cr6,0x8226b2e0
	if (ctx.cr6.eq) goto loc_8226B2E0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226B2B0;
	sub_822469C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// bl 0x8225e8a8
	ctx.lr = 0x8226B2CC;
	sub_8225E8A8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226B2D4;
	sub_822469C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8224db90
	ctx.lr = 0x8226B2DC;
	sub_8224DB90(ctx, base);
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8226B2E0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822d7d50
	ctx.lr = 0x8226B308;
	sub_822D7D50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264eb0
	ctx.lr = 0x8226B31C;
	sub_82264EB0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8226b358
	if (ctx.cr6.eq) goto loc_8226B358;
	// lwz r30,24(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226B330;
	sub_822469C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8225e8f0
	ctx.lr = 0x8226B348;
	sub_8225E8F0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8226B350;
	sub_822469C0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8224db90
	ctx.lr = 0x8226B358;
	sub_8224DB90(ctx, base);
loc_8226B358:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82270D60) {
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
	// bl 0x822d4e80
	ctx.lr = 0x82270D68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82270d88
	if (!ctx.cr6.eq) goto loc_82270D88;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_82270D88:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// blt cr6,0x82270e6c
	if (ctx.cr6.lt) goto loc_82270E6C;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82270e6c
	if (ctx.cr6.gt) goto loc_82270E6C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x82270e6c
	if (ctx.cr6.lt) goto loc_82270E6C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x82270e6c
	if (ctx.cr6.lt) goto loc_82270E6C;
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82270e6c
	if (!ctx.cr6.lt) goto loc_82270E6C;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82270df8
	if (!ctx.cr6.gt) goto loc_82270DF8;
	// rlwinm. r29,r28,1,0,30
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x82270e6c
	if (!ctx.cr0.gt) goto loc_82270E6C;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82270e6c
	if (!ctx.cr6.lt) goto loc_82270E6C;
	// mulli r4,r29,12
	ctx.r4.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82255b88
	ctx.lr = 0x82270DE8;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82270e6c
	if (ctx.cr0.eq) goto loc_82270E6C;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82270DF8:
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// subf r9,r31,r28
	ctx.r9.u64 = r28.u64 - r31.u64;
	// add r29,r31,r27
	r29.u64 = r31.u64 + r27.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r9,r27,r9
	ctx.r9.u64 = ctx.r9.u64 - r27.u64;
	// mulli r10,r29,12
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// mulli r28,r31,12
	r28.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + ctx.r11.u64;
	// mulli r5,r9,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d6840
	ctx.lr = 0x82270E24;
	sub_822D6840(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// bge cr6,0x82270e64
	if (!ctx.cr6.lt) goto loc_82270E64;
loc_82270E30:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add. r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270e54
	if (ctx.cr0.eq) goto loc_82270E54;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82270E54:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// blt cr6,0x82270e30
	if (ctx.cr6.lt) goto loc_82270E30;
loc_82270E64:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82270e70
	goto loc_82270E70;
loc_82270E6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82270E70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82277F68) {
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
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82277fa4
	if (ctx.cr6.eq) goto loc_82277FA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82277968
	ctx.lr = 0x82277F98;
	sub_82277968(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8224db90
	ctx.lr = 0x82277FA4;
	sub_8224DB90(ctx, base);
loc_82277FA4:
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

DEFINE_REX_FUNC(sub_822785F0) {
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
	// lis r30,-32163
	r30.s64 = -2107834368;
	// lwz r3,30028(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 30028);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82278628
	if (ctx.cr0.eq) goto loc_82278628;
loc_82278614:
	// lwz r31,20(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82255b70
	ctx.lr = 0x8227861C;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82278614
	if (!ctx.cr6.eq) goto loc_82278614;
loc_82278628:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30028(r30)
	REX_STORE_U32(r30.u32 + 30028, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82279AD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82279AD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82279b8c
	if (ctx.cr6.eq) goto loc_82279B8C;
	// lis r10,1489
	ctx.r10.s64 = 97583104;
	// ori r10,r10,29789
	ctx.r10.u64 = ctx.r10.u64 | 29789;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82279b8c
	if (!ctx.cr6.lt) goto loc_82279B8C;
	// mulli r10,r4,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(44));
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82279b8c
	if (ctx.cr6.lt) goto loc_82279B8C;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x82279b8c
	if (ctx.cr6.lt) goto loc_82279B8C;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82279b8c
	if (ctx.cr6.lt) goto loc_82279B8C;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82279b8c
	if (ctx.cr6.gt) goto loc_82279B8C;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,44
	ctx.r8.s64 = 44;
	// add r31,r11,r9
	r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// li r30,0
	r30.s64 = 0;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stwx r4,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// beq cr6,0x82279b84
	if (ctx.cr6.eq) goto loc_82279B84;
loc_82279B58:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x8227b650
	ctx.lr = 0x82279B6C;
	sub_8227B650(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// stw r11,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r11.u32);
	// blt cr6,0x82279b58
	if (ctx.cr6.lt) goto loc_82279B58;
loc_82279B84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82279b90
	goto loc_82279B90;
loc_82279B8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82279B90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227C2B8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x822d5870
	ctx.lr = 0x8227C2E8;
	sub_822D5870(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
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

DEFINE_REX_FUNC(sub_8227CD18) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82255b70
	sub_82255B70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227CD40) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227D208) {
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
	// bl 0x822d4e80
	ctx.lr = 0x8227D210;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227d27c
	if (ctx.cr6.eq) goto loc_8227D27C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8227d274
	if (!ctx.cr6.gt) goto loc_8227D274;
	// addi r29,r3,24
	r29.s64 = ctx.r3.s64 + 24;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_8227D234:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227d268
	if (ctx.cr6.eq) goto loc_8227D268;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x8227d268
	if (!ctx.cr6.gt) goto loc_8227D268;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8227D250:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8227b2c8
	ctx.lr = 0x8227D25C;
	sub_8227B2C8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// bne 0x8227d250
	if (!ctx.cr0.eq) goto loc_8227D250;
loc_8227D268:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// bne 0x8227d234
	if (!ctx.cr0.eq) goto loc_8227D234;
loc_8227D274:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227D27C;
	sub_82255B70(ctx, base);
loc_8227D27C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8227E9E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8227E9E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,29924
	r29.s64 = ctx.r11.s64 + 29924;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d438c
	ctx.lr = 0x8227EA04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,30196(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30196);
	// bl 0x8227e8c8
	ctx.lr = 0x8227EA18;
	sub_8227E8C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x8227EA24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227F620) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8227F630:
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
	// bne 0x8227f630
	if (!ctx.cr0.eq) goto loc_8227F630;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8227f678
	if (!ctx.cr6.eq) goto loc_8227F678;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227f670
	if (ctx.cr6.eq) goto loc_8227F670;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,1600
	ctx.r11.s64 = ctx.r11.s64 + 1600;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82255b70
	ctx.lr = 0x8227F670;
	sub_82255B70(ctx, base);
loc_8227F670:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227f67c
	goto loc_8227F67C;
loc_8227F678:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8227F67C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82281290) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822813f4
	if (ctx.cr6.eq) goto loc_822813F4;
	// li r31,0
	r31.s64 = 0;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// lwz r11,804(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82281364
	if (!ctx.cr6.gt) goto loc_82281364;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,101
	ctx.r9.s64 = ctx.r11.s64 + 101;
	// stw r11,804(r3)
	REX_STORE_U32(ctx.r3.u32 + 804, ctx.r11.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,804(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 804);
	// addi r11,r11,101
	ctx.r11.s64 = ctx.r11.s64 + 101;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// sth r31,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r31.u16);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stw r31,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r31.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stw r31,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r31.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r31,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r31.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r31,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, r31.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stb r31,84(r11)
	REX_STORE_U8(ctx.r11.u32 + 84, r31.u8);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// sth r31,46(r11)
	REX_STORE_U16(ctx.r11.u32 + 46, r31.u16);
	// sth r31,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, r31.u16);
	// sth r31,50(r11)
	REX_STORE_U16(ctx.r11.u32 + 50, r31.u16);
	// sth r31,52(r11)
	REX_STORE_U16(ctx.r11.u32 + 52, r31.u16);
	// sth r31,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r31.u16);
	// stb r31,85(r11)
	REX_STORE_U8(ctx.r11.u32 + 85, r31.u8);
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r31.u32);
	// stb r31,28(r11)
	REX_STORE_U8(ctx.r11.u32 + 28, r31.u8);
	// stw r31,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r31.u32);
	// stw r31,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r31.u32);
	// stw r31,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r31.u32);
	// sth r31,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, r31.u16);
	// b 0x822813f4
	goto loc_822813F4;
loc_82281364:
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82255b48
	ctx.lr = 0x8228136C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822813ec
	if (ctx.cr0.eq) goto loc_822813EC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r31,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, r31.u16);
	// stw r31,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r31.u32);
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// stw r31,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r31.u32);
	// lfs f0,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stb r31,84(r3)
	REX_STORE_U8(ctx.r3.u32 + 84, r31.u8);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// sth r31,46(r3)
	REX_STORE_U16(ctx.r3.u32 + 46, r31.u16);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// sth r31,48(r3)
	REX_STORE_U16(ctx.r3.u32 + 48, r31.u16);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// sth r31,50(r3)
	REX_STORE_U16(ctx.r3.u32 + 50, r31.u16);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// sth r31,52(r3)
	REX_STORE_U16(ctx.r3.u32 + 52, r31.u16);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// sth r31,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, r31.u16);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r31,85(r3)
	REX_STORE_U8(ctx.r3.u32 + 85, r31.u8);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r31,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r31.u8);
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r31,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// sth r31,44(r3)
	REX_STORE_U16(ctx.r3.u32 + 44, r31.u16);
	// b 0x822813f0
	goto loc_822813F0;
loc_822813EC:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822813F0:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_822813F4:
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

DEFINE_REX_FUNC(sub_82287F60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82287F68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287FA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,-6316(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -6316);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,-6316(r11)
	REX_STORE_U32(ctx.r11.u32 + -6316, ctx.r10.u32);
	// bne 0x82287fc4
	if (!ctx.cr0.eq) goto loc_82287FC4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-6316(r11)
	REX_STORE_U32(ctx.r11.u32 + -6316, ctx.r10.u32);
loc_82287FC4:
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bne 0x822880b8
	if (!ctx.cr0.eq) goto loc_822880B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822880bc
	if (ctx.cr0.lt) goto loc_822880BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228804C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228806C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822880bc
	if (!ctx.cr6.eq) goto loc_822880BC;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228809C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822880B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822880B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822880BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8228CB10) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228cb50
	if (ctx.cr6.eq) goto loc_8228CB50;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228CB48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8228CB50:
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

DEFINE_REX_FUNC(sub_8228EB60) {
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
	// bl 0x822d4e64
	ctx.lr = 0x8228EB68;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32172
	ctx.r9.s64 = -2108424192;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r9,-2144(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -2144);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r9,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// beq cr6,0x8228ebb8
	if (ctx.cr6.eq) goto loc_8228EBB8;
loc_8228EB98:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8228ebb4
	if (ctx.cr0.eq) goto loc_8228EBB4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228eb98
	if (!ctx.cr6.eq) goto loc_8228EB98;
	// b 0x8228ebb8
	goto loc_8228EBB8;
loc_8228EBB4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8228EBB8:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228ebd0
	if (!ctx.cr0.eq) goto loc_8228EBD0;
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822d7b58
	ctx.lr = 0x8228EBC8;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8228ee84
	goto loc_8228EE84;
loc_8228EBD0:
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82288cc0
	ctx.lr = 0x8228EBDC;
	sub_82288CC0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8228ebf4
	if (!ctx.cr0.lt) goto loc_8228EBF4;
loc_8228EBE4:
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822d7b58
	ctx.lr = 0x8228EBEC;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8228ee84
	goto loc_8228EE84;
loc_8228EBF4:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228ec14
	if (!ctx.cr6.eq) goto loc_8228EC14;
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822d7b58
	ctx.lr = 0x8228EC08;
	sub_822D7B58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8228ee84
	goto loc_8228EE84;
loc_8228EC14:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228EC24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8228ec40
	if (!ctx.cr0.eq) goto loc_8228EC40;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_8228EC34:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8228cb10
	ctx.lr = 0x8228EC3C;
	sub_8228CB10(ctx, base);
	// b 0x8228ebe4
	goto loc_8228EBE4;
loc_8228EC40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 12);
	// bl 0x8228d428
	ctx.lr = 0x8228EC4C;
	sub_8228D428(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8228ec5c
	if (!ctx.cr0.lt) goto loc_8228EC5C;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8228ec34
	goto loc_8228EC34;
loc_8228EC5C:
	// stw r28,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ld r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 12);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8228d588
	ctx.lr = 0x8228EC78;
	sub_8228D588(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bge 0x8228ec88
	if (!ctx.cr0.lt) goto loc_8228EC88;
	// mr r31,r24
	r31.u64 = r24.u64;
	// b 0x8228ec34
	goto loc_8228EC34;
loc_8228EC88:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212808
	ctx.lr = 0x8228EC94;
	sub_82212808(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212850
	ctx.lr = 0x8228ECA0;
	sub_82212850(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822132a0
	ctx.lr = 0x8228ECB0;
	sub_822132A0(ctx, base);
	// ld r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 20);
	// lwz r19,116(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r25,r29
	r25.u64 = r29.u64;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// beq cr6,0x8228ee08
	if (ctx.cr6.eq) goto loc_8228EE08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r20,-32163
	r20.s64 = -2107834368;
	// lis r21,-32163
	r21.s64 = -2107834368;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_8228ECE4:
	// srawi r11,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r11.s64 = r27.s32 >> 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228ed10
	if (!ctx.cr0.eq) goto loc_8228ED10;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82213578
	ctx.lr = 0x8228ED08;
	sub_82213578(ctx, base);
	// lwz r29,31400(r20)
	r29.u64 = REX_LOAD_U32(r20.u32 + 31400);
	// b 0x8228ed1c
	goto loc_8228ED1C;
loc_8228ED10:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x82213578
	ctx.lr = 0x8228ED18;
	sub_82213578(ctx, base);
	// lwz r29,31396(r21)
	r29.u64 = REX_LOAD_U32(r21.u32 + 31396);
loc_8228ED1C:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ce00
	ctx.lr = 0x8228ED38;
	sub_8228CE00(ctx, base);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8228d128
	ctx.lr = 0x8228ED5C;
	sub_8228D128(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x8228ee08
	if (ctx.cr0.lt) goto loc_8228EE08;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r25,116(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// beq cr6,0x8228edd0
	if (ctx.cr6.eq) goto loc_8228EDD0;
	// rlwinm r6,r8,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r28,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// bl 0x82232580
	ctx.lr = 0x8228EDCC;
	sub_82232580(ctx, base);
	// b 0x8228ee00
	goto loc_8228EE00;
loc_8228EDD0:
	// rlwinm r3,r8,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r28,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r28.u32);
	// stw r28,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r28.u32);
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x82232580
	ctx.lr = 0x8228EE00;
	sub_82232580(ctx, base);
loc_8228EE00:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8228ece4
	if (!ctx.cr6.eq) goto loc_8228ECE4;
loc_8228EE08:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213578
	ctx.lr = 0x8228EE18;
	sub_82213578(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822132a0
	ctx.lr = 0x8228EE24;
	sub_822132A0(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8228ee34
	if (ctx.cr6.eq) goto loc_8228EE34;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82216cc8
	ctx.lr = 0x8228EE34;
	sub_82216CC8(ctx, base);
loc_8228EE34:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8228ee44
	if (ctx.cr6.eq) goto loc_8228EE44;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82216cc8
	ctx.lr = 0x8228EE44;
	sub_82216CC8(ctx, base);
loc_8228EE44:
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228ee58
	if (ctx.cr6.eq) goto loc_8228EE58;
	// bl 0x82216cc8
	ctx.lr = 0x8228EE54;
	sub_82216CC8(ctx, base);
	// stw r28,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r28.u32);
loc_8228EE58:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8228ee68
	if (ctx.cr6.eq) goto loc_8228EE68;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82216cc8
	ctx.lr = 0x8228EE68;
	sub_82216CC8(ctx, base);
loc_8228EE68:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8228cb10
	ctx.lr = 0x8228EE70;
	sub_8228CB10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228d0d0
	ctx.lr = 0x8228EE78;
	sub_8228D0D0(ctx, base);
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822d7b58
	ctx.lr = 0x8228EE80;
	sub_822D7B58(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_8228EE84:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8229D6D8) {
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
	// bl 0x822d4e84
	ctx.lr = 0x8229D6E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229d904
	if (ctx.cr0.eq) goto loc_8229D904;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229d904
	if (ctx.cr6.eq) goto loc_8229D904;
	// lbz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// stw r4,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8229d71c
	if (!ctx.cr0.eq) goto loc_8229D71C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
loc_8229D71C:
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r11,r29,48
	ctx.r11.s64 = r29.s64 + 48;
	// addi r8,r29,32
	ctx.r8.s64 = r29.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwz r10,31492(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 31492);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldicr r6,r10,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r30,16(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// srd r28,r6,r8
	r28.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// addi r27,r10,22736
	r27.s64 = ctx.r10.s64 + 22736;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwimi r10,r9,10,19,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ld r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 24);
	// or r10,r28,r10
	ctx.r10.u64 = r28.u64 | ctx.r10.u64;
	// std r10,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r10.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwimi r9,r10,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r9,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r9.u32);
	// ld r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 24);
	// or r10,r28,r10
	ctx.r10.u64 = r28.u64 | ctx.r10.u64;
	// std r10,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r10.u64);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwimi r9,r10,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx r9,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r9.u32);
	// ld r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 24);
	// or r11,r28,r11
	ctx.r11.u64 = r28.u64 | ctx.r11.u64;
	// std r11,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r11.u64);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwzx r5,r10,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// bl 0x82211a60
	ctx.lr = 0x8229D7CC;
	sub_82211A60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229eb38
	ctx.lr = 0x8229D7D4;
	sub_8229EB38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8229d814
	if (!ctx.cr0.gt) goto loc_8229D814;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mulli r11,r29,24
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(24));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,22704
	ctx.r9.s64 = ctx.r9.s64 + 22704;
	// addi r10,r11,1164
	ctx.r10.s64 = ctx.r11.s64 + 1164;
	// lwz r10,1164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1164);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwimi r10,r9,23,7,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x1800000) | (ctx.r10.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r10,1164(r11)
	REX_STORE_U32(ctx.r11.u32 + 1164, ctx.r10.u32);
	// ld r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 24);
	// or r11,r28,r11
	ctx.r11.u64 = r28.u64 | ctx.r11.u64;
	// std r11,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r11.u64);
loc_8229D814:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwzx r5,r10,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// bl 0x82211c08
	ctx.lr = 0x8229D830;
	sub_82211C08(ctx, base);
	// lbz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 88);
	// stb r11,32(r31)
	REX_STORE_U8(r31.u32 + 32, ctx.r11.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82211ea8
	ctx.lr = 0x8229D848;
	sub_82211EA8(ctx, base);
	// lfs f13,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mulli r11,r29,24
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(24));
	// lfs f0,2028(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r10,r11,1172
	ctx.r10.s64 = ctx.r11.s64 + 1172;
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f13,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f13,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lwz r10,1172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1172);
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f11,f10
	ctx.f11.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lbz r9,87(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r8,87(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r7,87(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// fctidz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lbz r7,95(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r9,r10,0,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// stw r9,1172(r11)
	REX_STORE_U32(ctx.r11.u32 + 1172, ctx.r9.u32);
	// ld r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 24);
	// or r11,r28,r11
	ctx.r11.u64 = r28.u64 | ctx.r11.u64;
	// std r11,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r11.u64);
loc_8229D904:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822A8458) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822A8460;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822a84ac
	if (ctx.cr6.eq) goto loc_822A84AC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
loc_822A847C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822a849c
	if (ctx.cr6.eq) goto loc_822A849C;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x822a80a0
	ctx.lr = 0x822A849C;
	sub_822A80A0(ctx, base);
loc_822A849C:
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x822a847c
	if (!ctx.cr6.eq) goto loc_822A847C;
loc_822A84AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822A9AA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822A9AB0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r30,31464(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 31464);
	// beq cr6,0x822a9b18
	if (ctx.cr6.eq) goto loc_822A9B18;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x822a9b58
	if (!ctx.cr6.eq) goto loc_822A9B58;
	// lwz r11,1428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1428);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a9b58
	if (ctx.cr0.eq) goto loc_822A9B58;
	// addi r3,r3,624
	ctx.r3.s64 = ctx.r3.s64 + 624;
	// lfs f4,1164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,1160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1156);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,1152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1152);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ca8c8
	ctx.lr = 0x822A9AF8;
	sub_822CA8C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,1537(r30)
	REX_STORE_U8(r30.u32 + 1537, ctx.r11.u8);
	// stb r11,1538(r30)
	REX_STORE_U8(r30.u32 + 1538, ctx.r11.u8);
	// stb r10,946(r31)
	REX_STORE_U8(r31.u32 + 946, ctx.r10.u8);
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x822a9b54
	goto loc_822A9B54;
loc_822A9B18:
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a9b58
	if (ctx.cr0.eq) goto loc_822A9B58;
	// addi r6,r31,1136
	ctx.r6.s64 = r31.s64 + 1136;
	// addi r5,r31,1120
	ctx.r5.s64 = r31.s64 + 1120;
	// addi r4,r31,1104
	ctx.r4.s64 = r31.s64 + 1104;
	// addi r3,r31,560
	ctx.r3.s64 = r31.s64 + 560;
	// bl 0x822cab38
	ctx.lr = 0x822A9B38;
	sub_822CAB38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,1536(r30)
	REX_STORE_U8(r30.u32 + 1536, ctx.r11.u8);
	// stb r11,1538(r30)
	REX_STORE_U8(r30.u32 + 1538, ctx.r11.u8);
	// stb r10,945(r31)
	REX_STORE_U8(r31.u32 + 945, ctx.r10.u8);
	// lwz r11,1428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_822A9B54:
	// stw r11,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, ctx.r11.u32);
loc_822A9B58:
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r11,496
	ctx.r3.s64 = ctx.r11.s64 + 496;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822ABFE8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ac040
	if (ctx.cr6.eq) goto loc_822AC040;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822ac024
	if (ctx.cr6.gt) goto loc_822AC024;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c80d0
	ctx.lr = 0x822AC01C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822ac040
	if (!ctx.cr0.eq) goto loc_822AC040;
loc_822AC024:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4172
	ctx.r11.s64 = ctx.r11.s64 + -4172;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82184290
	ctx.lr = 0x822AC040;
	sub_82184290(ctx, base);
loc_822AC040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AD298) {
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
	// bl 0x822d4e80
	ctx.lr = 0x822AD2A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x822ad320
	if (!ctx.cr6.gt) goto loc_822AD320;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r29,r3
	r27.u64 = r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822ac9c0
	ctx.lr = 0x822AD2E4;
	sub_822AC9C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = r29.u64 + r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// subf r3,r29,r31
	ctx.r3.u64 = r31.u64 - r29.u64;
	// bl 0x822ac9c0
	ctx.lr = 0x822AD2F8;
	sub_822AC9C0(ctx, base);
	// subf r29,r29,r28
	r29.u64 = r28.u64 - r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r3,r26,r28
	ctx.r3.u64 = r28.u64 - r26.u64;
	// bl 0x822ac9c0
	ctx.lr = 0x822AD310;
	sub_822AC9C0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x822ad324
	goto loc_822AD324;
loc_822AD320:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_822AD324:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822ac9c0
	ctx.lr = 0x822AD32C;
	sub_822AC9C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822B09F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x822B0A00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a99c0
	ctx.lr = 0x822B0A18;
	sub_822A99C0(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r11,465(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 465);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b0acc
	if (ctx.cr0.eq) goto loc_822B0ACC;
	// lwz r28,20(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// b 0x822b0a48
	goto loc_822B0A48;
loc_822B0A3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822b8538
	ctx.lr = 0x822B0A44;
	sub_822B8538(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_822B0A48:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x822b0a3c
	if (!ctx.cr6.eq) goto loc_822B0A3C;
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r29,31516(r10)
	REX_STORE_U32(ctx.r10.u32 + 31516, r29.u32);
	// lwz r3,488(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x822b0a98
	if (!ctx.cr6.gt) goto loc_822B0A98;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,492(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 492);
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822b07c8
	ctx.lr = 0x822B0A98;
	sub_822B07C8(ctx, base);
loc_822B0A98:
	// lwz r3,536(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 536);
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x822b0acc
	if (!ctx.cr6.gt) goto loc_822B0ACC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,540(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 540);
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x822b08e0
	ctx.lr = 0x822B0ACC;
	sub_822B08E0(ctx, base);
loc_822B0ACC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822B5E70) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x822B5E78;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f30
	ctx.lr = 0x822B5E80;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r11,31576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31576);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822b5ecc
	if (!ctx.cr0.eq) goto loc_822B5ECC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r11,31576(r10)
	REX_STORE_U32(ctx.r10.u32 + 31576, ctx.r11.u32);
	// lfd f1,23288(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r9.u32 + 23288);
	// bl 0x822d47d0
	ctx.lr = 0x822B5EB4;
	sub_822D47D0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfs f0,-5696(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5696);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,31572(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 31572, temp.u32);
	// b 0x822b5ed0
	goto loc_822B5ED0;
loc_822B5ECC:
	// lfs f11,31572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 31572);
	ctx.f11.f64 = double(temp.f32);
loc_822B5ED0:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lbz r22,196(r30)
	r22.u64 = REX_LOAD_U8(r30.u32 + 196);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,1452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// lfs f13,7260(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 7260);
	ctx.f13.f64 = double(temp.f32);
	// lwz r27,8(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f12,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// lfs f27,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	f27.f64 = double(temp.f32);
	// li r25,0
	r25.s64 = 0;
	// lfs f31,2000(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2000);
	f31.f64 = double(temp.f32);
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,1152(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 1152);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,192(r30)
	REX_STORE_U8(r30.u32 + 192, ctx.r10.u8);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// srawi. r23,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r23.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fdivs f26,f0,f11
	f26.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq 0x822b62a8
	if (ctx.cr0.eq) goto loc_822B62A8;
	// li r24,0
	r24.s64 = 0;
	// li r26,1
	r26.s64 = 1;
loc_822B5F64:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwzx r29,r24,r11
	r29.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// lwz r31,40(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b5f84
	if (!ctx.cr0.eq) goto loc_822B5F84;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822b5f88
	goto loc_822B5F88;
loc_822B5F84:
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_822B5F88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b6298
	if (ctx.cr0.eq) goto loc_822B6298;
	// stb r26,192(r30)
	REX_STORE_U8(r30.u32 + 192, r26.u8);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b5fb4
	if (ctx.cr0.eq) goto loc_822B5FB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b1248
	ctx.lr = 0x822B5FB0;
	sub_822B1248(ctx, base);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_822B5FB4:
	// clrlwi. r28,r22,24
	r28.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822b600c
	if (ctx.cr0.eq) goto loc_822B600C;
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b5fd4
	if (ctx.cr6.eq) goto loc_822B5FD4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b5fd8
	if (!ctx.cr6.eq) goto loc_822B5FD8;
loc_822B5FD4:
	// lwz r10,216(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 216);
loc_822B5FD8:
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// beq cr6,0x822b5ff0
	if (ctx.cr6.eq) goto loc_822B5FF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822b5ff4
	goto loc_822B5FF4;
loc_822B5FF0:
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_822B5FF4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b600c
	if (ctx.cr0.eq) goto loc_822B600C;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b600c
	if (ctx.cr0.eq) goto loc_822B600C;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_822B600C:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b61a8
	if (ctx.cr0.eq) goto loc_822B61A8;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r31,r31,384
	r31.s64 = r31.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822a5ac8
	ctx.lr = 0x822B606C;
	sub_822A5AC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822a5ac8
	ctx.lr = 0x822B6078;
	sub_822A5AC8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822b60a8
	if (ctx.cr6.eq) goto loc_822B60A8;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b5df8
	ctx.lr = 0x822B6090;
	sub_822B5DF8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a5ac8
	ctx.lr = 0x822B609C;
	sub_822A5AC8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822a5ac8
	ctx.lr = 0x822B60A8;
	sub_822A5AC8(ctx, base);
loc_822B60A8:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822b38b8
	ctx.lr = 0x822B60D8;
	sub_822B38B8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822b3838
	ctx.lr = 0x822B60E8;
	sub_822B3838(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822b38b8
	ctx.lr = 0x822B60F8;
	sub_822B38B8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822b3838
	ctx.lr = 0x822B6108;
	sub_822B3838(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// stfs f12,48(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 48, temp.u32);
	// stfs f0,52(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 52, temp.u32);
	// stfs f13,56(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 56, temp.u32);
	// stfs f8,60(r29)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r29.u32 + 60, temp.u32);
	// lfs f9,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,68(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 68, temp.u32);
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// stfs f9,64(r29)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r29.u32 + 64, temp.u32);
	// stfs f10,72(r29)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r29.u32 + 72, temp.u32);
	// fmuls f11,f6,f31
	ctx.f11.f64 = double(float(ctx.f6.f64 * f31.f64));
	// lfs f8,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,76(r29)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r29.u32 + 76, temp.u32);
	// lfs f28,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	f28.f64 = double(temp.f32);
	// lfs f29,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	f29.f64 = double(temp.f32);
	// lfs f30,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	f30.f64 = double(temp.f32);
	// fmuls f10,f5,f31
	ctx.f10.f64 = double(float(ctx.f5.f64 * f31.f64));
	// fmuls f9,f7,f7
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fmadds f11,f11,f11,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f9.f64)));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64)));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// stfs f11,36(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 36, temp.u32);
	// stfs f0,24(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 24, temp.u32);
	// stfs f13,28(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
	// stfs f8,32(r29)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// stfs f12,20(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// stb r26,16(r29)
	REX_STORE_U8(r29.u32 + 16, r26.u8);
	// stfs f27,32(r29)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r29.u32 + 32, temp.u32);
	// b 0x822b624c
	goto loc_822B624C;
loc_822B61A8:
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f13,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f12,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f11,60(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822b38b8
	ctx.lr = 0x822B61D8;
	sub_822B38B8(ctx, base);
	// lfs f0,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,72(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f11,76(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f30,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f29,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfs f28,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f28.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,132(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x822b3838
	ctx.lr = 0x822B622C;
	sub_822B3838(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_822B624C:
	// lfs f13,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,1108(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 1108);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,28(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1112(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 1112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,1104(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 1104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f11,36(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 * f26.f64));
	// bl 0x822a9fe0
	ctx.lr = 0x822B6294;
	sub_822A9FE0(ctx, base);
	// stw r3,132(r29)
	REX_STORE_U32(r29.u32 + 132, ctx.r3.u32);
loc_822B6298:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(r25.u32, r23.u32, ctx.xer);
	// blt cr6,0x822b5f64
	if (ctx.cr6.lt) goto loc_822B5F64;
loc_822B62A8:
	// lbz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b6310
	if (ctx.cr0.eq) goto loc_822B6310;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// lfs f13,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - f28.f64));
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - f30.f64));
	// lfs f11,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fadds f9,f13,f28
	ctx.f9.f64 = double(float(ctx.f13.f64 + f28.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fadds f8,f12,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 + f30.f64));
	// fmadds f13,f13,f13,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f13,184(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 184, temp.u32);
	// stfs f0,172(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 172, temp.u32);
	// stfs f9,176(r30)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r30.u32 + 176, temp.u32);
	// stfs f11,180(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 180, temp.u32);
	// stfs f8,168(r30)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r30.u32 + 168, temp.u32);
	// stfs f27,180(r30)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r30.u32 + 180, temp.u32);
loc_822B6310:
	// lbz r3,192(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 192);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f7c
	ctx.lr = 0x822B6320;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_822CD840) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x822c8a00
	sub_822C8A00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CDAE8) {
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
	// lis r30,-32163
	r30.s64 = -2107834368;
	// lwz r31,31804(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 31804);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822cdb24
	if (ctx.cr6.eq) goto loc_822CDB24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cd700
	ctx.lr = 0x822CDB14;
	sub_822CD700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822CDB1C;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31804(r30)
	REX_STORE_U32(r30.u32 + 31804, ctx.r11.u32);
loc_822CDB24:
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

DEFINE_REX_FUNC(sub_822CE7A8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ce7b8
	if (!ctx.cr6.eq) goto loc_822CE7B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822CE7B8:
	// stw r4,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CE938) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CE940;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ce960
	if (!ctx.cr6.eq) goto loc_822CE960;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x822ce9a4
	goto loc_822CE9A4;
loc_822CE960:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CE978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lbz r31,1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CE9A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822CE9A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D1030) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x822D1038;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1064
	if (ctx.cr6.eq) goto loc_822D1064;
loc_822D105C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d1260
	goto loc_822D1260;
loc_822D1064:
	// cmplwi cr6,r26,14
	ctx.cr6.compare<uint32_t>(r26.u32, 14, ctx.xer);
	// blt cr6,0x822d105c
	if (ctx.cr6.lt) goto loc_822D105C;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r25,r31,112
	r25.s64 = r31.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822D1098;
	sub_822D4FA0(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// bl 0x822c80d0
	ctx.lr = 0x822D10AC;
	sub_822C80D0(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// bl 0x822d5870
	ctx.lr = 0x822D10BC;
	sub_822D5870(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// bl 0x822cd6f0
	ctx.lr = 0x822D10C4;
	sub_822CD6F0(ctx, base);
	// bl 0x822cd7a8
	ctx.lr = 0x822D10C8;
	sub_822CD7A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d10dc
	if (ctx.cr0.eq) goto loc_822D10DC;
	// bl 0x822cd6f0
	ctx.lr = 0x822D10D4;
	sub_822CD6F0(ctx, base);
	// bl 0x822cd7a8
	ctx.lr = 0x822D10D8;
	sub_822CD7A8(ctx, base);
	// lhz r28,1030(r3)
	r28.u64 = REX_LOAD_U16(ctx.r3.u32 + 1030);
loc_822D10DC:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822d1210
	if (ctx.cr6.eq) goto loc_822D1210;
	// cmpwi cr6,r11,358
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 358, ctx.xer);
	// beq cr6,0x822d1100
	if (ctx.cr6.eq) goto loc_822D1100;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x822d105c
	if (!ctx.cr6.eq) goto loc_822D105C;
	// cmplwi cr6,r26,40
	ctx.cr6.compare<uint32_t>(r26.u32, 40, ctx.xer);
	// b 0x822d1214
	goto loc_822D1214;
loc_822D1100:
	// cmplwi cr6,r26,52
	ctx.cr6.compare<uint32_t>(r26.u32, 52, ctx.xer);
	// blt cr6,0x822d105c
	if (ctx.cr6.lt) goto loc_822D105C;
	// addi r29,r31,56
	r29.s64 = r31.s64 + 56;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822D111C;
	sub_822D4FA0(ctx, base);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822D112C;
	sub_822D4FA0(ctx, base);
	// lhz r11,58(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 58);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822d1148
	if (!ctx.cr6.eq) goto loc_822D1148;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x822d1148
	if (!ctx.cr6.gt) goto loc_822D1148;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_822D1148:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1224
	if (ctx.cr6.eq) goto loc_822D1224;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1224
	if (ctx.cr6.eq) goto loc_822D1224;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lbz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 104);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d11a8
	if (!ctx.cr0.eq) goto loc_822D11A8;
	// li r11,255
	ctx.r11.s64 = 255;
loc_822D11A8:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822d11d8
	if (!ctx.cr6.lt) goto loc_822D11D8;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
loc_822D11D8:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822d11f0
	if (!ctx.cr6.lt) goto loc_822D11F0;
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_822D11F0:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822d1224
	if (!ctx.cr6.lt) goto loc_822D1224;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x822d1224
	goto loc_822D1224;
loc_822D1210:
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(r26.u32, 16, ctx.xer);
loc_822D1214:
	// blt cr6,0x822d105c
	if (ctx.cr6.lt) goto loc_822D105C;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_822D1224:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r10,64
	ctx.r10.s64 = 64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D125C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822D1260:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(__savevmx_14) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx v14,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_116) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_75) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822E202C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r29,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
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
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822dcd80
	ctx.lr = 0x822E205C;
	sub_822DCD80(ctx, base);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lwz r27,164(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r29,r10,-11328
	ctx.r29.s64 = ctx.r10.s64 + -11328;
	// addi r10,r11,-11324
	ctx.r10.s64 = ctx.r11.s64 + -11324;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E66AC) {
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dcd40
	ctx.lr = 0x822E66CC;
	sub_822DCD40(ctx, base);
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

DEFINE_REX_FUNC(sub_822E83B0) {
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
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822E83D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e83e4
	if (ctx.cr6.lt) goto loc_822E83E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_822E83E4:
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

DEFINE_REX_FUNC(sub_822E95A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x822E95A8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822E95D0;
	sub_822D5870(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x822e9630
	if (ctx.cr6.lt) goto loc_822E9630;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(r30.u32, 64, ctx.xer);
	// bgt cr6,0x822e9630
	if (ctx.cr6.gt) goto loc_822E9630;
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// beq cr6,0x822e9630
	if (ctx.cr6.eq) goto loc_822E9630;
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(r29.u32, 24, ctx.xer);
	// bgt cr6,0x822e9640
	if (ctx.cr6.gt) goto loc_822E9640;
	// beq cr6,0x822e9648
	if (ctx.cr6.eq) goto loc_822E9648;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(r29.u32, 8, ctx.xer);
	// beq cr6,0x822e9610
	if (ctx.cr6.eq) goto loc_822E9610;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(r29.u32, 16, ctx.xer);
	// bne cr6,0x822e9630
	if (!ctx.cr6.eq) goto loc_822E9630;
loc_822E9610:
	// rlwinm r10,r29,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
	// sth r29,14(r31)
	REX_STORE_U16(r31.u32 + 14, r29.u16);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// sth r8,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r8.u16);
	// sth r7,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r7.u16);
	// b 0x822e9660
	goto loc_822E9660;
loc_822E9630:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_822E9640:
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(r29.u32, 32, ctx.xer);
	// bne cr6,0x822e9630
	if (!ctx.cr6.eq) goto loc_822E9630;
loc_822E9648:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,32
	ctx.r9.s64 = 32;
	// rlwinm r8,r11,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// sth r9,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r9.u16);
	// sth r8,12(r31)
	REX_STORE_U16(r31.u32 + 12, ctx.r8.u16);
loc_822E9660:
	// lhz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822ECB78) {
	REX_FUNC_PROLOGUE();
	// ld r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 288);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ECD70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822ECD78;
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ecdbc
	if (ctx.cr6.eq) goto loc_822ECDBC;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ecdb4
	if (ctx.cr6.eq) goto loc_822ECDB4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECDB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ECDB4:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_822ECDBC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822ecdec
	if (ctx.cr6.eq) goto loc_822ECDEC;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ecde4
	if (ctx.cr6.eq) goto loc_822ECDE4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECDE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ECDE4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_822ECDEC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822ece1c
	if (ctx.cr6.eq) goto loc_822ECE1C;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ece14
	if (ctx.cr6.eq) goto loc_822ECE14;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822ECE14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ECE14:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_822ECE1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822EFB98) {
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
	// lwz r3,536(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822efbcc
	if (!ctx.cr6.eq) goto loc_822EFBCC;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// b 0x822efbec
	goto loc_822EFBEC;
loc_822EFBCC:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x822f9e60
	ctx.lr = 0x822EFBD4;
	sub_822F9E60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822efbec
	if (ctx.cr6.lt) goto loc_822EFBEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822efbec
	if (!ctx.cr6.eq) goto loc_822EFBEC;
	// stw r11,536(r30)
	REX_STORE_U32(r30.u32 + 536, ctx.r11.u32);
loc_822EFBEC:
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

DEFINE_REX_FUNC(sub_822F2488) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x822F2490;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822f24c0
	if (!ctx.cr6.eq) goto loc_822F24C0;
loc_822F24B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_822F24C0:
	// rlwinm r5,r6,2,14,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r25,r6,16
	r25.u64 = ctx.r6.u32 & 0xFFFF;
	// bl 0x822d5870
	ctx.lr = 0x822F24D4;
	sub_822D5870(ctx, base);
	// rlwinm r6,r29,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822f25cc
	if (ctx.cr6.eq) goto loc_822F25CC;
loc_822F24E4:
	// lbz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r8,44
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 44, ctx.xer);
	// bne cr6,0x822f2530
	if (!ctx.cr6.eq) goto loc_822F2530;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822f2510
	if (!ctx.cr6.eq) goto loc_822F2510;
	// rlwinm r11,r30,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	r27.s64 = 0;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r9.u32);
loc_822F2510:
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822f24b4
	if (!ctx.cr6.lt) goto loc_822F24B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r28,0
	r28.s64 = 0;
	// clrlwi r30,r11,16
	r30.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x822f25b4
	goto loc_822F25B4;
loc_822F2530:
	// cmplwi cr6,r8,45
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 45, ctx.xer);
	// bne cr6,0x822f254c
	if (!ctx.cr6.eq) goto loc_822F254C;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f24b4
	if (!ctx.cr6.eq) goto loc_822F24B4;
	// li r27,1
	r27.s64 = 1;
	// b 0x822f25b4
	goto loc_822F25B4;
loc_822F254C:
	// cmplwi cr6,r8,48
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 48, ctx.xer);
	// blt cr6,0x822f258c
	if (ctx.cr6.lt) goto loc_822F258C;
	// cmplwi cr6,r8,57
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 57, ctx.xer);
	// bgt cr6,0x822f258c
	if (ctx.cr6.gt) goto loc_822F258C;
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// clrlwi r28,r9,16
	r28.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// stwx r4,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r4.u32);
	// b 0x822f25b4
	goto loc_822F25B4;
loc_822F258C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822f24b4
	if (!ctx.cr6.eq) goto loc_822F24B4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822f25b4
	if (!ctx.cr6.eq) goto loc_822F25B4;
	// rlwinm r11,r30,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	r27.s64 = 0;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r9.u32);
loc_822F25B4:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822f24e4
	if (ctx.cr6.lt) goto loc_822F24E4;
loc_822F25CC:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822F93E0) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1524(r10)
	REX_STORE_U8(ctx.r10.u32 + 1524, ctx.r11.u8);
	// stw r11,1528(r10)
	REX_STORE_U32(ctx.r10.u32 + 1528, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F9818) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822F9820;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,508(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 508);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r5,516(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 516);
	// bl 0x822f9490
	ctx.lr = 0x822F984C;
	sub_822F9490(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f9874
	if (ctx.cr6.lt) goto loc_822F9874;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,516(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 516);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822d5870
	ctx.lr = 0x822F9868;
	sub_822D5870(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r28,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3FC;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
loc_822F9874:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822FAEE0) {
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
	// bl 0x822d4e70
	ctx.lr = 0x822FAEE8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lbz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// bl 0x822f9818
	ctx.lr = 0x822FAF28;
	sub_822F9818(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fb120
	if (ctx.cr6.lt) goto loc_822FB120;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r8,12(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r27,24(r31)
	REX_STORE_U32(r31.u32 + 24, r27.u32);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// std r30,56(r31)
	REX_STORE_U64(r31.u32 + 56, r30.u64);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lbz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U8(r28.u32 + 0);
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// stb r7,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r7.u8);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stb r3,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 24);
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, r30.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r30.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r30.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stw r30,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// stw r30,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r30.u32);
	// stw r30,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822f9490
	ctx.lr = 0x822FAFCC;
	sub_822F9490(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fb120
	if (ctx.cr6.lt) goto loc_822FB120;
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822FAFE8;
	sub_822D5870(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x82314330
	ctx.lr = 0x822FAFF8;
	sub_82314330(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fb120
	if (ctx.cr6.lt) goto loc_822FB120;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r10,r11,-20912
	ctx.r10.s64 = ctx.r11.s64 + -20912;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r6,-24144
	ctx.r6.s64 = ctx.r6.s64 + -24144;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FB03C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fb120
	if (ctx.cr6.lt) goto loc_822FB120;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822fb0d0
	if (ctx.cr6.eq) goto loc_822FB0D0;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x822f9490
	ctx.lr = 0x822FB06C;
	sub_822F9490(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fb120
	if (ctx.cr6.lt) goto loc_822FB120;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x823142a8
	ctx.lr = 0x822FB09C;
	sub_823142A8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fb120
	if (ctx.cr6.lt) goto loc_822FB120;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r5,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FB0C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fb120
	if (ctx.cr6.lt) goto loc_822FB120;
loc_822FB0D0:
	// sth r30,76(r31)
	REX_STORE_U16(r31.u32 + 76, r30.u16);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r28,r31,100
	r28.s64 = r31.s64 + 100;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stb r30,96(r31)
	REX_STORE_U8(r31.u32 + 96, r30.u8);
	// addi r4,r11,-21384
	ctx.r4.s64 = ctx.r11.s64 + -21384;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822f8fe8
	ctx.lr = 0x822FB104;
	sub_822F8FE8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fb120
	if (ctx.cr6.lt) goto loc_822FB120;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec0
	return;
loc_822FB120:
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822fb134
	if (ctx.cr6.eq) goto loc_822FB134;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822f9080
	ctx.lr = 0x822FB134;
	sub_822F9080(ctx, base);
loc_822FB134:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fb150
	if (ctx.cr6.eq) goto loc_822FB150;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822f94e8
	ctx.lr = 0x822FB150;
	sub_822F94E8(ctx, base);
loc_822FB150:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fb16c
	if (ctx.cr6.eq) goto loc_822FB16C;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x822f94e8
	ctx.lr = 0x822FB16C;
	sub_822F94E8(ctx, base);
loc_822FB16C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82309838) {
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
	// bl 0x822d4e70
	ctx.lr = 0x82309840;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,28(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r22,0
	r22.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r26,r4,-24
	r26.s64 = ctx.r4.s64 + -24;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// stw r22,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82309880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// cmplwi cr6,r26,24
	ctx.cr6.compare<uint32_t>(r26.u32, 24, ctx.xer);
	// bge cr6,0x823098a8
	if (!ctx.cr6.lt) goto loc_823098A8;
loc_82309894:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
loc_823098A8:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307c58
	ctx.lr = 0x823098C0;
	sub_82307C58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823078f0
	ctx.lr = 0x823098E4;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307770
	ctx.lr = 0x82309908;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307770
	ctx.lr = 0x8230992C;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r30,24
	r30.s64 = 24;
	// lhz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82309894
	if (ctx.cr6.gt) goto loc_82309894;
	// lwz r24,104(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stw r24,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, r24.u32);
	// bne cr6,0x823099ac
	if (!ctx.cr6.eq) goto loc_823099AC;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// addic. r30,r10,-24
	ctx.xer.ca = ctx.r10.u32 > 23;
	r30.s64 = ctx.r10.s64 + -24;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82309d28
	if (ctx.cr0.eq) goto loc_82309D28;
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
	ctx.lr = 0x82309988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// ld r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U64(r25.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
loc_823099AC:
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823099e8
	if (ctx.cr6.eq) goto loc_823099E8;
	// addi r30,r5,24
	r30.s64 = ctx.r5.s64 + 24;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bgt cr6,0x82309894
	if (ctx.cr6.gt) goto loc_82309894;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307e08
	ctx.lr = 0x823099DC;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
loc_823099E8:
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bgt cr6,0x82309894
	if (ctx.cr6.gt) goto loc_82309894;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// rlwinm r29,r11,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822f9490
	ctx.lr = 0x82309A20;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82309A3C;
	sub_822D5870(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r23,r22
	r23.u64 = r22.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// beq cr6,0x82309cd4
	if (ctx.cr6.eq) goto loc_82309CD4;
loc_82309A60:
	// addi r30,r30,18
	r30.s64 = r30.s64 + 18;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bgt cr6,0x82309894
	if (ctx.cr6.gt) goto loc_82309894;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307a88
	ctx.lr = 0x82309A84;
	sub_82307A88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// bl 0x82307a88
	ctx.lr = 0x82309AB4;
	sub_82307A88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x82307770
	ctx.lr = 0x82309AE4;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r10,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// blt cr6,0x82309cc0
	if (ctx.cr6.lt) goto loc_82309CC0;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bgt cr6,0x82309894
	if (ctx.cr6.gt) goto loc_82309894;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823078f0
	ctx.lr = 0x82309B30;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// bl 0x823078f0
	ctx.lr = 0x82309B60;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bl 0x823078f0
	ctx.lr = 0x82309B90;
	sub_823078F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// lhz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82309894
	if (ctx.cr6.gt) goto loc_82309894;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309c78
	if (ctx.cr6.eq) goto loc_82309C78;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r5,r30
	r28.u64 = ctx.r5.u64 + r30.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// bgt cr6,0x82309894
	if (ctx.cr6.gt) goto loc_82309894;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// lwz r3,224(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f9490
	ctx.lr = 0x82309BEC;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822d5870
	ctx.lr = 0x82309C10;
	sub_822D5870(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r22
	r30.u64 = r22.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309c74
	if (ctx.cr6.eq) goto loc_82309C74;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82309C28:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307770
	ctx.lr = 0x82309C40;
	sub_82307770(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// sthx r10,r9,r29
	REX_STORE_U16(ctx.r9.u32 + r29.u32, ctx.r10.u16);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82309c28
	if (ctx.cr6.lt) goto loc_82309C28;
loc_82309C74:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82309C78:
	// lhz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// addic. r5,r7,-12
	ctx.xer.ca = ctx.r7.u32 > 11;
	ctx.r5.s64 = ctx.r7.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82309cc0
	if (ctx.cr0.eq) goto loc_82309CC0;
	// add r30,r5,r30
	r30.u64 = ctx.r5.u64 + r30.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bgt cr6,0x82309894
	if (ctx.cr6.gt) goto loc_82309894;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82307e08
	ctx.lr = 0x82309CB0;
	sub_82307E08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82309CC0:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r11,r10,40
	ctx.r11.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(r23.u32, r24.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x82309a60
	if (ctx.cr6.lt) goto loc_82309A60;
loc_82309CD4:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lhz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,52(r11)
	REX_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r7,r26
	ctx.r6.u64 = r26.u64 - ctx.r7.u64;
	// subf. r30,r30,r6
	r30.u64 = ctx.r6.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82309d28
	if (ctx.cr0.eq) goto loc_82309D28;
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
	ctx.lr = 0x82309D0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82309d28
	if (ctx.cr6.lt) goto loc_82309D28;
	// ld r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U64(r25.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r11.u64);
loc_82309D28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8231EE10) {
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
	// bl 0x822d4e58
	ctx.lr = 0x8231EE18;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,424(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 424);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lhz r7,118(r5)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r8,56(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lhz r23,728(r3)
	r23.u64 = REX_LOAD_U16(ctx.r3.u32 + 728);
	// extsh r22,r7
	r22.s64 = ctx.r7.s16;
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r24,0
	r24.s64 = 0;
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// li r21,1
	r21.s64 = 1;
	// extsh r6,r23
	ctx.r6.s64 = r23.s16;
	// addi r4,r23,1
	ctx.r4.s64 = r23.s64 + 1;
	// mr r30,r24
	r30.u64 = r24.u64;
	// lhz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// slw r19,r21,r6
	r19.u64 = ctx.r6.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r18,r4
	r18.s64 = ctx.r4.s16;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// add r20,r9,r8
	r20.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bge cr6,0x8231f398
	if (!ctx.cr6.lt) goto loc_8231F398;
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// add r8,r10,r22
	ctx.r8.u64 = ctx.r10.u64 + r22.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8231f398
	if (ctx.cr6.gt) goto loc_8231F398;
	// lhz r11,182(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 182);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8231f398
	if (ctx.cr6.gt) goto loc_8231F398;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8231f398
	if (ctx.cr6.lt) goto loc_8231F398;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8231f35c
	if (ctx.cr6.gt) goto loc_8231F35C;
	// li r16,2
	r16.s64 = 2;
	// li r17,3
	r17.s64 = 3;
	// li r29,9
	r29.s64 = 9;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4380
	ctx.r12.s64 = ctx.r12.s64 + -4380;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8231EF10;
	case 1:
		goto loc_8231F35C;
	case 2:
		goto loc_8231EF14;
	case 3:
		goto loc_8231EF54;
	case 4:
		goto loc_8231F35C;
	case 5:
		goto loc_8231F35C;
	case 6:
		goto loc_8231F35C;
	case 7:
		goto loc_8231F35C;
	case 8:
		goto loc_8231F35C;
	case 9:
		goto loc_8231EFA0;
	case 10:
		goto loc_8231EFE4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8231EF10:
	// stw r16,72(r31)
	REX_STORE_U32(r31.u32 + 72, r16.u32);
loc_8231EF14:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231EF24;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231ef48
	if (!ctx.cr6.eq) goto loc_8231EF48;
	// stw r17,72(r31)
	REX_STORE_U32(r31.u32 + 72, r17.u32);
	// stw r24,456(r26)
	REX_STORE_U32(r26.u32 + 456, r24.u32);
	// b 0x8231ef54
	goto loc_8231EF54;
loc_8231EF48:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// stw r11,456(r26)
	REX_STORE_U32(r26.u32 + 456, ctx.r11.u32);
loc_8231EF54:
	// lwz r11,456(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 456);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8231ef9c
	if (ctx.cr6.eq) goto loc_8231EF9C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(r22.u32, 1, ctx.xer);
	// ble cr6,0x8231ef7c
	if (!ctx.cr6.gt) goto loc_8231EF7C;
loc_8231EF6C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r11,r22,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (r22.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8231ef6c
	if (ctx.cr6.gt) goto loc_8231EF6C;
loc_8231EF7C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231EF88;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,456(r26)
	REX_STORE_U32(r26.u32 + 456, ctx.r11.u32);
loc_8231EF9C:
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
loc_8231EFA0:
	// lwz r11,192(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231efd4
	if (!ctx.cr6.eq) goto loc_8231EFD4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 110);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231EFBC;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r10,188(r26)
	REX_STORE_U32(r26.u32 + 188, ctx.r10.u32);
loc_8231EFD4:
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r24,80(r31)
	REX_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// sth r24,202(r25)
	REX_STORE_U16(r25.u32 + 202, r24.u16);
loc_8231EFE4:
	// lwz r11,192(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231f0f8
	if (!ctx.cr6.eq) goto loc_8231F0F8;
	// lhz r11,202(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231f0f8
	if (!ctx.cr6.eq) goto loc_8231F0F8;
	// lwz r11,184(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231f09c
	if (!ctx.cr6.eq) goto loc_8231F09C;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8231f01c
	if (ctx.cr6.lt) goto loc_8231F01C;
	// beq cr6,0x8231f044
	if (ctx.cr6.eq) goto loc_8231F044;
	// b 0x8231f0ec
	goto loc_8231F0EC;
loc_8231F01C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231F02C;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r21,80(r31)
	REX_STORE_U32(r31.u32 + 80, r21.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
loc_8231F044:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 110);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231F054;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lhz r11,110(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 110);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r10,r21,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8231f094
	if (ctx.cr6.eq) goto loc_8231F094;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8231F094:
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
	// b 0x8231f0ec
	goto loc_8231F0EC;
loc_8231F09C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231f0ec
	if (!ctx.cr6.eq) goto loc_8231F0EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r25)
	ctx.r4.u64 = REX_LOAD_U16(r25.u32 + 110);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231F0B4;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lhz r11,110(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 110);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231f0e8
	if (ctx.cr6.eq) goto loc_8231F0E8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// orc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ~ctx.r11.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8231F0E8:
	// stw r10,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r10.u32);
loc_8231F0EC:
	// lhz r11,202(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 202);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,202(r25)
	REX_STORE_U16(r25.u32 + 202, ctx.r10.u16);
loc_8231F0F8:
	// lhz r11,202(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// bge cr6,0x8231f354
	if (!ctx.cr6.lt) goto loc_8231F354;
loc_8231F108:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8231f2dc
	if (ctx.cr6.gt) goto loc_8231F2DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8231f154
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231F154;
	// bdzf 4*cr6+eq,0x8231f188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8231F188;
	// bne cr6,0x8231f218
	if (!ctx.cr6.eq) goto loc_8231F218;
	// addi r29,r31,200
	r29.s64 = r31.s64 + 200;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823198f0
	ctx.lr = 0x8231F138;
	sub_823198F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8231f214
	if (ctx.cr6.lt) goto loc_8231F214;
	// stw r21,76(r31)
	REX_STORE_U32(r31.u32 + 76, r21.u32);
loc_8231F154:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231F164;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x8231f398
	if (ctx.cr6.gt) goto loc_8231F398;
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stw r16,76(r31)
	REX_STORE_U32(r31.u32 + 76, r16.u32);
loc_8231F188:
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// bgt cr6,0x8231f19c
	if (ctx.cr6.gt) goto loc_8231F19C;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// b 0x8231f1f0
	goto loc_8231F1F0;
loc_8231F19C:
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8246e538
	ctx.lr = 0x8231F1A8;
	sub_8246E538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82319780
	ctx.lr = 0x8231F1C8;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r10.u32);
loc_8231F1F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82319780
	ctx.lr = 0x8231F1F8;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
loc_8231F214:
	// stw r17,76(r31)
	REX_STORE_U32(r31.u32 + 76, r17.u32);
loc_8231F218:
	// lwz r11,188(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 188);
	// extsh r10,r18
	ctx.r10.s64 = r18.s16;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r28,r24
	r28.u64 = r24.u64;
	// add r9,r11,r19
	ctx.r9.u64 = ctx.r11.u64 + r19.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8231f254
	if (!ctx.cr6.gt) goto loc_8231F254;
loc_8231F23C:
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8231f23c
	if (ctx.cr6.lt) goto loc_8231F23C;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(r28.u32, 24, ctx.xer);
	// bgt cr6,0x8231f278
	if (ctx.cr6.gt) goto loc_8231F278;
loc_8231F254:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82319780
	ctx.lr = 0x8231F264;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8231f2dc
	goto loc_8231F2DC;
loc_8231F278:
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8246e538
	ctx.lr = 0x8231F288;
	sub_8246E538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r28,-24
	ctx.r4.s64 = r28.s64 + -24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82319780
	ctx.lr = 0x8231F2A4;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,24
	ctx.r4.s64 = 24;
	// rlwinm r29,r11,24,0,7
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// bl 0x82319780
	ctx.lr = 0x8231F2C8;
	sub_82319780(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8231f3a0
	if (ctx.cr6.lt) goto loc_8231F3A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r27,r11,r29
	r27.u64 = ctx.r11.u64 + r29.u64;
loc_8231F2DC:
	// lwz r10,188(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 188);
	// extsh r9,r23
	ctx.r9.s64 = r23.s16;
	// lwz r8,200(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 200);
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r11,r8,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r28.u8 & 0x3F));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,188(r26)
	REX_STORE_U32(r26.u32 + 188, ctx.r5.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8231f314
	if (ctx.cr6.eq) goto loc_8231F314;
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
loc_8231F314:
	// lhz r10,202(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 202);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r20
	REX_STORE_U32(ctx.r8.u32 + r20.u32, ctx.r11.u32);
	// stw r24,76(r31)
	REX_STORE_U32(r31.u32 + 76, r24.u32);
	// stw r24,200(r31)
	REX_STORE_U32(r31.u32 + 200, r24.u32);
	// stw r24,208(r31)
	REX_STORE_U32(r31.u32 + 208, r24.u32);
	// lhz r7,202(r25)
	ctx.r7.u64 = REX_LOAD_U16(r25.u32 + 202);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,202(r25)
	REX_STORE_U16(r25.u32 + 202, ctx.r5.u16);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r22.s32, ctx.xer);
	// blt cr6,0x8231f108
	if (ctx.cr6.lt) goto loc_8231F108;
loc_8231F354:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
loc_8231F35C:
	// lwz r11,192(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231f374
	if (!ctx.cr6.eq) goto loc_8231F374;
	// lhz r11,118(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 118);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r10,452(r26)
	REX_STORE_U32(r26.u32 + 452, ctx.r10.u32);
loc_8231F374:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ec40
	ctx.lr = 0x8231F38C;
	sub_8231EC40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
loc_8231F398:
	// lis r30,-32764
	r30.s64 = -2147221504;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
loc_8231F3A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_8233C7E0) {
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
	// stw r30,21660(r3)
	REX_STORE_U32(ctx.r3.u32 + 21660, r30.u32);
	// stw r30,3468(r3)
	REX_STORE_U32(ctx.r3.u32 + 3468, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,3480(r3)
	REX_STORE_U32(ctx.r3.u32 + 3480, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,3476(r3)
	REX_STORE_U32(ctx.r3.u32 + 3476, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,21544(r3)
	REX_STORE_U32(ctx.r3.u32 + 21544, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,21868(r3)
	REX_STORE_U32(ctx.r3.u32 + 21868, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,21676(r3)
	REX_STORE_U32(ctx.r3.u32 + 21676, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,3488(r3)
	REX_STORE_U32(ctx.r3.u32 + 3488, r30.u32);
	// stw r10,21576(r3)
	REX_STORE_U32(ctx.r3.u32 + 21576, ctx.r10.u32);
	// stw r30,408(r3)
	REX_STORE_U32(ctx.r3.u32 + 408, r30.u32);
	// stw r30,21664(r3)
	REX_STORE_U32(ctx.r3.u32 + 21664, r30.u32);
	// stw r30,21672(r3)
	REX_STORE_U32(ctx.r3.u32 + 21672, r30.u32);
	// stw r30,21668(r3)
	REX_STORE_U32(ctx.r3.u32 + 21668, r30.u32);
	// stw r30,4020(r3)
	REX_STORE_U32(ctx.r3.u32 + 4020, r30.u32);
	// stw r30,21784(r3)
	REX_STORE_U32(ctx.r3.u32 + 21784, r30.u32);
	// stw r30,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, r30.u32);
	// stw r30,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, r30.u32);
	// stw r30,3728(r3)
	REX_STORE_U32(ctx.r3.u32 + 3728, r30.u32);
	// bl 0x823432e8
	ctx.lr = 0x8233C864;
	sub_823432E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233c8b0
	if (!ctx.cr6.eq) goto loc_8233C8B0;
	// lwz r10,22060(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22060);
	// lwz r11,22056(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22056);
	// lwz r9,21880(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21880);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r30,3732(r31)
	REX_STORE_U32(r31.u32 + 3732, r30.u32);
	// stw r30,21940(r31)
	REX_STORE_U32(r31.u32 + 21940, r30.u32);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8233c8ac
	if (ctx.cr6.gt) goto loc_8233C8AC;
	// lwz r9,21896(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21896);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8233c8ac
	if (ctx.cr6.gt) goto loc_8233C8AC;
	// lwz r11,21900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21900);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8233c8ac
	if (ctx.cr6.gt) goto loc_8233C8AC;
	// stw r30,21884(r31)
	REX_STORE_U32(r31.u32 + 21884, r30.u32);
	// b 0x8233c8b0
	goto loc_8233C8B0;
loc_8233C8AC:
	// li r3,-8
	ctx.r3.s64 = -8;
loc_8233C8B0:
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

DEFINE_REX_FUNC(sub_8233FF78) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8233d4c0
	sub_8233D4C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233FF80) {
	REX_FUNC_PROLOGUE();
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233ff98
	if (ctx.cr6.eq) goto loc_8233FF98;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// b 0x8232eb88
	sub_8232EB88(ctx, base);
	return;
loc_8233FF98:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8233d4c0
	sub_8233D4C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82340398) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x823403A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8234047c
	if (ctx.cr6.lt) goto loc_8234047C;
	// lwz r11,3940(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823406f4
	if (ctx.cr6.eq) goto loc_823406F4;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
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
	// bge cr6,0x82340434
	if (!ctx.cr6.lt) goto loc_82340434;
loc_823403DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340434
	if (ctx.cr6.eq) goto loc_82340434;
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
	// bge 0x82340424
	if (!ctx.cr0.lt) goto loc_82340424;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340424;
	sub_823380C8(ctx, base);
loc_82340424:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823403dc
	if (ctx.cr6.gt) goto loc_823403DC;
loc_82340434:
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
	// bge 0x8234046c
	if (!ctx.cr0.lt) goto loc_8234046C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234046C;
	sub_823380C8(ctx, base);
loc_8234046C:
	// stw r30,4004(r27)
	REX_STORE_U32(r27.u32 + 4004, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8234047C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r28,0
	r28.s64 = 0;
	// li r30,5
	r30.s64 = 5;
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x823404f4
	if (!ctx.cr6.lt) goto loc_823404F4;
loc_8234049C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823404f4
	if (ctx.cr6.eq) goto loc_823404F4;
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
	// bge 0x823404e4
	if (!ctx.cr0.lt) goto loc_823404E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823404E4;
	sub_823380C8(ctx, base);
loc_823404E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234049c
	if (ctx.cr6.gt) goto loc_8234049C;
loc_823404F4:
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
	// bge 0x8234052c
	if (!ctx.cr0.lt) goto loc_8234052C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234052C;
	sub_823380C8(ctx, base);
loc_8234052C:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234055c
	if (ctx.cr6.eq) goto loc_8234055C;
loc_8234053C:
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r28,3956(r27)
	REX_STORE_U32(r27.u32 + 3956, r28.u32);
	// li r10,500
	ctx.r10.s64 = 500;
	// stw r11,3712(r27)
	REX_STORE_U32(r27.u32 + 3712, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,3716(r27)
	REX_STORE_U32(r27.u32 + 3716, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8234055C:
	// lwz r11,3712(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234056c
	if (!ctx.cr6.eq) goto loc_8234056C;
	// stw r30,3712(r27)
	REX_STORE_U32(r27.u32 + 3712, r30.u32);
loc_8234056C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,11
	r30.s64 = 11;
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x823405dc
	if (!ctx.cr6.lt) goto loc_823405DC;
loc_82340584:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823405dc
	if (ctx.cr6.eq) goto loc_823405DC;
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
	// bge 0x823405cc
	if (!ctx.cr0.lt) goto loc_823405CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823405CC;
	sub_823380C8(ctx, base);
loc_823405CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340584
	if (ctx.cr6.gt) goto loc_82340584;
loc_823405DC:
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
	// bge 0x82340614
	if (!ctx.cr0.lt) goto loc_82340614;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82340614;
	sub_823380C8(ctx, base);
loc_82340614:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r30,3716(r27)
	REX_STORE_U32(r27.u32 + 3716, r30.u32);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// stw r30,-30188(r11)
	REX_STORE_U32(ctx.r11.u32 + -30188, r30.u32);
	// lwz r11,3712(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3712);
	// stw r11,-30184(r10)
	REX_STORE_U32(ctx.r10.u32 + -30184, ctx.r11.u32);
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8234053c
	if (!ctx.cr6.eq) goto loc_8234053C;
	// lwz r11,15536(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 15536);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823406f4
	if (ctx.cr6.eq) goto loc_823406F4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823406b8
	if (!ctx.cr6.lt) goto loc_823406B8;
loc_82340660:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823406b8
	if (ctx.cr6.eq) goto loc_823406B8;
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
	// bge 0x823406a8
	if (!ctx.cr0.lt) goto loc_823406A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823406A8;
	sub_823380C8(ctx, base);
loc_823406A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82340660
	if (ctx.cr6.gt) goto loc_82340660;
loc_823406B8:
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
	// bge 0x823406f0
	if (!ctx.cr0.lt) goto loc_823406F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823406F0;
	sub_823380C8(ctx, base);
loc_823406F0:
	// stw r30,3956(r27)
	REX_STORE_U32(r27.u32 + 3956, r30.u32);
loc_823406F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8235A648) {
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
	// bl 0x822d4e70
	ctx.lr = 0x8235A650;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235a9ac
	if (ctx.cr6.eq) goto loc_8235A9AC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8235a9ac
	if (ctx.cr6.eq) goto loc_8235A9AC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8235a9ac
	if (ctx.cr6.eq) goto loc_8235A9AC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8235a9ac
	if (ctx.cr6.eq) goto loc_8235A9AC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235a9ac
	if (ctx.cr6.eq) goto loc_8235A9AC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235a9ac
	if (ctx.cr6.eq) goto loc_8235A9AC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235a9ac
	if (ctx.cr6.eq) goto loc_8235A9AC;
	// lwz r29,292(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8235a9ac
	if (ctx.cr6.eq) goto loc_8235A9AC;
	// lwz r30,300(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8235a9ac
	if (ctx.cr6.eq) goto loc_8235A9AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16896(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16896);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8235a738
	if (!ctx.cr6.eq) goto loc_8235A738;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mullw r5,r9,r11
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// bl 0x822d5870
	ctx.lr = 0x8235A6E0;
	sub_822D5870(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x822d5870
	ctx.lr = 0x8235A700;
	sub_822D5870(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x822d5870
	ctx.lr = 0x8235A720;
	sub_822D5870(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
loc_8235A738:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8235a750
	if (!ctx.cr6.lt) goto loc_8235A750;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// b 0x8235a76c
	goto loc_8235A76C;
loc_8235A750:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// lfs f13,27892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27892);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
loc_8235A76C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// lfs f30,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f30.f64 = double(temp.f32);
	// mr r27,r29
	r27.u64 = r29.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// srawi r25,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r25.s64 = ctx.r9.s32 >> 1;
	// lfd f31,-28656(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -28656);
	// fmul f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 * f31.f64;
	// bl 0x822d4c88
	ctx.lr = 0x8235A798;
	sub_822D4C88(ctx, base);
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fmul f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 * f31.f64;
	// bl 0x822d4d68
	ctx.lr = 0x8235A7A8;
	sub_822D4D68(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// ble cr6,0x8235a904
	if (!ctx.cr6.gt) goto loc_8235A904;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f6,-28660(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28660);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,-28664(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -28664);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lfs f8,-17376(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -17376);
	ctx.f8.f64 = double(temp.f32);
	// lfd f10,4000(r5)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r5.u32 + 4000);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lfs f11,1992(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f9,1996(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1996);
	ctx.f9.f64 = double(temp.f32);
	// ori r5,r10,65535
	ctx.r5.u64 = ctx.r10.u64 | 65535;
	// ori r6,r9,1
	ctx.r6.u64 = ctx.r9.u64 | 1;
loc_8235A810:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f29,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f12.f64)));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x8235a8d4
	if (!ctx.cr6.gt) goto loc_8235A8D4;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfd f5,88(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmadds f1,f3,f30,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, f30.f64, ctx.f2.f64)));
	// fadd f13,f1,f10
	ctx.f13.f64 = ctx.f1.f64 + ctx.f10.f64;
	// fctiwz f5,f13
	ctx.f5.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.f5.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8235a8d0
	if (ctx.cr6.lt) goto loc_8235A8D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8235a8d0
	if (!ctx.cr6.lt) goto loc_8235A8D0;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// slw r7,r4,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// or r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 | ctx.r9.u64;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// ble cr6,0x8235a8b0
	if (!ctx.cr6.gt) goto loc_8235A8B0;
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// b 0x8235a8d4
	goto loc_8235A8D4;
loc_8235A8B0:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bge cr6,0x8235a8c0
	if (!ctx.cr6.lt) goto loc_8235A8C0;
	// stwx r6,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x8235a8d4
	goto loc_8235A8D4;
loc_8235A8C0:
	// fmuls f0,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.f13.u32);
	// b 0x8235a8d4
	goto loc_8235A8D4;
loc_8235A8D0:
	// stwx r30,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r30.u32);
loc_8235A8D4:
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x8235a8f0
	if (!ctx.cr6.eq) goto loc_8235A8F0;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// stbx r7,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_8235A8F0:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235a810
	if (ctx.cr6.lt) goto loc_8235A810;
loc_8235A904:
	// clrlwi r11,r8,29
	ctx.r11.u64 = ctx.r8.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235a91c
	if (ctx.cr6.eq) goto loc_8235A91C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// srawi r10,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
loc_8235A91C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235a954
	if (!ctx.cr6.gt) goto loc_8235A954;
loc_8235A92C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82359e28
	ctx.lr = 0x8235A940;
	sub_82359E28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235a92c
	if (ctx.cr6.lt) goto loc_8235A92C;
loc_8235A954:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235a994
	if (!ctx.cr6.gt) goto loc_8235A994;
loc_8235A960:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8235a270
	ctx.lr = 0x8235A97C;
	sub_8235A270(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r28,r25,r28
	r28.u64 = r25.u64 + r28.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235a960
	if (ctx.cr6.lt) goto loc_8235A960;
loc_8235A994:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
loc_8235A9AC:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82365438) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82365440;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,15720(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 15720);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r10,3396(r3)
	REX_STORE_U32(ctx.r3.u32 + 3396, ctx.r10.u32);
	// addi r29,r11,8
	r29.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365474
	if (ctx.cr6.eq) goto loc_82365474;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x82365470;
	sub_8233FF80(ctx, base);
	// stw r30,15720(r31)
	REX_STORE_U32(r31.u32 + 15720, r30.u32);
loc_82365474:
	// lwz r4,15728(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15728);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236548c
	if (ctx.cr6.eq) goto loc_8236548C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x82365488;
	sub_8233FF80(ctx, base);
	// stw r30,15728(r31)
	REX_STORE_U32(r31.u32 + 15728, r30.u32);
loc_8236548C:
	// lwz r4,15724(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15724);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823654a4
	if (ctx.cr6.eq) goto loc_823654A4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x823654A0;
	sub_8233FF80(ctx, base);
	// stw r30,15724(r31)
	REX_STORE_U32(r31.u32 + 15724, r30.u32);
loc_823654A4:
	// lwz r4,15732(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15732);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823654bc
	if (ctx.cr6.eq) goto loc_823654BC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x823654B8;
	sub_8233FF80(ctx, base);
	// stw r30,15732(r31)
	REX_STORE_U32(r31.u32 + 15732, r30.u32);
loc_823654BC:
	// lwz r11,24688(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24688);
	// lwz r10,712(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82365510
	if (ctx.cr6.eq) goto loc_82365510;
	// lwz r11,17376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 17376);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82365510
	if (ctx.cr6.eq) goto loc_82365510;
	// stw r30,15736(r31)
	REX_STORE_U32(r31.u32 + 15736, r30.u32);
	// stw r30,15744(r31)
	REX_STORE_U32(r31.u32 + 15744, r30.u32);
	// stw r30,15752(r31)
	REX_STORE_U32(r31.u32 + 15752, r30.u32);
	// stw r30,15760(r31)
	REX_STORE_U32(r31.u32 + 15760, r30.u32);
	// stw r30,15768(r31)
	REX_STORE_U32(r31.u32 + 15768, r30.u32);
	// stw r30,15776(r31)
	REX_STORE_U32(r31.u32 + 15776, r30.u32);
	// stw r30,15784(r31)
	REX_STORE_U32(r31.u32 + 15784, r30.u32);
	// stw r30,15792(r31)
	REX_STORE_U32(r31.u32 + 15792, r30.u32);
	// stw r30,15800(r31)
	REX_STORE_U32(r31.u32 + 15800, r30.u32);
	// stw r30,15808(r31)
	REX_STORE_U32(r31.u32 + 15808, r30.u32);
	// stw r30,15816(r31)
	REX_STORE_U32(r31.u32 + 15816, r30.u32);
	// stw r30,15824(r31)
	REX_STORE_U32(r31.u32 + 15824, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_82365510:
	// lwz r4,15736(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15736);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365528
	if (ctx.cr6.eq) goto loc_82365528;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x82365524;
	sub_8233FF80(ctx, base);
	// stw r30,15736(r31)
	REX_STORE_U32(r31.u32 + 15736, r30.u32);
loc_82365528:
	// lwz r4,15744(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15744);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365540
	if (ctx.cr6.eq) goto loc_82365540;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x8236553C;
	sub_8233FF80(ctx, base);
	// stw r30,15744(r31)
	REX_STORE_U32(r31.u32 + 15744, r30.u32);
loc_82365540:
	// lwz r4,15752(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15752);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365558
	if (ctx.cr6.eq) goto loc_82365558;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x82365554;
	sub_8233FF80(ctx, base);
	// stw r30,15752(r31)
	REX_STORE_U32(r31.u32 + 15752, r30.u32);
loc_82365558:
	// lwz r4,15760(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15760);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365570
	if (ctx.cr6.eq) goto loc_82365570;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x8236556C;
	sub_8233FF80(ctx, base);
	// stw r30,15760(r31)
	REX_STORE_U32(r31.u32 + 15760, r30.u32);
loc_82365570:
	// lwz r4,15768(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15768);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365588
	if (ctx.cr6.eq) goto loc_82365588;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x82365584;
	sub_8233FF80(ctx, base);
	// stw r30,15768(r31)
	REX_STORE_U32(r31.u32 + 15768, r30.u32);
loc_82365588:
	// lwz r4,15776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15776);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823655a0
	if (ctx.cr6.eq) goto loc_823655A0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x8236559C;
	sub_8233FF80(ctx, base);
	// stw r30,15776(r31)
	REX_STORE_U32(r31.u32 + 15776, r30.u32);
loc_823655A0:
	// lwz r4,15784(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823655b8
	if (ctx.cr6.eq) goto loc_823655B8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x823655B4;
	sub_8233FF80(ctx, base);
	// stw r30,15784(r31)
	REX_STORE_U32(r31.u32 + 15784, r30.u32);
loc_823655B8:
	// lwz r4,15792(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15792);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823655d0
	if (ctx.cr6.eq) goto loc_823655D0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x823655CC;
	sub_8233FF80(ctx, base);
	// stw r30,15792(r31)
	REX_STORE_U32(r31.u32 + 15792, r30.u32);
loc_823655D0:
	// lwz r4,15800(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15800);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823655e8
	if (ctx.cr6.eq) goto loc_823655E8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x823655E4;
	sub_8233FF80(ctx, base);
	// stw r30,15800(r31)
	REX_STORE_U32(r31.u32 + 15800, r30.u32);
loc_823655E8:
	// lwz r4,15808(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15808);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365600
	if (ctx.cr6.eq) goto loc_82365600;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x823655FC;
	sub_8233FF80(ctx, base);
	// stw r30,15808(r31)
	REX_STORE_U32(r31.u32 + 15808, r30.u32);
loc_82365600:
	// lwz r4,15816(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15816);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365618
	if (ctx.cr6.eq) goto loc_82365618;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x82365614;
	sub_8233FF80(ctx, base);
	// stw r30,15816(r31)
	REX_STORE_U32(r31.u32 + 15816, r30.u32);
loc_82365618:
	// lwz r4,15824(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15824);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365630
	if (ctx.cr6.eq) goto loc_82365630;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff80
	ctx.lr = 0x8236562C;
	sub_8233FF80(ctx, base);
	// stw r30,15824(r31)
	REX_STORE_U32(r31.u32 + 15824, r30.u32);
loc_82365630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8236D928) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x8236D930;
	// lwz r30,0(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r21,0
	r21.s64 = 0;
	// lwz r31,136(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r21
	r25.u64 = r21.u64;
	// mullw r11,r31,r30
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// stw r21,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r21.u32);
	// stw r21,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, r21.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r31,6,0,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r24,r21
	r24.u64 = r21.u64;
	// rlwinm r20,r30,5,0,26
	r20.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r19,r10,5,0,26
	r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r26,r21
	r26.u64 = r21.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r18,r31,-4
	r18.s64 = r31.s64 + -4;
	// bne cr6,0x8236dca0
	if (!ctx.cr6.eq) goto loc_8236DCA0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8236d9a4
	if (ctx.cr6.eq) goto loc_8236D9A4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r26,1
	r26.s64 = 1;
	// add r31,r9,r6
	r31.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lhz r31,-2(r31)
	r31.u64 = REX_LOAD_U16(r31.u32 + -2);
	// lhz r9,-2(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r29,r31
	r29.s64 = r31.s16;
	// extsh r27,r9
	r27.s64 = ctx.r9.s16;
	// b 0x8236d9f0
	goto loc_8236D9F0;
loc_8236D9A4:
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8236d9e8
	if (!ctx.cr6.eq) goto loc_8236D9E8;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_8236D9D0:
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x8236dcd0
	if (!ctx.cr6.eq) goto loc_8236DCD0;
loc_8236D9D8:
	// stw r21,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r21.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r21,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r21.u32);
	// b 0x822d4eb0
	return;
loc_8236D9E8:
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
loc_8236D9F0:
	// addi r9,r29,-16384
	ctx.r9.s64 = r29.s64 + -16384;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r22,r9,27,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8236da0c
	if (ctx.cr6.eq) goto loc_8236DA0C;
	// mr r27,r21
	r27.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_8236DA0C:
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r9,r6
	r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// lhzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// addi r9,r31,-16384
	ctx.r9.s64 = r31.s64 + -16384;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r23,r9,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8236da48
	if (ctx.cr6.eq) goto loc_8236DA48;
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_8236DA48:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8236daa0
	if (ctx.cr6.eq) goto loc_8236DAA0;
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// beq cr6,0x8236da84
	if (ctx.cr6.eq) goto loc_8236DA84;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// b 0x8236db1c
	goto loc_8236DB1C;
loc_8236DA84:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// b 0x8236db1c
	goto loc_8236DB1C;
loc_8236DAA0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8236dafc
	if (ctx.cr6.eq) goto loc_8236DAFC;
	// xor r9,r30,r10
	ctx.r9.u64 = r30.u64 ^ ctx.r10.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8236dad0
	if (ctx.cr6.eq) goto loc_8236DAD0;
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// blt cr6,0x8236dad4
	if (ctx.cr6.lt) goto loc_8236DAD4;
loc_8236DAD0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8236DAD4:
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r10,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lhzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// b 0x8236db1c
	goto loc_8236DB1C;
loc_8236DAFC:
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
loc_8236DB1C:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r9,r11,-16384
	ctx.r9.s64 = ctx.r11.s64 + -16384;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8236db40
	if (ctx.cr6.eq) goto loc_8236DB40;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8236DB40:
	// addic. r8,r26,2
	ctx.xer.ca = r26.u32 > 4294967293;
	ctx.r8.s64 = r26.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8236d9d8
	if (ctx.cr0.eq) goto loc_8236D9D8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8236db80
	if (ctx.cr6.eq) goto loc_8236DB80;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x8236db80
	if (!ctx.cr6.eq) goto loc_8236DB80;
	// rlwinm r8,r27,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8236db74
	if (ctx.cr6.eq) goto loc_8236DB74;
	// stw r29,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r29.u32);
	// li r24,1
	r24.s64 = 1;
	// stw r27,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, r27.u32);
	// b 0x8236db80
	goto loc_8236DB80;
loc_8236DB74:
	// stw r29,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, r29.u32);
	// li r25,1
	r25.s64 = 1;
	// stw r27,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r27.u32);
loc_8236DB80:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x8236dbc0
	if (!ctx.cr6.eq) goto loc_8236DBC0;
	// rlwinm r8,r28,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8236dba8
	if (ctx.cr6.eq) goto loc_8236DBA8;
	// rlwinm r8,r24,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x8236dbb8
	goto loc_8236DBB8;
loc_8236DBA8:
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r6,r1,-176
	ctx.r6.s64 = ctx.r1.s64 + -176;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8236DBB8:
	// stwx r28,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, r28.u32);
	// stwx r31,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, r31.u32);
loc_8236DBC0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236dc00
	if (!ctx.cr6.eq) goto loc_8236DC00;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8236dbe8
	if (ctx.cr6.eq) goto loc_8236DBE8;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x8236dbf8
	goto loc_8236DBF8;
loc_8236DBE8:
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// addi r7,r1,-176
	ctx.r7.s64 = ctx.r1.s64 + -176;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8236DBF8:
	// stwx r10,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
loc_8236DC00:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// beq cr6,0x8236dc34
	if (ctx.cr6.eq) goto loc_8236DC34;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(r24.s32, 3, ctx.xer);
	// beq cr6,0x8236dc34
	if (ctx.cr6.eq) goto loc_8236DC34;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(r25.s32, r24.s32, ctx.xer);
	// ble cr6,0x8236dc24
	if (!ctx.cr6.gt) goto loc_8236DC24;
loc_8236DC18:
	// lwz r10,-192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lwz r11,-176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// b 0x8236d9d0
	goto loc_8236D9D0;
loc_8236DC24:
	// bge cr6,0x8236dc18
	if (!ctx.cr6.lt) goto loc_8236DC18;
	// lwz r10,-160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r11,-144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -144);
	// b 0x8236d9d0
	goto loc_8236D9D0;
loc_8236DC34:
	// subf r8,r11,r31
	ctx.r8.u64 = r31.u64 - ctx.r11.u64;
	// subf r9,r29,r31
	ctx.r9.u64 = r31.u64 - r29.u64;
	// subf r7,r29,r11
	ctx.r7.u64 = ctx.r11.u64 - r29.u64;
	// subf r30,r10,r28
	r30.u64 = r28.u64 - ctx.r10.u64;
	// subf r6,r27,r28
	ctx.r6.u64 = r28.u64 - r27.u64;
	// xor r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r26,r27,r10
	r26.u64 = ctx.r10.u64 - r27.u64;
	// xor r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// xor r30,r30,r6
	r30.u64 = r30.u64 ^ ctx.r6.u64;
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// xor r6,r26,r6
	ctx.r6.u64 = r26.u64 ^ ctx.r6.u64;
	// srawi r8,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 31;
	// srawi r7,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r30.s32 >> 31;
	// srawi r6,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// or r30,r9,r8
	r30.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r26,r7,r6
	r26.u64 = ctx.r7.u64 | ctx.r6.u64;
	// andc r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ~r30.u64;
	// and r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & r31.u64;
	// andc r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & ~r26.u64;
	// and r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & r28.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// and r9,r8,r29
	ctx.r9.u64 = ctx.r8.u64 & r29.u64;
	// or r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r7,r6,r27
	ctx.r7.u64 = ctx.r6.u64 & r27.u64;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// b 0x8236d9d0
	goto loc_8236D9D0;
loc_8236DCA0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8236dcc8
	if (ctx.cr6.eq) goto loc_8236DCC8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r8,-2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r7,-2(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -2);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// b 0x8236d9d0
	goto loc_8236D9D0;
loc_8236DCC8:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8236DCD0:
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,140(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// beq cr6,0x8236dcf0
	if (ctx.cr6.eq) goto loc_8236DCF0;
	// li r7,-124
	ctx.r7.s64 = -124;
	// addi r6,r9,-8
	ctx.r6.s64 = ctx.r9.s64 + -8;
	// b 0x8236dcf8
	goto loc_8236DCF8;
loc_8236DCF0:
	// li r7,-120
	ctx.r7.s64 = -120;
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
loc_8236DCF8:
	// add r9,r10,r19
	ctx.r9.u64 = ctx.r10.u64 + r19.u64;
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + r20.u64;
	// cmpwi cr6,r9,-60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -60, ctx.xer);
	// bge cr6,0x8236dd14
	if (!ctx.cr6.lt) goto loc_8236DD14;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r10,r10,-60
	ctx.r10.s64 = ctx.r10.s64 + -60;
	// b 0x8236dd24
	goto loc_8236DD24;
loc_8236DD14:
	// cmpw cr6,r9,r18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r18.s32, ctx.xer);
	// ble cr6,0x8236dd24
	if (!ctx.cr6.gt) goto loc_8236DD24;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + r18.u64;
loc_8236DD24:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8236dd44
	if (!ctx.cr6.lt) goto loc_8236DD44;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x822d4eb0
	return;
loc_8236DD44:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8236dd54
	if (!ctx.cr6.gt) goto loc_8236DD54;
	// subf r9,r8,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8236DD54:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_8237EFC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x8237EFC8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r31,272(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237f07c
	if (!ctx.cr6.gt) goto loc_8237F07C;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
loc_8237EFE8:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237f06c
	if (!ctx.cr6.gt) goto loc_8237F06C;
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8237EFFC:
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// addi r5,r31,-10
	ctx.r5.s64 = r31.s64 + -10;
	// cntlzw r9,r30
	ctx.r9.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r10,r31,14
	ctx.r10.s64 = r31.s64 + 14;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,-16
	ctx.r9.s64 = r31.s64 + -16;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// addi r7,r31,8
	ctx.r7.s64 = r31.s64 + 8;
	// addi r5,r11,14
	ctx.r5.s64 = ctx.r11.s64 + 14;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r6,r6,24,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x7;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82387ef8
	ctx.lr = 0x8237F058;
	sub_82387EF8(ctx, base);
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8237effc
	if (ctx.cr6.lt) goto loc_8237EFFC;
loc_8237F06C:
	// lwz r10,140(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 140);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8237efe8
	if (ctx.cr6.lt) goto loc_8237EFE8;
loc_8237F07C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82387418) {
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
	// bl 0x822d4e50
	ctx.lr = 0x82387420;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r25,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	r25.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// subfic r24,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	r24.u64 = static_cast<uint64_t>(-1) - ctx.r4.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subfic r23,r4,-2
	ctx.xer.ca = ctx.r4.u32 <= 4294967294;
	r23.u64 = static_cast<uint64_t>(-2) - ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r22,r4,-3
	ctx.xer.ca = ctx.r4.u32 <= 4294967293;
	r22.u64 = static_cast<uint64_t>(-3) - ctx.r4.u64;
	// subfic r21,r4,-4
	ctx.xer.ca = ctx.r4.u32 <= 4294967292;
	r21.u64 = static_cast<uint64_t>(-4) - ctx.r4.u64;
	// subfic r20,r4,-5
	ctx.xer.ca = ctx.r4.u32 <= 4294967291;
	r20.u64 = static_cast<uint64_t>(-5) - ctx.r4.u64;
	// add r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r7,r9,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r9.u64;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subfic r6,r4,-6
	ctx.xer.ca = ctx.r4.u32 <= 4294967290;
	ctx.r6.u64 = static_cast<uint64_t>(-6) - ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// stw r6,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r6.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r19,r4,1
	r19.s64 = ctx.r4.s64 + 1;
	// addi r18,r4,-1
	r18.s64 = ctx.r4.s64 + -1;
	// addi r17,r4,-2
	r17.s64 = ctx.r4.s64 + -2;
	// addi r16,r4,-3
	r16.s64 = ctx.r4.s64 + -3;
	// addi r15,r4,-4
	r15.s64 = ctx.r4.s64 + -4;
	// addi r14,r4,-5
	r14.s64 = ctx.r4.s64 + -5;
	// addi r5,r4,-6
	ctx.r5.s64 = ctx.r4.s64 + -6;
	// b 0x82387498
	goto loc_82387498;
loc_82387494:
	// lwz r6,-160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
loc_82387498:
	// lbzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r31,r20,r11
	r31.u64 = REX_LOAD_U8(r20.u32 + ctx.r11.u32);
	// lbzx r30,r21,r11
	r30.u64 = REX_LOAD_U8(r21.u32 + ctx.r11.u32);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// lbz r3,-5(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -5);
	// lbz r6,-6(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// lbzx r29,r22,r11
	r29.u64 = REX_LOAD_U8(r22.u32 + ctx.r11.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r30,-4(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -4);
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// lbzx r29,r17,r11
	r29.u64 = REX_LOAD_U8(r17.u32 + ctx.r11.u32);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// lbzx r3,r16,r11
	ctx.r3.u64 = REX_LOAD_U8(r16.u32 + ctx.r11.u32);
	// lbzx r30,r23,r11
	r30.u64 = REX_LOAD_U8(r23.u32 + ctx.r11.u32);
	// lbz r28,-3(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// lbzx r29,r18,r11
	r29.u64 = REX_LOAD_U8(r18.u32 + ctx.r11.u32);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// lbz r28,-5(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + -5);
	// lbz r30,-6(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -6);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// lbzx r27,r24,r11
	r27.u64 = REX_LOAD_U8(r24.u32 + ctx.r11.u32);
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// lbz r29,-2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// lbzx r28,r19,r11
	r28.u64 = REX_LOAD_U8(r19.u32 + ctx.r11.u32);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + r29.u64;
	// lbz r27,-4(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -4);
	// lbzx r29,r25,r11
	r29.u64 = REX_LOAD_U8(r25.u32 + ctx.r11.u32);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// lbz r28,-1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// lbzx r27,r5,r11
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// add r28,r6,r28
	r28.u64 = ctx.r6.u64 + r28.u64;
	// lbz r29,-3(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -3);
	// lbzux r6,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// lbz r26,1(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzx r27,r11,r4
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lbz r6,-2(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// add r30,r31,r30
	r30.u64 = r31.u64 + r30.u64;
	// lbz r26,0(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// lbzx r31,r14,r11
	r31.u64 = REX_LOAD_U8(r14.u32 + ctx.r11.u32);
	// lbz r27,-1(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r6,r29,r6
	ctx.r6.u64 = r29.u64 + ctx.r6.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// lbzx r29,r15,r11
	r29.u64 = REX_LOAD_U8(r15.u32 + ctx.r11.u32);
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// add r8,r28,r8
	ctx.r8.u64 = r28.u64 + ctx.r8.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x82387494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82387494;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lwz r11,36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r3,r9,r11
	ctx.r3.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8238D030) {
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
	// bl 0x822d4e58
	ctx.lr = 0x8238D038;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3772(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3772);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r18,128(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r17,132(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d060
	if (!ctx.cr6.eq) goto loc_8238D060;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
loc_8238D060:
	// lwz r7,3772(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// lwz r10,15692(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15692);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// add r24,r10,r4
	r24.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r8,220(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r6,15956(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15956);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// add r25,r8,r9
	r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r22,r7,r11
	r22.u64 = ctx.r7.u64 + ctx.r11.u64;
	// beq cr6,0x8238d120
	if (ctx.cr6.eq) goto loc_8238D120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,156(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r29,160(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x8232ed78
	ctx.lr = 0x8238D0A8;
	sub_8232ED78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d0b8
	if (ctx.cr6.eq) goto loc_8238D0B8;
	// lwz r28,15372(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// lwz r29,15376(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15376);
loc_8238D0B8:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8238d2a4
	if (ctx.cr6.eq) goto loc_8238D2A4;
loc_8238D0C4:
	// lwz r11,15956(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15956);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238D0E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r10,15684(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15684);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// add r25,r9,r25
	r25.u64 = ctx.r9.u64 + r25.u64;
	// add r24,r10,r24
	r24.u64 = ctx.r10.u64 + r24.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// blt cr6,0x8238d0c4
	if (ctx.cr6.lt) goto loc_8238D0C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
loc_8238D120:
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8238d2a4
	if (ctx.cr6.eq) goto loc_8238D2A4;
loc_8238D12C:
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8238d27c
	if (ctx.cr6.eq) goto loc_8238D27C;
	// addi r20,r18,-1
	r20.s64 = r18.s64 + -1;
	// addi r19,r17,-1
	r19.s64 = r17.s64 + -1;
	// subf r23,r26,r22
	r23.u64 = r22.u64 - r26.u64;
loc_8238D150:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// beq cr6,0x8238d190
	if (ctx.cr6.eq) goto loc_8238D190;
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(r21.u32, r19.u32, ctx.xer);
	// beq cr6,0x8238d190
	if (ctx.cr6.eq) goto loc_8238D190;
	// lwz r11,15936(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15936);
	// add r7,r23,r30
	ctx.r7.u64 = r23.u64 + r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,15684(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15684);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238D18C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8238d260
	goto loc_8238D260;
loc_8238D190:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232ed78
	ctx.lr = 0x8238D198;
	sub_8232ED78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d1dc
	if (ctx.cr6.eq) goto loc_8238D1DC;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// beq cr6,0x8238d1b0
	if (ctx.cr6.eq) goto loc_8238D1B0;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8238d1c0
	goto loc_8238D1C0;
loc_8238D1B0:
	// lwz r10,15380(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15380);
	// lwz r11,15372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_8238D1C0:
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(r21.u32, r19.u32, ctx.xer);
	// beq cr6,0x8238d1d0
	if (ctx.cr6.eq) goto loc_8238D1D0;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8238d234
	goto loc_8238D234;
loc_8238D1D0:
	// lwz r11,15384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15384);
	// lwz r9,15376(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// b 0x8238d214
	goto loc_8238D214;
loc_8238D1DC:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// beq cr6,0x8238d1ec
	if (ctx.cr6.eq) goto loc_8238D1EC;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8238d1fc
	goto loc_8238D1FC;
loc_8238D1EC:
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_8238D1FC:
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(r21.u32, r19.u32, ctx.xer);
	// beq cr6,0x8238d20c
	if (ctx.cr6.eq) goto loc_8238D20C;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8238d234
	goto loc_8238D234;
loc_8238D20C:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r9,160(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 160);
loc_8238D214:
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subfic r11,r6,16
	ctx.xer.ca = ctx.r6.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r6.u64;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8238D234:
	// lwz r16,15940(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 15940);
	// add r7,r23,r30
	ctx.r7.u64 = r23.u64 + r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
	// bctrl 
	ctx.lr = 0x8238D260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8238D260:
	// lwz r11,15696(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15696);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(r27.u32, r18.u32, ctx.xer);
	// blt cr6,0x8238d150
	if (ctx.cr6.lt) goto loc_8238D150;
loc_8238D27C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,15708(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15708);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r25,r25,r9
	r25.u64 = r25.u64 + ctx.r9.u64;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// add r24,r10,r24
	r24.u64 = ctx.r10.u64 + r24.u64;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(r21.u32, r17.u32, ctx.xer);
	// blt cr6,0x8238d12c
	if (ctx.cr6.lt) goto loc_8238D12C;
loc_8238D2A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_82393B00) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x82393B08;
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82393bcc
	if (!ctx.cr6.gt) goto loc_82393BCC;
	// addi r31,r7,-2
	r31.s64 = ctx.r7.s64 + -2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r31,2,0,29
	r25.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r30
	r26.u64 = ctx.r11.u64 + r30.u64;
	// addi r28,r7,-1
	r28.s64 = ctx.r7.s64 + -1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
loc_82393B30:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82393b60
	if (!ctx.cr6.gt) goto loc_82393B60;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r30,-8
	ctx.r3.s64 = r30.s64 + -8;
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// subf r6,r11,r29
	ctx.r6.u64 = r29.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_82393B54:
	// lbzux r31,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// stwu r31,8(r3)
	ea = 8 + ctx.r3.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x82393b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393B54;
loc_82393B60:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// ble cr6,0x82393b94
	if (!ctx.cr6.gt) goto loc_82393B94;
	// addi r6,r28,-2
	ctx.r6.s64 = r28.s64 + -2;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82393B7C:
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// stwu r6,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82393b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393B7C;
loc_82393B94:
	// lwzx r11,r25,r30
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + r30.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,-4(r26)
	REX_STORE_U32(r26.u32 + -4, ctx.r11.u32);
	// ble cr6,0x82393bc0
	if (!ctx.cr6.gt) goto loc_82393BC0;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r6,r10,r29
	ctx.r6.u64 = r29.u64 - ctx.r10.u64;
loc_82393BB0:
	// lwzu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// stbux r3,r6,r10
	ea = ctx.r6.u32 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r3.u8);
	ctx.r6.u32 = ea;
	// bdnz 0x82393bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393BB0;
loc_82393BC0:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x82393b30
	if (!ctx.cr0.eq) goto loc_82393B30;
loc_82393BCC:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82393d4c
	if (!ctx.cr6.gt) goto loc_82393D4C;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// addi r31,r9,-1
	r31.s64 = ctx.r9.s64 + -1;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
loc_82393BF0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82393c20
	if (!ctx.cr6.gt) goto loc_82393C20;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r30,-8
	ctx.r7.s64 = r30.s64 + -8;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// subf r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82393C14:
	// lbzux r6,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stwu r6,8(r7)
	ea = 8 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82393c14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393C14;
loc_82393C20:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x82393c54
	if (!ctx.cr6.gt) goto loc_82393C54;
	// addi r10,r31,-2
	ctx.r10.s64 = r31.s64 + -2;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82393C3C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82393c3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393C3C;
loc_82393C54:
	// lwzx r11,r27,r30
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,-4(r28)
	REX_STORE_U32(r28.u32 + -4, ctx.r11.u32);
	// ble cr6,0x82393c80
	if (!ctx.cr6.gt) goto loc_82393C80;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_82393C70:
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stbux r7,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82393c70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393C70;
loc_82393C80:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x82393bf0
	if (!ctx.cr0.eq) goto loc_82393BF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82393d4c
	if (!ctx.cr6.gt) goto loc_82393D4C;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r29,r10,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_82393CB0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82393ce0
	if (!ctx.cr6.gt) goto loc_82393CE0;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r30,-8
	ctx.r8.s64 = r30.s64 + -8;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82393CD4:
	// lbzux r7,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stwu r7,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82393cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393CD4;
loc_82393CE0:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x82393d14
	if (!ctx.cr6.gt) goto loc_82393D14;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82393CFC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82393cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393CFC;
loc_82393D14:
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,-4(r31)
	REX_STORE_U32(r31.u32 + -4, ctx.r11.u32);
	// ble cr6,0x82393d40
	if (!ctx.cr6.gt) goto loc_82393D40;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r10,r3,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r3.u64;
loc_82393D30:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbux r8,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82393d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82393D30;
loc_82393D40:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bne 0x82393cb0
	if (!ctx.cr0.eq) goto loc_82393CB0;
loc_82393D4C:
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82397F00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82397F08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// addi r29,r11,8
	r29.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// stb r7,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r7.u8);
	// beq cr6,0x82397f44
	if (ctx.cr6.eq) goto loc_82397F44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233ff78
	ctx.lr = 0x82397F3C;
	sub_8233FF78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82397F44:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// rlwinm r10,r11,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
	// slw r11,r9,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r7,15387
	ctx.r5.s64 = ctx.r7.s64 + 15387;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233feb8
	ctx.lr = 0x82397F70;
	sub_8233FEB8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397f98
	if (ctx.cr6.eq) goto loc_82397F98;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82397bf8
	ctx.lr = 0x82397F8C;
	sub_82397BF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82397F98:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8239B068) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,204(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8239b0e0
	if (!ctx.cr6.eq) goto loc_8239B0E0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8239b0d4
	if (ctx.cr6.eq) goto loc_8239B0D4;
	// lwz r10,2988(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2988);
	// addi r3,r8,-8
	ctx.r3.s64 = ctx.r8.s64 + -8;
	// lwz r5,220(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239B0BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// lwz r8,1912(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1912);
	// sth r9,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// lwz r3,1912(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1912);
	// b 0x8239b12c
	goto loc_8239B12C;
loc_8239B0D4:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8239b12c
	goto loc_8239B12C;
loc_8239B0E0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8239b120
	if (ctx.cr6.eq) goto loc_8239B120;
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,2988(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2988);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,220(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239B108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// sth r8,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r8.u16);
	// lwz r7,1916(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1916);
	// sth r8,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// lwz r3,1916(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1916);
	// b 0x8239b12c
	goto loc_8239B12C;
loc_8239B120:
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_8239B12C:
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

DEFINE_REX_FUNC(sub_823A4B90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r31,r9,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,140(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823a4bc8
	if (ctx.cr6.eq) goto loc_823A4BC8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r30,r9,1
	r30.s64 = ctx.r9.s64 + 1;
	// b 0x823a4bd0
	goto loc_823A4BD0;
loc_823A4BC8:
	// li r3,-8
	ctx.r3.s64 = -8;
	// rlwinm r30,r9,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_823A4BD0:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x823a4c68
	if (ctx.cr6.eq) goto loc_823A4C68;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bge cr6,0x823a4c08
	if (!ctx.cr6.lt) goto loc_823A4C08;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// b 0x823a4c1c
	goto loc_823A4C1C;
loc_823A4C08:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// ble cr6,0x823a4c1c
	if (!ctx.cr6.gt) goto loc_823A4C1C;
	// subf r9,r9,r31
	ctx.r9.u64 = r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823A4C1C:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bge cr6,0x823a4c44
	if (!ctx.cr6.lt) goto loc_823A4C44;
	// subf r9,r8,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823A4C44:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// ble cr6,0x823a4c6c
	if (!ctx.cr6.gt) goto loc_823A4C6C;
	// subf r9,r8,r30
	ctx.r9.u64 = r30.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823A4C68:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_823A4C6C:
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A6538) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r9,r10,8024
	ctx.r9.s64 = ctx.r10.s64 + 8024;
	// rlwinm r8,r11,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,1796(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1796);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a65a4
	if (ctx.cr6.eq) goto loc_823A65A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a659c
	if (!ctx.cr6.gt) goto loc_823A659C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x823a65a0
	goto loc_823A65A0;
loc_823A659C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_823A65A0:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_823A65A4:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a65c8
	if (!ctx.cr6.gt) goto loc_823A65C8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823A65C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823AB3C8) {
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
	// bl 0x822d4e6c
	ctx.lr = 0x823AB3D0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,24688(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r25,r9,8
	r25.s64 = ctx.r9.s64 + 8;
	// addi r11,r24,11429
	ctx.r11.s64 = r24.s64 + 11429;
	// rlwinm r22,r11,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r22,r3
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab430
	if (ctx.cr6.eq) goto loc_823AB430;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r24,11437
	ctx.r9.s64 = r24.s64 + 11437;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,45788
	ctx.r7.u64 = ctx.r10.u64 | 45788;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r8,45792
	ctx.r5.u64 = ctx.r8.u64 | 45792;
	// stwx r11,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwzx r4,r6,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stwx r4,r3,r5
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_823AB430:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r23,r11,15387
	r23.s64 = ctx.r11.s64 + 15387;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x8233feb8
	ctx.lr = 0x823AB448;
	sub_8233FEB8(ctx, base);
	// stwx r3,r22,r31
	REX_STORE_U32(r22.u32 + r31.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ab460
	if (!ctx.cr6.eq) goto loc_823AB460;
loc_823AB454:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_823AB460:
	// addi r26,r3,512
	r26.s64 = ctx.r3.s64 + 512;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r26,-2
	r28.s64 = r26.s64 + -2;
	// addi r27,r26,2
	r27.s64 = r26.s64 + 2;
loc_823AB470:
	// lwz r11,21792(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21792);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ab494
	if (!ctx.cr6.lt) goto loc_823AB494;
	// lwz r11,21808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21808);
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
	// b 0x823ab4bc
	goto loc_823AB4BC;
loc_823AB494:
	// lwz r10,21812(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21812);
	// lwz r11,21800(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21800);
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
loc_823AB4BC:
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x824903b8
	ctx.lr = 0x823AB4CC;
	sub_824903B8(ctx, base);
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x824903b8
	ctx.lr = 0x823AB4E4;
	sub_824903B8(ctx, base);
	// extsh r11,r21
	ctx.r11.s64 = r21.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sthu r11,2(r28)
	ea = 2 + r28.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r28.u32 = ea;
	// sthu r10,-2(r27)
	ea = -2 + r27.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	r27.u32 = ea;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(r30.s32, 256, ctx.xer);
	// blt cr6,0x823ab470
	if (ctx.cr6.lt) goto loc_823AB470;
	// lwz r11,420(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 420);
	// li r4,-256
	ctx.r4.s64 = -256;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x824903b8
	ctx.lr = 0x823AB514;
	sub_824903B8(ctx, base);
	// sth r3,-512(r26)
	REX_STORE_U16(r26.u32 + -512, ctx.r3.u16);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233feb8
	ctx.lr = 0x823AB528;
	sub_8233FEB8(ctx, base);
	// addi r10,r24,11437
	ctx.r10.s64 = r24.s64 + 11437;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r25,r10,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r25,r31
	REX_STORE_U32(r25.u32 + r31.u32, ctx.r3.u32);
	// beq cr6,0x823ab454
	if (ctx.cr6.eq) goto loc_823AB454;
	// addi r26,r3,128
	r26.s64 = ctx.r3.s64 + 128;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r26,-2
	r28.s64 = r26.s64 + -2;
	// addi r27,r26,2
	r27.s64 = r26.s64 + 2;
loc_823AB54C:
	// lwz r11,21796(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21796);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ab578
	if (!ctx.cr6.lt) goto loc_823AB578;
	// lwz r11,21808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21808);
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
	// b 0x823ab5b0
	goto loc_823AB5B0;
loc_823AB578:
	// lwz r11,21812(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21812);
	// lwz r9,21804(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 21804);
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
loc_823AB5B0:
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x824903b8
	ctx.lr = 0x823AB5C0;
	sub_824903B8(ctx, base);
	// sthu r3,2(r28)
	ea = 2 + r28.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	r28.u32 = ea;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x824903b8
	ctx.lr = 0x823AB5D8;
	sub_824903B8(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// sthu r10,-2(r27)
	ea = -2 + r27.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	r27.u32 = ea;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(r30.s32, 64, ctx.xer);
	// blt cr6,0x823ab54c
	if (ctx.cr6.lt) goto loc_823AB54C;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// li r4,-128
	ctx.r4.s64 = -128;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// bl 0x824903b8
	ctx.lr = 0x823AB600;
	sub_824903B8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// sth r3,-128(r26)
	REX_STORE_U16(r26.u32 + -128, ctx.r3.u16);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwzx r6,r22,r31
	ctx.r6.u64 = REX_LOAD_U32(r22.u32 + r31.u32);
	// ori r9,r11,45788
	ctx.r9.u64 = ctx.r11.u64 | 45788;
	// stwx r6,r31,r9
	REX_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// ori r7,r10,45792
	ctx.r7.u64 = ctx.r10.u64 | 45792;
	// lwzx r5,r25,r31
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r5,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_823B3828) {
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
	// bl 0x822d4e84
	ctx.lr = 0x823B3830;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r5,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x823b3858
	if (!ctx.cr6.lt) goto loc_823B3858;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
loc_823B3858:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x823b3b58
	if (ctx.cr6.lt) goto loc_823B3B58;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3b58
	if (ctx.cr6.eq) goto loc_823B3B58;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b3b58
	if (ctx.cr6.eq) goto loc_823B3B58;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823b3b58
	if (ctx.cr6.eq) goto loc_823B3B58;
	// lis r9,22101
	ctx.r9.s64 = 1448411136;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lis r5,12338
	ctx.r5.s64 = 808583168;
	// ori r27,r9,22857
	r27.u64 = ctx.r9.u64 | 22857;
	// ori r3,r5,13385
	ctx.r3.u64 = ctx.r5.u64 | 13385;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// beq cr6,0x823b38dc
	if (ctx.cr6.eq) goto loc_823B38DC;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x823b38dc
	if (ctx.cr6.eq) goto loc_823B38DC;
	// lis r9,12593
	ctx.r9.s64 = 825294848;
	// ori r5,r9,13392
	ctx.r5.u64 = ctx.r9.u64 | 13392;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823b38dc
	if (ctx.cr6.eq) goto loc_823B38DC;
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r10,r5,r30
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(r30.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x823b38f8
	goto loc_823B38F8;
loc_823B38DC:
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r10,r30
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// srawi r5,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 3;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
loc_823B38F8:
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x823b3b58
	if (!ctx.cr6.eq) goto loc_823B3B58;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823b3b58
	if (ctx.cr6.eq) goto loc_823B3B58;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823b3b58
	if (ctx.cr6.eq) goto loc_823B3B58;
	// lwz r29,60(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823b3b58
	if (ctx.cr6.eq) goto loc_823B3B58;
	// lwz r28,32(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823b3b58
	if (!ctx.cr6.eq) goto loc_823B3B58;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823b3b58
	if (!ctx.cr6.eq) goto loc_823B3B58;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823b3b58
	if (!ctx.cr6.eq) goto loc_823B3B58;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823b3b58
	if (!ctx.cr6.eq) goto loc_823B3B58;
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823b39e4
	if (ctx.cr6.eq) goto loc_823B39E4;
	// lis r8,12889
	ctx.r8.s64 = 844693504;
	// ori r7,r8,21849
	ctx.r7.u64 = ctx.r8.u64 | 21849;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823b39a8
	if (!ctx.cr6.eq) goto loc_823B39A8;
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823b3994
	if (ctx.cr6.eq) goto loc_823B3994;
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r8,r8,4552
	ctx.r8.s64 = ctx.r8.s64 + 4552;
	// addi r7,r7,5256
	ctx.r7.s64 = ctx.r7.s64 + 5256;
	// b 0x823b39dc
	goto loc_823B39DC;
loc_823B3994:
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r8,r8,3336
	ctx.r8.s64 = ctx.r8.s64 + 3336;
	// addi r7,r7,4032
	ctx.r7.s64 = ctx.r7.s64 + 4032;
	// b 0x823b39dc
	goto loc_823B39DC;
loc_823B39A8:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x823b39e4
	if (ctx.cr6.eq) goto loc_823B39E4;
	// lis r8,12850
	ctx.r8.s64 = 842137600;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// ori r7,r8,13392
	ctx.r7.u64 = ctx.r8.u64 | 13392;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823b39cc
	if (!ctx.cr6.eq) goto loc_823B39CC;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
loc_823B39CC:
	// lis r8,-32197
	ctx.r8.s64 = -2110062592;
	// lis r7,-32197
	ctx.r7.s64 = -2110062592;
	// addi r8,r8,6672
	ctx.r8.s64 = ctx.r8.s64 + 6672;
	// addi r7,r7,7880
	ctx.r7.s64 = ctx.r7.s64 + 7880;
loc_823B39DC:
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
loc_823B39E4:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r7.u32);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r8.s32, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bne cr6,0x823b3a2c
	if (!ctx.cr6.eq) goto loc_823B3A2C;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823b3a2c
	if (!ctx.cr6.eq) goto loc_823B3A2C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x822d4fa0
	ctx.lr = 0x823B3A20;
	sub_822D4FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823B3A2C:
	// lwz r30,28(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// bne cr6,0x823b3a74
	if (!ctx.cr6.eq) goto loc_823B3A74;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823b3a5c
	if (!ctx.cr6.eq) goto loc_823B3A5C;
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bge cr6,0x823b3a6c
	if (!ctx.cr6.lt) goto loc_823B3A6C;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x823b3a6c
	if (ctx.cr6.eq) goto loc_823B3A6C;
	// b 0x823b3a74
	goto loc_823B3A74;
loc_823B3A5C:
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r27.s32, ctx.xer);
	// beq cr6,0x823b3a6c
	if (ctx.cr6.eq) goto loc_823B3A6C;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x823b3a74
	if (!ctx.cr6.eq) goto loc_823B3A74;
loc_823B3A6C:
	// stw r6,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r6.u32);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
loc_823B3A74:
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823b3a98
	if (!ctx.cr6.eq) goto loc_823B3A98;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823b3ad4
	if (!ctx.cr6.eq) goto loc_823B3AD4;
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x823b3ae4
	if (!ctx.cr6.lt) goto loc_823B3AE4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x823b3ae4
	if (ctx.cr6.eq) goto loc_823B3AE4;
loc_823B3A98:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823b3b4c
	if (!ctx.cr6.eq) goto loc_823B3B4C;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b3b28
	if (!ctx.cr6.eq) goto loc_823B3B28;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823b3b08
	if (ctx.cr6.eq) goto loc_823B3B08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b25d8
	ctx.lr = 0x823B3AC8;
	sub_823B25D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823B3AD4:
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r27.s32, ctx.xer);
	// beq cr6,0x823b3ae4
	if (ctx.cr6.eq) goto loc_823B3AE4;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x823b3a98
	if (!ctx.cr6.eq) goto loc_823B3A98;
loc_823B3AE4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r4,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r4.u32);
	// stw r7,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b3b4c
	if (ctx.cr6.eq) goto loc_823B3B4C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823b3b4c
	if (!ctx.cr6.eq) goto loc_823B3B4C;
	// b 0x823b3b38
	goto loc_823B3B38;
loc_823B3B08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b3b28
	if (!ctx.cr6.eq) goto loc_823B3B28;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B3B28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823B3B28:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b3b4c
	if (ctx.cr6.eq) goto loc_823B3B4C;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
loc_823B3B38:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B3B4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823B3B4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823B3B58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823C1A58) {
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
	// bl 0x822d4e50
	ctx.lr = 0x823C1A60;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,372(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r23,31
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r23.s32 >> 31;
	// stw r9,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r3,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// xor r10,r23,r11
	ctx.r10.u64 = r23.u64 ^ ctx.r11.u64;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823c1aac
	if (!ctx.cr6.eq) goto loc_823C1AAC;
	// stw r23,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// b 0x823c1ab4
	goto loc_823C1AB4;
loc_823C1AAC:
	// srawi r11,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	ctx.r11.s64 = r23.s32 >> 1;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_823C1AB4:
	// lwz r28,380(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// srawi r11,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r28.s32 >> 31;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// xor r10,r28,r11
	ctx.r10.u64 = r28.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823c1ad4
	if (ctx.cr6.eq) goto loc_823C1AD4;
	// srawi r6,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r6.s64 = r28.s32 >> 1;
loc_823C1AD4:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r16,356(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r10,r22,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000;
	// lwz r29,364(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r11,r21,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 16) & 0xFFFF0000;
	// lwz r26,396(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r3,r9,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r8,r3,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r31,r16,-1
	r31.s64 = r16.s64 + -1;
	// addi r30,r29,-1
	r30.s64 = r29.s64 + -1;
	// addi r27,r26,1
	r27.s64 = r26.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r25,0
	r25.s64 = 0;
	// clrlwi r24,r27,30
	r24.u64 = r27.u32 & 0x3;
	// andc r9,r31,r9
	ctx.r9.u64 = r31.u64 & ~ctx.r9.u64;
	// andc r8,r30,r8
	ctx.r8.u64 = r30.u64 & ~ctx.r8.u64;
	// ori r27,r25,32768
	r27.u64 = r25.u64 | 32768;
	// divw r25,r7,r31
	r25.u64 = uint32_t((r31.s32 && !(ctx.r7.s32 == INT32_MIN && r31.s32 == -1)) ? ctx.r7.s32 / r31.s32 : 0);
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r15,r3,r30
	r15.u64 = uint32_t((r30.s32 && !(ctx.r3.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r3.s32 / r30.s32 : 0);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x823c1bbc
	if (!ctx.cr6.eq) goto loc_823C1BBC;
	// srawi r9,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r9.s64 = r29.s32 >> 1;
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	r31.s64 = temp.s64;
	// clrlwi r8,r31,30
	ctx.r8.u64 = r31.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823c1bbc
	if (!ctx.cr6.eq) goto loc_823C1BBC;
	// srawi r11,r16,1
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x1) != 0);
	ctx.r11.s64 = r16.s32 >> 1;
	// li r30,17
	r30.s64 = 17;
	// rlwinm r24,r15,1,0,30
	r24.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r18,r25,1,0,30
	r18.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// addi r3,r26,-3
	ctx.r3.s64 = r26.s64 + -3;
	// bl 0x823c09c0
	ctx.lr = 0x823C1B8C;
	sub_823C09C0(ctx, base);
	// lwz r3,404(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r3,-3
	ctx.r3.s64 = ctx.r3.s64 + -3;
	// bl 0x823c09c0
	ctx.lr = 0x823C1BB4;
	sub_823C09C0(ctx, base);
	// lwz r17,116(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x823c1c78
	goto loc_823C1C78;
loc_823C1BBC:
	// srawi r9,r15,4
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xF) != 0);
	ctx.r9.s64 = r15.s32 >> 4;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mr r24,r27
	r24.u64 = r27.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r18,r27,r8
	r18.u64 = ctx.r8.u64 - r27.u64;
	// cmpw cr6,r18,r27
	ctx.cr6.compare<int32_t>(r18.s32, r27.s32, ctx.xer);
	// blt cr6,0x823c1c78
	if (ctx.cr6.lt) goto loc_823C1C78;
	// srawi r11,r25,4
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xF) != 0);
	ctx.r11.s64 = r25.s32 >> 4;
	// lwz r23,404(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// rlwinm r19,r15,1,0,30
	r19.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r28,r27,r10
	r28.u64 = ctx.r10.u64 - r27.u64;
loc_823C1BFC:
	// srawi r9,r24,17
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = r24.s32 >> 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x823c1c58
	if (ctx.cr6.lt) goto loc_823C1C58;
	// mullw r3,r9,r5
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r31,r3,r20
	r31.u64 = ctx.r3.u64 + r20.u64;
	// add r30,r7,r23
	r30.u64 = ctx.r7.u64 + r23.u64;
	// rlwinm r29,r25,1,0,30
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_823C1C24:
	// srawi r9,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 17;
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r14,r3,r9
	r14.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r28.s32, ctx.xer);
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// lbzx r14,r14,r4
	r14.u64 = REX_LOAD_U8(r14.u32 + ctx.r4.u32);
	// stbx r14,r8,r26
	REX_STORE_U8(ctx.r8.u32 + r26.u32, r14.u8);
	// stbx r9,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ble cr6,0x823c1c24
	if (!ctx.cr6.gt) goto loc_823C1C24;
	// lwz r29,364(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r14,292(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_823C1C58:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r24,r19,r24
	r24.u64 = r19.u64 + r24.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r24,r18
	ctx.cr6.compare<int32_t>(r24.s32, r18.s32, ctx.xer);
	// ble cr6,0x823c1bfc
	if (!ctx.cr6.gt) goto loc_823C1BFC;
	// lwz r19,300(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r23,372(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r28,380(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
loc_823C1C78:
	// addi r11,r14,1
	ctx.r11.s64 = r14.s64 + 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823c1cd0
	if (!ctx.cr6.eq) goto loc_823C1CD0;
	// clrlwi r11,r29,30
	ctx.r11.u64 = r29.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c1cd0
	if (!ctx.cr6.eq) goto loc_823C1CD0;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r5,340(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// stw r15,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r15.u32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r14,-3
	ctx.r3.s64 = r14.s64 + -3;
	// bl 0x823c09c0
	ctx.lr = 0x823C1CC8;
	sub_823C09C0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea0
	return;
loc_823C1CD0:
	// srawi r11,r15,4
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xF) != 0);
	ctx.r11.s64 = r15.s32 >> 4;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r27,r9
	r29.u64 = ctx.r9.u64 - r27.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x823c1d78
	if (ctx.cr6.lt) goto loc_823C1D78;
	// srawi r11,r25,4
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xF) != 0);
	ctx.r11.s64 = r25.s32 >> 4;
	// rlwinm r31,r15,1,0,30
	r31.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r30,r23,1,0,30
	r30.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r17
	ctx.r10.u64 = ctx.r11.u64 + r17.u64;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// subf r4,r27,r10
	ctx.r4.u64 = ctx.r10.u64 - r27.u64;
loc_823C1D0C:
	// add r11,r3,r15
	ctx.r11.u64 = ctx.r3.u64 + r15.u64;
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// srawi r6,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r27.s32, ctx.xer);
	// blt cr6,0x823c1d68
	if (ctx.cr6.lt) goto loc_823C1D68;
	// lwz r7,340(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// add r5,r8,r23
	ctx.r5.u64 = ctx.r8.u64 + r23.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mullw r7,r9,r7
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r6,r26
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
	// add r7,r7,r19
	ctx.r7.u64 = ctx.r7.u64 + r19.u64;
	// add r6,r9,r19
	ctx.r6.u64 = ctx.r9.u64 + r19.u64;
loc_823C1D44:
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lbzx r26,r7,r9
	r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stbx r26,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r26.u8);
	// stbx r9,r5,r10
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// ble cr6,0x823c1d44
	if (!ctx.cr6.gt) goto loc_823C1D44;
loc_823C1D68:
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// ble cr6,0x823c1d0c
	if (!ctx.cr6.gt) goto loc_823C1D0C;
loc_823C1D78:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823CD320) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823cd290
	sub_823CD290(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CD368) {
	REX_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x823cdd08
	sub_823CDD08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823CD538) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1572(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1572);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cd560
	if (ctx.cr6.eq) goto loc_823CD560;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,68
	ctx.r3.s64 = 68;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823CD560:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CD948) {
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
	// bl 0x824d4aac
	ctx.lr = 0x823CD958;
	__imp__NtClearEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cd968
	if (ctx.cr0.lt) goto loc_823CD968;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823cd970
	goto loc_823CD970;
loc_823CD968:
	// bl 0x8220a840
	ctx.lr = 0x823CD96C;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CD970:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CDC10) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8220c188
	ctx.lr = 0x823CDC2C;
	sub_8220C188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d4aec
	ctx.lr = 0x823CDC34;
	__imp__ExTerminateThread(ctx, base);
}

DEFINE_REX_FUNC(sub_823CDDE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x824d417c
	ctx.lr = 0x823CDE00;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,4384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4384);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CDE34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823cde74
	if (ctx.cr0.lt) goto loc_823CDE74;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// ld r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// std r10,4(r31)
	REX_STORE_U64(r31.u32 + 4, ctx.r10.u64);
	// std r9,12(r31)
	REX_STORE_U64(r31.u32 + 12, ctx.r9.u64);
	// std r8,20(r31)
	REX_STORE_U64(r31.u32 + 20, ctx.r8.u64);
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r6,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// b 0x823cde7c
	goto loc_823CDE7C;
loc_823CDE74:
	// bl 0x8220a840
	ctx.lr = 0x823CDE78;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CDE7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CEE08) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e5c
	ctx.lr = 0x823CEE10;
	// lis r9,257
	ctx.r9.s64 = 16842752;
	// lis r8,771
	ctx.r8.s64 = 50528256;
	// ori r9,r9,514
	ctx.r9.u64 = ctx.r9.u64 | 514;
	// lis r6,1799
	ctx.r6.s64 = 117899264;
	// lis r7,1285
	ctx.r7.s64 = 84213760;
	// stw r9,12008(r3)
	REX_STORE_U32(ctx.r3.u32 + 12008, ctx.r9.u32);
	// ori r8,r8,1028
	ctx.r8.u64 = ctx.r8.u64 | 1028;
	// ori r7,r7,1542
	ctx.r7.u64 = ctx.r7.u64 | 1542;
	// ori r9,r6,2056
	ctx.r9.u64 = ctx.r6.u64 | 2056;
	// stw r8,12012(r3)
	REX_STORE_U32(ctx.r3.u32 + 12012, ctx.r8.u32);
	// lis r5,2313
	ctx.r5.s64 = 151584768;
	// stw r7,12016(r3)
	REX_STORE_U32(ctx.r3.u32 + 12016, ctx.r7.u32);
	// lis r4,2827
	ctx.r4.s64 = 185270272;
	// stw r9,12020(r3)
	REX_STORE_U32(ctx.r3.u32 + 12020, ctx.r9.u32);
	// lis r31,3341
	r31.s64 = 218955776;
	// ori r8,r5,2570
	ctx.r8.u64 = ctx.r5.u64 | 2570;
	// ori r7,r4,3084
	ctx.r7.u64 = ctx.r4.u64 | 3084;
	// ori r9,r31,3598
	ctx.r9.u64 = r31.u64 | 3598;
	// stw r8,12024(r3)
	REX_STORE_U32(ctx.r3.u32 + 12024, ctx.r8.u32);
	// lis r11,4369
	ctx.r11.s64 = 286326784;
	// stw r7,12028(r3)
	REX_STORE_U32(ctx.r3.u32 + 12028, ctx.r7.u32);
	// lis r30,3855
	r30.s64 = 252641280;
	// stw r9,12032(r3)
	REX_STORE_U32(ctx.r3.u32 + 12032, ctx.r9.u32);
	// ori r11,r11,4369
	ctx.r11.u64 = ctx.r11.u64 | 4369;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r30,4112
	ctx.r8.u64 = r30.u64 | 4112;
	// stw r11,12040(r3)
	REX_STORE_U32(ctx.r3.u32 + 12040, ctx.r11.u32);
	// li r7,-2
	ctx.r7.s64 = -2;
	// stw r10,12004(r3)
	REX_STORE_U32(ctx.r3.u32 + 12004, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r8,12036(r3)
	REX_STORE_U32(ctx.r3.u32 + 12036, ctx.r8.u32);
	// stw r11,12044(r3)
	REX_STORE_U32(ctx.r3.u32 + 12044, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,12048(r3)
	REX_STORE_U32(ctx.r3.u32 + 12048, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,12052(r3)
	REX_STORE_U32(ctx.r3.u32 + 12052, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,12056(r3)
	REX_STORE_U32(ctx.r3.u32 + 12056, ctx.r7.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r9,12060(r3)
	REX_STORE_U32(ctx.r3.u32 + 12060, ctx.r9.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r10,12064(r3)
	REX_STORE_U32(ctx.r3.u32 + 12064, ctx.r10.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r8,12068(r3)
	REX_STORE_U32(ctx.r3.u32 + 12068, ctx.r8.u32);
	// stw r6,12072(r3)
	REX_STORE_U32(ctx.r3.u32 + 12072, ctx.r6.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// li r6,46
	ctx.r6.s64 = 46;
	// stw r5,12076(r3)
	REX_STORE_U32(ctx.r3.u32 + 12076, ctx.r5.u32);
	// stw r11,12080(r3)
	REX_STORE_U32(ctx.r3.u32 + 12080, ctx.r11.u32);
	// li r5,62
	ctx.r5.s64 = 62;
	// stw r7,12084(r3)
	REX_STORE_U32(ctx.r3.u32 + 12084, ctx.r7.u32);
	// li r11,94
	ctx.r11.s64 = 94;
	// stw r9,12088(r3)
	REX_STORE_U32(ctx.r3.u32 + 12088, ctx.r9.u32);
	// li r7,126
	ctx.r7.s64 = 126;
	// stw r10,12092(r3)
	REX_STORE_U32(ctx.r3.u32 + 12092, ctx.r10.u32);
	// li r9,190
	ctx.r9.s64 = 190;
	// li r10,254
	ctx.r10.s64 = 254;
	// stw r8,12096(r3)
	REX_STORE_U32(ctx.r3.u32 + 12096, ctx.r8.u32);
	// stw r6,12100(r3)
	REX_STORE_U32(ctx.r3.u32 + 12100, ctx.r6.u32);
	// li r8,382
	ctx.r8.s64 = 382;
	// li r6,510
	ctx.r6.s64 = 510;
	// stw r5,12104(r3)
	REX_STORE_U32(ctx.r3.u32 + 12104, ctx.r5.u32);
	// stw r11,12108(r3)
	REX_STORE_U32(ctx.r3.u32 + 12108, ctx.r11.u32);
	// li r5,766
	ctx.r5.s64 = 766;
	// stw r7,12112(r3)
	REX_STORE_U32(ctx.r3.u32 + 12112, ctx.r7.u32);
	// li r11,1022
	ctx.r11.s64 = 1022;
	// stw r9,12116(r3)
	REX_STORE_U32(ctx.r3.u32 + 12116, ctx.r9.u32);
	// li r7,1534
	ctx.r7.s64 = 1534;
	// stw r10,12120(r3)
	REX_STORE_U32(ctx.r3.u32 + 12120, ctx.r10.u32);
	// li r9,2046
	ctx.r9.s64 = 2046;
	// li r10,3070
	ctx.r10.s64 = 3070;
	// stw r8,12124(r3)
	REX_STORE_U32(ctx.r3.u32 + 12124, ctx.r8.u32);
	// stw r6,12128(r3)
	REX_STORE_U32(ctx.r3.u32 + 12128, ctx.r6.u32);
	// li r8,4094
	ctx.r8.s64 = 4094;
	// stw r5,12132(r3)
	REX_STORE_U32(ctx.r3.u32 + 12132, ctx.r5.u32);
	// li r6,6142
	ctx.r6.s64 = 6142;
	// stw r11,12136(r3)
	REX_STORE_U32(ctx.r3.u32 + 12136, ctx.r11.u32);
	// stw r7,12140(r3)
	REX_STORE_U32(ctx.r3.u32 + 12140, ctx.r7.u32);
	// stw r9,12144(r3)
	REX_STORE_U32(ctx.r3.u32 + 12144, ctx.r9.u32);
	// stw r10,12148(r3)
	REX_STORE_U32(ctx.r3.u32 + 12148, ctx.r10.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r8,12152(r3)
	REX_STORE_U32(ctx.r3.u32 + 12152, ctx.r8.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r6,12156(r3)
	REX_STORE_U32(ctx.r3.u32 + 12156, ctx.r6.u32);
	// ori r11,r11,49150
	ctx.r11.u64 = ctx.r11.u64 | 49150;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r11,12180(r3)
	REX_STORE_U32(ctx.r3.u32 + 12180, ctx.r11.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,12184(r3)
	REX_STORE_U32(ctx.r3.u32 + 12184, ctx.r10.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r9,r9,32766
	ctx.r9.u64 = ctx.r9.u64 | 32766;
	// ori r11,r8,65534
	ctx.r11.u64 = ctx.r8.u64 | 65534;
	// ori r10,r7,65534
	ctx.r10.u64 = ctx.r7.u64 | 65534;
	// stw r9,12188(r3)
	REX_STORE_U32(ctx.r3.u32 + 12188, ctx.r9.u32);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stw r11,12192(r3)
	REX_STORE_U32(ctx.r3.u32 + 12192, ctx.r11.u32);
	// lis r5,5
	ctx.r5.s64 = 327680;
	// stw r10,12196(r3)
	REX_STORE_U32(ctx.r3.u32 + 12196, ctx.r10.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r9,r6,65534
	ctx.r9.u64 = ctx.r6.u64 | 65534;
	// ori r11,r5,65534
	ctx.r11.u64 = ctx.r5.u64 | 65534;
	// ori r10,r4,65534
	ctx.r10.u64 = ctx.r4.u64 | 65534;
	// stw r9,12200(r3)
	REX_STORE_U32(ctx.r3.u32 + 12200, ctx.r9.u32);
	// lis r31,9
	r31.s64 = 589824;
	// stw r11,12204(r3)
	REX_STORE_U32(ctx.r3.u32 + 12204, ctx.r11.u32);
	// lis r30,11
	r30.s64 = 720896;
	// stw r10,12208(r3)
	REX_STORE_U32(ctx.r3.u32 + 12208, ctx.r10.u32);
	// lis r29,13
	r29.s64 = 851968;
	// ori r9,r31,65534
	ctx.r9.u64 = r31.u64 | 65534;
	// ori r11,r30,65534
	ctx.r11.u64 = r30.u64 | 65534;
	// ori r10,r29,65534
	ctx.r10.u64 = r29.u64 | 65534;
	// stw r9,12212(r3)
	REX_STORE_U32(ctx.r3.u32 + 12212, ctx.r9.u32);
	// lis r28,15
	r28.s64 = 983040;
	// stw r11,12216(r3)
	REX_STORE_U32(ctx.r3.u32 + 12216, ctx.r11.u32);
	// lis r27,17
	r27.s64 = 1114112;
	// stw r10,12220(r3)
	REX_STORE_U32(ctx.r3.u32 + 12220, ctx.r10.u32);
	// lis r26,19
	r26.s64 = 1245184;
	// ori r9,r28,65534
	ctx.r9.u64 = r28.u64 | 65534;
	// ori r11,r27,65534
	ctx.r11.u64 = r27.u64 | 65534;
	// ori r10,r26,65534
	ctx.r10.u64 = r26.u64 | 65534;
	// stw r9,12224(r3)
	REX_STORE_U32(ctx.r3.u32 + 12224, ctx.r9.u32);
	// lis r25,21
	r25.s64 = 1376256;
	// stw r11,12228(r3)
	REX_STORE_U32(ctx.r3.u32 + 12228, ctx.r11.u32);
	// lis r24,23
	r24.s64 = 1507328;
	// stw r10,12232(r3)
	REX_STORE_U32(ctx.r3.u32 + 12232, ctx.r10.u32);
	// lis r23,25
	r23.s64 = 1638400;
	// li r19,8190
	r19.s64 = 8190;
	// li r18,12286
	r18.s64 = 12286;
	// ori r9,r25,65534
	ctx.r9.u64 = r25.u64 | 65534;
	// stw r19,12160(r3)
	REX_STORE_U32(ctx.r3.u32 + 12160, r19.u32);
	// ori r11,r24,65534
	ctx.r11.u64 = r24.u64 | 65534;
	// stw r18,12164(r3)
	REX_STORE_U32(ctx.r3.u32 + 12164, r18.u32);
	// ori r10,r23,65534
	ctx.r10.u64 = r23.u64 | 65534;
	// stw r9,12236(r3)
	REX_STORE_U32(ctx.r3.u32 + 12236, ctx.r9.u32);
	// lis r22,27
	r22.s64 = 1769472;
	// stw r11,12240(r3)
	REX_STORE_U32(ctx.r3.u32 + 12240, ctx.r11.u32);
	// lis r21,29
	r21.s64 = 1900544;
	// stw r10,12244(r3)
	REX_STORE_U32(ctx.r3.u32 + 12244, ctx.r10.u32);
	// lis r20,31
	r20.s64 = 2031616;
	// li r17,16382
	r17.s64 = 16382;
	// li r19,24574
	r19.s64 = 24574;
	// li r18,32766
	r18.s64 = 32766;
	// stw r17,12168(r3)
	REX_STORE_U32(ctx.r3.u32 + 12168, r17.u32);
	// ori r9,r22,65534
	ctx.r9.u64 = r22.u64 | 65534;
	// stw r19,12172(r3)
	REX_STORE_U32(ctx.r3.u32 + 12172, r19.u32);
	// ori r11,r21,65534
	ctx.r11.u64 = r21.u64 | 65534;
	// stw r18,12176(r3)
	REX_STORE_U32(ctx.r3.u32 + 12176, r18.u32);
	// ori r10,r20,65534
	ctx.r10.u64 = r20.u64 | 65534;
	// stw r9,12248(r3)
	REX_STORE_U32(ctx.r3.u32 + 12248, ctx.r9.u32);
	// stw r11,12252(r3)
	REX_STORE_U32(ctx.r3.u32 + 12252, ctx.r11.u32);
	// stw r10,12256(r3)
	REX_STORE_U32(ctx.r3.u32 + 12256, ctx.r10.u32);
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_823D7B68) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x823D7B70;
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
	// b 0x823d7c54
	goto loc_823D7C54;
loc_823D7B94:
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
	// bge cr6,0x823d7c38
	if (!ctx.cr6.lt) goto loc_823D7C38;
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
loc_823D7BD0:
	// lhz r26,6(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r25,6(r10)
	r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r4,r26,0,22,26
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x3E0;
	// lhzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rlwinm r31,r25,0,22,26
	r31.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x3E0;
	// rlwinm r29,r9,0,22,26
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E0;
	// andi. r5,r8,31775
	ctx.r5.u64 = ctx.r8.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// andi. r9,r9,31775
	ctx.r9.u64 = ctx.r9.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// andi. r5,r25,31775
	ctx.r5.u64 = r25.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r30,r8,0,22,26
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E0;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// andi. r5,r26,31775
	ctx.r5.u64 = r26.u64 & 31775;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// addi r9,r9,2050
	ctx.r9.s64 = ctx.r9.s64 + 2050;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r9,r9,30,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x7FFF;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// rlwinm r9,r9,0,27,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// rlwinm r8,r8,30,22,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3E0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthu r9,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x823d7bd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D7BD0;
loc_823D7C38:
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
loc_823D7C54:
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// blt cr6,0x823d7b94
	if (ctx.cr6.lt) goto loc_823D7B94;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823D9F18) {
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
	// bl 0x822d4e50
	ctx.lr = 0x823D9F20;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r14,0
	r14.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r14.u32);
	// rlwinm r5,r8,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// lwz r4,104(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// mr r28,r14
	r28.u64 = r14.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// mr r20,r14
	r20.u64 = r14.u64;
	// mr r18,r14
	r18.u64 = r14.u64;
	// mr r22,r14
	r22.u64 = r14.u64;
	// rlwinm r31,r7,15,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// rlwinm r30,r11,14,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// bl 0x823d9b90
	ctx.lr = 0x823D9F80;
	sub_823D9B90(ctx, base);
	// mr. r17,r3
	r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq 0x823da684
	if (ctx.cr0.eq) goto loc_823DA684;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x823d9b90
	ctx.lr = 0x823D9FA0;
	sub_823D9B90(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x823da684
	if (ctx.cr0.eq) goto loc_823DA684;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x823d9b90
	ctx.lr = 0x823D9FC0;
	sub_823D9B90(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq 0x823da684
	if (ctx.cr0.eq) goto loc_823DA684;
	// lwz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r7,r9,21845
	ctx.r7.u64 = ctx.r9.u64 | 21845;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r9,0(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 0);
	// add r16,r11,r17
	r16.u64 = ctx.r11.u64 + r17.u64;
	// add r15,r10,r20
	r15.u64 = ctx.r10.u64 + r20.u64;
	// lwz r31,112(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// add r19,r9,r18
	r19.u64 = ctx.r9.u64 + r18.u64;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x823da004
	if (!ctx.cr6.gt) goto loc_823DA004;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823DA004:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823da014
	if (ctx.cr6.gt) goto loc_823DA014;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823DA014:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823cd118
	ctx.lr = 0x823DA01C;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823da058
	if (ctx.cr0.eq) goto loc_823DA058;
	// addic. r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x823da050
	if (ctx.cr0.lt) goto loc_823DA050;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823DA040:
	// stw r14,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r14.u32);
	// stw r14,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r14.u32);
	// stwu r14,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, r14.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823da040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA040;
loc_823DA050:
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// b 0x823da05c
	goto loc_823DA05C;
loc_823DA058:
	// mr r22,r14
	r22.u64 = r14.u64;
loc_823DA05C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x823da678
	if (ctx.cr6.eq) goto loc_823DA678;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x823DA078;
	sub_823CD118(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823da678
	if (ctx.cr0.eq) goto loc_823DA678;
	// addi r7,r18,4
	ctx.r7.s64 = r18.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r19.u32, ctx.xer);
	// bge cr6,0x823da0ec
	if (!ctx.cr6.lt) goto loc_823DA0EC;
loc_823DA094:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823da0e0
	if (!ctx.cr6.lt) goto loc_823DA0E0;
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
loc_823DA0C0:
	// lwzu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bdnz 0x823da0c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA0C0;
loc_823DA0E0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r19
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r19.u32, ctx.xer);
	// blt cr6,0x823da094
	if (ctx.cr6.lt) goto loc_823DA094;
loc_823DA0EC:
	// mr r21,r14
	r21.u64 = r14.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r19.u32, ctx.xer);
	// bge cr6,0x823da670
	if (!ctx.cr6.lt) goto loc_823DA670;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f29,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f29.f64 = double(temp.f32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f30,2024(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2024);
	f30.f64 = double(temp.f32);
loc_823DA114:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r24,r11,4
	r24.s64 = ctx.r11.s64 + 4;
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// bge cr6,0x823da1b8
	if (!ctx.cr6.lt) goto loc_823DA1B8;
loc_823DA12C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r31,r11,12
	r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823da1ac
	if (!ctx.cr6.eq) goto loc_823DA1AC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823da164
	if (ctx.cr6.eq) goto loc_823DA164;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stwx r11,r31,r22
	REX_STORE_U32(r31.u32 + r22.u32, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r14,0(r28)
	REX_STORE_U32(r28.u32 + 0, r14.u32);
	// rotlwi r28,r11,0
	r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x823da18c
	goto loc_823DA18C;
loc_823DA164:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823cd118
	ctx.lr = 0x823DA180;
	sub_823CD118(ctx, base);
	// stwx r3,r31,r22
	REX_STORE_U32(r31.u32 + r22.u32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823da678
	if (ctx.cr0.eq) goto loc_823DA678;
loc_823DA18C:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r22
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r22.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d5870
	ctx.lr = 0x823DA1AC;
	sub_822D5870(ctx, base);
loc_823DA1AC:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// blt cr6,0x823da12c
	if (ctx.cr6.lt) goto loc_823DA12C;
loc_823DA1B8:
	// addi r30,r20,4
	r30.s64 = r20.s64 + 4;
	// mr r27,r14
	r27.u64 = r14.u64;
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(r30.u32, r15.u32, ctx.xer);
	// bge cr6,0x823da340
	if (!ctx.cr6.lt) goto loc_823DA340;
	// addi r26,r17,4
	r26.s64 = r17.s64 + 4;
loc_823DA1CC:
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823DA1F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r16
	ctx.cr6.compare<uint32_t>(r26.u32, r16.u32, ctx.xer);
	// bge cr6,0x823da32c
	if (!ctx.cr6.lt) goto loc_823DA32C;
	// addi r8,r28,8
	ctx.r8.s64 = r28.s64 + 8;
loc_823DA208:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bge cr6,0x823da31c
	if (!ctx.cr6.lt) goto loc_823DA31C;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
loc_823DA220:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// bge cr6,0x823da310
	if (!ctx.cr6.lt) goto loc_823DA310;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
loc_823DA230:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwzx r10,r10,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x823da304
	if (!ctx.cr6.lt) goto loc_823DA304;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
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
loc_823DA274:
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,-8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f13,f0,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f11.f64)));
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
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
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
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
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
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x823da274
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DA274;
loc_823DA304:
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x823da230
	if (ctx.cr6.lt) goto loc_823DA230;
loc_823DA310:
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r5,r23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r23.u32, ctx.xer);
	// blt cr6,0x823da220
	if (ctx.cr6.lt) goto loc_823DA220;
loc_823DA31C:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r16.u32, ctx.xer);
	// blt cr6,0x823da208
	if (ctx.cr6.lt) goto loc_823DA208;
loc_823DA32C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r15
	ctx.cr6.compare<uint32_t>(r29.u32, r15.u32, ctx.xer);
	// blt cr6,0x823da1cc
	if (ctx.cr6.lt) goto loc_823DA1CC;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823DA340:
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// bge cr6,0x823da660
	if (!ctx.cr6.lt) goto loc_823DA660;
loc_823DA34C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r30,r11,r22
	r30.u64 = ctx.r11.u64 + r22.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bne 0x823da654
	if (!ctx.cr0.eq) goto loc_823DA654;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r31,r14
	r31.u64 = r14.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823da648
	if (!ctx.cr6.gt) goto loc_823DA648;
loc_823DA37C:
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mullw r8,r31,r11
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x823da540
	if (ctx.cr6.eq) goto loc_823DA540;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x823da478
	if (ctx.cr6.eq) goto loc_823DA478;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823da604
	if (!ctx.cr6.eq) goto loc_823DA604;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823da604
	if (ctx.cr6.eq) goto loc_823DA604;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_823DA3C0:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x823da3d4
	if (!ctx.cr6.lt) goto loc_823DA3D4;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x823da3e0
	goto loc_823DA3E0;
loc_823DA3D4:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x823da3e0
	if (ctx.cr6.lt) goto loc_823DA3E0;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_823DA3E0:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x823da3f8
	if (!ctx.cr6.lt) goto loc_823DA3F8;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x823da40c
	goto loc_823DA40C;
loc_823DA3F8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x823da408
	if (!ctx.cr6.lt) goto loc_823DA408;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823da40c
	goto loc_823DA40C;
loc_823DA408:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_823DA40C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x823da424
	if (!ctx.cr6.lt) goto loc_823DA424;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x823da438
	goto loc_823DA438;
loc_823DA424:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x823da434
	if (!ctx.cr6.lt) goto loc_823DA434;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823da438
	goto loc_823DA438;
loc_823DA434:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_823DA438:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x823da450
	if (!ctx.cr6.lt) goto loc_823DA450;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x823da45c
	goto loc_823DA45C;
loc_823DA450:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x823da45c
	if (ctx.cr6.lt) goto loc_823DA45C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_823DA45C:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823da3c0
	if (ctx.cr6.lt) goto loc_823DA3C0;
	// b 0x823da604
	goto loc_823DA604;
loc_823DA478:
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823da604
	if (ctx.cr6.eq) goto loc_823DA604;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_823DA488:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x823da49c
	if (!ctx.cr6.lt) goto loc_823DA49C;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x823da4a8
	goto loc_823DA4A8;
loc_823DA49C:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x823da4a8
	if (ctx.cr6.lt) goto loc_823DA4A8;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_823DA4A8:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x823da4c0
	if (!ctx.cr6.lt) goto loc_823DA4C0;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x823da4d4
	goto loc_823DA4D4;
loc_823DA4C0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x823da4d0
	if (!ctx.cr6.lt) goto loc_823DA4D0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823da4d4
	goto loc_823DA4D4;
loc_823DA4D0:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_823DA4D4:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x823da4ec
	if (!ctx.cr6.lt) goto loc_823DA4EC;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x823da500
	goto loc_823DA500;
loc_823DA4EC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x823da4fc
	if (!ctx.cr6.lt) goto loc_823DA4FC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823da500
	goto loc_823DA500;
loc_823DA4FC:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_823DA500:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x823da518
	if (!ctx.cr6.lt) goto loc_823DA518;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x823da524
	goto loc_823DA524;
loc_823DA518:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x823da524
	if (ctx.cr6.lt) goto loc_823DA524;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_823DA524:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823da488
	if (ctx.cr6.lt) goto loc_823DA488;
	// b 0x823da604
	goto loc_823DA604;
loc_823DA540:
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823da604
	if (ctx.cr6.eq) goto loc_823DA604;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_823DA550:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// bge cr6,0x823da564
	if (!ctx.cr6.lt) goto loc_823DA564;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x823da570
	goto loc_823DA570;
loc_823DA564:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x823da570
	if (ctx.cr6.lt) goto loc_823DA570;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_823DA570:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x823da588
	if (!ctx.cr6.lt) goto loc_823DA588;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x823da59c
	goto loc_823DA59C;
loc_823DA588:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x823da598
	if (!ctx.cr6.lt) goto loc_823DA598;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823da59c
	goto loc_823DA59C;
loc_823DA598:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_823DA59C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x823da5b4
	if (!ctx.cr6.lt) goto loc_823DA5B4;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x823da5c8
	goto loc_823DA5C8;
loc_823DA5B4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x823da5c4
	if (!ctx.cr6.lt) goto loc_823DA5C4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823da5c8
	goto loc_823DA5C8;
loc_823DA5C4:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_823DA5C8:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x823da5e0
	if (!ctx.cr6.lt) goto loc_823DA5E0;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x823da5ec
	goto loc_823DA5EC;
loc_823DA5E0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x823da5ec
	if (ctx.cr6.lt) goto loc_823DA5EC;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_823DA5EC:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823da550
	if (ctx.cr6.lt) goto loc_823DA550;
loc_823DA604:
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823DA634;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823da37c
	if (ctx.cr6.lt) goto loc_823DA37C;
loc_823DA648:
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// rotlwi r28,r30,0
	r28.u64 = __builtin_rotateleft32(r30.u32, 0);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_823DA654:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(r29.u32, r23.u32, ctx.xer);
	// blt cr6,0x823da34c
	if (ctx.cr6.lt) goto loc_823DA34C;
loc_823DA660:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(r23.u32, r19.u32, ctx.xer);
	// blt cr6,0x823da114
	if (ctx.cr6.lt) goto loc_823DA114;
loc_823DA670:
	// mr r31,r14
	r31.u64 = r14.u64;
	// b 0x823da68c
	goto loc_823DA68C;
loc_823DA678:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x823da68c
	goto loc_823DA68C;
loc_823DA684:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_823DA68C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x823da6a0
	if (ctx.cr6.eq) goto loc_823DA6A0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823d9e88
	ctx.lr = 0x823DA6A0;
	sub_823D9E88(ctx, base);
loc_823DA6A0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823cd250
	ctx.lr = 0x823DA6AC;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823cd250
	ctx.lr = 0x823DA6B8;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x823cd250
	ctx.lr = 0x823DA6C4;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823cd250
	ctx.lr = 0x823DA6D0;
	sub_823CD250(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823cd250
	ctx.lr = 0x823DA6DC;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823F1300) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823F1308;
	// lbz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823f1598
	if (!ctx.cr6.eq) goto loc_823F1598;
	// lbz r10,9(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// li r31,8
	r31.s64 = 8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x823f1470
	if (!ctx.cr6.lt) goto loc_823F1470;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823f1404
	if (ctx.cr6.eq) goto loc_823F1404;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x823f139c
	if (ctx.cr6.eq) goto loc_823F139C;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x823f1464
	if (!ctx.cr6.eq) goto loc_823F1464;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r11,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f1464
	if (ctx.cr6.eq) goto loc_823F1464;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F1364:
	// lbz r30,0(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r29,r10,24
	r29.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// srw r30,r30,r29
	r30.u64 = r29.u8 & 0x20 ? 0 : (r30.u32 >> (r29.u8 & 0x3F));
	// clrlwi r30,r30,28
	r30.u64 = r30.u32 & 0xF;
	// stb r30,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, r30.u8);
	// bne cr6,0x823f138c
	if (!ctx.cr6.eq) goto loc_823F138C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x823f1390
	goto loc_823F1390;
loc_823F138C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_823F1390:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x823f1364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F1364;
	// b 0x823f1464
	goto loc_823F1464;
loc_823F139C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subfic r30,r8,3
	ctx.xer.ca = ctx.r8.u32 <= 3;
	r30.u64 = static_cast<uint64_t>(3) - ctx.r8.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f1464
	if (ctx.cr6.eq) goto loc_823F1464;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F13CC:
	// lbz r30,0(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r29,r10,24
	r29.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// srw r30,r30,r29
	r30.u64 = r29.u8 & 0x20 ? 0 : (r30.u32 >> (r29.u8 & 0x3F));
	// clrlwi r30,r30,30
	r30.u64 = r30.u32 & 0x3;
	// stb r30,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, r30.u8);
	// bne cr6,0x823f13f4
	if (!ctx.cr6.eq) goto loc_823F13F4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x823f13f8
	goto loc_823F13F8;
loc_823F13F4:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_823F13F8:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x823f13cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F13CC;
	// b 0x823f1464
	goto loc_823F1464;
loc_823F1404:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r30,r8,29
	r30.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// subfic r10,r30,7
	ctx.xer.ca = r30.u32 <= 7;
	ctx.r10.u64 = static_cast<uint64_t>(7) - r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f1464
	if (ctx.cr6.eq) goto loc_823F1464;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F1430:
	// lbz r30,0(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// clrlwi r29,r10,24
	r29.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// srw r30,r30,r29
	r30.u64 = r29.u8 & 0x20 ? 0 : (r30.u32 >> (r29.u8 & 0x3F));
	// clrlwi r30,r30,31
	r30.u64 = r30.u32 & 0x1;
	// stb r30,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, r30.u8);
	// bne cr6,0x823f1458
	if (!ctx.cr6.eq) goto loc_823F1458;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x823f145c
	goto loc_823F145C;
loc_823F1458:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823F145C:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x823f1430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F1430;
loc_823F1464:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stb r31,9(r3)
	REX_STORE_U8(ctx.r3.u32 + 9, r31.u8);
	// stb r31,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, r31.u8);
loc_823F1470:
	// lbz r10,9(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x823f1598
	if (!ctx.cr6.eq) goto loc_823F1598;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq cr6,0x823f1518
	if (ctx.cr6.eq) goto loc_823F1518;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// beq cr6,0x823f1504
	if (ctx.cr6.eq) goto loc_823F1504;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823F14A8:
	// lbz r11,-1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// li r4,255
	ctx.r4.s64 = 255;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823f14bc
	if (!ctx.cr6.lt) goto loc_823F14BC;
	// lbzx r4,r11,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
loc_823F14BC:
	// stb r4,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r9,2(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// stbu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// lbzu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// lbzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// stbu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// bdnz 0x823f14a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F14A8;
loc_823F1504:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x823f1588
	goto loc_823F1588;
loc_823F1518:
	// mulli r7,r11,3
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// add r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f1578
	if (ctx.cr6.eq) goto loc_823F1578;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
loc_823F1538:
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r9,2(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,-1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// lbzu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mulli r9,r9,3
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// lbzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// stbu r9,-1(r10)
	ea = -1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x823f1538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F1538;
loc_823F1578:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
loc_823F1588:
	// stb r9,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r9.u8);
	// stb r10,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stb r11,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r31,9(r3)
	REX_STORE_U8(ctx.r3.u32 + 9, r31.u8);
loc_823F1598:
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823F9FF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823FA000;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x8247d550
	ctx.lr = 0x823FA024;
	sub_8247D550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fa04c
	if (ctx.cr6.eq) goto loc_823FA04C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,65
	ctx.r10.s64 = 65;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FA04C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FA04C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8247c8b8
	ctx.lr = 0x823FA060;
	sub_8247C8B8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x823fa088
	if (ctx.cr6.eq) goto loc_823FA088;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,66
	ctx.r10.s64 = 66;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823FA088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FA088:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823FBA80) {
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
	// bl 0x822d4e70
	ctx.lr = 0x823FBA88;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FBAAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// stw r3,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r3.u32);
	// lis r8,-32192
	ctx.r8.s64 = -2109734912;
	// li r27,0
	r27.s64 = 0;
	// addi r7,r9,-22048
	ctx.r7.s64 = ctx.r9.s64 + -22048;
	// addi r6,r8,-17936
	ctx.r6.s64 = ctx.r8.s64 + -17936;
	// stw r27,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, r27.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// beq cr6,0x823fbb94
	if (ctx.cr6.eq) goto loc_823FBB94;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823fbb6c
	if (!ctx.cr6.gt) goto loc_823FBB6C;
	// addi r30,r11,-52
	r30.s64 = ctx.r11.s64 + -52;
	// addi r26,r3,68
	r26.s64 = ctx.r3.s64 + 68;
loc_823FBAF4:
	// lwz r4,64(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823fbb10
	if (ctx.cr6.eq) goto loc_823FBB10;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
loc_823FBB10:
	// lwz r25,80(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r24,60(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwzu r3,84(r30)
	ea = 84 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r23,4(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x823f6cf8
	ctx.lr = 0x823FBB24;
	sub_823F6CF8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f6cf8
	ctx.lr = 0x823FBB34;
	sub_823F6CF8(ctx, base);
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x823FBB58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823fbaf4
	if (ctx.cr6.lt) goto loc_823FBAF4;
loc_823FBB6C:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// addi r9,r11,-21360
	ctx.r9.s64 = ctx.r11.s64 + -21360;
	// addi r8,r10,-20752
	ctx.r8.s64 = ctx.r10.s64 + -20752;
	// addi r7,r29,72
	ctx.r7.s64 = r29.s64 + 72;
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// stw r8,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r8.u32);
	// stw r7,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_823FBB94:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823FBBB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r3,128
	ctx.r7.s64 = ctx.r3.s64 + 128;
	// stw r3,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r3.u32);
	// addi r6,r3,256
	ctx.r6.s64 = ctx.r3.s64 + 256;
	// addi r5,r3,384
	ctx.r5.s64 = ctx.r3.s64 + 384;
	// stw r7,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r7.u32);
	// addi r4,r3,512
	ctx.r4.s64 = ctx.r3.s64 + 512;
	// stw r6,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r6.u32);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r5,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r5.u32);
	// lis r8,-32192
	ctx.r8.s64 = -2109734912;
	// stw r4,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r4.u32);
	// addi r11,r3,640
	ctx.r11.s64 = ctx.r3.s64 + 640;
	// addi r10,r3,768
	ctx.r10.s64 = ctx.r3.s64 + 768;
	// addi r7,r3,896
	ctx.r7.s64 = ctx.r3.s64 + 896;
	// stw r11,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r11.u32);
	// addi r6,r3,1024
	ctx.r6.s64 = ctx.r3.s64 + 1024;
	// stw r10,56(r29)
	REX_STORE_U32(r29.u32 + 56, ctx.r10.u32);
	// addi r5,r3,1152
	ctx.r5.s64 = ctx.r3.s64 + 1152;
	// stw r7,60(r29)
	REX_STORE_U32(r29.u32 + 60, ctx.r7.u32);
	// addi r4,r9,27816
	ctx.r4.s64 = ctx.r9.s64 + 27816;
	// stw r6,64(r29)
	REX_STORE_U32(r29.u32 + 64, ctx.r6.u32);
	// addi r3,r8,-22032
	ctx.r3.s64 = ctx.r8.s64 + -22032;
	// stw r5,68(r29)
	REX_STORE_U32(r29.u32 + 68, ctx.r5.u32);
	// stw r4,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r4.u32);
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// stw r27,16(r29)
	REX_STORE_U32(r29.u32 + 16, r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_82401DA8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e88
	ctx.lr = 0x82401DB0;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f30
	ctx.lr = 0x82401DB8;
	// li r31,8
	r31.s64 = 8;
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r8,80(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// addi r10,r5,110
	ctx.r10.s64 = ctx.r5.s64 + 110;
	// lis r5,-32247
	ctx.r5.s64 = -2113339392;
	// lis r4,-32247
	ctx.r4.s64 = -2113339392;
	// lis r3,-32247
	ctx.r3.s64 = -2113339392;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// lis r31,-32255
	r31.s64 = -2113863680;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// lfs f10,7476(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,220
	ctx.r8.s64 = ctx.r8.s64 + 220;
	// lfs f11,7472(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 7472);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,-260
	ctx.r11.s64 = ctx.r1.s64 + -260;
	// lfs f12,7468(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 7468);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-30704(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -30704);
	ctx.f0.f64 = double(temp.f32);
loc_82401DF8:
	// lhz r5,-94(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + -94);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82401ea4
	if (!ctx.cr6.eq) goto loc_82401EA4;
	// lhz r3,-78(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -78);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82401ea4
	if (!ctx.cr6.eq) goto loc_82401EA4;
	// lhz r3,-62(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -62);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82401ea4
	if (!ctx.cr6.eq) goto loc_82401EA4;
	// lhz r3,-46(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -46);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82401ea4
	if (!ctx.cr6.eq) goto loc_82401EA4;
	// lhz r3,-30(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -30);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82401ea4
	if (!ctx.cr6.eq) goto loc_82401EA4;
	// lhz r3,-14(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + -14);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82401ea4
	if (!ctx.cr6.eq) goto loc_82401EA4;
	// lhz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82401ea4
	if (!ctx.cr6.eq) goto loc_82401EA4;
	// lhz r5,-110(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + -110);
	// lfs f13,-220(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -220);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,-368(r1)
	REX_STORE_U64(ctx.r1.u32 + -368, ctx.r3.u64);
	// lfd f9,-368(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,-92(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -92, temp.u32);
	// stfs f6,-60(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stfs f6,-28(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f6,68(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f6,100(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f6,132(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82402038
	goto loc_82402038;
loc_82401EA4:
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lhz r30,-62(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + -62);
	// lhz r4,-14(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -14);
	// lfs f9,-156(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -156);
	ctx.f9.f64 = double(temp.f32);
	// std r3,-416(r1)
	REX_STORE_U64(ctx.r1.u32 + -416, ctx.r3.u64);
	// extsh r3,r30
	ctx.r3.s64 = r30.s16;
	// lhz r28,-78(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + -78);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r3,-384(r1)
	REX_STORE_U64(ctx.r1.u32 + -384, ctx.r3.u64);
	// lfd f1,-384(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -384);
	// extsh r3,r28
	ctx.r3.s64 = r28.s16;
	// std r4,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.r4.u64);
	// lhz r5,-110(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + -110);
	// lfd f8,-392(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -392);
	// std r3,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.r3.u64);
	// lfd f26,-432(r1)
	f26.u64 = REX_LOAD_U64(ctx.r1.u32 + -432);
	// lhz r31,-46(r10)
	r31.u64 = REX_LOAD_U16(ctx.r10.u32 + -46);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lhz r29,-30(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + -30);
	// lfd f5,-416(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -416);
	// std r4,-376(r1)
	REX_STORE_U64(ctx.r1.u32 + -376, ctx.r4.u64);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// extsh r4,r29
	ctx.r4.s64 = r29.s16;
	// lfd f7,-376(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -376);
	// std r31,-400(r1)
	REX_STORE_U64(ctx.r1.u32 + -400, r31.u64);
	// lfd f6,-400(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -400);
	// std r4,-408(r1)
	REX_STORE_U64(ctx.r1.u32 + -408, ctx.r4.u64);
	// lfd f31,-408(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -408);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lhzu r5,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// fcfid f26,f26
	f26.f64 = double(f26.s64);
	// lfs f4,-28(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -28);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// std r4,-424(r1)
	REX_STORE_U64(ctx.r1.u32 + -424, ctx.r4.u64);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// lfd f27,-424(r1)
	f27.u64 = REX_LOAD_U64(ctx.r1.u32 + -424);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// lfs f3,-220(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -220);
	ctx.f3.f64 = double(temp.f32);
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// lfs f2,-92(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -92);
	ctx.f2.f64 = double(temp.f32);
	// fcfid f27,f27
	f27.f64 = double(f27.s64);
	// lfs f28,-188(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -188);
	f28.f64 = double(temp.f32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lfs f30,-124(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -124);
	f30.f64 = double(temp.f32);
	// frsp f26,f26
	f26.f64 = double(float(f26.f64));
	// lfs f29,-60(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -60);
	f29.f64 = double(temp.f32);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfsu f13,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// frsp f31,f31
	f31.f64 = double(float(f31.f64));
	// frsp f27,f27
	f27.f64 = double(float(f27.f64));
	// fmuls f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f9,f26,f9
	ctx.f9.f64 = double(float(f26.f64 * ctx.f9.f64));
	// fmuls f3,f7,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f2,f6,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f7,f5,f28
	ctx.f7.f64 = double(float(ctx.f5.f64 * f28.f64));
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmuls f8,f31,f29
	ctx.f8.f64 = double(float(f31.f64 * f29.f64));
	// fmuls f6,f27,f13
	ctx.f6.f64 = double(float(f27.f64 * ctx.f13.f64));
	// fadds f5,f4,f9
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fsubs f4,f9,f4
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fadds f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fsubs f9,f3,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fadds f3,f8,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fsubs f2,f8,f1
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// fmsubs f1,f4,f0,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, -ctx.f5.f64)));
	// fadds f8,f5,f13
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fsubs f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsubs f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f4,f1,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fsubs f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fadds f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f7,f13,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fadds f6,f9,f3
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fsubs f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fadds f7,f6,f8
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f7,-92(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -92, temp.u32);
	// fnmsubs f7,f2,f11,f9
	ctx.f7.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f11.f64, -ctx.f9.f64)));
	// fmsubs f2,f13,f10,f9
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, -ctx.f9.f64)));
	// fsubs f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// stfs f8,132(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// fsubs f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmsubs f9,f3,f0,f13
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fadds f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f8,-60(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// fsubs f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f7,100(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// fadds f6,f2,f9
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fadds f4,f9,f1
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f4,-28(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// fsubs f3,f1,f9
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// stfs f3,68(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// fadds f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f2,36(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fsubs f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_82402038:
	// bdnz 0x82401df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82401DF8;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-380
	ctx.r11.s64 = ctx.r1.s64 + -380;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8240204C:
	// lfs f9,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lwzu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// lfs f13,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f6,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f2,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f9,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f6,f4,f2
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fadds f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fsubs f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fadds f13,f3,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fmsubs f9,f1,f0,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f3.f64)));
	// fsubs f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fadds f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fsubs f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fadds f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fsubs f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fadds f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fsubs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,-424(r1)
	REX_STORE_U64(ctx.r1.u32 + -424, ctx.f5.u64);
	// fctiwz f5,f13
	ctx.f5.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f5,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f5.u64);
	// lwz r4,-428(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// fnmsubs f6,f6,f11,f1
	ctx.f6.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f1.f64)));
	// lwz r5,-420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -420);
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// fsubs f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// srawi r5,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 3;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmsubs f2,f2,f10,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, -ctx.f1.f64)));
	// clrlwi r3,r5,22
	ctx.r3.u64 = ctx.r5.u32 & 0x3FF;
	// srawi r4,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 3;
	// clrlwi r5,r4,22
	ctx.r5.u64 = ctx.r4.u32 & 0x3FF;
	// lbzx r4,r3,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// fsubs f1,f4,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fadds f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stbx r4,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r4.u8);
	// fmsubs f8,f8,f0,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, -ctx.f3.f64)));
	// lbzx r3,r5,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r3,7(r10)
	REX_STORE_U8(ctx.r10.u32 + 7, ctx.r3.u8);
	// fctiwz f6,f1
	ctx.f6.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f6,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f6.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// fctiwz f5,f13
	ctx.f5.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f5,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f5.u64);
	// lwz r8,-428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// fadds f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f3.u64);
	// fsubs f1,f9,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// srawi r4,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 3;
	// lwz r8,-428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// fadds f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// clrlwi r3,r4,22
	ctx.r3.u64 = ctx.r4.u32 & 0x3FF;
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lbzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// srawi r8,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	// stb r3,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// srawi r5,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 3;
	// clrlwi r4,r8,22
	ctx.r4.u64 = ctx.r8.u32 & 0x3FF;
	// fctiwz f9,f1
	ctx.f9.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// clrlwi r3,r5,22
	ctx.r3.u64 = ctx.r5.u32 & 0x3FF;
	// stfd f9,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f9.u64);
	// lwz r8,-428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// lbzx r5,r4,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r5,6(r10)
	REX_STORE_U8(ctx.r10.u32 + 6, ctx.r5.u8);
	// lbzx r4,r3,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// stb r4,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// fsubs f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fadds f7,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// clrlwi r5,r8,22
	ctx.r5.u64 = ctx.r8.u32 & 0x3FF;
	// lbzx r4,r5,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f6.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,-432(r1)
	REX_STORE_U64(ctx.r1.u32 + -432, ctx.f5.u64);
	// lwz r8,-428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -428);
	// stb r4,5(r10)
	REX_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// clrlwi r4,r8,22
	ctx.r4.u64 = ctx.r8.u32 & 0x3FF;
	// clrlwi r8,r3,22
	ctx.r8.u64 = ctx.r3.u32 & 0x3FF;
	// lbzx r5,r4,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r5,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r5.u8);
	// lbzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stb r4,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// bdnz 0x8240204c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8240204C;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f7c
	ctx.lr = 0x824021F8;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82418118) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x82418120;
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
	// beq cr6,0x82418154
	if (ctx.cr6.eq) goto loc_82418154;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82418150;
	sub_82413040(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82418154:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82418170
	if (ctx.cr6.eq) goto loc_82418170;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x8241816C;
	sub_82413DD0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82418170:
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
	// lfs f31,1996(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 1996);
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
	// bne 0x824181d8
	if (!ctx.cr0.eq) goto loc_824181D8;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x824181e0
	goto loc_824181E0;
loc_824181D8:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_824181E0:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824181f8
	if (ctx.cr6.eq) goto loc_824181F8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x824181F8;
	sub_823DC658(ctx, base);
loc_824181F8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824183fc
	if (!ctx.cr6.gt) goto loc_824183FC;
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r29,-32255
	r29.s64 = -2113863680;
	// lis r28,-32254
	r28.s64 = -2113798144;
	// lfd f8,-9120(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + -9120);
	// lfs f9,16288(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16288);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-7224(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -7224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,21348(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 21348);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,23032(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 23032);
	ctx.f7.f64 = double(temp.f32);
loc_82418258:
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
	// beq cr6,0x82418380
	if (ctx.cr6.eq) goto loc_82418380;
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
loc_82418380:
	// cmpwi cr6,r9,127
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 127, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x82418390
	if (ctx.cr6.lt) goto loc_82418390;
	// li r11,127
	ctx.r11.s64 = 127;
loc_82418390:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x824183a8
	if (!ctx.cr6.gt) goto loc_824183A8;
	// cmpwi cr6,r9,127
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 127, ctx.xer);
	// blt cr6,0x824183ac
	if (ctx.cr6.lt) goto loc_824183AC;
	// li r9,127
	ctx.r9.s64 = 127;
	// b 0x824183ac
	goto loc_824183AC;
loc_824183A8:
	// li r9,-127
	ctx.r9.s64 = -127;
loc_824183AC:
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x824183bc
	if (ctx.cr6.lt) goto loc_824183BC;
	// li r11,127
	ctx.r11.s64 = 127;
loc_824183BC:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x824183d4
	if (!ctx.cr6.gt) goto loc_824183D4;
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// blt cr6,0x824183d8
	if (ctx.cr6.lt) goto loc_824183D8;
	// li r5,127
	ctx.r5.s64 = 127;
	// b 0x824183d8
	goto loc_824183D8;
loc_824183D4:
	// li r5,-127
	ctx.r5.s64 = -127;
loc_824183D8:
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
	// blt cr6,0x82418258
	if (ctx.cr6.lt) goto loc_82418258;
loc_824183FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8241F738) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x8241F740;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241f780
	if (!ctx.cr6.eq) goto loc_8241F780;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-18872
	ctx.r6.s64 = ctx.r11.s64 + -18872;
	// addi r5,r10,16968
	ctx.r5.s64 = ctx.r10.s64 + 16968;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,1726
	ctx.r7.s64 = 1726;
	// bl 0x8240e308
	ctx.lr = 0x8241F780;
	sub_8240E308(ctx, base);
loc_8241F780:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e880
	ctx.lr = 0x8241F790;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8241f7f8
	if (!ctx.cr6.eq) goto loc_8241F7F8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f7b4
	if (ctx.cr6.eq) goto loc_8241F7B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F7B4;
	sub_8240E930(ctx, base);
loc_8241F7B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f7f0
	if (ctx.cr6.eq) goto loc_8241F7F0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241f7f0
	if (ctx.cr6.eq) goto loc_8241F7F0;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bctrl 
	ctx.lr = 0x8241F7F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F7F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241f854
	goto loc_8241F854;
loc_8241F7F8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241f814
	if (ctx.cr6.eq) goto loc_8241F814;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241F814;
	sub_8240E930(ctx, base);
loc_8241F814:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241f850
	if (ctx.cr6.eq) goto loc_8241F850;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241f850
	if (ctx.cr6.eq) goto loc_8241F850;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,34
	ctx.r6.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,136(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bctrl 
	ctx.lr = 0x8241F850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241F850:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241F854:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82421840) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82421AC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82421AD0;
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
	// bne cr6,0x82421b0c
	if (!ctx.cr6.eq) goto loc_82421B0C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// addi r6,r11,-18872
	ctx.r6.s64 = ctx.r11.s64 + -18872;
	// addi r5,r10,16968
	ctx.r5.s64 = ctx.r10.s64 + 16968;
	// addi r4,r9,16880
	ctx.r4.s64 = ctx.r9.s64 + 16880;
	// li r7,4195
	ctx.r7.s64 = 4195;
	// bl 0x8240e308
	ctx.lr = 0x82421B0C;
	sub_8240E308(ctx, base);
loc_82421B0C:
	// li r4,167
	ctx.r4.s64 = 167;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412bf8
	ctx.lr = 0x82421B18;
	sub_82412BF8(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82421b5c
	if (ctx.cr6.eq) goto loc_82421B5C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82421b5c
	if (ctx.cr6.eq) goto loc_82421B5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e418
	ctx.lr = 0x82421B34;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18752
	ctx.r4.s64 = ctx.r10.s64 + -18752;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,75
	ctx.r6.s64 = 75;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,300(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 300);
	// bctrl 
	ctx.lr = 0x82421B5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82421B5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824267D8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
loc_8242680C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,-8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x8242680c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242680C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82424fa0
	ctx.lr = 0x82426858;
	sub_82424FA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82426870
	if (ctx.cr0.lt) goto loc_82426870;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824260a8
	ctx.lr = 0x82426870;
	sub_824260A8(ctx, base);
loc_82426870:
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

DEFINE_REX_FUNC(sub_82428BF8) {
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
	// bl 0x82428a88
	ctx.lr = 0x82428C10;
	sub_82428A88(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,-3616
	ctx.r9.s64 = ctx.r9.s64 + -3616;
	// stw r11,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82429668) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82429670;
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
	// bl 0x82412d18
	ctx.lr = 0x8242968C;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x824296ac
	if (ctx.cr0.eq) goto loc_824296AC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82429108
	ctx.lr = 0x824296A8;
	sub_82429108(ctx, base);
	// b 0x824296b0
	goto loc_824296B0;
loc_824296AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824296B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82429E50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82429E58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,1452(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 1452);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82412d18
	ctx.lr = 0x82429E78;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82429e9c
	if (ctx.cr0.eq) goto loc_82429E9C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824281c8
	ctx.lr = 0x82429E98;
	sub_824281C8(ctx, base);
	// b 0x82429ea0
	goto loc_82429EA0;
loc_82429E9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429EA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C4B8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,9620
	ctx.r11.s64 = ctx.r11.s64 + 9620;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8242c4f4
	if (ctx.cr6.eq) goto loc_8242C4F4;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d438c
	ctx.lr = 0x8242C4EC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x8242C4F4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8242C4F4:
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

DEFINE_REX_FUNC(sub_8242D218) {
	REX_FUNC_PROLOGUE();
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242d26c
	if (ctx.cr6.eq) goto loc_8242D26C;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// beq cr6,0x8242d248
	if (ctx.cr6.eq) goto loc_8242D248;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// b 0x8242d250
	goto loc_8242D250;
loc_8242D248:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
loc_8242D250:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,116(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// blr 
	return;
loc_8242D26C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242E600) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8242E608;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,9620
	ctx.r11.s64 = ctx.r11.s64 + 9620;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r29,63
	r29.s64 = 63;
	// stw r30,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r30.u32);
loc_8242E630:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8242e5a0
	ctx.lr = 0x8242E638;
	sub_8242E5A0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,240
	r28.s64 = r28.s64 + 240;
	// bge 0x8242e630
	if (!ctx.cr0.lt) goto loc_8242E630;
	// addi r11,r31,15400
	ctx.r11.s64 = r31.s64 + 15400;
	// stw r30,15400(r31)
	REX_STORE_U32(r31.u32 + 15400, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,15424(r31)
	REX_STORE_U32(r31.u32 + 15424, r30.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r30,15428(r31)
	REX_STORE_U32(r31.u32 + 15428, r30.u32);
	// stw r10,15436(r31)
	REX_STORE_U32(r31.u32 + 15436, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,15404(r31)
	REX_STORE_U32(r31.u32 + 15404, ctx.r11.u32);
	// stw r30,15432(r31)
	REX_STORE_U32(r31.u32 + 15432, r30.u32);
	// stw r30,15408(r31)
	REX_STORE_U32(r31.u32 + 15408, r30.u32);
	// lwz r10,15400(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15400);
	// lwz r11,15404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15404);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,15400(r31)
	REX_STORE_U32(r31.u32 + 15400, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824343D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,22125
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 22125, ctx.xer);
	// bne cr6,0x824343e0
	if (!ctx.cr6.eq) goto loc_824343E0;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_824343E0:
	// cmplwi cr6,r4,43875
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 43875, ctx.xer);
	// bne cr6,0x824343f0
	if (!ctx.cr6.eq) goto loc_824343F0;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_824343F0:
	// cmplwi cr6,r4,48000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 48000, ctx.xer);
	// bne cr6,0x82434400
	if (!ctx.cr6.eq) goto loc_82434400;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82434400:
	// cmplwi cr6,r4,11250
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11250, ctx.xer);
	// bne cr6,0x82434410
	if (!ctx.cr6.eq) goto loc_82434410;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82434410:
	// cmplwi cr6,r4,32250
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32250, ctx.xer);
	// bne cr6,0x82434420
	if (!ctx.cr6.eq) goto loc_82434420;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82434420:
	// cmplwi cr6,r4,24000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24000, ctx.xer);
	// bne cr6,0x82434430
	if (!ctx.cr6.eq) goto loc_82434430;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82434430:
	// cmplwi cr6,r4,16125
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16125, ctx.xer);
	// bne cr6,0x82434440
	if (!ctx.cr6.eq) goto loc_82434440;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82434440:
	// addi r11,r4,-8250
	ctx.r11.s64 = ctx.r4.s64 + -8250;
	// li r10,8
	ctx.r10.s64 = 8;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824350B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824350B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824350E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16632);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82435108
	if (ctx.cr6.lt) goto loc_82435108;
	// lfs f12,240(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82435114
	if (!ctx.cr6.gt) goto loc_82435114;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82435110
	if (!ctx.cr6.lt) goto loc_82435110;
loc_82435108:
	// stfs f13,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x82435114
	goto loc_82435114;
loc_82435110:
	// stfs f12,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82435114:
	// lwz r3,184(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 184);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82435138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82435150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82436C90) {
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
	// bl 0x82435808
	ctx.lr = 0x82436CAC;
	sub_82435808(ctx, base);
	// addi r30,r31,656
	r30.s64 = r31.s64 + 656;
	// b 0x82436cc0
	goto loc_82436CC0;
loc_82436CB4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436cc0
	if (ctx.cr6.eq) goto loc_82436CC0;
	// bl 0x82473600
	ctx.lr = 0x82436CC0;
	sub_82473600(ctx, base);
loc_82436CC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824344e8
	ctx.lr = 0x82436CC8;
	sub_824344E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82436cb4
	if (!ctx.cr0.eq) goto loc_82436CB4;
	// addi r30,r31,696
	r30.s64 = r31.s64 + 696;
	// b 0x82436ce4
	goto loc_82436CE4;
loc_82436CD8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436ce4
	if (ctx.cr6.eq) goto loc_82436CE4;
	// bl 0x82473600
	ctx.lr = 0x82436CE4;
	sub_82473600(ctx, base);
loc_82436CE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824344e8
	ctx.lr = 0x82436CEC;
	sub_824344E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82436cd8
	if (!ctx.cr0.eq) goto loc_82436CD8;
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 568);
	// addi r10,r31,544
	ctx.r10.s64 = r31.s64 + 544;
	// b 0x82436d1c
	goto loc_82436D1C;
loc_82436D00:
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
loc_82436D1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82436d00
	if (!ctx.cr6.eq) goto loc_82436D00;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r31,584
	ctx.r11.s64 = r31.s64 + 584;
	// stw r30,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, r30.u32);
	// stw r30,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r30.u32);
	// lwz r10,608(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 608);
	// b 0x82436d58
	goto loc_82436D58;
loc_82436D3C:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
loc_82436D58:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82436d3c
	if (!ctx.cr6.eq) goto loc_82436D3C;
	// stw r30,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r30.u32);
	// stw r30,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r30.u32);
	// lwz r3,508(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436d7c
	if (ctx.cr6.eq) goto loc_82436D7C;
	// bl 0x824454d8
	ctx.lr = 0x82436D78;
	sub_824454D8(ctx, base);
	// stw r30,508(r31)
	REX_STORE_U32(r31.u32 + 508, r30.u32);
loc_82436D7C:
	// lwz r3,520(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82436d90
	if (ctx.cr6.eq) goto loc_82436D90;
	// bl 0x82473600
	ctx.lr = 0x82436D8C;
	sub_82473600(ctx, base);
	// stw r30,520(r31)
	REX_STORE_U32(r31.u32 + 520, r30.u32);
loc_82436D90:
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

DEFINE_REX_FUNC(sub_82439E08) {
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
	// bl 0x822d4e74
	ctx.lr = 0x82439E10;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,104(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// li r10,256
	ctx.r10.s64 = 256;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// subfic r11,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lwz r7,528(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r6,7936
	ctx.r6.s64 = 7936;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r8,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r6,r11
	ctx.r6.u64 = uint32_t(ctx.r11.u32 ? ctx.r6.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,4
	ctx.r5.s64 = 4;
	// divwu r7,r11,r10
	ctx.r7.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// li r8,512
	ctx.r8.s64 = 512;
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82439E88:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82439ea4
	if (!ctx.cr6.gt) goto loc_82439EA4;
	// rlwinm. r5,r5,31,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// bne 0x82439e88
	if (!ctx.cr0.eq) goto loc_82439E88;
loc_82439EA4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r9,31,1,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r11,r30,12
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x822d6634
	ctx.lr = 0x82439EC4;
	sub_822D6634(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82439f28
	if (ctx.cr6.eq) goto loc_82439F28;
	// addi r7,r30,-1
	ctx.r7.s64 = r30.s64 + -1;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r26,-3
	ctx.r11.s64 = r26.s64 + -3;
loc_82439EE8:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82439f00
	if (!ctx.cr6.eq) goto loc_82439F00;
	// lwz r9,104(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 104);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne 0x82439f04
	if (!ctx.cr0.eq) goto loc_82439F04;
loc_82439F00:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82439F04:
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r4,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r4.u32);
	// stw r8,7(r11)
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r9,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r9.u8);
	// stbu r5,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82439ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439EE8;
loc_82439F28:
	// bl 0x8243b710
	ctx.lr = 0x82439F2C;
	sub_8243B710(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243b728
	ctx.lr = 0x82439F38;
	sub_8243B728(ctx, base);
	// lwz r11,88(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 88);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r11,16052
	ctx.r3.s64 = ctx.r11.s64 + 16052;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82439ce8
	ctx.lr = 0x82439F4C;
	sub_82439CE8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82439f94
	if (!ctx.cr0.eq) goto loc_82439F94;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
loc_82439F5C:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82439f6c
	if (ctx.cr6.eq) goto loc_82439F6C;
	// bl 0x8243c210
	ctx.lr = 0x82439F6C;
	sub_8243C210(ctx, base);
loc_82439F6C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82439ff4
	if (ctx.cr6.eq) goto loc_82439FF4;
	// lwz r11,88(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 88);
	// lwz r9,16256(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16256);
loc_82439F7C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82439fcc
	if (ctx.cr6.eq) goto loc_82439FCC;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82439fd0
	goto loc_82439FD0;
loc_82439F94:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8243c410
	ctx.lr = 0x82439FB0;
	sub_8243C410(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x82439f5c
	if (ctx.cr0.lt) goto loc_82439F5C;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// stw r29,0(r24)
	REX_STORE_U32(r24.u32 + 0, r29.u32);
	// stw r30,0(r25)
	REX_STORE_U32(r25.u32 + 0, r30.u32);
	// b 0x82439ff4
	goto loc_82439FF4;
loc_82439FCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82439FD0:
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82439f7c
	if (ctx.cr6.lt) goto loc_82439F7C;
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82439f7c
	if (!ctx.cr6.lt) goto loc_82439F7C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82439570
	ctx.lr = 0x82439FF4;
	sub_82439570(ctx, base);
loc_82439FF4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82441A78) {
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
	// bl 0x822d4e78
	ctx.lr = 0x82441A80;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441AB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
loc_82441ABC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82441ad4
	if (ctx.cr6.eq) goto loc_82441AD4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82441ad8
	goto loc_82441AD8;
loc_82441AD4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82441AD8:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x82441abc
	if (!ctx.cr6.eq) goto loc_82441ABC;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r6,r29,4
	ctx.r6.s64 = r29.s64 + 4;
	// bne cr6,0x82441af4
	if (!ctx.cr6.eq) goto loc_82441AF4;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82441AF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824601d0
	ctx.lr = 0x82441B28;
	sub_824601D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82441b40
	if (ctx.cr0.lt) goto loc_82441B40;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r11.u32);
loc_82441B40:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82441B54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82444240) {
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
	// lwz r31,8(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8244427c
	if (ctx.cr6.eq) goto loc_8244427C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460e60
	ctx.lr = 0x8244426C;
	sub_82460E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82444274;
	sub_82473600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8244427C:
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

DEFINE_REX_FUNC(sub_82447F28) {
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
	// bl 0x822d4e58
	ctx.lr = 0x82447F30;
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
	// beq cr6,0x82448874
	if (ctx.cr6.eq) goto loc_82448874;
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
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r18,2
	r18.s64 = 2;
	// lfs f29,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
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
loc_82447F98:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82448844
	if (ctx.cr6.gt) goto loc_82448844;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82448130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82448130;
	// bdzf 4*cr6+eq,0x82448320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82448320;
	// bdzf 4*cr6+eq,0x82448844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82448844;
	// bdzf 4*cr6+eq,0x8244882c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8244882C;
	// bne cr6,0x82448494
	if (!ctx.cr6.eq) goto loc_82448494;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82467730
	ctx.lr = 0x82447FC8;
	sub_82467730(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82448850
	if (ctx.cr6.lt) goto loc_82448850;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824480a0
	if (!ctx.cr6.eq) goto loc_824480A0;
	// lwz r3,296(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 296);
	// bl 0x82466cd0
	ctx.lr = 0x82447FE8;
	sub_82466CD0(ctx, base);
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
	// ble cr6,0x82448050
	if (!ctx.cr6.gt) goto loc_82448050;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82448004:
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
	// bl 0x822d5870
	ctx.lr = 0x82448030;
	sub_822D5870(ctx, base);
	// lhz r3,580(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82448004
	if (ctx.cr6.lt) goto loc_82448004;
loc_82448050:
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
	// bgt cr6,0x82448080
	if (ctx.cr6.gt) goto loc_82448080;
	// stw r25,56(r29)
	REX_STORE_U32(r29.u32 + 56, r25.u32);
	// b 0x82448844
	goto loc_82448844;
loc_82448080:
	// lwz r11,512(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 512);
	// stw r23,56(r29)
	REX_STORE_U32(r29.u32 + 56, r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82448844
	if (ctx.cr6.eq) goto loc_82448844;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244809C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82448844
	goto loc_82448844;
loc_824480A0:
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// sth r10,730(r31)
	REX_STORE_U16(r31.u32 + 730, ctx.r10.u16);
	// bne cr6,0x824480d4
	if (!ctx.cr6.eq) goto loc_824480D4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824480d4
	if (ctx.cr6.eq) goto loc_824480D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 320);
	// bl 0x82465470
	ctx.lr = 0x824480C8;
	sub_82465470(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82448850
	if (ctx.cr6.lt) goto loc_82448850;
loc_824480D4:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82448104
	if (!ctx.cr6.eq) goto loc_82448104;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82448104
	if (!ctx.cr6.eq) goto loc_82448104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 320);
	// bl 0x82465470
	ctx.lr = 0x824480F8;
	sub_82465470(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82448850
	if (ctx.cr6.lt) goto loc_82448850;
loc_82448104:
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
	// b 0x82448844
	goto loc_82448844;
loc_82448130:
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
	// bge cr6,0x824482c4
	if (!ctx.cr6.lt) goto loc_824482C4;
loc_82448148:
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
	// ble cr6,0x82448190
	if (!ctx.cr6.gt) goto loc_82448190;
loc_82448180:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82448180
	if (ctx.cr6.gt) goto loc_82448180;
loc_82448190:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,312(r29)
	REX_STORE_U16(r29.u32 + 312, ctx.r11.u16);
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82448218
	if (ctx.cr6.eq) goto loc_82448218;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82448204
	if (ctx.cr6.lt) goto loc_82448204;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824481d0
	if (!ctx.cr6.eq) goto loc_824481D0;
	// bl 0x82302e78
	ctx.lr = 0x824481CC;
	sub_82302E78(ctx, base);
	// b 0x824481d4
	goto loc_824481D4;
loc_824481D0:
	// bl 0x82303028
	ctx.lr = 0x824481D4;
	sub_82303028(ctx, base);
loc_824481D4:
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r20.u32, ctx.xer);
	// bne cr6,0x82448210
	if (!ctx.cr6.eq) goto loc_82448210;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x823193f0
	ctx.lr = 0x824481E8;
	sub_823193F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82448850
	if (ctx.cr6.eq) goto loc_82448850;
	// lwz r11,704(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82448850
	if (ctx.cr6.eq) goto loc_82448850;
	// mr r17,r22
	r17.u64 = r22.u64;
	// b 0x82448218
	goto loc_82448218;
loc_82448204:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82447a60
	ctx.lr = 0x8244820C;
	sub_82447A60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_82448210:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x82448850
	if (ctx.cr6.lt) goto loc_82448850;
loc_82448218:
	// lhz r11,490(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 490);
	// lhz r10,730(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 730);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82448234
	if (!ctx.cr6.gt) goto loc_82448234;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82448234:
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// sth r11,730(r31)
	REX_STORE_U16(r31.u32 + 730, ctx.r11.u16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82448258
	if (!ctx.cr6.eq) goto loc_82448258;
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
loc_82448258:
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
	// bgt cr6,0x8244827c
	if (ctx.cr6.gt) goto loc_8244827C;
	// stw r25,56(r29)
	REX_STORE_U32(r29.u32 + 56, r25.u32);
	// b 0x82448298
	goto loc_82448298;
loc_8244827C:
	// lwz r11,512(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 512);
	// stw r23,56(r29)
	REX_STORE_U32(r29.u32 + 56, r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82448298
	if (ctx.cr6.eq) goto loc_82448298;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82448298:
	// lhz r11,150(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r29)
	REX_STORE_U16(r29.u32 + 150, ctx.r9.u16);
	// lhz r8,580(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82448148
	if (ctx.cr6.lt) goto loc_82448148;
loc_824482C4:
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82448318
	if (ctx.cr6.eq) goto loc_82448318;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82448318
	if (!ctx.cr6.gt) goto loc_82448318;
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
	// blt cr6,0x82448314
	if (ctx.cr6.lt) goto loc_82448314;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82448314:
	// sth r11,730(r31)
	REX_STORE_U16(r31.u32 + 730, ctx.r11.u16);
loc_82448318:
	// stw r16,36(r29)
	REX_STORE_U32(r29.u32 + 36, r16.u32);
	// b 0x82448844
	goto loc_82448844;
loc_82448320:
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
	// bge cr6,0x8244848c
	if (!ctx.cr6.lt) goto loc_8244848C;
loc_82448338:
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
	// beq cr6,0x82448384
	if (ctx.cr6.eq) goto loc_82448384;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82469360
	ctx.lr = 0x82448378;
	sub_82469360(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82448850
	if (ctx.cr6.lt) goto loc_82448850;
loc_82448384:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824483ec
	if (ctx.cr6.eq) goto loc_824483EC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82469888
	ctx.lr = 0x824483A0;
	sub_82469888(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82448850
	if (ctx.cr6.lt) goto loc_82448850;
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8244841c
	if (!ctx.cr6.eq) goto loc_8244841C;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824483d0
	if (ctx.cr6.eq) goto loc_824483D0;
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// b 0x824483d4
	goto loc_824483D4;
loc_824483D0:
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
loc_824483D4:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82315a58
	ctx.lr = 0x824483E8;
	sub_82315A58(ctx, base);
	// b 0x8244841c
	goto loc_8244841C;
loc_824483EC:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82448400
	if (ctx.cr6.eq) goto loc_82448400;
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// b 0x82448404
	goto loc_82448404;
loc_82448400:
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
loc_82448404:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82448418;
	sub_822D5870(ctx, base);
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
loc_8244841C:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82448440
	if (ctx.cr6.eq) goto loc_82448440;
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
	// bl 0x822d4fa0
	ctx.lr = 0x82448440;
	sub_822D4FA0(ctx, base);
loc_82448440:
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
	// lhz r10,150(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 150);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,150(r29)
	REX_STORE_U16(r29.u32 + 150, ctx.r8.u16);
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82448338
	if (ctx.cr6.lt) goto loc_82448338;
loc_8244848C:
	// stw r23,36(r29)
	REX_STORE_U32(r29.u32 + 36, r23.u32);
	// b 0x82448844
	goto loc_82448844;
loc_82448494:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82448538
	if (!ctx.cr6.gt) goto loc_82448538;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_824484AC:
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
	// beq cr6,0x824484fc
	if (ctx.cr6.eq) goto loc_824484FC;
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82448518
	if (!ctx.cr6.eq) goto loc_82448518;
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
	// bl 0x82315a58
	ctx.lr = 0x824484F8;
	sub_82315A58(ctx, base);
	// b 0x82448518
	goto loc_82448518;
loc_824484FC:
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
	// bl 0x822d5870
	ctx.lr = 0x82448514;
	sub_822D5870(ctx, base);
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
loc_82448518:
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x824484ac
	if (ctx.cr6.lt) goto loc_824484AC;
loc_82448538:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// mr r27,r22
	r27.u64 = r22.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824485a0
	if (!ctx.cr6.gt) goto loc_824485A0;
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_8244855C:
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
	// bne cr6,0x8244859c
	if (!ctx.cr6.eq) goto loc_8244859C;
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8244855c
	if (ctx.cr6.lt) goto loc_8244855C;
	// b 0x824485a0
	goto loc_824485A0;
loc_8244859C:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_824485A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82447218
	ctx.lr = 0x824485A8;
	sub_82447218(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82448850
	if (ctx.cr6.lt) goto loc_82448850;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ae30
	ctx.lr = 0x824485C0;
	sub_8231AE30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ae30
	ctx.lr = 0x824485CC;
	sub_8231AE30(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82448694
	if (!ctx.cr6.gt) goto loc_82448694;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8244869c
	if (!ctx.cr6.eq) goto loc_8244869C;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824486a8
	if (!ctx.cr6.gt) goto loc_824486A8;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_824485F8:
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
	// bne cr6,0x82448648
	if (!ctx.cr6.eq) goto loc_82448648;
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
	// bl 0x822d5870
	ctx.lr = 0x82448648;
	sub_822D5870(ctx, base);
loc_82448648:
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
	// bl 0x82464690
	ctx.lr = 0x82448664;
	sub_82464690(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82448850
	if (ctx.cr6.lt) goto loc_82448850;
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x824485f8
	if (ctx.cr6.lt) goto loc_824485F8;
	// b 0x824486a8
	goto loc_824486A8;
loc_82448694:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x824486a8
	if (ctx.cr6.eq) goto loc_824486A8;
loc_8244869C:
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82448818
	if (ctx.cr6.eq) goto loc_82448818;
loc_824486A8:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824486bc
	if (!ctx.cr6.eq) goto loc_824486BC;
	// lfs f30,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	f30.f64 = double(temp.f32);
	// b 0x824486d8
	goto loc_824486D8;
loc_824486BC:
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
loc_824486D8:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82448818
	if (!ctx.cr6.gt) goto loc_82448818;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_824486F0:
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
	// beq cr6,0x8244875c
	if (ctx.cr6.eq) goto loc_8244875C;
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// lwz r10,332(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 332);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r7,328(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r8,56(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 56);
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divw r4,r5,r7
	ctx.r4.u64 = uint32_t((ctx.r7.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r5.s32 / ctx.r7.s32 : 0);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r10,r4,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ble 0x8244875c
	if (!ctx.cr0.gt) goto loc_8244875C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8244874C:
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8244874c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244874C;
loc_8244875C:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82448774
	if (!ctx.cr6.eq) goto loc_82448774;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x824487f8
	if (!ctx.cr6.gt) goto loc_824487F8;
loc_82448774:
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
	// ble cr6,0x824487b0
	if (!ctx.cr6.gt) goto loc_824487B0;
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
	// bl 0x822d5870
	ctx.lr = 0x824487B0;
	sub_822D5870(ctx, base);
loc_824487B0:
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
	ctx.lr = 0x824487F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824487F8:
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x824486f0
	if (ctx.cr6.lt) goto loc_824486F0;
loc_82448818:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82448838
	if (!ctx.cr6.gt) goto loc_82448838;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82448838
	if (!ctx.cr6.eq) goto loc_82448838;
loc_8244882C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82246ca8
	ctx.lr = 0x82448834;
	sub_82246CA8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_82448838:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x82448850
	if (ctx.cr6.lt) goto loc_82448850;
	// stw r19,36(r29)
	REX_STORE_U32(r29.u32 + 36, r19.u32);
loc_82448844:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82447f98
	if (!ctx.cr6.eq) goto loc_82447F98;
loc_82448850:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x82448874
	if (ctx.cr6.eq) goto loc_82448874;
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
	// b 0x822d4ea8
	return;
loc_82448874:
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
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_824733A8) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x824733B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x8242c3b0
	ctx.lr = 0x824733E8;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82473438
	if (ctx.cr0.eq) goto loc_82473438;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,9620
	ctx.r10.s64 = ctx.r10.s64 + 9620;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r8,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// b 0x8247343c
	goto loc_8247343C;
loc_82473438:
	// li r31,0
	r31.s64 = 0;
loc_8247343C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82473450
	if (!ctx.cr6.eq) goto loc_82473450;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8247348c
	goto loc_8247348C;
loc_82473450:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824730b8
	ctx.lr = 0x8247346C;
	sub_824730B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8247347c
	if (ctx.cr0.lt) goto loc_8247347C;
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// b 0x8247348c
	goto loc_8247348C;
loc_8247347C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473028
	ctx.lr = 0x82473484;
	sub_82473028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8247348C;
	sub_82473600(ctx, base);
loc_8247348C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824745D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824745f8
	if (!ctx.cr6.eq) goto loc_824745F8;
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82474610
	goto loc_82474610;
loc_824745F8:
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247460c
	if (ctx.cr6.eq) goto loc_8247460C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82474610
	goto loc_82474610;
loc_8247460C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82474610:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82474F30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82474F38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,184(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,188(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r30,r11,r9
	r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// ble cr6,0x82474fb4
	if (!ctx.cr6.gt) goto loc_82474FB4;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82474f98
	if (!ctx.cr6.eq) goto loc_82474F98;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,536(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 536);
	// lwz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82474F98:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822091c8
	ctx.lr = 0x82474FA8;
	sub_822091C8(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// b 0x82474fdc
	goto loc_82474FDC;
loc_82474FB4:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82474fcc
	if (ctx.cr6.eq) goto loc_82474FCC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822091c8
	ctx.lr = 0x82474FC8;
	sub_822091C8(ctx, base);
	// b 0x82474fd0
	goto loc_82474FD0;
loc_82474FCC:
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
loc_82474FD0:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// mr r30,r29
	r30.u64 = r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
loc_82474FDC:
	// ld r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 200);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// lwz r8,184(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 184);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// std r10,200(r31)
	REX_STORE_U64(r31.u32 + 200, ctx.r10.u64);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,20(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824750fc
	if (!ctx.cr6.eq) goto loc_824750FC;
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824750c4
	if (ctx.cr6.eq) goto loc_824750C4;
	// lwz r10,252(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82475070
	if (!ctx.cr6.eq) goto loc_82475070;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r10,r4,r30
	ctx.r10.u64 = ctx.r4.u64 + r30.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82475070
	if (!ctx.cr6.eq) goto loc_82475070;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r9,536(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 536);
	// lwz r10,532(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822091c8
	ctx.lr = 0x82475058;
	sub_822091C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,536(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 536);
	// lwz r10,532(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82475070:
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82475098
	if (ctx.cr6.eq) goto loc_82475098;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82475098:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824750c4
	if (ctx.cr0.eq) goto loc_824750C4;
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824750c4
	if (ctx.cr6.eq) goto loc_824750C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824750C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824750C4:
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824750dc
	if (ctx.cr0.eq) goto loc_824750DC;
	// std r29,200(r31)
	REX_STORE_U64(r31.u32 + 200, r29.u64);
loc_824750DC:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824750f0
	if (ctx.cr6.eq) goto loc_824750F0;
	// stw r29,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r29.u32);
	// b 0x824750f4
	goto loc_824750F4;
loc_824750F0:
	// bl 0x82473600
	ctx.lr = 0x824750F4;
	sub_82473600(ctx, base);
loc_824750F4:
	// stw r29,184(r31)
	REX_STORE_U32(r31.u32 + 184, r29.u32);
	// stw r29,188(r31)
	REX_STORE_U32(r31.u32 + 188, r29.u32);
loc_824750FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8247F148) {
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
	// bl 0x822d4e7c
	ctx.lr = 0x8247F150;
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x8247f194
	if (!ctx.cr6.eq) goto loc_8247F194;
	// bl 0x822db6f8
	ctx.lr = 0x8247F174;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x8247F180;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8247f264
	goto loc_8247F264;
loc_8247F194:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8247f1ac
	if (ctx.cr6.lt) goto loc_8247F1AC;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r11,-11596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11596);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8247f1d0
	if (ctx.cr6.lt) goto loc_8247F1D0;
loc_8247F1AC:
	// bl 0x822db6f8
	ctx.lr = 0x8247F1B0;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x8247F1BC;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x8247F1C8;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8247f264
	goto loc_8247F264;
loc_8247F1D0:
	// srawi r11,r30,5
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = r30.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,-11584
	r28.s64 = ctx.r10.s64 + -11584;
	// clrlwi r11,r30,27
	ctx.r11.u64 = r30.u32 & 0x1F;
	// mulli r29,r11,72
	r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f1ac
	if (ctx.cr0.eq) goto loc_8247F1AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e5be0
	ctx.lr = 0x8247F204;
	sub_822E5BE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247f234
	if (ctx.cr0.eq) goto loc_8247F234;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8247f088
	ctx.lr = 0x8247F22C;
	sub_8247F088(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x8247f254
	goto loc_8247F254;
loc_8247F234:
	// bl 0x822db6c0
	ctx.lr = 0x8247F238;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6f8
	ctx.lr = 0x8247F244;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_8247F254:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = r31.s64 + 160;
	// bl 0x8247f28c
	ctx.lr = 0x8247F260;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8247F28C(ctx, base);
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_8247F264:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8248B3B8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8248B3C0) {
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
	// bl 0x822d4e70
	ctx.lr = 0x8248B3C8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r26,4(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,0
	r23.s64 = 0;
	// lwz r24,36(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r25,r11,1
	r25.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x8248b5a4
	if (ctx.cr6.eq) goto loc_8248B5A4;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rldicl r10,r11,10,54
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0x3FF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8248b4d8
	if (ctx.cr6.lt) goto loc_8248B4D8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
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
	// bge cr6,0x8248b4d0
	if (!ctx.cr6.lt) goto loc_8248B4D0;
loc_8248B438:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8248b464
	if (ctx.cr6.lt) goto loc_8248B464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8248B454;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8248b438
	if (ctx.cr6.eq) goto loc_8248B438;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8248b51c
	goto loc_8248B51C;
loc_8248B464:
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
loc_8248B4D0:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8248b51c
	goto loc_8248B51C;
loc_8248B4D8:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8248B4E4;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	r30.u64 = ctx.r11.u64 | 32768;
loc_8248B4EC:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82337f50
	ctx.lr = 0x8248B504;
	sub_82337F50(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8248b4ec
	if (ctx.cr6.lt) goto loc_8248B4EC;
loc_8248B51C:
	// mr r22,r29
	r22.u64 = r29.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// bne cr6,0x8248b534
	if (!ctx.cr6.eq) goto loc_8248B534;
loc_8248B528:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
loc_8248B534:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x8248b55c
	if (!ctx.cr0.lt) goto loc_8248B55C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8248B55C;
	sub_823380C8(ctx, base);
loc_8248B55C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// lhzx r9,r11,r24
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + r24.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// clrlwi r26,r9,24
	r26.u64 = ctx.r9.u32 & 0xFF;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// blt cr6,0x8248b590
	if (ctx.cr6.lt) goto loc_8248B590;
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lbzx r8,r9,r26
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + r26.u32);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8248ba68
	goto loc_8248BA68;
loc_8248B590:
	// lwz r9,12(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lbzx r8,r9,r26
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + r26.u32);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x8248ba68
	goto loc_8248BA68;
loc_8248B5A4:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x8248b5cc
	if (!ctx.cr0.lt) goto loc_8248B5CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8248B5CC;
	sub_823380C8(ctx, base);
loc_8248B5CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8248b768
	if (ctx.cr6.eq) goto loc_8248B768;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rldicl r10,r11,10,54
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0x3FF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8248b6b4
	if (ctx.cr6.lt) goto loc_8248B6B4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// bge cr6,0x8248b6ac
	if (!ctx.cr6.lt) goto loc_8248B6AC;
loc_8248B614:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8248b640
	if (ctx.cr6.lt) goto loc_8248B640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x8248B630;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8248b614
	if (ctx.cr6.eq) goto loc_8248B614;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8248b6f8
	goto loc_8248B6F8;
loc_8248B640:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r6,r10,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// neg r6,r10
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
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
loc_8248B6AC:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8248b6f8
	goto loc_8248B6F8;
loc_8248B6B4:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x8248B6C0;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,32768
	r30.u64 = ctx.r11.u64 | 32768;
loc_8248B6C8:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82337f50
	ctx.lr = 0x8248B6E0;
	sub_82337F50(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = r29.u64 + r30.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8248b6c8
	if (ctx.cr6.lt) goto loc_8248B6C8;
loc_8248B6F8:
	// mr r22,r29
	r22.u64 = r29.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// beq cr6,0x8248b528
	if (ctx.cr6.eq) goto loc_8248B528;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// lhzx r10,r11,r24
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r24.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// srawi r30,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	r30.s64 = ctx.r9.s32 >> 8;
	// blt cr6,0x8248b728
	if (ctx.cr6.lt) goto loc_8248B728;
	// lwz r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 24);
	// b 0x8248b72c
	goto loc_8248B72C;
loc_8248B728:
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
loc_8248B72C:
	// lbzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x8248b760
	if (!ctx.cr0.lt) goto loc_8248B760;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8248B760;
	sub_823380C8(ctx, base);
loc_8248B760:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// b 0x8248ba68
	goto loc_8248BA68;
loc_8248B768:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x8248b790
	if (!ctx.cr0.lt) goto loc_8248B790;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8248B790;
	sub_823380C8(ctx, base);
loc_8248B790:
	// lbz r10,1251(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 1251);
	// add r11,r30,r25
	ctx.r11.u64 = r30.u64 + r25.u64;
	// addi r22,r11,-1
	r22.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8248b7b0
	if (ctx.cr6.eq) goto loc_8248B7B0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235f298
	ctx.lr = 0x8248B7AC;
	sub_8235F298(ctx, base);
	// stb r23,1251(r28)
	REX_STORE_U8(r28.u32 + 1251, r23.u8);
loc_8248B7B0:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r27,r23
	r27.u64 = r23.u64;
	// lbz r30,1248(r28)
	r30.u64 = REX_LOAD_U8(r28.u32 + 1248);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x8248b7d4
	if (!ctx.cr6.gt) goto loc_8248B7D4;
	// mr r26,r23
	r26.u64 = r23.u64;
	// b 0x8248b880
	goto loc_8248B880;
loc_8248B7D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8248b7e4
	if (!ctx.cr6.eq) goto loc_8248B7E4;
	// mr r26,r23
	r26.u64 = r23.u64;
	// b 0x8248b880
	goto loc_8248B880;
loc_8248B7E4:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8248b844
	if (!ctx.cr6.gt) goto loc_8248B844;
loc_8248B7EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248b844
	if (ctx.cr6.eq) goto loc_8248B844;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// bge 0x8248b834
	if (!ctx.cr0.lt) goto loc_8248B834;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x8248B834;
	sub_823380C8(ctx, base);
loc_8248B834:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8248b7ec
	if (ctx.cr6.gt) goto loc_8248B7EC;
loc_8248B844:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r6,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r27
	r30.u64 = ctx.r11.u64 + r27.u64;
	// std r4,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// bge 0x8248b87c
	if (!ctx.cr0.lt) goto loc_8248B87C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x8248B87C;
	sub_823380C8(ctx, base);
loc_8248B87C:
	// mr r26,r30
	r26.u64 = r30.u64;
loc_8248B880:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
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
	// bge 0x8248b8a8
	if (!ctx.cr0.lt) goto loc_8248B8A8;
	// bl 0x823380c8
	ctx.lr = 0x8248B8A8;
	sub_823380C8(ctx, base);
loc_8248B8A8:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lbz r30,1247(r28)
	r30.u64 = REX_LOAD_U8(r28.u32 + 1247);
	// mr r27,r23
	r27.u64 = r23.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x8248b990
	if (ctx.cr6.eq) goto loc_8248B990;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x8248b8d8
	if (!ctx.cr6.gt) goto loc_8248B8D8;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x8248ba4c
	goto loc_8248BA4C;
loc_8248B8D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8248b8ec
	if (!ctx.cr6.eq) goto loc_8248B8EC;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x8248ba4c
	goto loc_8248BA4C;
loc_8248B8EC:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8248b94c
	if (!ctx.cr6.gt) goto loc_8248B94C;
loc_8248B8F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248b94c
	if (ctx.cr6.eq) goto loc_8248B94C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// bge 0x8248b93c
	if (!ctx.cr0.lt) goto loc_8248B93C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x8248B93C;
	sub_823380C8(ctx, base);
loc_8248B93C:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8248b8f4
	if (ctx.cr6.gt) goto loc_8248B8F4;
loc_8248B94C:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r6,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r27
	r30.u64 = ctx.r11.u64 + r27.u64;
	// std r4,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// bge 0x8248b984
	if (!ctx.cr0.lt) goto loc_8248B984;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x8248B984;
	sub_823380C8(ctx, base);
loc_8248B984:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x8248ba4c
	goto loc_8248BA4C;
loc_8248B990:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x8248b9a0
	if (!ctx.cr6.gt) goto loc_8248B9A0;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x8248ba4c
	goto loc_8248BA4C;
loc_8248B9A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8248b9b0
	if (!ctx.cr6.eq) goto loc_8248B9B0;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x8248ba4c
	goto loc_8248BA4C;
loc_8248B9B0:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8248ba10
	if (!ctx.cr6.gt) goto loc_8248BA10;
loc_8248B9B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248ba10
	if (ctx.cr6.eq) goto loc_8248BA10;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// bge 0x8248ba00
	if (!ctx.cr0.lt) goto loc_8248BA00;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x8248BA00;
	sub_823380C8(ctx, base);
loc_8248BA00:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8248b9b8
	if (ctx.cr6.gt) goto loc_8248B9B8;
loc_8248BA10:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 0);
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
	// stw r6,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r27
	r30.u64 = ctx.r11.u64 + r27.u64;
	// std r4,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r4.u64);
	// bge 0x8248ba48
	if (!ctx.cr0.lt) goto loc_8248BA48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823380c8
	ctx.lr = 0x8248BA48;
	sub_823380C8(ctx, base);
loc_8248BA48:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8248BA4C:
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r8,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// srawi r23,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	r23.s64 = ctx.r7.s32 >> 8;
	// clrlwi r30,r7,24
	r30.u64 = ctx.r7.u32 & 0xFF;
loc_8248BA68:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8248b528
	if (!ctx.cr6.eq) goto loc_8248B528;
	// rlwinm r11,r23,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 | r22.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | r30.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r4,r5,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// or r3,r4,r26
	ctx.r3.u64 = ctx.r4.u64 | r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_824AED88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x822d4e88
	ctx.lr = 0x824AED90;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r31,1164(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lvx128 v12,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// vsubshs v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824a6648
	ctx.lr = 0x824AEDE4;
	sub_824A6648(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r6,1
	ctx.r6.s64 = 1;
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// vspltish v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lvx128 v8,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r9,r6,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// vslh v8,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x824aeea8
	if (!ctx.cr6.eq) goto loc_824AEEA8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824aef54
	if (!ctx.cr6.gt) goto loc_824AEF54;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_824AEE34:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v9,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// lvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v2,v11,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vadduhm v1,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v31,v1,v6
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v30,v31,v2
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v29,v30,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vor v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x824aee34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AEE34;
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed8
	return;
loc_824AEEA8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824aef54
	if (!ctx.cr6.gt) goto loc_824AEF54;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_824AEEC0:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v7,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v6,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vsldoi v5,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v4,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vadduhm v3,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsldoi v2,v13,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v9,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v13,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v11,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v26,v9,v29
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v0,v28
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v26,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v23,v25,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v13,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v22,v23,v30
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v21,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v12,v21
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v21.u8)));
	// vpkshus128 v59,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor128 v12,v60,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x824aeec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AEEC0;
loc_824AEF54:
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824B3BD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x822d4e7c
	ctx.lr = 0x824B3BD8;
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r29,1012(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1012);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subfic r9,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r9.u64;
	// lvx128 v56,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lvx128 v57,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cntlzw r9,r29
	ctx.r9.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// lvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v31,v57,v56,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r8,r31,r3
	ctx.r8.u64 = r31.u64 + ctx.r3.u64;
	// vperm128 v1,v60,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r31,r3
	ea = (r31.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// and r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 & r30.u64;
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v5,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r26,r1,240
	r26.s64 = ctx.r1.s64 + 240;
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r6,1
	ctx.r6.s64 = 1;
	// vadduhm v1,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// vadduhm v31,v4,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// li r25,4
	r25.s64 = 4;
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v29,v2,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v30,v3,v11
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r7,r6,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// vadduhm v28,v1,v12
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v31,v11
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r6,r25,r30
	ctx.r6.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// vadduhm v25,v30,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsplth v1,v27,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vadduhm v24,v29,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// stvx128 v28,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824b3db8
	if (!ctx.cr6.eq) goto loc_824B3DB8;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v53,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r11,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r31,r3
	r31.u64 = r31.u64 + ctx.r3.u64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v52,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,288
	r29.s64 = ctx.r1.s64 + 288;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,336
	r28.s64 = ctx.r1.s64 + 336;
	// lvx128 v49,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,384
	r27.s64 = ctx.r1.s64 + 384;
	// lvx128 v48,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,432
	r26.s64 = ctx.r1.s64 + 432;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v46,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v5,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v9,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v30,v5,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v29,v4,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v28,v3,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v31,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v27,v30,v11
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v26,v29,v10
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v25,v28,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824B3DB8:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x824b3e34
	if (ctx.cr6.lt) goto loc_824B3E34;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824b3e34
	if (!ctx.cr6.gt) goto loc_824B3E34;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// subf r27,r9,r11
	r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r11,r30,-48
	ctx.r11.s64 = r30.s64 + -48;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_824B3DF4:
	// lbzux r8,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r26,r27,r10
	r26.u64 = REX_LOAD_U8(r27.u32 + ctx.r10.u32);
	// rotlwi r30,r8,1
	r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r28,r26,1
	r28.u64 = __builtin_rotateleft32(r26.u32, 1);
	// add r30,r8,r30
	r30.u64 = ctx.r8.u64 + r30.u64;
	// add r8,r26,r28
	ctx.r8.u64 = r26.u64 + r28.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// extsh r31,r30
	r31.s64 = r30.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r31,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, r31.u16);
	// mr r29,r26
	r29.u64 = r26.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthu r8,96(r11)
	ea = 96 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x824b3df4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B3DF4;
loc_824B3E34:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824b0d48
	ctx.lr = 0x824B3E3C;
	sub_824B0D48(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824D3850) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3870) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r11,r11,25772
	ctx.r11.s64 = ctx.r11.s64 + 25772;
	// stw r11,28096(r10)
	REX_STORE_U32(ctx.r10.u32 + 28096, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D39D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,3380
	ctx.r3.s64 = ctx.r11.s64 + 3380;
	// b 0x82206888
	sub_82206888(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3A38) {
	REX_FUNC_PROLOGUE();
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r8,3472
	ctx.r7.s64 = ctx.r8.s64 + 3472;
	// addi r10,r11,-29256
	ctx.r10.s64 = ctx.r11.s64 + -29256;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,3472(r8)
	REX_STORE_U32(ctx.r8.u32 + 3472, ctx.r10.u32);
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r9,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D3B18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25804
	ctx.r3.s64 = ctx.r11.s64 + 25804;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3BD8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26104
	ctx.r3.s64 = ctx.r11.s64 + 26104;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3CE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26672
	ctx.r3.s64 = ctx.r11.s64 + 26672;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// b 0x8227ac70
	sub_8227AC70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3FC0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002ca
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4120) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010194
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4290) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100e4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4410) {
	REX_FUNC_PROLOGUE();
	// .long 0x201012e
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4590) {
	REX_FUNC_PROLOGUE();
	// .long 0x201008f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4710) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000039
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4890) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000497
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4A10) {
	REX_FUNC_PROLOGUE();
	// .long 0x201013e
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4B90) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100f3
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

